/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: BSD-3-Clause
*/

#include "command-interface.h"

using namespace std;

void* commandInterfaceThread(void* args);

void startCommandInterface(void)
{	
	pthread_t thread;

	pthread_create(&thread, NULL, &commandInterfaceThread, NULL);
}


void* commandInterfaceThread(void* args)
{
	CommandHandler handler;
	KitchenItem* kitchen_item[3];
	
    int ww_id;
	int cmd_id;
	int	item_index = 0;

    kitchen_item[0] = new Hood();
    kitchen_item[1] = new Oven();
    kitchen_item[2] = new Airconditioner();
	
	printf("Command Interface Thread Created!\n");

	for(;;)
	{
		ww_id = handler.getWakeWord();	
		printf("Wakeword arrived!! Id= %d \n\n", ww_id);

		cmd_id = handler.getCommand();
		printf("Command arrived!! Id= %d \n\n", cmd_id);

		item_index = ww_id - 1;
		kitchen_item[item_index]->execute(cmd_id);
	}
}


#!/bin/bash -x

# Copyright 2023 NXP
# SPDX-License-Identifier: BSD-3-Clause

mypath=$(dirname $0)

killall smart-kitchen-gui

sleep 0.1s

$mypath/smart-kitchen-gui &


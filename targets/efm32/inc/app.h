/*
 * Copyright (C) 2018 SoloKeys, Inc. <https://solokeys.com/>
 * 
 * This file is part of Solo.
 * 
 * Solo is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Solo is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with Solo.  If not, see <https://www.gnu.org/licenses/>
 * 
 * This code is available under licenses for commercial use.
 * Please contact SoloKeys for more information.
 */
/*
 * app.h
 *
 *  Created on: Jun 26, 2018
 *      Author: conor
 */

#ifndef SRC_APP_H_
#define SRC_APP_H_

#define DEBUG_LEVEL 1

//#define PRINTING_USE_VCOM

//#define USING_DEV_BOARD

//#define ENABLE_U2F_EXTENSIONS

#define ENABLE_U2F

//#define DISABLE_CTAPHID_PING
//#define DISABLE_CTAPHID_WINK
//#define DISABLE_CTAPHID_CBOR

void printing_init();

//#define TEST
//#define TEST_POWER

// GPIO assignments
#define NFC_DEV_SS	gpioPortF,2

#define LED_INIT_VALUE			0x001000

#endif /* SRC_APP_H_ */

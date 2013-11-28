/*
 * This file is part of HiKoB Openlab.
 *
 * HiKoB Openlab is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation, version 3.
 *
 * HiKoB Openlab is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with HiKoB Openlab. If not, see
 * <http://www.gnu.org/licenses/>.
 *
 * Copyright (C) 2012 HiKoB.
 */

/*
 * fiteco-m3.h
 *
 *  Created on: Jul 10, 2012
 *      Author: Clément Burin des Roziers <clement.burin-des-roziers.at.hikob.com>
 */

#ifndef FITECO_M3_H_
#define FITECO_M3_H_

#include "platform.h"
#include "stm32f1xx.h"
#include "rf2xx.h"

/* Peripherals */
extern rf2xx_t rf231;

void platform_leds_setup();
void platform_drivers_setup();
void platform_disable_uart();
void platform_periph_setup();
void platform_lib_setup();
void platform_net_setup();

#endif /* FITECO_M3_H_ */
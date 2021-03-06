/*****************************************************************************
 * Copyright (c) 2014 Ted John
 * OpenRCT2, an open source clone of Roller Coaster Tycoon 2.
 *
 * This file is part of OpenRCT2.
 *
 * OpenRCT2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *****************************************************************************/

#ifndef _NEWS_ITEM_H_
#define _NEWS_ITEM_H_

#include "rct2.h"

enum {
	NEWS_ITEM_NULL,
	NEWS_ITEM_RIDE,
	NEWS_ITEM_PEEP_1,
	NEWS_ITEM_PEEP_2,
	NEWS_ITEM_MONEY,
	NEWS_ITEM_BLANK,
	NEWS_ITEM_SCENERY,
	NEWS_ITEM_PEEPS,
	NEWS_ITEM_AWARD,
	NEWS_ITEM_GRAPH
};

/**
 * News item structure.
 * size: 0x10C
 */
typedef struct {
	uint8 type;					// 0x00
	uint8 flags;				// 0x01
	uint32 assoc;				// 0x02
	uint16 ticks;				// 0x06
	uint8 month;				// 0x08
	uint8 pad_09;				// 0x09
	uint8 day;					// 0x0A
	uint8 pad_0B;				// 0x0B
	uint8 colour;				// 0x0C
	char text[255];				// 0x0D
} rct_news_item;

void news_item_init_queue();
void news_item_update_current();
void news_item_close_current();

#endif

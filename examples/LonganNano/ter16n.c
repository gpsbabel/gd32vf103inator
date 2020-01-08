/*
 * Copyright (c) 2019, Dimitar Toshkov Zhekov <dimitar.zhekov@gmail.com>
 * with Reserved Font Name "Terminus Font"
 *
 * See OFL.txt for the full license.
 */
#include "display.h"

const struct dp_font ter16n = {
	.width = 8,
	.height = 16,
	.data = {
		0x00,0x00,0x7e,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x7e,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x08,
		0x08,0x08,0x08,0x08,0x08,0x00,0x08,0x08,0x00,0x00,0x00,0x00,
		0x00,0x24,0x24,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x24,0x24,0x24,0x7e,0x24,0x24,
		0x7e,0x24,0x24,0x24,0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x3e,
		0x49,0x09,0x09,0x3e,0x48,0x48,0x49,0x3e,0x08,0x08,0x00,0x00,
		0x00,0x00,0x26,0x29,0x16,0x10,0x08,0x08,0x04,0x34,0x4a,0x32,
		0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x24,0x24,0x18,0x0c,0x52,
		0x22,0x22,0x22,0x5c,0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x08,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x10,0x08,0x04,0x04,0x04,0x04,0x04,0x04,0x08,0x10,
		0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x08,0x10,0x10,0x10,0x10,
		0x10,0x10,0x08,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x24,0x18,0x7e,0x18,0x24,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x3e,0x08,0x08,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x08,0x08,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x7e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x08,
		0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x10,0x10,0x08,0x08,
		0x04,0x04,0x02,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x42,
		0x42,0x62,0x52,0x4a,0x46,0x42,0x42,0x3c,0x00,0x00,0x00,0x00,
		0x00,0x00,0x10,0x18,0x14,0x10,0x10,0x10,0x10,0x10,0x10,0x7c,
		0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x42,0x42,0x40,0x20,0x10,
		0x08,0x04,0x02,0x7e,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x42,
		0x42,0x40,0x38,0x40,0x40,0x42,0x42,0x3c,0x00,0x00,0x00,0x00,
		0x00,0x00,0x40,0x60,0x50,0x48,0x44,0x42,0x7e,0x40,0x40,0x40,
		0x00,0x00,0x00,0x00,0x00,0x00,0x7e,0x02,0x02,0x02,0x3e,0x40,
		0x40,0x40,0x42,0x3c,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x04,
		0x02,0x02,0x3e,0x42,0x42,0x42,0x42,0x3c,0x00,0x00,0x00,0x00,
		0x00,0x00,0x7e,0x40,0x40,0x20,0x20,0x10,0x10,0x08,0x08,0x08,
		0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x42,0x42,0x42,0x3c,0x42,
		0x42,0x42,0x42,0x3c,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x42,
		0x42,0x42,0x42,0x7c,0x40,0x40,0x20,0x1c,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x00,0x00,0x00,0x08,0x08,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x00,
		0x00,0x00,0x08,0x08,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x20,
		0x10,0x08,0x04,0x02,0x04,0x08,0x10,0x20,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x7e,0x00,0x00,0x7e,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x04,0x08,0x10,0x20,
		0x10,0x08,0x04,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x42,
		0x42,0x42,0x20,0x10,0x10,0x00,0x10,0x10,0x00,0x00,0x00,0x00,
		0x00,0x00,0x3e,0x41,0x79,0x45,0x45,0x45,0x65,0x59,0x01,0x7e,
		0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x42,0x42,0x42,0x42,0x7e,
		0x42,0x42,0x42,0x42,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x42,
		0x42,0x42,0x3e,0x42,0x42,0x42,0x42,0x3e,0x00,0x00,0x00,0x00,
		0x00,0x00,0x3c,0x42,0x42,0x02,0x02,0x02,0x02,0x42,0x42,0x3c,
		0x00,0x00,0x00,0x00,0x00,0x00,0x1e,0x22,0x42,0x42,0x42,0x42,
		0x42,0x42,0x22,0x1e,0x00,0x00,0x00,0x00,0x00,0x00,0x7e,0x02,
		0x02,0x02,0x1e,0x02,0x02,0x02,0x02,0x7e,0x00,0x00,0x00,0x00,
		0x00,0x00,0x7e,0x02,0x02,0x02,0x1e,0x02,0x02,0x02,0x02,0x02,
		0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x42,0x42,0x02,0x02,0x72,
		0x42,0x42,0x42,0x3c,0x00,0x00,0x00,0x00,0x00,0x00,0x42,0x42,
		0x42,0x42,0x7e,0x42,0x42,0x42,0x42,0x42,0x00,0x00,0x00,0x00,
		0x00,0x00,0x1c,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x1c,
		0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x20,0x20,0x20,0x20,0x20,
		0x20,0x22,0x22,0x1c,0x00,0x00,0x00,0x00,0x00,0x00,0x42,0x22,
		0x12,0x0a,0x06,0x06,0x0a,0x12,0x22,0x42,0x00,0x00,0x00,0x00,
		0x00,0x00,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x7e,
		0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x63,0x55,0x49,0x49,0x41,
		0x41,0x41,0x41,0x41,0x00,0x00,0x00,0x00,0x00,0x00,0x42,0x42,
		0x42,0x46,0x4a,0x52,0x62,0x42,0x42,0x42,0x00,0x00,0x00,0x00,
		0x00,0x00,0x3c,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x3c,
		0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x42,0x42,0x42,0x42,0x3e,
		0x02,0x02,0x02,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x42,
		0x42,0x42,0x42,0x42,0x42,0x42,0x52,0x3c,0x40,0x00,0x00,0x00,
		0x00,0x00,0x3e,0x42,0x42,0x42,0x42,0x3e,0x0a,0x12,0x22,0x42,
		0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x42,0x02,0x02,0x3c,0x40,
		0x40,0x42,0x42,0x3c,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0x08,
		0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x00,0x00,
		0x00,0x00,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x3c,
		0x00,0x00,0x00,0x00,0x00,0x00,0x42,0x42,0x42,0x42,0x42,0x24,
		0x24,0x24,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x41,
		0x41,0x41,0x41,0x49,0x49,0x55,0x63,0x41,0x00,0x00,0x00,0x00,
		0x00,0x00,0x42,0x42,0x24,0x24,0x18,0x18,0x24,0x24,0x42,0x42,
		0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x41,0x22,0x22,0x14,0x08,
		0x08,0x08,0x08,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x7e,0x40,
		0x40,0x20,0x10,0x08,0x04,0x02,0x02,0x7e,0x00,0x00,0x00,0x00,
		0x00,0x00,0x1c,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x1c,
		0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x02,0x04,0x04,0x08,0x08,
		0x10,0x10,0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x1c,0x10,
		0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x1c,0x00,0x00,0x00,0x00,
		0x00,0x08,0x14,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x7e,0x00,0x00,0x08,0x10,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x3c,0x40,0x7c,0x42,0x42,0x42,0x7c,
		0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x02,0x02,0x3e,0x42,0x42,
		0x42,0x42,0x42,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x3c,0x42,0x02,0x02,0x02,0x42,0x3c,0x00,0x00,0x00,0x00,
		0x00,0x00,0x40,0x40,0x40,0x7c,0x42,0x42,0x42,0x42,0x42,0x7c,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x42,0x42,
		0x7e,0x02,0x02,0x3c,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x08,
		0x08,0x3e,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x7c,0x42,0x42,0x42,0x42,0x42,0x7c,
		0x40,0x40,0x3c,0x00,0x00,0x00,0x02,0x02,0x02,0x3e,0x42,0x42,
		0x42,0x42,0x42,0x42,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x08,
		0x00,0x0c,0x08,0x08,0x08,0x08,0x08,0x1c,0x00,0x00,0x00,0x00,
		0x00,0x00,0x20,0x20,0x00,0x30,0x20,0x20,0x20,0x20,0x20,0x20,
		0x22,0x22,0x1c,0x00,0x00,0x00,0x02,0x02,0x02,0x42,0x22,0x12,
		0x0e,0x12,0x22,0x42,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x08,
		0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x1c,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x3f,0x49,0x49,0x49,0x49,0x49,0x49,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x42,0x42,
		0x42,0x42,0x42,0x42,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x3c,0x42,0x42,0x42,0x42,0x42,0x3c,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x3e,0x42,0x42,0x42,0x42,0x42,0x3e,
		0x02,0x02,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x42,0x42,
		0x42,0x42,0x42,0x7c,0x40,0x40,0x40,0x00,0x00,0x00,0x00,0x00,
		0x00,0x7a,0x06,0x02,0x02,0x02,0x02,0x02,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x7c,0x02,0x02,0x3c,0x40,0x40,0x3e,
		0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x08,0x3e,0x08,0x08,
		0x08,0x08,0x08,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x42,0x42,0x42,0x42,0x42,0x42,0x7c,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x42,0x42,0x42,0x24,0x24,0x18,0x18,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x41,0x49,
		0x49,0x49,0x49,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x42,0x42,0x24,0x18,0x24,0x42,0x42,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x42,0x42,0x42,0x42,0x42,0x42,0x7c,
		0x40,0x40,0x3c,0x00,0x00,0x00,0x00,0x00,0x00,0x7e,0x20,0x10,
		0x08,0x04,0x02,0x7e,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x08,
		0x08,0x08,0x04,0x08,0x08,0x08,0x08,0x30,0x00,0x00,0x00,0x00,
		0x00,0x00,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,
		0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x10,0x10,0x10,0x20,0x10,
		0x10,0x10,0x10,0x0c,0x00,0x00,0x00,0x00,0x00,0x46,0x49,0x31,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	},
};
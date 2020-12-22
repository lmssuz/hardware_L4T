// SPDX-License-Identifier: GPL-2.0-only
/*
 * Definitions for Jetson tegra210-p3448-0000-p3449-0000-a01 board.
 *
 * Copyright (c) 2019 NVIDIA CORPORATION. All rights reserved.
 *
 */

#define JETSON_COMPATIBLE	"nvidia,p3449-0000-a01+p3448-0000-a01"

/* SoC function name for clock signal on 40-pin header pin 7 */
#define HDR40_CLK	"aud"
/* SoC function name for I2S interface on 40-pin header pins 12, 35, 38 and 40 */
#define HDR40_I2S	"i2s1"
/* SoC function name for PWM interface on 40-pin header pin 32 */
#define HDR40_PWM0	"pwm0"
/* SoC function name for SPI interface on 40-pin header pins 19, 21, 23, 24 and 26 */
#define HDR40_SPI	"spi1"
/* SoC function name for UART interface on 40-pin header pins 8, 10, 11 and 36 */
#define HDR40_UART	"uartb"

/* SoC pin name definitions for 40-pin header */
#define HDR40_PIN7	"aud_mclk_pbb0"
#define HDR40_PIN11	"uart2_rts_pg2"
#define HDR40_PIN12	"dap1_sclk_pb3"
#define HDR40_PIN13	"spi2_sck_pb6"
#define HDR40_PIN15	"lcd_te_py2"
#define HDR40_PIN16	"spi2_cs1_pdd0"
#define HDR40_PIN18	"spi2_cs0_pb7"
#define HDR40_PIN19	"spi1_mosi_pc0"
#define HDR40_PIN21	"spi1_miso_pc1"
#define HDR40_PIN22	"spi2_miso_pb5"
#define HDR40_PIN23	"spi1_sck_pc2"
#define HDR40_PIN24	"spi1_cs0_pc3"
#define HDR40_PIN26	"spi1_cs1_pc4"
#define HDR40_PIN29	"cam_af_en_ps5"
#define HDR40_PIN31	"pz0"
#define HDR40_PIN32	"lcd_bl_pwm_pv0"
#define HDR40_PIN33	"pe6"
#define HDR40_PIN35	"dap1_fs_pb0"
#define HDR40_PIN36	"uart2_cts_pg3"
#define HDR40_PIN37	"spi2_mosi_pb4"
#define HDR40_PIN38	"dap1_din_pb1"
#define HDR40_PIN40	"dap1_dout_pb2"

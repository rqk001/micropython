/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2019 I-SYST inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#define MICROPY_HW_BOARD_NAME       "DWM1001-MDEK"
#define MICROPY_HW_MCU_NAME         "NRF52832"
#define MICROPY_PY_SYS_PLATFORM     "DWM1001"

// #define MICROPY_PY_MACHINE_SOFT_PWM (1)
// #define MICROPY_PY_MUSIC            (1)

#define MICROPY_PY_MACHINE_UART     (1)
#define MICROPY_PY_MACHINE_SPI      (1)
// #define MICROPY_PY_MACHINE_HW_PWM   (1)
#define MICROPY_PY_MACHINE_RTCOUNTER (1)
#define MICROPY_PY_MACHINE_I2C      (1)
// #define MICROPY_PY_MACHINE_ADC      (1)
// #define MICROPY_PY_MACHINE_TEMP     (1)

#define MICROPY_HW_ENABLE_RNG       (1)

#define MICROPY_HW_HAS_LED          (1)
#define MICROPY_HW_LED_COUNT        (4)
#define MICROPY_HW_LED_PULLUP       (1)

#define MICROPY_HW_LED1             (30) // LED1
#define MICROPY_HW_LED1_PULLUP      (0)
#define MICROPY_HW_LED2             (31) // LED2
#define MICROPY_HW_LED3             (22) // LED3
#define MICROPY_HW_LED4             (14) // LED4

// UART config
#define MICROPY_HW_UART1_RX         (11)
#define MICROPY_HW_UART1_TX         (5)
// #define MICROPY_HW_UART1_CTS        (12)
// #define MICROPY_HW_UART1_RTS        (11)
// #define MICROPY_HW_UART1_HWFC       (1)

// SPI0 config
// #define MICROPY_HW_SPI0_NAME        "SPI0"
// #define MICROPY_HW_SPI0_SCK         (23) //
// #define MICROPY_HW_SPI0_MOSI        (24) //
// #define MICROPY_HW_SPI0_MISO        (25) //

// SPI0 config
#define MICROPY_HW_SPI0_NAME        "SPI0"
#define MICROPY_HW_SPI0_CSN         (17) //
#define MICROPY_HW_SPI0_SCK         (16) //
#define MICROPY_HW_SPI0_MISO        (18) //
#define MICROPY_HW_SPI0_MOSI        (20) //
#define MICROPY_HW_SPI0_IRQ         (19) //

// I2C
#define MICROPY_HW_I2C1_SCL         (28)
#define MICROPY_HW_I2C1_SDA         (29)

// #define MICROPY_HW_PWM0_NAME        "PWM0"
// #define MICROPY_HW_PWM1_NAME        "PWM1"
// #define MICROPY_HW_PWM2_NAME        "PWM2"

// buzzer pin
// #define MICROPY_HW_MUSIC_PIN        (14)

#define HELP_TEXT_BOARD_LED         "1,2,3,4"

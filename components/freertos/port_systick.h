/*
 * SPDX-FileCopyrightText: 2017-2021 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Set up the SysTick interrupt
 */
void vPortSetupTimer(void);

//void* get_systimer( void );
uint64_t vPortGetSysTime( void );
void     vPortSetSysTime( uint64_t time );

uint64_t vPortGetEspTime( void );
void     vPortSetEspTime( uint64_t time );

#ifdef __cplusplus
}
#endif

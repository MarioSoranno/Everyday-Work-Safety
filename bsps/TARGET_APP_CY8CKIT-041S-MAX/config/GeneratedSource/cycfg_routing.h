/*******************************************************************************
* File Name: cycfg_routing.h
*
* Description:
* Establishes all necessary connections between hardware elements.
* This file was automatically generated and should not be modified.
* Configurator Backend 3.0.0
* device-db 4.0.4.3352
* mtb-pdl-cat2 2.2.0.8881
*
********************************************************************************
* Copyright 2023 Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_ROUTING_H)
#define CYCFG_ROUTING_H

#if defined(__cplusplus)
extern "C" {
#endif

#include "cycfg_notices.h"
static inline void init_cycfg_routing(void) {}

#define ioss_0_port_0_pin_0_ANALOG P0_0_LPCOMP_IN_P0
#define ioss_0_port_0_pin_1_ANALOG P0_1_LPCOMP_IN_N0
#define ioss_0_port_1_pin_0_HSIOM P1_0_SCB0_I2C_SCL
#define ioss_0_port_1_pin_1_HSIOM P1_1_SCB0_I2C_SDA
#define ioss_0_port_3_pin_2_HSIOM P3_2_CPUSS_SWD_DATA
#define ioss_0_port_3_pin_3_HSIOM P3_3_CPUSS_SWD_CLK
#define ioss_0_port_3_pin_6_ANALOG P3_6_MSC0_S_PAD5
#define ioss_0_port_3_pin_7_ANALOG P3_7_MSC0_S_PAD6
#define ioss_0_port_4_pin_0_ANALOG P4_0_MSC0_CMOD3PADS
#define ioss_0_port_4_pin_1_ANALOG P4_1_MSC0_CMOD4PADS
#define ioss_0_port_7_pin_0_ANALOG P7_0_MSC1_CMOD3PADS
#define ioss_0_port_7_pin_1_ANALOG P7_1_MSC1_CMOD4PADS

#define MSC0_CMOD1 3
#define MSC0_CMOD2 4
#define MSC0_SPAD0 6
#define MSC0_SPAD1 5
#define MSC1_CMOD1 3
#define MSC1_CMOD2 4
#define MSC1_SPAD0 4
#define MSC1_SPAD1 5

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_ROUTING_H */

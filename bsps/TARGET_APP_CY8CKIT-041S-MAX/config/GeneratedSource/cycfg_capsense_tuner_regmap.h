/*******************************************************************************
* File Name: cycfg_capsense_tuner_regmap.h
*
* Description:
* CAPSENSE Tuner register map configuration.
* This file should not be modified. It was automatically generated by
* CAPSENSE Configurator 5.0.0.2684
*
********************************************************************************
* Copyright 2023, Cypress Semiconductor Corporation (an Infineon company) 
* or an affiliate of Cypress Semiconductor Corporation.
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
*******************************************************************************/

#if !defined(CYCFG_CAPSENSE_TUNER_REGMAP_H)
#define CYCFG_CAPSENSE_TUNER_REGMAP_H

/* RAM Data structure register definitions */
#define CY_CAPSENSE_TUNER_CONFIG_ID_OFFSET                                             (0u)
#define CY_CAPSENSE_TUNER_CONFIG_ID_SIZE                                               (2u)

#define CY_CAPSENSE_TUNER_TUNER_CMD_OFFSET                                             (2u)
#define CY_CAPSENSE_TUNER_TUNER_CMD_SIZE                                               (2u)

#define CY_CAPSENSE_TUNER_SCAN_COUNTER_OFFSET                                          (4u)
#define CY_CAPSENSE_TUNER_SCAN_COUNTER_SIZE                                            (2u)

#define CY_CAPSENSE_TUNER_TUNER_ST_OFFSET                                              (6u)
#define CY_CAPSENSE_TUNER_TUNER_ST_SIZE                                                (1u)

#define CY_CAPSENSE_TUNER_INITDONE_OFFSET                                              (7u)
#define CY_CAPSENSE_TUNER_INITDONE_SIZE                                                (1u)

#define CY_CAPSENSE_TUNER_STATUS_OFFSET                                                (8u)
#define CY_CAPSENSE_TUNER_STATUS_SIZE                                                  (4u)

#define CY_CAPSENSE_TUNER_TIMESTAMPINTERVAL_OFFSET                                     (12u)
#define CY_CAPSENSE_TUNER_TIMESTAMPINTERVAL_SIZE                                       (4u)

#define CY_CAPSENSE_TUNER_TIMESTAMP_OFFSET                                             (16u)
#define CY_CAPSENSE_TUNER_TIMESTAMP_SIZE                                               (4u)

#define CY_CAPSENSE_TUNER_TUNER_CNT_OFFSET                                             (20u)
#define CY_CAPSENSE_TUNER_TUNER_CNT_SIZE                                               (1u)

#define CY_CAPSENSE_TUNER_NUM_PRO_DUMMY_SUB_CONVS_OFFSET                               (21u)
#define CY_CAPSENSE_TUNER_NUM_PRO_DUMMY_SUB_CONVS_SIZE                                 (1u)

#define CY_CAPSENSE_TUNER_NUM_PRO_WAIT_CYCLES_OFFSET                                   (22u)
#define CY_CAPSENSE_TUNER_NUM_PRO_WAIT_CYCLES_SIZE                                     (2u)

#define CY_CAPSENSE_TUNER_LFSR_POLY_OFFSET                                             (24u)
#define CY_CAPSENSE_TUNER_LFSR_POLY_SIZE                                               (2u)

#define CY_CAPSENSE_TUNER_LFSR_SCALE_OFFSET                                            (26u)
#define CY_CAPSENSE_TUNER_LFSR_SCALE_SIZE                                              (1u)

#define CY_CAPSENSE_TUNER_SEL_FL_OFFSET                                                (27u)
#define CY_CAPSENSE_TUNER_SEL_FL_SIZE                                                  (1u)

#define CY_CAPSENSE_TUNER_LFSR_POLY_FL_OFFSET                                          (28u)
#define CY_CAPSENSE_TUNER_LFSR_POLY_FL_SIZE                                            (1u)

#define CY_CAPSENSE_TUNER_MOD_CLK_DIVIDER_OFFSET                                       (29u)
#define CY_CAPSENSE_TUNER_MOD_CLK_DIVIDER_SIZE                                         (1u)

#define CY_CAPSENSE_TUNER_BUTTON0_FINGER_CP_OFFSET                                     (32u)
#define CY_CAPSENSE_TUNER_BUTTON0_FINGER_CP_SIZE                                       (2u)

#define CY_CAPSENSE_TUNER_BUTTON0_SIGPFC_OFFSET                                        (34u)
#define CY_CAPSENSE_TUNER_BUTTON0_SIGPFC_SIZE                                          (2u)

#define CY_CAPSENSE_TUNER_BUTTON0_MAX_RAW_COUNT_OFFSET                                 (36u)
#define CY_CAPSENSE_TUNER_BUTTON0_MAX_RAW_COUNT_SIZE                                   (2u)

#define CY_CAPSENSE_TUNER_BUTTON0_ROW_MAX_RAW_COUNT_OFFSET                             (38u)
#define CY_CAPSENSE_TUNER_BUTTON0_ROW_MAX_RAW_COUNT_SIZE                               (2u)

#define CY_CAPSENSE_TUNER_BUTTON0_FINGER_TH_OFFSET                                     (40u)
#define CY_CAPSENSE_TUNER_BUTTON0_FINGER_TH_SIZE                                       (2u)

#define CY_CAPSENSE_TUNER_BUTTON0_PROX_TOUCH_TH_OFFSET                                 (42u)
#define CY_CAPSENSE_TUNER_BUTTON0_PROX_TOUCH_TH_SIZE                                   (2u)

#define CY_CAPSENSE_TUNER_BUTTON0_LOW_BSLN_RST_OFFSET                                  (44u)
#define CY_CAPSENSE_TUNER_BUTTON0_LOW_BSLN_RST_SIZE                                    (2u)

#define CY_CAPSENSE_TUNER_BUTTON0_SNS_CLK_OFFSET                                       (46u)
#define CY_CAPSENSE_TUNER_BUTTON0_SNS_CLK_SIZE                                         (2u)

#define CY_CAPSENSE_TUNER_BUTTON0_ROW_SNS_CLK_OFFSET                                   (48u)
#define CY_CAPSENSE_TUNER_BUTTON0_ROW_SNS_CLK_SIZE                                     (2u)

#define CY_CAPSENSE_TUNER_BUTTON0_GESTURE_DETECTED_OFFSET                              (50u)
#define CY_CAPSENSE_TUNER_BUTTON0_GESTURE_DETECTED_SIZE                                (2u)

#define CY_CAPSENSE_TUNER_BUTTON0_GESTURE_DIRECTION_OFFSET                             (52u)
#define CY_CAPSENSE_TUNER_BUTTON0_GESTURE_DIRECTION_SIZE                               (2u)

#define CY_CAPSENSE_TUNER_BUTTON0_XDELTA_OFFSET                                        (54u)
#define CY_CAPSENSE_TUNER_BUTTON0_XDELTA_SIZE                                          (2u)

#define CY_CAPSENSE_TUNER_BUTTON0_YDELTA_OFFSET                                        (56u)
#define CY_CAPSENSE_TUNER_BUTTON0_YDELTA_SIZE                                          (2u)

#define CY_CAPSENSE_TUNER_BUTTON0_NOISE_TH_OFFSET                                      (58u)
#define CY_CAPSENSE_TUNER_BUTTON0_NOISE_TH_SIZE                                        (2u)

#define CY_CAPSENSE_TUNER_BUTTON0_NNOISE_TH_OFFSET                                     (60u)
#define CY_CAPSENSE_TUNER_BUTTON0_NNOISE_TH_SIZE                                       (2u)

#define CY_CAPSENSE_TUNER_BUTTON0_HYSTERESIS_OFFSET                                    (62u)
#define CY_CAPSENSE_TUNER_BUTTON0_HYSTERESIS_SIZE                                      (2u)

#define CY_CAPSENSE_TUNER_BUTTON0_ON_DEBOUNCE_OFFSET                                   (64u)
#define CY_CAPSENSE_TUNER_BUTTON0_ON_DEBOUNCE_SIZE                                     (1u)

#define CY_CAPSENSE_TUNER_BUTTON0_CLK_SOURCE_OFFSET                                    (65u)
#define CY_CAPSENSE_TUNER_BUTTON0_CLK_SOURCE_SIZE                                      (1u)

#define CY_CAPSENSE_TUNER_BUTTON0_REGULAR_IIR_BL_N_OFFSET                              (66u)
#define CY_CAPSENSE_TUNER_BUTTON0_REGULAR_IIR_BL_N_SIZE                                (1u)

#define CY_CAPSENSE_TUNER_BUTTON0_STATUS_OFFSET                                        (67u)
#define CY_CAPSENSE_TUNER_BUTTON0_STATUS_SIZE                                          (1u)

#define CY_CAPSENSE_TUNER_BUTTON0_PTRPOSITION_OFFSET                                   (68u)
#define CY_CAPSENSE_TUNER_BUTTON0_PTRPOSITION_SIZE                                     (4u)

#define CY_CAPSENSE_TUNER_BUTTON0_NUM_POSITIONS_OFFSET                                 (72u)
#define CY_CAPSENSE_TUNER_BUTTON0_NUM_POSITIONS_SIZE                                   (1u)

#define CY_CAPSENSE_TUNER_BUTTON0_NUM_SUBCONVERSIONS_OFFSET                            (76u)
#define CY_CAPSENSE_TUNER_BUTTON0_NUM_SUBCONVERSIONS_SIZE                              (2u)

#define CY_CAPSENSE_TUNER_BUTTON0_CDAC_REF0_OFFSET                                     (78u)
#define CY_CAPSENSE_TUNER_BUTTON0_CDAC_REF0_SIZE                                       (1u)

#define CY_CAPSENSE_TUNER_BUTTON0_ROW_CDAC_REF0_OFFSET                                 (79u)
#define CY_CAPSENSE_TUNER_BUTTON0_ROW_CDAC_REF0_SIZE                                   (1u)

#define CY_CAPSENSE_TUNER_BUTTON0_CIC_RATE_OFFSET                                      (80u)
#define CY_CAPSENSE_TUNER_BUTTON0_CIC_RATE_SIZE                                        (1u)

#define CY_CAPSENSE_TUNER_BUTTON0_CDAC_DITHER_EN_OFFSET                                (81u)
#define CY_CAPSENSE_TUNER_BUTTON0_CDAC_DITHER_EN_SIZE                                  (1u)

#define CY_CAPSENSE_TUNER_BUTTON0_CDAC_DITHER_VALUE_OFFSET                             (82u)
#define CY_CAPSENSE_TUNER_BUTTON0_CDAC_DITHER_VALUE_SIZE                               (1u)

#define CY_CAPSENSE_TUNER_BUTTON0_COARSE_INIT_BYPASS_EN_OFFSET                         (83u)
#define CY_CAPSENSE_TUNER_BUTTON0_COARSE_INIT_BYPASS_EN_SIZE                           (1u)

#define CY_CAPSENSE_TUNER_BUTTON0_COMP_DIV_OFFSET                                      (84u)
#define CY_CAPSENSE_TUNER_BUTTON0_COMP_DIV_SIZE                                        (2u)

#define CY_CAPSENSE_TUNER_BUTTON0_LFSR_RANGE_OFFSET                                    (86u)
#define CY_CAPSENSE_TUNER_BUTTON0_LFSR_RANGE_SIZE                                      (1u)

#define CY_CAPSENSE_TUNER_BUTTON1_FINGER_CP_OFFSET                                     (88u)
#define CY_CAPSENSE_TUNER_BUTTON1_FINGER_CP_SIZE                                       (2u)

#define CY_CAPSENSE_TUNER_BUTTON1_SIGPFC_OFFSET                                        (90u)
#define CY_CAPSENSE_TUNER_BUTTON1_SIGPFC_SIZE                                          (2u)

#define CY_CAPSENSE_TUNER_BUTTON1_MAX_RAW_COUNT_OFFSET                                 (92u)
#define CY_CAPSENSE_TUNER_BUTTON1_MAX_RAW_COUNT_SIZE                                   (2u)

#define CY_CAPSENSE_TUNER_BUTTON1_ROW_MAX_RAW_COUNT_OFFSET                             (94u)
#define CY_CAPSENSE_TUNER_BUTTON1_ROW_MAX_RAW_COUNT_SIZE                               (2u)

#define CY_CAPSENSE_TUNER_BUTTON1_FINGER_TH_OFFSET                                     (96u)
#define CY_CAPSENSE_TUNER_BUTTON1_FINGER_TH_SIZE                                       (2u)

#define CY_CAPSENSE_TUNER_BUTTON1_PROX_TOUCH_TH_OFFSET                                 (98u)
#define CY_CAPSENSE_TUNER_BUTTON1_PROX_TOUCH_TH_SIZE                                   (2u)

#define CY_CAPSENSE_TUNER_BUTTON1_LOW_BSLN_RST_OFFSET                                  (100u)
#define CY_CAPSENSE_TUNER_BUTTON1_LOW_BSLN_RST_SIZE                                    (2u)

#define CY_CAPSENSE_TUNER_BUTTON1_SNS_CLK_OFFSET                                       (102u)
#define CY_CAPSENSE_TUNER_BUTTON1_SNS_CLK_SIZE                                         (2u)

#define CY_CAPSENSE_TUNER_BUTTON1_ROW_SNS_CLK_OFFSET                                   (104u)
#define CY_CAPSENSE_TUNER_BUTTON1_ROW_SNS_CLK_SIZE                                     (2u)

#define CY_CAPSENSE_TUNER_BUTTON1_GESTURE_DETECTED_OFFSET                              (106u)
#define CY_CAPSENSE_TUNER_BUTTON1_GESTURE_DETECTED_SIZE                                (2u)

#define CY_CAPSENSE_TUNER_BUTTON1_GESTURE_DIRECTION_OFFSET                             (108u)
#define CY_CAPSENSE_TUNER_BUTTON1_GESTURE_DIRECTION_SIZE                               (2u)

#define CY_CAPSENSE_TUNER_BUTTON1_XDELTA_OFFSET                                        (110u)
#define CY_CAPSENSE_TUNER_BUTTON1_XDELTA_SIZE                                          (2u)

#define CY_CAPSENSE_TUNER_BUTTON1_YDELTA_OFFSET                                        (112u)
#define CY_CAPSENSE_TUNER_BUTTON1_YDELTA_SIZE                                          (2u)

#define CY_CAPSENSE_TUNER_BUTTON1_NOISE_TH_OFFSET                                      (114u)
#define CY_CAPSENSE_TUNER_BUTTON1_NOISE_TH_SIZE                                        (2u)

#define CY_CAPSENSE_TUNER_BUTTON1_NNOISE_TH_OFFSET                                     (116u)
#define CY_CAPSENSE_TUNER_BUTTON1_NNOISE_TH_SIZE                                       (2u)

#define CY_CAPSENSE_TUNER_BUTTON1_HYSTERESIS_OFFSET                                    (118u)
#define CY_CAPSENSE_TUNER_BUTTON1_HYSTERESIS_SIZE                                      (2u)

#define CY_CAPSENSE_TUNER_BUTTON1_ON_DEBOUNCE_OFFSET                                   (120u)
#define CY_CAPSENSE_TUNER_BUTTON1_ON_DEBOUNCE_SIZE                                     (1u)

#define CY_CAPSENSE_TUNER_BUTTON1_CLK_SOURCE_OFFSET                                    (121u)
#define CY_CAPSENSE_TUNER_BUTTON1_CLK_SOURCE_SIZE                                      (1u)

#define CY_CAPSENSE_TUNER_BUTTON1_REGULAR_IIR_BL_N_OFFSET                              (122u)
#define CY_CAPSENSE_TUNER_BUTTON1_REGULAR_IIR_BL_N_SIZE                                (1u)

#define CY_CAPSENSE_TUNER_BUTTON1_STATUS_OFFSET                                        (123u)
#define CY_CAPSENSE_TUNER_BUTTON1_STATUS_SIZE                                          (1u)

#define CY_CAPSENSE_TUNER_BUTTON1_PTRPOSITION_OFFSET                                   (124u)
#define CY_CAPSENSE_TUNER_BUTTON1_PTRPOSITION_SIZE                                     (4u)

#define CY_CAPSENSE_TUNER_BUTTON1_NUM_POSITIONS_OFFSET                                 (128u)
#define CY_CAPSENSE_TUNER_BUTTON1_NUM_POSITIONS_SIZE                                   (1u)

#define CY_CAPSENSE_TUNER_BUTTON1_NUM_SUBCONVERSIONS_OFFSET                            (132u)
#define CY_CAPSENSE_TUNER_BUTTON1_NUM_SUBCONVERSIONS_SIZE                              (2u)

#define CY_CAPSENSE_TUNER_BUTTON1_CDAC_REF0_OFFSET                                     (134u)
#define CY_CAPSENSE_TUNER_BUTTON1_CDAC_REF0_SIZE                                       (1u)

#define CY_CAPSENSE_TUNER_BUTTON1_ROW_CDAC_REF0_OFFSET                                 (135u)
#define CY_CAPSENSE_TUNER_BUTTON1_ROW_CDAC_REF0_SIZE                                   (1u)

#define CY_CAPSENSE_TUNER_BUTTON1_CIC_RATE_OFFSET                                      (136u)
#define CY_CAPSENSE_TUNER_BUTTON1_CIC_RATE_SIZE                                        (1u)

#define CY_CAPSENSE_TUNER_BUTTON1_CDAC_DITHER_EN_OFFSET                                (137u)
#define CY_CAPSENSE_TUNER_BUTTON1_CDAC_DITHER_EN_SIZE                                  (1u)

#define CY_CAPSENSE_TUNER_BUTTON1_CDAC_DITHER_VALUE_OFFSET                             (138u)
#define CY_CAPSENSE_TUNER_BUTTON1_CDAC_DITHER_VALUE_SIZE                               (1u)

#define CY_CAPSENSE_TUNER_BUTTON1_COARSE_INIT_BYPASS_EN_OFFSET                         (139u)
#define CY_CAPSENSE_TUNER_BUTTON1_COARSE_INIT_BYPASS_EN_SIZE                           (1u)

#define CY_CAPSENSE_TUNER_BUTTON1_COMP_DIV_OFFSET                                      (140u)
#define CY_CAPSENSE_TUNER_BUTTON1_COMP_DIV_SIZE                                        (2u)

#define CY_CAPSENSE_TUNER_BUTTON1_LFSR_RANGE_OFFSET                                    (142u)
#define CY_CAPSENSE_TUNER_BUTTON1_LFSR_RANGE_SIZE                                      (1u)

#define CY_CAPSENSE_TUNER_BUTTON2_FINGER_CP_OFFSET                                     (144u)
#define CY_CAPSENSE_TUNER_BUTTON2_FINGER_CP_SIZE                                       (2u)

#define CY_CAPSENSE_TUNER_BUTTON2_SIGPFC_OFFSET                                        (146u)
#define CY_CAPSENSE_TUNER_BUTTON2_SIGPFC_SIZE                                          (2u)

#define CY_CAPSENSE_TUNER_BUTTON2_MAX_RAW_COUNT_OFFSET                                 (148u)
#define CY_CAPSENSE_TUNER_BUTTON2_MAX_RAW_COUNT_SIZE                                   (2u)

#define CY_CAPSENSE_TUNER_BUTTON2_ROW_MAX_RAW_COUNT_OFFSET                             (150u)
#define CY_CAPSENSE_TUNER_BUTTON2_ROW_MAX_RAW_COUNT_SIZE                               (2u)

#define CY_CAPSENSE_TUNER_BUTTON2_FINGER_TH_OFFSET                                     (152u)
#define CY_CAPSENSE_TUNER_BUTTON2_FINGER_TH_SIZE                                       (2u)

#define CY_CAPSENSE_TUNER_BUTTON2_PROX_TOUCH_TH_OFFSET                                 (154u)
#define CY_CAPSENSE_TUNER_BUTTON2_PROX_TOUCH_TH_SIZE                                   (2u)

#define CY_CAPSENSE_TUNER_BUTTON2_LOW_BSLN_RST_OFFSET                                  (156u)
#define CY_CAPSENSE_TUNER_BUTTON2_LOW_BSLN_RST_SIZE                                    (2u)

#define CY_CAPSENSE_TUNER_BUTTON2_SNS_CLK_OFFSET                                       (158u)
#define CY_CAPSENSE_TUNER_BUTTON2_SNS_CLK_SIZE                                         (2u)

#define CY_CAPSENSE_TUNER_BUTTON2_ROW_SNS_CLK_OFFSET                                   (160u)
#define CY_CAPSENSE_TUNER_BUTTON2_ROW_SNS_CLK_SIZE                                     (2u)

#define CY_CAPSENSE_TUNER_BUTTON2_GESTURE_DETECTED_OFFSET                              (162u)
#define CY_CAPSENSE_TUNER_BUTTON2_GESTURE_DETECTED_SIZE                                (2u)

#define CY_CAPSENSE_TUNER_BUTTON2_GESTURE_DIRECTION_OFFSET                             (164u)
#define CY_CAPSENSE_TUNER_BUTTON2_GESTURE_DIRECTION_SIZE                               (2u)

#define CY_CAPSENSE_TUNER_BUTTON2_XDELTA_OFFSET                                        (166u)
#define CY_CAPSENSE_TUNER_BUTTON2_XDELTA_SIZE                                          (2u)

#define CY_CAPSENSE_TUNER_BUTTON2_YDELTA_OFFSET                                        (168u)
#define CY_CAPSENSE_TUNER_BUTTON2_YDELTA_SIZE                                          (2u)

#define CY_CAPSENSE_TUNER_BUTTON2_NOISE_TH_OFFSET                                      (170u)
#define CY_CAPSENSE_TUNER_BUTTON2_NOISE_TH_SIZE                                        (2u)

#define CY_CAPSENSE_TUNER_BUTTON2_NNOISE_TH_OFFSET                                     (172u)
#define CY_CAPSENSE_TUNER_BUTTON2_NNOISE_TH_SIZE                                       (2u)

#define CY_CAPSENSE_TUNER_BUTTON2_HYSTERESIS_OFFSET                                    (174u)
#define CY_CAPSENSE_TUNER_BUTTON2_HYSTERESIS_SIZE                                      (2u)

#define CY_CAPSENSE_TUNER_BUTTON2_ON_DEBOUNCE_OFFSET                                   (176u)
#define CY_CAPSENSE_TUNER_BUTTON2_ON_DEBOUNCE_SIZE                                     (1u)

#define CY_CAPSENSE_TUNER_BUTTON2_CLK_SOURCE_OFFSET                                    (177u)
#define CY_CAPSENSE_TUNER_BUTTON2_CLK_SOURCE_SIZE                                      (1u)

#define CY_CAPSENSE_TUNER_BUTTON2_REGULAR_IIR_BL_N_OFFSET                              (178u)
#define CY_CAPSENSE_TUNER_BUTTON2_REGULAR_IIR_BL_N_SIZE                                (1u)

#define CY_CAPSENSE_TUNER_BUTTON2_STATUS_OFFSET                                        (179u)
#define CY_CAPSENSE_TUNER_BUTTON2_STATUS_SIZE                                          (1u)

#define CY_CAPSENSE_TUNER_BUTTON2_PTRPOSITION_OFFSET                                   (180u)
#define CY_CAPSENSE_TUNER_BUTTON2_PTRPOSITION_SIZE                                     (4u)

#define CY_CAPSENSE_TUNER_BUTTON2_NUM_POSITIONS_OFFSET                                 (184u)
#define CY_CAPSENSE_TUNER_BUTTON2_NUM_POSITIONS_SIZE                                   (1u)

#define CY_CAPSENSE_TUNER_BUTTON2_NUM_SUBCONVERSIONS_OFFSET                            (188u)
#define CY_CAPSENSE_TUNER_BUTTON2_NUM_SUBCONVERSIONS_SIZE                              (2u)

#define CY_CAPSENSE_TUNER_BUTTON2_CDAC_REF0_OFFSET                                     (190u)
#define CY_CAPSENSE_TUNER_BUTTON2_CDAC_REF0_SIZE                                       (1u)

#define CY_CAPSENSE_TUNER_BUTTON2_ROW_CDAC_REF0_OFFSET                                 (191u)
#define CY_CAPSENSE_TUNER_BUTTON2_ROW_CDAC_REF0_SIZE                                   (1u)

#define CY_CAPSENSE_TUNER_BUTTON2_CIC_RATE_OFFSET                                      (192u)
#define CY_CAPSENSE_TUNER_BUTTON2_CIC_RATE_SIZE                                        (1u)

#define CY_CAPSENSE_TUNER_BUTTON2_CDAC_DITHER_EN_OFFSET                                (193u)
#define CY_CAPSENSE_TUNER_BUTTON2_CDAC_DITHER_EN_SIZE                                  (1u)

#define CY_CAPSENSE_TUNER_BUTTON2_CDAC_DITHER_VALUE_OFFSET                             (194u)
#define CY_CAPSENSE_TUNER_BUTTON2_CDAC_DITHER_VALUE_SIZE                               (1u)

#define CY_CAPSENSE_TUNER_BUTTON2_COARSE_INIT_BYPASS_EN_OFFSET                         (195u)
#define CY_CAPSENSE_TUNER_BUTTON2_COARSE_INIT_BYPASS_EN_SIZE                           (1u)

#define CY_CAPSENSE_TUNER_BUTTON2_COMP_DIV_OFFSET                                      (196u)
#define CY_CAPSENSE_TUNER_BUTTON2_COMP_DIV_SIZE                                        (2u)

#define CY_CAPSENSE_TUNER_BUTTON2_LFSR_RANGE_OFFSET                                    (198u)
#define CY_CAPSENSE_TUNER_BUTTON2_LFSR_RANGE_SIZE                                      (1u)

#define CY_CAPSENSE_TUNER_BUTTON3_FINGER_CP_OFFSET                                     (200u)
#define CY_CAPSENSE_TUNER_BUTTON3_FINGER_CP_SIZE                                       (2u)

#define CY_CAPSENSE_TUNER_BUTTON3_SIGPFC_OFFSET                                        (202u)
#define CY_CAPSENSE_TUNER_BUTTON3_SIGPFC_SIZE                                          (2u)

#define CY_CAPSENSE_TUNER_BUTTON3_MAX_RAW_COUNT_OFFSET                                 (204u)
#define CY_CAPSENSE_TUNER_BUTTON3_MAX_RAW_COUNT_SIZE                                   (2u)

#define CY_CAPSENSE_TUNER_BUTTON3_ROW_MAX_RAW_COUNT_OFFSET                             (206u)
#define CY_CAPSENSE_TUNER_BUTTON3_ROW_MAX_RAW_COUNT_SIZE                               (2u)

#define CY_CAPSENSE_TUNER_BUTTON3_FINGER_TH_OFFSET                                     (208u)
#define CY_CAPSENSE_TUNER_BUTTON3_FINGER_TH_SIZE                                       (2u)

#define CY_CAPSENSE_TUNER_BUTTON3_PROX_TOUCH_TH_OFFSET                                 (210u)
#define CY_CAPSENSE_TUNER_BUTTON3_PROX_TOUCH_TH_SIZE                                   (2u)

#define CY_CAPSENSE_TUNER_BUTTON3_LOW_BSLN_RST_OFFSET                                  (212u)
#define CY_CAPSENSE_TUNER_BUTTON3_LOW_BSLN_RST_SIZE                                    (2u)

#define CY_CAPSENSE_TUNER_BUTTON3_SNS_CLK_OFFSET                                       (214u)
#define CY_CAPSENSE_TUNER_BUTTON3_SNS_CLK_SIZE                                         (2u)

#define CY_CAPSENSE_TUNER_BUTTON3_ROW_SNS_CLK_OFFSET                                   (216u)
#define CY_CAPSENSE_TUNER_BUTTON3_ROW_SNS_CLK_SIZE                                     (2u)

#define CY_CAPSENSE_TUNER_BUTTON3_GESTURE_DETECTED_OFFSET                              (218u)
#define CY_CAPSENSE_TUNER_BUTTON3_GESTURE_DETECTED_SIZE                                (2u)

#define CY_CAPSENSE_TUNER_BUTTON3_GESTURE_DIRECTION_OFFSET                             (220u)
#define CY_CAPSENSE_TUNER_BUTTON3_GESTURE_DIRECTION_SIZE                               (2u)

#define CY_CAPSENSE_TUNER_BUTTON3_XDELTA_OFFSET                                        (222u)
#define CY_CAPSENSE_TUNER_BUTTON3_XDELTA_SIZE                                          (2u)

#define CY_CAPSENSE_TUNER_BUTTON3_YDELTA_OFFSET                                        (224u)
#define CY_CAPSENSE_TUNER_BUTTON3_YDELTA_SIZE                                          (2u)

#define CY_CAPSENSE_TUNER_BUTTON3_NOISE_TH_OFFSET                                      (226u)
#define CY_CAPSENSE_TUNER_BUTTON3_NOISE_TH_SIZE                                        (2u)

#define CY_CAPSENSE_TUNER_BUTTON3_NNOISE_TH_OFFSET                                     (228u)
#define CY_CAPSENSE_TUNER_BUTTON3_NNOISE_TH_SIZE                                       (2u)

#define CY_CAPSENSE_TUNER_BUTTON3_HYSTERESIS_OFFSET                                    (230u)
#define CY_CAPSENSE_TUNER_BUTTON3_HYSTERESIS_SIZE                                      (2u)

#define CY_CAPSENSE_TUNER_BUTTON3_ON_DEBOUNCE_OFFSET                                   (232u)
#define CY_CAPSENSE_TUNER_BUTTON3_ON_DEBOUNCE_SIZE                                     (1u)

#define CY_CAPSENSE_TUNER_BUTTON3_CLK_SOURCE_OFFSET                                    (233u)
#define CY_CAPSENSE_TUNER_BUTTON3_CLK_SOURCE_SIZE                                      (1u)

#define CY_CAPSENSE_TUNER_BUTTON3_REGULAR_IIR_BL_N_OFFSET                              (234u)
#define CY_CAPSENSE_TUNER_BUTTON3_REGULAR_IIR_BL_N_SIZE                                (1u)

#define CY_CAPSENSE_TUNER_BUTTON3_STATUS_OFFSET                                        (235u)
#define CY_CAPSENSE_TUNER_BUTTON3_STATUS_SIZE                                          (1u)

#define CY_CAPSENSE_TUNER_BUTTON3_PTRPOSITION_OFFSET                                   (236u)
#define CY_CAPSENSE_TUNER_BUTTON3_PTRPOSITION_SIZE                                     (4u)

#define CY_CAPSENSE_TUNER_BUTTON3_NUM_POSITIONS_OFFSET                                 (240u)
#define CY_CAPSENSE_TUNER_BUTTON3_NUM_POSITIONS_SIZE                                   (1u)

#define CY_CAPSENSE_TUNER_BUTTON3_NUM_SUBCONVERSIONS_OFFSET                            (244u)
#define CY_CAPSENSE_TUNER_BUTTON3_NUM_SUBCONVERSIONS_SIZE                              (2u)

#define CY_CAPSENSE_TUNER_BUTTON3_CDAC_REF0_OFFSET                                     (246u)
#define CY_CAPSENSE_TUNER_BUTTON3_CDAC_REF0_SIZE                                       (1u)

#define CY_CAPSENSE_TUNER_BUTTON3_ROW_CDAC_REF0_OFFSET                                 (247u)
#define CY_CAPSENSE_TUNER_BUTTON3_ROW_CDAC_REF0_SIZE                                   (1u)

#define CY_CAPSENSE_TUNER_BUTTON3_CIC_RATE_OFFSET                                      (248u)
#define CY_CAPSENSE_TUNER_BUTTON3_CIC_RATE_SIZE                                        (1u)

#define CY_CAPSENSE_TUNER_BUTTON3_CDAC_DITHER_EN_OFFSET                                (249u)
#define CY_CAPSENSE_TUNER_BUTTON3_CDAC_DITHER_EN_SIZE                                  (1u)

#define CY_CAPSENSE_TUNER_BUTTON3_CDAC_DITHER_VALUE_OFFSET                             (250u)
#define CY_CAPSENSE_TUNER_BUTTON3_CDAC_DITHER_VALUE_SIZE                               (1u)

#define CY_CAPSENSE_TUNER_BUTTON3_COARSE_INIT_BYPASS_EN_OFFSET                         (251u)
#define CY_CAPSENSE_TUNER_BUTTON3_COARSE_INIT_BYPASS_EN_SIZE                           (1u)

#define CY_CAPSENSE_TUNER_BUTTON3_COMP_DIV_OFFSET                                      (252u)
#define CY_CAPSENSE_TUNER_BUTTON3_COMP_DIV_SIZE                                        (2u)

#define CY_CAPSENSE_TUNER_BUTTON3_LFSR_RANGE_OFFSET                                    (254u)
#define CY_CAPSENSE_TUNER_BUTTON3_LFSR_RANGE_SIZE                                      (1u)

#define CY_CAPSENSE_TUNER_BUTTON0_SNS0_RAW0_OFFSET                                     (256u)
#define CY_CAPSENSE_TUNER_BUTTON0_SNS0_RAW0_SIZE                                       (2u)

#define CY_CAPSENSE_TUNER_BUTTON0_SNS0_BSLN0_OFFSET                                    (258u)
#define CY_CAPSENSE_TUNER_BUTTON0_SNS0_BSLN0_SIZE                                      (2u)

#define CY_CAPSENSE_TUNER_BUTTON0_SNS0_DIFF0_OFFSET                                    (260u)
#define CY_CAPSENSE_TUNER_BUTTON0_SNS0_DIFF0_SIZE                                      (2u)

#define CY_CAPSENSE_TUNER_BUTTON0_SNS0_STATUS0_OFFSET                                  (262u)
#define CY_CAPSENSE_TUNER_BUTTON0_SNS0_STATUS0_SIZE                                    (1u)

#define CY_CAPSENSE_TUNER_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_OFFSET                        (263u)
#define CY_CAPSENSE_TUNER_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_SIZE                          (1u)

#define CY_CAPSENSE_TUNER_BUTTON0_SNS0_BSLN_EXT0_OFFSET                                (264u)
#define CY_CAPSENSE_TUNER_BUTTON0_SNS0_BSLN_EXT0_SIZE                                  (1u)

#define CY_CAPSENSE_TUNER_BUTTON0_SNS0_CDAC_COMP0_OFFSET                               (265u)
#define CY_CAPSENSE_TUNER_BUTTON0_SNS0_CDAC_COMP0_SIZE                                 (1u)

#define CY_CAPSENSE_TUNER_BUTTON1_SNS0_RAW0_OFFSET                                     (266u)
#define CY_CAPSENSE_TUNER_BUTTON1_SNS0_RAW0_SIZE                                       (2u)

#define CY_CAPSENSE_TUNER_BUTTON1_SNS0_BSLN0_OFFSET                                    (268u)
#define CY_CAPSENSE_TUNER_BUTTON1_SNS0_BSLN0_SIZE                                      (2u)

#define CY_CAPSENSE_TUNER_BUTTON1_SNS0_DIFF0_OFFSET                                    (270u)
#define CY_CAPSENSE_TUNER_BUTTON1_SNS0_DIFF0_SIZE                                      (2u)

#define CY_CAPSENSE_TUNER_BUTTON1_SNS0_STATUS0_OFFSET                                  (272u)
#define CY_CAPSENSE_TUNER_BUTTON1_SNS0_STATUS0_SIZE                                    (1u)

#define CY_CAPSENSE_TUNER_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_OFFSET                        (273u)
#define CY_CAPSENSE_TUNER_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_SIZE                          (1u)

#define CY_CAPSENSE_TUNER_BUTTON1_SNS0_BSLN_EXT0_OFFSET                                (274u)
#define CY_CAPSENSE_TUNER_BUTTON1_SNS0_BSLN_EXT0_SIZE                                  (1u)

#define CY_CAPSENSE_TUNER_BUTTON1_SNS0_CDAC_COMP0_OFFSET                               (275u)
#define CY_CAPSENSE_TUNER_BUTTON1_SNS0_CDAC_COMP0_SIZE                                 (1u)

#define CY_CAPSENSE_TUNER_BUTTON2_SNS0_RAW0_OFFSET                                     (276u)
#define CY_CAPSENSE_TUNER_BUTTON2_SNS0_RAW0_SIZE                                       (2u)

#define CY_CAPSENSE_TUNER_BUTTON2_SNS0_BSLN0_OFFSET                                    (278u)
#define CY_CAPSENSE_TUNER_BUTTON2_SNS0_BSLN0_SIZE                                      (2u)

#define CY_CAPSENSE_TUNER_BUTTON2_SNS0_DIFF0_OFFSET                                    (280u)
#define CY_CAPSENSE_TUNER_BUTTON2_SNS0_DIFF0_SIZE                                      (2u)

#define CY_CAPSENSE_TUNER_BUTTON2_SNS0_STATUS0_OFFSET                                  (282u)
#define CY_CAPSENSE_TUNER_BUTTON2_SNS0_STATUS0_SIZE                                    (1u)

#define CY_CAPSENSE_TUNER_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_OFFSET                        (283u)
#define CY_CAPSENSE_TUNER_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_SIZE                          (1u)

#define CY_CAPSENSE_TUNER_BUTTON2_SNS0_BSLN_EXT0_OFFSET                                (284u)
#define CY_CAPSENSE_TUNER_BUTTON2_SNS0_BSLN_EXT0_SIZE                                  (1u)

#define CY_CAPSENSE_TUNER_BUTTON2_SNS0_CDAC_COMP0_OFFSET                               (285u)
#define CY_CAPSENSE_TUNER_BUTTON2_SNS0_CDAC_COMP0_SIZE                                 (1u)

#define CY_CAPSENSE_TUNER_BUTTON3_SNS0_RAW0_OFFSET                                     (286u)
#define CY_CAPSENSE_TUNER_BUTTON3_SNS0_RAW0_SIZE                                       (2u)

#define CY_CAPSENSE_TUNER_BUTTON3_SNS0_BSLN0_OFFSET                                    (288u)
#define CY_CAPSENSE_TUNER_BUTTON3_SNS0_BSLN0_SIZE                                      (2u)

#define CY_CAPSENSE_TUNER_BUTTON3_SNS0_DIFF0_OFFSET                                    (290u)
#define CY_CAPSENSE_TUNER_BUTTON3_SNS0_DIFF0_SIZE                                      (2u)

#define CY_CAPSENSE_TUNER_BUTTON3_SNS0_STATUS0_OFFSET                                  (292u)
#define CY_CAPSENSE_TUNER_BUTTON3_SNS0_STATUS0_SIZE                                    (1u)

#define CY_CAPSENSE_TUNER_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_OFFSET                        (293u)
#define CY_CAPSENSE_TUNER_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_SIZE                          (1u)

#define CY_CAPSENSE_TUNER_BUTTON3_SNS0_BSLN_EXT0_OFFSET                                (294u)
#define CY_CAPSENSE_TUNER_BUTTON3_SNS0_BSLN_EXT0_SIZE                                  (1u)

#define CY_CAPSENSE_TUNER_BUTTON3_SNS0_CDAC_COMP0_OFFSET                               (295u)
#define CY_CAPSENSE_TUNER_BUTTON3_SNS0_CDAC_COMP0_SIZE                                 (1u)



#endif /* CYCFG_CAPSENSE_TUNER_REGMAP_H */

/* [] END OF FILE */

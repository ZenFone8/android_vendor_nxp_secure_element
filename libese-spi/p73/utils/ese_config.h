/******************************************************************************
 *
 *  Copyright 2018-2019,2022 NXP
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 ******************************************************************************/

#pragma once

#include <string>
#include <vector>

#include <config.h>
#include <phNxpEseFeatures.h>

#define NAME_SE_DEBUG_ENABLED "SE_DEBUG_ENABLED"
#define NAME_SE_LOG_LEVEL "SE_LOG_LEVEL"
#define NAME_NXP_JCOPDL_AT_BOOT_ENABLE "NXP_JCOPDL_AT_BOOT_ENABLE"
#define NAME_NXP_WTX_COUNT_VALUE "NXP_WTX_COUNT_VALUE"
#define NAME_NXP_MAX_RSP_TIMEOUT "NXP_MAX_RSP_TIMEOUT"
#define NAME_NXP_POWER_SCHEME "NXP_POWER_SCHEME"
#define NAME_NXP_SOF_WRITE "NXP_SOF_WRITE"
#define NAME_NXP_TP_MEASUREMENT "NXP_TP_MEASUREMENT"
#define NAME_NXP_SPI_INTF_RST_ENABLE "NXP_SPI_INTF_RST_ENABLE"
#define NAME_NXP_MAX_RNACK_RETRY "NXP_MAX_RNACK_RETRY"
#define NAME_NXP_SPI_WRITE_TIMEOUT "NXP_SPI_WRITE_TIMEOUT"
#define NAME_NXP_ESE_DEV_NODE "NXP_ESE_DEV_NODE"
#define NAME_NXP_SPI_TERMINAL_NAME "NXP_SPI_TERMINAL_NAME"
#define NAME_NXP_OMAPI_APP_SIGNATURE_1 "NXP_OMAPI_APP_SIGNATURE_1"
#define NAME_NXP_OMAPI_APP_SIGNATURE_2 "NXP_OMAPI_APP_SIGNATURE_2"
#define NAME_NXP_OMAPI_APP_SIGNATURE_3 "NXP_OMAPI_APP_SIGNATURE_3"
#define NAME_NXP_OMAPI_APP_SIGNATURE_4 "NXP_OMAPI_APP_SIGNATURE_4"
#define NAME_NXP_OMAPI_APP_SIGNATURE_5 "NXP_OMAPI_APP_SIGNATURE_5"
#define NAME_NXP_OMAPI_APP_TIMEOUT "NXP_OMAPI_APP_TIMEOUT"
#define NAME_NXP_RF_OFF_DEBOUNCE_TIMEOUT "NXP_RF_OFF_DEBOUNCE_TIMEOUT"

class EseConfig {
 public:
  static bool hasKey(const std::string& key);
  static std::string getString(const std::string& key);
  static std::string getString(const std::string& key,
                               std::string default_value);
  static unsigned getUnsigned(const std::string& key);
  static unsigned getUnsigned(const std::string& key, unsigned default_value);
  static std::vector<uint8_t> getBytes(const std::string& key);
  static void clear();

 private:
  static EseConfig& getInstance();
  EseConfig();

  ConfigFile config_;
};

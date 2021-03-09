/* ====================================================================
 * Copyright (c)2021 Summer-Time-2020。 All rights reserved.
 *Licensed under the Apache License, Version 2.0 (the "License");
 *you may not use this file except in compliance with the License.
 *You may obtain a copy of the License at

	http://www.apache.org/licenses/LICENSE-2.0

 *Unless required by applicable law or agreed to in writing, software
 *distributed under the License is distributed on an "AS IS" BASIS,
 *WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *See the License for the specific language governing permissions and
 *limitations under the License.
 * ====================================================================*/
#ifndef __DEV_FT_GATHER_H
#define __DEV_FT_GATHER_H

#include <stdio.h>
#include <string>
#include <iostream>
#include "CjsonObject.hpp"

/* 采集要素 */
#define DEVFTINFO_MAC          (0x01)  // 采集MAC
#define DEVFTINFO_CPUID        (0x02)  // 采集CPUID操作码
#define DEVFTINFO_UUID         (0x08)  // 采集主板UUID

namespace devFtGathere
{

class DevFtGather
{
public:
    DevFtGather();
    DevFtGather(unsigned long ulDevInfo);
    ~DevFtGather();

public:
    int SetDevInfoList(unsigned long ulDevInfo);
    int GetDevInfo(std::string &strDevInfo);
    int GetDevFt(std::string &strDevFt);

//private:
    std::string GetDevFtInfoMac();
    std::string GetDevFtInfoCpuId();
    std::string GetDevFtInfoUUID();

private:
    unsigned long m_ulDevInfo;
};

}



#endif
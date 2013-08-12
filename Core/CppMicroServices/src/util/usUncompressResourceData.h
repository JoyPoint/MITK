/*=============================================================================

  Library: CppMicroServices

  Copyright (c) German Cancer Research Center,
    Division of Medical and Biological Informatics

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

=============================================================================*/

#ifndef USUNCOMPRESSRESOURCEDATA_H
#define USUNCOMPRESSRESOURCEDATA_H

#include "usConfig.h"

US_BEGIN_NAMESPACE

US_EXPORT unsigned char* UncompressResourceData(const unsigned char* data, std::size_t size, std::size_t* uncompressedSize);

US_END_NAMESPACE

#endif // USUNCOMPRESSRESOURCEDATA_H

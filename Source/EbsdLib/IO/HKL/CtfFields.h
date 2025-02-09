/* ============================================================================
 * Copyright (c) 2009-2016 BlueQuartz Software, LLC
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright notice, this
 * list of conditions and the following disclaimer in the documentation and/or
 * other materials provided with the distribution.
 *
 * Neither the name of BlueQuartz Software, the US Air Force, nor the names of its
 * contributors may be used to endorse or promote products derived from this software
 * without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The code contained herein was partially funded by the following contracts:
 *    United States Air Force Prime Contract FA8650-07-D-5800
 *    United States Air Force Prime Contract FA8650-10-D-5210
 *    United States Prime Contract Navy N00173-07-C-2068
 *
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#pragma once

#include <string>
#include <vector>

#include "EbsdLib/Core/AbstractEbsdFields.h"
#include "EbsdLib/Core/EbsdLibConstants.h"
#include "EbsdLib/Core/EbsdSetGetMacros.h"
#include "EbsdLib/EbsdLib.h"
#include "EbsdLib/IO/HKL/CtfConstants.h"

/**
 * @class CtfFields CtfFields.h EbsdLib/IO/HKL/CtfFields.h
 * @brief This class simply holds the names of the columns that are present in the
 * HKL .ctf file.
 *
 * @date Aug 18, 2011
 * @version 1.0
 */
class EbsdLib_EXPORT CtfFields : public AbstractEbsdFields
{
public:
  CtfFields();
  ~CtfFields() override;
  /**
   * @brief Returns the name of the class for CtfFields
   */
  std::string getNameOfClass() const;
  /**
   * @brief Returns the name of the class for CtfFields
   */
  static std::string ClassName();

  std::vector<std::string> getFieldNames() override;

  template <typename T>
  T getFilterFeatures()
  {
    T features;
    features.push_back(EbsdLib::Ctf::Bands);
    features.push_back(EbsdLib::Ctf::Error);

    features.push_back(EbsdLib::Ctf::MAD);
    features.push_back(EbsdLib::Ctf::BC);
    features.push_back(EbsdLib::Ctf::BS);
    features.push_back(EbsdLib::Ctf::X);
    features.push_back(EbsdLib::Ctf::Y);
    return features;
  }

public:
  CtfFields(const CtfFields&) = delete;            // Copy Constructor Not Implemented
  CtfFields(CtfFields&&) = delete;                 // Move Constructor Not Implemented
  CtfFields& operator=(const CtfFields&) = delete; // Copy Assignment Not Implemented
  CtfFields& operator=(CtfFields&&) = delete;      // Move Assignment Not Implemented

private:
};

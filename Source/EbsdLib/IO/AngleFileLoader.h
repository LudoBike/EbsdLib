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

#include <memory>
#include <vector>

#include <string>

#include "EbsdLib/Core/EbsdDataArray.hpp"
#include "EbsdLib/EbsdLib.h"

/**
 * @brief The AngleFileLoader class
 * @class
 * @author
 * @version
 */
class EbsdLib_EXPORT AngleFileLoader
{
public:
  using Self = AngleFileLoader;
  using Pointer = std::shared_ptr<Self>;
  using ConstPointer = std::shared_ptr<const Self>;
  using WeakPointer = std::weak_ptr<Self>;
  using ConstWeakPointer = std::weak_ptr<const Self>;
  static Pointer NullPointer();

  static Pointer New();

  /**
   * @brief Returns the name of the class for AngleFileLoader
   */
  std::string getNameOfClass() const;
  /**
   * @brief Returns the name of the class for AngleFileLoader
   */
  static std::string ClassName();

  ~AngleFileLoader();

  enum AngleRepresentation
  {
    EulerAngles,
    QuaternionAngles,
    RodriguezAngles
  };

  /**
   * @brief Setter property for ErrorMessage
   */
  void setErrorMessage(const std::string& value);

  /**
   * @brief Getter property for ErrorMessage
   * @return Value of ErrorMessage
   */
  std::string getErrorMessage() const;

  /**
   * @brief Setter property for ErrorCode
   */
  void setErrorCode(int value);

  /**
   * @brief Getter property for ErrorCode
   * @return Value of ErrorCode
   */
  int getErrorCode() const;

  /**
   * @brief Setter property for InputFile
   */
  void setInputFile(const std::string& value);

  /**
   * @brief Getter property for InputFile
   * @return Value of InputFile
   */
  std::string getInputFile() const;

  /**
   * @brief Setter property for FileAnglesInDegrees
   */
  void setFileAnglesInDegrees(bool value);

  /**
   * @brief Getter property for FileAnglesInDegrees
   * @return Value of FileAnglesInDegrees
   */
  bool getFileAnglesInDegrees() const;

  /**
   * @brief Setter property for OutputAnglesInDegrees
   */
  void setOutputAnglesInDegrees(bool value);

  /**
   * @brief Getter property for OutputAnglesInDegrees
   * @return Value of OutputAnglesInDegrees
   */
  bool getOutputAnglesInDegrees() const;

  /**
   * @brief Setter property for AngleRepresentation
   */
  void setAngleRepresentation(uint32_t value);

  /**
   * @brief Getter property for AngleRepresentation
   * @return Value of AngleRepresentation
   */
  uint32_t getAngleRepresentation() const;

  /**
   * @brief Setter property for Delimiter
   */
  void setDelimiter(const std::string& value);

  /**
   * @brief Getter property for Delimiter
   * @return Value of Delimiter
   */
  std::string getDelimiter() const;

  /**
   * @brief Setter property for IgnoreMultipleDelimiters
   */
  void setIgnoreMultipleDelimiters(bool value);

  /**
   * @brief Getter property for IgnoreMultipleDelimiters
   * @return Value of IgnoreMultipleDelimiters
   */
  bool getIgnoreMultipleDelimiters() const;

  EbsdLib::FloatArrayType::Pointer loadData();

protected:
  AngleFileLoader();

public:
  AngleFileLoader(const AngleFileLoader&) = delete;            // Copy Constructor Not Implemented
  AngleFileLoader(AngleFileLoader&&) = delete;                 // Move Constructor Not Implemented
  AngleFileLoader& operator=(const AngleFileLoader&) = delete; // Copy Assignment Not Implemented
  AngleFileLoader& operator=(AngleFileLoader&&) = delete;      // Move Assignment Not Implemented

private:
  std::string m_ErrorMessage = {};
  int m_ErrorCode = {};
  std::string m_InputFile = {};
  bool m_FileAnglesInDegrees = {};
  bool m_OutputAnglesInDegrees = {};
  uint32_t m_AngleRepresentation = {};
  std::string m_Delimiter = {};
  bool m_IgnoreMultipleDelimiters = {};
};

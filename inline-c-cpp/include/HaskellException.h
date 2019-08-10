#pragma once

#include <memory>
#include <string>

#include "HaskellStablePtr.h"

class HaskellException : public std::exception {
public:
  std::shared_ptr<HaskellStablePtr> haskellExceptionStablePtr;
  std::string renderedException;

  HaskellException(std::string renderedException, void *haskellExceptionStablePtr);
  HaskellException(const HaskellException &);
  virtual const char* what() const noexcept override;

};

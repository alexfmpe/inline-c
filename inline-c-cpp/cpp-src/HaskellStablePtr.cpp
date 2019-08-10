#include "HsFFI.h"

#include "HaskellStablePtr.h"

HaskellStablePtr::~HaskellStablePtr() {
  hs_free_stable_ptr(stablePtr);
}

// Copyright (c) 2016 Intel Corporation. All rights reserved.
// Use of this source code is governed by a MIT-style license that can be
// found in the LICENSE file.

#include "primitives_return.h"

PrimitivesReturn::PrimitivesReturn() {
}

PrimitivesReturn::~PrimitivesReturn() {
}

PrimitivesReturn& PrimitivesReturn::operator = (const PrimitivesReturn& rhs) {
  if (&rhs != this) {
    // TODO(widl-nan): copy members from rhs
  }
  return *this;
}

int8_t PrimitivesReturn::showByte() {
  return -127;
}

uint8_t PrimitivesReturn::showOctet() {
  return 255;
}

int16_t PrimitivesReturn::showShort() {
  return -32768;
}

uint16_t PrimitivesReturn::showUnsignedShort() {
  return 65535;
}

int32_t PrimitivesReturn::showLong() {
  return -1234567;
}

uint32_t PrimitivesReturn::showUnsignedLong() {
  return 1234567;
}

std::string PrimitivesReturn::showDOMString() {
  return "DOMString";
}

bool PrimitivesReturn::showBoolean() {
    return vBoolean_;
}

double PrimitivesReturn::showFloat() {
    return vFloat_;
}

double PrimitivesReturn::showDouble() {
    return vDouble_;
}

double PrimitivesReturn::showUnrestrictFloat() {
    return vUnrestrictFloat_;
}

double PrimitivesReturn::showUnrestrictDouble() {
    return vUnrestrictDouble_;
}


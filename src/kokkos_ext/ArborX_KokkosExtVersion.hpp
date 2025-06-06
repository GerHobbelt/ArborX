/****************************************************************************
 * Copyright (c) 2025, ArborX authors                                       *
 * All rights reserved.                                                     *
 *                                                                          *
 * This file is part of the ArborX library. ArborX is                       *
 * distributed under a BSD 3-clause license. For the licensing terms see    *
 * the LICENSE file in the top-level directory.                             *
 *                                                                          *
 * SPDX-License-Identifier: BSD-3-Clause                                    *
 ****************************************************************************/

#ifndef ARBORX_KOKKOS_EXT_VERSION_HPP
#define ARBORX_KOKKOS_EXT_VERSION_HPP

#include <Kokkos_Macros.hpp>

#include <sstream>
#include <string>

namespace ArborX::Details::KokkosExt
{

inline std::string version()
{
  std::stringstream sstr;
  sstr << KOKKOS_VERSION / 10000 << "." << (KOKKOS_VERSION % 10000) / 100 << "."
       << KOKKOS_VERSION % 100;
  return sstr.str();
}

} // namespace ArborX::Details::KokkosExt

#endif

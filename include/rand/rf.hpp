/*################################################################################
  ##
  ##   Copyright (C) 2011-2018 Keith O'Hara
  ##
  ##   This file is part of the StatsLib C++ library.
  ##
  ##   Licensed under the Apache License, Version 2.0 (the "License");
  ##   you may not use this file except in compliance with the License.
  ##   You may obtain a copy of the License at
  ##
  ##       http://www.apache.org/licenses/LICENSE-2.0
  ##
  ##   Unless required by applicable law or agreed to in writing, software
  ##   distributed under the License is distributed on an "AS IS" BASIS,
  ##   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  ##   See the License for the specific language governing permissions and
  ##   limitations under the License.
  ##
  ################################################################################*/

/* 
 * Sample from a F distribution
 */

#ifndef _statslib_rf_HPP
#define _statslib_rf_HPP

template<typename T>
statslib_inline
return_t<T> rf(const T df1_par, const T df2_par, rand_engine_t& engine);

template<typename T>
statslib_inline
return_t<T> rf(const T df1_par, const T df2_par, ullint_t seed_val = std::random_device{}());

template<typename T>
statslib_inline
void rf_int(const T df1_par, const T df2_par, T* vals_out, const ullint_t num_elem);

template<typename mT, typename eT>
statslib_inline
mT rf(const ullint_t n, const ullint_t k, const eT df1_par, const eT df2_par);

#include "rf.ipp"

#endif

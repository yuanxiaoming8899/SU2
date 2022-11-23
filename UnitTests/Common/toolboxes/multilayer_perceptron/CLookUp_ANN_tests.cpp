/*!
 * \file CLookUp_ANN_tests.cpp
 * \brief Unit tests for NdFlattener template classes.
 * \author M. Aehle
 * \version 7.4.0 "Blackbird"
 *
 * SU2 Project Website: https://su2code.github.io
 *
 * The SU2 Project is maintained by the SU2 Foundation
 * (http://su2foundation.org)
 *
 * Copyright 2012-2022, SU2 Contributors (cf. AUTHORS.md)
 *
 * SU2 is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * SU2 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with SU2. If not, see <http://www.gnu.org/licenses/>.
 */

#include "catch.hpp"
#include "../../../../Common/include/toolboxes/multilayer_perceptron/CLookUp_ANN.hpp"
#include "../../../../Common/include/toolboxes/multilayer_perceptron/CIOMap.hpp"

TEST_CASE("LookUp ANN test", "[LookUpANN]"){
  CLookUp_ANN ANN("mlp_collection.mlp");

}

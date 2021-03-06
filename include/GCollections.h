////////////////////////////////////////////////////////////////////////
// Simple Geometric Library (sglib)
// Copyright (C) 2020   Artemiy Kanshin
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////

#ifndef _GCOLLECTIONS_H_
#define _GCOLLECTIONS_H_

#include <memory>
#include <vector>

namespace sgl
{

class GPoint3D;
using GPoint3DArray = std::vector<GPoint3D>;
using GPoint3DPtr = std::shared_ptr<GPoint3D>;
using GPoint3DPtrArray = std::vector<GPoint3DPtr>;

class GVector3D;
using GVector3DArray = std::vector<GVector3D>;
using GVector3DPtr = std::shared_ptr<GVector3D>;
using GVector3DPtrArray = std::vector<GVector3DPtr>;

class GMatrix;
using GMatrixArray = std::vector<GMatrix>;
using GMatrixPtr = std::shared_ptr<GMatrix>;
using GMatrixPtrArray = std::vector<GMatrixPtr>;

} //namespace sgl

#endif //_GCOLLECTIONS_H_

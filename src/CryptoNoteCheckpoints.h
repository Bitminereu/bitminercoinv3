// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {  
  {100,  "ac0d4a83ac54bba091449c51aee9b32824fcf05a243436b4a84f8d520e4073d8"},
  {1000, "660309ae9737bd8b9ebea0ecaed97a31b86f98cdbdced0615caddca34a4c7d8a"},
  {5000, "0d0f7d891e91f1295c9905f704e5f72bffe0bc0376ea76a313a8595393948a22"},
  {10000, "a59180795cc8542d9efe41ec2d37916a9e13f16113c073accf4e98009e90d905"},
  {15000, "1d436c529691d75fae01a9fe9522cdbbc3afa3effdfbd14ece92c87224c9a4a0"}
};
}

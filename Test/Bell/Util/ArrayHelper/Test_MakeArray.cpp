//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#include <gtest/gtest.h>
#include "../../../../Source/Bell/Util/ArrayHelper/MakeArray.hpp"

TEST(Bell_ArrayHelper, MakeArray) {
	EXPECT_EQ((std::array<int        , 4> {{ 0, 1, 2, 3 }}), Bell::ArrayHelper::makeArray<int        >(0, 1, 2, 3));
	EXPECT_EQ((std::array<std::string, 1> {{ u8"foo"    }}), Bell::ArrayHelper::makeArray<std::string>(u8"foo"   ));
	EXPECT_EQ((std::array<char       , 0> {{            }}), Bell::ArrayHelper::makeArray<char>       (          ));
}

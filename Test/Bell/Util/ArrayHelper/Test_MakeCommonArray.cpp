﻿//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#include <gtest/gtest.h>
#include "../../../../Source/Bell/Util/ArrayHelper/MakeCommonArray.hpp"

TEST(Bell_ArrayHelper, MakeCommonArray) {
	using namespace std::string_literals;

	EXPECT_EQ((std::array<long double, 3> {{ 0.0L, 1.0L, 2.0L }}), Bell::ArrayHelper::makeCommonArray(0.0L, 1.0, 2.f));
	EXPECT_EQ((std::array<std::string, 1> {{ u8"foo"          }}), Bell::ArrayHelper::makeCommonArray(u8"foo"s      ));
}

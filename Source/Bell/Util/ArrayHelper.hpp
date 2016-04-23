//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#pragma once

#include "ArrayHelper/ArrayHelper.hpp"

namespace Bell {
	template <typename Type, typename... Args>
	using ArrayHelper::makeArray;

	template <typename... Args>
	using ArrayHelper::makeCommonArray;

	template <typename Type, typename Pred, typename... Args>
	using ArrayHelper::makeSortedArray;

	template <typename Pred, typename... Args>
	using ArrayHelper::makeSortedCommonArray;

}	//	namespace Bell

//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#pragma once

#include <array>

namespace Bell { namespace ArrayHelper {

	/**
	 * @brief      std::arrayを生成するヘルパ関数
	 *
	 * @param[in]  args       生成する配列の要素
	 *
	 * @tparam     Type       生成する配列の要素の型
	 * @tparam     Args
	 *
	 * @return     std::array<Type, sizeof...(Args)>
	 */
	template <typename Type, typename... Args>
	constexpr std::array<Type, sizeof...(Args)> makeArray(Args&&... args)
	{
		return std::array<Type, sizeof...(Args)> {{ std::forward<Args>(args)... }};
	}

}}	//	namespace Bell::ArrayHelper

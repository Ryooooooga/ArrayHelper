//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#pragma once

#include "MakeArray.hpp"

namespace Bell { namespace ArrayHelper {

	/**
	 * @brief      std::arrayを生成するヘルパ関数
	 *
	 * @param[in]  args       生成する配列の要素
	 *
	 * @tparam     Args
	 *
	 * @return     引数から変換可能な要素型の配列
	 */
	template <typename... Args>
	constexpr std::array<std::decay_t<std::common_type_t<Args...>>, sizeof...(Args)> makeCommonArray(Args&&... args)
	{
		return makeArray<std::decay_t<std::common_type_t<Args...>>>(std::forward<Args>(args)...);
	}

}}	//	namespace Bell::ArrayHelper

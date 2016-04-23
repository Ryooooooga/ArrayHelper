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
	 * @brief      ソート済みstd::arrayを生成するヘルパ関数
	 *
	 * @param[in]  pred  コンパレータ
	 * @param[in]  args  生成する配列の要素
	 *
	 * @tparam     Type  生成する配列の要素の型
	 * @tparam     Pred  コンパレータオブジェクトの型
	 * @tparam     Args
	 *
	 * @return     std::array<Type, sizeof...(Args)>
	 */
	template <typename Type, typename Pred, typename... Args>
	std::array<Type, sizeof...(Args)> makeSortedArray(Pred&& pred, Args&&... args)
	{
		auto a = makeArray<Type>(std::forward<Args>(args)...);
		std::sort(a.begin(), a.end(), pred);

		return a;
	}

}}	//	namespace Bell::ArrayHelper

# ArrayHelper
std::array<>を生成するための関数群

# Examples
```cpp
using namespace Bell;

// std::array<int, 3> {{ 0, 1, 2 }}
constexpr auto a = makeArray<int>(0, 1, 2);

// std::array<double, 2> {{ 10.0, 20.0 }}
constexpr auto b = makeCommonArray(10.0f, 20.0);

// std::array<int, 3> {{ 0, 1, 2 }}
auto c = makeSortedArray<int>(std::less<int>(), 2, 0, 1);

// std::array<double, 2> {{ 10.0, 20.0 }}
auto d = makeSortedCommonArray(std::less<double>(), 20.0, 10.0f);
```

# License
Utf is distributed under the [Boost Software License, Version 1.0](http://www.boost.org/LICENSE_1_0.txt).


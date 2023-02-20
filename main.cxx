#include <abn/abn.hxx>
#include <cassert>
#include <iostream>

int main() {
  constexpr auto LENGTH = 4;
  const auto algo = abn::AutoBiographicalNumbers{};
  const auto numbers = algo(LENGTH);
  const decltype(numbers) shouldbe = { 1210, 2020, };
  assert(numbers == shouldbe);
  for (const auto& number : numbers) {
    std::cout << number << "\t";
  }
  std::cout << std::endl;

  return 0;
}

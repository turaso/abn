#include "abn/auto_biographical_numbers.hh"

namespace abn {

std::vector<AutoBiographicalNumbers::num_type>
AutoBiographicalNumbers::operator()(const std::size_t& length) const {
  constexpr static auto BASE = 10;
  std::vector<num_type> ret;
  num_type min = 1;
  for (auto i = 1; i < length; i++) {
    min *= BASE;
  }
  const auto max = min * BASE - 1;
  for (auto i = min; i <= max; i++) {
    if (AutoBiographicalNumbers::isAutoBiographicalNumber(i, BASE)) {
      ret.push_back(i);
    }
  }
  return ret;
}

bool
AutoBiographicalNumbers::isAutoBiographicalNumber(
    const num_type& number,
    const num_type& base
) {
  for (auto i = 0; i < base; i++) {
    const auto begin = i;
    std::vector<num_type> digits;
    const auto str = std::to_string(number);
    for (const auto& c : str) {
      digits.push_back(c - '0');
    }
    bool bad = false;
    for (auto j = 0; j < digits.size(); j++) {
      if (std::count_if(digits.begin(), digits.end(), [&j](const auto& v) {
        return v == j;
      }) != digits[j]) {
        bad = true;
        break;
      }
    }
    if (bad) {
      continue;
    } else {
      return true;
    }
  }
  return false;
}

} /// namespace abn

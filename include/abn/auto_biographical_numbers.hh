#ifndef AUTOBIOGRAPHICALNUMBERS_HXX_
#define AUTOBIOGRAPHICALNUMBERS_HXX_

#include <cstddef>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>

namespace abn {

class AutoBiographicalNumbers {
public:
  //! type of numbers
  using num_type = std::size_t;
  /*!
   * @brief finds all autobiographical numbers of the given length
   * @param length is the given length of needed autobiographical numbers
   * @return found autobiographical numbers of the given length
   */
  std::vector<num_type> operator()(const std::size_t& length) const;
  /*!
   * @brief checks if the given number of the given base is autobiographical
   * @param number is the number to be checked
   * @param base is the base of the number to be used
   * @return true if the given number of the given base is autobiographical and
   * false else
   */
  static bool isAutoBiographicalNumber(
      const num_type& number,
      const num_type& base
  );
protected:
private:
};

using Abn = AutoBiographicalNumbers;

} /// namespace abn

#endif /// AUTOBIOGRAPHICALNUMBERS_HXX_

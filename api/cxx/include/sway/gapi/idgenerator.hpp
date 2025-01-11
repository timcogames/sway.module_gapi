#ifndef SWAY_GAPI_IDGENERATOR_HPP
#define SWAY_GAPI_IDGENERATOR_HPP

#include <sway/core.hpp>
#include <sway/gapi/typedefs.hpp>

namespace sway::gapi {

class IdGenerator {
public:
#pragma region "Ctors/Dtor"
  /** \~english @name Constructor & Destructor */ /** \~russian @name Конструктор и Деструктор */
  /** @{ */

  virtual ~IdGenerator() = default;

  /** @} */
#pragma endregion

#pragma region "Pure virtual methods"
  /** \~english @name Pure virtual methods */ /** \~russian @name Чисто виртуальные методы */
  /** @{ */

  virtual auto getNextUid() -> ObjectUid_t = 0;

  /** @} */
#pragma endregion
};

}  // namespace sway::gapi

#endif  // SWAY_GAPI_IDGENERATOR_HPP

#ifndef FLIPPOINTINGRELATIVE_HPP
#define FLIPPOINTINGRELATIVE_HPP

#include "RemapFuncBase.hpp"

namespace org_pqrs_Karabiner {
namespace RemapFunc {
class FlipPointingRelative final : public RemapFuncBase {
public:
  FlipPointingRelative(void) : RemapFuncBase(BRIDGE_REMAPTYPE_FLIPPOINTINGRELATIVE),
                               flipHorizontal_(false),
                               flipVertical_(false) {}

  bool remap(RemapParams& remapParams) override;

  void add(AddDataType datatype, AddValue newval) override;

private:
  bool flipHorizontal_;
  bool flipVertical_;
};
}
}

#endif

#ifndef GLOBALLOCK_HPP
#define GLOBALLOCK_HPP

#include <IOKit/IOLib.h>

namespace org_pqrs_Karabiner {
class GlobalLock final {
public:
  static void initialize(void);
  static void terminate(void);

  class ScopedLock final {
  public:
    ScopedLock(void);
    ~ScopedLock(void);
    bool operator!(void)const;

  private:
    IOLock* lock_;
  };

  class ScopedUnlock final {
  public:
    ScopedUnlock(void);
    ~ScopedUnlock(void);
    bool operator!(void)const;

  private:
    IOLock* lock_;
  };

private:
  static IOLock* lock_;
};
}

#endif

#include "singleton.h"
#include <memory>
#include <mutex>
#include <ostream>

std::unique_ptr<MySingleton> MySingleton::m_instance;
std::once_flag MySingleton::m_onceFlag;

MySingleton &MySingleton::getSingleInst() {
  std::call_once(m_onceFlag, []() { m_instance.reset(new MySingleton()); });
  return *m_instance;
}

std::ostream &operator<<(std::ostream &os, const MySingleton &instance) {
    os << "MySingleton instance " << "\n";
    return os;
}
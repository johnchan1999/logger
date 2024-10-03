#ifndef SINGLETON_HH_
#define SINGLETON_HH_
#include <memory>
#include <mutex>
class MySingleton {

public:
  MySingleton(const MySingleton &) = delete;
  MySingleton operator=(const MySingleton &) = delete;
  static MySingleton &getSingleInst();
private:
  MySingleton() = default;
  ~MySingleton() = default;

  static std::unique_ptr<MySingleton> m_instance;
  static std::once_flag m_onceFlag;
  
};
#endif //SINGLETON_HH_
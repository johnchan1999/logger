#ifndef __UNIQUEPTR_HH__
#define __UNIQUEPTR_HH__

#include <iterator>
#include <memory>
class MyUniquePtr {



//   template <typename T, typename... Args>
//   std::unique_ptr<T> make_unique(Args&&... args){
//     return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
//   }

template <typename T, typename... Args>
std::unique_ptr<T> make_unique(Args&&... args) {
  return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

  
};



#endif //__UNIQUEPTR_HH__
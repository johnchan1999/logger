#pragma once
#ifndef __WIDGET_HH__
#define __WIDGET_HH__
#include <memory>
class Widget {
public:
  void draw();
  Widget(int x);
  ~Widget() = default;
  Widget(Widget &&) = default;
  Widget(Widget &) = delete;
  Widget &operate(Widget &&);
  Widget &operate(const Widget &) = delete;

private:
  class imple;
  std::unique_ptr<imple> pimple;
};

#endif //__WIDGET_HH__
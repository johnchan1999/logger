#include "Widget.h"
#include <iostream>
class Widget::imple {
private:
  int m_x;

public:
  void draw(const Widget &w) {
    std::cout << "class m_x :" << m_x << "\n";
    return;
  }
  imple(int x) : m_x(x) {}
};

void Widget::draw() { pimple->draw(*this); }
Widget::Widget(int x) : pimple(std::make_unique<imple>(x)) {}
// Widget::~Widget() = default;
// Widget::Widget(Widget &&) = default;

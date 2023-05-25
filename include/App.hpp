#pragma once

#include "Window.hpp"

class App {
 public:
  App();
  
  void Run();
 private:
  Window* main_window;
};
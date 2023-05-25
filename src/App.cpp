#include <iostream>

#include "App.hpp"

App::App() {
  main_window = new Window();
  main_window->AddChild(new WindowWithText("hello"));
  main_window->AddChild(new WindowWithText("wolrd"));
}

void App::Run() {
  std::cout << "run!\n";

  main_window->draw();
}
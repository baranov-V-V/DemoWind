#pragma once

#include <vector>
#include <iostream>

class Window {
 public:
  Window() {

  };
  
  virtual void draw() {
    printf("-------------------------------\n");
    printf("|                             |\n");
    printf("|                             |\n");
    printf("|                             |\n");
    printf("-------------------------------\n");

    for (Window* elem : child) {
      elem->draw();
    }
    
  };

  void AddChild(Window* child_new) {
    child.push_back(child_new);
  }

 private:
  std::vector<Window*> child;
};

class WindowWithText : public Window {
 public:
  WindowWithText(char* text) {
    this->text = text;
  };
  
  void draw() {
    printf("|        %s                |\n", text);
  };

 private:
  int color;
  char* text;
};
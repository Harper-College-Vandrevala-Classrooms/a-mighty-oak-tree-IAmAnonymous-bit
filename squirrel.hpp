#pragma once

using namespace std;

#include <string>

class Squirrel {
  private:
    string name;

  public:
    Squirrel()
    {
        this->name = "Unnamed";
    }

    Squirrel(string name) {
      this->name = name;
    }

    string get_name() {
      return this->name;
    }
};
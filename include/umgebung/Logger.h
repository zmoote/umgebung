#ifndef LOGGER_H
#define LOGGER_H

#include <string>

class Logger {

public:

  enum Level {
    Error, Warning, Info // etc
  };

  static void log(Level level, std::string message);

};

#endif
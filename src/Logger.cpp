#include "../include/umgebung/Logger.h"
#include <iostream>

void Logger::log(Level level, std::string message) {

  switch(level) {
    
    case Error:
      std::cout << "[ERROR]: " << message << std::endl;
      break;
      
    case Warning:
      std::cout << "[WARNING]: " << message << std::endl;
      break;
    
    case Info:
      std::cout << "[ERROR]: " << message << std::endl;
      break;
      
  }
}
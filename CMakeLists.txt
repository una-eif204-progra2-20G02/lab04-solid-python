cmake_minimum_required(VERSION 3.14)
project(lab04-solid)

set(CMAKE_CXX_STANDARD 17)
add_executable(game Game.h Game.cpp MainGame.cpp Physical.cpp Physical.h Digital.cpp Digital.h Streaming.cpp Streaming.h IShipment.cpp IShipment.h IReplace.cpp IReplace.h IDiscount.cpp IDiscount.h)
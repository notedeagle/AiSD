cmake_minimum_required(VERSION 3.14)
project(AiSD)

set(CMAKE_CXX_STANDARD 14)

add_executable(Horner AiSD/AiSD.cpp AiSD/Horner.cpp AiSD/Horner.h AiSD/Dzielenie.cpp AiSD/Dzielenie.h AiSD/ParaElementow.cpp AiSD/ParaElementow.h)
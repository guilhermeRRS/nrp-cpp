
cmake_minimum_required (VERSION 3.5.0)

project(NRP)

add_executable(theapp src/main.cpp)
add_library(heuristicalFramework)
add_library(heuristicsNRP)

target_link_libraries(theapp PUBLIC heuristicalFramework)
target_link_libraries(theapp PUBLIC heuristicsNRP)

#FOR heuristicalFramework
target_sources(heuristicalFramework PUBLIC ./src/heuristicalFramework/notImplemented.cpp)
target_sources(heuristicalFramework PUBLIC ./src/heuristicalFramework/holder/holder.cpp)
target_sources(heuristicalFramework PUBLIC ./src/heuristicalFramework/method/method.cpp)
target_sources(heuristicalFramework PUBLIC ./src/heuristicalFramework/method/objective.cpp)
target_sources(heuristicalFramework PUBLIC ./src/heuristicalFramework/method/validator.cpp)
target_sources(heuristicalFramework PUBLIC ./src/heuristicalFramework/move/change.cpp)
target_sources(heuristicalFramework PUBLIC ./src/heuristicalFramework/move/moveGen.cpp)
target_sources(heuristicalFramework PUBLIC ./src/heuristicalFramework/problem/data.cpp)
target_sources(heuristicalFramework PUBLIC ./src/heuristicalFramework/problem/model.cpp)
target_sources(heuristicalFramework PUBLIC ./src/heuristicalFramework/problem/solution.cpp)
target_sources(heuristicalFramework PUBLIC ./src/heuristicalFramework/problem/problem.cpp)
target_include_directories(heuristicalFramework PUBLIC ./include/heuristicalFramework)
target_include_directories(heuristicalFramework PUBLIC ./include/heuristicalFramework/holder)
target_include_directories(heuristicalFramework PUBLIC ./include/heuristicalFramework/method)
target_include_directories(heuristicalFramework PUBLIC ./include/heuristicalFramework/move)
target_include_directories(heuristicalFramework PUBLIC ./include/heuristicalFramework/problem)


#the files of heuristicsNRP
target_sources(heuristicsNRP PUBLIC ./src/heuristicsNRP/holder/holder.cpp)
target_include_directories(heuristicsNRP PUBLIC ./include/heuristicsNRP)
target_include_directories(heuristicsNRP PUBLIC ./include/heuristicsNRP/holder)
# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/SportsCar_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/SportsCar_autogen.dir/ParseCache.txt"
  "SportsCar_autogen"
  )
endif()

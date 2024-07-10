# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/MoreCars_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/MoreCars_autogen.dir/ParseCache.txt"
  "MoreCars_autogen"
  )
endif()

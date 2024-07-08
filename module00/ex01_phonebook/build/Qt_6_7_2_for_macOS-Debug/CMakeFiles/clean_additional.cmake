# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/ex01_phonebook_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/ex01_phonebook_autogen.dir/ParseCache.txt"
  "ex01_phonebook_autogen"
  )
endif()

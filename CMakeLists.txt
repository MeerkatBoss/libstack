add_library(libstack int_stack.cpp) 

add_subdirectory(./utils)

target_link_libraries(libstack PUBLIC libutils liblogs)

target_include_directories(libstack PUBLIC
                        ${CMAKE_CURRENT_LIST_DIR})
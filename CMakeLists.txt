set(SFML_UTILS_PATH ${CMAKE_CURRENT_LIST_DIR})

include_directories(${SFML_UTILS_PATH})

file(GLOB SOURCES
    ${SOURCES}
    ${SFML_UTILS_PATH}/sfmlutils.cpp 
    )

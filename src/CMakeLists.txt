list(APPEND
    SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/main.c
)

add_executable(example ${SOURCES})
target_link_libraries(example PUBLIC tvn)

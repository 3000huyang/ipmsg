


FILE(GLOB SRC_FILES *.c *.h)



add_executable(IPMsg
${SRC_FILES}
)

target_link_libraries(IPMsg
pthread
)
if(CONFIG_TAHU)
zephyr_interface_library_named(TAHU)

target_include_directories(TAHU INTERFACE client_libraries/c/include)

zephyr_include_directories(client_libraries/c/include)

zephyr_library()
zephyr_library_sources(
    client_libraries/c/src/pb_common.c
    client_libraries/c/src/pb_decode.c
    client_libraries/c/src/pb_encode.c
    client_libraries/c/src/tahu.c
    client_libraries/c/src/tahu.pb.c
)
zephyr_library_link_libraries(TAHU)
target_link_libraries(TAHU INTERFACE zephyr_interface)
endif()

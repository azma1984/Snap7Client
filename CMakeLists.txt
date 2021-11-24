cmake_minimum_required(VERSION 3.5)

project(Snap7Client LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(snap7-full-1.4.2/src
                    snap7-full-1.4.2/src/core
                    snap7-full-1.4.2/src/sys
                    )

add_executable(Snap7Client
                            snap7-full-1.4.2/src/sys/snap_threads.h
                            snap7-full-1.4.2/src/sys/snap_threads.cpp
                            snap7-full-1.4.2/src/sys/snap_msgsock.h
                            snap7-full-1.4.2/src/sys/snap_msgsock.cpp
                            snap7-full-1.4.2/src/sys/snap_platform.h
                            snap7-full-1.4.2/src/sys/sol_threads.h
                            snap7-full-1.4.2/src/sys/snap_sysutils.h
                            snap7-full-1.4.2/src/sys/snap_sysutils.cpp
                            snap7-full-1.4.2/src/sys/snap_tcpsrvr.h
                            snap7-full-1.4.2/src/sys/snap_tcpsrvr.cpp
                            snap7-full-1.4.2/src/sys/win_threads.h

                            snap7-full-1.4.2/src/core/s7_micro_client.h
                            snap7-full-1.4.2/src/core/s7_micro_client.cpp
                            snap7-full-1.4.2/src/core/s7_client.h
                            snap7-full-1.4.2/src/core/s7_client.cpp
                            snap7-full-1.4.2/src/core/s7_server.h
                            snap7-full-1.4.2/src/core/s7_server.cpp
                            snap7-full-1.4.2/src/core/s7_firmware.h
                            snap7-full-1.4.2/src/core/s7_isotcp.h
                            snap7-full-1.4.2/src/core/s7_isotcp.cpp
                            snap7-full-1.4.2/src/core/s7_partner.h
                            snap7-full-1.4.2/src/core/s7_partner.cpp
                            snap7-full-1.4.2/src/core/s7_peer.h
                            snap7-full-1.4.2/src/core/s7_peer.cpp
                            snap7-full-1.4.2/src/core/s7_text.h
                            snap7-full-1.4.2/src/core/s7_text.cpp
                            snap7-full-1.4.2/src/core/s7_types.h
                            main.cpp
                            )

target_link_libraries(Snap7Client "wsock32.lib")
target_link_libraries(Snap7Client "Winmm.lib")




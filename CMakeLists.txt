cmake_minimum_required (VERSION 2.6)
project(DevFtGather)

#set window dll info
if(MSVC)
    set(MY_VERSIONINFO_RC "${CMAKE_SOURCE_DIR}/VersionInfo.rc")
    configure_file("${CMAKE_SOURCE_DIR}/VersionInfo.rc.in"
                   "${MY_VERSIONINFO_RC}")
endif()

file(GLOB_RECURSE CURRENT_HEADERS  *.h *.hpp)
source_group("Include" FILES ${CURRENT_HEADERS}) 

include_directories(${CMAKE_SOURCE_DIR}/) 
aux_source_directory(${CMAKE_SOURCE_DIR}/ DIR_SRCS)
 
add_library(DevFtGather SHARED ${DIR_SRCS} ${MY_VERSIONINFO_RC} ${CURRENT_HEADERS} )



 



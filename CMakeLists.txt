cmake_minimum_required(VERSION 3.9)
project(AMemPool)

set(CMAKE_CXX_STANDARD 11)

set(NGINX_SOURCE
        src/nginx/ngx_palloc.c
        src/nginx/ngx_palloc.h
        )

if(UNIX)
    add_definitions(-DIS_UNIX)
elseif(WIN32)
    add_definitions(-DIS_WIN32)
endif()

# use nginx's mempool backend
add_definitions(-DAMEMPOLL_NGINX_BACK_END)

add_library(AMemPool STATIC ${NGINX_SOURCE} src/AMemPool.cpp src/AMemPool.h)

add_executable(Test src/sample.cpp)
add_dependencies(Test AMemPool)
target_link_libraries(Test AMemPool)
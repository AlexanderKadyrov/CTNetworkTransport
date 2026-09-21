cmake_minimum_required(VERSION 3.14)
project(CTNetworkTransport LANGUAGES CXX)

add_library(CTNetworkTransport INTERFACE)

add_library(CTNetworkTransport::CTNetworkTransport ALIAS CTNetworkTransport)

target_include_directories(CTNetworkTransport INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

target_compile_features(CTNetworkTransport INTERFACE cxx_std_98)
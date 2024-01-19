set(EXE_SOURCES
    "main.cpp")
set(EXE_INCLUDES
    "./")

add_executable(${EXECUTABLE_NAME} ${EXE_SOURCES})
target_include_directories(${EXECUTABLE_NAME} PUBLIC
    ${EXE_INCLUDES})

# Setting ASSETS_PATH
target_compile_definitions(${EXECUTABLE_NAME} PUBLIC ASSETS_PATH="${CMAKE_CURRENT_SOURCE_DIR}/../assets/") # Set the asset path macro to the absolute path on the dev machine
#target_compile_definitions(${PROJECT_NAME} PUBLIC ASSETS_PATH="./assets") # Set the asset path macro in release mode to a relative path that assumes the assets folder is in the same directory as the game executable


target_link_libraries(
    ${EXECUTABLE_NAME}
    PUBLIC ${LIBRARY_NAME}
        fmt::fmt
        spdlog::spdlog
        cxxopts::cxxopts
        raylib)
        

if (ENABLE_WARNINGS)
    target_set_warnings(
        ${EXECUTABLE_NAME}
        ON
        OFF
    )
endif()
if (ENABLE_LTO)
    target_enable_lto(
        ${EXECUTABLE_NAME}
        ${ENABLE_LTO}
    )
endif()

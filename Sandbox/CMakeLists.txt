add_executable(Sandbox)

set_target_properties(Sandbox PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR}/$<CONFIG>/Sandbox
        ARCHIVE_OUTPUT_DIRECTORY ${OUTPUT_DIR}/$<CONFIG>/Sandbox
        LIBRARY_OUTPUT_DIRECTORY ${OUTPUT_DIR}/$<CONFIG>/Sandbox
        INTERPROCEDURAL_OPTIMIZATION_RELEASE ON
)

target_sources(Sandbox
        PRIVATE
        src/SandboxApp.cpp
)

target_include_directories(Sandbox
        PRIVATE
                ${CMAKE_SOURCE_DIR}/Elysio/src
)

target_link_libraries(Sandbox
        PRIVATE Elysio
)
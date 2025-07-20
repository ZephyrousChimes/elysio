add_library(Elysio SHARED
		include/Elysio/Core.h)

set_target_properties(Elysio PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR}/$<CONFIG>/Elysio
	ARCHIVE_OUTPUT_DIRECTORY ${OUTPUT_DIR}/$<CONFIG>/Elysio
	LIBRARY_OUTPUT_DIRECTORY ${OUTPUT_DIR}/$<CONFIG>/Elysio
	INTERPROCEDURAL_OPTIMIZATION_RELEASE ON
)

target_sources(Elysio
	PRIVATE
		src/Elysio.cpp
		include/Elysio/Elysio.h
		include/Elysio/Core.h
)

target_include_directories(Elysio
	PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_definitions(Elysio PRIVATE EL_BUILD_DLL)

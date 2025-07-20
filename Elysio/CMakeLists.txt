add_library(Elysio SHARED
		src/Core.h
		src/Application.h
		src/Application.cpp
		src/Application.h
		src/EntryPoint.h)

set_target_properties(Elysio PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR}/$<CONFIG>/Elysio
	ARCHIVE_OUTPUT_DIRECTORY ${OUTPUT_DIR}/$<CONFIG>/Elysio
	LIBRARY_OUTPUT_DIRECTORY ${OUTPUT_DIR}/$<CONFIG>/Elysio
	INTERPROCEDURAL_OPTIMIZATION_RELEASE ON
)

target_sources(Elysio
	PRIVATE
		Elysio.h
		src/Core.h
		src/Application.cpp
		src/Application.h
)

target_include_directories(Elysio
	PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

target_compile_definitions(Elysio PRIVATE EL_BUILD_DLL)

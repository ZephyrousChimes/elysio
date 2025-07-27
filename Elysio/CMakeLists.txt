add_library(Elysio SHARED
		include/Elysio/Core.h
		include/Elysio/Application.h
		src/Application.cpp
		include/Elysio/Application.h
		include/Elysio/EntryPoint.h
		src/Log.cpp
		include/Elysio/Log.h)

set_target_properties(Elysio PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR}/$<CONFIG>/Elysio
	ARCHIVE_OUTPUT_DIRECTORY ${OUTPUT_DIR}/$<CONFIG>/Elysio
	LIBRARY_OUTPUT_DIRECTORY ${OUTPUT_DIR}/$<CONFIG>/Elysio
	INTERPROCEDURAL_OPTIMIZATION_RELEASE ON
)

target_sources(Elysio
		PRIVATE
				include/Elysio/Elysio.h
				include/Elysio/Core.h
				src/Application.cpp
				include/Elysio/Application.h
)

target_include_directories(Elysio
		PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
		PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/vendor/spdlog/include
)

target_compile_definitions(Elysio PRIVATE EL_BUILD_DLL)

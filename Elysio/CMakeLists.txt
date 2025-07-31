add_library(Elysio SHARED
		include/Elysio/Core/Core.h
		include/Elysio/Core/Application.h
		src/Core/Application.cpp
		include/Elysio/Core/Application.h
		include/Elysio/Core/EntryPoint.h
		src/Core/Log.cpp
		include/Elysio/Core/Log.h
		include/Elysio/Events/Event.h
		include/Elysio/Core/Base.h
		include/Elysio/Events/KeyEvent.h
		include/Elysio/Core/KeyCodes.h
		include/Elysio/Events/MouseEvent.h
		include/Elysio/Core/MouseCodes.h
		include/Elysio/Events/ApplicationEvent.h)

set_target_properties(Elysio PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR}/$<CONFIG>/Elysio
	ARCHIVE_OUTPUT_DIRECTORY ${OUTPUT_DIR}/$<CONFIG>/Elysio
	LIBRARY_OUTPUT_DIRECTORY ${OUTPUT_DIR}/$<CONFIG>/Elysio
	INTERPROCEDURAL_OPTIMIZATION_RELEASE ON
)

target_sources(Elysio
		PRIVATE
				include/Elysio/Elysio.h
				include/Elysio/Core/Core.h
				src/Core/Application.cpp
				include/Elysio/Core/Application.h
)

target_include_directories(Elysio
		PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
		PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/vendor/spdlog/include
)

target_compile_definitions(Elysio PRIVATE EL_BUILD_DLL)

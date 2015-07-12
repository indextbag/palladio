# prt_DIR must point to the cmake subfolder of the desired SDK installation
if(NOT prt_DIR)
    set(prt_DIR		"${PROJECT_SOURCE_DIR}/../../../prt/cmake")
endif()

# boost location
if (WIN32)
	set(ENV_BOOST_INC "$ENV{Boost_INCLUDE_DIR}")
	set(ENV_BOOST_LIB "$ENV{Boost_LIBRARY_DIR}")
	if(ENV_BOOST_INC)
		set(Boost_INCLUDE_DIR ${ENV_BOOST_INC})
	else()
		message(FATAL_ERROR "Boost_INCLUDE_DIR environment variable has not been found")
	endif()
	if(ENV_BOOST_LIB)
		set(Boost_LIBRARY_DIR ${ENV_BOOST_LIB})
	else()
		message(FATAL_ERROR "Boost_LIBRARY_DIR environment variable has not been found")
	endif()
endif()

# houdini location
set(ENV_HOUDINI_DIR "$ENV{houdini_DIR}")
if(ENV_HOUDINI_DIR)
	set(houdini_DIR "${ENV_HOUDINI_DIR}")
endif()
if(NOT houdini_DIR)
	message(FATAL_ERROR "houdini_DIR environment variable has not been found")
endif()

# houdini user dso location
set(HOUDINI_DSO_PATH "$ENV{HOME}/houdini14.0/dso")
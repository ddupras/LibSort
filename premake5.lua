-- (c) Derek Dupras 2017-2021, All Rights Reserved.

-- premake5.lua
workspace "LibSort"
	configurations { "Debug", "Release" }
	location "build"

project 'LibSort'
	kind 'None'
	language "C++"
	files { 
		'include/**',
		'.clang-format',
		'premake5.lua'
	}
	vpaths {
		['Headers/**'] = { 'include/**.h', 'include/**.hpp' },
		['Clang/**'] = { '.clang-format' },
		['Premake/**'] = { 'premake5.lua' },
		['Docs'] = '**.md'
	}

project "LibSort-test"
	location "build"
	kind "ConsoleApp"
	language "C++"

	-- Catch will define a main if not provided, but we need to define DO_NOT_USE_WMAIN
	defines { "DO_NOT_USE_WMAIN" }

	targetdir "bin/%{cfg.buildcfg}"
	includedirs { "include", "external/catch" }
	files { "**.h", "**.cpp" }

	configuration "Debug"
		defines { "DEBUG" }
		symbols "On"

	configuration "Release"
		defines { "NDEBUG" }
		optimize "On"

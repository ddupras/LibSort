-- (c) Derek Dupras 2017, All Rights Reserved.


-- premake5.lua
workspace "LibSort"
   configurations { "Debug", "Release" }
   location "build"

project "LibSort-test"
   location "build"
   kind "ConsoleApp"
   language "C++"

   -- Catch will define a main if not provided, but we need to define DO_NOT_USE_WMAIN
   defines { "DO_NOT_USE_WMAIN" }

   targetdir "bin/%{cfg.buildcfg}"
   includedirs { "include", "external/catch" }
   files { "**.h", "**.cpp" }

--   filter "configurations:Debug"
--      defines { "DEBUG" }
--      symbols "On"

--   filter "configurations:Release"
--      defines { "NDEBUG" }
--      optimize "On"

	configuration "Debug"
		defines { "DEBUG" }
		flags { "Symbols" }

	configuration "Release"
		defines { "NDEBUG" }
		flags { "Optimize" }
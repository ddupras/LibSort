-- (c) Derek Dupras 2017, All Rights Reserved.


-- premake5.lua
workspace "merge_sort"
   configurations { "Debug", "Release" }
   location "build"

project "merge_sort"
   location "build"
   kind "ConsoleApp"
   language "C++"
   targetdir "bin/%{cfg.buildcfg}"

   files { "**.h", "**.cpp" }

   filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"

   filter "configurations:Release"
      defines { "NDEBUG" }
      optimize "On"

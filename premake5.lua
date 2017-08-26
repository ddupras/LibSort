-- (c) Derek Dupras 2017, All Rights Reserved.


-- premake5.lua
workspace "MergeSort"
   configurations { "Debug", "Release" }
   location "build"

project "MergeSort"
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

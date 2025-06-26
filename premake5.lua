workspace "SpaceInvaders"
    architecture "x64"
    configurations {"Debug", "Release"}
    startproject "SpaceInvaders"

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "SpaceInvaders"
    location "build"
    kind "ConsoleApp"
    language "C++"

targetdir("build/bin/" .. outputdir)
objdir("build/obj/" .. outputdir)

files {"source/**.cpp", "include/**.h"}

includedirs {"include"}

filter "system:windows"
    systemversion "latest"

filter "configurations:Debug"
    defines {"DEBUG"}
    symbols "On"

filter "configurations:Release"
    defines {"NDEBUG"}
    optimize "On"
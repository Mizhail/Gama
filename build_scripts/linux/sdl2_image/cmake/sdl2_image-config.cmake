# sdl2 cmake project-config input for ./configure scripts

set(prefix "/usr") 
set(exec_prefix "${prefix}")
set(libdir "${prefix}/lib/x86_64-linux-gnu")
set(SDL2_IMAGE_PREFIX "/usr")
set(SDL2_IMAGE_EXEC_PREFIX "/usr")
set(SDL2_IMAGE_INCLUDE_DIRS "${prefix}/include/sdl2_image")
set(SDL2_IMAGE_LIBRARIES " -lSDL2_image")
string(STRIP "${SDL2_IMAGE_LIBRARIES}" SDL2_IMAGE_LIBRARIES)
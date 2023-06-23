# GDScriptToC++

A wrapper class to expose GDNative C++ functions to GDScript when compiling with Emscripten. 
## Use 

1. Copy the contents of ```lib.cpp``` to local version.

2. Add the following function to your module class:
```cpp
template <typename... Args>
emscripten::function wrapper(const String &func, Args &&...args) {
    return emscripten::function(func, std::forward<Args>(args)...);
}
```

3. Add [```<emscripten/bind.h>```](https://emscripten.org/docs/api_reference/bind.h.html) to your module. 

4. Call C++ functions from ```main.gd```.

5. Compile project to WASM with Emscripten.
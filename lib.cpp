#include <emscripten/bind.h>

template <typename... Args>
emscripten::function EMSCRIPTEN_BINDINGS(const String &func, Args &&...args) {
    return wrapper(func, std::forward<Args>(args)...);
}
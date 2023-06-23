#ifndef PROJECT
#define PROJECT

#include <Godot.hpp>
#include <Node.hpp>

namespace godot {

class GDTest : public Node {
    GODOT_CLASS(GDTest, Node)

public:
    void _init();

    String exampleFunction();
};

} // namespace godot

#endif
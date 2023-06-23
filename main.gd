extends Node

var lib = preload("res://path/to/lib.gdnlib").new()

func start():
	EMSCRIPTEN_BINDINGS("GDTest::exampleFunction")
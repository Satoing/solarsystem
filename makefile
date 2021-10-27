main: src/main.cpp
	g++ src/main.cpp src/stars.cpp src/solarsystem.cpp -o bin/main -lglut32 -lGLAUX -lGLU32 -lOPENGL32 -lm
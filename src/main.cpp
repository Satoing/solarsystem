#include "../include/glut.h"
#include "../include/solarsystem.hpp"

#define WINDOW_X_POS 50
#define WINDOW_Y_POS 50
#define WIDTH 700
#define HEIGHT 700

SolarSystem solarsystem;

void onDisplay(){
	solarsystem.onDisplay();
}
void onUpdate(){
	solarsystem.onUpdate();
}
void onKeyboard(unsigned char key,int x,int y){
	solarsystem.onKeyboard(key,x,y);
}

int main(int argc,char *argv[]){
	//初始化glut，并处理所有的命令行参数
	glutInit(&argc,argv);
	//指定颜色模式和缓冲窗口
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);

	glutInitWindowPosition(WINDOW_X_POS,WINDOW_Y_POS);
	glutInitWindowSize(WIDTH,HEIGHT);
	glutCreateWindow("SolarSystem");

	//三个重要的回调函数
	glutDisplayFunc(onDisplay);
	glutIdleFunc(onUpdate);
	glutKeyboardFunc(onKeyboard);

	glutMainLoop();
	return 0;
}
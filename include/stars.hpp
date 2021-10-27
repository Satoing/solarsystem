#ifndef stars_hpp
    #define stars_hpp
#endif
#include "glut.h"

class Star{
    public:
        GLfloat radius;
        GLfloat distance;
        GLfloat speed,selfSpeed;
        GLfloat rgbaColor[4];
        
        Star *parentStar;

        Star(GLfloat radius,GLfloat distance,GLfloat speed,GLfloat selfSpeed,Star *parentStar);

        void drawStar();
        virtual void draw(){
            drawStar();
        }
        virtual void update(long timeSpan);
    
    protected:
        GLfloat alphaSelf,alpha;
};

class Planet : public Star{
    public:
        Planet(GLfloat radius,GLfloat distance,GLfloat speed,GLfloat selfSpeed,Star *parentStar,GLfloat rgbColor[3]);
        void drawPlanet();
        virtual void draw(){
            drawPlanet();
            drawStar();
        }
};

class LightPlanet : public Planet{
    public:
        LightPlanet(GLfloat Radius,GLfloat Distance,GLfloat Speed,GLfloat SelfSpeed,Star *ParentStar,GLfloat rgbColor[]);
        void drawLight();
        virtual void draw(){
            drawLight();
            drawPlanet();
            drawStar();
        }
};

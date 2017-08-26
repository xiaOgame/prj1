//My implementation for Ray Tracing
//	project1

#include "scene.h"
#include "objects.h"

#pragma  

// define global object needed by other files.
Node rootNode;
Camera camera;
RenderImage renderImage;
Sphere theSphere;

//declaration of external functions
void ShowViewport ( );
int LoadScene ( const char *filename );

//-----My Implementation of this project------
void BeginRender ( ) //TODO
{}

void StopRender ( ) //TODO
{}

bool Sphere::IntersectRay ( const Ray &ray, HitInfo &hInfo, int hitSide/* =HIT_FRONT */ ) const //TODO
{
	return false;
}




//----------
int main ( )
{
	LoadScene ( "scene1.xml" );
	ShowViewport ( );
	return 0;
}



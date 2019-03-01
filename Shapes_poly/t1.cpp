#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
#include"Square.h"
int main()
{
	Shape *S;
	Circle C(2,4,6);
	S = &C;
	S->area();
	Rectangle R(4, 2, 0);
	S = &R;
	S->area();
	Square Sq(2, 7, 0);
	S->area();

}
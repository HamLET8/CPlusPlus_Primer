#ifndef _BOX_
#define _BOX_

class Box{
public:
	Box() = default;
	Box(int , int , int);

	void setShape(int ,int ,int);
	int BoxV();
	int BoxS();
	
private:
	int length;
	int width;
	int height;

};

Box::Box()
:Box(0,0,0) {}

Box::Box(int l,int w,int h)
:length(l) ,width(w),height(h) {}

void setShape(int l, int w, int h)
{
	length = l;
	width = w;
	height = h;
}

int Box::BoxV()
{
	return length * width * height;
}

int Box::BoxS()
{
	return length*width*2 + length*height*2 + width*height*2;
}
#endif

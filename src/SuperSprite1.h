#pragma once
#ifndef __SUPERSPRITE1__
#define __SUPERSPRITE1__
#include "DisplayObject.h"

class SuperSprite1 final : public DisplayObject
{
public:
	// constructors
	SuperSprite1();

	// destructor
	~SuperSprite1();

	// life cycle functions
	void draw() override;
	void update() override;
	void clean() override;
private:

};

#endif /* defined (__OBSTACLE__) */
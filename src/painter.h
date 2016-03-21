#ifndef __Painter_H__
#define __Painter_H__

#include "turtle.h"

using CoolGame::Turtle;

class Painter {
public:
	Painter(Turtle* turtle) {
		turtle_ = turtle;
	}

	bool DrawCircle(int x, int y, int radius) {
		turtle_->PenDown();

		turtle_->GetX();
		turtle_->GetX();
		turtle_->GetX();

		return true;
	}
private:
	Turtle* turtle_;
};

#endif
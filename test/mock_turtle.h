#ifndef __Mock_Turtle_H__
#define __Mock_Turtle_H__

#include "gmock/gmock.h"
#include "turtle.h"

namespace CoolGame {
	namespace Testing {
		class MockTurtle : public CoolGame::Turtle {
		public:
			virtual ~MockTurtle() { }

			MOCK_METHOD0(PenUp, void());
			MOCK_METHOD0(PenDown, void());
			MOCK_METHOD1(Forward, void(int distance));
			MOCK_METHOD1(Turn, void(int degrees));
			MOCK_METHOD2(GoTo, void(int x, int y));

			MOCK_CONST_METHOD0(GetX, int());
			MOCK_CONST_METHOD0(GetY, int());
		};
	}
}
#endif
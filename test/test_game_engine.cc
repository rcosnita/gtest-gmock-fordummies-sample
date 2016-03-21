#include "painter.h"
#include "mock_turtle.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

using ::testing::AtLeast;
using ::testing::Return;
using CoolGame::Testing::MockTurtle;

TEST(PainterTest, CanDrawSomething) {
	MockTurtle turtle;

	EXPECT_CALL(turtle, PenDown())
		.Times(AtLeast(1));

	EXPECT_CALL(turtle, GetX())
		.WillOnce(Return(100))
		.WillOnce(Return(200))
		.WillOnce(Return(300));

	Painter painter(&turtle);

	EXPECT_TRUE(painter.DrawCircle(0, 0, 10));
}

int main(int argc, char** argv) {
	::testing::InitGoogleMock(&argc, argv);

	return RUN_ALL_TESTS();
}
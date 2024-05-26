#include "lib.h"

#include "gmock/gmock.h"
#include "gtest/gtest.h"

namespace custom {
namespace {

using ::testing::StrEq;

TEST(PowerTest, AccuratePositivePowers) {
    int output1 = Power(2, 6);
    int output2 = Power(2, 10);

    EXPECT_EQ(output1, 64);
    EXPECT_EQ(output2, 1024);
}

TEST(PowerTest, PowerToOneIsSelf) {
    int output = Power(1000, 1);

    EXPECT_EQ(output, 1000);
}

TEST(PowerTest, HandlesRaisedToZeroPower) {
    int output = Power(100, 0);

    EXPECT_EQ(output, 1);
}

TEST(PowerTest, NegativePowerActsAsOnePower) {
    int output = Power(2, -2);

    EXPECT_EQ(output, 2);
}

TEST(SlimeTranslationTest, CorrectTranslation) {
    std::string actual_output = ToSlimeLanguage("Edgar");
    std::string expected_output = "oodgoor";
    EXPECT_THAT(actual_output, StrEq(expected_output));
}

}  // namespace
}  // namespace custom

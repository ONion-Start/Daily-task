#include <gtest/gtest.h>
#include <sstream>
#include <unordered_set>

using namespace std;

// Функция для тестирования вместо main
string processInput(const string& input) {
    istringstream iss(input);
    ostringstream oss;

    int num;
    unordered_set<int> nums;

    while (iss >> num) {
        auto [it, exist] = nums.insert(num);
        if (!exist) {
            oss << "YES" << endl;
        } else {
            oss << "NO" << endl;
        }
    }

    return oss.str();
}

// Тесты
TEST(CheckDuplicatesTest, NoDuplicates) {
    string input = "1 2 3 4 5";
    string expectedOutput = "NO\nNO\nNO\nNO\nNO\n";
    EXPECT_EQ(processInput(input), expectedOutput);
}

TEST(CheckDuplicatesTest, AllDuplicates) {
    string input = "10 10 10 10";
    string expectedOutput = "NO\nYES\nYES\nYES\n";
    EXPECT_EQ(processInput(input), expectedOutput);
}

TEST(CheckDuplicatesTest, MixedValues) {
    string input = "7 8 9 7 10 8 11";
    string expectedOutput = "NO\nNO\nNO\nYES\nNO\nYES\nNO\n";
    EXPECT_EQ(processInput(input), expectedOutput);
}

TEST(CheckDuplicatesTest, EmptyInput) {
    string input = "";
    string expectedOutput = "";
    EXPECT_EQ(processInput(input), expectedOutput);
}

TEST(CheckDuplicatesTest, NegativeNumbers) {
    string input = "-1 -2 -3 -1 -2 0";
    string expectedOutput = "NO\nNO\nNO\nYES\nYES\nNO\n";
    EXPECT_EQ(processInput(input), expectedOutput);
}

#include <gtest/gtest.h>
#include "../Sv.h"


TEST(SvTest, AddUniqueElements) {
    Sv<int> sv;           // Экземпляр класса для типа int
    sv.add(10);           // Добавление элемента
    sv.add(20);           // Добавление ещё одного элемента
    sv.add(10);           // Попытка добавить повторяющийся элемент

    ASSERT_EQ(sv.mas.size(), 2);         // Ожидается 2 уникальных элемента
    EXPECT_EQ(sv.mas[0], 10);           // Первый элемент 10
    EXPECT_EQ(sv.mas[1], 20);           // Второй элемент 20
}

// Тестирование удаления существующих элементов
TEST(SvTest, DeleteExistingElement) {
    Sv<int> sv;
    sv.add(5);
    sv.add(10);
    sv.add(15);

    sv.del(10);            // Удаление существующего элемента
    ASSERT_EQ(sv.mas.size(), 2);         // Ожидается 2 элемента после удаления
    EXPECT_EQ(sv.mas[0], 5);            // Первый элемент 5
    EXPECT_EQ(sv.mas[1], 15);           // Второй элемент 15
}

// Тестирование удаления несуществующего элемента
TEST(SvTest, DeleteNonExistingElement) {
    Sv<int> sv;
    sv.add(1);
    sv.add(2);

    sv.del(3);             // Попытка удалить элемент, которого нет
    ASSERT_EQ(sv.mas.size(), 2);         // Размер остаётся неизменным
    EXPECT_EQ(sv.mas[0], 1);            // Первый элемент 1
    EXPECT_EQ(sv.mas[1], 2);            // Второй элемент 2
}

// Тестирование работы с типом double
TEST(SvTest, AddAndDeleteDouble) {
    Sv<double> sv;
    sv.add(3.14);
    sv.add(2.71);
    sv.add(3.14);          // Попытка добавить повторяющийся элемент

    ASSERT_EQ(sv.mas.size(), 2);         // Ожидается 2 уникальных элемента
    EXPECT_DOUBLE_EQ(sv.mas[0], 3.14);  // Первый элемент 3.14
    EXPECT_DOUBLE_EQ(sv.mas[1], 2.71);  // Второй элемент 2.71

    sv.del(2.71);          // Удаление элемента
    ASSERT_EQ(sv.mas.size(), 1);         // Ожидается 1 элемент
    EXPECT_DOUBLE_EQ(sv.mas[0], 3.14);  // Оставшийся элемент 3.14
}

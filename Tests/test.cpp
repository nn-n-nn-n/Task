#include "pch.h"
#include "Task.h"
#include <iostream>
using namespace std;

bool Equal(int* a1, int* a2, int count)
{
	for (int i = 0; i < count; i++)
		if (a1[i] != a2[i]) return false;
	return true;
}

TEST(TestTask, ZeroArray) {

	int m[] = { 1 };
	int m1[]{ 1 };
	int size = 0;
	EXPECT_NO_THROW(Sort(m, size));
	EXPECT_TRUE(Equal(m, m1, 1));
}

TEST(TestTask, InvalidArraySize) {

	int m[] = { 5,4,3,2,1 };
	int m1[]{ 5,4,3,2,1 };
	int size = -1;
	EXPECT_NO_THROW(Sort(m, size));
	EXPECT_TRUE(Equal(m, m1, 5));
}

TEST(TestTask, ArrayWith1ElementAscending) {

	int m[] = { 1 };
	int m1[]{ 1 };
	int size = 1;
	EXPECT_NO_THROW(Sort(m, size));
	EXPECT_TRUE(Equal(m, m1, size));
}


TEST(TestTask, ArrayWith2ElementAscending) {

	int m[] = { 2, 1 };
	int m1[] = { 1,2 };
	int size = sizeof(m) / sizeof(int);
	EXPECT_NO_THROW(Sort(m, size));
	EXPECT_TRUE(Equal(m, m1, size));
}

TEST(TestTask, ArrayWith3ElementAscending) {
	int m[] = {3, 2, 1 };
	int m1[] = { 1,2,3 };
	int size = sizeof(m) / sizeof(int);
	EXPECT_NO_THROW(Sort(m, size));
	EXPECT_TRUE(Equal(m, m1, size));
}

TEST(TestTask, ArrayWithOddElementsCountAscending) {

	int m[] = { 9,8,7,6,5,4,3,2,1 };
	int m1[]{1,2,3,4,5,6,7,8,9};
	int size = sizeof(m) / sizeof(int);
	EXPECT_NO_THROW(Sort(m, size));
	EXPECT_TRUE(Equal(m, m1, size));
}

TEST(TestTask, ArrayWithEvenElementsCountAscending) {

	int m[] = { 10,9,8,7,6,5,4,3,2,1 };
	int m1[]{ 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(m) / sizeof(int);
	EXPECT_NO_THROW(Sort(m, size));
	EXPECT_TRUE(Equal(m, m1, size));
}

TEST(TestTask, ArrayWithSeveralEqualsElementsAscending) {

	int m[] = { 10,9,8,7,7,7,7,5,5,5,3,2,1,-1,0,-5,-5 };
	int m1[] = { -5,-5,-1,0,1,2,3,5,5,5,7,7,7,7,8,9,10 };
	int size = sizeof(m) / sizeof(int);
	EXPECT_NO_THROW(Sort(m, size));
	EXPECT_TRUE(Equal(m, m1, size));
}

TEST(TestTask, ArrayWith1ElementDescending) {

	int m1[] = { 1 };
	int m[]{ 1 };
	int size = 1;
	EXPECT_NO_THROW(Sort(m, size, false));
	EXPECT_TRUE(Equal(m, m1, size));
}


TEST(TestTask, ArrayWith2ElementDescending) {

	int m1[] = { 2, 1 };
	int m[] = { 1,2 };
	int size = sizeof(m) / sizeof(int);
	EXPECT_NO_THROW(Sort(m, size, false));
	EXPECT_TRUE(Equal(m, m1, size));
}

TEST(TestTask, ArrayWith3ElementDescending) {
	int m1[] = { 3, 2, 1 };
	int m[] = { 1,2,3 };
	int size = sizeof(m) / sizeof(int);
	EXPECT_NO_THROW(Sort(m, size, false));
	EXPECT_TRUE(Equal(m, m1, size));
}

TEST(TestTask, ArrayWithOddElementsCountDescending) {

	int m1[] = { 9,8,7,6,5,4,3,2,1 };
	int m[]{ 1,2,3,4,5,6,7,8,9 };
	int size = sizeof(m) / sizeof(int);
	EXPECT_NO_THROW(Sort(m, size, false));
	EXPECT_TRUE(Equal(m, m1, size));
}

TEST(TestTask, ArrayWithEvenElementsCountDescending) {

	int m1[] = { 10,9,8,7,6,5,4,3,2,1 };
	int m[]{ 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(m) / sizeof(int);
	EXPECT_NO_THROW(Sort(m, size, false));
	EXPECT_TRUE(Equal(m, m1, size));
}

TEST(TestTask, ArrayWithSeveralEqualsElementsDescending) {

	int m1[] = { 10,9,8,7,7,7,7,5,5,5,3,2,1,0,-1,-5,-5 };
	int m[] = { -5,-5,-1,0,1,2,3,5,5,5,7,7,7,7,8,9,10 };
	int size = sizeof(m) / sizeof(int);
	EXPECT_NO_THROW(Sort(m, size, false));
	EXPECT_TRUE(Equal(m, m1, size));
}
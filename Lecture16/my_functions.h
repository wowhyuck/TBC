#pragma once

extern int status;

static int si = 0;

extern int add(int a, int b);

static int multiply(int a, int b)
{
	return a * b;
}

// int subtract(int a, int b)
inline int subtract(int a, int b)
{
	return a - b;
}

void print_status();
void print_address();







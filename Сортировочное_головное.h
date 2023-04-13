#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<filesystem>
#include<chrono>
# define PART_SIZE 500000
#define RAND_ARR_SIZE 20 000000

void print(int* arr, int n);

void swap(int* a, int* b);


int partition(int*& arr, int low, int high);


void quickSort(int*& arr, int low, int high);


void merge_to_file(const int* arr1, const int* arr2, int sz1, int sz2);


void merge_files();


int  read_part_arr(fstream& fs, int*& arr);


void sort_func(const string& filename);


void write_rand_arr(const string& filename);


void read_arr(const string& filename, int*& arr, const int& n);

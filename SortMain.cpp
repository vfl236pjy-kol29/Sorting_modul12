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
#include "СортоОпределение.cpp"
#include "Сортировочное_головное.h"
int main(int argc, char const* argv[])
{
    string filename = "array_data.txt";
    write_rand_arr( filename);
    cout << "GEna_data is done" << endl;
    fstream res;
    res.open("res_file.txt", fstream::out | ofstream::trunc);
    res.close();
    auto start = chrono::high_resolution_clock::now();
    sort_func(filename);
    auto finish = chrono::high_resolution_clock::now();
    chrono::duration <double> elapsed= finish - start;
    cout << "elapsed time" << elapsed.count() << "sec" << endl;


    return 0;
}
#ifndef LIB_H
#define LIB_H

#include <iostream>
using std::cout;
using std::endl;

#define MAX_PATHS 100
#define MAX_LENGTH 100

struct trip {
    int from, to, price, miles;
};

struct output {
    int price, miles;
};

bool in_path(int path[], int depth, int node);


void dfs_index(int current_node, int n, trip trips[], int m,
               int path[], int depth,
               int paths[MAX_PATHS][MAX_LENGTH], int lengths[MAX_PATHS], int *total);

void get_paths(int n, trip trips[], int m);

int min_value(output list[], int k_size);

int calc_price(trip A[], int n);
int calc_miles(trip A[], int n);
void get_prices(trip A[], int n, output out[]);
void get_prices_full(trip *A[], int counts[], int m, output out[]);

#endif


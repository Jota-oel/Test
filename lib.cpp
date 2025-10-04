#include "lib.h"

bool in_path(int path[], int depth, int node) {
    for (int i=0; i<=depth; i++) {
        if (path[i] == node) return true;
    }
    return false;
}

void dfs_index(int current_node, int n, trip trips[], int m,
               int path[], int depth,
               int paths[MAX_PATHS][MAX_LENGTH], int lengths[MAX_PATHS], int *total)
{
    if (current_node == n-1) {
        for (int i=0; i<depth; i++)
            paths[*total][i] = path[i];
        lengths[*total] = depth;
        (*total)++;
        return;
    }

    for (int i=0; i<m; i++) {
        if (trips[i].from == current_node) {
            path[depth] = i;
            dfs_index(trips[i].to, n, trips, m, path, depth+1, paths, lengths, total);
        }
    }
}

void get_paths(int n, trip trips[], int m)
{
    int paths[MAX_PATHS][MAX_LENGTH];
    int lengths[MAX_PATHS];
    int path[MAX_LENGTH];
    int total = 0;

    dfs_index(1, n, trips, m, path, 0, paths, lengths, &total);

    for (int p=0; p<total; p++) {
        cout << "Path " << p+1 << ": ";
        for (int j=0; j<lengths[p]; j++) {
            cout << paths[p][j];
            if (j < lengths[p]-1) cout << " -> ";
        }
        cout << endl;
    }
}

int min_value(output list[], int k_size)
{
    if (k_size <= 0 || list == nullptr) return -1; 
    int index = 0;
    int minv = (list[0].price < list[0].miles) ? list[0].price : list[0].miles;
    for (int i = 1; i < k_size; ++i)
    {
        int current = (list[i].miles < list[i].price) ? list[i].miles : list[i].price;
        if (current < minv)
        {
            minv = current;
            index = i;
        }
    }
    return index;
}

//Parte Juli

int calc_price(trip A[], int n)
{
    int value = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i].miles == -1)
            value += A[i].price;
    }
    return value;
}

int calc_miles(trip A[], int n)
{
    int value = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i].miles != -1)
            value += A[i].miles;
    }
    return value;
}

void get_prices(trip A[], int n, output out[])
{
    out[0].price = calc_price(A, n);
    out[0].miles = calc_miles(A, n);
}

void get_prices_full(trip *A[], int counts[], int m, output out[])
{
    for (int i = 0; i < m; ++i)
    {
        get_prices(A[i], counts[i], &out[i]);
    }
}
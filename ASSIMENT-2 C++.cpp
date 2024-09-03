#include <iostream>
using namespace std;

int main() {
    // Number of notebooks and pens
    int num_notebooks = 15;
    int num_pens = 20;

    // Cost of each notebook and pen
    float cost_per_notebook = 2.25;
    float cost_per_pen = 0.75;

    // Calculate total cost
    float total_cost = (num_notebooks * cost_per_notebook) + (num_pens * cost_per_pen);

    // Display the total cost
    cout << "The total cost of the supplies is Rs. " << total_cost << endl;

    return 0;
}
#include <iostream>
#include <queue>
#include <vector>
#include <functional> // for greater<>

using namespace std;

int main() {
    // 1. Basic max-heap priority_queue (default)
    priority_queue<int> pq_max;
    pq_max.push(10);
    pq_max.push(5);
    pq_max.push(20);
    cout << "Max-heap top: " << pq_max.top() << "\n"; // 20

    // 2. Min-heap priority_queue using greater<int>
    priority_queue<int, vector<int>, greater<int>> pq_min;
    pq_min.push(10);
    pq_min.push(5);
    pq_min.push(20);
    cout << "Min-heap top: " << pq_min.top() << "\n"; // 5

    // 3. Priority queue of pairs (max-heap by first element)
    priority_queue<pair<int, int>> pq_pair;
    pq_pair.push({2, 100});
    pq_pair.push({1, 200});
    pq_pair.push({3, 50});
    auto top_pair = pq_pair.top();
    cout << "Max pair top: {" << top_pair.first << ", " << top_pair.second << "}\n"; // {3, 50}

    // 4. Min-heap priority_queue of pairs by first element
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq_pair_min;
    pq_pair_min.push({2, 100});
    pq_pair_min.push({1, 200});
    pq_pair_min.push({3, 50});
    auto top_pair_min = pq_pair_min.top();
    cout << "Min pair top: {" << top_pair_min.first << ", " << top_pair_min.second << "}\n"; // {1, 200}

    // 5. Custom comparator: max-heap by second element of pair
    auto cmp = [](pair<int,int> a, pair<int,int> b) {
        return a.second < b.second; // max heap by second element
    };
    priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(cmp)> pq_custom(cmp);
    pq_custom.push({2, 100});
    pq_custom.push({1, 200});
    pq_custom.push({3, 50});
    auto top_custom = pq_custom.top();
    cout << "Custom max by second: {" << top_custom.first << ", " << top_custom.second << "}\n"; // {1, 200}

    // 6. Using priority_queue with custom class
    struct Point {
        int x, y;
        Point(int _x, int _y): x(_x), y(_y) {}
    };
    auto cmpPoint = [](const Point &a, const Point &b) {
        return a.x + a.y > b.x + b.y; // min-heap by sum of coordinates
    };
    priority_queue<Point, vector<Point>, decltype(cmpPoint)> pq_points(cmpPoint);
    pq_points.push(Point(1,2));
    pq_points.push(Point(3,1));
    pq_points.push(Point(0,5));
    Point top_point = pq_points.top();
    cout << "Custom class top point sum: " << top_point.x << "," << top_point.y << "\n"; // smallest sum

    return 0;
}

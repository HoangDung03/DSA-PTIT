#include <iostream>
using namespace std;

void drawLine(int x1, int y1, int x2, int y2) {
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int x = x1, y = y1;
    int sx = (x1 < x2) ? 1 : -1;
    int sy = (y1 < y2) ? 1 : -1;
    int err = dx - dy;

    while (true) {
        cout << "(" << x << "," << y << ")" << endl;
        if (x == x2 && y == y2) // Ği?m cu?i cùng ğ? ğ?t ğı?c
            break;
        int e2 = 2 * err;
        if (e2 > -dy) {
            err -= dy;
            x += sx;
        }
        if (e2 < dx) {
            err += dx;
            y += sy;
        }
    }
}

int main() {
    int x1, y1, x2, y2;
    cout << "Enter the coordinates of the first point (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second point (x2, y2): ";
    cin >> x2 >> y2;
    
    drawLine(x1, y1, x2, y2);
    
    return 0;
}

 
 


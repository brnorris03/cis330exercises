
/* Change the old struct definition:
struct Point {
  int x, y;
};
to use a typedef*/

typedef struct {
  int x, y;
} Point;

/* Or the following would also work: */
/*
struct PointStruct {
  int x, y;
};
typedef struct PointStruct Point;
*/
// Function prototypes
void movePoint_wrong(Point p, const int dist);

void movePoint(Point *p, const int dist);

void printPoint(Point p);



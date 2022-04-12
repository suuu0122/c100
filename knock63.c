#include <stdio.h>
#include <handy.h>

int main()
{
    int cx = 0, cy = 0, radius = 50;

    printf("円の中心座標を入力: ");
    scanf("%d %d", &cx, &cy);

    HgOpen(600, 400);

    if (cx <= 300 && cy <= 200)
    {
        HgSetFillColor(HG_RED);
    }
    else if (cx <= 300 && cy > 200)
    {
        HgSetFillColor(HG_GREEN);
    }
    else if (cx > 300 && cy <= 200)
    {
        HgSetFillColor(HG_BLUE);
    }
    else
    {
        HgSetFillColor(HG_YELLOW);
    }

    HgCircleFill(cx, cy, radius, 1);
    HgSleep(5);
    HgClose();

    return 0;
}

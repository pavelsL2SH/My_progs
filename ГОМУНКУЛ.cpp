
#include "TXLib.h"

void InsertionSort (int data [], int Size, int sorted);
int Place (int data [], int Size, int sorted);
int Find (int data[], int x, int left, int right);
void ROR (int data [], int first, int last);
void DoubleInsertion (int data[], int size, int sorted);
void Print (int data[], int size, int i);

int main()
    {
    txCreateWindow (800, 600);

    const int Size = 10;
    int data [Size] = {1, 3, 6, 14, 23, 43, 46, 13, 32, 10};
    int sorted = 6;

    $r printf ("привет € массив : 1, 3, 6, 14, 23, 43, 46, 13, 32, 10 \n");
    DoubleInsertion (data, Size, sorted);
    //Print (data, Size, 0);

    $c printf (" € сортировка двоичного поиска и вот твой массив:  \n ");
    for (int i = 0; i < Size; i++)
        {
        $g printf ("  %d  ", data [i]);
        }

    return 0;
    }

//-----------------------------------------------------------------------------

void InsertionSort (int data [], int Size, int sorted)  // Special Massive: {1, 3, 6, 14, 23, 43, 46, 13, 32, 10, 17, 8, 5}
    {
    while (sorted < Size - 1)
        {
        int start = sorted + 1;
        ROR (data, Place (data, Size, sorted), start);
        sorted ++;
        }
        printf (" %d ", data);
    }

//-----------------------------------------------------------------------------

int Place (int data [], int Size, int sorted)
    {
    int start = sorted + 1;
    int place = sorted;

    while (true)
        {
        if (place == 0 && data [start] < data [0])
            {
            return 0;
            }
        if (data [start] >= data[place])
            {
            return place + 1;
            }
            place--;
            sorted ++;
        }
    }

//-----------------------------------------------------------------------------

int Find (int data[], int sorted, int left, int right,)
    {
    int mid = 0;
    int start = sorted + 1;

    while ((right - left) > 2)
        {
        $w printf ("\n€ левт : %d  а € райт: %d", left, right); $c
        start = sorted + 1;
        mid = (left + right)/2;

        if (data[mid] > data[start])
            {
            right = mid - 1;
            }
        if (data[mid] < data[start])
            {
            left = mid + 1;
            }
        //$b printf ("€ лева€ граница:  %d , а € права€ граница:  %d ", left, right);
        //$g printf ("%d  ", mid);
        }
    return mid;
    }
//-----------------------------------------------------------------------------

void ROR (int data [], int first, int last)
    {
    int i = last;
    int temp = data [last];

    while (i > first)
        {
        data [i] = data [i - 1];
       // $c printf ("\n€ сам i = %d \n     € data [i] = %d  ", i, data [i]);
        i--;
        }
    data [first] = temp;
    $y printf ("\n€ ласт: %d а € ферст: %d  ", last, first);
    }


//-----------------------------------------------------------------------------

void DoubleInsertion (int data[], int size, int sorted)
    {
    sorted = sorted;
    int start = sorted + 1;
    $r printf ("  \nпривет € сортед: %d\n  ", sorted);

    while (sorted <= size - 2)
        {
        $r ("\n€ твой массив\n");
        for (int i = 0; i < size; i++)
        {
        $d printf ("%d  ", data [i]);
        }

        $y printf ("\n а € сортед в цикле:  %d  ", sorted);
        start = sorted + 1;
        $g printf ("  € старт: %d\n", start);
        $c printf ("  € мид: %d\n\n", Find (data, sorted, 0 , start));

        ROR (data, Find (data, sorted, 0 , start), start);

        sorted ++;
        getch ();
        }
    //$b printf(" € вышкл из цикла\n ");
    }


//-----------------------------------------------------------------------------


void Print (int data[], int size, int i)
    {
    $g printf (" € сортировка двоичного поиска и вот твой массив:   ");

    while (i < size - 1)
        {
        $y printf ("%d, ", data[i]);

        i++;
        }
    }






















































































































































































































































































































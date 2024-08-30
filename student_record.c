#include <stdio.h>
#include <stdlib.h>

// Creating a student record structure
struct Student_record
{
    char name[30];
    int rollno;
    float m1, m2, m3, avg;
};
int main()
{
    // Declaring a structure array and getting inputs
    struct Student_record st[3], temp;
    int i, j;
    for(i=0; i<3; i++)
    {
        printf("Enter name, rollno marks of student %d: ", (i+1));
        scanf(" %s %d %f %f %f", st[i].name, &st[i].rollno, &st[i].m1, &st[i].m2, &st[i].m3);
        st[i].avg = (st[i].m1 + st[i].m2 + st[i].m3)/3;  // Computes the average for each student
    }

    // Using bubble sort to sort the array in ascending order of marks average
    for(i=0; i<3; i++)
    {
        for(j=0; j<3-i; j++)
        {
            if(st[j].avg >= st[j-1].avg)
                continue;
            temp = st[j];
            st[j] = st[j-1];
            st[j-1] = temp;
        }
    }

    // Displaying the output
    for(i=0; i<3; i++)
        printf("%s : %f\n", st[i].name, st[i].avg);
}
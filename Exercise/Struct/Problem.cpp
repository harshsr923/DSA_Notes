struct Test
{
    char st[20];
    int num;
};

int main()
{
    Test t1;
    strcpy(t1.st, "Geeks");
    t1.num = 10;
    
    Test t2;
    t2 = t1;
    
    t2.st[0] = 'X';
    
    cout << t1.st; // "Geeks"
    cout << t2.st; // "Xeeks"
    cout << t2.num; // 10
    return 0;
}

// OP: GeeksXeeks10
// TODO: If it is possible then why we were doing overload operator and assign members one by one


int main()
{
struct {
    int a[2];
}arr[] = {{1},{2}};
printf("%d %d %d %d", arr[0].a[0], arr[0].a[1],arr[1].a[0], arr[1].a[1]);
return 0;
}

// OP: 1 0 2 0

#include<stdio.h>
int main()
{
    struct {int a[2], b;} arr[]={[0].a = {1}, [1].a = {2}, [0].b = 1, [1].b = 2};
    printf("%d %d %d and ", arr[0].a[0],arr[0].a[1],arr[0].b);
    printf("%d %d %d",arr[1].a[0],arr[1].a[1],arr[1].b);
return 0;
}

// OP: 1 0 1 and 2 0 2
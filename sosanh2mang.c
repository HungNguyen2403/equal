#include <stdio.h>

/*Tạo macro SIZE_OF_ARRAY để lấy độ dài (số phần tử) của mảng chỉ định*/
#define SIZE_OF_ARRAY(array)  (sizeof(array)/sizeof(array[0]))


/*Hàm so sánh 2 mảng trong C*/
int array_equal(const int* array1, size_t size1, const int* array2, size_t size2){

    /*Nếu số phần tử của 2 mảng khác nhau, thì chúng sẽ khác nhau*/
    if (size1 != size2)  
    return  0;

    /*Kiểm tra từng cặp phần tử tương ứng xem có cặp nào khác nhau không*/
    for (size_t i = 0; i < size1; ++i) 
    {
        if (array1[i] != array2[i])  
        return  0; 
        
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    int array1[] = {0, 1, 2, 3, 4};
    //int array2[] = {0, 1, 2, 3, 4};
    int array2[] = {0, 1, 4};

    printf("%d\n", array_equal(array1, SIZE_OF_ARRAY(array1), array2, SIZE_OF_ARRAY(array2)));

    return 0;
}

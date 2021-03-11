#include<stdlib.h>

struct Book {
    char *name;
    char *author;
    long isbn;
};

int main(void) {
    unsigned char bad_buff[sizeof(struct Book)];

    /*
    The following character array's elements are aligned based on the size of the Book structure.
    This means that each character will occupy the size of a Book struct, even if the struct is not completely
    filled.
    */
    _Alignas(struct Book) unsigned char good_buff[sizeof(struct Book)];

    struct Book *bad_ptr =  (struct Book *)bad_buff;

    /**
     * Why is the second pointer to Book better than the first?
     * It's because during the declaration of good_buff,
     * it was allowed to store chars, but they
     * are aligned based on the size of the Book struct. In the above case, the character
     * array is aligned based on the size of a character and not a Book struct. As a result,
     * if the processor needs to access elements using the bad_ptr, it will have to 
     * face some performance drops due to misalignment of the data stored of the Book struct.
     * Data is not always stored in contiguous locations. Without an explicit alignment request,
     * the struct may be spread over various memory locations. Simply speaking.
     * bad_buff may have incorrect alignment for the struct's member-access expressions.
     */
    struct Book *good_ptr = (struct Book *)good_buff;
}
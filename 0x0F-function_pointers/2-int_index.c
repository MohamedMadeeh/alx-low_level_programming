#include "function_pointers.h"

/**
  * int_index - ...
  * @array: ...
  * @size: ...
  * @cmp: ...
  *
  * Return: ...
  */
int int_index(int *array, int size, int (*cmp)(int))
{
        int count = 0;

        if (size > 0)
        {
                if (array != NULL && cmp != NULL)
                {
                        while (count < size)
                        {
                                if (cmp(array[count]))
                                        return (count);

                                count++;
                        }
                }
        }

        return (-1);
}

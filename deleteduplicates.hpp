// -*-mode: c++-*-
////
// @copyright 2024 Glen S. Dayton.  All rights reserved.
// @author Glen S. Dayton
//
//
#include <cstdlib>
#include <algorithm>
#include <iterator>

// Delete duplicate entries from an array using C++ heap.
template<typename  random_iterator>
auto deleteDuplicates(random_iterator start, random_iterator stop) -> random_iterator
{
    auto topSortedArray = stop;
    auto theArrayLength = distance(start, stop);
    auto heapEnd = stop;

    if (theArrayLength > 1)
    {
        // Transform the array  into a heap ( O(n) operation (linear) )
        // The range [start, stop) determines the array.
        std::make_heap(start, stop);

        // Perform a heap sort
        // Pop the first element, which is the max element.
        // Shrinks the heap leaving room for the max element at the end.
        // pop_heap is a O(log N)  operation.
        auto prevElement = *start;
        std::pop_heap(start, heapEnd);
        --heapEnd;

        // push the max element onto the sorted area
        // End of the array is the sorted area.
        --topSortedArray;
        *topSortedArray = prevElement;

        // Work our way up. Pop the max element of the top of the heap and write it to the top of the sorted area.
        while (heapEnd != start)
        {
            auto currentElement = *start;
            std::pop_heap(start, heapEnd);
            --heapEnd;

            if (currentElement != prevElement)
            {
                --topSortedArray;
                *topSortedArray = currentElement;
                prevElement = currentElement;
            }
        }
    }

    return topSortedArray;
}



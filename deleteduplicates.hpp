// -*-mode: c++-*-
#include <cstdlib>
#include <algorithm>
#include <iterator>

// Delete duplicate entries from an array using C++ heap.
template<typename  randomiter>
randomiter deleteDuplicates(randomiter start, randomiter stop)
{
    auto topSortedArray = stop;
    auto theArrayLength = distance(start, stop);
    auto heapEnd = stop;

    if (theArrayLength > 1)
    {
        // Heap is in theArray[0:heapEnd-1]
        std::make_heap(start, stop);

        // Pop the first element, which is the max element
        auto prevElement = *start;
        std::pop_heap(start, heapEnd);
        --heapEnd;

        // push the max element onto the sorted area
        --topSortedArray;
        *topSortedArray = prevElement;

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



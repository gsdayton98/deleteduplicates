# DeleteDuplicates

C++20 Delete duplicates from a container using a modified heap sort.

DeleteDuplicates() makes a max-heap, then interatively pops the max off the heap, but pushes it onto the result
only if it is not a duplicate. Should have O(n*log n) scale performance.

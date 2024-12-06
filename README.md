# std::vector<bool> Space Optimization Issues in C++

This repository demonstrates a common, yet often overlooked, issue with `std::vector<bool>` in C++.  Due to potential space optimizations, the size of each element in `std::vector<bool>` might not be a full byte. This can lead to unexpected behavior and performance issues.

**Problem:**

Directly accessing elements of `std::vector<bool>` might be slower and less intuitive than expected. The standard doesn't guarantee that each boolean value occupies one byte of storage.  This optimization often involves bitpacking, making it more complex to access individual elements.

**Solution:**

Consider using `std::vector<char>` (or other integral types) when boolean values are needed to be explicitly accessed individually and their size matters in performance.  Alternatively, when only vectorized operations are needed on the booleans, the potential performance benefits from the space-optimization of `std::vector<bool>` can outweigh the access cost.

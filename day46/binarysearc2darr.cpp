// // 74. Search a 2D Matrix
// // Solved
// // Medium
// // Topics
// // Companies
// // You are given an m x n integer matrix matrix with the following two properties:

// // Each row is sorted in non-decreasing order.
// // The first integer of each row is greater than the last integer of the previous row.
// // Given an integer target, return true if target is in matrix or false otherwise.

// // You must write a solution in O(log(m * n)) time complexity.

 


//  class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int N= matrix.size(), M=matrix[0].size();
//         int row_index, col_index, start=0, end= N*M-1, mid;
//         while(start<=end)
//         {
//           mid= start+(end-start)/2;
//           row_index =mid/M;
//           col_index =mid%M;

//           if(matrix[row_index][col_index]==target)
//           return 1;
//           else if(matrix[row_index][col_index]<target)
//           start= mid+1;
//           else
//             end= mid-1;
      
//         }
//         return 0;
//     }
// };
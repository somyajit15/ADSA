Longest Common Subsequence (LCS) – README

Aim:
To compute the Longest Common Subsequence (LCS) between two strings using dynamic programming.

Objective:
The program reads two input strings, constructs a DP table to compute the length of their LCS, and then prints both the length and the subsequence itself using backtracking.

Theory:
A subsequence is a sequence derived from another sequence by deleting characters without changing the order of the remaining characters.  
The Longest Common Subsequence between two strings is the longest subsequence that appears in both strings in the same order (not necessarily contiguously).  
Dynamic programming is used to avoid redundant computations by storing solutions of subproblems in a 2D table.

DP Recurrence:
If X[i − 1] == Y[j − 1]:
    L[i][j] = L[i − 1][j − 1] + 1
Else:
    L[i][j] = max(L[i − 1][j], L[i][j − 1])

Explanation of Program:
1. The user inputs two strings X and Y.
2. A DP table L[][] of size (m + 1) × (n + 1) is filled using the recurrence relation to compute LCS length.
3. L[m][n] stores the final length of LCS.
4. printLCS() recursively backtracks through the table:
   • If characters match, they are part of the LCS
   • Otherwise it moves to the cell with the larger value among top or left
5. The final LCS is printed along with its length.

Output:
The program prints:
Length of the LCS
The actual LCS sequence

Time Complexity:
Time complexity: O(m × n)  
Space complexity: O(m × n)  
where m and n are the lengths of the two input strings.

Important Notes:
LCS is not necessarily a contiguous substring.
This technique is fundamental for sequence comparison problems.
Works for character strings and symbolic sequences.

Applications:
Bioinformatics (DNA and protein sequence alignment)
Text comparison and version control systems (diff tools)
Spell checking and plagiarism detection
Data compression

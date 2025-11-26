KMP String Matching – README

Aim:
To search for a pattern efficiently inside a text using the Knuth–Morris–Pratt (KMP) pattern matching algorithm.

Objective:
The program reads a text and a pattern from the user, constructs the LPS (Longest Prefix–Suffix) table for the pattern, and performs pattern matching in linear time. It prints all starting indices where the pattern occurs in the text.

Theory:
Traditional pattern matching may recheck characters unnecessarily when mismatches occur.  
KMP eliminates this by preprocessing the pattern to create an LPS array.  
LPS stores the length of the longest prefix that is also a suffix for each position in the pattern, allowing the algorithm to skip unnecessary comparisons without backtracking in the text.

Working of the Algorithm:
1. Build the LPS array for the pattern using buildLPS():
   • Indicates how far to shift pattern when mismatch happens.
2. Scan through the text using KMP():
   • If characters match, move forward in both text and pattern.
   • If a mismatch happens:
       – The pattern index is updated based on the LPS value (no backward movement in the text).
3. Print the index every time the full pattern is matched.

Output:
The program prints:
Pattern found at index X
for each occurrence of the pattern inside the text.

Time Complexity:
-----------------------------------------------
Building LPS array       O(m)
Pattern searching        O(n)
Overall complexity       O(n + m)
where n = length of text and m = length of pattern.

Important Notes:
Works efficiently even for long text and repeated patterns.
No character of the text is processed more than once.
Indexes printed follow zero-based indexing.

Applications:
Text search engines and editors (find / replace operations)
Plagiarism detection and DNA sequence matching
Network intrusion detection
String processing inside compilers

String Searching – KMP Algorithm – README

Aim:
To implement and demonstrate efficient pattern matching using the Knuth–Morris–Pratt (KMP) string searching algorithm.

Objective:
The program searches for a substring (pattern) within a larger text in linear time using preprocessing of the pattern. If the pattern occurs in the text, the algorithm prints the starting indices of matches; otherwise, it reports that the pattern is not found.

Theory:
The KMP Algorithm is an advanced string searching method that avoids redundant comparisons by using previously matched information. Instead of rechecking characters after a mismatch, KMP uses the LPS (Longest Prefix Suffix) table to skip unnecessary comparisons, ensuring linear time complexity.

Key Concepts:
1. Pattern Preprocessing:
   • Construct the LPS (Longest Prefix Suffix) table for the pattern.
   • The table stores the length of the longest proper prefix which is also a suffix up to each position.

2. Pattern Searching:
   • Traverse the text and compare it with the pattern.
   • On a mismatch, instead of resetting to the beginning of the pattern, use the LPS table to continue matching efficiently.

LPS Table (Longest Prefix Suffix):
• A prefix is a substring starting at the beginning of the pattern.
• A suffix is a substring ending at the end of the pattern.
• LPS[i] = longest prefix of pattern that is also a suffix for pattern[0…i]

Program Explanation:
1. The user inputs the text and the pattern.
2. The LPS array for the pattern is generated during preprocessing.
3. The searching phase matches characters using the LPS array to skip redundant comparisons.
4. All matching start positions in the text are displayed.

Output:
• LPS table for the pattern
• All indices where the pattern is found in the text
• Message if no match is found

Advantages:
• Time complexity is linear: O(n + m)
• No backtracking in the main string search
• Works efficiently even with repeated characters in text and pattern

Time Complexity:
• Preprocessing: O(m)
• Searching: O(n)
• Overall: O(n + m)
where n = length of text, m = length of pattern

Applications:
• Text editors and word processors (Find/Replace)
• DNA pattern searching in bioinformatics
• Plagiarism and document comparison
• Search engines and data retrieval software
• Network packet inspection and intrusion detection systems

Important Notes:
• KMP is more efficient than the Naive search for long strings and repeated patterns.
• The algorithm guarantees linear time in worst case.
• LPS construction is critical to the performance of the search phase.

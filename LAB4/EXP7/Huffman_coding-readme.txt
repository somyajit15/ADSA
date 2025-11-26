Huffman Coding – README

Aim:
To generate optimal variable-length binary codes for characters based on their frequency using Huffman coding.

Objective:
The program takes characters with their frequencies as input, builds a Huffman tree by repeatedly combining the two least-frequent nodes, and prints the Huffman codes for each character.

Theory:
Huffman coding is a lossless data compression technique based on assigning shorter binary codes to more frequent characters and longer codes to less frequent characters.  
The algorithm works by:
1. Treating each character and its frequency as a node.
2. Selecting the two nodes with the smallest frequency.
3. Combining them into a new internal node whose frequency is the sum of the two.
4. Repeating until one final node (root of Huffman tree) remains.
Traversing left adds bit 0 and right adds bit 1, creating prefix-free binary codes.

Explanation of Program:
1. The user enters characters and their frequencies.
2. All nodes are stored in an array acting as a min-heap (sorted by frequency).
3. Two smallest nodes are repeatedly removed, merged into a new node, and inserted back.
4. After the Huffman tree is built, printCodes() performs traversal:
   • Left branch assigns 0
   • Right branch assigns 1
5. Upon reaching a leaf node (a character), the accumulated bits form that character’s Huffman code.

Output:
The program prints:
Character → Huffman code for each input symbol

Time Complexity:
-----------------------------------------------------------------
Building Huffman Tree     O(n log n)    (n = number of characters)
Printing Huffman Codes    O(n)
Overall complexity        O(n log n)

Important Notes:
Huffman codes are prefix-free, meaning no code is a prefix of another.
More frequent characters receive shorter codes.
Characters must be provided with their integer frequency values.

Applications:
Lossless compression (ZIP, GZIP)
Text compression
Multimedia compression standards (JPEG, MP3, PNG)
Efficient encoding for transmission and storage

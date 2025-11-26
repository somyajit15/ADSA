Infix to Postfix Conversion and Evaluation – README

Aim:
To convert an arithmetic expression from infix form to postfix form using stack operations and then evaluate the postfix expression.

Objective:
The program accepts an infix expression containing single-digit operands, converts it to postfix using operator precedence rules and stack operations, and then evaluates the postfix expression to produce the final numeric result.

Theory:
Infix notation places the operator between operands (e.g., A + B), but requires parentheses and precedence rules for correct evaluation.
Postfix notation (Reverse Polish Notation) places the operator after operands (e.g., A B +) and does not require parentheses, making it easier for computers to evaluate.
Stacks are used for both:
1. Converting infix to postfix
2. Evaluating the postfix expression

Explanation of Program:
1. The user inputs an infix expression.
2. infixToPostfix() converts the expression by:
   - Sending operands directly to postfix output
   - Using a stack to store operators according to precedence and parentheses
3. evaluatePostfix() scans the postfix expression:
   - Operands are pushed onto an integer stack
   - When an operator appears, the top two operands are popped, the operation is performed, and the result is pushed back
4. The final answer remaining on the value stack is printed.

Output:
The program prints:
Postfix expression derived from the given infix expression
Final evaluated result of the postfix expression

Important Notes:
Only single-digit operands are supported.
Operator precedence handled: ^ (highest), *, /, +, − (lowest).
Parentheses are processed during conversion but not included in postfix output.
Valid operators: +, −, *, /, ^

Time Complexity:
Infix to Postfix Conversion: O(n)
Postfix Evaluation: O(n)
Overall complexity: O(n), where n is the length of the input expression.

Applications:
Expression conversion and evaluation in compilers and interpreters
Mathematical calculators
Expression parsing in symbolic computation systems

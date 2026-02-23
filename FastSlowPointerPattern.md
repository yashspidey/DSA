// HOW TO RECOGNIZE FAST AND SLOW POINTER PATTERN IN A QUESTION OF ARRAYS/LINKED-LIST

1️⃣ You must modify the array in-place

Keywords:

“in-place”

“O(1) extra space”

“without using extra array”

📌 Reason:
You need one pointer to read (fast) and one to write (slow).

2️⃣ Array / string is sorted

Keywords:

“sorted array”

“non-decreasing order”

📌 Reason:
Duplicates or conditions are grouped together, so one pointer can skip while the other locks results.

3️⃣ You’re asked to filter elements

Keywords:

“remove”

“delete”

“keep only”

“move all X to the end”

📌 Reason:
You don’t actually delete — you overwrite.

4️⃣ You must compare adjacent or spaced elements

Keywords:

“consecutive”

“next greater”

“adjacent”

📌 Reason:
One pointer tracks previous state, one scans forward.

5️⃣ Linked List + cycle / middle

⚠️ Different flavor but same idea

Keywords:

“cycle”

“middle of linked list”

📌 Reason:
Different speeds reveal structure.

🧠 Ultra-important interview heuristic

Ask yourself:

“Can I do this in one pass by keeping a boundary?”

If yes → fast & slow pointers
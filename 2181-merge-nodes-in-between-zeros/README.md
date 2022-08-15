<h2><a href="https://leetcode.com/problems/merge-nodes-in-between-zeros/">2181. Merge Nodes in Between Zeros</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given the <code style="user-select: auto;">head</code> of a linked list, which contains a series of integers <strong style="user-select: auto;">separated</strong> by <code style="user-select: auto;">0</code>'s. The <strong style="user-select: auto;">beginning</strong> and <strong style="user-select: auto;">end</strong> of the linked list will have <code style="user-select: auto;">Node.val == 0</code>.</p>

<p style="user-select: auto;">For <strong style="user-select: auto;">every </strong>two consecutive <code style="user-select: auto;">0</code>'s, <strong style="user-select: auto;">merge</strong> all the nodes lying in between them into a single node whose value is the <strong style="user-select: auto;">sum</strong> of all the merged nodes. The modified list should not contain any <code style="user-select: auto;">0</code>'s.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the</em> <code style="user-select: auto;">head</code> <em style="user-select: auto;">of the modified linked list</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/02/02/ex1-1.png" style="width: 600px; height: 41px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [0,3,1,0,4,5,2,0]
<strong style="user-select: auto;">Output:</strong> [4,11]
<strong style="user-select: auto;">Explanation:</strong> 
The above figure represents the given linked list. The modified list contains
- The sum of the nodes marked in green: 3 + 1 = 4.
- The sum of the nodes marked in red: 4 + 5 + 2 = 11.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/02/02/ex2-1.png" style="width: 600px; height: 41px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [0,1,0,3,0,2,2,0]
<strong style="user-select: auto;">Output:</strong> [1,3,4]
<strong style="user-select: auto;">Explanation:</strong> 
The above figure represents the given linked list. The modified list contains
- The sum of the nodes marked in green: 1 = 1.
- The sum of the nodes marked in red: 3 = 3.
- The sum of the nodes marked in yellow: 2 + 2 = 4.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the list is in the range <code style="user-select: auto;">[3, 2 * 10<sup style="user-select: auto;">5</sup>]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= Node.val &lt;= 1000</code></li>
	<li style="user-select: auto;">There are <strong style="user-select: auto;">no</strong> two consecutive nodes with <code style="user-select: auto;">Node.val == 0</code>.</li>
	<li style="user-select: auto;">The <strong style="user-select: auto;">beginning</strong> and <strong style="user-select: auto;">end</strong> of the linked list have <code style="user-select: auto;">Node.val == 0</code>.</li>
</ul>
</div>
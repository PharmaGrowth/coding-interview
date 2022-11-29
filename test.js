const TreeNode = (value, left, right) => {
  this.value = value;
  this.right = right;
  this.left = left;
  return this;
};

const ListNode = (value, next) => {
  this.value = value;
  this.next = next;
  return this;
};

const root = TreeNode(
  1,
  TreeNode(
    1,
    TreeNode(2, null, null),
    TreeNode(3, TreeNode(5, null, null), null)
  ),
  TreeNode(8, TreeNode(13, null, null), null)
);

// Fix the function so that the program output matches the expected output
function work(root) {
  return ListNode(root.value, null);
}

// Any modifications to the code after this line will result in immediate disqualification.
const value = [];
const result = work(root);
const to_array = (node) => {
  if (node == null) return;
  value.push(node.value);
  to_array(node.next);
};
to_array(result);
console.log(value);

//Expected Output
//[1, 1, 2, 3, 5, 8, 13]
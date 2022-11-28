class TreeNode:
    def __init__(self, value, left, right):
        self.value = value
        self.left = left
        self.right = right

class ListNode:
    def __init__(self, value, next):
        self.value = value
        self.next = next

root = TreeNode(
    1,
    TreeNode(1, TreeNode(2, None, None),
             TreeNode(3, TreeNode(5, None, None), None)),
    TreeNode(8, TreeNode(13, None, None), None))

#Fix the function so that the program output matches the expected output
def work(root):
    return ListNode(root.value, None)



#Any modifications to the code after this line will result in immediate disqualification. 
result = work(root)
value = []
def to_array(node):
    if (node == None): return
    value.append(node.value)
    to_array(node.next)
to_array(result)
print(value)

#Expected Output
#[1, 1, 2, 3, 5, 8, 13]
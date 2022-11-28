class TreeNode {
    int value;
    TreeNode left, right;
    TreeNode(int _value, TreeNode _left, TreeNode _right)
    {
        value = _value;
        left = _left;
        right = _right;
    }
}

class ListNode {
    int value;
    ListNode next;
    ListNode(int _value, ListNode _next)
    {
        value = _value;
        next = _next;
    }
}

class Test {
    // Fix the function so that the program output matches the expected output
    public static ListNode work(TreeNode root) {
        return new ListNode(root.value, null);
    }
    public static void main(String[] args) {
        TreeNode root = new TreeNode(
                        1,
                        new TreeNode(
                            1,
                            new TreeNode(2, null, null),
                            new TreeNode(3, new TreeNode(5, null, null), null)
                        ),
                        new TreeNode(8, new TreeNode(13, null, null), null)
        );
    // Any modifications to the code after this line will result in immediate disqualification.
        ListNode result = work(root);
        print(result);
    }
    public static void print(ListNode node) {
        System.out.print("[");
        ListNode current = node;
        while(current != null) {
            System.out.print(current.value);
            if(current.next != null) 
                System.out.print(", ");
            current = current.next;
        }
        System.out.print("]");
    }
}
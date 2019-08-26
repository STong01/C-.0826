#include "queue.h"
#include "BTree.h"
#include "stack.h"

int main(){
	BTNode * root = BinaryTreeCreate("ABD#GI##J###CE#HK###F##");

	BinaryTreePrevOrder(root);//递归实现前序遍历
	putchar('\n');
	BinaryTreeInOrder(root);//递归实现中序遍历
	putchar('\n');
	BinaryTreePostOrder(root);//递归实现后序遍历
	putchar('\n');

	BinaryTreeLevelOrder(root);//递归实现层序遍历
	putchar('\n');

	BinaryTreeInOrderNonR(root);//栈实现中序遍历
	putchar('\n');

	BinaryTreePrevOrderNonR(root);//栈实现前序遍历
	putchar('\n');

	BinaryTreePostOrderNonR(root);//栈实现后序遍历
	putchar('\n');

	printf("%d\n", BinaryTreeComplete(root));
	
	BinaryTreeDestory(root);

	BTNode * root2 = BinaryTreeCreate("ABDH##I##EJ###CF##G##");

	printf("%d\n", BinaryTreeComplete(root2));

	BinaryTreeDestory(root2);

	system("pause");
	return 0;
}

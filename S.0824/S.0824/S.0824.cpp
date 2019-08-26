#include "queue.h"
#include "BTree.h"
#include "stack.h"

int main(){
	BTNode * root = BinaryTreeCreate("ABD#GI##J###CE#HK###F##");

	BinaryTreePrevOrder(root);//�ݹ�ʵ��ǰ�����
	putchar('\n');
	BinaryTreeInOrder(root);//�ݹ�ʵ���������
	putchar('\n');
	BinaryTreePostOrder(root);//�ݹ�ʵ�ֺ������
	putchar('\n');

	BinaryTreeLevelOrder(root);//�ݹ�ʵ�ֲ������
	putchar('\n');

	BinaryTreeInOrderNonR(root);//ջʵ���������
	putchar('\n');

	BinaryTreePrevOrderNonR(root);//ջʵ��ǰ�����
	putchar('\n');

	BinaryTreePostOrderNonR(root);//ջʵ�ֺ������
	putchar('\n');

	printf("%d\n", BinaryTreeComplete(root));
	
	BinaryTreeDestory(root);

	BTNode * root2 = BinaryTreeCreate("ABDH##I##EJ###CF##G##");

	printf("%d\n", BinaryTreeComplete(root2));

	BinaryTreeDestory(root2);

	system("pause");
	return 0;
}

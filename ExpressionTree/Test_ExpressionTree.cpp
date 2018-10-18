#include"ExpressionTree.h"

int main(void)
{
	ETNode* Root = NULL;

	char PostdixExpression[20] = "71*52-/";
	ET_BuildExpressionTree(PostdixExpression, &Root);

	printf("Preorder....\n");
	ET_PredorderPrintTree(Root);
	printf("\n\n");

	printf("Inorder...\n");
	ET_InorderPrintTree(Root);
	printf("\n\n");

	printf("Postorder...\n");
	ET_PostorderPrintTree(Root);
	printf("\n");

	printf("Evaulation Result : %f \n", ET_Evauate(Root));
	
	ET_DestroyTree(Root);

	return 0;
}
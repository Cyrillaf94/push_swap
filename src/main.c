#include "push_swap.h"

int main(int argc, char **argv)
{

	node_t *list;

	list = NULL;
	list = parse_list(argc, argv);
	if (list)
	{
		ft_list_print(list, 'a');
		sort_list(list, argc - 1);
		ft_lstclear_circular(&list);
	}
	return (0);
}

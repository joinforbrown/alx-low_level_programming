#include "shell.h"
/**
 * Return: 0
 * @info: udes to maintain constant function prototype
 * _myenv - print the current environment
 */

int _myenv(info_t *info)
{
	print_list_str(info->env);
	return (0);
}

/**
 * Return: the value of the 
 * @name: env var name
 * @info: used to maintain constant function prototype
 * _getenv - get the value of the environment var
 */

char *_getenv(info_t *info, const cahr *name)
{
	list_t *node = info->env;
	char *p
}

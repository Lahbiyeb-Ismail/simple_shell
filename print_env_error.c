#include "shell.h"

/**
 * print_env_error - Prints an error message related to environment
 * variable operations.
 *
 * Description:
 * This function generates and prints an error message when there is a failure
 * in adding or removing an environment variable. It utilizes the provided
 * information such as the command, exit status, shell name, and command index.
 *
 * @cmd: The array containing the command and its arguments.
 * @shell_name: The name of the shell.
 * @cmd_idx: The index of the command in the shell's command history.
 *
 * Return: void
 */

int print_env_error(char **cmd, char *shell_name, int cmd_idx)
{
	char *env_err_msg = "Unable to add/remove from environment";
	int exit_status = 2;

	/* Print a shell error message with details about the env operation failure */
	print_shell_error(shell_name, cmd_idx, cmd, env_err_msg);

	/* Set the exit status to -1 to indicate an error */
	return (exit_status);
}

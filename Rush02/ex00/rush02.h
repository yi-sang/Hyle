/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoon <syoon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 21:19:28 by syoon             #+#    #+#             */
/*   Updated: 2021/04/11 21:19:29 by syoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define ERR_MSG "Error"
# define DICT_ERR_MSG "Dict Error"
# define DEFAULT_DICT_FILE "numbers.dict"
# define VALID_NUM_LEN 39

typedef struct		s_dict
{
	char			*key;
	char			*value;
	struct s_dict	*next;
}					t_dict;

extern t_dict *g_dict;
extern int g_dict_error;
extern int g_error;
extern int g_is_first;
extern int g_eof;

t_dict				*make_struct(char *key, char *val);
void				push(char *key, char *val);
void				build_dict(char *file);
void				insert_key_value(char *str);
char				*get_val(char *key);

char				*trim_left(char *str);
void				trim_right(char *str);
char				*trim_side(char *str);
char				*trim_alloc(char *str);
int					all_space(char *str);

int					ft_strlen(char *str);
void				ft_strcpy(char *dst, char *start, char *end);
int					ft_is_equal(char *a, char *b);

char				*read_line(int fd);
char				*read_num(void);
void				ft_free(void *ptr);

void				print(char *str);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				print_error_msg(char *str);

int					is_space(char c);
int					is_number(char c);
int					is_valid_num(char *str);
int					is_valid_key_value(char *str);

void				rush(int argc, char *argv[]);
void				convert_num(char *num);
char				*build_unit_str(int cnt);

#endif

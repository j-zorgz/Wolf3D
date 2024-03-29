/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftmatrices.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcamhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 19:19:43 by jcamhi            #+#    #+#             */
/*   Updated: 2018/09/06 19:19:44 by jcamhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTMATRICES_H
# define LIBFTMATRICES_H
# include <libft.h>
# include <stdio.h>
# include <math.h>

# ifndef M_PI
#  define M_PI 3.1415926535897932384626
# endif

# define DEGREES_TO_RADIAN(angle) (angle * M_PI / 180.0)
# define RADIANS_TO_DEGREE(angle) (angle * 180.0 / M_PI)

typedef	double	t_mat4x4[4][4];
typedef double	t_vec4[4];
typedef double	t_vec3[3];

void	ft_mat4x4_set_identity(t_mat4x4 matrice);
void	ft_mat4x4_set_zero(t_mat4x4 m);
void	ft_mat4x4_set_projection(t_mat4x4 m, const double array[4]);
void	ft_mat4x4_set_translation(t_mat4x4 m, const t_vec3 v);
void	ft_mat4x4_set_look_at(t_mat4x4 matrice, const t_vec3 eye,
	const t_vec3 target, const t_vec3 up);
void	ft_mat4x4_set_look_at_from_double_array(t_mat4x4 matrice,
	const double eye[3], const double target[3], const double up[3]);
void	ft_mat4x4_set_rotation(t_mat4x4 matrice, double angle,
	const t_vec3 axis);
void	ft_mat4x4_set_scale(t_mat4x4 matrix, const t_vec3 scale);

void	ft_mat4x4_print(const t_mat4x4 matrice);
void	ft_mat4x4_mult(t_mat4x4 ret, const t_mat4x4 m1, const t_mat4x4 m2);
void	ft_mat4x4_copy(t_mat4x4 dest, const t_mat4x4 src);
void	ft_mat4x4_mult_with_real(t_mat4x4 rez, const t_mat4x4 m, double r);
void	ft_mat4x4_mult_with_vec4(t_vec4 rez, const t_mat4x4 m1,
	const t_vec4 vec);

void	ft_mat4x4_translate(t_mat4x4 m, const t_vec3 v);
void	ft_mat4x4_rotate(t_mat4x4 matrice, double angle, const t_vec3 axis);
void	ft_mat4x4_scale(t_mat4x4 matrice, const t_vec3 scale);
void	ft_mat4x4_translate_from_double_array(t_mat4x4 m, const t_vec3 v);
void	ft_mat4x4_rotate_from_double_array(t_mat4x4 matrice, double angle,
	const t_vec3 axis);
void	ft_mat4x4_scale_from_double_array(t_mat4x4 matrice, const t_vec3 scale);

void	ft_mat4x4_to_float_array(float dest[16], const t_mat4x4 matrice);

void	ft_vec4_init(t_vec4 vec, const double tab[4]);
void	ft_vec4_print(const t_vec4 v);

void	ft_vec3_init(t_vec3 vec, const double tab[3]);
void	ft_vec3_print(const t_vec3 v);
void	ft_vec3_copy(t_vec3 dst, const t_vec3 src);

void	ft_vec3_add(t_vec3 dst, const t_vec3 v1, const t_vec3 v2);
void	ft_vec3_sub(t_vec3 dst, const t_vec3 v1, const t_vec3 v2);
void	ft_vec3_cross(t_vec3 dst, const t_vec3 v1, const t_vec3 v2);
double	ft_vec3_dot(const t_vec3 u, const t_vec3 v);

double	ft_vec3_get_magnitude(const t_vec3 vector);
void	ft_vec3_normalize(t_vec3 vector);

#endif

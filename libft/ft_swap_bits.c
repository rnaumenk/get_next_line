/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 15:13:48 by rnaumenk          #+#    #+#             */
/*   Updated: 2017/11/18 15:13:49 by rnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	ft_swap_bits(unsigned char octet)
{
	return ((octet >> 4 & 0x0F) | (0xF0 & octet << 4));
}
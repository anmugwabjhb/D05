/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmugwab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:14:23 by anmugwab          #+#    #+#             */
/*   Updated: 2020/07/16 09:42:04 by anmugwab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    int needle_len;
    int needle_letter_count;
    char *result;

	i = 0;
	j = 0;
	needle_len = 0;
	needle_letter_count = 0;
    
    while (to_find[needle_len])
    {
        needle_letter_count++;
        needle_len++;
    }
    
    while (str[i])
    {
        if (str[i] == to_find[j])
        {
            result = &str[i];
            i++;
            j++;
            needle_letter_count--;
            
            while ((str[i] == to_find[j]) && (needle_letter_count > 0))
            { 
                i++;
                j++;
                needle_letter_count--;
            }
            
            if (needle_letter_count == 0)
                return result;
            else
            {
                needle_letter_count = needle_len;
                j = 0;
            }
        }
        
        i++;
    }
    
    return (NULL);
}

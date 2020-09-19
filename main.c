/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 17:24:56 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/19 18:43:05 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int isinline(int val, int line, int tab[4][4])
{
	int k;

	k = 0;
	while (k <4)
	{
		if (tab[line][k] == val)
			return (1);
		k++;
	}
	return(0);
}

int isincol(int val, int col, int **tab)
{
	int k;

	k = 0;
	while (k <4)
	{
		if (tab[k][col] == val)
			return (1);
		k++;
	}
	return(0);
}

int viewedvaluedirect(int *tab)
{
	int i;
	int k;
	int max;
	i = 1;
	k = 1;
	max = tab[0];
	while (k < 4)
	{
		if (max < tab[k + 1])
		{
			i++;
			max = tab[k];
		}
	k++;
	}
	return (i);
}

int viewedvaluereverse(int *tab)
{
	int i;
	int k;
	int max;
	i = 1;
	k = 3;
	max = tab[3];
	while (k >= 0)
	{
		if (max < tab[k + 1])
		{
			i++;
			max = tab[k];
		}
	k--;
	}
	return (i);
}

int *extract(int i, int **tab)
{
	int k;
	int *res;

	k = 0;
	if (i/4 == 0)
	{
		while (k < 4)
		{
			res[k] = tab[k][i%4];
			k++;
		}
	}
	else if (i/4 == 1)
	{
		while (k < 4)
		{
			res[k] = tab[k][i%4];
			k++;
		}
	}
	else if (i/4 == 1)
	{
		while (k < 4)
		{
			res[k] = tab[k][i%4];
			k++;
		}
	}
	else if (i/4 == 1)
	{
		while (k < 4)
		{
			res[k] = tab[k][i%4];
			k++;
		}
	}
}

int main()
{

}

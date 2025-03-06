/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 23:59:28 by npentini          #+#    #+#             */
/*   Updated: 2025/03/07 03:56:03 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

class Louder
{
	private:
	char loud;
	std::string word;

	public:
	
	int saySomething(int argc)
	{
		if (argc < 2)
		{
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
			return (1);
		}
		return (0);
	}
	
	void sayItLoud(int argc, char *argv[])
	{
		for (int i = 1; i < argc; i++)
		{
			word = argv[i];
			for (int j = 0; j < word.length(); j++)
			{
				loud = toupper(word[j]);
				std::cout << loud;
			}
		}
	};

};

int	main(int argc, char *argv[])
{
	Louder speak;
	if (speak.saySomething(argc) == 0)
		speak.sayItLoud(argc, argv);
	std::cout << '\n';
	return (0);
}
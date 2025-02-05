/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:17:37 by hai               #+#    #+#             */
/*   Updated: 2025/02/05 11:55:32 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void replaceString(const std::string& filename, const std::string& s1, const std::string& s2)
{
	std::ifstream file(filename.c_str());
	std::string content;
	ReadFileToContent(filename, content);
	if (content.find(s1) == std::string::npos)
	{
		std::cout << "No occurrences of \"" << s1 << "\" found. No changes made." << std::endl;
		return;
	}
	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos += s2.length();
	}
	std::string newFilename = filename + ".replace";
	CopyContentToFile(newFilename, content);
	std::cout << "File " << filename << " has been successfully replaced and saved as " << newFilename << std::endl;
}

void ReadFileToContent(const std::string& filename, std::string& content)
{
	std::ifstream file(filename.c_str());
	if (!file.is_open())
	{
		std::cout << "Error: could not open file" << std::endl;
		return;
	}
	std::string line;
	while (std::getline(file, line))
	{
		content += line + "\n";
	}

	if (content.empty())
	{
		std::cout << "Error: file is empty" << std::endl;
		file.close();
		return;
	}
	file.close();
}

void CopyContentToFile(const std::string& filename, const std::string& content)
{
	std::ofstream outFile(filename.c_str());  // Use c_str() for compatibility
	if (!outFile.is_open())
	{
		std::cout << "Error: could not create file" << filename << std::endl;
		return;
	}
	outFile << content;
	outFile.close();
}

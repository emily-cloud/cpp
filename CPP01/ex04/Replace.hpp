/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hai <hai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:19:53 by hai               #+#    #+#             */
/*   Updated: 2025/02/05 11:51:14 by hai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

void replaceString(const std::string& filename, const std::string& s1, const std::string& s2);
void CopyContentToFile(const std::string& filename, const std::string& content);
void ReadFileToContent(const std::string& filename, std::string& content);

#endif

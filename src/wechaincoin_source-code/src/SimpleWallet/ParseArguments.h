/*
Copyright (C) 2018, The prospere developers
Copyright (C) 2018, The TurtleCoin developers

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include "version.h"
#include "CryptoNoteConfig.h"

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <string>

struct Config
{
    bool exit;

    bool walletGiven;
    bool passGiven;

    std::string host;
    int port;

    std::string walletFile;
    std::string walletPass;
};

char* getCmdOption(char ** begin, char ** end, const std::string & option);

bool cmdOptionExists(char** begin, char** end, const std::string& option);

Config parseArguments(int argc, char **argv);

void helpMessage();

void versionMessage();

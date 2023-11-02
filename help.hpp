#ifndef HPP_HELP
#define HPP_HELP

#include <string>

const std::string g_strHelp = R"(
Usage: ./profanity [OPTIONS]

  Help:
    --help              Show help information

  Modes with arguments:
    --matching          Matching input, file or single address.

  Matching configuration:
    --prefix-count      Minimum number of prefix matches, default 0
    --suffix-count      Minimum number of suffix matches, default 0
    --quit-count        Exit the program when the generated number is greater than, default 0

  Device control:
    --skip              Skip GPU device given by index

  Output control:
    --output            The file to output the results to
    --post              The url to post the results to

Examples:

  ./profanity --matching profanity.txt
  ./profanity --matching profanity.txt --skip 1
  ./profanity --matching profanity.txt --suffix-count 6
  ./profanity --matching profanity.txt --prefix-count 2 --suffix-count 6 --quit-count 1
  ./profanity --matching profanity.txt --suffix-count 6 --output result.txt
  ./profanity --matching profanity.txt --suffix-count 6 --post http://127.0.0.1:7002/api
  ./profanity --matching TJ31rohjDBXbu8LTH8oJ6khhdrpnWcKrmr --prefix-count 2 --suffix-count 4 --quit-count 1

About:

  Profanity is a vanity address generator for tron: https://tron.network/
  This software is modified based on ethereum profanity: https://github.com/johguse/profanity
  Please make sure the program you are running is download from: https://github.com/sponsord/profanity-tron
  Author: telegram -> @dontond

Fbi Warning:

  Before using a generated vanigity address, always verify that it matches the printed private key.
  And always multi-sign the address to ensure account security.
)";

#endif /* HPP_HELP */
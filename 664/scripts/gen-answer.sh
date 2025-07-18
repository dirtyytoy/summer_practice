#!/usr/bin/env bash
if [ "$#" -ne "4" ]; then
    read
fi
if [ "$1" = "" ]; then
    read
fi
if [ "$2" = "" ]; then
    read
fi
if [ ! -f "$1" ]; then
    read
fi
echo "Running solution solutions_cotleta.cpp"
wine solutions/solutions_cotleta.exe < "$1" > output.txt
if [ "$?" -ne "0" ]; then
    echo "Solution returned non-zero exit code"
    read
fi
if [ ! -f "output.txt" ]; then
    echo "Solution didn't produced output"
    read
fi
mv output.txt "$2"
echo "Running checker"
wine check.exe "$1" "$2" "$2"
if [ "$?" -ne "0" ] && [ "$?" -ne "7" ]; then
    echo "Checker exit code is not equal to 0 and 7"
    read
fi

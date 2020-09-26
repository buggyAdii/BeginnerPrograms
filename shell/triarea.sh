#!/bin/bash 
echo -n "Enter base: "
read base
echo -n "Enter height: "
read height
area=$(((base * height)/2))
echo area=$area

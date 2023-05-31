%{
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include<math.h>
	#include "main.tab.h"
%}

variable		[a-zA-Z]*
digit			[0-9]
header			"import ".*
comment			[#].*
m_comment 		"##"[^##]*"##"

%%

"def masum"		{printf("\nProgram main function started\n"); return STARTPROGRAM;}
"+"				{return PLUS;}
"++"			{return INCREMENT;}
"-"      	  	{return MINUS;}
"--"			{return DECREMENT;}
"*"				{return MUL;}
"/"   			{return DIV;}
"%"    			{return MOD;}
"<="			{return LTE;}
">="			{return GTE;}
"=="			{return EQL;}
"!="			{return NEQL;}
"!"				{return NOT;}
"{"				{return CBS;}
"}"				{return CBE;}
"case"			{return CASE;}
"switch"		{return SWITCH;}
"default"		{return DEFAULT;}
"pf"			{return SHOW;} 
"if"			{return IF;}
"else"			{return ELSE;}
"elif"			{return ELIF;}
"loop"			{return LOOP;}
"while"			{return WHILE;}
"factorial"		{return FACTORIAL;}
"evenodd"		{return EVENODD;}
"int"  			{return INT;}
"char" 			{return CHAR;}
"float"			{return FLOAT;}
"sin"			{return SIN;}
"cos"			{return COS;}
"tan"			{return TAN;}
"log"			{return LOG;}
"array"			{return ARRAY;}
"<int>"			{return ARRINT;}
"<float>"		{return ARRFLOAT;}
"<char>"		{return ARRCHAR;}
"class" 		{return CLASS;}
"min" 			{return MIN;}
"max" 			{return MAX;}
"gcd" 			{return GCD;}
"lcm" 			{return LCM;}
"isprime"		{return ISPRIME;}
"pow" 			{return POW;}
"powmod" 		{return POWMOD;}
"mulmod" 		{return MULMOD;}
"function"		{printf("\nFunction Declaration\n"); return FUNCTION;}
{header}		{printf("\nHeader file found: "); ECHO; printf("\n");}
{comment}		{printf("\nSingle line comment found: "); ECHO;printf("\n");}
{m_comment}		{printf("\nMulti line comment found: "); ECHO;printf("\n");}
[<>=,():;^]		{return yytext[0];}
{digit}+		{yylval.val = atoi(yytext); return NUMBER;}
{variable}		{strcpy(yylval.text, yytext); return VAR;}
[ ]*	    	{}
[\n]*			{}
[\t]*			{}
.				{printf("\nUnknown syntax: %s\n", yytext);}

%%

/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "main.y"

	/* C Declarations */
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	#include<string.h>
	#define maxn 1000007
	char valname[1009][1009];
	int data[1009], switch_data[maxn+1];
	int idx = 1;
	int isDeclared(char *now) {
		for(int i=1; i<idx; i++) {
			if(strcmp(valname[i], now) == 0) {
				return i; 
			}
		}
		return 0;
	}
	int addNewVal(char *now){
		if(isDeclared(now)) return 0;
		strcpy(valname[idx], now);
		data[idx]=0;
		idx++;
	}
	int getVal(char *now) {
		return data[isDeclared(now)];
	}
	int setVal(char *now, int v) {
		int id = isDeclared(now);
		data[id] = v;
	}


/* Line 189 of yacc.c  */
#line 107 "main.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     VAR = 259,
     STARTPROGRAM = 260,
     IF = 261,
     PLUS = 262,
     MINUS = 263,
     MUL = 264,
     DIV = 265,
     MOD = 266,
     INCREMENT = 267,
     DECREMENT = 268,
     LTE = 269,
     GTE = 270,
     EQL = 271,
     NEQL = 272,
     NOT = 273,
     ELSE = 274,
     ELIF = 275,
     INT = 276,
     FLOAT = 277,
     CHAR = 278,
     CBS = 279,
     CBE = 280,
     LOOP = 281,
     WHILE = 282,
     EVENODD = 283,
     SHOW = 284,
     SIN = 285,
     COS = 286,
     TAN = 287,
     LOG = 288,
     FACTORIAL = 289,
     CASE = 290,
     DEFAULT = 291,
     SWITCH = 292,
     MIN = 293,
     MAX = 294,
     GCD = 295,
     LCM = 296,
     ISPRIME = 297,
     POW = 298,
     POWMOD = 299,
     MULMOD = 300,
     FUNCTION = 301,
     ARRAY = 302,
     ARRINT = 303,
     ARRFLOAT = 304,
     ARRCHAR = 305,
     CLASS = 306
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 35 "main.y"

	char text[1009];
	int val;



/* Line 214 of yacc.c  */
#line 201 "main.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 213 "main.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1117

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNRULES -- Number of states.  */
#define YYNSTATES  417

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      52,    53,     2,     2,    59,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    54,    55,
      57,    56,    58,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    60,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    11,    12,    15,    17,    20,    23,    28,
      36,    48,    67,    75,    85,    95,   105,   115,   127,   133,
     142,   150,   158,   166,   173,   179,   185,   193,   201,   209,
     217,   223,   231,   241,   251,   252,   255,   257,   260,   263,
     268,   276,   288,   307,   315,   325,   335,   345,   355,   367,
     373,   381,   389,   397,   403,   409,   417,   425,   433,   441,
     447,   455,   465,   475,   478,   480,   482,   484,   488,   490,
     492,   495,   496,   499,   505,   510,   512,   514,   518,   522,
     526,   530,   534,   538,   542,   546,   550,   554,   557,   560,
     563,   567,   571,   575,   578,   581,   584
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      62,     0,    -1,     5,    52,    53,    54,    24,    63,    25,
      -1,    -1,    63,    64,    -1,    55,    -1,    67,    55,    -1,
      74,    55,    -1,     4,    56,    74,    55,    -1,     6,    52,
      74,    53,    24,    64,    25,    -1,     6,    52,    74,    53,
      24,    64,    25,    19,    24,    64,    25,    -1,     6,    52,
      74,    53,    24,    64,    25,    20,    52,    74,    53,    24,
      64,    25,    19,    24,    64,    25,    -1,    37,    52,    74,
      53,    24,    70,    25,    -1,    26,    52,    74,    57,    74,
      53,    24,    64,    25,    -1,    26,    52,    74,    14,    74,
      53,    24,    64,    25,    -1,    26,    52,    74,    58,    74,
      53,    24,    64,    25,    -1,    26,    52,    74,    15,    74,
      53,    24,    64,    25,    -1,    26,    52,    74,    59,    74,
      59,    74,    53,    24,    64,    25,    -1,    29,    52,    74,
      53,    55,    -1,    46,     4,    52,    65,    53,    24,    65,
      25,    -1,    47,    48,     4,    52,     3,    53,    55,    -1,
      47,    49,     4,    52,     3,    53,    55,    -1,    47,    50,
       4,    52,     3,    53,    55,    -1,    51,     4,    24,    64,
      25,    55,    -1,    34,    52,     3,    53,    55,    -1,    28,
      52,     3,    53,    55,    -1,    38,    52,     3,    59,     3,
      53,    55,    -1,    39,    52,     3,    59,     3,    53,    55,
      -1,    40,    52,     3,    59,     3,    53,    55,    -1,    41,
      52,     3,    59,     3,    53,    55,    -1,    42,    52,     3,
      53,    55,    -1,    43,    52,     3,    59,     3,    53,    55,
      -1,    44,    52,     3,    59,     3,    59,     3,    53,    55,
      -1,    45,    52,     3,    59,     3,    59,     3,    53,    55,
      -1,    -1,    65,    66,    -1,    55,    -1,    67,    55,    -1,
      74,    55,    -1,     4,    56,    74,    55,    -1,     6,    52,
      74,    53,    24,    66,    25,    -1,     6,    52,    74,    53,
      24,    66,    25,    19,    24,    66,    25,    -1,     6,    52,
      74,    53,    24,    66,    25,    20,    52,    74,    53,    24,
      66,    25,    19,    24,    66,    25,    -1,    37,    52,    74,
      53,    24,    70,    25,    -1,    26,    52,    74,    57,    74,
      53,    24,    66,    25,    -1,    26,    52,    74,    14,    74,
      53,    24,    66,    25,    -1,    26,    52,    74,    58,    74,
      53,    24,    66,    25,    -1,    26,    52,    74,    15,    74,
      53,    24,    66,    25,    -1,    26,    52,    74,    59,    74,
      59,    74,    53,    24,    66,    25,    -1,    29,    52,    74,
      53,    55,    -1,    47,    48,     4,    52,     3,    53,    55,
      -1,    47,    49,     4,    52,     3,    53,    55,    -1,    47,
      50,     4,    52,     3,    53,    55,    -1,    34,    52,     3,
      53,    55,    -1,    28,    52,     3,    53,    55,    -1,    38,
      52,     3,    59,     3,    53,    55,    -1,    39,    52,     3,
      59,     3,    53,    55,    -1,    40,    52,     3,    59,     3,
      53,    55,    -1,    41,    52,     3,    59,     3,    53,    55,
      -1,    42,    52,     3,    53,    55,    -1,    43,    52,     3,
      59,     3,    53,    55,    -1,    44,    52,     3,    59,     3,
      59,     3,    53,    55,    -1,    45,    52,     3,    59,     3,
      59,     3,    53,    55,    -1,    68,    69,    -1,    21,    -1,
      22,    -1,    23,    -1,    69,    59,     4,    -1,     4,    -1,
      71,    -1,    71,    73,    -1,    -1,    71,    72,    -1,    35,
       3,    54,    74,    55,    -1,    36,    54,    74,    55,    -1,
       3,    -1,     4,    -1,    74,     7,    74,    -1,    74,     8,
      74,    -1,    74,     9,    74,    -1,    74,    60,    74,    -1,
      74,    57,    74,    -1,    74,    58,    74,    -1,    74,    14,
      74,    -1,    74,    15,    74,    -1,    74,    16,    74,    -1,
      74,    17,    74,    -1,    74,    12,    -1,    74,    13,    -1,
      18,    74,    -1,    52,    74,    53,    -1,    74,    10,    74,
      -1,    74,    11,    74,    -1,    30,    74,    -1,    31,    74,
      -1,    32,    74,    -1,    33,    74,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    55,    55,    58,    59,    62,    64,    66,    68,    74,
      83,    92,   104,   111,   115,   119,   123,   127,   136,   140,
     144,   149,   154,   159,   163,   171,   180,   188,   196,   210,
     225,   237,   244,   258,   276,   277,   280,   282,   284,   286,
     292,   301,   310,   322,   329,   333,   337,   341,   345,   354,
     358,   363,   368,   373,   381,   390,   398,   406,   420,   435,
     447,   454,   468,   486,   490,   491,   492,   497,   505,   514,
     515,   518,   519,   522,   528,   534,   536,   538,   540,   542,
     544,   546,   548,   550,   552,   554,   556,   558,   560,   562,
     564,   566,   571,   576,   578,   580,   582
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "VAR", "STARTPROGRAM", "IF",
  "PLUS", "MINUS", "MUL", "DIV", "MOD", "INCREMENT", "DECREMENT", "LTE",
  "GTE", "EQL", "NEQL", "NOT", "ELSE", "ELIF", "INT", "FLOAT", "CHAR",
  "CBS", "CBE", "LOOP", "WHILE", "EVENODD", "SHOW", "SIN", "COS", "TAN",
  "LOG", "FACTORIAL", "CASE", "DEFAULT", "SWITCH", "MIN", "MAX", "GCD",
  "LCM", "ISPRIME", "POW", "POWMOD", "MULMOD", "FUNCTION", "ARRAY",
  "ARRINT", "ARRFLOAT", "ARRCHAR", "CLASS", "'('", "')'", "':'", "';'",
  "'='", "'<'", "'>'", "','", "'^'", "$accept", "program", "line",
  "statement", "function_line", "function_statement", "declaration",
  "datatype", "ID", "casenumber", "caserule", "casenum", "defaultnum",
  "expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,    40,    41,    58,    59,    61,    60,    62,    44,
      94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    65,    65,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    67,    68,    68,    68,    69,    69,    70,
      70,    71,    71,    72,    73,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     0,     2,     1,     2,     2,     4,     7,
      11,    18,     7,     9,     9,     9,     9,    11,     5,     8,
       7,     7,     7,     6,     5,     5,     7,     7,     7,     7,
       5,     7,     9,     9,     0,     2,     1,     2,     2,     4,
       7,    11,    18,     7,     9,     9,     9,     9,    11,     5,
       7,     7,     7,     5,     5,     7,     7,     7,     7,     5,
       7,     9,     9,     2,     1,     1,     1,     3,     1,     1,
       2,     0,     2,     5,     4,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       3,     3,     3,     2,     2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     3,     0,    75,
      76,     0,     0,    64,    65,    66,     2,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     4,
       0,     0,     0,     0,     0,    76,    89,     0,     0,     0,
      93,    94,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       6,    68,    63,     0,     0,     0,     0,     0,    87,    88,
       0,     0,     0,     0,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,    90,     0,
      77,    78,    79,    91,    92,    83,    84,    85,    86,    81,
      82,    80,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,     0,    83,    84,
      81,    82,     0,    25,    18,    24,    71,     0,     0,     0,
       0,    30,     0,     0,     0,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    37,    38,     0,     0,     0,    23,
       9,     0,     0,     0,     0,     0,    12,     0,     0,    72,
      70,    26,    27,    28,    29,    31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,    21,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,     0,    14,    16,    13,    15,
       0,     0,     0,    32,    33,     0,    83,    84,    81,    82,
       0,    54,    49,    53,    71,     0,     0,     0,     0,    59,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
      17,    73,    40,     0,     0,     0,     0,     0,    43,    55,
      56,    57,    58,    60,     0,     0,    50,    51,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,    47,    44,    46,     0,    61,    62,     0,
       0,     0,     0,     0,    41,     0,    48,     0,     0,     0,
       0,    11,     0,     0,     0,     0,    42
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    39,   141,   183,    40,    41,    72,   196,
     197,   239,   240,    42
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -315
static const yytype_int16 yypact[] =
{
      -3,   -45,    22,   -30,  -315,   -28,     0,  -315,   872,  -315,
     -29,   -24,    26,  -315,  -315,  -315,  -315,   -19,   -18,   -16,
      26,    26,    26,    26,   -14,   -13,   -11,   -10,    -7,    -5,
      -4,     2,     3,     8,    36,   -36,    49,    26,  -315,  -315,
      11,    63,    94,    26,    26,  -315,   831,    26,    69,    26,
     831,   831,   831,   831,    74,    26,    76,    77,    78,    80,
      81,    82,    83,    84,    37,    86,    87,    88,    64,   110,
    -315,  -315,    34,    26,    26,    26,    26,    26,  -315,  -315,
      26,    26,    26,    26,  -315,    26,    26,    26,   127,   203,
     222,    42,   234,    43,   302,    38,    39,    40,    89,    92,
      91,   103,   105,  -315,    95,   101,   113,   922,  -315,   142,
     971,   971,   144,   144,   831,   831,   831,   831,   831,   831,
     831,   831,  -315,   145,    26,    26,    26,    26,    26,   111,
     116,   117,   149,   171,   172,   173,   175,   124,   177,   178,
     183,   972,   185,   186,   187,   166,  -315,   922,   313,   328,
     396,   407,   418,  -315,  -315,  -315,  -315,   139,   143,   147,
     152,  -315,   153,   148,   162,   167,   146,   156,   170,   188,
     201,   205,   207,   210,   212,   213,   215,   216,   217,   225,
     -33,   200,  -315,  -315,   228,   429,   202,   231,   232,   233,
     261,   265,   266,   271,   272,    26,   273,   -31,   242,   245,
     246,   247,   249,   304,   305,    26,    26,    26,   329,    26,
     330,    26,   343,   344,   345,   346,   347,   353,   354,   355,
     301,   327,   357,  -315,  -315,  -315,   308,   309,   310,  -315,
      -1,   922,   922,   922,   922,   483,  -315,   364,   314,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,   316,   319,   494,   505,
     516,   321,   570,   322,   581,   317,   318,   323,   324,   334,
     331,   332,   333,   337,   341,   342,  1017,  -315,  -315,  -315,
     356,   348,   370,   372,   373,   374,   377,   393,    26,   395,
     397,  -315,   424,    26,    26,    26,    26,    26,   400,   402,
     403,   427,   456,   458,   459,   460,   411,   465,   466,   467,
     468,   469,   470,  -315,   922,    26,  -315,  -315,  -315,  -315,
     922,    26,   592,  -315,  -315,  1062,   603,   657,   668,   679,
     690,  -315,  -315,  -315,  -315,   421,   426,   428,   430,  -315,
     432,   423,   475,   435,   482,   484,   455,   744,   513,   755,
    -315,   514,   518,   520,   521,   522,    26,   523,   492,   495,
     498,   500,   501,   554,   556,   506,   509,   511,  -315,   536,
    -315,  -315,     1,  1062,  1062,  1062,  1062,   766,  -315,  -315,
    -315,  -315,  -315,  -315,   515,   517,  -315,  -315,  -315,   922,
     543,   519,   544,   547,   596,   597,   600,   571,   574,   606,
    1062,    26,  -315,  -315,  -315,  -315,  1062,  -315,  -315,   613,
     608,   777,   610,   601,  -315,   612,  -315,   922,  1062,   615,
     617,  -315,   618,   619,  1062,   620,  -315
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -315,  -315,  -315,  -101,   425,  -314,  -138,  -315,  -315,   320,
    -315,  -315,  -315,   -12
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      46,   341,     1,   184,   237,   238,   145,     3,    50,    51,
      52,    53,    65,    66,    67,   220,   221,   222,   270,   271,
     380,   381,     4,     5,     7,    69,     6,    43,    44,     9,
      45,    88,    89,    47,    48,    90,    49,    92,    54,    55,
      64,    56,    57,    94,    12,    58,   190,    59,    60,   382,
     383,   384,   385,    68,    61,    62,    20,    21,    22,    23,
      63,   110,   111,   112,   113,   114,    70,    71,   115,   116,
     117,   118,    91,   119,   120,   121,   400,    93,    37,    95,
      96,    97,   402,    98,    99,   100,   101,   102,   107,   103,
     104,   105,   106,   109,   410,   129,   131,   133,   134,   135,
     415,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,   148,   149,   150,   151,   152,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,   184,   185,
     272,   273,   274,   275,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,   137,   146,   142,   136,    84,
     138,    85,    86,   143,    87,    77,    78,    79,    80,    81,
      82,    83,   139,   108,   140,   144,   153,    85,    86,   147,
      87,   154,   155,   156,   157,   158,   159,   184,   160,   161,
     162,   163,   122,   235,    85,    86,   164,    87,   186,   187,
     188,   189,   198,   248,   249,   250,   199,   252,   206,   254,
     200,    85,    86,   336,    87,   201,   202,   203,   207,   338,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,   204,   208,   205,   223,   184,   184,   184,   184,    73,
      74,    75,    76,    77,    78,    79,   124,   125,    82,    83,
     209,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,   184,   210,   185,   226,   123,   211,   184,   212,
      85,    86,   213,    87,   214,   215,   312,   216,   217,   218,
     184,   316,   317,   318,   319,   320,   184,   219,   389,   126,
     127,   128,    87,   224,   227,   228,   230,   130,   229,   231,
     232,    85,    86,   337,    87,   233,   234,   241,   236,   339,
     242,   243,   244,   185,   245,   263,   409,   246,   247,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,   264,   251,   253,   367,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,   255,   256,   257,   258,
     259,   185,   185,   185,   185,   132,   260,   261,   262,    85,
      86,   265,    87,   267,   268,   269,   191,   277,   278,   279,
      85,    86,   280,    87,   288,   290,   292,   293,   185,   401,
     304,   192,   294,   295,   185,    85,    86,   296,    87,   300,
     297,   298,   299,   301,   302,   306,   185,   307,   308,   309,
     305,   310,   185,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,   311,   315,   193,
     313,   324,   314,    85,    86,   321,    87,   322,   323,   325,
     194,   326,   327,   328,    85,    86,   329,    87,   330,   331,
     332,   333,   334,   335,   348,    85,    86,   195,    87,   349,
     358,   350,   353,   351,   225,   352,    85,    86,   355,    87,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    73,    74,    75,    76,    77,    78,    79,
     283,   284,    82,    83,   354,   356,   276,   357,   360,   362,
      85,    86,   363,    87,   364,   365,   366,   369,   368,   281,
     370,    85,    86,   371,    87,   372,   373,   374,   282,   375,
     379,   376,    85,    86,   377,    87,   378,   390,   387,   392,
     388,   391,   393,   285,   286,   287,    87,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,   394,   395,   289,   396,   407,   397,    85,    86,   398,
      87,   399,   403,   404,   291,   406,   408,   413,    85,    86,
     411,    87,   412,   414,   347,   416,     0,   340,   266,    85,
      86,     0,    87,     0,     0,     0,   342,     0,     0,     0,
      85,    86,     0,    87,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,     0,     0,
     343,     0,     0,     0,    85,    86,     0,    87,     0,     0,
       0,   344,     0,     0,     0,    85,    86,     0,    87,     0,
       0,     0,   345,     0,     0,     0,    85,    86,     0,    87,
       0,     0,     0,     0,     0,     0,     0,    85,    86,   346,
      87,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,     0,     0,   359,     0,     0,
       0,    85,    86,     0,    87,     0,     0,     0,     0,     0,
     361,     0,    85,    86,     0,    87,     0,     0,     0,   386,
       0,     0,     0,    85,    86,     0,    87,     0,     0,     0,
     405,     0,     0,     0,    85,    86,     0,    87,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,     0,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,    86,
      12,    87,     0,    13,    14,    15,     0,    16,    17,     0,
      18,    19,    20,    21,    22,    23,    24,     0,     0,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
       0,     0,     0,    36,    37,     9,    10,    38,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,     0,    13,    14,    15,     0,     0,    17,     0,
      18,    19,    20,    21,    22,    23,    24,     0,     0,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
       0,     0,     0,    36,    37,     9,   165,    38,   166,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,     0,
      12,     0,     0,    13,    14,    15,     0,     0,   167,     0,
     168,   169,    20,    21,    22,    23,   170,     0,     0,   171,
     172,   173,   174,   175,   176,   177,   178,   179,     0,   180,
       9,   165,     0,   166,    37,   181,     0,   182,    85,    86,
       0,    87,     0,     0,     0,    12,     0,     0,    13,    14,
      15,     0,   303,   167,     0,   168,   169,    20,    21,    22,
      23,   170,     0,     0,   171,   172,   173,   174,   175,   176,
     177,   178,   179,     0,   180,     9,   165,     0,   166,    37,
       0,     0,   182,     0,     0,     0,     0,     0,     0,     0,
      12,     0,     0,    13,    14,    15,     0,     0,   167,     0,
     168,   169,    20,    21,    22,    23,   170,     0,     0,   171,
     172,   173,   174,   175,   176,   177,   178,   179,     0,   180,
       0,     0,     0,     0,    37,     0,     0,   182
};

static const yytype_int16 yycheck[] =
{
      12,   315,     5,   141,    35,    36,   107,    52,    20,    21,
      22,    23,    48,    49,    50,    48,    49,    50,    19,    20,
      19,    20,     0,    53,    24,    37,    54,    56,    52,     3,
       4,    43,    44,    52,    52,    47,    52,    49,    52,    52,
       4,    52,    52,    55,    18,    52,   147,    52,    52,   363,
     364,   365,   366,     4,    52,    52,    30,    31,    32,    33,
      52,    73,    74,    75,    76,    77,    55,     4,    80,    81,
      82,    83,     3,    85,    86,    87,   390,     3,    52,     3,
       3,     3,   396,     3,     3,     3,     3,     3,    24,    52,
       4,     4,     4,    59,   408,    53,    53,    59,    59,    59,
     414,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,   124,   125,   126,   127,   128,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,   266,   141,
     231,   232,   233,   234,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    53,     4,    52,    59,    55,
      59,    57,    58,    52,    60,    11,    12,    13,    14,    15,
      16,    17,    59,    53,    59,    52,    55,    57,    58,    24,
      60,    55,    55,    24,     3,     3,     3,   315,     3,    55,
       3,     3,    55,   195,    57,    58,     3,    60,     3,     3,
       3,    25,    53,   205,   206,   207,    53,   209,    52,   211,
      53,    57,    58,   304,    60,    53,    53,    59,    52,   310,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    59,    52,    56,    24,   363,   364,   365,   366,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      52,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,   390,    52,   266,    53,    53,    52,   396,    52,
      57,    58,    52,    60,    52,    52,   278,    52,    52,    52,
     408,   283,   284,   285,   286,   287,   414,    52,   379,    57,
      58,    59,    60,    55,    53,    53,    25,    53,    55,    24,
      24,    57,    58,   305,    60,    24,    24,    55,    25,   311,
      55,    55,    55,   315,    55,     4,   407,     3,     3,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,     4,     3,     3,   346,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,     3,     3,     3,     3,
       3,   363,   364,   365,   366,    53,     3,     3,     3,    57,
      58,     4,    60,    55,    55,    55,    53,     3,    54,    53,
      57,    58,    53,    60,    53,    53,    59,    59,   390,   391,
      24,    53,    59,    59,   396,    57,    58,    53,    60,    52,
      59,    59,    59,    52,    52,    25,   408,    25,    25,    25,
      52,    24,   414,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    54,    24,    53,
      55,    24,    55,    57,    58,    55,    60,    55,    55,     3,
      53,     3,     3,     3,    57,    58,    55,    60,     3,     3,
       3,     3,     3,     3,    53,    57,    58,    59,    60,    53,
      25,    53,    59,    53,    55,    53,    57,    58,    53,    60,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    59,    53,    53,    53,    25,    25,
      57,    58,    24,    60,    24,    24,    24,    55,    25,    55,
      55,    57,    58,    55,    60,    55,    55,     3,    53,     3,
      24,    55,    57,    58,    55,    60,    55,    24,    53,    25,
      53,    52,    25,    57,    58,    59,    60,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    25,    25,    53,    24,    24,    55,    57,    58,    55,
      60,    25,    19,    25,    53,    25,    24,    19,    57,    58,
      25,    60,    25,    24,   324,    25,    -1,    55,   223,    57,
      58,    -1,    60,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      57,    58,    -1,    60,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    -1,
      53,    -1,    -1,    -1,    57,    58,    -1,    60,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    57,    58,    -1,    60,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    57,    58,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    53,    -1,    -1,
      -1,    57,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    57,    58,    -1,    60,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    57,    58,    -1,    60,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    57,    58,    -1,    60,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      18,    60,    -1,    21,    22,    23,    -1,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    -1,    -1,    51,    52,     3,     4,    55,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    21,    22,    23,    -1,    -1,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    -1,    -1,    51,    52,     3,     4,    55,     6,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      18,    -1,    -1,    21,    22,    23,    -1,    -1,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    47,
       3,     4,    -1,     6,    52,    53,    -1,    55,    57,    58,
      -1,    60,    -1,    -1,    -1,    18,    -1,    -1,    21,    22,
      23,    -1,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,    34,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    47,     3,     4,    -1,     6,    52,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    21,    22,    23,    -1,    -1,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    47,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    62,    52,     0,    53,    54,    24,    63,     3,
       4,     6,    18,    21,    22,    23,    25,    26,    28,    29,
      30,    31,    32,    33,    34,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    51,    52,    55,    64,
      67,    68,    74,    56,    52,     4,    74,    52,    52,    52,
      74,    74,    74,    74,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,     4,    48,    49,    50,     4,    74,
      55,     4,    69,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    55,    57,    58,    60,    74,    74,
      74,     3,    74,     3,    74,     3,     3,     3,     3,     3,
       3,     3,     3,    52,     4,     4,     4,    24,    53,    59,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    55,    53,    14,    15,    57,    58,    59,    53,
      53,    53,    53,    59,    59,    59,    59,    53,    59,    59,
      59,    65,    52,    52,    52,    64,     4,    24,    74,    74,
      74,    74,    74,    55,    55,    55,    24,     3,     3,     3,
       3,    55,     3,     3,     3,     4,     6,    26,    28,    29,
      34,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      47,    53,    55,    66,    67,    74,     3,     3,     3,    25,
      64,    53,    53,    53,    53,    59,    70,    71,    53,    53,
      53,    53,    53,    59,    59,    56,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      48,    49,    50,    24,    55,    55,    53,    53,    53,    55,
      25,    24,    24,    24,    24,    74,    25,    35,    36,    72,
      73,    55,    55,    55,    55,    55,     3,     3,    74,    74,
      74,     3,    74,     3,    74,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     4,     4,    65,    55,    55,    55,
      19,    20,    64,    64,    64,    64,    53,     3,    54,    53,
      53,    55,    53,    14,    15,    57,    58,    59,    53,    53,
      53,    53,    59,    59,    59,    59,    53,    59,    59,    59,
      52,    52,    52,    25,    24,    52,    25,    25,    25,    25,
      24,    54,    74,    55,    55,    24,    74,    74,    74,    74,
      74,    55,    55,    55,    24,     3,     3,     3,     3,    55,
       3,     3,     3,     3,     3,     3,    64,    74,    64,    74,
      55,    66,    53,    53,    53,    53,    59,    70,    53,    53,
      53,    53,    53,    59,    59,    53,    53,    53,    25,    53,
      25,    55,    25,    24,    24,    24,    24,    74,    25,    55,
      55,    55,    55,    55,     3,     3,    55,    55,    55,    24,
      19,    20,    66,    66,    66,    66,    53,    53,    53,    64,
      24,    52,    25,    25,    25,    25,    24,    55,    55,    25,
      66,    74,    66,    19,    25,    53,    25,    24,    24,    64,
      66,    25,    25,    19,    24,    66,    25
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 55 "main.y"
    {printf("\nSuccesful Compilation\n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 64 "main.y"
    {  ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 66 "main.y"
    {(yyval.val) = (yyvsp[(1) - (2)].val);;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 68 "main.y"
    { 
		printf("\nValue of the variable: %d\n",(yyvsp[(3) - (4)].val));
		setVal((yyvsp[(1) - (4)].text), (yyvsp[(3) - (4)].val)); //data[$1]=$3;
		(yyval.val) = (yyvsp[(3) - (4)].val);
	;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 74 "main.y"
    {
		if((yyvsp[(3) - (7)].val)) {
			printf("\nvalue of expression in IF: %d\n",(yyvsp[(6) - (7)].val));
		}
		else{
			printf("\ncondition value zero in IF block\n");
		}
	;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 83 "main.y"
    {
		if((yyvsp[(3) - (11)].val)){
			printf("value of expression in IF: %d\n",(yyvsp[(6) - (11)].val));
		}
		else{
			printf("value of expression in ELSE: %d\n",(yyvsp[(10) - (11)].val));
		}
	;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 92 "main.y"
    {
		if((yyvsp[(3) - (18)].val)) {
			printf("\nValue of expression in IF: %d\n", (yyvsp[(6) - (18)].val));
		}
		else if((yyvsp[(10) - (18)].val)) {
			printf("\nValue of expression in ELIF: %d\n", (yyvsp[(13) - (18)].val));
		}
		else{
			printf("\nValue of expression in ELSE: %d\n", (yyvsp[(17) - (18)].val));
		}
	;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 104 "main.y"
    {
		printf("\nSwitch Case Declared\n");
		if(switch_data[(yyvsp[(3) - (7)].val)]) printf("\nChoosen case number is : %d and the value is: %d\n", (yyvsp[(3) - (7)].val), switch_data[(yyvsp[(3) - (7)].val)]);
		else printf("\nChoosen case number is: Default and the value is: %d\n", (yyvsp[(3) - (7)].val), switch_data[(yyvsp[(3) - (7)].val)]);
		memset(switch_data, 0, sizeof(switch_data));
	;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 111 "main.y"
    {
	    for(int i=(yyvsp[(3) - (9)].val) ; i<(yyvsp[(5) - (9)].val) ; i++) {printf("\nCounter in the loop: %d\n", i);}	
	;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 115 "main.y"
    {
	    for(int i=(yyvsp[(3) - (9)].val) ; i<=(yyvsp[(5) - (9)].val) ; i++) {printf("\nCounter in the loop: %d\n", i);}	
	;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 119 "main.y"
    {
	    for(int i=(yyvsp[(5) - (9)].val) ; i<(yyvsp[(3) - (9)].val) ; i++) {printf("\nCounter in the loop: %d\n", i);}		
	;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 123 "main.y"
    {
	    for(int i=(yyvsp[(5) - (9)].val) ; i<=(yyvsp[(3) - (9)].val) ; i++) {printf("\nCounter in the loop: %d\n", i);}		
	;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 127 "main.y"
    {
	    if((yyvsp[(3) - (11)].val) <= (yyvsp[(5) - (11)].val)) {
	    	for(int i=(yyvsp[(3) - (11)].val) ; i<(yyvsp[(5) - (11)].val) ; i+=(yyvsp[(7) - (11)].val)) {printf("\nCounter in the loop: %d\n", i);}	
	    }
	    else {
	    	for(int i=(yyvsp[(3) - (11)].val) ; i>(yyvsp[(5) - (11)].val) ; i-=(yyvsp[(7) - (11)].val)) {printf("\nCounter in the loop: %d\n", i);}	
	    }
	;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 136 "main.y"
    {
		printf("\nPrint Function: %d\n",(yyvsp[(3) - (5)].val));
	;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 140 "main.y"
    {
		printf("\nFunction Declared\n");
	;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 144 "main.y"
    {
		printf("\nInterger Array Declared\n");
		printf("\nSize of the array is: %d\n", (yyvsp[(5) - (7)].val));
	;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 149 "main.y"
    {
		printf("\nFloating Array Declared\n");
		printf("\nSize of the array is: %d\n", (yyvsp[(5) - (7)].val));
	;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 154 "main.y"
    {
		printf("\nCharacter Array Declared\n");
		printf("\nSize of the array is: %d\n", (yyvsp[(5) - (7)].val));
	;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 159 "main.y"
    {
		printf("\nClass Declared\n");
	;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 163 "main.y"
    {
		int fact = 1;
		for(int i=1; i<=(yyvsp[(3) - (5)].val); i++) {
			fact *= i;
		}
		printf("\nFactorial of %d is: %d\n", (yyvsp[(3) - (5)].val), fact);
	;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 171 "main.y"
    {
		if((yyvsp[(3) - (5)].val) % 2 == 0) {
			printf("Number : %d is Even\n",(yyvsp[(3) - (5)].val));
		}
		else {
			printf("Number is :%d is Odd\n",(yyvsp[(3) - (5)].val));
		}
	;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 180 "main.y"
    {
		int n1 = (yyvsp[(3) - (7)].val);
		int n2 = (yyvsp[(5) - (7)].val);
		printf("\nMin of (%d, %d) is: ", n1, n2);
		if(n1 < n2) printf("%d\n", n1);
		else printf("%d\n", n2);
	;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 188 "main.y"
    {
		int n1 = (yyvsp[(3) - (7)].val);
		int n2 = (yyvsp[(5) - (7)].val);
		printf("\nMax of (%d, %d) is: ", n1, n2);
		if(n1 > n2) printf("%d\n", n1);
		else printf("%d\n", n2);
	;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 196 "main.y"
    {
		int n1 = (yyvsp[(3) - (7)].val);
		int n2 = (yyvsp[(5) - (7)].val);
		printf("\nGCD of (%d, %d) is: ", n1, n2);
		while(n2) {
			n1 %= n2;
			int tm = n1;
			n1 = n2;
			n2 = tm;
		}
		int gcd = n1;
		printf("%d\n", gcd);
	;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 210 "main.y"
    {
		int n1 = (yyvsp[(3) - (7)].val);
		int n2 = (yyvsp[(5) - (7)].val);
		printf("\nLCM of (%d, %d) is: ", n1, n2);
		int up = n1 * n2;
		while(n2) {
			n1 %= n2;
			int tm = n1;
			n1 = n2;
			n2 = tm;
		}
		int lcm = up / n1;
		printf("%d\n", lcm);	
	;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 225 "main.y"
    {
		int n1 = (yyvsp[(3) - (5)].val), fl = 1;
		for(int i=2; i<=n1/2; i++) {
			if(n1 % i == 0) {
				fl = 0;
				break;
			}
		}
		if(fl) printf("\n%d is a Prime number.\n", n1);
		else printf("\n%d is Not a prime number\n", n1);
	;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 237 "main.y"
    {
		int n1 = (yyvsp[(3) - (7)].val);
		int n2 = (yyvsp[(5) - (7)].val);
		int res = pow(n1, n2);
		printf("\n%d Power %d is: %d\n", n1, n2, res);
	;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 244 "main.y"
    {
		int n1 = (yyvsp[(3) - (9)].val);
		int n2 = (yyvsp[(5) - (9)].val);
		int mod = (yyvsp[(7) - (9)].val);
		printf("\n%d Power %d mod %d is: ", n1, n2, mod);
		int res = 1;
		while (n2 > 0) {
			if(n2 & 1) res = res * n1 % mod;
			n1 = n1 * n1 % mod;
			n2 >>= 1;
		}
		printf("%d\n", res);
	;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 258 "main.y"
    {
		int n1 = (yyvsp[(3) - (9)].val);
		int n2 = (yyvsp[(5) - (9)].val);
		int mod = (yyvsp[(7) - (9)].val);
		printf("\n%d Multiplication %d mod %d is: ", n1, n2, mod);
		int x = 0, y = n1 % mod;
		while(n2 > 0) {
		     if(n2 & 1) x = (x + y) % mod;
		     y = 2 * y % mod;
		     n2 >>= 1;
		}
		int res = x % mod;
		printf("%d\n", res);
	;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 282 "main.y"
    { ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 284 "main.y"
    {(yyval.val) = (yyvsp[(1) - (2)].val);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 286 "main.y"
    { 
		printf("\nValue of the variable: %d\n",(yyvsp[(3) - (4)].val));
		setVal((yyvsp[(1) - (4)].text), (yyvsp[(3) - (4)].val)); //data[$1]=$3;
		(yyval.val) = (yyvsp[(3) - (4)].val);
	;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 292 "main.y"
    {
		if((yyvsp[(3) - (7)].val)) {
			printf("\nvalue of expression in IF: %d\n",(yyvsp[(6) - (7)].val));
		}
		else{
			printf("\ncondition value zero in IF block\n");
		}
	;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 301 "main.y"
    {
		if((yyvsp[(3) - (11)].val)){
			printf("value of expression in IF: %d\n",(yyvsp[(6) - (11)].val));
		}
		else{
			printf("value of expression in ELSE: %d\n",(yyvsp[(10) - (11)].val));
		}
	;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 310 "main.y"
    {
		if((yyvsp[(3) - (18)].val)) {
			printf("\nValue of expression in IF: %d\n", (yyvsp[(6) - (18)].val));
		}
		else if((yyvsp[(10) - (18)].val)) {
			printf("\nValue of expression in ELIF: %d\n", (yyvsp[(13) - (18)].val));
		}
		else{
			printf("\nValue of expression in ELSE: %d\n", (yyvsp[(17) - (18)].val));
		}
	;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 322 "main.y"
    {
		printf("\nSwitch Case Declared\n");
		if(switch_data[(yyvsp[(3) - (7)].val)]) printf("\nChoosen case number is : %d and the value is: %d\n", (yyvsp[(3) - (7)].val), switch_data[(yyvsp[(3) - (7)].val)]);
		else printf("\nChoosen case number is: Default and the value is: %d\n", (yyvsp[(3) - (7)].val), switch_data[(yyvsp[(3) - (7)].val)]);
		memset(switch_data, 0, sizeof(switch_data));
	;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 329 "main.y"
    {
	    for(int i=(yyvsp[(3) - (9)].val) ; i<(yyvsp[(5) - (9)].val) ; i++) {printf("\nCounter in the loop: %d\n", i);}	
	;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 333 "main.y"
    {
	    for(int i=(yyvsp[(3) - (9)].val) ; i<=(yyvsp[(5) - (9)].val) ; i++) {printf("\nCounter in the loop: %d\n", i);}
	;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 337 "main.y"
    {
	    for(int i=(yyvsp[(5) - (9)].val) ; i<(yyvsp[(3) - (9)].val) ; i++) {printf("\nCounter in the loop: %d\n", i);}	
	;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 341 "main.y"
    {
	    for(int i=(yyvsp[(5) - (9)].val) ; i<=(yyvsp[(3) - (9)].val) ; i++) {printf("\nCounter in the loop: %d\n", i);}
	;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 345 "main.y"
    {
	    if((yyvsp[(3) - (11)].val) <= (yyvsp[(5) - (11)].val)) {
	    	for(int i=(yyvsp[(3) - (11)].val) ; i<(yyvsp[(5) - (11)].val) ; i+=(yyvsp[(7) - (11)].val)) {printf("\nCounter in the loop: %d\n", i);}	
	    }
	    else {
	    	for(int i=(yyvsp[(3) - (11)].val) ; i>(yyvsp[(5) - (11)].val) ; i-=(yyvsp[(7) - (11)].val)) {printf("\nCounter in the loop: %d\n", i);}	
	    }
	;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 354 "main.y"
    {
		printf("\nPrint Function: %d\n",(yyvsp[(3) - (5)].val));
	;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 358 "main.y"
    {
		printf("\nInterger Array Declared\n");
		printf("\nSize of the array is: %d\n", (yyvsp[(5) - (7)].val));
	;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 363 "main.y"
    {
		printf("\nFloating Array Declared\n");
		printf("\nSize of the array is: %d\n", (yyvsp[(5) - (7)].val));
	;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 368 "main.y"
    {
		printf("\nCharacter Array Declared\n");
		printf("\nSize of the array is: %d\n", (yyvsp[(5) - (7)].val));
	;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 373 "main.y"
    {
		int fact = 1;
		for(int i=1; i<=(yyvsp[(3) - (5)].val); i++) {
			fact *= i;
		}
		printf("\nFactorial of %d is: %d\n", (yyvsp[(3) - (5)].val), fact);
	;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 381 "main.y"
    {
		if((yyvsp[(3) - (5)].val) % 2 == 0) {
			printf("Number : %d is Even\n",(yyvsp[(3) - (5)].val));
		}
		else {
			printf("Number is :%d is Odd\n",(yyvsp[(3) - (5)].val));
		}
	;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 390 "main.y"
    {
		int n1 = (yyvsp[(3) - (7)].val);
		int n2 = (yyvsp[(5) - (7)].val);
		printf("\nMin of (%d, %d) is: ", n1, n2);
		if(n1 < n2) printf("%d\n", n1);
		else printf("%d\n", n2);
	;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 398 "main.y"
    {
		int n1 = (yyvsp[(3) - (7)].val);
		int n2 = (yyvsp[(5) - (7)].val);
		printf("\nMax of (%d, %d) is: ", n1, n2);
		if(n1 > n2) printf("%d\n", n1);
		else printf("%d\n", n2);
	;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 406 "main.y"
    {
		int n1 = (yyvsp[(3) - (7)].val);
		int n2 = (yyvsp[(5) - (7)].val);
		printf("\nGCD of (%d, %d) is: ", n1, n2);
		while(n2) {
			n1 %= n2;
			int tm = n1;
			n1 = n2;
			n2 = tm;
		}
		int gcd = n1;
		printf("%d\n", gcd);
	;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 420 "main.y"
    {
		int n1 = (yyvsp[(3) - (7)].val);
		int n2 = (yyvsp[(5) - (7)].val);
		printf("\nLCM of (%d, %d) is: ", n1, n2);
		int up = n1 * n2;
		while(n2) {
			n1 %= n2;
			int tm = n1;
			n1 = n2;
			n2 = tm;
		}
		int lcm = up / n1;
		printf("%d\n", lcm);	
	;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 435 "main.y"
    {
		int n1 = (yyvsp[(3) - (5)].val), fl = 1;
		for(int i=2; i<=n1/2; i++) {
			if(n1 % i == 0) {
				fl = 0;
				break;
			}
		}
		if(fl) printf("\n%d is a Prime number.\n", n1);
		else printf("\n%d is Not a prime number\n", n1);
	;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 447 "main.y"
    {
		int n1 = (yyvsp[(3) - (7)].val);
		int n2 = (yyvsp[(5) - (7)].val);
		int res = pow(n1, n2);
		printf("\n%d Power %d is: %d\n", n1, n2, res);
	;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 454 "main.y"
    {
		int n1 = (yyvsp[(3) - (9)].val);
		int n2 = (yyvsp[(5) - (9)].val);
		int mod = (yyvsp[(7) - (9)].val);
		printf("\n%d Power %d mod %d is: ", n1, n2, mod);
		int res = 1;
		while (n2 > 0) {
			if(n2 & 1) res = res * n1 % mod;
			n1 = n1 * n1 % mod;
			n2 >>= 1;
		}
		printf("%d\n", res);
	;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 468 "main.y"
    {
		int n1 = (yyvsp[(3) - (9)].val);
		int n2 = (yyvsp[(5) - (9)].val);
		int mod = (yyvsp[(7) - (9)].val);
		printf("\n%d Multiplication %d mod %d is: ", n1, n2, mod);
		int x = 0, y = n1 % mod;
		while(n2 > 0) {
		     if(n2 & 1) x = (x + y) % mod;
		     y = 2 * y % mod;
		     n2 >>= 1;
		}
		int res = x % mod;
		printf("%d\n", res);
	;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 486 "main.y"
    {printf("\nVariable Declared\n");;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 490 "main.y"
    {printf("\nInterger Declaration\n");;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 491 "main.y"
    {printf("\nFloat Declaration\n");;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 492 "main.y"
    {printf("\nCharacter Declaration\n");;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 497 "main.y"
    {
	int res = addNewVal((yyvsp[(3) - (3)].text));
		if(res == 0){
			printf("\nVariable already declared\n");
			exit(-1);
		}
	;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 505 "main.y"
    {
		int res = addNewVal((yyvsp[(1) - (1)].text));
		if(res == 0){
			printf("\nVariable already declared\n");
			exit(-1);
		}
	;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 522 "main.y"
    {
		printf("\nExpression value is %d of Case %d\n", (yyvsp[(4) - (5)].val), (yyvsp[(2) - (5)].val));
		switch_data[(yyvsp[(2) - (5)].val)] = (yyvsp[(4) - (5)].val);
	;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 528 "main.y"
    {
		printf("\nExpression value is %d of Default case\n", (yyvsp[(3) - (4)].val));
		switch_data[maxn] = (yyvsp[(3) - (4)].val);
	;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 534 "main.y"
    {(yyval.val) = (yyvsp[(1) - (1)].val);;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 536 "main.y"
    {(yyval.val) = getVal((yyvsp[(1) - (1)].text));;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 538 "main.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) + (yyvsp[(3) - (3)].val);;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 540 "main.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) - (yyvsp[(3) - (3)].val);;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 542 "main.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) * (yyvsp[(3) - (3)].val);;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 544 "main.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) ^ (yyvsp[(3) - (3)].val);;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 546 "main.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) < (yyvsp[(3) - (3)].val);;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 548 "main.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) > (yyvsp[(3) - (3)].val);;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 550 "main.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) <= (yyvsp[(3) - (3)].val);;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 552 "main.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) >= (yyvsp[(3) - (3)].val);;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 554 "main.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) == (yyvsp[(3) - (3)].val);;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 556 "main.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) != (yyvsp[(3) - (3)].val);;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 558 "main.y"
    {(yyval.val) = (yyvsp[(1) - (2)].val) + 1;;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 560 "main.y"
    {(yyval.val) = (yyvsp[(1) - (2)].val) - 1;;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 562 "main.y"
    {(yyval.val) = !(yyvsp[(2) - (2)].val);;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 564 "main.y"
    {(yyval.val) = (yyvsp[(2) - (3)].val);;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 566 "main.y"
    {
		if((yyvsp[(3) - (3)].val)) {(yyval.val) = (yyvsp[(1) - (3)].val) / (yyvsp[(3) - (3)].val);}
		else {(yyval.val) = 0; printf("\nDivision by Zero\n");} 	
	;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 571 "main.y"
    { 
		if((yyvsp[(3) - (3)].val)) {(yyval.val) = (yyvsp[(1) - (3)].val) % (yyvsp[(3) - (3)].val);}
		else {(yyval.val) = 0; printf("\nMod by Zero\n");} 	
	;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 576 "main.y"
    {printf("\nValue of sin(%d) is : %lf\n", (yyvsp[(2) - (2)].val), sin((yyvsp[(2) - (2)].val) * 3.1416 / 180)); (yyval.val) = sin((yyvsp[(2) - (2)].val) * 3.1416/180);;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 578 "main.y"
    {printf("\nValue of cos(%d) is : %lf\n", (yyvsp[(2) - (2)].val), cos((yyvsp[(2) - (2)].val) * 3.1416 / 180)); (yyval.val) = cos((yyvsp[(2) - (2)].val) * 3.1416 / 180);;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 580 "main.y"
    {printf("\nValue of tan(%d) is : %lf\n", (yyvsp[(2) - (2)].val), tan((yyvsp[(2) - (2)].val) * 3.1416 / 180)); (yyval.val) = tan((yyvsp[(2) - (2)].val) * 3.1416 / 180);;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 582 "main.y"
    {printf("\nValue of log(%d) is : %lf\n", (yyvsp[(2) - (2)].val), log((yyvsp[(2) - (2)].val))); (yyval.val) = log((yyvsp[(2) - (2)].val));;}
    break;



/* Line 1455 of yacc.c  */
#line 2772 "main.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 586 "main.y"


/* Additional C Codes */
int yyerror(char *s){
	printf( "%s\n", s);
}

int yywrap()
{
	return 1;
}

int main()
{
	freopen("input.txt", "r", stdin);
	//freopen("output.txt" ,"w", stdout);

	yyparse();

	return 0;
}

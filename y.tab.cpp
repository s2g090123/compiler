/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "hw2.y" /* yacc.c:339  */

    #include<iostream>
    #include<string>
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    using namespace std;
    #define Trace(t) printf(t)
    typedef  struct {									// declare the symbol table type and its member;
		string name;
		int thestate; //0:constant 1:variable
		int array_or_not; //0:not array 1:array
		int thetype; //0:int 1:float 2:char 3:string 4:bool
		int array_count;
			int theint;
			float thefloat;
			string thestring;
			bool thebool;
			int *int_array;
			float *float_array;
			string *string_array;
			bool *bool_array;
    }symtab;
	typedef struct{
		string name;
		int thetype;
	}symargu;
	symargu *argu;
	int totalargu = 0;
    symtab *thetab[256];
    symtab funtab[256];
    int idcount[256]={0};
    int functioncount = 0;
    int tabcount = 0;
	int statecount =0;
    void createtab(int tabcount);
    void dump(int tabcount);
	void argudump();
	void functiondump();
    void insert(int tabcount,char *id,int check,int array_check);
	void insert(int tabcount,char *id,int type,int check,int array_check);
	void insertargu(string id,int type);
    void insertfunction(char *id,int type);
    int returnindex(int tabcount,char *id);
    int returntype(int tabcount,char *id);
	int return_constant_or_variable(int tabcount,char *id);
    int returnfunctiontype(char *id);
    int insertcheck(int tabcount,char *id);
    void insertvalue(int tabcount,char *id,int temp);
    void insertvalue(int tabcount,char *id,float temp);
    void insertvalue(int tabcount,char *id,char *temp);
    void insertvalue(int tabcount,char *id,bool temp);
    void insertarray(int tabcount,char *id,int Type,int size,int array_check,const char *theblank);
    void insertarrayvalue(int tabcount,char *id,int position,int temp);
    void insertarrayvalue(int tabcount,char *id,int position,float temp);
    void insertarrayvalue(int tabcount,char *id,int position,char *temp);
    void insertarrayvalue(int tabcount,char *id,int position,bool temp);
    extern "C" {
	    int yyerror(const char *msg);
	    int yylex();
    }
    //FILE *yyin;

#line 130 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BOOL = 258,
    BREAK = 259,
    CHAR = 260,
    CONTINUE = 261,
    DO = 262,
    ELSE = 263,
    ENUM = 264,
    EXTERN = 265,
    FALSE = 266,
    FLOAT = 267,
    FOR = 268,
    FN = 269,
    IF = 270,
    IN = 271,
    INT = 272,
    LET = 273,
    LOOP = 274,
    MATCH = 275,
    MUT = 276,
    PRINT = 277,
    PRINTLN = 278,
    PUB = 279,
    RETURN = 280,
    SELF = 281,
    STATIC = 282,
    STRUCT = 283,
    STR = 284,
    TRUE = 285,
    USE = 286,
    WHERE = 287,
    WHILE = 288,
    PLUS_PLUS = 289,
    MINUS_MINUS = 290,
    LE = 291,
    GE = 292,
    EQ = 293,
    NE = 294,
    PLUS_EQ = 295,
    MINUS_EQ = 296,
    MUL_EQ = 297,
    DIV_EQ = 298,
    AND = 299,
    OR = 300,
    INTEGER = 301,
    Float = 302,
    NAME = 303,
    STRING = 304,
    UMINUS = 305
  };
#endif
/* Tokens.  */
#define BOOL 258
#define BREAK 259
#define CHAR 260
#define CONTINUE 261
#define DO 262
#define ELSE 263
#define ENUM 264
#define EXTERN 265
#define FALSE 266
#define FLOAT 267
#define FOR 268
#define FN 269
#define IF 270
#define IN 271
#define INT 272
#define LET 273
#define LOOP 274
#define MATCH 275
#define MUT 276
#define PRINT 277
#define PRINTLN 278
#define PUB 279
#define RETURN 280
#define SELF 281
#define STATIC 282
#define STRUCT 283
#define STR 284
#define TRUE 285
#define USE 286
#define WHERE 287
#define WHILE 288
#define PLUS_PLUS 289
#define MINUS_MINUS 290
#define LE 291
#define GE 292
#define EQ 293
#define NE 294
#define PLUS_EQ 295
#define MINUS_EQ 296
#define MUL_EQ 297
#define DIV_EQ 298
#define AND 299
#define OR 300
#define INTEGER 301
#define Float 302
#define NAME 303
#define STRING 304
#define UMINUS 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 65 "hw2.y" /* yacc.c:355  */

	struct{
		int tokentype; //0:int 1:float 2:char 3:string 4:bool
		union{
			int intval;
			float floatval;
			char* stringval;
			bool boolval;
		};
	}Token;

#line 282 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 299 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   528

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  211

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,     2,     2,    56,     2,     2,
      65,    66,    54,    52,    68,    53,     2,    55,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    67,    59,
      51,    62,    50,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    60,     2,    61,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    58
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    98,    98,   100,   101,   103,   104,   106,   107,   109,
     110,   111,   113,   114,   115,   116,   117,   119,   119,   122,
     155,   177,   202,   203,   204,   219,   234,   249,   264,   268,
     291,   315,   339,   362,   367,   373,   391,   409,   427,   445,
     446,   447,   448,   450,   451,   453,   454,   455,   481,   507,
     533,   559,   570,   586,   612,   613,   614,   673,   733,   734,
     735,   736,   737,   738,   740,   789,   831,   873,   922,   964,
    1006,  1048,  1090,  1103,  1104,  1106,  1107,  1109,  1110,  1111,
    1112,  1114,  1116,  1117,  1118,  1119,  1120,  1121,  1122,  1123,
    1124,  1144,  1172,  1201,  1202,  1203,  1204,  1206,  1207,  1208,
    1209
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOL", "BREAK", "CHAR", "CONTINUE",
  "DO", "ELSE", "ENUM", "EXTERN", "FALSE", "FLOAT", "FOR", "FN", "IF",
  "IN", "INT", "LET", "LOOP", "MATCH", "MUT", "PRINT", "PRINTLN", "PUB",
  "RETURN", "SELF", "STATIC", "STRUCT", "STR", "TRUE", "USE", "WHERE",
  "WHILE", "PLUS_PLUS", "MINUS_MINUS", "LE", "GE", "EQ", "NE", "PLUS_EQ",
  "MINUS_EQ", "MUL_EQ", "DIV_EQ", "AND", "OR", "INTEGER", "Float", "NAME",
  "STRING", "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'",
  "UMINUS", "';'", "'{'", "'}'", "'='", "'['", "']'", "'('", "')'", "':'",
  "','", "$accept", "start", "program", "function_dec", "declarations",
  "declaration", "scopecontent", "block", "$@1", "statement", "constant",
  "variable", "array", "return", "expression", "if_statement",
  "bool_expression", "loop_statement", "Type", "string_expression",
  "int_expression", "function_return", "function", "argument", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
      62,    60,    43,    45,    42,    47,    37,    33,   305,    59,
     123,   125,    61,    91,    93,    40,    41,    58,    44
};
# endif

#define YYPACT_NINF -127

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-127)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      38,   -22,   -16,    15,  -127,  -127,    46,    69,    -5,    18,
      64,    46,    60,    81,   -61,  -127,  -127,  -127,  -127,  -127,
    -127,  -127,    17,     5,   115,    59,  -127,  -127,  -127,  -127,
      26,  -127,   115,   115,   115,   -46,   383,  -127,  -127,    40,
     115,    78,    59,    75,   383,  -127,  -127,  -127,  -127,    86,
     -35,    59,  -127,  -127,   218,    99,  -127,  -127,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   -36,   135,   383,    85,    90,   102,   118,    92,   115,
    -127,  -127,   -35,   -35,   418,   123,  -127,    59,   219,   472,
     472,   472,   472,   413,   404,   472,   472,   120,   120,  -127,
    -127,  -127,   117,  -127,   131,    27,    91,   104,   125,   115,
     383,  -127,   -33,   -35,   -35,   -35,   -35,   -35,  -127,   135,
     133,   140,   155,   168,   115,   142,    53,   219,   145,   219,
     150,  -127,  -127,    59,   146,   423,   147,   436,   154,   441,
     158,   454,   383,  -127,   141,   141,  -127,  -127,  -127,   131,
    -127,   115,   115,   287,   115,   311,   383,   115,   183,   -35,
    -127,  -127,  -127,  -127,   133,  -127,  -127,  -127,  -127,  -127,
    -127,  -127,  -127,   383,   153,   241,  -127,   264,  -127,   157,
      57,   335,   165,   459,  -127,    36,   167,   169,    36,    94,
    -127,  -127,   173,   230,   231,  -127,  -127,  -127,  -127,  -127,
     121,   115,    36,    36,  -127,   359,  -127,  -127,  -127,  -127,
    -127
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     4,     0,     7,     0,     0,
       0,     5,     0,     0,     0,     1,     3,     8,     9,    10,
      11,     6,     0,    33,     0,     0,    74,    73,    54,    55,
      56,    81,     0,     0,     0,     0,   100,    46,    45,     0,
       0,     0,     0,    56,    29,    80,    78,    77,    79,     0,
       0,     0,    52,    72,     0,     0,    17,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,     0,    34,     0,
      89,    90,     0,     0,     0,    97,    53,     0,    16,    66,
      65,    64,    67,    70,    71,    68,    69,    47,    48,    49,
      50,    51,     0,    95,    99,     0,     0,     0,     0,     0,
      30,    87,     0,     0,     0,     0,     0,     0,    57,     0,
       0,     0,     0,     0,    44,     0,     0,    14,     0,    15,
       0,    22,    23,     0,    90,     0,    90,     0,    90,     0,
      90,     0,    32,    88,    82,    83,    84,    85,    86,    98,
      94,     0,     0,     0,     0,     0,    43,     0,     0,     0,
      12,    18,    13,    28,     0,    38,    42,    36,    40,    35,
      39,    37,    41,     0,    46,     0,    24,     0,    27,    46,
      56,     0,     0,     0,    93,     0,    53,    53,     0,     0,
      19,    20,     0,    58,    59,    25,    26,    75,    76,    92,
       0,     0,     0,     0,    91,     0,    60,    62,    61,    63,
      21
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -127,  -127,  -127,    80,    50,  -127,  -100,   -67,  -127,   -71,
    -127,  -127,  -127,  -127,   -24,  -127,  -126,  -127,   -39,  -127,
      -4,  -127,  -127,   -70
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,   127,     7,   128,    57,    88,   129,
       8,     9,    10,   130,    36,   131,    37,   132,    49,    38,
      84,   182,    11,    39
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      44,    24,   104,    78,   103,    13,    25,    55,    52,    53,
      54,    80,    85,    81,    56,    15,    73,   102,    82,   113,
     114,   115,   116,   117,    56,   174,    12,   160,    26,   162,
      83,   179,    14,   143,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    27,   120,   149,
       6,   121,     1,   150,    18,   110,     2,    17,   122,   123,
       1,   124,    45,    28,    29,    30,    31,    40,    41,   125,
      32,    46,    42,    80,    33,   134,    47,    19,   111,   112,
      82,    74,    34,    35,   126,   142,    16,     2,    48,    50,
      75,    21,    83,    51,   164,    76,    56,   184,   153,   155,
     156,   135,   137,   139,   141,    26,    71,    77,    72,   144,
     145,   146,   147,   148,   194,   158,   159,   198,   193,   200,
      50,   197,   189,    20,    27,    22,    26,   173,   175,    23,
     177,   207,   209,   173,   181,   206,   208,    80,    50,   136,
      28,    29,    30,    31,    82,    27,    26,    32,    79,    87,
      80,    33,   138,   105,   109,   183,    83,    82,   106,    34,
     199,    28,    29,    43,    31,    27,    26,   133,    32,    83,
     107,    80,    33,   140,    68,    69,    70,   205,    82,    26,
      34,    28,    29,    30,    31,    27,   108,   204,    32,    72,
      83,   119,    33,    56,    26,   115,   116,   117,    27,    72,
      34,    28,    29,    43,    31,   151,   161,   157,    32,   163,
     165,   167,    33,    27,    28,    29,    43,    31,   169,   185,
     152,    32,   171,   188,   191,    33,   195,     0,   196,    28,
      29,   180,    31,   154,   121,   201,    32,     2,   202,   203,
      33,   122,   123,     0,   124,     0,     0,     0,    34,     0,
       0,     0,   125,     0,    58,    59,    60,    61,     0,     0,
       0,     0,    62,    63,     0,     0,     0,   126,    64,    65,
      66,    67,    68,    69,    70,     0,     0,    58,    59,    60,
      61,     0,     0,     0,    86,    62,    63,     0,     0,     0,
       0,    64,    65,    66,    67,    68,    69,    70,     0,     0,
      58,    59,    60,    61,     0,     0,     0,   186,    62,    63,
       0,     0,     0,     0,    64,    65,    66,    67,    68,    69,
      70,     0,     0,    58,    59,    60,    61,     0,     0,     0,
     187,    62,    63,     0,     0,     0,     0,    64,    65,    66,
      67,    68,    69,    70,     0,     0,   176,    58,    59,    60,
      61,     0,     0,     0,     0,    62,    63,     0,     0,     0,
       0,    64,    65,    66,    67,    68,    69,    70,     0,     0,
     178,    58,    59,    60,    61,     0,     0,     0,     0,    62,
      63,     0,     0,     0,     0,    64,    65,    66,    67,    68,
      69,    70,     0,     0,   190,    58,    59,    60,    61,     0,
       0,     0,     0,    62,    63,     0,     0,     0,     0,    64,
      65,    66,    67,    68,    69,    70,     0,     0,   210,    58,
      59,    60,    61,     0,     0,     0,     0,    62,    63,     0,
       0,     0,     0,    64,    65,    66,    67,    68,    69,    70,
      58,    59,    60,    61,     0,     0,     0,     0,    62,    58,
      59,    60,    61,     0,    64,    65,    66,    67,    68,    69,
      70,     0,     0,    64,    65,    66,    67,    68,    69,    70,
     113,   114,   115,   116,   117,   113,   114,   115,   116,   117,
       0,     0,   118,     0,     0,     0,     0,   166,   113,   114,
     115,   116,   117,   113,   114,   115,   116,   117,     0,     0,
     168,     0,     0,     0,     0,   170,   113,   114,   115,   116,
     117,   113,   114,   115,   116,   117,     0,     0,   172,     0,
       0,     0,     0,   192,    66,    67,    68,    69,    70
};

static const yytype_int16 yycheck[] =
{
      24,    62,    72,    42,    71,    21,    67,    53,    32,    33,
      34,    46,    51,    48,    60,     0,    40,    53,    53,    52,
      53,    54,    55,    56,    60,   151,    48,   127,    11,   129,
      65,   157,    48,    66,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    30,    87,   119,
       0,    15,    14,   120,    59,    79,    18,     7,    22,    23,
      14,    25,     3,    46,    47,    48,    49,    62,    63,    33,
      53,    12,    67,    46,    57,    48,    17,    59,    82,    83,
      53,     3,    65,    66,    48,   109,     6,    18,    29,    63,
      12,    11,    65,    67,   133,    17,    60,   164,   122,   123,
     124,   105,   106,   107,   108,    11,    66,    29,    68,   113,
     114,   115,   116,   117,   185,    62,    63,   188,   185,   189,
      63,   188,    65,    59,    30,    65,    11,   151,   152,    48,
     154,   202,   203,   157,   158,   202,   203,    46,    63,    48,
      46,    47,    48,    49,    53,    30,    11,    53,    62,    50,
      46,    57,    48,    68,    62,   159,    65,    53,    68,    65,
      66,    46,    47,    48,    49,    30,    11,    50,    53,    65,
      68,    46,    57,    48,    54,    55,    56,   201,    53,    11,
      65,    46,    47,    48,    49,    30,    68,    66,    53,    68,
      65,    68,    57,    60,    11,    54,    55,    56,    30,    68,
      65,    46,    47,    48,    49,    65,    61,    65,    53,    59,
      64,    64,    57,    30,    46,    47,    48,    49,    64,    66,
      65,    53,    64,    66,    59,    57,    59,    -1,    59,    46,
      47,    48,    49,    65,    15,    62,    53,    18,     8,     8,
      57,    22,    23,    -1,    25,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    33,    -1,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    44,    45,    -1,    -1,    -1,    48,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    36,    37,    38,
      39,    -1,    -1,    -1,    66,    44,    45,    -1,    -1,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      36,    37,    38,    39,    -1,    -1,    -1,    66,    44,    45,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    36,    37,    38,    39,    -1,    -1,    -1,
      66,    44,    45,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    59,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      59,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    44,
      45,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    59,    36,    37,    38,    39,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    59,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    44,    36,
      37,    38,    39,    -1,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      52,    53,    54,    55,    56,    52,    53,    54,    55,    56,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    64,    52,    53,
      54,    55,    56,    52,    53,    54,    55,    56,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    64,    52,    53,    54,    55,
      56,    52,    53,    54,    55,    56,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    64,    52,    53,    54,    55,    56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    14,    18,    70,    71,    72,    73,    74,    79,    80,
      81,    91,    48,    21,    48,     0,    72,    73,    59,    59,
      59,    72,    65,    48,    62,    67,    11,    30,    46,    47,
      48,    49,    53,    57,    65,    66,    83,    85,    88,    92,
      62,    63,    67,    48,    83,     3,    12,    17,    29,    87,
      63,    67,    83,    83,    83,    53,    60,    76,    36,    37,
      38,    39,    44,    45,    50,    51,    52,    53,    54,    55,
      56,    66,    68,    83,     3,    12,    17,    29,    87,    62,
      46,    48,    53,    65,    89,    87,    66,    50,    77,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    53,    76,    92,    68,    68,    68,    68,    62,
      83,    89,    89,    52,    53,    54,    55,    56,    64,    68,
      87,    15,    22,    23,    25,    33,    48,    73,    75,    78,
      82,    84,    86,    50,    48,    89,    48,    89,    48,    89,
      48,    89,    83,    66,    89,    89,    89,    89,    89,    92,
      76,    65,    65,    83,    65,    83,    83,    65,    62,    63,
      75,    61,    75,    59,    87,    64,    64,    64,    64,    64,
      64,    64,    64,    83,    85,    83,    59,    83,    59,    85,
      48,    83,    90,    89,    76,    66,    66,    66,    66,    65,
      59,    59,    64,    76,    78,    59,    59,    76,    78,    66,
      92,    62,     8,     8,    66,    83,    76,    78,    76,    78,
      59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    74,    75,    75,    75,    75,    75,    77,    76,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    79,
      79,    80,    80,    80,    80,    81,    81,    81,    81,    81,
      81,    81,    81,    82,    82,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    84,    84,
      84,    84,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    86,    86,    87,    87,    87,
      87,    88,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    90,    90,    91,    91,    91,    91,    92,    92,    92,
      92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     1,     2,     2,
       2,     2,     2,     2,     1,     1,     0,     0,     4,     4,
       4,     7,     1,     1,     3,     5,     5,     3,     2,     4,
       6,     5,     7,     3,     5,     8,     8,     8,     8,     8,
       8,     8,     8,     2,     1,     1,     1,     3,     3,     3,
       3,     3,     2,     3,     1,     1,     1,     4,     5,     5,
       7,     7,     7,     7,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     1,     1,     5,     5,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     2,     3,     1,
       1,     4,     3,     9,     8,     6,     5,     3,     5,     3,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 98 "hw2.y" /* yacc.c:1646  */
    {if(functioncount==0)yyerror("no function error");cout<<endl<<"global ";dump(tabcount);cout<<endl<<"global ";functiondump();Trace("< program reduce to start >\n");}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 100 "hw2.y" /* yacc.c:1646  */
    {Trace("< declarations function_dec reduce to program >\n");}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 101 "hw2.y" /* yacc.c:1646  */
    {Trace("< function_dec reduce to program >\n");}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 103 "hw2.y" /* yacc.c:1646  */
    {Trace("< function reduce to function_dec >\n");}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 104 "hw2.y" /* yacc.c:1646  */
    {Trace("< function function_dec reduce to function_dec >\n");}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 106 "hw2.y" /* yacc.c:1646  */
    {Trace("< declaration reduce to declarations >\n");}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 107 "hw2.y" /* yacc.c:1646  */
    {Trace("< declaration declarations reduce to declarations >\n");}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 109 "hw2.y" /* yacc.c:1646  */
    {Trace("< constant reduce to declaration >\n");}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 110 "hw2.y" /* yacc.c:1646  */
    {Trace("< variable reduce to declaration >\n");}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 111 "hw2.y" /* yacc.c:1646  */
    {Trace("< array reduce to declaration >\n");}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 113 "hw2.y" /* yacc.c:1646  */
    {Trace("< declarations scopecontent reduce to scopecontent >\n");}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 114 "hw2.y" /* yacc.c:1646  */
    {Trace("< statement scopecontent reduce to scopecontent >\n");}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 115 "hw2.y" /* yacc.c:1646  */
    {Trace("< declarations reduce to scopecontent >\n");}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 116 "hw2.y" /* yacc.c:1646  */
    {Trace("< statement reduce to scopecontent >\n");}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 117 "hw2.y" /* yacc.c:1646  */
    {Trace("< empty reduce to scopecontent >\n");}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 119 "hw2.y" /* yacc.c:1646  */
    {statecount = 0;tabcount++;createtab(tabcount);}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 120 "hw2.y" /* yacc.c:1646  */
    {if(statecount==0)yyerror("no statement error");cout<<endl;dump(tabcount);tabcount--; Trace("<'{' scopecontent '}' reduce to block >\n");}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 123 "hw2.y" /* yacc.c:1646  */
    {
			statecount = 1;
			if(insertcheck(tabcount,(yyvsp[-3].Token).stringval)==1)
			{
				if((yyvsp[-1].Token).tokentype==0&&returntype(tabcount,(yyvsp[-3].Token).stringval)==0)
					insertvalue(tabcount,(yyvsp[-3].Token).stringval,(yyvsp[-1].Token).intval);
				else if((yyvsp[-1].Token).tokentype==1&&returntype(tabcount,(yyvsp[-3].Token).stringval)==0)
				{
					int x = (yyvsp[-1].Token).floatval;
					insertvalue(tabcount,(yyvsp[-3].Token).stringval,x);
				}
				else if((yyvsp[-1].Token).tokentype==4&&returntype(tabcount,(yyvsp[-3].Token).stringval)==0)
				{
					int x = (yyvsp[-1].Token).boolval;
					insertvalue(tabcount,(yyvsp[-3].Token).stringval,x);
				}
				else if((yyvsp[-1].Token).tokentype==0&&returntype(tabcount,(yyvsp[-3].Token).stringval)==1)
				{
					float x = (yyvsp[-1].Token).intval;
					insertvalue(tabcount,(yyvsp[-3].Token).stringval,x);
				}
				else if((yyvsp[-1].Token).tokentype==1&&returntype(tabcount,(yyvsp[-3].Token).stringval)==1)
					insertvalue(tabcount,(yyvsp[-3].Token).stringval,(yyvsp[-1].Token).floatval);
				else if((yyvsp[-1].Token).tokentype==3&&returntype(tabcount,(yyvsp[-3].Token).stringval)==3)
					insertvalue(tabcount,(yyvsp[-3].Token).stringval,(yyvsp[-1].Token).stringval);
				else if((yyvsp[-1].Token).tokentype==4&&returntype(tabcount,(yyvsp[-3].Token).stringval)==4)
					insertvalue(tabcount,(yyvsp[-3].Token).stringval,(yyvsp[-1].Token).boolval);
				else
					yyerror("assign error");
				Trace("< NAME '=' expression reduce to statement >\n");
			}
		}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 156 "hw2.y" /* yacc.c:1646  */
    {
			statecount = 1;
			if(insertcheck(tabcount,(yyvsp[-3].Token).stringval)==1)
			{
				if((yyvsp[-1].Token).tokentype==0)
					insertvalue(tabcount,(yyvsp[-3].Token).stringval,(yyvsp[-1].Token).intval);
				else if((yyvsp[-1].Token).tokentype==1)
					insertvalue(tabcount,(yyvsp[-3].Token).stringval,(yyvsp[-1].Token).floatval);
				else if((yyvsp[-1].Token).tokentype==3)
					insertvalue(tabcount,(yyvsp[-3].Token).stringval,(yyvsp[-1].Token).stringval);
				else if((yyvsp[-1].Token).tokentype==4)
					insertvalue(tabcount,(yyvsp[-3].Token).stringval,(yyvsp[-1].Token).boolval);
				else
					yyerror("assign error");
				Trace("< NAME '=' function_return reduce to statement >\n");
			}
		}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 178 "hw2.y" /* yacc.c:1646  */
    {
			statecount = 1;
			if((yyvsp[-1].Token).tokentype==0&&returntype(tabcount,(yyvsp[-6].Token).stringval)==0)
				insertarrayvalue(tabcount,(yyvsp[-6].Token).stringval,(yyvsp[-4].Token).intval,(yyvsp[-1].Token).intval);
			else if((yyvsp[-1].Token).tokentype==0&&returntype(tabcount,(yyvsp[-6].Token).stringval)==1)
			{
				float temp = (yyvsp[-1].Token).intval;
				insertarrayvalue(tabcount,(yyvsp[-6].Token).stringval,(yyvsp[-4].Token).intval,temp);
			}
			else if((yyvsp[-1].Token).tokentype==1&&returntype(tabcount,(yyvsp[-6].Token).stringval)==0)
			{
				int temp = (yyvsp[-1].Token).floatval;
				insertarrayvalue(tabcount,(yyvsp[-6].Token).stringval,(yyvsp[-4].Token).intval,temp);
			}
			else if((yyvsp[-1].Token).tokentype==1&&returntype(tabcount,(yyvsp[-6].Token).stringval)==1)
				insertarrayvalue(tabcount,(yyvsp[-6].Token).stringval,(yyvsp[-4].Token).intval,(yyvsp[-1].Token).floatval);
			else if((yyvsp[-1].Token).tokentype==3&&returntype(tabcount,(yyvsp[-6].Token).stringval)==3)
				insertarrayvalue(tabcount,(yyvsp[-6].Token).stringval,(yyvsp[-4].Token).intval,(yyvsp[-1].Token).stringval);
			else if((yyvsp[-1].Token).tokentype==4&&returntype(tabcount,(yyvsp[-6].Token).stringval)==4)
				insertarrayvalue(tabcount,(yyvsp[-6].Token).stringval,(yyvsp[-4].Token).intval,(yyvsp[-1].Token).boolval);
			else
					yyerror("assign error");
			Trace("< NAME '[' int_expression ']' '=' expression reduce to statement >\n");
		}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 202 "hw2.y" /* yacc.c:1646  */
    {statecount = 1;Trace("< if_statement reduce to statement >\n");}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 203 "hw2.y" /* yacc.c:1646  */
    {statecount = 1;Trace("< loop_statement reduce to statement >\n");}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 205 "hw2.y" /* yacc.c:1646  */
    {
			statecount = 1;
			if((yyvsp[-1].Token).tokentype==0)
				printf("%d",(yyvsp[-1].Token).intval);
			else if((yyvsp[-1].Token).tokentype==1)
				printf("%f",(yyvsp[-1].Token).floatval);
			else if((yyvsp[-1].Token).tokentype==3)
				printf("%s",(yyvsp[-1].Token).stringval);
			else if((yyvsp[-1].Token).tokentype==4)
				printf("%s",(yyvsp[-1].Token).boolval==true?"TRUE":"FALSE");
			else
					yyerror("print error");
			Trace("< PRINT expression reduce to statement >\n");
		}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 220 "hw2.y" /* yacc.c:1646  */
    {
			statecount = 1;
			if((yyvsp[-2].Token).tokentype==0)
				printf("%d",(yyvsp[-2].Token).intval);
			else if((yyvsp[-2].Token).tokentype==1)
				printf("%f",(yyvsp[-2].Token).floatval);
			else if((yyvsp[-2].Token).tokentype==3)
				printf("%s",(yyvsp[-2].Token).stringval);
			else if((yyvsp[-2].Token).tokentype==4)
				printf("%s",(yyvsp[-2].Token).boolval==true?"TRUE":"FALSE");
			else
				yyerror("print error");
			Trace("< PRINT '(' expression ')' reduce to statement >\n");
		}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 235 "hw2.y" /* yacc.c:1646  */
    {
			statecount = 1;
			if((yyvsp[-2].Token).tokentype==0)
				printf("%d\n",(yyvsp[-2].Token).intval);
			else if((yyvsp[-2].Token).tokentype==1)
				printf("%f\n",(yyvsp[-2].Token).floatval);
			else if((yyvsp[-2].Token).tokentype==3)
				printf("%s\n",(yyvsp[-2].Token).stringval);
			else if((yyvsp[-2].Token).tokentype==4)
				printf("%s\n",(yyvsp[-2].Token).boolval==true?"TRUE":"FALSE");
			else
				yyerror("println error");
			Trace("< PRINT '(' expression ')' reduce to statement >\n");
		}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 250 "hw2.y" /* yacc.c:1646  */
    {
			statecount = 1;
			if((yyvsp[-1].Token).tokentype==0)
				printf("%d\n",(yyvsp[-1].Token).intval);
			else if((yyvsp[-1].Token).tokentype==1)
				printf("%f\n",(yyvsp[-1].Token).floatval);
			else if((yyvsp[-1].Token).tokentype==3)
				printf("%s\n",(yyvsp[-1].Token).stringval);
			else if((yyvsp[-1].Token).tokentype==4)
				printf("%s\n",(yyvsp[-1].Token).boolval==true?"TRUE":"FALSE");
			else
				yyerror("println error");
			Trace("< PRINTLN expression reduce to statement >\n");
		}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 264 "hw2.y" /* yacc.c:1646  */
    {statecount = 1;Trace("< return reduce to statement >\n");}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 269 "hw2.y" /* yacc.c:1646  */
    {
			insert(tabcount,(yyvsp[-2].Token).stringval,0,0);
			if((yyvsp[0].Token).tokentype==0)
			{
				insertvalue(tabcount,(yyvsp[-2].Token).stringval,(yyvsp[0].Token).intval);
			}
			else if((yyvsp[0].Token).tokentype==1)
			{
				insertvalue(tabcount,(yyvsp[-2].Token).stringval,(yyvsp[0].Token).floatval);
			}
			else if((yyvsp[0].Token).tokentype==3)
			{
				insertvalue(tabcount,(yyvsp[-2].Token).stringval,(yyvsp[0].Token).stringval);
			}
			else if((yyvsp[0].Token).tokentype==4)
			{
				insertvalue(tabcount,(yyvsp[-2].Token).stringval,(yyvsp[0].Token).boolval);
			}
			else
				yyerror("assign error");
			Trace("< LET NAME '=' expression reduece to constant >\n");
		}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 292 "hw2.y" /* yacc.c:1646  */
    {
			insert(tabcount,(yyvsp[-4].Token).stringval,(yyvsp[-2].Token).tokentype,0,0);
			if((yyvsp[-2].Token).tokentype==0)
			{
				insertvalue(tabcount,(yyvsp[-4].Token).stringval,(yyvsp[0].Token).intval);
			}
			else if((yyvsp[-2].Token).tokentype==1)
			{
				insertvalue(tabcount,(yyvsp[-4].Token).stringval,(yyvsp[0].Token).floatval);
			}
			else if((yyvsp[-2].Token).tokentype==3)
			{
				insertvalue(tabcount,(yyvsp[-4].Token).stringval,(yyvsp[0].Token).stringval);
			}
			else if((yyvsp[-2].Token).tokentype==4)
			{
				insertvalue(tabcount,(yyvsp[-4].Token).stringval,(yyvsp[0].Token).boolval);
			}
			else
				yyerror("assign error");
			Trace("< LET NAME ':' Type '=' expression reduce to constant >\n");
		}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 316 "hw2.y" /* yacc.c:1646  */
    {
			insert(tabcount,(yyvsp[-2].Token).stringval,1,0);
			if((yyvsp[0].Token).tokentype==0)
			{
				insertvalue(tabcount,(yyvsp[-2].Token).stringval,(yyvsp[0].Token).intval);
			}
			else if((yyvsp[0].Token).tokentype==1)
			{
				insertvalue(tabcount,(yyvsp[-2].Token).stringval,(yyvsp[0].Token).floatval);
			}
			else if((yyvsp[0].Token).tokentype==3)
			{
				insertvalue(tabcount,(yyvsp[-2].Token).stringval,(yyvsp[0].Token).stringval);
			}
			else if((yyvsp[0].Token).tokentype==4)
			{
				insertvalue(tabcount,(yyvsp[-2].Token).stringval,(yyvsp[0].Token).boolval);
			}
			else
				yyerror("assign error");
			Trace("< LET MUT NAME '=' expression reduce to variable >\n");

		}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 340 "hw2.y" /* yacc.c:1646  */
    {
			insert(tabcount,(yyvsp[-4].Token).stringval,(yyvsp[-2].Token).tokentype,1,0);
			if((yyvsp[-2].Token).tokentype==0)
			{
				insertvalue(tabcount,(yyvsp[-4].Token).stringval,(yyvsp[0].Token).intval);
			}
			else if((yyvsp[-2].Token).tokentype==1)
			{
				insertvalue(tabcount,(yyvsp[-4].Token).stringval,(yyvsp[0].Token).floatval);
			}
			else if((yyvsp[-2].Token).tokentype==3)
			{
				insertvalue(tabcount,(yyvsp[-4].Token).stringval,(yyvsp[0].Token).stringval);
			}
			else if((yyvsp[-2].Token).tokentype==4)
			{
				insertvalue(tabcount,(yyvsp[-4].Token).stringval,(yyvsp[0].Token).boolval);
			}
			else
				yyerror("assign error");
			Trace("< LET MUT NAME ':' Type '=' expression reduce to variable >\n");
		}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 363 "hw2.y" /* yacc.c:1646  */
    {
			insert(tabcount,(yyvsp[0].Token).stringval,1,0);
			Trace("< LET MUT NAME reduce to variable >\n");
		}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 368 "hw2.y" /* yacc.c:1646  */
    {
			insert(tabcount,(yyvsp[-2].Token).stringval,(yyvsp[0].Token).tokentype,1,0);
			Trace("< LET MUT NAME ':' Type reduce to variable >\n");
		}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 374 "hw2.y" /* yacc.c:1646  */
    {
		    if(return_constant_or_variable(tabcount,(yyvsp[-1].Token).stringval)==1)
				yyerror("array size is variable error");
			if(returntype(tabcount,(yyvsp[-1].Token).stringval)!=0)
				yyerror("array size is not int error");
			int choose = 0;
			int index = 0;
			for(int i =tabcount;i>=0;i--)
			{
				index = returnindex(i,(yyvsp[-1].Token).stringval);
				choose = i;
				if(index!=-1)
					break;
			}
			insertarray(tabcount,(yyvsp[-5].Token).stringval,0,thetab[choose][index].theint,1,"___");
			Trace("< LET MUT NAME '[' INT ',' NAME ']' reduce to array >\n");
	   }
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 392 "hw2.y" /* yacc.c:1646  */
    {
		    if(return_constant_or_variable(tabcount,(yyvsp[-1].Token).stringval)==1)
				yyerror("array size is variable error");
			if(returntype(tabcount,(yyvsp[-1].Token).stringval)!=0)
				yyerror("array size is not int error");
			int choose = 0;
			int index = 0;
			for(int i =tabcount;i>=0;i--)
			{
				index = returnindex(i,(yyvsp[-1].Token).stringval);
				choose = i;
				if(index!=-1)
					break;
			}
			insertarray(tabcount,(yyvsp[-5].Token).stringval,1,thetab[choose][index].theint,1,"___");
			Trace("< LET MUT NAME '[' FLOAT ',' NAME ']' reduce to array >\n");
	   }
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 410 "hw2.y" /* yacc.c:1646  */
    {
		    if(return_constant_or_variable(tabcount,(yyvsp[-1].Token).stringval)==1)
				yyerror("array size is variable error");
			if(returntype(tabcount,(yyvsp[-1].Token).stringval)!=0)
				yyerror("array size is not int error");
			int choose = 0;
			int index = 0;
			for(int i =tabcount;i>=0;i--)
			{
				index = returnindex(i,(yyvsp[-1].Token).stringval);
				choose = i;
				if(index!=-1)
					break;
			}
			insertarray(tabcount,(yyvsp[-5].Token).stringval,3,thetab[choose][index].theint,1,"___");
			Trace("< LET MUT NAME '[' STRING ',' NAME ']' reduce to array >\n");
	   }
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 428 "hw2.y" /* yacc.c:1646  */
    {
		    if(return_constant_or_variable(tabcount,(yyvsp[-1].Token).stringval)==1)
				yyerror("array size is variable error");
			if(returntype(tabcount,(yyvsp[-1].Token).stringval)!=0)
				yyerror("array size is not int error");
			int choose = 0;
			int index = 0;
			for(int i =tabcount;i>=0;i--)
			{
				index = returnindex(i,(yyvsp[-1].Token).stringval);
				choose = i;
				if(index!=-1)
					break;
			}
			insertarray(tabcount,(yyvsp[-5].Token).stringval,4,thetab[choose][index].theint,1,"___");
			Trace("< LET MUT NAME '[' BOOL ',' NAME ']' reduce to array >\n");
	   }
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 445 "hw2.y" /* yacc.c:1646  */
    {insertarray(tabcount,(yyvsp[-5].Token).stringval,0,(yyvsp[-1].Token).intval,1,"___"); Trace("< LET MUT NAME '[' INT ',' int_expression ']' reduce to array >\n");}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 446 "hw2.y" /* yacc.c:1646  */
    {insertarray(tabcount,(yyvsp[-5].Token).stringval,1,(yyvsp[-1].Token).intval,1,"___"); Trace("< LET MUT NAME '[' FLOAT ',' int_expression ']' reduce to array >\n");}
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 447 "hw2.y" /* yacc.c:1646  */
    {insertarray(tabcount,(yyvsp[-5].Token).stringval,3,(yyvsp[-1].Token).intval,1,"___"); Trace("< LET MUT NAME '[' STR ',' int_expression ']' reduce to array >\n");}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 448 "hw2.y" /* yacc.c:1646  */
    {insertarray(tabcount,(yyvsp[-5].Token).stringval,4,(yyvsp[-1].Token).intval,1,"___"); Trace("< LET MUT NAME '[' BOOL ',' int_expression ']' reduce to array >\n");}
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 450 "hw2.y" /* yacc.c:1646  */
    {Trace("< RETURN expression reduce to return >\n");}
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 451 "hw2.y" /* yacc.c:1646  */
    {Trace("< RETURN reduce to return >\n");}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 453 "hw2.y" /* yacc.c:1646  */
    {(yyval.Token).tokentype=3;strcpy((yyval.Token).stringval,(yyvsp[0].Token).stringval);Trace("< string_expression reduce to expression >\n");}
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 454 "hw2.y" /* yacc.c:1646  */
    {(yyval.Token).tokentype=4;(yyval.Token).boolval = (yyvsp[0].Token).boolval;Trace("< bool_expression reduce to expression >\n");}
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 456 "hw2.y" /* yacc.c:1646  */
    {
			if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==0)
			{
				(yyval.Token).tokentype=0;
				(yyval.Token).intval = (yyvsp[-2].Token).intval+(yyvsp[0].Token).intval;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==0)
			{
				(yyval.Token).tokentype=1;
				(yyval.Token).floatval = (yyvsp[-2].Token).floatval+(yyvsp[0].Token).intval;
			}
			else if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==1)
			{
				(yyval.Token).tokentype=1;
				(yyval.Token).floatval = (yyvsp[-2].Token).intval+(yyvsp[0].Token).floatval;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==1)
			{
				(yyval.Token).tokentype = 1;
				(yyval.Token).floatval = (yyvsp[-2].Token).floatval+(yyvsp[0].Token).floatval;
			}
			else
				yyerror("type error");
			Trace("< expression '+' expression reduce to expression >\n");
		}
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 482 "hw2.y" /* yacc.c:1646  */
    {
			if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==0)
			{
				(yyval.Token).tokentype=0;
				(yyval.Token).intval = (yyvsp[-2].Token).intval-(yyvsp[0].Token).intval;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==0)
			{
				(yyval.Token).tokentype=1;
				(yyval.Token).floatval = (yyvsp[-2].Token).floatval-(yyvsp[0].Token).intval;
			}
			else if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==1)
			{
				(yyval.Token).tokentype=1;
				(yyval.Token).floatval = (yyvsp[-2].Token).intval-(yyvsp[0].Token).floatval;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==1)
			{
				(yyval.Token).tokentype = 1;
				(yyval.Token).floatval = (yyvsp[-2].Token).floatval-(yyvsp[0].Token).floatval;
			}
			else
				yyerror("type error");
			Trace("< expression '-' expression reduce to expression >\n");
		}
#line 2188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 508 "hw2.y" /* yacc.c:1646  */
    {
			if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==0)
			{
				(yyval.Token).tokentype=0;
				(yyval.Token).intval = (yyvsp[-2].Token).intval*(yyvsp[0].Token).intval;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==0)
			{
				(yyval.Token).tokentype=1;
				(yyval.Token).floatval = (yyvsp[-2].Token).floatval*(yyvsp[0].Token).intval;
			}
			else if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==1)
			{
				(yyval.Token).tokentype=1;
				(yyval.Token).floatval = (yyvsp[-2].Token).intval*(yyvsp[0].Token).floatval;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==1)
			{
				(yyval.Token).tokentype = 1;
				(yyval.Token).floatval = (yyvsp[-2].Token).floatval*(yyvsp[0].Token).floatval;
			}
			else
				yyerror("type error");
			Trace("< expression '*' expression reduce to expression >\n");
		}
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 534 "hw2.y" /* yacc.c:1646  */
    {
			if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==0)
			{
				(yyval.Token).tokentype=0;
				(yyval.Token).intval = (yyvsp[-2].Token).intval/(yyvsp[0].Token).intval;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==0)
			{
				(yyval.Token).tokentype=1;
				(yyval.Token).floatval = (yyvsp[-2].Token).floatval/(yyvsp[0].Token).intval;
			}
			else if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==1)
			{
				(yyval.Token).tokentype=1;
				(yyval.Token).floatval = (yyvsp[-2].Token).intval/(yyvsp[0].Token).floatval;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==1)
			{
				(yyval.Token).tokentype = 1;
				(yyval.Token).floatval = (yyvsp[-2].Token).floatval/(yyvsp[0].Token).floatval;
			}
			else
				yyerror("type error");
			Trace("< expression '/' expression reduce to expression >\n");
		}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 560 "hw2.y" /* yacc.c:1646  */
    {
			if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==0)
			{
				(yyval.Token).tokentype = 0;
				(yyval.Token).intval = (yyvsp[-2].Token).intval % (yyvsp[0].Token).intval;
			}
			else
				yyerror("type error");
			Trace("< expression '%%' expression >\n");
		}
#line 2263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 571 "hw2.y" /* yacc.c:1646  */
    {
			if((yyvsp[0].Token).tokentype==0)
			{
				(yyval.Token).tokentype=0;
				(yyval.Token).intval = -(yyvsp[0].Token).intval;
			}
			else if((yyvsp[0].Token).tokentype==1)
			{
				(yyval.Token).tokentype=1;
				(yyval.Token).floatval = -(yyvsp[0].Token).floatval;
			}
			else
				yyerror("type error");
			Trace("< '-' expression reduce to expression >\n");
		}
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 587 "hw2.y" /* yacc.c:1646  */
    {
			if((yyvsp[-1].Token).tokentype==0)
			{
				(yyval.Token).tokentype = 0;
				(yyval.Token).intval = (yyvsp[-1].Token).intval;
			}
			else if((yyvsp[-1].Token).tokentype==1)
			{
				(yyval.Token).tokentype = 1;
				(yyval.Token).floatval = (yyvsp[-1].Token).floatval;
			}
			else if((yyvsp[-1].Token).tokentype==3)
			{
				(yyval.Token).tokentype = 3;
				(yyval.Token).stringval = (yyvsp[-1].Token).stringval;
			}
			else if((yyvsp[-1].Token).tokentype==4)
			{
				(yyval.Token).tokentype = 4;
				(yyval.Token).boolval = (yyvsp[-1].Token).boolval;
			}
			else
				yyerror("type error");
			Trace("< '(' expression ')' reduce to expression >\n");
		}
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 612 "hw2.y" /* yacc.c:1646  */
    {(yyval.Token).intval = (yyvsp[0].Token).intval;(yyval.Token).tokentype=0; Trace("< INTEGER reduce to expression >\n");}
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 613 "hw2.y" /* yacc.c:1646  */
    {(yyval.Token).floatval = (yyvsp[0].Token).floatval;(yyval.Token).tokentype=1; Trace("< FLOAT reduce to expression >\n");}
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 615 "hw2.y" /* yacc.c:1646  */
    {
			(yyval.Token).tokentype = returntype(tabcount,(yyvsp[0].Token).stringval);
			if(returntype(tabcount,(yyvsp[0].Token).stringval)==0)
			{
				int choose = 0;
				int index = 0;
				for(int i =tabcount;i>=0;i--)
				{
					index = returnindex(i,(yyvsp[0].Token).stringval);
					choose = i;
					if(index!=-1)
						break;
				}
				(yyval.Token).intval = thetab[choose][index].theint;
			}
			else if(returntype(tabcount,(yyvsp[0].Token).stringval)==1)
			{
				int choose = 0;
				int index = 0;
				for(int i =tabcount;i>=0;i--)
				{
					index = returnindex(i,(yyvsp[0].Token).stringval);
					choose = i;
					if(index!=-1)
						break;
				}
				(yyval.Token).floatval = thetab[choose][index].thefloat;
			}
			else if(returntype(tabcount,(yyvsp[0].Token).stringval)==3)
			{
				int choose = 0;
				int index = 0;
				for(int i =tabcount;i>=0;i--)
				{
					index = returnindex(i,(yyvsp[0].Token).stringval);
					choose = i;
					if(index!=-1)
						break;
				}
				strcpy((yyval.Token).stringval,thetab[choose][index].thestring.c_str());
			}
			else if(returntype(tabcount,(yyvsp[0].Token).stringval)==4)
			{
				int choose = 0;
				int index = 0;
				for(int i =tabcount;i>=0;i--)
				{
					index = returnindex(i,(yyvsp[0].Token).stringval);
					choose = i;
					if(index!=-1)
						break;
				}
				(yyval.Token).boolval = thetab[choose][index].thebool;
			}
			else
				yyerror("type error");
			Trace("< NAME reduce to expression >\n");
		}
#line 2388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 674 "hw2.y" /* yacc.c:1646  */
    {
			(yyval.Token).tokentype = returntype(tabcount,(yyvsp[-3].Token).stringval);
			if(returntype(tabcount,(yyvsp[-3].Token).stringval)==0)
			{
				int choose = 0;
				int index = 0;
				for(int i =tabcount;i>=0;i--)
				{
					index = returnindex(i,(yyvsp[-3].Token).stringval);
					choose = i;
					if(index!=-1)
						break;
				}
				(yyval.Token).intval = thetab[choose][index].int_array[(yyvsp[-1].Token).intval];
			}
			else if(returntype(tabcount,(yyvsp[-3].Token).stringval)==1)
			{
				int choose = 0;
				int index = 0;
				for(int i =tabcount;i>=0;i--)
				{
					index = returnindex(i,(yyvsp[-3].Token).stringval);
					choose = i;
					if(index!=-1)
						break;
				}
				(yyval.Token).floatval = thetab[choose][index].float_array[(yyvsp[-1].Token).intval];
			}
			else if(returntype(tabcount,(yyvsp[-3].Token).stringval)==3)
			{
				int choose = 0;
				int index = 0;
				for(int i =tabcount;i>=0;i--)
				{
					index = returnindex(i,(yyvsp[-3].Token).stringval);
					choose = i;
					if(index!=-1)
						break;
				}
				strcpy((yyval.Token).stringval,thetab[choose][index].string_array[(yyvsp[-1].Token).intval].c_str());
			}
			else if(returntype(tabcount,(yyvsp[-3].Token).stringval)==4)
			{
				int choose = 0;
				int index = 0;
				for(int i =tabcount;i>=0;i--)
				{
					index = returnindex(i,(yyvsp[-3].Token).stringval);
					choose = i;
					if(index!=-1)
						break;
				}
				(yyval.Token).boolval = thetab[choose][index].bool_array[(yyvsp[-1].Token).intval];
			}
			else
				yyerror("type error");
			Trace("< NAME '[' int_expression ']' reduce to expression >\n");
		}
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 733 "hw2.y" /* yacc.c:1646  */
    {Trace("< IF '(' bool_expression ')' lscope reduce to if_statement >\n");}
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 734 "hw2.y" /* yacc.c:1646  */
    {Trace("< IF '(' bool_expression ')' statement reduce to if_statement >\n");}
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 735 "hw2.y" /* yacc.c:1646  */
    {Trace("< IF '(' bool_expression ')' block ELSE block reduce to if_statement >\n");}
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 736 "hw2.y" /* yacc.c:1646  */
    {Trace("< IF '(' bool_expression ')' statement ELSE block reduce to if_statement >\n");}
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 737 "hw2.y" /* yacc.c:1646  */
    {Trace("< IF '(' bool_expression ')' block ELSE statement reduce to if_statement >\n");}
#line 2481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 738 "hw2.y" /* yacc.c:1646  */
    {Trace("< IF '(' bool_expression ')' statement ELSE statement reduce to if_statement >\n");}
#line 2487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 741 "hw2.y" /* yacc.c:1646  */
    {
			(yyval.Token).tokentype=4;
			if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==0)
			{
				if((yyvsp[-2].Token).intval==(yyvsp[0].Token).intval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==1)
			{
				if((yyvsp[-2].Token).intval==(yyvsp[0].Token).floatval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==0)
			{
				if((yyvsp[-2].Token).floatval==(yyvsp[0].Token).intval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==1)
			{
				if((yyvsp[-2].Token).floatval==(yyvsp[0].Token).floatval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==3&&(yyvsp[0].Token).tokentype==3)
			{
				if(strcmp((yyvsp[-2].Token).stringval,(yyvsp[0].Token).stringval)==0)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==4&&(yyvsp[0].Token).tokentype==4)
			{
				if((yyvsp[-2].Token).boolval==(yyvsp[0].Token).boolval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else
				yyerror("type error");
			Trace("expression EQ expression reduce to bool_expression\n");
		}
#line 2540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 790 "hw2.y" /* yacc.c:1646  */
    {
			(yyval.Token).tokentype=4;
			if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==0)
			{
				if((yyvsp[-2].Token).intval>=(yyvsp[0].Token).intval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==1)
			{
				if((yyvsp[-2].Token).intval>=(yyvsp[0].Token).floatval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==0)
			{
				if((yyvsp[-2].Token).floatval>=(yyvsp[0].Token).intval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==1)
			{
				if((yyvsp[-2].Token).floatval>=(yyvsp[0].Token).floatval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==4&&(yyvsp[0].Token).tokentype==4)
			{
				if((yyvsp[-2].Token).boolval>=(yyvsp[0].Token).boolval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else
				yyerror("type error");
			Trace("< expression GE expression reduce to bool_expression >\n");
		}
#line 2586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 832 "hw2.y" /* yacc.c:1646  */
    {
			(yyval.Token).tokentype=4;
			if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==0)
			{
				if((yyvsp[-2].Token).intval<=(yyvsp[0].Token).intval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==1)
			{
				if((yyvsp[-2].Token).intval<=(yyvsp[0].Token).floatval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==0)
			{
				if((yyvsp[-2].Token).floatval<=(yyvsp[0].Token).intval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==1)
			{
				if((yyvsp[-2].Token).floatval<=(yyvsp[0].Token).floatval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==4&&(yyvsp[0].Token).tokentype==4)
			{
				if((yyvsp[-2].Token).boolval<=(yyvsp[0].Token).boolval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else
				yyerror("type error");
			Trace("< expression LE expression reduce to bool_expression >\n");
		}
#line 2632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 874 "hw2.y" /* yacc.c:1646  */
    {
			(yyval.Token).tokentype=4;
			if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==0)
			{
				if((yyvsp[-2].Token).intval!=(yyvsp[0].Token).intval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==1)
			{
				if((yyvsp[-2].Token).intval!=(yyvsp[0].Token).floatval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==0)
			{
				if((yyvsp[-2].Token).floatval!=(yyvsp[0].Token).intval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==1)
			{
				if((yyvsp[-2].Token).floatval!=(yyvsp[0].Token).floatval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==3&&(yyvsp[0].Token).tokentype==3)
			{
				if(strcmp((yyvsp[-2].Token).stringval,(yyvsp[0].Token).stringval)!=0)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==4&&(yyvsp[0].Token).tokentype==4)
			{
				if((yyvsp[-2].Token).boolval!=(yyvsp[0].Token).boolval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else
				yyerror("type error");
			Trace("< expression NE expression reduce to bool_expression >\n");
		}
#line 2685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 923 "hw2.y" /* yacc.c:1646  */
    {
			(yyval.Token).tokentype=4;
			if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==0)
			{
				if((yyvsp[-2].Token).intval>(yyvsp[0].Token).intval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==1)
			{
				if((yyvsp[-2].Token).intval>(yyvsp[0].Token).floatval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==0)
			{
				if((yyvsp[-2].Token).floatval>(yyvsp[0].Token).intval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==1)
			{
				if((yyvsp[-2].Token).floatval>(yyvsp[0].Token).floatval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==4&&(yyvsp[0].Token).tokentype==4)
			{
				if((yyvsp[-2].Token).boolval>(yyvsp[0].Token).boolval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else
				yyerror("type error");
			Trace("< expression '>' expression reduce to bool_expression >\n");
		}
#line 2731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 965 "hw2.y" /* yacc.c:1646  */
    {
			(yyval.Token).tokentype=4;
			if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==0)
			{
				if((yyvsp[-2].Token).intval<(yyvsp[0].Token).intval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==1)
			{
				if((yyvsp[-2].Token).intval<(yyvsp[0].Token).floatval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==0)
			{
				if((yyvsp[-2].Token).floatval<(yyvsp[0].Token).intval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==1)
			{
				if((yyvsp[-2].Token).floatval<(yyvsp[0].Token).floatval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==4&&(yyvsp[0].Token).tokentype==4)
			{
				if((yyvsp[-2].Token).boolval<(yyvsp[0].Token).boolval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else
				yyerror("type error");
			Trace("< expression '<' expression reduce to bool_expression >\n");
		}
#line 2777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 1007 "hw2.y" /* yacc.c:1646  */
    {
			(yyval.Token).tokentype=4;
			if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==0)
			{
				if((yyvsp[-2].Token).intval&&(yyvsp[0].Token).intval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==1)
			{
				if((yyvsp[-2].Token).intval&&(yyvsp[0].Token).floatval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==0)
			{
				if((yyvsp[-2].Token).floatval&&(yyvsp[0].Token).intval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==1)
			{
				if((yyvsp[-2].Token).floatval&&(yyvsp[0].Token).floatval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==4&&(yyvsp[0].Token).tokentype==4)
			{
				if((yyvsp[-2].Token).boolval&&(yyvsp[0].Token).boolval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else
				yyerror("type error");
			Trace("< expression AND expression reduce to bool_expression >\n");
		}
#line 2823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1049 "hw2.y" /* yacc.c:1646  */
    {
			(yyval.Token).tokentype=4;
			if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==0)
			{
				if((yyvsp[-2].Token).intval||(yyvsp[0].Token).intval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==0&&(yyvsp[0].Token).tokentype==1)
			{
				if((yyvsp[-2].Token).intval||(yyvsp[0].Token).floatval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==0)
			{
				if((yyvsp[-2].Token).floatval||(yyvsp[0].Token).intval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==1&&(yyvsp[0].Token).tokentype==1)
			{
				if((yyvsp[-2].Token).floatval||(yyvsp[0].Token).floatval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else if((yyvsp[-2].Token).tokentype==4&&(yyvsp[0].Token).tokentype==4)
			{
				if((yyvsp[-2].Token).boolval||(yyvsp[0].Token).boolval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			else
				yyerror("type error");
			Trace("< expression OR expression reduece to bool_expression >\n");
		}
#line 2869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1091 "hw2.y" /* yacc.c:1646  */
    {
			if((yyvsp[0].Token).tokentype!=4)
				yyerror("type error");
			else{
				(yyval.Token).tokentype=4;
				if(!(yyvsp[0].Token).boolval)
					(yyval.Token).boolval = true;
				else
					(yyval.Token).boolval = false;
			}
			Trace("< '!' expression reduce to bool_expression >\n");
		}
#line 2886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1103 "hw2.y" /* yacc.c:1646  */
    {(yyval.Token).tokentype=4;(yyval.Token).boolval=true;Trace("< TRUE reduce to bool_expression >\n");}
#line 2892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1104 "hw2.y" /* yacc.c:1646  */
    {(yyval.Token).tokentype=4;(yyval.Token).boolval=false;Trace("< FALSE reduce to bool_expression >\n");}
#line 2898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1106 "hw2.y" /* yacc.c:1646  */
    {Trace("< WHILE '(' bool_expression ')' block reduece to loop_statement >\n");}
#line 2904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1107 "hw2.y" /* yacc.c:1646  */
    {Trace("< WHILE '(' bool_expression ')' statement reduce to loop_statement >\n");}
#line 2910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1109 "hw2.y" /* yacc.c:1646  */
    {(yyval.Token).tokentype=0;Trace("< INT reduce to Type >\n");}
#line 2916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1110 "hw2.y" /* yacc.c:1646  */
    {(yyval.Token).tokentype=1;Trace("< FLOAT reduce to Type >\n");}
#line 2922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1111 "hw2.y" /* yacc.c:1646  */
    {(yyval.Token).tokentype=3;Trace("< STR reduce to Type >\n");}
#line 2928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1112 "hw2.y" /* yacc.c:1646  */
    {(yyval.Token).tokentype=4;Trace("< BOOL reduce to Type >\n");}
#line 2934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1114 "hw2.y" /* yacc.c:1646  */
    {(yyval.Token).tokentype=3;strcpy((yyval.Token).stringval,(yyvsp[0].Token).stringval);Trace("< \" STRING \" reduce to string_expression >\n");}
#line 2940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1116 "hw2.y" /* yacc.c:1646  */
    {(yyval.Token).tokentype=0;(yyval.Token).intval=(yyvsp[-2].Token).intval+(yyvsp[0].Token).intval;Trace("< int_expression '+' int_expression reduce to int_expression >\n");}
#line 2946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1117 "hw2.y" /* yacc.c:1646  */
    {(yyval.Token).tokentype=0;(yyval.Token).intval=(yyvsp[-2].Token).intval-(yyvsp[0].Token).intval;Trace("< int_expression '-' int_expression reduce to int_expression >\n");}
#line 2952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1118 "hw2.y" /* yacc.c:1646  */
    {(yyval.Token).tokentype=0;(yyval.Token).intval=(yyvsp[-2].Token).intval*(yyvsp[0].Token).intval;Trace("< int_expression '*' int_expression reduce to int_expression >\n");}
#line 2958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1119 "hw2.y" /* yacc.c:1646  */
    {(yyval.Token).tokentype=0;(yyval.Token).intval=(yyvsp[-2].Token).intval/(yyvsp[0].Token).intval;Trace("< int_expression '/' int_expression reduce to int_expression >\n");}
#line 2964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1120 "hw2.y" /* yacc.c:1646  */
    {(yyval.Token).tokentype=0;(yyval.Token).intval=(yyvsp[-2].Token).intval%(yyvsp[0].Token).intval;Trace("< int_expression '%%' int_expression reduce to int_expression >\n");}
#line 2970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1121 "hw2.y" /* yacc.c:1646  */
    {(yyval.Token).tokentype=0;(yyval.Token).intval=-(yyvsp[0].Token).intval;Trace("< '-' int_expression reduce to int_expression >\n");}
#line 2976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1122 "hw2.y" /* yacc.c:1646  */
    {(yyval.Token).tokentype=0;(yyval.Token).intval=(yyvsp[-1].Token).intval;Trace("< '(' int_expression ')' reduce to int_expression >\n");}
#line 2982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1123 "hw2.y" /* yacc.c:1646  */
    {(yyval.Token).tokentype=0;(yyval.Token).intval=(yyvsp[0].Token).intval;Trace("< INTEGER reduce to int_expression >\n");}
#line 2988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1125 "hw2.y" /* yacc.c:1646  */
    {
		if(returntype(tabcount,(yyvsp[0].Token).stringval)!=0)
			yyerror("type error");
		else{
			(yyval.Token).tokentype=0;
			int choose = 0;
			int index = 0;
			for(int i =tabcount;i>=0;i--)
			{
				index = returnindex(i,(yyvsp[0].Token).stringval);
				choose = i;
				if(index!=-1)
					break;
			}
			(yyval.Token).intval = thetab[choose][index].theint;
		}
		Trace("< NAME reduce to int_expression >\n");
	}
#line 3011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1145 "hw2.y" /* yacc.c:1646  */
    {
		int check = returnfunctiontype((yyvsp[-3].Token).stringval);
		if(check==0)
		{
			(yyval.Token).tokentype=0;
			(yyval.Token).intval = 0;
		}
		else if(check==1)
		{
			(yyval.Token).tokentype=1;
			(yyval.Token).floatval = 0.0;
		}
		else if(check==3)
		{
			string s = "___";
			(yyval.Token).tokentype=3;
			strcpy((yyval.Token).stringval,s.c_str());
		}
		else if(check==4)
		{
			(yyval.Token).tokentype=4;
			(yyval.Token).boolval = true;
		}
		else
			yyerror("type error");
		Trace("< NAME '(' argument ')' reduce to function_return >\n");
	}
#line 3043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1173 "hw2.y" /* yacc.c:1646  */
    {
		int check = returnfunctiontype((yyvsp[-2].Token).stringval);
		if(check==0)
		{
			(yyval.Token).tokentype=0;
			(yyval.Token).intval = 0;
		}
		else if(check==1)
		{
			(yyval.Token).tokentype=1;
			(yyval.Token).floatval = 0.0;
		}
		else if(check==3)
		{
			string s = "___";
			(yyval.Token).tokentype=3;
			strcpy((yyval.Token).stringval,s.c_str());
		}
		else if(check==4)
		{
			(yyval.Token).tokentype=4;
			(yyval.Token).boolval = true;
		}
		else
			yyerror("type error");
		Trace("NAME '(' ')' reduce to function_return >\n");
	}
#line 3075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1201 "hw2.y" /* yacc.c:1646  */
    {argudump();(yyval.Token).stringval=(yyvsp[-7].Token).stringval;insertfunction((yyvsp[-7].Token).stringval,(yyvsp[-1].Token).tokentype);Trace("< FN NAME '(' argument ')' '-' '>' Type block reduce to function >\n");}
#line 3081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1202 "hw2.y" /* yacc.c:1646  */
    {(yyval.Token).stringval=(yyvsp[-6].Token).stringval;insertfunction((yyvsp[-6].Token).stringval,(yyvsp[-1].Token).tokentype);Trace("< FN NAME '(' ')' '-' '>' Type block reduce to function >\n");}
#line 3087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1203 "hw2.y" /* yacc.c:1646  */
    {argudump();(yyval.Token).stringval=(yyvsp[-4].Token).stringval;insertfunction((yyvsp[-4].Token).stringval,5);Trace("< FN NAME '(' argument ')' block reduce to function >\n");}
#line 3093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1204 "hw2.y" /* yacc.c:1646  */
    {(yyval.Token).stringval=(yyvsp[-3].Token).stringval;insertfunction((yyvsp[-3].Token).stringval,5);Trace("< FN NAME '(' ')' block reduce to function >\n");}
#line 3099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1206 "hw2.y" /* yacc.c:1646  */
    {if(totalargu==0)argu = (symargu*)malloc(sizeof(symargu)*10);insertargu((yyvsp[-2].Token).stringval,(yyvsp[0].Token).tokentype); Trace("< NAME ':' Type reduce to argument >\n");}
#line 3105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1207 "hw2.y" /* yacc.c:1646  */
    {insertargu((yyvsp[-4].Token).stringval,(yyvsp[-2].Token).tokentype);Trace("< NAME ':' Type ',' argument reduce to argument >\n");}
#line 3111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1208 "hw2.y" /* yacc.c:1646  */
    {Trace("< argument ',' argument reduce to argument >\n");}
#line 3117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1209 "hw2.y" /* yacc.c:1646  */
    {Trace(" <expression reduce to argument >\n");}
#line 3123 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3127 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 1211 "hw2.y" /* yacc.c:1906  */

//#include "lex.yy.c"
int main()
{
    thetab[0] = (symtab*)malloc(sizeof(symtab)*256);
    /* open the source program file */
    /*if (argc != 2) {
	printf ("Usage: sc filename\n");
	exit(1);
    }*/
    //yyin = fopen(argv[1], "r");         /* open input file */
    /* perform parsing */
    if (yyparse() == 1)                 /* parsing */
	yyerror("Parsing error !");     /* syntax error */
    return 0;
}
void createtab(int tabcount)										// under this is to process the symbol table;
{
	thetab[tabcount] = (symtab*)malloc(sizeof(symtab)*256);
}
void dump(int tabcount)
{
	cout<<"the symbol table: "<<endl;
	for(int i =0;i<idcount[tabcount];i++)
	{
		if(thetab[tabcount][i].array_or_not==0)
		{
			cout<<thetab[tabcount][i].name<<'\t';
			if(thetab[tabcount][i].thetype==0)
			{
				cout<<thetab[tabcount][i].theint<<'\t';
				if(thetab[tabcount][i].thestate==0)
					cout<<"const"<<'\t';
				else
					cout<<"variable"<<'\t';
				cout<<"int"<<endl;
			}
			else if(thetab[tabcount][i].thetype==1)
			{
				cout<<thetab[tabcount][i].thefloat<<'\t';
				if(thetab[tabcount][i].thestate==0)
					cout<<"const"<<'\t';
				else
					cout<<"variable"<<'\t';
				cout<<"float"<<endl;
			}
			else if(thetab[tabcount][i].thetype==3)
			{
				cout<<thetab[tabcount][i].thestring<<'\t';
				if(thetab[tabcount][i].thestate==0)
					cout<<"const"<<'\t';
				else
					cout<<"variable"<<'\t';
				cout<<"string"<<endl;
			}
			else if(thetab[tabcount][i].thetype==4)
			{
				cout<<thetab[tabcount][i].thebool<<'\t';
				if(thetab[tabcount][i].thestate==0)
					cout<<"const"<<'\t';
				else
					cout<<"variable"<<'\t';
				cout<<"bool"<<endl;
			}
		}
		else
		{
			if(thetab[tabcount][i].thetype==0)
			{
				for(int j =0;j<thetab[tabcount][i].array_count;j++)
				{
					cout<<thetab[tabcount][i].name<<"["<<j<<"]"<<'\t';
					cout<<thetab[tabcount][i].int_array[j]<<'\t';
					cout<<"variable"<<'\t';
					cout<<"int"<<endl;
				}
			}
			else if(thetab[tabcount][i].thetype==1)
			{
				for(int j =0;j<thetab[tabcount][i].array_count;j++)
				{
					cout<<thetab[tabcount][i].name<<"["<<j<<"]"<<'\t';
					cout<<thetab[tabcount][i].float_array[j]<<'\t';
					cout<<"variable"<<'\t';
					cout<<"float"<<endl;
				}
			}
			else if(thetab[tabcount][i].thetype==3)
			{
				for(int j =0;j<thetab[tabcount][i].array_count;j++)
				{
					cout<<thetab[tabcount][i].name<<"["<<j<<"]"<<'\t';
					cout<<thetab[tabcount][i].string_array[j]<<'\t';
					cout<<"variable"<<'\t';
					cout<<"string"<<endl;
				}
			}
			else if(thetab[tabcount][i].thetype==4)
			{
				for(int j =0;j<thetab[tabcount][i].array_count;j++)
				{
					cout<<thetab[tabcount][i].name<<"["<<j<<"]"<<'\t';
					cout<<thetab[tabcount][i].bool_array[j]<<'\t';
					cout<<"variable"<<'\t';
					cout<<"bool"<<endl;
				}
			}
		}
	}
	cout<<endl;
	idcount[tabcount]=0;
	free(thetab[tabcount]);
}
void argudump()
{
	cout<<endl<<"the argument table: "<<endl;
	for(int i =0;i<totalargu;i++)
	{
		cout<<argu[i].name<<'\t';
		if(argu[i].thetype==0)
			cout<<"int"<<'\t'<<endl;
		else if(argu[i].thetype==1)
			cout<<"float"<<'\t'<<endl;
		else if(argu[i].thetype==3)
			cout<<"string"<<'\t'<<endl;
		else if(argu[i].thetype==4)
			cout<<"bool"<<'\t'<<endl;
	}
	cout<<endl;
	free(argu);
	totalargu =0;
}
void functiondump()
{
	cout<<"the total function table: "<<endl;
	for(int i =0;i<functioncount;i++)
	{
		cout<<funtab[i].name<<'\t';
		if(funtab[i].thetype==0)
			cout<<funtab[i].theint<<'\t';
		else if(funtab[i].thetype==1)
			cout<<funtab[i].thefloat<<'\t';
		else if(funtab[i].thetype==3)
			cout<<funtab[i].thestring<<'\t';
		else if(funtab[i].thetype==4)
			cout<<funtab[i].thebool<<'\t';
		else if(funtab[i].thetype==5)
			cout<<funtab[i].theint<<'\t';
		cout<<"function"<<'\t';
		if(funtab[i].thetype==0)
			cout<<"int"<<'\t'<<endl;
		else if(funtab[i].thetype==1)
			cout<<"float"<<'\t'<<endl;
		else if(funtab[i].thetype==3)
			cout<<"string"<<'\t'<<endl;
		else if(funtab[i].thetype==4)
			cout<<"bool"<<'\t'<<endl;
		else if(funtab[i].thetype==5)
			cout<<"void"<<'\t'<<endl;
		cout<<endl;
	}
}
void insert(int tabcount,char *id,int check,int array_check)
{
	int index = returnindex(tabcount,id);
	if(index==-1)
	{
		int push = idcount[tabcount];
		thetab[tabcount][push].name=id;
		thetab[tabcount][push].thestate = check;
		thetab[tabcount][push].array_or_not = array_check;
		idcount[tabcount]++;
	}
	else
	{
		if(thetab[tabcount][index].thestate==0)
			yyerror("constant error");
		else
		{
			if(returntype(tabcount,id)==0)
			{
				thetab[tabcount][index].thetype = 0;
				thetab[tabcount][index].theint = 0;
			}
			else if(returntype(tabcount,id)==1)
			{
				thetab[tabcount][index].thetype = 1;
				thetab[tabcount][index].thefloat = 0;
			}
			else if(returntype(tabcount,id)==3)
			{
				thetab[tabcount][index].thetype = 3;
				thetab[tabcount][index].thestring="___";
			}
			else if(returntype(tabcount,id)==4)
			{
				thetab[tabcount][index].thetype = 4;
				thetab[tabcount][index].thefloat = true;
			}
		}
	}
}
void insert(int tabcount,char *id,int type,int check,int array_check)
{
	int index = returnindex(tabcount,id);
	if(index==-1)
	{
		int push = idcount[tabcount];
		thetab[tabcount][push].name=id;
		thetab[tabcount][push].thetype = type;
		thetab[tabcount][push].thestate = check;
		thetab[tabcount][push].array_or_not = array_check;
		idcount[tabcount]++;
	}
	else
	{
		if(thetab[tabcount][index].thestate==0)
			yyerror("constant error");
		else
		{
			if(returntype(tabcount,id)==0)
			{
				thetab[tabcount][index].thetype = type;
				thetab[tabcount][index].theint = 0;
			}
			else if(returntype(tabcount,id)==1)
			{
				thetab[tabcount][index].thetype = type;
				thetab[tabcount][index].thefloat = 0;
			}
			else if(returntype(tabcount,id)==3)
			{
				
				thetab[tabcount][index].thetype = type;
				thetab[tabcount][index].thestring = "___";
			}
			else if(returntype(tabcount,id)==4)
			{
				thetab[tabcount][index].thetype = type;
				thetab[tabcount][index].thefloat = true;
			}
		}
	}
}
void insertargu(string id,int type)
{
	argu[totalargu].name = id;
	argu[totalargu].thetype = type;
	totalargu++;
}
void insertfunction(char *id,int type)
{
	int push = functioncount;
	funtab[push].name = id;
	funtab[push].thetype = type;
	functioncount++;
	if(type==0)
		funtab[push].theint = 0;
	else if(type==1)
	 	funtab[push].thefloat =0.0;
	else if(type==3)
		funtab[push].thestring = "___";
	else if(type==4)
	 	funtab[push].thebool =false;
	
	else if(type==5)
	{
		funtab[push].theint = 0;
	}
	else
		yyerror("type error");
}
int returnindex(int tabcount,char *id)
{
	for(int i =0;i<idcount[tabcount];i++)
	{
		if(thetab[tabcount][i].name.compare(id)==0)
			return i;
	}
	return -1;
}
int returntype(int tabcount,char *id)
{
	int choose = 0;
	int index = 0;
	for(int i =tabcount;i>=0;i--)
	{
		index = returnindex(i,id);
		choose = i;
		if(index!=-1)
			break;
	}
	return thetab[choose][index].thetype;
}
int returnfunctiontype(char *id)
{
	int choose =0;
	for(int i =0;i<functioncount;i++)
	{
		if(funtab[i].name.compare(id)==0)
		{
			choose = i;
			break;
		}
		if(i==functioncount-1)
			yyerror("function not in function table error");
	}
	return funtab[choose].thetype;
}
int return_constant_or_variable(int tabcount,char *id)
{
	int choose = 0;
	int index = 0;
	for(int i =tabcount;i>=0;i--)
	{
		index = returnindex(i,id);
		choose = i;
		if(index!=-1)
			break;
		if(i==0)
			yyerror("not in symbol table error");
	}
	return thetab[choose][index].thestate;
}
int insertcheck(int tabcount,char *id)
{
	int choose = 0;
	int index = 0;
	for(int i =tabcount;i>=0;i--)
	{
		index = returnindex(i,id);
		choose = i;
		if(index!=-1)
			break;
		if(i==0)
			yyerror("not in symbol table error");
	}
	if(thetab[choose][index].thestate==0)
		yyerror("constant error");
	else
		return 1;
}
void insertvalue(int tabcount,char *id,int temp)
{
	int choose = 0;
	int index = 0;
	for(int i =tabcount;i>=0;i--)
	{
		index = returnindex(i,id);
		choose = i;
		if(index!=-1)
			break;
		if(i==0)
			yyerror("not in symbol table error");
	}
	thetab[choose][index].theint = temp;
	thetab[choose][index].thetype = 0;
}
void insertvalue(int tabcount,char *id,float temp)
{
	int choose = 0;
	int index = 0;
	for(int i =tabcount;i>=0;i--)
	{
		index = returnindex(i,id);
		choose = i;
		if(index!=-1)
			break;
		if(i==0)
			yyerror("not in symbol table error");
	}
	thetab[choose][index].thefloat = temp;
	thetab[choose][index].thetype = 1;
}
void insertvalue(int tabcount,char *id,char *temp)
{
	int choose = 0;
	int index = 0;
	for(int i =tabcount;i>=0;i--)
	{
		index = returnindex(i,id);
		choose = i;
		if(index!=-1)
			break;
		if(i==0)
			yyerror("not in symbol table error");
	}
	thetab[choose][index].thestring=temp;
	thetab[choose][index].thetype = 3;
}
void insertvalue(int tabcount,char *id,bool temp)
{
	int choose = 0;
	int index = 0;
	for(int i =tabcount;i>=0;i--)
	{
		index = returnindex(i,id);
		choose = i;
		if(index!=-1)
			break;
		if(i==0)
			yyerror("not in symbol table error");
	}
	thetab[choose][index].thebool = temp;
	thetab[choose][index].thetype = 4;
}
void insertarray(int tabcount,char *id,int Type,int size,int array_check,const char *theblank)
{
	int index = returnindex(tabcount,id);
	if(index==-1)
	{
		int push = idcount[tabcount];
		thetab[tabcount][push].name = id;
		thetab[tabcount][push].thetype = Type;
		thetab[tabcount][push].array_or_not = array_check;
		if(Type==0)
		{
			thetab[tabcount][push].int_array = (int*)malloc(sizeof(int)*size);
			thetab[tabcount][push].array_count = size;
			idcount[tabcount]++;
		}
		else if(Type==1)
		{
			thetab[tabcount][push].float_array = (float*)malloc(sizeof(float)*size);
			thetab[tabcount][push].array_count = size;
			idcount[tabcount]++;
		}
		else if(Type==3)
		{
			thetab[tabcount][push].string_array = (string*)malloc(sizeof(string)*size);
			thetab[tabcount][push].array_count = size;
			idcount[tabcount]++;
		}
		else if(Type==4)
		{
			thetab[tabcount][push].bool_array = (bool*)malloc(sizeof(bool)*size);
			thetab[tabcount][push].array_count = size;
			idcount[tabcount]++;
		}
	}
	else
	{
		thetab[tabcount][index].name = id;
		thetab[tabcount][index].thetype = Type;
		thetab[tabcount][index].array_or_not = array_check;
		if(Type==0)
		{
			thetab[tabcount][index].int_array = (int*)malloc(sizeof(int)*size);
			thetab[tabcount][index].array_count = size;
			idcount[tabcount]++;
		}
		else if(Type==1)
		{
			thetab[tabcount][index].float_array = (float*)malloc(sizeof(float)*size);
			thetab[tabcount][index].array_count = size;
			idcount[tabcount]++;
		}
		else if(Type==3)
		{
			thetab[tabcount][index].string_array = (string*)malloc(sizeof(string)*size);
			thetab[tabcount][index].array_count = size;
			idcount[tabcount]++;
		}
		else if(Type==4)
		{
			thetab[tabcount][index].bool_array = (bool*)malloc(sizeof(bool)*size);
			thetab[tabcount][index].array_count = size;
			idcount[tabcount]++;
		}
	}
}
void insertarrayvalue(int tabcount,char *id,int position,int temp)
{
	int choose = 0;
	int index = 0;
	for(int i =tabcount;i>=0;i--)
	{
		index = returnindex(i,id);
		choose = i;
		if(index!=-1)
			break;
	}
	thetab[choose][index].int_array[position] = temp;
}
void insertarrayvalue(int tabcount,char *id,int position,float temp)
{
	int choose = 0;
	int index = 0;
	for(int i =tabcount;i>=0;i--)
	{
		index = returnindex(i,id);
		choose = i;
		if(index!=-1)
			break;
	}
	thetab[choose][index].float_array[position] = temp;
}
void insertarrayvalue(int tabcount,char *id,int position,char *temp)
{
	int choose = 0;
	int index = 0;
	for(int i =tabcount;i>=0;i--)
	{
		index = returnindex(i,id);
		choose = i;
		if(index!=-1)
			break;
	}
	thetab[choose][index].string_array[position]=temp;
}
void insertarrayvalue(int tabcount,char *id,int position,bool temp)
{
	int choose = 0;
	int index = 0;
	for(int i =tabcount;i>=0;i--)
	{
		index = returnindex(i,id);
		choose = i;
		if(index!=-1)
			break;
	}
	thetab[choose][index].bool_array[position] = temp;
}
int yyerror(const char *msg)
{
    printf("%s\n", msg);
	exit(0);
    return 0;
}

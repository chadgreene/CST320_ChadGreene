/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 9 "lang.y" /* yacc.c:339  */

#include <iostream>
#include "lex.h"

#line 71 "langparse.c" /* yacc.c:339  */

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
   by #include "langparse.h".  */
#ifndef YY_YY_LANGPARSE_H_INCLUDED
# define YY_YY_LANGPARSE_H_INCLUDED
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
    IDENTIFIER = 258,
    TYPE_ID = 259,
    INT_VAL = 260,
    FLOAT_VAL = 261,
    SCAN = 262,
    PRINT = 263,
    ARRAY = 264,
    STRUCT = 265,
    WHILE = 266,
    IF = 267,
    ELSE = 268,
    RETURN = 269,
    JUNK_TOKEN = 270
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 16 "lang.y" /* yacc.c:355  */

    int             int_val;
    double          float_val;
    cAstNode*       ast_node;
    cSymbol*        symbol;
    map<string,cSymbol*>*   sym_table;
    cStmtsNode*     stmts_node;
    cStmtNode*      stmt_node;
    cBlockNode*     block_node;
    ExprNode*       expr_node;
    cDeclsNode*     decls_node;
    cDeclNode*      decl_node;
    cArraySpec*     ary_node;
    ArrayVal*       ary_val;
    cVarRef*        var_node;
    VarPart*        var_part;
    cParamNode*     param_node;
    cParamsNode*    params_node;
    cParamsSpec*    params_spec;
    cParamSpec*     param_spec;
    cFuncCall*      func_node;
    

#line 151 "langparse.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_LANGPARSE_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 39 "lang.y" /* yacc.c:358  */

    int yyerror(const char *msg);
    void semantic_error(std::string msg);

    cAstNode *yyast_root;

#line 186 "langparse.c" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   180

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  131

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   270

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    30,     2,     2,
      20,    19,    28,    26,    21,    27,    25,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    18,
       2,    24,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    22,     2,    23,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    16,     2,    17,     2,     2,     2,     2,
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
      15
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    89,    89,    96,   100,   103,   106,   109,   113,   117,
     120,   123,   126,   129,   130,   147,   164,   182,   187,   195,
     201,   205,   208,   226,   233,   238,   242,   249,   253,   258,
     264,   268,   272,   276,   280,   284,   294,   304,   307,   310,
     313,   315,   319,   330,   340,   344,   347,   353,   357,   363,
     368,   371,   375,   378,   381,   385,   388,   391,   394,   398,
     401,   404,   407
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPE_ID", "INT_VAL",
  "FLOAT_VAL", "SCAN", "PRINT", "ARRAY", "STRUCT", "WHILE", "IF", "ELSE",
  "RETURN", "JUNK_TOKEN", "'{'", "'}'", "';'", "')'", "'('", "','", "'['",
  "']'", "'='", "'.'", "'+'", "'-'", "'*'", "'/'", "'%'", "$accept",
  "program", "block", "open", "close", "decls", "decl", "var_decl",
  "array_decl", "struct_decl", "func_decl", "func_header", "func_prefix",
  "paramsspec", "paramspec", "arrayspec", "stmts", "stmt", "func_call",
  "varref", "varpart", "lval", "arrayval", "params", "param", "expr",
  "term", "fact", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   123,   125,    59,    41,
      40,    44,    91,    93,    61,    46,    43,    45,    42,    47,
      37
};
# endif

#define YYPACT_NINF -44

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-44)))

#define YYTABLE_NINF -41

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -6,   -44,    16,   -44,   151,   -44,     5,    15,    39,    32,
      37,    59,    -6,    55,    56,    19,   -44,   151,   -44,    53,
      62,    72,   -44,    20,    11,   104,   -44,    75,    58,   -44,
      76,    86,    19,    88,    97,   116,    19,   119,    44,    19,
      19,   -44,   -44,   -44,    19,    58,    -9,    66,   -44,   -44,
     104,   -44,   -44,   -44,   151,   -44,   123,   -44,   -44,    30,
     -44,   109,   -44,   -44,   -44,   -44,   116,    38,    87,   -44,
     -21,    19,   -44,   112,    40,   -44,   110,    10,    42,    51,
      60,   -44,    19,    19,    19,    19,    19,   -44,   151,   122,
     -44,   -44,   128,   -44,   -44,   125,    29,   -44,    19,    65,
     126,   129,   118,   -44,   146,   163,   163,   -44,    66,    66,
     -44,   -44,   -44,   134,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   148,   -44,   -44,   143,   -44,   145,   163,   -44,
     -44
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,     0,     2,     0,     1,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     8,     0,
       0,     0,    11,     0,     0,     0,    29,     0,    45,    43,
       0,    13,    51,    44,    14,     0,     0,     0,     0,     0,
       0,    47,    60,    61,     0,    62,     0,    54,    58,     7,
       0,     9,    12,    10,     0,    17,     0,    21,    25,     0,
      24,     0,     6,     4,    28,    37,     0,     0,     0,    49,
      50,     0,    22,     0,     0,    27,     0,     0,     0,     0,
       0,    39,     0,     0,     0,     0,     0,     3,     0,     0,
      14,    20,     0,    40,    42,     0,     0,    41,    51,     0,
       0,     0,    15,    13,     0,     0,     0,    59,    52,    53,
      55,    56,    57,     0,    19,    23,    36,    35,    48,    46,
      34,    33,     0,    16,    32,    30,    18,     0,     0,    26,
      31
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -44,   -44,   157,   160,   -43,   -26,   -15,   -20,   -44,   -44,
     -44,   -44,   -44,   -44,    77,   -44,   -14,   -24,   106,    -4,
     114,   141,   -44,   -44,    80,    -7,    31,    13
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    16,     4,    63,    17,    18,    19,    20,    21,
      22,    23,    24,    59,    60,   102,    25,    26,    27,    45,
      29,    30,    33,    68,    69,    70,    47,    48
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,    64,    49,    50,    58,    82,    83,    87,    46,    81,
       1,    76,    77,    28,     8,    56,     5,    82,    83,    11,
      12,    28,    41,    31,    42,    43,    64,    62,    88,    74,
      57,    28,    78,    79,   104,    32,    54,    80,    55,    44,
      89,     7,    34,    42,    43,    76,    28,   117,     8,    91,
      28,    92,    35,    11,    12,    82,    83,    36,    44,   101,
      96,   105,    49,    37,    99,    64,    82,    83,    82,    83,
     106,    51,    58,    49,   113,    39,    40,    82,    83,   107,
      52,   124,   125,    66,    28,    28,    82,    83,   119,    64,
      53,    82,    83,    65,    84,    85,    86,   110,   111,   112,
      67,    28,    28,   -40,   130,    61,    97,     7,    98,    28,
      71,     9,    10,   108,   109,    13,    14,    72,    15,    41,
       1,    62,    75,    61,    28,     7,    90,    93,   103,     9,
      10,   100,    56,    13,    14,    61,    15,     7,     1,   114,
     122,     9,    10,   116,   120,    13,    14,   121,    15,   123,
       1,   126,     6,   127,     7,     8,   128,     3,     9,    10,
      11,    12,    13,    14,    61,    15,     7,     1,   129,   115,
       9,    10,    38,    95,    13,    14,    73,    15,   118,     1,
      94
};

static const yytype_uint8 yycheck[] =
{
       4,    25,    17,    17,    24,    26,    27,    50,    15,    18,
      16,     1,    38,    17,     4,     4,     0,    26,    27,     9,
      10,    25,     3,    18,     5,     6,    50,    17,    54,    36,
      19,    35,    39,    40,    77,    20,    16,    44,    18,    20,
      54,     3,     3,     5,     6,     1,    50,    18,     4,    19,
      54,    21,    20,     9,    10,    26,    27,    20,    20,    19,
      67,    19,    77,     4,    71,    89,    26,    27,    26,    27,
      19,    18,    92,    88,    88,    20,    20,    26,    27,    19,
      18,   105,   106,    25,    88,    89,    26,    27,    23,   113,
      18,    26,    27,    18,    28,    29,    30,    84,    85,    86,
      24,   105,   106,    17,   128,     1,    19,     3,    21,   113,
      22,     7,     8,    82,    83,    11,    12,    20,    14,     3,
      16,    17,     3,     1,   128,     3,     3,    18,    18,     7,
       8,    19,     4,    11,    12,     1,    14,     3,    16,    17,
      22,     7,     8,    18,    18,    11,    12,    18,    14,     3,
      16,    17,     1,     5,     3,     4,    13,     0,     7,     8,
       9,    10,    11,    12,     1,    14,     3,    16,    23,    92,
       7,     8,    12,    67,    11,    12,    35,    14,    98,    16,
      66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    32,    33,    34,     0,     1,     3,     4,     7,
       8,     9,    10,    11,    12,    14,    33,    36,    37,    38,
      39,    40,    41,    42,    43,    47,    48,    49,    50,    51,
      52,    18,    20,    53,     3,    20,    20,     4,    34,    20,
      20,     3,     5,     6,    20,    50,    56,    57,    58,    37,
      47,    18,    18,    18,    16,    18,     4,    19,    38,    44,
      45,     1,    17,    35,    48,    18,    25,    24,    54,    55,
      56,    22,    20,    52,    56,     3,     1,    36,    56,    56,
      56,    18,    26,    27,    28,    29,    30,    35,    36,    47,
       3,    19,    21,    18,    51,    49,    56,    19,    21,    56,
      19,    19,    46,    18,    35,    19,    19,    19,    57,    57,
      58,    58,    58,    47,    17,    45,    18,    18,    55,    23,
      18,    18,    22,     3,    48,    48,    17,     5,    13,    23,
      48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    31,    32,    33,    33,    34,    35,    36,    36,    37,
      37,    37,    37,    37,    38,    39,    40,    41,    41,    41,
      42,    42,    43,    44,    44,    45,    46,    46,    47,    47,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    49,    50,    50,    51,    52,    53,    53,    54,    54,
      55,    55,    56,    56,    56,    57,    57,    57,    57,    58,
      58,    58,    58
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     4,     3,     1,     1,     2,     1,     2,
       2,     1,     2,     2,     2,     4,     5,     2,     5,     4,
       3,     2,     3,     3,     1,     1,     4,     0,     2,     1,
       5,     7,     5,     5,     5,     4,     4,     2,     1,     3,
       2,     4,     3,     1,     2,     1,     4,     0,     3,     1,
       1,     0,     3,     3,     1,     3,     3,     3,     1,     3,
       1,     1,     1
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 89 "lang.y" /* yacc.c:1646  */
    { (yyval.ast_node) = (yyvsp[0].block_node);
                                  yyast_root = (yyval.ast_node);
                                  if (yynerrs == 0) 
                                      YYACCEPT;
                                  else
                                      YYABORT;
                                }
#line 1461 "langparse.c" /* yacc.c:1646  */
    break;

  case 3:
#line 96 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.block_node) = new cBlockNode((yyvsp[-3].sym_table), (yyvsp[-2].decls_node), (yyvsp[-1].stmts_node));
                                    
                                }
#line 1470 "langparse.c" /* yacc.c:1646  */
    break;

  case 4:
#line 100 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.block_node) = new cBlockNode((yyvsp[-2].sym_table), nullptr, (yyvsp[-1].stmts_node));
                                }
#line 1478 "langparse.c" /* yacc.c:1646  */
    break;

  case 5:
#line 103 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.sym_table) = symbolTableRoot->IncreaseScope();
                                }
#line 1486 "langparse.c" /* yacc.c:1646  */
    break;

  case 6:
#line 106 "lang.y" /* yacc.c:1646  */
    {
                                    symbolTableRoot->DecreaseScope();
                                }
#line 1494 "langparse.c" /* yacc.c:1646  */
    break;

  case 7:
#line 109 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.decls_node) = (yyvsp[-1].decls_node);
                                    (yyval.decls_node)->Add((yyvsp[0].decl_node));
                                }
#line 1503 "langparse.c" /* yacc.c:1646  */
    break;

  case 8:
#line 113 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.decls_node) = new cDeclsNode();
                                    (yyval.decls_node)->Add((yyvsp[0].decl_node));
                                }
#line 1512 "langparse.c" /* yacc.c:1646  */
    break;

  case 9:
#line 117 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.decl_node) = (yyvsp[-1].decl_node);
                                }
#line 1520 "langparse.c" /* yacc.c:1646  */
    break;

  case 10:
#line 120 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.decl_node) = (yyvsp[-1].decl_node);
                                }
#line 1528 "langparse.c" /* yacc.c:1646  */
    break;

  case 11:
#line 123 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.decl_node) = (yyvsp[0].decl_node);
                                }
#line 1536 "langparse.c" /* yacc.c:1646  */
    break;

  case 12:
#line 126 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.decl_node) = (yyvsp[-1].decl_node);          
                                }
#line 1544 "langparse.c" /* yacc.c:1646  */
    break;

  case 13:
#line 129 "lang.y" /* yacc.c:1646  */
    {}
#line 1550 "langparse.c" /* yacc.c:1646  */
    break;

  case 14:
#line 131 "lang.y" /* yacc.c:1646  */
    {
                                    if(symbolTableRoot->InCurrentScope((yyvsp[0].symbol)->GetSymbol()) && (yyvsp[0].symbol)->IsDeclared())
                                    {
                                        (yyval.decl_node) = nullptr;
                                        semantic_error("Symbol " + (yyvsp[0].symbol)->GetSymbol() + " already defined in current scope");
                                        YYERROR;
                                    }
                                    else
                                    {
                                        (yyvsp[0].symbol) = symbolTableRoot->InsertSymbol((yyvsp[0].symbol)->GetSymbol());
                                        (yyvsp[0].symbol)->SetDeclared();
                                        (yyvsp[0].symbol)->SetSize((yyvsp[-1].symbol)->GetSize());
                                        (yyval.decl_node) = new cVarNode((yyvsp[-1].symbol), (yyvsp[0].symbol));
                                        (yyvsp[0].symbol)->SetTypeRef((yyvsp[-1].symbol)->GetType(), (yyvsp[-1].symbol)->GetBaseType(), (yyvsp[-1].symbol)->GetRef());
                                    }
                                }
#line 1571 "langparse.c" /* yacc.c:1646  */
    break;

  case 15:
#line 148 "lang.y" /* yacc.c:1646  */
    {
                                    if(symbolTableRoot->InCurrentScope((yyvsp[-1].symbol)->GetSymbol()) && (yyvsp[-1].symbol)->IsDeclared())
                                    {
                                        (yyval.decl_node) = nullptr;
                                        semantic_error("Symbol " + (yyvsp[-1].symbol)->GetSymbol() + " already defined in current scope");
                                        YYERROR;
                                    }
                                    else
                                    {
                                        (yyvsp[-1].symbol) = symbolTableRoot->InsertSymbol((yyvsp[-1].symbol)->GetSymbol());
                                        (yyvsp[-1].symbol)->SetTypeFlag();
                                        (yyvsp[-1].symbol)->SetDeclared();
                                        (yyval.decl_node) = new cArrayDecl((yyvsp[-2].symbol), (yyvsp[-1].symbol), (yyvsp[0].ary_node));
                                        (yyvsp[-1].symbol)->SetTypeRef((yyvsp[-1].symbol)->GetSymbol(), (yyvsp[-2].symbol)->GetSymbol(), (yyval.decl_node));
                                    }
                                }
#line 1592 "langparse.c" /* yacc.c:1646  */
    break;

  case 16:
#line 165 "lang.y" /* yacc.c:1646  */
    {
                                    if(symbolTableRoot->InCurrentScope((yyvsp[0].symbol)->GetSymbol()) && (yyvsp[0].symbol)->IsDeclared())
                                    {
                                        (yyval.decl_node) = nullptr;
                                        semantic_error("Symbol " + (yyvsp[0].symbol)->GetSymbol() + " already defined in current scope");
                                        YYERROR;
                                    }
                                    else
                                    {
                                        (yyvsp[0].symbol) = symbolTableRoot->InsertSymbol((yyvsp[0].symbol)->GetSymbol());
                                        (yyvsp[0].symbol)->SetTypeFlag();
                                        (yyvsp[0].symbol)->SetDeclared();
                                        (yyval.decl_node) = new cStructDecl((yyvsp[-3].sym_table), (yyvsp[-2].decls_node), (yyvsp[0].symbol));
                                        (yyvsp[0].symbol)->SetTypeRef((yyvsp[0].symbol)->GetSymbol(), (yyvsp[0].symbol)->GetSymbol(), (yyval.decl_node));
                                    }
                                    
                                }
#line 1614 "langparse.c" /* yacc.c:1646  */
    break;

  case 17:
#line 183 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.decl_node) = (yyvsp[-1].decl_node);
                                    symbolTableRoot->DecreaseScope();
                                }
#line 1623 "langparse.c" /* yacc.c:1646  */
    break;

  case 18:
#line 188 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.decl_node) = (yyvsp[-4].decl_node);
                                    cFuncDecl* node = dynamic_cast<cFuncDecl*>((yyval.decl_node));
                                    node->SetDecls((yyvsp[-2].decls_node));
                                    node->SetStmts((yyvsp[-1].stmts_node));
                                    symbolTableRoot->DecreaseScope();
                                }
#line 1635 "langparse.c" /* yacc.c:1646  */
    break;

  case 19:
#line 196 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.decl_node) = (yyvsp[-3].decl_node);
                                    ((cFuncDecl*)(yyval.decl_node))->SetStmts((yyvsp[-1].stmts_node));
                                    symbolTableRoot->DecreaseScope();
                                }
#line 1645 "langparse.c" /* yacc.c:1646  */
    break;

  case 20:
#line 202 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.decl_node) = new cFuncDecl((yyvsp[-2].symbol), (yyvsp[-1].params_spec));
                                }
#line 1653 "langparse.c" /* yacc.c:1646  */
    break;

  case 21:
#line 205 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.decl_node) = new cFuncDecl((yyvsp[-1].symbol));
                                }
#line 1661 "langparse.c" /* yacc.c:1646  */
    break;

  case 22:
#line 209 "lang.y" /* yacc.c:1646  */
    {
                                    if(symbolTableRoot->InCurrentScope((yyvsp[-1].symbol)->GetSymbol()) && (yyvsp[-1].symbol)->IsDeclared())
                                    {
                                        (yyval.symbol) = nullptr;
                                        semantic_error("Symbol " + (yyvsp[-1].symbol)->GetSymbol() + " already defined in current scope");
                                        YYERROR;
                                    }
                                    else
                                    {
                                        (yyval.symbol) = symbolTableRoot->InsertSymbol((yyvsp[-1].symbol)->GetSymbol());
                                        (yyval.symbol)->SetDeclared();
                                        (yyval.symbol)->SetSize((yyvsp[-2].symbol)->GetSize());
                                        (yyval.symbol)->SetTypeRef((yyvsp[-2].symbol)->GetSymbol(), (yyvsp[-2].symbol)->GetSymbol(), (yyvsp[-2].symbol)->GetRef());
                                        symbolTableRoot->IncreaseScope();
                                    }
                                }
#line 1682 "langparse.c" /* yacc.c:1646  */
    break;

  case 23:
#line 227 "lang.y" /* yacc.c:1646  */
    {
                                    if((yyvsp[-2].params_spec) == nullptr)
                                        (yyvsp[-2].params_spec) = new cParamsSpec();
                                    (yyval.params_spec) = (yyvsp[-2].params_spec);
                                    (yyval.params_spec)->Add((yyvsp[0].param_spec));
                                }
#line 1693 "langparse.c" /* yacc.c:1646  */
    break;

  case 24:
#line 233 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.params_spec) = new cParamsSpec();
                                    (yyval.params_spec)->Add((yyvsp[0].param_spec));
                                }
#line 1702 "langparse.c" /* yacc.c:1646  */
    break;

  case 25:
#line 238 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.param_spec) = new cParamSpec((cVarNode*)(yyvsp[0].decl_node));
                                }
#line 1710 "langparse.c" /* yacc.c:1646  */
    break;

  case 26:
#line 243 "lang.y" /* yacc.c:1646  */
    {
                                    if((yyvsp[-3].ary_node) == NULL)
                                        (yyvsp[-3].ary_node) = new cArraySpec();
                                    (yyval.ary_node) = (yyvsp[-3].ary_node);
                                    (yyval.ary_node)->Add((yyvsp[-1].int_val));
                                }
#line 1721 "langparse.c" /* yacc.c:1646  */
    break;

  case 27:
#line 249 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.ary_node) = NULL;
                                }
#line 1729 "langparse.c" /* yacc.c:1646  */
    break;

  case 28:
#line 253 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.stmts_node) = (yyvsp[-1].stmts_node);
                                    if((yyvsp[0].stmt_node) != nullptr)
                                        (yyval.stmts_node)->Add((yyvsp[0].stmt_node));
                                }
#line 1739 "langparse.c" /* yacc.c:1646  */
    break;

  case 29:
#line 258 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.stmts_node) = new cStmtsNode();
                                    if((yyvsp[0].stmt_node) != nullptr)
                                        (yyval.stmts_node)->Add((yyvsp[0].stmt_node));
                                }
#line 1749 "langparse.c" /* yacc.c:1646  */
    break;

  case 30:
#line 265 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.stmt_node) = new cIfNode((yyvsp[-2].expr_node), (yyvsp[0].stmt_node));
                                }
#line 1757 "langparse.c" /* yacc.c:1646  */
    break;

  case 31:
#line 269 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.stmt_node) = new cIfNode((yyvsp[-4].expr_node), (yyvsp[-2].stmt_node), (yyvsp[0].stmt_node));
                                }
#line 1765 "langparse.c" /* yacc.c:1646  */
    break;

  case 32:
#line 273 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.stmt_node) = new cWhileNode((yyvsp[-2].expr_node), (yyvsp[0].stmt_node));
                                }
#line 1773 "langparse.c" /* yacc.c:1646  */
    break;

  case 33:
#line 277 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.stmt_node) = new cPrintNode((yyvsp[-2].expr_node));
                                }
#line 1781 "langparse.c" /* yacc.c:1646  */
    break;

  case 34:
#line 281 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.stmt_node) = new cScanNode((yyvsp[-2].expr_node));
                                }
#line 1789 "langparse.c" /* yacc.c:1646  */
    break;

  case 35:
#line 284 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.stmt_node) = new cAssignmentNode((cVarRef*)(yyvsp[-3].expr_node), (yyvsp[-1].expr_node));
                                    
                                    if((yyval.stmt_node)->SemanticError())
                                    {
                                        (yyval.stmt_node) = nullptr;
                                        semantic_error("Cannot assign " + (yyvsp[-1].expr_node)->GetBaseType() + " to " + (yyvsp[-3].expr_node)->GetBaseType());
                                    }
                                    
                                }
#line 1804 "langparse.c" /* yacc.c:1646  */
    break;

  case 36:
#line 295 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.stmt_node) = new cAssignmentNode((cVarRef*)(yyvsp[-3].expr_node), (yyvsp[-1].func_node));
                                    
                                    if((yyval.stmt_node)->SemanticError())
                                    {
                                        (yyval.stmt_node) = nullptr;
                                        semantic_error("Cannot assign " + (yyvsp[-1].func_node)->GetBaseType() + " to " + (yyvsp[-3].expr_node)->GetBaseType());
                                    }
                                }
#line 1818 "langparse.c" /* yacc.c:1646  */
    break;

  case 37:
#line 304 "lang.y" /* yacc.c:1646  */
    {
                                   (yyval.stmt_node) = (yyvsp[-1].func_node);
                                }
#line 1826 "langparse.c" /* yacc.c:1646  */
    break;

  case 38:
#line 307 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.stmt_node) = (yyvsp[0].block_node);
                                }
#line 1834 "langparse.c" /* yacc.c:1646  */
    break;

  case 39:
#line 310 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.stmt_node) = new cReturnNode((yyvsp[-1].expr_node));
                                }
#line 1842 "langparse.c" /* yacc.c:1646  */
    break;

  case 40:
#line 313 "lang.y" /* yacc.c:1646  */
    {}
#line 1848 "langparse.c" /* yacc.c:1646  */
    break;

  case 41:
#line 316 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.func_node) = new cFuncCall((yyvsp[-3].symbol), (yyvsp[-1].params_node));                              
                                }
#line 1856 "langparse.c" /* yacc.c:1646  */
    break;

  case 42:
#line 319 "lang.y" /* yacc.c:1646  */
    {
                                    //if($1 == nullptr)
                                        //$1 = new cVarRef();
                                    (yyval.var_node) = (yyvsp[-2].var_node);
                                    (yyval.var_node)->Add((yyvsp[0].var_part));
                                    if((yyval.var_node)->SemanticError())
                                    {
                                        semantic_error((yyval.var_node)->GetErrorMsg());
                                        YYERROR;
                                    }
                                }
#line 1872 "langparse.c" /* yacc.c:1646  */
    break;

  case 43:
#line 330 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.var_node) = new cVarRef();
                                    (yyval.var_node)->Add((yyvsp[0].var_part));
                                    if((yyval.var_node)->SemanticError())
                                    {
                                        semantic_error((yyval.var_node)->GetErrorMsg());
                                        YYERROR;
                                    }
                                }
#line 1886 "langparse.c" /* yacc.c:1646  */
    break;

  case 44:
#line 340 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.var_part) = new VarPart((yyvsp[-1].symbol),(yyvsp[0].ary_val));
                                }
#line 1894 "langparse.c" /* yacc.c:1646  */
    break;

  case 45:
#line 344 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.expr_node) = (yyvsp[0].var_node);
                                }
#line 1902 "langparse.c" /* yacc.c:1646  */
    break;

  case 46:
#line 347 "lang.y" /* yacc.c:1646  */
    {
                                    if((yyvsp[-3].ary_val) == nullptr)
                                        (yyvsp[-3].ary_val) = new ArrayVal();
                                    (yyval.ary_val) = (yyvsp[-3].ary_val);
                                    (yyval.ary_val)->Add((yyvsp[-1].expr_node));
                                }
#line 1913 "langparse.c" /* yacc.c:1646  */
    break;

  case 47:
#line 353 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.ary_val) = NULL;
                                }
#line 1921 "langparse.c" /* yacc.c:1646  */
    break;

  case 48:
#line 357 "lang.y" /* yacc.c:1646  */
    {
                                    if((yyvsp[-2].params_node) == nullptr)
                                        (yyvsp[-2].params_node) = new cParamsNode();
                                    (yyval.params_node) = (yyvsp[-2].params_node);
                                    (yyval.params_node)->Add((yyvsp[0].param_node));
                                }
#line 1932 "langparse.c" /* yacc.c:1646  */
    break;

  case 49:
#line 363 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.params_node) = new cParamsNode();
                                    (yyval.params_node)->Add((yyvsp[0].param_node));
                                }
#line 1941 "langparse.c" /* yacc.c:1646  */
    break;

  case 50:
#line 368 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.param_node) = new cParamNode((yyvsp[0].expr_node));
                                }
#line 1949 "langparse.c" /* yacc.c:1646  */
    break;

  case 51:
#line 371 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.param_node) = NULL;
                                }
#line 1957 "langparse.c" /* yacc.c:1646  */
    break;

  case 52:
#line 375 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.expr_node) = new BinaryExpr((yyvsp[-2].expr_node), '+', (yyvsp[0].expr_node));
                                }
#line 1965 "langparse.c" /* yacc.c:1646  */
    break;

  case 53:
#line 378 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.expr_node) = new BinaryExpr((yyvsp[-2].expr_node), '-', (yyvsp[0].expr_node));
                                }
#line 1973 "langparse.c" /* yacc.c:1646  */
    break;

  case 54:
#line 381 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.expr_node) = (yyvsp[0].expr_node);
                                }
#line 1981 "langparse.c" /* yacc.c:1646  */
    break;

  case 55:
#line 385 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.expr_node) = new BinaryExpr((yyvsp[-2].expr_node), '*', (yyvsp[0].expr_node));
                                }
#line 1989 "langparse.c" /* yacc.c:1646  */
    break;

  case 56:
#line 388 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.expr_node) = new BinaryExpr((yyvsp[-2].expr_node), '/', (yyvsp[0].expr_node));
                                }
#line 1997 "langparse.c" /* yacc.c:1646  */
    break;

  case 57:
#line 391 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.expr_node) = new BinaryExpr((yyvsp[-2].expr_node), '%', (yyvsp[0].expr_node));
                                }
#line 2005 "langparse.c" /* yacc.c:1646  */
    break;

  case 58:
#line 394 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.expr_node) = (yyvsp[0].expr_node);
                                }
#line 2013 "langparse.c" /* yacc.c:1646  */
    break;

  case 59:
#line 398 "lang.y" /* yacc.c:1646  */
    {
                                    (yyval.expr_node) = (yyvsp[-1].expr_node);
                                }
#line 2021 "langparse.c" /* yacc.c:1646  */
    break;

  case 60:
#line 401 "lang.y" /* yacc.c:1646  */
    {
                                   (yyval.expr_node) = new IntExpr((yyvsp[0].int_val));
                                }
#line 2029 "langparse.c" /* yacc.c:1646  */
    break;

  case 61:
#line 404 "lang.y" /* yacc.c:1646  */
    {
                                   (yyval.expr_node) = new FloatExpr((yyvsp[0].float_val));
                                }
#line 2037 "langparse.c" /* yacc.c:1646  */
    break;

  case 62:
#line 407 "lang.y" /* yacc.c:1646  */
    {
                                   (yyval.expr_node) = (yyvsp[0].var_node);
                                }
#line 2045 "langparse.c" /* yacc.c:1646  */
    break;


#line 2049 "langparse.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
#line 410 "lang.y" /* yacc.c:1906  */


int yyerror(const char *msg)
{
    std::cerr << "ERROR: " << msg << " at symbol "
        << yytext << " on line " << yylineno << "\n";

    return 0;
}

void semantic_error(std::string msg)
{
    std::cout << "ERROR: " << msg <<
                 " on line " << yylineno << std::endl;
    
    yynerrs++;
}

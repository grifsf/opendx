/* A Bison parser, made by GNU Bison 3.6.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.6.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "./net.y"


/***********************************************************************/
/* Open Visualization Data Explorer                                    */
/* (C) Copyright IBM Corp. 1989,1999                                   */
/* ALL RIGHTS RESERVED                                                 */
/* This code licensed under the                                        */
/*    "IBM PUBLIC LICENSE - Open Visualization Data Explorer"          */
/***********************************************************************/

/*****************************************************************************/
/* uin.yacc -								     */
/*                                                                           */
/* Contains SVS script language grammar for yacc.			     */
/*                                                                           */
/*****************************************************************************/

/*
 * $Header: /src/master/dx/src/uipp/dxuilib/net.y,v 1.1 2002/06/13 20:56:27 gda Exp $
 */

#include "Parse.h"


#line 96 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    L_OR = 258,                    /* L_OR  */
    L_AND = 259,                   /* L_AND  */
    L_NOT = 260,                   /* L_NOT  */
    L_EQ = 261,                    /* L_EQ  */
    L_NEQ = 262,                   /* L_NEQ  */
    L_LT = 263,                    /* L_LT  */
    L_GT = 264,                    /* L_GT  */
    L_LEQ = 265,                   /* L_LEQ  */
    L_GEQ = 266,                   /* L_GEQ  */
    A_PLUS = 267,                  /* A_PLUS  */
    A_MINUS = 268,                 /* A_MINUS  */
    A_TIMES = 269,                 /* A_TIMES  */
    A_DIV = 270,                   /* A_DIV  */
    A_IDIV = 271,                  /* A_IDIV  */
    A_MOD = 272,                   /* A_MOD  */
    A_EXP = 273,                   /* A_EXP  */
    U_MINUS = 274,                 /* U_MINUS  */
    V_TRUE = 275,                  /* V_TRUE  */
    V_FALSE = 276,                 /* V_FALSE  */
    T_BAR = 277,                   /* T_BAR  */
    T_LPAR = 278,                  /* T_LPAR  */
    T_RPAR = 279,                  /* T_RPAR  */
    T_LBRA = 280,                  /* T_LBRA  */
    T_RBRA = 281,                  /* T_RBRA  */
    T_LSQB = 282,                  /* T_LSQB  */
    T_RSQB = 283,                  /* T_RSQB  */
    T_ASSIGN = 284,                /* T_ASSIGN  */
    T_COMMA = 285,                 /* T_COMMA  */
    T_COLON = 286,                 /* T_COLON  */
    T_SEMI = 287,                  /* T_SEMI  */
    T_PP = 288,                    /* T_PP  */
    T_MM = 289,                    /* T_MM  */
    T_RA = 290,                    /* T_RA  */
    T_DOTDOT = 291,                /* T_DOTDOT  */
    T_COMMENT = 292,               /* T_COMMENT  */
    T_ID = 293,                    /* T_ID  */
    T_EXID = 294,                  /* T_EXID  */
    T_INT = 295,                   /* T_INT  */
    T_STRING = 296,                /* T_STRING  */
    T_FLOAT = 297,                 /* T_FLOAT  */
    K_BACKWARD = 298,              /* K_BACKWARD  */
    K_CANCEL = 299,                /* K_CANCEL  */
    K_ELSE = 300,                  /* K_ELSE  */
    K_FOR = 301,                   /* K_FOR  */
    K_FORWARD = 302,               /* K_FORWARD  */
    K_IF = 303,                    /* K_IF  */
    K_INCLUDE = 304,               /* K_INCLUDE  */
    K_LOOP = 305,                  /* K_LOOP  */
    K_MACRO = 306,                 /* K_MACRO  */
    K_MODULE = 307,                /* K_MODULE  */
    K_NULL = 308,                  /* K_NULL  */
    K_OFF = 309,                   /* K_OFF  */
    K_ON = 310,                    /* K_ON  */
    K_PALINDROME = 311,            /* K_PALINDROME  */
    K_PAUSE = 312,                 /* K_PAUSE  */
    K_PLAY = 313,                  /* K_PLAY  */
    K_QUIT = 314,                  /* K_QUIT  */
    K_REPEAT = 315,                /* K_REPEAT  */
    K_RESUME = 316,                /* K_RESUME  */
    K_SEQUENCE = 317,              /* K_SEQUENCE  */
    K_STEP = 318,                  /* K_STEP  */
    K_STOP = 319,                  /* K_STOP  */
    K_SUSPEND = 320,               /* K_SUSPEND  */
    K_THEN = 321,                  /* K_THEN  */
    K_UNTIL = 322,                 /* K_UNTIL  */
    K_WHILE = 323,                 /* K_WHILE  */
    P_INTERRUPT = 324,             /* P_INTERRUPT  */
    P_SYSTEM = 325,                /* P_SYSTEM  */
    P_ACK = 326,                   /* P_ACK  */
    P_MACRO = 327,                 /* P_MACRO  */
    P_FOREGROUND = 328,            /* P_FOREGROUND  */
    P_BACKGROUND = 329,            /* P_BACKGROUND  */
    P_ERROR = 330,                 /* P_ERROR  */
    P_MESSAGE = 331,               /* P_MESSAGE  */
    P_INFO = 332,                  /* P_INFO  */
    P_LINQ = 333,                  /* P_LINQ  */
    P_SINQ = 334,                  /* P_SINQ  */
    P_VINQ = 335,                  /* P_VINQ  */
    P_LRESP = 336,                 /* P_LRESP  */
    P_SRESP = 337,                 /* P_SRESP  */
    P_VRESP = 338,                 /* P_VRESP  */
    P_DATA = 339                   /* P_DATA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define L_OR 258
#define L_AND 259
#define L_NOT 260
#define L_EQ 261
#define L_NEQ 262
#define L_LT 263
#define L_GT 264
#define L_LEQ 265
#define L_GEQ 266
#define A_PLUS 267
#define A_MINUS 268
#define A_TIMES 269
#define A_DIV 270
#define A_IDIV 271
#define A_MOD 272
#define A_EXP 273
#define U_MINUS 274
#define V_TRUE 275
#define V_FALSE 276
#define T_BAR 277
#define T_LPAR 278
#define T_RPAR 279
#define T_LBRA 280
#define T_RBRA 281
#define T_LSQB 282
#define T_RSQB 283
#define T_ASSIGN 284
#define T_COMMA 285
#define T_COLON 286
#define T_SEMI 287
#define T_PP 288
#define T_MM 289
#define T_RA 290
#define T_DOTDOT 291
#define T_COMMENT 292
#define T_ID 293
#define T_EXID 294
#define T_INT 295
#define T_STRING 296
#define T_FLOAT 297
#define K_BACKWARD 298
#define K_CANCEL 299
#define K_ELSE 300
#define K_FOR 301
#define K_FORWARD 302
#define K_IF 303
#define K_INCLUDE 304
#define K_LOOP 305
#define K_MACRO 306
#define K_MODULE 307
#define K_NULL 308
#define K_OFF 309
#define K_ON 310
#define K_PALINDROME 311
#define K_PAUSE 312
#define K_PLAY 313
#define K_QUIT 314
#define K_REPEAT 315
#define K_RESUME 316
#define K_SEQUENCE 317
#define K_STEP 318
#define K_STOP 319
#define K_SUSPEND 320
#define K_THEN 321
#define K_UNTIL 322
#define K_WHILE 323
#define P_INTERRUPT 324
#define P_SYSTEM 325
#define P_ACK 326
#define P_MACRO 327
#define P_FOREGROUND 328
#define P_BACKGROUND 329
#define P_ERROR 330
#define P_MESSAGE 331
#define P_INFO 332
#define P_LINQ 333
#define P_SINQ 334
#define P_VINQ 335
#define P_LRESP 336
#define P_SRESP 337
#define P_VRESP 338
#define P_DATA 339

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 27 "./net.y"

    union 
    {
	char                c;
	int                 i;
	float               f;
	char                s[4096];	/* 4096 == YYLMAX in net.lex */
    } ast;

#line 323 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);


/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_L_OR = 3,                       /* L_OR  */
  YYSYMBOL_L_AND = 4,                      /* L_AND  */
  YYSYMBOL_L_NOT = 5,                      /* L_NOT  */
  YYSYMBOL_L_EQ = 6,                       /* L_EQ  */
  YYSYMBOL_L_NEQ = 7,                      /* L_NEQ  */
  YYSYMBOL_L_LT = 8,                       /* L_LT  */
  YYSYMBOL_L_GT = 9,                       /* L_GT  */
  YYSYMBOL_L_LEQ = 10,                     /* L_LEQ  */
  YYSYMBOL_L_GEQ = 11,                     /* L_GEQ  */
  YYSYMBOL_A_PLUS = 12,                    /* A_PLUS  */
  YYSYMBOL_A_MINUS = 13,                   /* A_MINUS  */
  YYSYMBOL_A_TIMES = 14,                   /* A_TIMES  */
  YYSYMBOL_A_DIV = 15,                     /* A_DIV  */
  YYSYMBOL_A_IDIV = 16,                    /* A_IDIV  */
  YYSYMBOL_A_MOD = 17,                     /* A_MOD  */
  YYSYMBOL_A_EXP = 18,                     /* A_EXP  */
  YYSYMBOL_U_MINUS = 19,                   /* U_MINUS  */
  YYSYMBOL_V_TRUE = 20,                    /* V_TRUE  */
  YYSYMBOL_V_FALSE = 21,                   /* V_FALSE  */
  YYSYMBOL_T_BAR = 22,                     /* T_BAR  */
  YYSYMBOL_T_LPAR = 23,                    /* T_LPAR  */
  YYSYMBOL_T_RPAR = 24,                    /* T_RPAR  */
  YYSYMBOL_T_LBRA = 25,                    /* T_LBRA  */
  YYSYMBOL_T_RBRA = 26,                    /* T_RBRA  */
  YYSYMBOL_T_LSQB = 27,                    /* T_LSQB  */
  YYSYMBOL_T_RSQB = 28,                    /* T_RSQB  */
  YYSYMBOL_T_ASSIGN = 29,                  /* T_ASSIGN  */
  YYSYMBOL_T_COMMA = 30,                   /* T_COMMA  */
  YYSYMBOL_T_COLON = 31,                   /* T_COLON  */
  YYSYMBOL_T_SEMI = 32,                    /* T_SEMI  */
  YYSYMBOL_T_PP = 33,                      /* T_PP  */
  YYSYMBOL_T_MM = 34,                      /* T_MM  */
  YYSYMBOL_T_RA = 35,                      /* T_RA  */
  YYSYMBOL_T_DOTDOT = 36,                  /* T_DOTDOT  */
  YYSYMBOL_T_COMMENT = 37,                 /* T_COMMENT  */
  YYSYMBOL_T_ID = 38,                      /* T_ID  */
  YYSYMBOL_T_EXID = 39,                    /* T_EXID  */
  YYSYMBOL_T_INT = 40,                     /* T_INT  */
  YYSYMBOL_T_STRING = 41,                  /* T_STRING  */
  YYSYMBOL_T_FLOAT = 42,                   /* T_FLOAT  */
  YYSYMBOL_K_BACKWARD = 43,                /* K_BACKWARD  */
  YYSYMBOL_K_CANCEL = 44,                  /* K_CANCEL  */
  YYSYMBOL_K_ELSE = 45,                    /* K_ELSE  */
  YYSYMBOL_K_FOR = 46,                     /* K_FOR  */
  YYSYMBOL_K_FORWARD = 47,                 /* K_FORWARD  */
  YYSYMBOL_K_IF = 48,                      /* K_IF  */
  YYSYMBOL_K_INCLUDE = 49,                 /* K_INCLUDE  */
  YYSYMBOL_K_LOOP = 50,                    /* K_LOOP  */
  YYSYMBOL_K_MACRO = 51,                   /* K_MACRO  */
  YYSYMBOL_K_MODULE = 52,                  /* K_MODULE  */
  YYSYMBOL_K_NULL = 53,                    /* K_NULL  */
  YYSYMBOL_K_OFF = 54,                     /* K_OFF  */
  YYSYMBOL_K_ON = 55,                      /* K_ON  */
  YYSYMBOL_K_PALINDROME = 56,              /* K_PALINDROME  */
  YYSYMBOL_K_PAUSE = 57,                   /* K_PAUSE  */
  YYSYMBOL_K_PLAY = 58,                    /* K_PLAY  */
  YYSYMBOL_K_QUIT = 59,                    /* K_QUIT  */
  YYSYMBOL_K_REPEAT = 60,                  /* K_REPEAT  */
  YYSYMBOL_K_RESUME = 61,                  /* K_RESUME  */
  YYSYMBOL_K_SEQUENCE = 62,                /* K_SEQUENCE  */
  YYSYMBOL_K_STEP = 63,                    /* K_STEP  */
  YYSYMBOL_K_STOP = 64,                    /* K_STOP  */
  YYSYMBOL_K_SUSPEND = 65,                 /* K_SUSPEND  */
  YYSYMBOL_K_THEN = 66,                    /* K_THEN  */
  YYSYMBOL_K_UNTIL = 67,                   /* K_UNTIL  */
  YYSYMBOL_K_WHILE = 68,                   /* K_WHILE  */
  YYSYMBOL_P_INTERRUPT = 69,               /* P_INTERRUPT  */
  YYSYMBOL_P_SYSTEM = 70,                  /* P_SYSTEM  */
  YYSYMBOL_P_ACK = 71,                     /* P_ACK  */
  YYSYMBOL_P_MACRO = 72,                   /* P_MACRO  */
  YYSYMBOL_P_FOREGROUND = 73,              /* P_FOREGROUND  */
  YYSYMBOL_P_BACKGROUND = 74,              /* P_BACKGROUND  */
  YYSYMBOL_P_ERROR = 75,                   /* P_ERROR  */
  YYSYMBOL_P_MESSAGE = 76,                 /* P_MESSAGE  */
  YYSYMBOL_P_INFO = 77,                    /* P_INFO  */
  YYSYMBOL_P_LINQ = 78,                    /* P_LINQ  */
  YYSYMBOL_P_SINQ = 79,                    /* P_SINQ  */
  YYSYMBOL_P_VINQ = 80,                    /* P_VINQ  */
  YYSYMBOL_P_LRESP = 81,                   /* P_LRESP  */
  YYSYMBOL_P_SRESP = 82,                   /* P_SRESP  */
  YYSYMBOL_P_VRESP = 83,                   /* P_VRESP  */
  YYSYMBOL_P_DATA = 84,                    /* P_DATA  */
  YYSYMBOL_YYACCEPT = 85,                  /* $accept  */
  YYSYMBOL_start = 86,                     /* start  */
  YYSYMBOL_c_0 = 87,                       /* c_0  */
  YYSYMBOL_top = 88,                       /* top  */
  YYSYMBOL_macro = 89,                     /* macro  */
  YYSYMBOL_formal_s0 = 90,                 /* formal_s0  */
  YYSYMBOL_formal_s = 91,                  /* formal_s  */
  YYSYMBOL_formal = 92,                    /* formal  */
  YYSYMBOL_block = 93,                     /* block  */
  YYSYMBOL_statement_s0 = 94,              /* statement_s0  */
  YYSYMBOL_statement_s = 95,               /* statement_s  */
  YYSYMBOL_statement = 96,                 /* statement  */
  YYSYMBOL_include = 97,                   /* include  */
  YYSYMBOL_assignment = 98,                /* assignment  */
  YYSYMBOL_f_assignment = 99,              /* f_assignment  */
  YYSYMBOL_s_assignment = 100,             /* s_assignment  */
  YYSYMBOL_attributes_0 = 101,             /* attributes_0  */
  YYSYMBOL_attributes = 102,               /* attributes  */
  YYSYMBOL_attribute_s0 = 103,             /* attribute_s0  */
  YYSYMBOL_attribute_s = 104,              /* attribute_s  */
  YYSYMBOL_attribute = 105,                /* attribute  */
  YYSYMBOL_function_call = 106,            /* function_call  */
  YYSYMBOL_107_1 = 107,                    /* $@1  */
  YYSYMBOL_argument_s0 = 108,              /* argument_s0  */
  YYSYMBOL_argument_s = 109,               /* argument_s  */
  YYSYMBOL_argument = 110,                 /* argument  */
  YYSYMBOL_value = 111,                    /* value  */
  YYSYMBOL_comment = 112,                  /* comment  */
  YYSYMBOL_expression_s = 113,             /* expression_s  */
  YYSYMBOL_expression = 114,               /* expression  */
  YYSYMBOL_constant = 115,                 /* constant  */
  YYSYMBOL_list = 116,                     /* list  */
  YYSYMBOL_tensor_s = 117,                 /* tensor_s  */
  YYSYMBOL_tensor = 118,                   /* tensor  */
  YYSYMBOL_scalar_s = 119,                 /* scalar_s  */
  YYSYMBOL_scalar = 120,                   /* scalar  */
  YYSYMBOL_real = 121,                     /* real  */
  YYSYMBOL_complex = 122,                  /* complex  */
  YYSYMBOL_quaternion = 123,               /* quaternion  */
  YYSYMBOL_int = 124,                      /* int  */
  YYSYMBOL_float = 125,                    /* float  */
  YYSYMBOL_string_s = 126,                 /* string_s  */
  YYSYMBOL_string = 127,                   /* string  */
  YYSYMBOL_l_value_s = 128,                /* l_value_s  */
  YYSYMBOL_l_value = 129,                  /* l_value  */
  YYSYMBOL_r_value = 130,                  /* r_value  */
  YYSYMBOL_empty = 131                     /* empty  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  30
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   205

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  172

#define YYMAXUTOK   339


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   198,   198,   201,   203,   204,   205,   212,   219,   227,
     228,   231,   232,   235,   236,   237,   238,   245,   252,   253,
     256,   257,   264,   265,   266,   267,   268,   274,   282,   283,
     286,   289,   290,   291,   298,   299,   302,   305,   306,   309,
     310,   315,   321,   332,   331,   342,   343,   346,   347,   350,
     351,   354,   358,   368,   378,   379,   382,   383,   384,   391,
     392,   393,   394,   395,   398,   399,   400,   401,   402,   405,
     406,   407,   410,   411,   414,   415,   416,   419,   420,   421,
     424,   425,   428,   429,   432,   433,   436,   439,   442,   443,
     444,   447,   450,   451,   454,   460,   467
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "L_OR", "L_AND",
  "L_NOT", "L_EQ", "L_NEQ", "L_LT", "L_GT", "L_LEQ", "L_GEQ", "A_PLUS",
  "A_MINUS", "A_TIMES", "A_DIV", "A_IDIV", "A_MOD", "A_EXP", "U_MINUS",
  "V_TRUE", "V_FALSE", "T_BAR", "T_LPAR", "T_RPAR", "T_LBRA", "T_RBRA",
  "T_LSQB", "T_RSQB", "T_ASSIGN", "T_COMMA", "T_COLON", "T_SEMI", "T_PP",
  "T_MM", "T_RA", "T_DOTDOT", "T_COMMENT", "T_ID", "T_EXID", "T_INT",
  "T_STRING", "T_FLOAT", "K_BACKWARD", "K_CANCEL", "K_ELSE", "K_FOR",
  "K_FORWARD", "K_IF", "K_INCLUDE", "K_LOOP", "K_MACRO", "K_MODULE",
  "K_NULL", "K_OFF", "K_ON", "K_PALINDROME", "K_PAUSE", "K_PLAY", "K_QUIT",
  "K_REPEAT", "K_RESUME", "K_SEQUENCE", "K_STEP", "K_STOP", "K_SUSPEND",
  "K_THEN", "K_UNTIL", "K_WHILE", "P_INTERRUPT", "P_SYSTEM", "P_ACK",
  "P_MACRO", "P_FOREGROUND", "P_BACKGROUND", "P_ERROR", "P_MESSAGE",
  "P_INFO", "P_LINQ", "P_SINQ", "P_VINQ", "P_LRESP", "P_SRESP", "P_VRESP",
  "P_DATA", "$accept", "start", "c_0", "top", "macro", "formal_s0",
  "formal_s", "formal", "block", "statement_s0", "statement_s",
  "statement", "include", "assignment", "f_assignment", "s_assignment",
  "attributes_0", "attributes", "attribute_s0", "attribute_s", "attribute",
  "function_call", "$@1", "argument_s0", "argument_s", "argument", "value",
  "comment", "expression_s", "expression", "constant", "list", "tensor_s",
  "tensor", "scalar_s", "scalar", "real", "complex", "quaternion", "int",
  "float", "string_s", "string", "l_value_s", "l_value", "r_value",
  "empty", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339
};
#endif

#define YYPACT_NINF (-126)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-44)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      54,     9,  -126,    -6,   -31,   -14,    30,  -126,  -126,  -126,
    -126,  -126,    39,  -126,  -126,    39,  -126,    70,    39,  -126,
      37,     9,  -126,  -126,  -126,  -126,    45,  -126,  -126,    47,
    -126,  -126,    52,    75,  -126,  -126,    78,    -5,    56,  -126,
    -126,  -126,    55,    80,    92,    97,   101,  -126,  -126,  -126,
    -126,    94,    46,   148,   110,  -126,  -126,  -126,  -126,   108,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,    39,    10,   114,   121,   120,  -126,  -126,
    -126,  -126,   124,   131,   126,    39,  -126,    88,  -126,    52,
    -126,   140,   133,   135,   147,  -126,   128,  -126,   130,   150,
    -126,    85,   139,    94,  -126,   133,   135,    99,  -126,    55,
     119,    18,    80,  -126,  -126,  -126,  -126,  -126,   138,   141,
    -126,   155,  -126,  -126,    62,  -126,    10,  -126,   -31,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,   156,  -126,   161,   162,
      39,   -11,    35,  -126,  -126,    36,  -126,    -2,    80,  -126,
    -126,  -126,   138,  -126,   141,  -126,    10,  -126,   165,   163,
     164,   160,    39,   138,   141,  -126,   162,   168,   171,  -126,
    -126,  -126
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      96,    96,    53,    94,     0,     0,     0,     3,     5,    22,
       4,    25,    96,    28,    29,    96,    26,     0,    96,     6,
       0,    19,    20,    18,    32,    33,     0,    91,    27,     0,
       1,     2,    96,     0,    35,    34,     0,     0,     0,    92,
      17,    21,    96,    96,     0,     0,    38,    39,    37,    23,
      24,     0,     0,     0,    95,    86,    87,    63,    30,    31,
      54,    56,    61,    60,    59,    77,    78,    79,    80,    81,
      62,    57,    94,    96,     0,    52,     0,    46,    47,    49,
      51,    45,    13,     0,    10,    96,     9,     0,    36,     0,
      95,     0,    80,    81,     0,    69,     0,    74,    77,     0,
      88,     0,     0,     0,    93,     0,     0,     0,    44,     0,
       0,    96,     0,    11,    42,    41,    40,    58,     0,     0,
      65,     0,    70,    64,     0,    75,     0,    66,     0,    89,
      73,    72,    55,    52,    50,    48,    14,    15,     0,     0,
      96,     0,     0,    71,    76,     0,    90,     0,    96,     8,
      12,    82,     0,    83,     0,    67,     0,    16,     0,     0,
       0,     0,    96,     0,     0,    68,     0,     0,     0,     7,
      84,    85
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,  -126,  -126,  -126,    48,  -126,    86,  -125,  -126,
    -126,    28,  -126,  -126,  -126,  -126,   -13,  -126,  -126,  -126,
     111,   166,  -126,  -126,  -126,    90,    95,  -126,  -126,   -47,
     -33,  -126,   144,   -37,   151,   -41,   -45,  -126,  -126,   -43,
     -48,  -126,     2,  -126,   167,  -126,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     6,    31,     7,     8,    83,    84,    85,     9,    20,
      21,    10,    11,    12,    13,    14,    33,    34,    45,    46,
      47,    15,    26,    76,    77,    78,    79,    16,    59,    60,
      61,    62,    94,    63,    96,    64,    65,    66,    67,    68,
      69,    99,    70,    17,    18,    71,    35
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      19,    23,    36,    93,    91,    39,    28,    98,    92,    80,
      27,    97,    97,   151,   149,    95,    95,   -43,    51,   152,
      52,    74,    53,    52,    29,    53,   106,    24,    25,    22,
      30,   105,    48,    54,     1,    55,    27,    56,    55,    27,
      56,   169,    81,    86,   114,    32,     2,     3,    57,    41,
      55,    57,    56,   138,   100,   125,   132,   122,     4,   153,
     104,   125,   155,    40,   122,   154,    32,   156,    42,    74,
      43,   142,   113,    53,    80,   141,    80,   137,    74,     1,
      52,   145,    53,   144,   143,    74,    55,    27,    56,   115,
      44,     2,     3,    75,    72,    55,    27,    56,   139,    37,
      38,   129,    55,     4,    56,     5,   160,    49,    57,   159,
      50,   161,    53,   130,   157,   121,   168,    51,    82,    52,
     167,    53,    74,    87,    52,    88,    53,   150,    55,    27,
     146,    89,    90,   -43,    55,    27,    56,   133,   103,    55,
      27,    56,    74,   107,    52,   108,    53,    57,    86,   166,
     109,    74,    57,   110,   123,   111,   112,   136,   124,    55,
      27,    56,    74,   118,   117,   119,   126,   131,    55,   124,
      56,    74,    57,   120,    53,    53,   127,   121,    55,    55,
     128,    56,    53,    56,   148,   147,   165,     1,    55,   162,
      56,    27,   170,   163,   164,   171,   158,   101,   140,   135,
     116,     0,   134,    58,   102,    73
};

static const yytype_int16 yycheck[] =
{
       0,     1,    15,    51,    51,    18,     4,    52,    51,    42,
      41,    52,    53,    24,   139,    52,    53,    23,    23,    30,
      25,    23,    27,    25,    38,    27,    74,    33,    34,     1,
       0,    74,    32,    38,    25,    40,    41,    42,    40,    41,
      42,   166,    42,    43,    87,    27,    37,    38,    53,    21,
      40,    53,    42,    35,    52,    96,   103,    94,    49,    24,
      73,   102,    26,    26,   101,    30,    27,    31,    23,    23,
      23,   119,    85,    27,   107,   118,   109,   110,    23,    25,
      25,   126,    27,   124,   121,    23,    40,    41,    42,    87,
      38,    37,    38,    38,    38,    40,    41,    42,   111,    29,
      30,    99,    40,    49,    42,    51,   154,    32,    53,   152,
      32,   156,    27,    28,   147,    30,   164,    23,    38,    25,
     163,    27,    23,    31,    25,    28,    27,   140,    40,    41,
     128,    30,    38,    23,    40,    41,    42,    38,    30,    40,
      41,    42,    23,    29,    25,    24,    27,    53,   148,   162,
      30,    23,    53,    29,    26,    24,    30,    38,    30,    40,
      41,    42,    23,    30,    24,    30,    36,    28,    40,    30,
      42,    23,    53,    26,    27,    27,    26,    30,    40,    40,
      30,    42,    27,    42,    23,    29,    26,    25,    40,    24,
      42,    41,    24,    30,    30,    24,   148,    53,   112,   109,
      89,    -1,   107,    37,    53,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    37,    38,    49,    51,    86,    88,    89,    93,
      96,    97,    98,    99,   100,   106,   112,   128,   129,   131,
      94,    95,    96,   131,    33,    34,   107,    41,   127,    38,
       0,    87,    27,   101,   102,   131,   101,    29,    30,   101,
      26,    96,    23,    23,    38,   103,   104,   105,   131,    32,
      32,    23,    25,    27,    38,    40,    42,    53,   106,   113,
     114,   115,   116,   118,   120,   121,   122,   123,   124,   125,
     127,   130,    38,   129,    23,    38,   108,   109,   110,   111,
     115,   131,    38,    90,    91,    92,   131,    31,    28,    30,
      38,   114,   124,   125,   117,   118,   119,   120,   121,   126,
     127,   117,   119,    30,   101,   124,   125,    29,    24,    30,
      29,    24,    30,   101,   124,   127,   105,    24,    30,    30,
      26,    30,   118,    26,    30,   120,    36,    26,    30,   127,
      28,    28,   114,    38,   111,   110,    38,   115,    35,   101,
      92,   124,   125,   118,   120,   121,   127,    29,    23,    93,
     101,    24,    30,    24,    30,    26,    31,   115,    90,   124,
     125,   121,    24,    30,    30,    26,   101,   124,   125,    93,
      24,    24
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    87,    88,    88,    88,    89,    89,    90,
      90,    91,    91,    92,    92,    92,    92,    93,    94,    94,
      95,    95,    96,    96,    96,    96,    96,    97,    98,    98,
      99,   100,   100,   100,   101,   101,   102,   103,   103,   104,
     104,   105,   105,   107,   106,   108,   108,   109,   109,   110,
     110,   111,   111,   112,   113,   113,   114,   114,   114,   115,
     115,   115,   115,   115,   116,   116,   116,   116,   116,   117,
     117,   117,   118,   118,   119,   119,   119,   120,   120,   120,
     121,   121,   122,   122,   123,   123,   124,   125,   126,   126,
     126,   127,   128,   128,   129,   130,   131
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     1,    11,     7,     1,
       1,     2,     4,     1,     3,     3,     5,     3,     1,     1,
       1,     2,     1,     3,     3,     1,     1,     2,     1,     1,
       3,     3,     2,     2,     1,     1,     3,     1,     1,     1,
       3,     3,     3,     0,     5,     1,     1,     1,     3,     1,
       3,     1,     1,     1,     1,     3,     1,     1,     3,     1,
       1,     1,     1,     1,     3,     3,     3,     5,     7,     1,
       2,     3,     3,     3,     1,     2,     3,     1,     1,     1,
       1,     1,     5,     5,     9,     9,     1,     1,     1,     2,
       3,     1,     2,     4,     1,     1,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yystacksize = YYINITDEPTH;
  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;


  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 3:
#line 201 "./net.y"
                  { return (0); }
#line 1586 "y.tab.c"
    break;

  case 7:
#line 216 "./net.y"
                {
		    ParseEndOfMacroDefinition();
		}
#line 1594 "y.tab.c"
    break;

  case 8:
#line 222 "./net.y"
                {
		    ParseEndOfMacroDefinition();
		}
#line 1602 "y.tab.c"
    break;

  case 41:
#line 316 "./net.y"
                    {
			ParseStringAttribute((yyvsp[-2].ast).s, (yyvsp[0].ast).s);
		    }
#line 1610 "y.tab.c"
    break;

  case 42:
#line 322 "./net.y"
                    {
			ParseIntAttribute((yyvsp[-2].ast).s, (yyvsp[0].ast).i);
		    }
#line 1618 "y.tab.c"
    break;

  case 43:
#line 332 "./net.y"
                {
	            ParseFunctionID((yyvsp[0].ast).s);
	        }
#line 1626 "y.tab.c"
    break;

  case 51:
#line 355 "./net.y"
                {
	            ParseArgument((yyvsp[0].ast).s,0);
	        }
#line 1634 "y.tab.c"
    break;

  case 52:
#line 359 "./net.y"
                {
	            ParseArgument((yyvsp[0].ast).s,1);
	        }
#line 1642 "y.tab.c"
    break;

  case 53:
#line 369 "./net.y"
                {
	            ParseComment((yyvsp[0].ast).s);
	        }
#line 1650 "y.tab.c"
    break;

  case 94:
#line 455 "./net.y"
                {
		    ParseLValue((yyvsp[0].ast).s);
		}
#line 1658 "y.tab.c"
    break;

  case 95:
#line 461 "./net.y"
                {
		    ParseRValue((yyvsp[0].ast).s);
		}
#line 1666 "y.tab.c"
    break;

  case 96:
#line 467 "./net.y"
                {
		}
#line 1673 "y.tab.c"
    break;


#line 1677 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 471 "./net.y"



#include "netlex.c"

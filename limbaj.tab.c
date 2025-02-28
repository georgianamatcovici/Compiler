/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "limbaj.y"

#include <iostream>
#include <vector>
#include <cstring>
#include <fstream>
#include "SymTable.h"
extern FILE* yyin;
extern char* yytext;
extern int yylex();

#line 82 "limbaj.tab.c"

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

#include "limbaj.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BGIN = 3,                       /* BGIN  */
  YYSYMBOL_END = 4,                        /* END  */
  YYSYMBOL_ASSIGN = 5,                     /* ASSIGN  */
  YYSYMBOL_GROUP = 6,                      /* GROUP  */
  YYSYMBOL_VISIBILITY = 7,                 /* VISIBILITY  */
  YYSYMBOL_COLL = 8,                       /* COLL  */
  YYSYMBOL_AND = 9,                        /* AND  */
  YYSYMBOL_OR = 10,                        /* OR  */
  YYSYMBOL_EQ = 11,                        /* EQ  */
  YYSYMBOL_LE = 12,                        /* LE  */
  YYSYMBOL_GE = 13,                        /* GE  */
  YYSYMBOL_NE = 14,                        /* NE  */
  YYSYMBOL_ID = 15,                        /* ID  */
  YYSYMBOL_CHAR = 16,                      /* CHAR  */
  YYSYMBOL_NR = 17,                        /* NR  */
  YYSYMBOL_NR_FLOAT = 18,                  /* NR_FLOAT  */
  YYSYMBOL_TYPE = 19,                      /* TYPE  */
  YYSYMBOL_TT = 20,                        /* TT  */
  YYSYMBOL_FF = 21,                        /* FF  */
  YYSYMBOL_IF = 22,                        /* IF  */
  YYSYMBOL_THEN = 23,                      /* THEN  */
  YYSYMBOL_ELSE = 24,                      /* ELSE  */
  YYSYMBOL_WHILE = 25,                     /* WHILE  */
  YYSYMBOL_DO = 26,                        /* DO  */
  YYSYMBOL_REPEAT = 27,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 28,                     /* UNTIL  */
  YYSYMBOL_FOR = 29,                       /* FOR  */
  YYSYMBOL_TO = 30,                        /* TO  */
  YYSYMBOL_CONS = 31,                      /* CONS  */
  YYSYMBOL_NO_RET = 32,                    /* NO_RET  */
  YYSYMBOL_RETURN = 33,                    /* RETURN  */
  YYSYMBOL_NEW = 34,                       /* NEW  */
  YYSYMBOL_THIS = 35,                      /* THIS  */
  YYSYMBOL_COMP = 36,                      /* COMP  */
  YYSYMBOL_PRINT = 37,                     /* PRINT  */
  YYSYMBOL_TYPEOF = 38,                    /* TYPEOF  */
  YYSYMBOL_STRING_LITERAL = 39,            /* STRING_LITERAL  */
  YYSYMBOL_40_ = 40,                       /* '!'  */
  YYSYMBOL_41_ = 41,                       /* '<'  */
  YYSYMBOL_42_ = 42,                       /* '>'  */
  YYSYMBOL_43_ = 43,                       /* '+'  */
  YYSYMBOL_44_ = 44,                       /* '-'  */
  YYSYMBOL_45_ = 45,                       /* '*'  */
  YYSYMBOL_46_ = 46,                       /* '/'  */
  YYSYMBOL_47_ = 47,                       /* '%'  */
  YYSYMBOL_48_ = 48,                       /* '['  */
  YYSYMBOL_49_ = 49,                       /* ']'  */
  YYSYMBOL_50_ = 50,                       /* ';'  */
  YYSYMBOL_51_ = 51,                       /* '('  */
  YYSYMBOL_52_ = 52,                       /* ')'  */
  YYSYMBOL_53_ = 53,                       /* '{'  */
  YYSYMBOL_54_ = 54,                       /* '}'  */
  YYSYMBOL_55_ = 55,                       /* '.'  */
  YYSYMBOL_56_ = 56,                       /* ','  */
  YYSYMBOL_YYACCEPT = 57,                  /* $accept  */
  YYSYMBOL_progr = 58,                     /* progr  */
  YYSYMBOL_class_section = 59,             /* class_section  */
  YYSYMBOL_class = 60,                     /* class  */
  YYSYMBOL_61_1 = 61,                      /* $@1  */
  YYSYMBOL_class_body = 62,                /* class_body  */
  YYSYMBOL_data_members = 63,              /* data_members  */
  YYSYMBOL_constructors = 64,              /* constructors  */
  YYSYMBOL_constructor = 65,               /* constructor  */
  YYSYMBOL_data = 66,                      /* data  */
  YYSYMBOL_function_members = 67,          /* function_members  */
  YYSYMBOL_to_return = 68,                 /* to_return  */
  YYSYMBOL_function = 69,                  /* function  */
  YYSYMBOL_global_var = 70,                /* global_var  */
  YYSYMBOL_global_func = 71,               /* global_func  */
  YYSYMBOL_global_f = 72,                  /* global_f  */
  YYSYMBOL_73_2 = 73,                      /* $@2  */
  YYSYMBOL_74_3 = 74,                      /* $@3  */
  YYSYMBOL_75_4 = 75,                      /* $@4  */
  YYSYMBOL_76_5 = 76,                      /* $@5  */
  YYSYMBOL_77_6 = 77,                      /* $@6  */
  YYSYMBOL_78_7 = 78,                      /* $@7  */
  YYSYMBOL_79_8 = 79,                      /* $@8  */
  YYSYMBOL_80_9 = 80,                      /* $@9  */
  YYSYMBOL_list_param = 81,                /* list_param  */
  YYSYMBOL_list_types = 82,                /* list_types  */
  YYSYMBOL_param_type = 83,                /* param_type  */
  YYSYMBOL_param = 84,                     /* param  */
  YYSYMBOL_list_param_call_cons = 85,      /* list_param_call_cons  */
  YYSYMBOL_param_call_cons = 86,           /* param_call_cons  */
  YYSYMBOL_function_type = 87,             /* function_type  */
  YYSYMBOL_list_param_call = 88,           /* list_param_call  */
  YYSYMBOL_param_call = 89,                /* param_call  */
  YYSYMBOL_main = 90,                      /* main  */
  YYSYMBOL_91_10 = 91,                     /* $@10  */
  YYSYMBOL_list = 92,                      /* list  */
  YYSYMBOL_array = 93,                     /* array  */
  YYSYMBOL_arr = 94,                       /* arr  */
  YYSYMBOL_create_object = 95,             /* create_object  */
  YYSYMBOL_new_object = 96,                /* new_object  */
  YYSYMBOL_aexp = 97,                      /* aexp  */
  YYSYMBOL_e = 98,                         /* e  */
  YYSYMBOL_Exp = 99,                       /* Exp  */
  YYSYMBOL_expr = 100,                     /* expr  */
  YYSYMBOL_bexp = 101,                     /* bexp  */
  YYSYMBOL_b = 102,                        /* b  */
  YYSYMBOL_statement = 103,                /* statement  */
  YYSYMBOL_function_call = 104,            /* function_call  */
  YYSYMBOL_decl = 105,                     /* decl  */
  YYSYMBOL_assign_stmt = 106,              /* assign_stmt  */
  YYSYMBOL_if_stmt = 107,                  /* if_stmt  */
  YYSYMBOL_if_stmt_else = 108,             /* if_stmt_else  */
  YYSYMBOL_if_stmt_no_else = 109,          /* if_stmt_no_else  */
  YYSYMBOL_110_11 = 110,                   /* $@11  */
  YYSYMBOL_while_stmt = 111,               /* while_stmt  */
  YYSYMBOL_112_12 = 112,                   /* $@12  */
  YYSYMBOL_repeat_until = 113,             /* repeat_until  */
  YYSYMBOL_114_13 = 114,                   /* $@13  */
  YYSYMBOL_for_stmt = 115,                 /* for_stmt  */
  YYSYMBOL_116_14 = 116                    /* $@14  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int16 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   804

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  185
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  409

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


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
       2,     2,     2,    40,     2,     2,     2,    47,     2,     2,
      51,    52,    45,    43,    56,    44,    55,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    50,
      41,     2,    42,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    48,     2,    49,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,     2,    54,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    45,    45,    46,    47,    48,    49,    50,    51,    52,
      55,    56,    59,    59,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    78,    79,    81,    82,
      85,    86,    87,    91,    93,    95,    99,   100,   102,   103,
     104,   105,   106,   107,   108,   109,   112,   114,   115,   118,
     119,   122,   121,   134,   133,   143,   142,   152,   151,   160,
     159,   167,   166,   176,   175,   184,   183,   192,   193,   196,
     197,   199,   200,   201,   204,   205,   206,   207,   210,   211,
     214,   215,   216,   217,   218,   220,   221,   222,   223,   225,
     226,   229,   230,   231,   232,   233,   234,   235,   239,   238,
     251,   252,   255,   256,   258,   259,   262,   263,   265,   268,
     270,   271,   272,   273,   274,   275,   278,   279,   280,   281,
     282,   286,   288,   289,   291,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   318,   319,   320,   321,   322,
     323,   324,   325,   327,   329,   332,   333,   334,   335,   338,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   356,   357,   358,   359,   362,   363,   366,   374,   374,
     380,   379,   390,   389,   400,   399
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
  "\"end of file\"", "error", "\"invalid token\"", "BGIN", "END",
  "ASSIGN", "GROUP", "VISIBILITY", "COLL", "AND", "OR", "EQ", "LE", "GE",
  "NE", "ID", "CHAR", "NR", "NR_FLOAT", "TYPE", "TT", "FF", "IF", "THEN",
  "ELSE", "WHILE", "DO", "REPEAT", "UNTIL", "FOR", "TO", "CONS", "NO_RET",
  "RETURN", "NEW", "THIS", "COMP", "PRINT", "TYPEOF", "STRING_LITERAL",
  "'!'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'['", "']'",
  "';'", "'('", "')'", "'{'", "'}'", "'.'", "','", "$accept", "progr",
  "class_section", "class", "$@1", "class_body", "data_members",
  "constructors", "constructor", "data", "function_members", "to_return",
  "function", "global_var", "global_func", "global_f", "$@2", "$@3", "$@4",
  "$@5", "$@6", "$@7", "$@8", "$@9", "list_param", "list_types",
  "param_type", "param", "list_param_call_cons", "param_call_cons",
  "function_type", "list_param_call", "param_call", "main", "$@10", "list",
  "array", "arr", "create_object", "new_object", "aexp", "e", "Exp",
  "expr", "bexp", "b", "statement", "function_call", "decl", "assign_stmt",
  "if_stmt", "if_stmt_else", "if_stmt_no_else", "$@11", "while_stmt",
  "$@12", "repeat_until", "$@13", "for_stmt", "$@14", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-176)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-66)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     465,  -176,    -5,   -39,    11,    17,    33,    52,   465,  -176,
     427,   210,  -176,  -176,     3,   727,    42,    80,   134,    41,
     113,  -176,  -176,   427,   210,  -176,   210,  -176,    91,   168,
    -176,  -176,  -176,    34,  -176,  -176,   181,  -176,  -176,   187,
     195,   205,   233,   280,   249,   254,   148,   148,    98,   748,
     508,   265,  -176,  -176,   327,  -176,  -176,   271,   278,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,   288,   109,   472,    35,
      90,   210,  -176,  -176,  -176,  -176,   294,   753,   112,   332,
    -176,   316,   352,   148,   148,  -176,   351,   319,   239,   155,
      73,   748,   309,   481,   170,  -176,  -176,   148,   148,   382,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
    -176,   148,   148,   148,   148,  -176,  -176,    20,   357,  -176,
     366,  -176,  -176,  -176,  -176,  -176,  -176,  -176,   330,   377,
      -4,   342,   348,   122,  -176,  -176,   361,   159,  -176,  -176,
    -176,  -176,   355,   367,  -176,   362,  -176,   343,   365,   727,
     413,   216,   379,   385,   346,   386,   387,   400,  -176,  -176,
     309,   266,  -176,  -176,   135,  -176,  -176,  -176,  -176,  -176,
    -176,   329,   329,  -176,  -176,  -176,   437,   309,   399,   266,
    -176,  -176,   404,   372,    20,    20,   405,   406,   423,   419,
     316,   424,  -176,   438,  -176,  -176,   461,   462,   453,   434,
     498,   440,   442,   502,  -176,   460,    13,   488,   199,   135,
     145,  -176,  -176,   148,   171,  -176,   466,   468,   469,   500,
     516,  -176,   482,   485,   494,   481,   496,   495,   154,   499,
     423,   549,   510,  -176,  -176,  -176,   201,   555,   558,    16,
     511,   512,   514,   727,   535,   536,  -176,   727,   517,   519,
     148,  -176,   529,  -176,   530,   542,   557,   570,  -176,   260,
     537,   540,   216,  -176,  -176,   572,  -176,   294,  -176,  -176,
    -176,   125,  -176,    -2,  -176,  -176,   423,  -176,  -176,   182,
     585,  -176,   135,   157,  -176,  -176,  -176,   191,  -176,   316,
     543,   547,   673,   174,   727,   560,   289,  -176,   727,   546,
    -176,   727,   727,  -176,   550,   135,  -176,  -176,  -176,  -176,
    -176,   548,   551,   237,   588,  -176,   591,  -176,  -176,    66,
     592,    93,    95,   174,   228,  -176,  -176,   553,   148,   561,
     700,   174,  -176,   331,  -176,   369,   407,   727,   148,   568,
     594,   445,   574,  -176,  -176,  -176,  -176,   575,  -176,  -176,
    -176,   242,  -176,  -176,   261,   571,   608,  -176,   610,   321,
     577,   576,   174,   581,  -176,   612,  -176,   483,   580,   613,
     316,  -176,   521,   727,   619,  -176,   284,  -176,   586,  -176,
    -176,  -176,  -176,  -176,   595,   587,   589,  -176,  -176,   593,
    -176,  -176,   559,   590,  -176,  -176,   604,  -176,   727,  -176,
    -176,   316,  -176,   597,   727,  -176,  -176,   635,  -176
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    98,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,    49,     9,     0,     0,     0,     0,   168,   159,
       0,     1,    11,     0,     0,     6,     0,     5,     0,     0,
      50,     4,    47,   116,   118,   119,     0,   143,   144,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
     109,     0,   121,   123,   124,   100,   152,     0,     0,   147,
     175,   176,   149,   150,   151,    12,     0,     0,     0,     0,
       0,     0,     7,     8,     3,    48,     0,     0,     0,     0,
     117,   102,   159,     0,     0,   182,     0,     0,     0,     0,
     116,     0,   125,   109,     0,    99,   101,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     146,     0,     0,     0,     0,   145,   148,     0,     0,   170,
       0,   169,   162,   166,   167,   164,   165,   163,     0,     0,
       0,     0,     0,     0,    67,    77,     0,     0,     2,   172,
     173,   174,     0,     0,   120,     0,   103,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   115,   132,
     140,   139,   130,   131,     0,   137,   135,   136,   138,   133,
     134,   110,   112,   111,   113,   114,   142,   126,   141,   127,
     128,   129,     0,     0,    14,    15,     0,     0,    16,     0,
       0,     0,   108,     0,    76,    74,     0,     0,    55,     0,
       0,    63,     0,   104,   105,     0,     0,     0,     0,     0,
      91,    93,    94,     0,     0,    89,     0,     0,     0,     0,
       0,    46,     0,     0,     0,     0,     0,     0,    17,     0,
      18,    21,     0,    22,    28,    26,    24,    36,   160,     0,
       0,     0,     0,     0,     0,    51,    68,     0,     0,    59,
       0,   104,     0,   178,     0,     0,     0,     0,    92,     0,
       0,     0,     0,   155,   154,     0,    35,    33,   158,   157,
     156,     0,    13,     0,    20,    27,    19,    23,    29,     0,
      25,    37,     0,    80,    82,    83,   106,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,    66,     0,     0,
     171,     0,     0,   180,     0,     0,    95,    96,    97,   153,
      90,     0,     0,     0,     0,   161,     0,    81,   107,     0,
       0,     0,     0,     0,    38,    39,    40,     0,     0,     0,
       0,     0,    64,     0,    62,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    84,    79,    75,     0,    72,    71,
      85,     0,    69,    86,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,    60,     0,   179,     0,     0,     0,
       0,    32,     0,     0,     0,    87,     0,    88,     0,    42,
      43,    44,    45,    58,     0,     0,     0,   181,   183,     0,
      34,    31,     0,     0,    70,    56,     0,    54,     0,   184,
      30,     0,    52,     0,     0,    73,   177,     0,   185
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -176,  -176,   639,  -176,  -176,  -172,  -165,  -150,   -77,
    -140,  -175,   578,   641,   258,    -8,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,   -69,   337,   285,   463,  -176,   347,
    -176,  -176,   403,    14,  -176,  -143,   -79,  -176,  -176,  -176,
     -42,   -32,   -68,  -176,   -76,   -18,   -48,  -176,   241,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     7,     8,     9,   117,   183,   184,   185,   186,   187,
     188,   329,   189,    10,    11,    12,   294,   295,   243,   244,
     298,   299,   247,   248,   133,   351,   352,   134,   287,   288,
     135,   214,   215,    13,    15,    48,    80,    81,   192,   121,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,   302,    62,   337,    63,   149,    64,   404
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      96,   137,   146,    30,    91,    91,   208,   147,   148,   141,
      16,   195,   155,   231,    17,    93,    30,    29,    30,   228,
     153,   157,    25,   236,    27,    31,    18,   154,    92,    94,
       6,   283,    19,   284,   285,   232,   252,    72,    73,    77,
      74,    91,    91,   128,   230,   233,    68,   196,    20,    18,
     129,   182,    21,    32,   130,    91,    91,   165,   166,   167,
     168,   169,   170,    30,   280,   276,   253,   131,   286,   176,
     178,    91,    91,   171,   172,   173,   174,   175,   232,   160,
     161,   283,    78,   284,   285,   138,   232,   132,   274,    79,
      65,   277,    69,   177,   179,   180,   181,   281,   128,    66,
     292,   347,    95,   347,   296,   129,     3,   229,   348,   130,
     348,   238,   349,    33,   349,    34,    35,    36,    37,    38,
      39,   145,   131,    40,   119,    41,   232,    42,    79,   142,
     143,   258,   225,   128,    43,    44,    45,   260,    46,    67,
     129,    75,   136,   120,   130,   350,   221,   353,   355,    47,
      90,   330,    34,    35,   229,   333,   363,   131,   335,   336,
      96,   273,   154,    90,    70,    34,    35,   256,    37,    38,
      90,   259,    34,    35,   199,    37,    38,   312,   200,   111,
     112,   113,   300,    76,   114,   182,   164,   384,    46,   324,
     218,   325,   326,   145,   367,    46,    82,   219,   372,    47,
     257,   314,   313,   229,   317,   145,    47,     3,   279,   327,
     320,   202,   316,     1,    33,   200,    34,    35,    36,    37,
      38,    39,   159,   261,    40,   328,    41,   262,    42,    29,
     392,   210,   182,   211,   212,    43,    44,    45,    83,    46,
     315,    14,     6,   318,    96,   357,    84,   319,    96,    14,
      47,    28,   360,   255,    90,   403,    34,    35,    85,    37,
      38,   407,   368,   339,    28,   221,    24,   213,    26,    97,
      98,    99,   100,   101,   102,   111,   145,   113,   152,    46,
     114,    71,    96,   356,    86,    96,   359,    96,    96,   342,
      47,   390,   347,   200,   375,    87,    91,     3,   376,   348,
      88,   103,   104,   349,    33,    89,    34,    35,    36,    37,
      38,    39,   307,   377,    40,   110,    41,   376,    42,    96,
     113,   115,   405,   114,    96,    43,    44,    45,   116,    46,
      97,    98,    99,   100,   101,   102,   111,   112,   113,     3,
      47,   114,   118,   332,    96,    69,    33,   144,    34,    35,
      36,    37,    38,    39,   218,    96,    40,    68,    41,    96,
      42,   219,   103,   104,   145,   220,   150,    43,    44,    45,
     151,    46,   190,   381,   107,   108,   109,     3,     6,   205,
     143,   191,    47,   193,    33,   364,    34,    35,    36,    37,
      38,    39,   194,   197,    40,   206,    41,    90,    42,    34,
      35,   198,   162,   163,   203,    43,    44,    45,    97,    46,
      99,   100,   101,   102,   201,     3,   204,   207,   209,   226,
      47,   227,    33,   365,    34,    35,    36,    37,    38,    39,
       1,   216,    40,   164,    41,     3,    42,   217,   222,   223,
     103,   104,     4,    43,    44,    45,     5,    46,    99,   100,
     101,   102,   224,     3,   182,   234,   235,   240,    47,     6,
      33,   366,    34,    35,    36,    37,    38,    39,     1,   237,
      40,     2,    41,     3,    42,   239,   241,   242,   103,   104,
       4,    43,    44,    45,     5,    46,   -57,   245,   122,   123,
     124,     3,   125,   126,   -65,   249,    47,     6,    33,   371,
      34,    35,    36,    37,    38,    39,   128,   250,    40,   251,
      41,   127,    42,   129,   254,   266,   263,   130,   264,    43,
      44,    45,   265,    46,   105,   106,   107,   108,   109,     3,
     131,   267,   268,   158,    47,   269,    33,   387,    34,    35,
      36,    37,    38,    39,   270,   272,    40,   271,    41,   275,
      42,   105,   106,   107,   108,   109,   154,    43,    44,    45,
     278,    46,   273,   282,   290,   289,   291,     3,   293,   -53,
     304,   297,    47,   -61,    33,   391,    34,    35,    36,    37,
      38,    39,   301,   303,    40,   306,    41,   305,    42,   308,
     309,   311,   279,   331,   321,    43,    44,    45,   322,    46,
     334,   338,   340,   343,   341,     3,   344,   346,   358,   370,
      47,   361,    33,   400,    34,    35,    36,    37,    38,    39,
     369,   378,    40,   379,    41,   380,    42,   373,   374,   382,
     383,   385,   388,    43,    44,    45,   386,    46,   393,   389,
     395,   397,   398,     3,   401,   396,   399,    22,    47,    23,
      33,   406,    34,    35,    36,    37,    38,    39,   402,   354,
      40,   394,    41,   246,    42,   310,   345,   156,     0,     0,
       0,    43,    44,    45,     0,    46,     0,     0,     0,     0,
       0,     3,     0,     0,     0,     0,    47,     0,    33,   408,
      34,    35,    36,    37,    38,    39,     0,     0,    40,     0,
      41,     0,    42,     0,     0,     0,   323,     0,     3,    43,
      44,    45,     0,    46,     0,    33,     0,    34,    35,    36,
      37,    38,    39,     0,    47,    40,     0,    41,     0,    42,
       0,     0,     0,   362,     0,     3,    43,    44,    45,     0,
      46,     0,    33,     0,    34,    35,    36,    37,    38,    39,
       0,    47,    40,     0,    41,     0,    42,    97,    98,    99,
     100,   101,   102,    43,    44,    45,     0,    46,    90,   139,
      34,    35,     0,    37,    38,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   103,
     104,     0,   140,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47
};

static const yytype_int16 yycheck[] =
{
      48,    70,    81,    11,    46,    47,   149,    83,    84,    77,
      15,    15,    89,   185,    53,    47,    24,    19,    26,   184,
      88,    89,     8,   188,    10,    11,    15,     7,    46,    47,
      32,    15,    15,    17,    18,   185,    23,    23,    24,     5,
      26,    83,    84,     8,   184,   185,     5,    51,    15,    15,
      15,    31,     0,    50,    19,    97,    98,    99,   100,   101,
     102,   103,   104,    71,   236,   230,    53,    32,    52,   111,
     112,   113,   114,   105,   106,   107,   108,   109,   228,    97,
      98,    15,    48,    17,    18,    71,   236,    52,   228,    55,
      48,   231,    51,   111,   112,   113,   114,   237,     8,    19,
     243,     8,     4,     8,   247,    15,     8,   184,    15,    19,
      15,   190,    19,    15,    19,    17,    18,    19,    20,    21,
      22,    48,    32,    25,    15,    27,   276,    29,    55,    17,
      18,   210,   164,     8,    36,    37,    38,   213,    40,     5,
      15,    50,    52,    34,    19,    52,   154,    52,   323,    51,
      15,   294,    17,    18,   231,   298,   331,    32,   301,   302,
     208,     7,     7,    15,    51,    17,    18,   209,    20,    21,
      15,   213,    17,    18,    52,    20,    21,    52,    56,     9,
      10,    11,   250,    15,    14,    31,    51,   362,    40,    15,
       8,    17,    18,    48,   337,    40,    15,    15,   341,    51,
      55,    19,   271,   280,   283,    48,    51,     8,     7,    35,
     289,    52,    55,     3,    15,    56,    17,    18,    19,    20,
      21,    22,    52,    52,    25,    51,    27,    56,    29,    19,
     373,    15,    31,    17,    18,    36,    37,    38,    51,    40,
     282,     0,    32,    52,   292,   324,    51,    56,   296,     8,
      51,    10,   328,    54,    15,   398,    17,    18,    53,    20,
      21,   404,   338,   305,    23,   273,     8,    51,    10,     9,
      10,    11,    12,    13,    14,     9,    48,    11,    39,    40,
      14,    23,   330,    55,    51,   333,   328,   335,   336,    52,
      51,   370,     8,    56,    52,    15,   338,     8,    56,    15,
      51,    41,    42,    19,    15,    51,    17,    18,    19,    20,
      21,    22,    52,    52,    25,    50,    27,    56,    29,   367,
      11,    50,   401,    14,   372,    36,    37,    38,    50,    40,
       9,    10,    11,    12,    13,    14,     9,    10,    11,     8,
      51,    14,    54,    54,   392,    51,    15,    15,    17,    18,
      19,    20,    21,    22,     8,   403,    25,     5,    27,   407,
      29,    15,    41,    42,    48,    19,    15,    36,    37,    38,
      51,    40,    15,    52,    45,    46,    47,     8,    32,    17,
      18,    15,    51,    53,    15,    54,    17,    18,    19,    20,
      21,    22,    15,    51,    25,    52,    27,    15,    29,    17,
      18,    53,    20,    21,    49,    36,    37,    38,     9,    40,
      11,    12,    13,    14,    53,     8,    49,    52,     5,    15,
      51,    49,    15,    54,    17,    18,    19,    20,    21,    22,
       3,    52,    25,    51,    27,     8,    29,    52,    52,    52,
      41,    42,    15,    36,    37,    38,    19,    40,    11,    12,
      13,    14,    52,     8,    31,    50,    50,    19,    51,    32,
      15,    54,    17,    18,    19,    20,    21,    22,     3,    50,
      25,     6,    27,     8,    29,    51,    15,    15,    41,    42,
      15,    36,    37,    38,    19,    40,    33,    53,    16,    17,
      18,     8,    20,    21,    54,    53,    51,    32,    15,    54,
      17,    18,    19,    20,    21,    22,     8,     5,    25,    49,
      27,    39,    29,    15,    26,    15,    50,    19,    50,    36,
      37,    38,    53,    40,    43,    44,    45,    46,    47,     8,
      32,    15,    50,    52,    51,    50,    15,    54,    17,    18,
      19,    20,    21,    22,    50,    50,    25,    51,    27,    50,
      29,    43,    44,    45,    46,    47,     7,    36,    37,    38,
      50,    40,     7,     5,    52,    54,    52,     8,    33,    33,
      28,    54,    51,    54,    15,    54,    17,    18,    19,    20,
      21,    22,    53,    53,    25,    15,    27,    30,    29,    52,
      50,    19,     7,    33,    51,    36,    37,    38,    51,    40,
      54,    51,    54,    15,    53,     8,    15,    15,    55,    15,
      51,    50,    15,    54,    17,    18,    19,    20,    21,    22,
      52,    50,    25,    15,    27,    15,    29,    53,    53,    52,
      54,    50,    52,    36,    37,    38,    24,    40,    19,    26,
      54,    54,    53,     8,    54,    50,    53,     8,    51,     8,
      15,    54,    17,    18,    19,    20,    21,    22,    54,   322,
      25,   376,    27,   200,    29,   262,   319,    89,    -1,    -1,
      -1,    36,    37,    38,    -1,    40,    -1,    -1,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    51,    -1,    15,    54,
      17,    18,    19,    20,    21,    22,    -1,    -1,    25,    -1,
      27,    -1,    29,    -1,    -1,    -1,    33,    -1,     8,    36,
      37,    38,    -1,    40,    -1,    15,    -1,    17,    18,    19,
      20,    21,    22,    -1,    51,    25,    -1,    27,    -1,    29,
      -1,    -1,    -1,    33,    -1,     8,    36,    37,    38,    -1,
      40,    -1,    15,    -1,    17,    18,    19,    20,    21,    22,
      -1,    51,    25,    -1,    27,    -1,    29,     9,    10,    11,
      12,    13,    14,    36,    37,    38,    -1,    40,    15,    16,
      17,    18,    -1,    20,    21,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      42,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     6,     8,    15,    19,    32,    58,    59,    60,
      70,    71,    72,    90,   105,    91,    15,    53,    15,    15,
      15,     0,    60,    70,    71,    90,    71,    90,   105,    19,
      72,    90,    50,    15,    17,    18,    19,    20,    21,    22,
      25,    27,    29,    36,    37,    38,    40,    51,    92,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   111,   113,   115,    48,    19,     5,     5,    51,
      51,    71,    90,    90,    90,    50,    15,     5,    48,    55,
      93,    94,    15,    51,    51,    53,    51,    15,    51,    51,
      15,    97,   102,    98,   102,     4,   103,     9,    10,    11,
      12,    13,    14,    41,    42,    43,    44,    45,    46,    47,
      50,     9,    10,    11,    14,    50,    50,    61,    54,    15,
      34,    96,    16,    17,    18,    20,    21,    39,     8,    15,
      19,    32,    52,    81,    84,    87,    52,    81,    90,    16,
      39,    99,    17,    18,    15,    48,    93,   101,   101,   114,
      15,    51,    39,    99,     7,    66,    69,    99,    52,    52,
     102,   102,    20,    21,    51,    97,    97,    97,    97,    97,
      97,    98,    98,    98,    98,    98,    97,   102,    97,   102,
     102,   102,    31,    62,    63,    64,    65,    66,    67,    69,
      15,    15,    95,    53,    15,    15,    51,    51,    53,    52,
      56,    53,    52,    49,    49,    17,    52,    52,    92,     5,
      15,    17,    18,    51,    88,    89,    52,    52,     8,    15,
      19,    72,    52,    52,    52,    98,    15,    49,    64,    66,
      67,    63,    65,    67,    50,    50,    64,    50,    93,    51,
      19,    15,    15,    75,    76,    53,    84,    79,    80,    53,
       5,    49,    23,    53,    26,    54,    97,    55,    93,    97,
     101,    52,    56,    50,    50,    53,    15,    15,    50,    50,
      50,    51,    50,     7,    67,    50,    64,    67,    50,     7,
      63,    67,     5,    15,    17,    18,    52,    85,    86,    54,
      52,    52,    92,    33,    73,    74,    92,    54,    77,    78,
      99,    53,   110,    53,    28,    30,    15,    52,    52,    50,
      89,    19,    52,    81,    19,    97,    55,    93,    52,    56,
      93,    51,    51,    33,    15,    17,    18,    35,    51,    68,
      92,    33,    54,    92,    54,    92,    92,   112,    51,    97,
      54,    53,    52,    15,    15,    86,    15,     8,    15,    19,
      52,    82,    83,    52,    82,    68,    55,    93,    55,    97,
     101,    50,    33,    68,    54,    54,    54,    92,   101,    52,
      15,    54,    92,    53,    53,    52,    56,    52,    50,    15,
      15,    52,    52,    54,    68,    50,    24,    54,    52,    26,
      93,    54,    92,    19,    83,    54,    50,    54,    53,    53,
      54,    54,    54,    92,   116,    93,    54,    92,    54
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    57,    58,    58,    58,    58,    58,    58,    58,    58,
      59,    59,    61,    60,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    63,    63,    64,    64,
      65,    65,    65,    66,    66,    66,    67,    67,    68,    68,
      68,    68,    68,    68,    68,    68,    69,    70,    70,    71,
      71,    73,    72,    74,    72,    75,    72,    76,    72,    77,
      72,    78,    72,    79,    72,    80,    72,    81,    81,    82,
      82,    83,    83,    83,    84,    84,    84,    84,    85,    85,
      86,    86,    86,    86,    86,    87,    87,    87,    87,    88,
      88,    89,    89,    89,    89,    89,    89,    89,    91,    90,
      92,    92,    93,    93,    94,    94,    95,    95,    96,    97,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    99,   100,   100,   101,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   103,   103,   103,   103,   103,
     103,   103,   103,   104,   104,   104,   104,   104,   104,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   106,   106,   106,   106,   107,   107,   108,   110,   109,
     112,   111,   114,   113,   116,   115
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     2,     2,     2,     3,     3,     1,
       1,     2,     0,     7,     1,     1,     1,     2,     2,     3,
       3,     2,     2,     3,     2,     3,     2,     3,     2,     3,
       8,     7,     6,     3,     7,     3,     2,     3,     1,     1,
       1,     2,     3,     3,     3,     3,     2,     2,     3,     1,
       2,     0,    12,     0,    11,     0,    11,     0,    10,     0,
       9,     0,     8,     0,     8,     0,     7,     1,     3,     1,
       3,     1,     1,     5,     2,     6,     2,     1,     1,     3,
       1,     2,     1,     1,     3,     6,     6,     7,     7,     1,
       3,     1,     2,     1,     1,     3,     3,     3,     0,     4,
       1,     2,     1,     2,     3,     3,     3,     4,     2,     1,
       3,     3,     3,     3,     3,     3,     1,     2,     1,     1,
       3,     1,     1,     1,     1,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     2,     2,     1,     2,     1,
       1,     1,     1,     6,     5,     5,     5,     5,     5,     2,
       6,     8,     4,     4,     4,     4,     4,     4,     2,     4,
       4,     6,     3,     3,     3,     1,     1,    12,     0,     8,
       0,     9,     0,     9,     0,    13
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* progr: class_section global_var global_func main  */
#line 45 "limbaj.y"
                                                   {CorrectProgram();}
#line 1534 "limbaj.tab.c"
    break;

  case 3: /* progr: global_var global_func main  */
#line 46 "limbaj.y"
                                     {CorrectProgram();}
#line 1540 "limbaj.tab.c"
    break;

  case 4: /* progr: global_func main  */
#line 47 "limbaj.y"
                          {CorrectProgram();}
#line 1546 "limbaj.tab.c"
    break;

  case 5: /* progr: global_var main  */
#line 48 "limbaj.y"
                         {CorrectProgram();}
#line 1552 "limbaj.tab.c"
    break;

  case 6: /* progr: class_section main  */
#line 49 "limbaj.y"
                            {CorrectProgram();}
#line 1558 "limbaj.tab.c"
    break;

  case 7: /* progr: class_section global_var main  */
#line 50 "limbaj.y"
                                       {CorrectProgram();}
#line 1564 "limbaj.tab.c"
    break;

  case 8: /* progr: class_section global_func main  */
#line 51 "limbaj.y"
                                        {CorrectProgram();}
#line 1570 "limbaj.tab.c"
    break;

  case 9: /* progr: main  */
#line 52 "limbaj.y"
              {CorrectProgram();}
#line 1576 "limbaj.tab.c"
    break;

  case 12: /* $@1: %empty  */
#line 59 "limbaj.y"
                     { AddClass((yyvsp[-1].string)); AddScope((yyvsp[-1].string));     }
#line 1582 "limbaj.tab.c"
    break;

  case 13: /* class: GROUP ID '[' $@1 class_body ']' ';'  */
#line 60 "limbaj.y"
                    { GoToMain();}
#line 1588 "limbaj.tab.c"
    break;

  case 33: /* data: VISIBILITY TYPE ID  */
#line 91 "limbaj.y"
                          {AddVar((yyvsp[-1].string), (yyvsp[0].string)); }
#line 1594 "limbaj.tab.c"
    break;

  case 34: /* data: VISIBILITY COLL '{' TYPE '}' ID array  */
#line 93 "limbaj.y"
                                              {AddArray((yyvsp[-3].string), (yyvsp[-1].string));}
#line 1600 "limbaj.tab.c"
    break;

  case 35: /* data: VISIBILITY ID ID  */
#line 95 "limbaj.y"
                        {AddVar((yyvsp[-1].string), (yyvsp[0].string));}
#line 1606 "limbaj.tab.c"
    break;

  case 51: /* $@2: %empty  */
#line 122 "limbaj.y"
{
  AddFunction((yyvsp[-5].string),(yyvsp[-4].string), GetParams(), GetScopeName());
                            
     AddScope((yyvsp[-4].string));    
        AddVarFunc(GetParams());     SetParams();
  
}
#line 1618 "limbaj.tab.c"
    break;

  case 52: /* global_f: TYPE ID '(' list_param ')' '{' $@2 list RETURN to_return ';' '}'  */
#line 130 "limbaj.y"
 { 
     GoToMain();
}
#line 1626 "limbaj.tab.c"
    break;

  case 53: /* $@3: %empty  */
#line 134 "limbaj.y"
{   AddFunction((yyvsp[-5].string),(yyvsp[-4].string), GetParams(), GetScopeName());
     AddScope((yyvsp[-4].string));       
        AddVarFunc(GetParams());  SetParams();  
}
#line 1635 "limbaj.tab.c"
    break;

  case 54: /* global_f: TYPE ID '(' list_param ')' '{' $@3 RETURN to_return ';' '}'  */
#line 139 "limbaj.y"
{
     GoToMain();
}
#line 1643 "limbaj.tab.c"
    break;

  case 55: /* $@4: %empty  */
#line 143 "limbaj.y"
{ AddFunction((yyvsp[-4].string),(yyvsp[-3].string), GetParams(), GetScopeName());
    AddScope((yyvsp[-3].string));   
}
#line 1651 "limbaj.tab.c"
    break;

  case 56: /* global_f: TYPE ID '(' ')' '{' $@4 list RETURN to_return ';' '}'  */
#line 148 "limbaj.y"
 {
     GoToMain();
}
#line 1659 "limbaj.tab.c"
    break;

  case 57: /* $@5: %empty  */
#line 152 "limbaj.y"
{ AddFunction((yyvsp[-4].string),(yyvsp[-3].string), GetParams(), GetScopeName());
   AddScope((yyvsp[-3].string));    
}
#line 1667 "limbaj.tab.c"
    break;

  case 58: /* global_f: TYPE ID '(' ')' '{' $@5 RETURN to_return ';' '}'  */
#line 156 "limbaj.y"
{ 
     GoToMain();
}
#line 1675 "limbaj.tab.c"
    break;

  case 59: /* $@6: %empty  */
#line 160 "limbaj.y"
{ AddFunction("Null",(yyvsp[-4].string), GetParams(), GetScopeName());
  AddScope((yyvsp[-4].string));  
     AddVarFunc(GetParams());       SetParams();   
}
#line 1684 "limbaj.tab.c"
    break;

  case 60: /* global_f: NO_RET ID '(' list_param ')' '{' $@6 list '}'  */
#line 164 "limbaj.y"
                  {GoToMain();}
#line 1690 "limbaj.tab.c"
    break;

  case 61: /* $@7: %empty  */
#line 167 "limbaj.y"
{ AddFunction("Null",(yyvsp[-4].string), GetParams(), GetScopeName());
      AddScope((yyvsp[-4].string));    
         AddVarFunc(GetParams());       SetParams();   
}
#line 1699 "limbaj.tab.c"
    break;

  case 62: /* global_f: NO_RET ID '(' list_param ')' '{' $@7 '}'  */
#line 172 "limbaj.y"
{
       GoToMain();
}
#line 1707 "limbaj.tab.c"
    break;

  case 63: /* $@8: %empty  */
#line 176 "limbaj.y"
{ AddFunction("Null",(yyvsp[-3].string), GetParams(), GetScopeName());
      AddScope((yyvsp[-3].string));       
}
#line 1715 "limbaj.tab.c"
    break;

  case 64: /* global_f: NO_RET ID '(' ')' '{' $@8 list '}'  */
#line 180 "limbaj.y"
{
     GoToMain();
}
#line 1723 "limbaj.tab.c"
    break;

  case 65: /* $@9: %empty  */
#line 184 "limbaj.y"
{ AddFunction("Null",(yyvsp[-3].string), GetParams(), GetScopeName());
     AddScope((yyvsp[-3].string)); 
}
#line 1731 "limbaj.tab.c"
    break;

  case 66: /* global_f: NO_RET ID '(' ')' '{' $@9 '}'  */
#line 187 "limbaj.y"
{
       GoToMain();
}
#line 1739 "limbaj.tab.c"
    break;

  case 74: /* param: TYPE ID  */
#line 204 "limbaj.y"
                {AddParam((yyvsp[-1].string), (yyvsp[0].string));}
#line 1745 "limbaj.tab.c"
    break;

  case 76: /* param: ID ID  */
#line 206 "limbaj.y"
              {AddParam((yyvsp[-1].string), (yyvsp[0].string));}
#line 1751 "limbaj.tab.c"
    break;

  case 91: /* param_call: ID  */
#line 229 "limbaj.y"
                {AddCallParam((yyvsp[0].string));}
#line 1757 "limbaj.tab.c"
    break;

  case 93: /* param_call: NR  */
#line 231 "limbaj.y"
           {AddCallParamInt((yyvsp[0].intval));}
#line 1763 "limbaj.tab.c"
    break;

  case 94: /* param_call: NR_FLOAT  */
#line 232 "limbaj.y"
                  {AddCallParamFloat((yyvsp[0].floatval));}
#line 1769 "limbaj.tab.c"
    break;

  case 98: /* $@10: %empty  */
#line 239 "limbaj.y"
{    AddScope("main");
     
     
}
#line 1778 "limbaj.tab.c"
    break;

  case 99: /* main: BGIN $@10 list END  */
#line 245 "limbaj.y"
{     
   GoToMain();     
}
#line 1786 "limbaj.tab.c"
    break;

  case 109: /* aexp: e  */
#line 268 "limbaj.y"
               { if ((yyvsp[0].NODE) == nullptr) {} else (yyval.NODE)=(yyvsp[0].NODE);}
#line 1792 "limbaj.tab.c"
    break;

  case 110: /* e: e '+' e  */
#line 270 "limbaj.y"
               { CheckTypes((yyvsp[-2].NODE),(yyvsp[0].NODE), "+");  (yyval.NODE)=NewNodeString("+", NodeType::OPERATOR, (yyvsp[-2].NODE), (yyvsp[0].NODE));}
#line 1798 "limbaj.tab.c"
    break;

  case 111: /* e: e '*' e  */
#line 271 "limbaj.y"
               { CheckTypes((yyvsp[-2].NODE),(yyvsp[0].NODE), "*");  (yyval.NODE)=NewNodeString("*", NodeType::OPERATOR, (yyvsp[-2].NODE), (yyvsp[0].NODE));}
#line 1804 "limbaj.tab.c"
    break;

  case 112: /* e: e '-' e  */
#line 272 "limbaj.y"
               {   CheckTypes((yyvsp[-2].NODE),(yyvsp[0].NODE), "-");   (yyval.NODE)=NewNodeString("-", NodeType::OPERATOR, (yyvsp[-2].NODE), (yyvsp[0].NODE));}
#line 1810 "limbaj.tab.c"
    break;

  case 113: /* e: e '/' e  */
#line 273 "limbaj.y"
               {   CheckTypes((yyvsp[-2].NODE),(yyvsp[0].NODE), "/");  (yyval.NODE)=NewNodeString("/", NodeType::OPERATOR, (yyvsp[-2].NODE), (yyvsp[0].NODE));}
#line 1816 "limbaj.tab.c"
    break;

  case 114: /* e: e '%' e  */
#line 274 "limbaj.y"
               {  CheckTypes((yyvsp[-2].NODE),(yyvsp[0].NODE), "%");  (yyval.NODE)=NewNodeString("%", NodeType::OPERATOR, (yyvsp[-2].NODE), (yyvsp[0].NODE));}
#line 1822 "limbaj.tab.c"
    break;

  case 115: /* e: '(' e ')'  */
#line 275 "limbaj.y"
               { if ((yyvsp[-1].NODE) == nullptr) {
  
} else (yyval.NODE)=(yyvsp[-1].NODE);}
#line 1830 "limbaj.tab.c"
    break;

  case 116: /* e: ID  */
#line 278 "limbaj.y"
          {  check_ifDefined((yyvsp[0].string), 1); (yyval.NODE)=NewNodeString((yyvsp[0].string), NodeType::IDENTIFIER, nullptr, nullptr); }
#line 1836 "limbaj.tab.c"
    break;

  case 117: /* e: ID array  */
#line 279 "limbaj.y"
               { check_ifDefined((yyvsp[-1].string), 3); (yyval.NODE)=NewNodeString((yyvsp[-1].string), NodeType::IDENTIFIER, nullptr, nullptr); }
#line 1842 "limbaj.tab.c"
    break;

  case 118: /* e: NR  */
#line 280 "limbaj.y"
          {  (yyval.NODE)=NewNode((yyvsp[0].intval), NodeType::INT, nullptr, nullptr); }
#line 1848 "limbaj.tab.c"
    break;

  case 119: /* e: NR_FLOAT  */
#line 281 "limbaj.y"
               { (yyval.NODE)=NewNode((yyvsp[0].floatval), NodeType::FLOAT, nullptr, nullptr);  }
#line 1854 "limbaj.tab.c"
    break;

  case 120: /* e: ID '.' ID  */
#line 282 "limbaj.y"
                { check_ifDefined((yyvsp[-2].string), 1); (yyval.NODE)=NewNodeString((yyvsp[-2].string), NodeType::IDENTIFIER, nullptr, nullptr); }
#line 1860 "limbaj.tab.c"
    break;

  case 121: /* Exp: expr  */
#line 286 "limbaj.y"
         {if ((yyvsp[0].NODE) == nullptr) {} else (yyval.NODE)=(yyvsp[0].NODE);}
#line 1866 "limbaj.tab.c"
    break;

  case 122: /* expr: aexp  */
#line 288 "limbaj.y"
           {if ((yyvsp[0].NODE) == nullptr) {} else (yyval.NODE)=(yyvsp[0].NODE);}
#line 1872 "limbaj.tab.c"
    break;

  case 123: /* expr: bexp  */
#line 289 "limbaj.y"
          {if ((yyvsp[0].NODE) == nullptr) {} else (yyval.NODE)=(yyvsp[0].NODE);}
#line 1878 "limbaj.tab.c"
    break;

  case 124: /* bexp: b  */
#line 291 "limbaj.y"
         {if ((yyvsp[0].NODE) == nullptr) {} else (yyval.NODE)=(yyvsp[0].NODE); }
#line 1884 "limbaj.tab.c"
    break;

  case 125: /* b: '!' b  */
#line 293 "limbaj.y"
          { (yyval.NODE)=NewNodeString("!", NodeType::OPERATOR, (yyvsp[0].NODE), nullptr);}
#line 1890 "limbaj.tab.c"
    break;

  case 126: /* b: b AND b  */
#line 294 "limbaj.y"
            {  (yyval.NODE)=NewNodeString("&&", NodeType::OPERATOR, (yyvsp[-2].NODE), (yyvsp[0].NODE));}
#line 1896 "limbaj.tab.c"
    break;

  case 127: /* b: b OR b  */
#line 295 "limbaj.y"
            {  (yyval.NODE)=NewNodeString("||", NodeType::OPERATOR, (yyvsp[-2].NODE), (yyvsp[0].NODE));}
#line 1902 "limbaj.tab.c"
    break;

  case 128: /* b: b EQ b  */
#line 296 "limbaj.y"
           { (yyval.NODE)=NewNodeString("==", NodeType::OPERATOR, (yyvsp[-2].NODE), (yyvsp[0].NODE));}
#line 1908 "limbaj.tab.c"
    break;

  case 129: /* b: b NE b  */
#line 297 "limbaj.y"
           { (yyval.NODE)=NewNodeString("!=", NodeType::OPERATOR, (yyvsp[-2].NODE), (yyvsp[0].NODE));}
#line 1914 "limbaj.tab.c"
    break;

  case 130: /* b: aexp EQ TT  */
#line 298 "limbaj.y"
               { AST* n=NewNode((yyvsp[0].BOOL), NodeType::BOOL, nullptr, nullptr); (yyval.NODE)=NewNodeString("==", NodeType::OPERATOR, (yyvsp[-2].NODE), n);}
#line 1920 "limbaj.tab.c"
    break;

  case 131: /* b: aexp EQ FF  */
#line 299 "limbaj.y"
               { AST* n=NewNode((yyvsp[0].BOOL), NodeType::BOOL, nullptr, nullptr); (yyval.NODE)=NewNodeString("==", NodeType::OPERATOR, (yyvsp[-2].NODE), n);}
#line 1926 "limbaj.tab.c"
    break;

  case 132: /* b: '(' b ')'  */
#line 300 "limbaj.y"
             { if ((yyvsp[-1].NODE) == nullptr) {} else (yyval.NODE)=(yyvsp[-1].NODE);}
#line 1932 "limbaj.tab.c"
    break;

  case 133: /* b: aexp '<' aexp  */
#line 301 "limbaj.y"
                  { (yyval.NODE)=NewNodeString("<", NodeType::OPERATOR, (yyvsp[-2].NODE), (yyvsp[0].NODE));}
#line 1938 "limbaj.tab.c"
    break;

  case 134: /* b: aexp '>' aexp  */
#line 302 "limbaj.y"
                  { (yyval.NODE)=NewNodeString(">", NodeType::OPERATOR, (yyvsp[-2].NODE), (yyvsp[0].NODE));}
#line 1944 "limbaj.tab.c"
    break;

  case 135: /* b: aexp LE aexp  */
#line 303 "limbaj.y"
                 { (yyval.NODE)=NewNodeString("<=", NodeType::OPERATOR, (yyvsp[-2].NODE), (yyvsp[0].NODE));}
#line 1950 "limbaj.tab.c"
    break;

  case 136: /* b: aexp GE aexp  */
#line 304 "limbaj.y"
                 { (yyval.NODE)=NewNodeString(">=", NodeType::OPERATOR, (yyvsp[-2].NODE), (yyvsp[0].NODE));}
#line 1956 "limbaj.tab.c"
    break;

  case 137: /* b: aexp EQ aexp  */
#line 305 "limbaj.y"
                 { (yyval.NODE)=NewNodeString("==", NodeType::OPERATOR, (yyvsp[-2].NODE), (yyvsp[0].NODE));}
#line 1962 "limbaj.tab.c"
    break;

  case 138: /* b: aexp NE aexp  */
#line 306 "limbaj.y"
                 { (yyval.NODE)=NewNodeString("!=", NodeType::OPERATOR, (yyvsp[-2].NODE), (yyvsp[0].NODE));}
#line 1968 "limbaj.tab.c"
    break;

  case 139: /* b: aexp OR b  */
#line 307 "limbaj.y"
              { (yyval.NODE)=NewNodeString("||", NodeType::OPERATOR, (yyvsp[-2].NODE), (yyvsp[0].NODE));}
#line 1974 "limbaj.tab.c"
    break;

  case 140: /* b: aexp AND b  */
#line 308 "limbaj.y"
               { (yyval.NODE)=NewNodeString("&&", NodeType::OPERATOR, (yyvsp[-2].NODE), (yyvsp[0].NODE));}
#line 1980 "limbaj.tab.c"
    break;

  case 141: /* b: b OR aexp  */
#line 309 "limbaj.y"
              { (yyval.NODE)=NewNodeString("||", NodeType::OPERATOR, (yyvsp[-2].NODE), (yyvsp[0].NODE));}
#line 1986 "limbaj.tab.c"
    break;

  case 142: /* b: b AND aexp  */
#line 310 "limbaj.y"
               { (yyval.NODE)=NewNodeString("&&", NodeType::OPERATOR, (yyvsp[-2].NODE), (yyvsp[0].NODE));}
#line 1992 "limbaj.tab.c"
    break;

  case 143: /* b: TT  */
#line 311 "limbaj.y"
        { (yyval.NODE)=NewNode((yyvsp[0].BOOL), NodeType::BOOL, nullptr, nullptr);}
#line 1998 "limbaj.tab.c"
    break;

  case 144: /* b: FF  */
#line 312 "limbaj.y"
       { (yyval.NODE)=NewNode((yyvsp[0].BOOL), NodeType::BOOL, nullptr, nullptr);}
#line 2004 "limbaj.tab.c"
    break;

  case 153: /* function_call: COMP ID '(' list_param_call ')' ';'  */
#line 327 "limbaj.y"
                                                    {check_ifDefined((yyvsp[-4].string), 2);  CheckFuncCallTypes((yyvsp[-4].string), GetCallParams());
                                                       SetCallParams();}
#line 2011 "limbaj.tab.c"
    break;

  case 154: /* function_call: PRINT '(' Exp ')' ';'  */
#line 329 "limbaj.y"
                                        {string type=getTypeExpr((yyvsp[-2].NODE)); double res=evaluate((yyvsp[-2].NODE)); if(res!=INT_MAX && !getError()) {if(type!="Bool" ) cout<<res<<endl;
                 else {if(res==1) cout<<"true"<<endl; else cout<<"false"<<endl;}}
                }
#line 2019 "limbaj.tab.c"
    break;

  case 155: /* function_call: PRINT '(' STRING_LITERAL ')' ';'  */
#line 332 "limbaj.y"
                                                   {cout<<(yyvsp[-2].string)<<endl;}
#line 2025 "limbaj.tab.c"
    break;

  case 156: /* function_call: TYPEOF '(' Exp ')' ';'  */
#line 333 "limbaj.y"
                                          {string type=getTypeExpr((yyvsp[-2].NODE)); if(type!="") cout<<type<<endl; }
#line 2031 "limbaj.tab.c"
    break;

  case 159: /* decl: TYPE ID  */
#line 339 "limbaj.y"
{
    
     AddVar((yyvsp[-1].string), (yyvsp[0].string));
}
#line 2040 "limbaj.tab.c"
    break;

  case 160: /* decl: COLL '{' TYPE '}' ID array  */
#line 343 "limbaj.y"
                                   {AddArray((yyvsp[-3].string), (yyvsp[-1].string));  }
#line 2046 "limbaj.tab.c"
    break;

  case 161: /* decl: COLL '{' TYPE '}' ID array ASSIGN aexp  */
#line 344 "limbaj.y"
                                               {AddArray((yyvsp[-5].string), (yyvsp[-3].string)); }
#line 2052 "limbaj.tab.c"
    break;

  case 162: /* decl: TYPE ID ASSIGN CHAR  */
#line 345 "limbaj.y"
                           {AddVar((yyvsp[-3].string), (yyvsp[-2].string)); checkAssignChar((yyvsp[-3].string)); SetValue((yyvsp[-2].string), (yyvsp[0].ch));}
#line 2058 "limbaj.tab.c"
    break;

  case 163: /* decl: TYPE ID ASSIGN STRING_LITERAL  */
#line 346 "limbaj.y"
                                     {AddVar((yyvsp[-3].string), (yyvsp[-2].string)); checkAssignStringLiteral((yyvsp[-3].string)); SetValueString((yyvsp[-2].string), (yyvsp[0].string));}
#line 2064 "limbaj.tab.c"
    break;

  case 164: /* decl: TYPE ID ASSIGN TT  */
#line 347 "limbaj.y"
                         { AddVar((yyvsp[-3].string), (yyvsp[-2].string)); checkAssignBool((yyvsp[-3].string)); SetValue((yyvsp[-2].string), (yyvsp[0].BOOL));}
#line 2070 "limbaj.tab.c"
    break;

  case 165: /* decl: TYPE ID ASSIGN FF  */
#line 348 "limbaj.y"
                         { AddVar((yyvsp[-3].string), (yyvsp[-2].string)); checkAssignBool((yyvsp[-3].string)); SetValue((yyvsp[-2].string), (yyvsp[0].BOOL));}
#line 2076 "limbaj.tab.c"
    break;

  case 166: /* decl: TYPE ID ASSIGN NR  */
#line 349 "limbaj.y"
                         { AddVar((yyvsp[-3].string), (yyvsp[-2].string)); checkNR((yyvsp[-2].string)); SetValue((yyvsp[-2].string), (yyvsp[0].intval)); }
#line 2082 "limbaj.tab.c"
    break;

  case 167: /* decl: TYPE ID ASSIGN NR_FLOAT  */
#line 350 "limbaj.y"
                               { AddVar((yyvsp[-3].string), (yyvsp[-2].string)); checkNR_FLOAT((yyvsp[-2].string)); SetValue((yyvsp[-2].string), (yyvsp[0].floatval));}
#line 2088 "limbaj.tab.c"
    break;

  case 168: /* decl: ID ID  */
#line 351 "limbaj.y"
             {AddVar((yyvsp[-1].string), (yyvsp[0].string));}
#line 2094 "limbaj.tab.c"
    break;

  case 169: /* decl: ID ID ASSIGN new_object  */
#line 352 "limbaj.y"
                               {AddVar((yyvsp[-3].string), (yyvsp[-2].string));}
#line 2100 "limbaj.tab.c"
    break;

  case 170: /* decl: ID ID ASSIGN ID  */
#line 353 "limbaj.y"
                        {AddVar((yyvsp[-3].string), (yyvsp[-2].string));}
#line 2106 "limbaj.tab.c"
    break;

  case 171: /* assign_stmt: ID '[' NR ']' ASSIGN Exp  */
#line 356 "limbaj.y"
                                       {check_ifDefined((yyvsp[-5].string), 3); checkAssignExp((yyvsp[-5].string), (yyvsp[0].NODE)); double res=evaluate((yyvsp[0].NODE)); if(res!=INT_MAX) SetValueArray((yyvsp[-5].string),(yyvsp[-3].intval),res);}
#line 2112 "limbaj.tab.c"
    break;

  case 172: /* assign_stmt: ID ASSIGN CHAR  */
#line 357 "limbaj.y"
                              {check_ifDefined((yyvsp[-2].string), 1); checkAssignChar((yyvsp[-2].string)); SetValue((yyvsp[-2].string), (yyvsp[0].ch));}
#line 2118 "limbaj.tab.c"
    break;

  case 173: /* assign_stmt: ID ASSIGN STRING_LITERAL  */
#line 358 "limbaj.y"
                                       {check_ifDefined((yyvsp[-2].string), 1); checkAssignStringLiteral((yyvsp[-2].string)); SetValueString((yyvsp[-2].string), (yyvsp[0].string));}
#line 2124 "limbaj.tab.c"
    break;

  case 174: /* assign_stmt: ID ASSIGN Exp  */
#line 359 "limbaj.y"
                            {check_ifDefined((yyvsp[-2].string), 1); checkAssignExp((yyvsp[-2].string), (yyvsp[0].NODE));double res=evaluate((yyvsp[0].NODE)); if(res!=INT_MAX) SetValue((yyvsp[-2].string),res);}
#line 2130 "limbaj.tab.c"
    break;

  case 178: /* $@11: %empty  */
#line 374 "limbaj.y"
                                       {AddScope("block"); }
#line 2136 "limbaj.tab.c"
    break;

  case 179: /* if_stmt_no_else: IF '(' bexp ')' '{' $@11 list '}'  */
#line 375 "limbaj.y"
         {GoToMain();}
#line 2142 "limbaj.tab.c"
    break;

  case 180: /* $@12: %empty  */
#line 380 "limbaj.y"
{   AddScope("block");
      
}
#line 2150 "limbaj.tab.c"
    break;

  case 181: /* while_stmt: WHILE '(' bexp ')' DO '{' $@12 list '}'  */
#line 384 "limbaj.y"
{     GoToMain();
     
}
#line 2158 "limbaj.tab.c"
    break;

  case 182: /* $@13: %empty  */
#line 390 "limbaj.y"
{
    AddScope("block");       
}
#line 2166 "limbaj.tab.c"
    break;

  case 183: /* repeat_until: REPEAT '{' $@13 list '}' UNTIL '(' bexp ')'  */
#line 394 "limbaj.y"
{      GoToMain();
     
}
#line 2174 "limbaj.tab.c"
    break;

  case 184: /* $@14: %empty  */
#line 400 "limbaj.y"
{
     AddScope("block");
}
#line 2182 "limbaj.tab.c"
    break;

  case 185: /* for_stmt: FOR '(' ID ASSIGN aexp TO aexp ')' DO '{' $@14 list '}'  */
#line 404 "limbaj.y"
{     GoToMain();
     
}
#line 2190 "limbaj.tab.c"
    break;


#line 2194 "limbaj.tab.c"

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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 411 "limbaj.y"


void print(const char* expr){
     cout << expr << endl;
}

int main(int argc, char** argv){
     Initialize();
     yyin=fopen(argv[1],"r");
   
     yyparse();
    std::ofstream file("output.txt");
    if (!file) {
        std::cerr << "Eroare la deschidere!" << std::endl;
    }
     PrintAllScopes(file);
     Delete();
} 

// A Bison parser, made by GNU Bison 3.4.1.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2019 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.





#include "simple.hh"


// Unqualified %code blocks.
#line 25 "grammar.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "icode.hh"
#include "symtab.hh"

using namespace std;
extern yy::simple_parser::symbol_type yylex(); 
extern char * yytext;
static int stptr = 0;

extern yy::location loc;

#define INSTRUCTION_NEXT  (itab->tab.size ())
#define INSTRUCTION_LAST  (itab->tab.size () - 1)


#line 65 "simple.cc"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 159 "simple.cc"


  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  simple_parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
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
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  simple_parser::simple_parser (symtab_t * symtab_yyarg, itab_t * itab_yyarg, char * static_mem_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      symtab (symtab_yyarg),
      itab (itab_yyarg),
      static_mem (static_mem_yyarg)
  {}

  simple_parser::~simple_parser ()
  {}

  simple_parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  simple_parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  simple_parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  simple_parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  simple_parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  simple_parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  simple_parser::symbol_number_type
  simple_parser::by_state::type_get () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  simple_parser::stack_symbol_type::stack_symbol_type ()
  {}

  simple_parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 20: // T_FLOAT
        value.YY_MOVE_OR_COPY< float > (YY_MOVE (that.value));
        break;

      case 19: // T_INTEGER
      case 55: // op_rel
      case 57: // declaration
      case 58: // array_size
      case 59: // datatype
        value.YY_MOVE_OR_COPY< int > (YY_MOVE (that.value));
        break;

      case 18: // T_ID
        value.YY_MOVE_OR_COPY< string > (YY_MOVE (that.value));
        break;

      case 54: // l_expr
      case 56: // assignment
      case 60: // a_expr
      case 61: // a_term
      case 62: // a_fact
      case 63: // varref
      case 64: // arr_index
        value.YY_MOVE_OR_COPY< symbol_t* > (YY_MOVE (that.value));
        break;

      case 67: // varlist
      case 68: // expr_list
        value.YY_MOVE_OR_COPY< vector<symbol_t*>  > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  simple_parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 20: // T_FLOAT
        value.move< float > (YY_MOVE (that.value));
        break;

      case 19: // T_INTEGER
      case 55: // op_rel
      case 57: // declaration
      case 58: // array_size
      case 59: // datatype
        value.move< int > (YY_MOVE (that.value));
        break;

      case 18: // T_ID
        value.move< string > (YY_MOVE (that.value));
        break;

      case 54: // l_expr
      case 56: // assignment
      case 60: // a_expr
      case 61: // a_term
      case 62: // a_fact
      case 63: // varref
      case 64: // arr_index
        value.move< symbol_t* > (YY_MOVE (that.value));
        break;

      case 67: // varlist
      case 68: // expr_list
        value.move< vector<symbol_t*>  > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

#if YY_CPLUSPLUS < 201103L
  simple_parser::stack_symbol_type&
  simple_parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 20: // T_FLOAT
        value.move< float > (that.value);
        break;

      case 19: // T_INTEGER
      case 55: // op_rel
      case 57: // declaration
      case 58: // array_size
      case 59: // datatype
        value.move< int > (that.value);
        break;

      case 18: // T_ID
        value.move< string > (that.value);
        break;

      case 54: // l_expr
      case 56: // assignment
      case 60: // a_expr
      case 61: // a_term
      case 62: // a_fact
      case 63: // varref
      case 64: // arr_index
        value.move< symbol_t* > (that.value);
        break;

      case 67: // varlist
      case 68: // expr_list
        value.move< vector<symbol_t*>  > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  simple_parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  simple_parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
#if defined __GNUC__ && ! defined __clang__ && ! defined __ICC && __GNUC__ * 100 + __GNUC_MINOR__ <= 408
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
#endif
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  void
  simple_parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  simple_parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  simple_parser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  simple_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  simple_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  simple_parser::debug_level_type
  simple_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  simple_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  simple_parser::state_type
  simple_parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  simple_parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  simple_parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  simple_parser::operator() ()
  {
    return parse ();
  }

  int
  simple_parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << '\n';

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex ());
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case 20: // T_FLOAT
        yylhs.value.emplace< float > ();
        break;

      case 19: // T_INTEGER
      case 55: // op_rel
      case 57: // declaration
      case 58: // array_size
      case 59: // datatype
        yylhs.value.emplace< int > ();
        break;

      case 18: // T_ID
        yylhs.value.emplace< string > ();
        break;

      case 54: // l_expr
      case 56: // assignment
      case 60: // a_expr
      case 61: // a_term
      case 62: // a_fact
      case 63: // varref
      case 64: // arr_index
        yylhs.value.emplace< symbol_t* > ();
        break;

      case 67: // varlist
      case 68: // expr_list
        yylhs.value.emplace< vector<symbol_t*>  > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 14:
#line 120 "grammar.y"
    {
      // First semantic action.
      // TODO: Store the next instruction entry in the parsers stack
      yylhs.location.begin.line = INSTRUCTION_NEXT;
    }
#line 700 "simple.cc"
    break;

  case 15:
#line 128 "grammar.y"
    {
      // Second semantic action
      // TODO: Jump to the end of the while body if the condition 
      // evaluates to zero.
      itab_instruction_add (itab, OP_JZ, yystack_[1].value.as < symbol_t* > ()->addr, UNUSED_ARG, TBD_ARG);
      yylhs.location.begin.line = INSTRUCTION_LAST;
    }
#line 712 "simple.cc"
    break;

  case 16:
#line 137 "grammar.y"
    {
      // Third semantic action
      // TODO: generate an unconditional jump to the first instruction of l_expr
      int jump_dst = yystack_[6].location.begin.line;
      itab_instruction_add (itab, OP_JMP, NOARG, NOARG, jump_dst);
      // TODO: set the destination jump that terminates the loop
      int jmp_entry = yystack_[2].location.begin.line;
      itab->tab[jmp_entry]->addr3 = INSTRUCTION_NEXT;
    }
#line 726 "simple.cc"
    break;

  case 17:
#line 150 "grammar.y"
    {
      // First semantic action
      // TODO: store in the stack the entry number of the next instruction to be generated (use @$.begin.line instead of $$)
      yylhs.location.begin.line = INSTRUCTION_NEXT;
    }
#line 736 "simple.cc"
    break;

  case 18:
#line 157 "grammar.y"
    { yylhs.location.begin.line = INSTRUCTION_NEXT; }
#line 742 "simple.cc"
    break;

  case 19:
#line 160 "grammar.y"
    {
      // Second semantic action.
      // TODO: Retrieve the value stored in the stack in the first semantic action
      // above (the second symbol)
      int jump_dst = yystack_[7].location.begin.line;
      // TODO: Generate a jump-if-zero (OP_JZ) to the address stored in the first semantic
      // action of this rule
      itab_instruction_add (itab, OP_JZ, yystack_[2].location.begin.line, NOARG, jump_dst);
    }
#line 756 "simple.cc"
    break;

  case 20:
#line 176 "grammar.y"
    {
      // First semantic action
      yylhs.location.begin.line = INSTRUCTION_NEXT;
      itab_instruction_add (itab, OP_JZ, yystack_[1].value.as < symbol_t* > ()->addr, NOARG, yystack_[0].location.begin.line);
      yylhs.location.begin.line = INSTRUCTION_LAST;
    }
#line 767 "simple.cc"
    break;

  case 21:
#line 183 "grammar.y"
    {
      // Second semantic action
      itab_instruction_add (itab, OP_JMP, NOARG, NOARG, yystack_[2].location.begin.line);
      yylhs.location.begin.line = INSTRUCTION_LAST;

      int jmp_entry = yystack_[1].location.begin.line;
      itab->tab[jmp_entry]->addr3 = INSTRUCTION_NEXT;
    }
#line 780 "simple.cc"
    break;

  case 22:
#line 192 "grammar.y"
    {
      // Third semantic action
      int jmp_entry = yystack_[1].location.begin.line;
      itab->tab[jmp_entry]->addr3 = INSTRUCTION_NEXT;
    }
#line 790 "simple.cc"
    break;

  case 23:
#line 201 "grammar.y"
    { 
        yylhs.location.begin.line = INSTRUCTION_NEXT;
      }
#line 798 "simple.cc"
    break;

  case 26:
#line 211 "grammar.y"
    {
          symbol_t * res;
          res = make_temp (symtab, DTYPE_INT);
          itab_instruction_add (itab, yystack_[1].value.as < int > (), res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
          yylhs.value.as < symbol_t* > () = res;
        }
#line 809 "simple.cc"
    break;

  case 27:
#line 220 "grammar.y"
    { yylhs.value.as < int > () = OP_LT; }
#line 815 "simple.cc"
    break;

  case 28:
#line 221 "grammar.y"
    { yylhs.value.as < int > () = OP_GT; }
#line 821 "simple.cc"
    break;

  case 29:
#line 222 "grammar.y"
    { yylhs.value.as < int > () = OP_LEQ; }
#line 827 "simple.cc"
    break;

  case 30:
#line 223 "grammar.y"
    { yylhs.value.as < int > () = OP_GEQ; }
#line 833 "simple.cc"
    break;

  case 31:
#line 227 "grammar.y"
    {
      symbol_t * sym = symbol_find (symtab, yystack_[3].value.as < string > ());
      assert (sym && "Ooops: Did not find variable!");

      symbol_t * src_temp = yystack_[0].value.as < symbol_t* > ();
      symbol_t * temp = NULL;

      if (sym->datatype != src_temp->datatype)
      {
        // Want the type of the intermediate casting variable to be the same as the left-hand-side.
        temp = make_temp (symtab, sym->datatype);
        // TASK: Complete the four TBD_ARG in both calls to itab_instruction_add.
        if (sym->datatype == DTYPE_INT)
          itab_instruction_add (itab, OP_CAST_FLOAT2INT, temp->addr, UNUSED_ARG, src_temp->addr);
        else
          itab_instruction_add (itab, OP_CAST_INT2FLOAT, temp->addr, UNUSED_ARG, src_temp->addr);

        // Final store to the array will use the intermediate variable resulting from the cast.
        src_temp = temp;
      }


      if ( yystack_[2].value.as < symbol_t* > () != NULL) 
      {
        int opcode;
        // Decide the operation code for loading the array entry into the temporary variable.
        if (src_temp->datatype == DTYPE_INT)
          opcode = OP_STORE_ARRAY_VAL_INT;
        else if (src_temp->datatype == DTYPE_FLOAT)
          opcode = OP_STORE_ARRAY_VAL_FLOAT;
        else
          assert (0 && "Unknown array type given.");
        // Decide: the target address (first argument after opcode, 
        // the base address of the array to load from (second argument after opcode,
        // and the offset address (the index) to the array (third argument after opcode).

        // TASK: Complete the two TBD_ARG in the following call to itab_instruction_add.
        // HINT: See the code corresponding to OP_LOAD_ARRAY_VAL_*
        itab_instruction_add (itab, opcode, sym->addr, yystack_[2].value.as < symbol_t* > ()->addr, src_temp->addr);
      }
      else
      {
        // This is what we were doing previously in assignment 3.
        itab_instruction_add (itab, OP_STORE, sym->addr, sym->datatype, src_temp->addr);
      }
      yylhs.value.as < symbol_t* > () = src_temp;
    }
#line 885 "simple.cc"
    break;

  case 32:
#line 276 "grammar.y"
    { 
      assert (symtab);
      assert (itab);
      symbol_t * sym;
      if (yystack_[0].value.as < int > () == 1)
        sym = symbol_create (symtab, yystack_[1].value.as < string > (), yystack_[2].value.as < int > ()); 
      else
        sym = symbol_create_array (symtab, yystack_[1].value.as < string > (), yystack_[2].value.as < int > (), yystack_[0].value.as < int > ());
      assert (sym);
      symbol_add (symtab, sym);
    }
#line 901 "simple.cc"
    break;

  case 33:
#line 290 "grammar.y"
    { 
            assert (yystack_[1].value.as < int > () > 0 && "Array size cannot be <= 0."); 
            yylhs.value.as < int > () = yystack_[1].value.as < int > (); 
          }
#line 910 "simple.cc"
    break;

  case 34:
#line 294 "grammar.y"
    { yylhs.value.as < int > () = 1; }
#line 916 "simple.cc"
    break;

  case 35:
#line 297 "grammar.y"
    { yylhs.value.as < int > () = DTYPE_INT; }
#line 922 "simple.cc"
    break;

  case 36:
#line 298 "grammar.y"
    { yylhs.value.as < int > () = DTYPE_FLOAT; }
#line 928 "simple.cc"
    break;

  case 37:
#line 302 "grammar.y"
    {
        if (yystack_[2].value.as < symbol_t* > ()->datatype != yystack_[0].value.as < symbol_t* > ()->datatype)
        {
          cout << "Incompatible datatypes\n";
          exit (1);
        }
        // TASK: Abort if the datatype of a_expr and a_term differ.
        symbol_t * res;
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_INT)
        {
          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          itab_instruction_add (itab, OP_ADD, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_FLOAT)
        {
          // TASK: Modify this semantic action to support both DTYPE_INT and DTYPE_FLOAT.
          // For DTYPE_FLOAT you should generate an OP_FADD instruction.
          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          itab_instruction_add (itab, OP_FADD, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        yylhs.value.as < symbol_t* > () = res;
        #ifdef _SMP_DEBUG_
        cout << "On a_expr (1)\n";
        #endif
      }
#line 958 "simple.cc"
    break;

  case 38:
#line 328 "grammar.y"
    {
        // TASK: Abort if the datatype of a_expr and a_term differ.
        // TASK: Complete support for OP_SUB and OP_FSUB. See OP_ADD and OP_FADD code above.
        symbol_t * res;
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_INT)
        {
          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          itab_instruction_add (itab, OP_SUB, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_FLOAT)
        {
          // TASK: Modify this semantic action to support both DTYPE_INT and DTYPE_FLOAT.
          // For DTYPE_FLOAT you should generate an OP_FSUB instruction.
          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          itab_instruction_add (itab, OP_FSUB, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        yylhs.value.as < symbol_t* > () = res;
        #ifdef _SMP_DEBUG_
        cout << "On a_expr (2)\n";
        #endif
      }
#line 984 "simple.cc"
    break;

  case 39:
#line 350 "grammar.y"
    {
        yylhs.value.as < symbol_t* > () = yystack_[0].value.as < symbol_t* > ();
        #ifdef _SMP_DEBUG_
        cout << "On a_expr (3)\n";
        #endif
      }
#line 995 "simple.cc"
    break;

  case 40:
#line 359 "grammar.y"
    {
        // TASK: Abort if the datatype of a_expr and a_term differ.
        // TASK: Complete support for OP_SUB and OP_FSUB. See OP_ADD and OP_FADD code above.
        symbol_t * res;
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_INT)
        {
          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          itab_instruction_add (itab, OP_MUL, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_FLOAT)
        {
          // TASK: Modify this semantic action to support both DTYPE_INT and DTYPE_FLOAT.
          // For DTYPE_FLOAT you should generate an OP_FMUL instruction.
          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          itab_instruction_add (itab, OP_FMUL, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        yylhs.value.as < symbol_t* > () = res;
      }
#line 1018 "simple.cc"
    break;

  case 41:
#line 378 "grammar.y"
    {
        // TASK: Abort if the datatype of a_expr and a_term differ.
        // TASK: Complete support for OP_SUB and OP_FSUB. See OP_ADD and OP_FADD code above.
        symbol_t * res;
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_INT)
        {
          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          itab_instruction_add (itab, OP_DIV, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_FLOAT)
        {
          // TASK: Modify this semantic action to support both DTYPE_INT and DTYPE_FLOAT.
          // For DTYPE_FLOAT you should generate an OP_FDIV instruction.
          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          itab_instruction_add (itab, OP_FDIV, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        yylhs.value.as < symbol_t* > () = res;
        
      }
#line 1042 "simple.cc"
    break;

  case 42:
#line 398 "grammar.y"
    {
        yylhs.value.as < symbol_t* > () = yystack_[0].value.as < symbol_t* > ();
        #ifdef _SMP_DEBUG_
        cout << "On a_term (3)\n";
        #endif
      }
#line 1053 "simple.cc"
    break;

  case 43:
#line 407 "grammar.y"
    {
        symbol_t * res;
        assert (yystack_[0].value.as < symbol_t* > () && "Did not find variable");
        res = make_temp (symtab, yystack_[0].value.as < symbol_t* > ()->datatype);
        itab_instruction_add (itab, OP_LOAD, res->addr, yystack_[0].value.as < symbol_t* > ()->datatype, yystack_[0].value.as < symbol_t* > ()->addr);
        yylhs.value.as < symbol_t* > () = res;
      }
#line 1065 "simple.cc"
    break;

  case 44:
#line 415 "grammar.y"
    {
        symbol_t * res;
        res = make_temp (symtab, DTYPE_INT);
        *(int*)(static_mem+stptr) = yystack_[0].value.as < int > ();
        itab_instruction_add (itab, OP_LOADCST, res->addr, res->datatype, stptr);
        stptr+=4;
        yylhs.value.as < symbol_t* > () = res;
      }
#line 1078 "simple.cc"
    break;

  case 45:
#line 424 "grammar.y"
    { 
        // TASK: Complete implementation in a fashion similar to the rule a_fact -> T_INTEGER. 
        symbol_t * res;
        res = make_temp (symtab, DTYPE_FLOAT);
        printf ("Printing debug : float = %f\n", yystack_[0].value.as < float > ());
        *(float*)(static_mem+stptr) = yystack_[0].value.as < float > ();
        itab_instruction_add (itab, OP_LOADCST, res->addr, res->datatype, stptr);
        stptr+=4;
        yylhs.value.as < symbol_t* > () = res;
      }
#line 1093 "simple.cc"
    break;

  case 46:
#line 434 "grammar.y"
    { yylhs.value.as < symbol_t* > () = yystack_[1].value.as < symbol_t* > (); }
#line 1099 "simple.cc"
    break;

  case 47:
#line 436 "grammar.y"
    {
        symbol_t * res;
        res = make_temp (symtab, yystack_[0].value.as < symbol_t* > ()->datatype);
        itab_instruction_add (itab, OP_UMIN, res->addr, yystack_[0].value.as < symbol_t* > ()->datatype, yystack_[0].value.as < symbol_t* > ()->addr);
        yylhs.value.as < symbol_t* > () = res;
      }
#line 1110 "simple.cc"
    break;

  case 48:
#line 443 "grammar.y"
    {
        yylhs.value.as < symbol_t* > () = NULL;
      }
#line 1118 "simple.cc"
    break;

  case 49:
#line 449 "grammar.y"
    {
      symbol_t * sym = symbol_find (symtab, yystack_[1].value.as < string > ());
      assert (sym && "Ooops: Did not find variable!");

      yylhs.value.as < symbol_t* > () = sym;
      if (yystack_[0].value.as < symbol_t* > () != NULL) 
      {
        assert (yystack_[0].value.as < symbol_t* > ()->datatype == DTYPE_INT && "Array index must be of int type.");
        symbol_t * temp;
        // Decide the data type for the temporary variable. 
        temp = make_temp (symtab, sym->datatype);
        int opcode;
        // Decide the operation code for loading the array entry into the temporary variable.
        if (sym->datatype == DTYPE_INT)
          opcode = OP_LOAD_ARRAY_VAL_INT;
        else if (sym->datatype == DTYPE_FLOAT)
          opcode = OP_LOAD_ARRAY_VAL_FLOAT;
        else
          assert (0 && "Unknown array type given.");
        // Decide: the target address (first argument after opcode, 
        // the base address of the array to load from (second argument after opcode,
        // and the offset address (the index) to the array (third argument after opcode).
        itab_instruction_add (itab, opcode, temp->addr, sym->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        yylhs.value.as < symbol_t* > () = temp;
      }
    }
#line 1149 "simple.cc"
    break;

  case 50:
#line 477 "grammar.y"
    { yylhs.value.as < symbol_t* > () = yystack_[1].value.as < symbol_t* > (); }
#line 1155 "simple.cc"
    break;

  case 51:
#line 478 "grammar.y"
    { yylhs.value.as < symbol_t* > () = NULL; }
#line 1161 "simple.cc"
    break;

  case 52:
#line 482 "grammar.y"
    {
      vector_itersym_t iter;
      int ii = 0;
      for (iter = yystack_[0].value.as < vector<symbol_t*>  > ().begin (); iter != yystack_[0].value.as < vector<symbol_t*>  > ().end (); iter++, ii++)
      {
        #ifdef _SMP_DEBUG_
        cout << "Symbol to read (" << ii << "):";
        symbol_show (*iter);
        #endif
        itab_instruction_add (itab, OP_READ, (*iter)->addr, (*iter)->datatype, NOARG);
      }
    }
#line 1178 "simple.cc"
    break;

  case 53:
#line 497 "grammar.y"
    {
      vector_itersym_t iter;
      int ii = 0;
      for (iter = yystack_[0].value.as < vector<symbol_t*>  > ().begin (); iter != yystack_[0].value.as < vector<symbol_t*>  > ().end (); iter++, ii++)
      {
        #ifdef _SMP_DEBUG_
        cout << "Symbol to write(" << ii << "):";
        symbol_show (*iter);
        #endif
        itab_instruction_add (itab, OP_WRITE, (*iter)->addr, (*iter)->datatype, NOARG);
      }
    }
#line 1195 "simple.cc"
    break;

  case 54:
#line 511 "grammar.y"
    { yystack_[2].value.as < vector<symbol_t*>  > ().push_back (yystack_[0].value.as < symbol_t* > ()); yylhs.value.as < vector<symbol_t*>  > () = yystack_[2].value.as < vector<symbol_t*>  > (); }
#line 1201 "simple.cc"
    break;

  case 55:
#line 512 "grammar.y"
    { yylhs.value.as < vector<symbol_t*>  > ().push_back (yystack_[0].value.as < symbol_t* > ()); }
#line 1207 "simple.cc"
    break;

  case 56:
#line 516 "grammar.y"
    { 
      yystack_[2].value.as < vector<symbol_t*>  > ().push_back (yystack_[0].value.as < symbol_t* > ()); yylhs.value.as < vector<symbol_t*>  > () = yystack_[2].value.as < vector<symbol_t*>  > (); 
      #ifdef _SMP_DEBUG_
      cout << "In expr_list (1)\n";
      #endif
    }
#line 1218 "simple.cc"
    break;

  case 57:
#line 523 "grammar.y"
    { 
      yylhs.value.as < vector<symbol_t*>  > ().push_back (yystack_[0].value.as < symbol_t* > ()); 
      #ifdef _SMP_DEBUG_
      cout << "In expr_list (2)\n";
      #endif
    }
#line 1229 "simple.cc"
    break;


#line 1233 "simple.cc"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
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


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  simple_parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  // Generate an error message.
  std::string
  simple_parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char simple_parser::yypact_ninf_ = -50;

  const signed char simple_parser::yytable_ninf_ = -1;

  const signed char
  simple_parser::yypact_[] =
  {
      51,   -50,   -50,    23,     1,     7,    51,   -50,   -50,     9,
      28,    26,   -50,   -50,   -50,   -50,   -50,   -50,   -50,    24,
     -50,   -50,     7,   -50,    30,     1,   -50,   -50,   -50,     1,
       8,    22,   -50,   -50,    31,     1,    43,    10,    51,    19,
       1,   -50,    51,    36,   -50,    23,   -50,    -1,     1,     1,
       1,     1,     1,     5,     1,    51,   -50,    -8,     1,    27,
      21,   -50,    40,   -50,   -50,   -50,    22,    22,   -50,   -50,
       8,   -50,     8,    32,    34,   -50,   -50,   -50,   -50,   -50,
       1,    49,   -50,   -50,    51,     8,   -50,     1,    42,   -50,
      37,    51,    41,   -50,   -50,   -50,   -50,    51,   -50
  };

  const unsigned char
  simple_parser::yydefact_[] =
  {
       0,    35,    36,     0,     0,    51,     0,    17,    14,     0,
       0,     0,     4,    12,     9,    10,    11,     5,     8,     0,
       6,     7,    51,    55,    52,     0,    48,    44,    45,     0,
      57,    39,    42,    43,    53,     0,     0,     0,     0,     0,
       0,     1,     2,    34,    49,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,     0,     0,
       0,     3,     0,    32,    54,    46,    37,    38,    40,    41,
      56,    50,    31,     0,     0,    20,    27,    28,    29,    30,
       0,     0,    18,    15,     0,    26,    33,     0,     0,    21,
       0,     0,    25,    19,    16,    23,    22,     0,    24
  };

  const signed char
  simple_parser::yypgoto_[] =
  {
     -50,   -50,    -3,   -40,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -49,   -50,   -50,   -50,
     -50,   -50,    -4,   -31,   -17,    -2,    53,   -50,   -50,   -50,
     -50
  };

  const signed char
  simple_parser::yydefgoto_[] =
  {
      -1,    10,    11,    12,    13,    14,    39,    88,    15,    38,
      87,    16,    84,    92,    96,    97,    59,    80,    17,    18,
      63,    19,    60,    31,    32,    33,    36,    20,    21,    24,
      34
  };

  const unsigned char
  simple_parser::yytable_[] =
  {
      30,    23,    61,    37,    48,    49,    55,    25,    46,    74,
      48,    49,    26,    48,    49,    61,    73,    66,    67,    22,
      27,    28,    71,    35,    55,    47,    48,    49,    41,    50,
      51,    53,    56,    68,    69,    57,    65,    29,    90,    40,
      42,    22,    43,    64,    89,    45,    52,    54,    70,    58,
      72,    94,    62,    76,    77,    78,    79,    98,    75,    81,
       1,     2,    82,     3,     4,    83,    86,    91,    93,     5,
      95,     0,     6,     0,     7,    44,    85,     8,     9
  };

  const signed char
  simple_parser::yycheck_[] =
  {
       4,     3,    42,     6,     5,     6,    14,     6,    25,    58,
       5,     6,    11,     5,     6,    55,    24,    48,    49,    18,
      19,    20,    17,    16,    14,    29,     5,     6,     0,     7,
       8,    35,    22,    50,    51,    38,    37,    36,    87,    30,
      14,    18,    18,    45,    84,    15,    15,     4,    52,    30,
      54,    91,    16,    32,    33,    34,    35,    97,    31,    19,
       9,    10,    30,    12,    13,    31,    17,    25,    31,    18,
      29,    -1,    21,    -1,    23,    22,    80,    26,    27
  };

  const unsigned char
  simple_parser::yystos_[] =
  {
       0,     9,    10,    12,    13,    18,    21,    23,    26,    27,
      39,    40,    41,    42,    43,    46,    49,    56,    57,    59,
      65,    66,    18,    63,    67,     6,    11,    19,    20,    36,
      60,    61,    62,    63,    68,    16,    64,    40,    47,    44,
      30,     0,    14,    18,    64,    15,    62,    60,     5,     6,
       7,     8,    15,    60,     4,    14,    22,    40,    30,    54,
      60,    41,    16,    58,    63,    37,    61,    61,    62,    62,
      60,    17,    60,    24,    54,    31,    32,    33,    34,    35,
      55,    19,    30,    31,    50,    60,    17,    48,    45,    41,
      54,    25,    51,    31,    41,    29,    52,    53,    41
  };

  const unsigned char
  simple_parser::yyr1_[] =
  {
       0,    38,    39,    40,    40,    41,    41,    41,    41,    41,
      41,    41,    41,    42,    44,    45,    43,    47,    48,    46,
      50,    51,    49,    53,    52,    52,    54,    55,    55,    55,
      55,    56,    57,    58,    58,    59,    59,    60,    60,    60,
      61,    61,    61,    62,    62,    62,    62,    62,    62,    63,
      64,    64,    65,    66,    67,    67,    68,    68
  };

  const unsigned char
  simple_parser::yyr2_[] =
  {
       0,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     0,     0,     8,     0,     0,     8,
       0,     0,     8,     0,     3,     0,     3,     1,     1,     1,
       1,     4,     3,     3,     0,     1,     1,     3,     3,     1,
       3,     3,     1,     1,     1,     1,     3,     2,     1,     2,
       3,     0,     2,     2,     3,     1,     3,     1
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const simple_parser::yytname_[] =
  {
  "T_EOF", "error", "$undefined", "T_NUM", "T_ASSIGN", "T_ADD", "T_SUB",
  "T_MUL", "T_DIV", "T_DT_INT", "T_DT_FLOAT", "T_LITERAL_STR", "T_READ",
  "T_WRITE", "T_SEMICOLON", "T_COMMA", "T_LS_BRACKET", "T_RS_BRACKET",
  "T_ID", "T_INTEGER", "T_FLOAT", "T_BEGIN", "T_END", "T_REPEAT",
  "T_UNTIL", "T_DO", "T_WHILE", "T_IF", "T_THEN", "T_ELSE", "T_LPAR",
  "T_RPAR", "T_LT", "T_GT", "T_LEQ", "T_GEQ", "'('", "')'", "$accept",
  "program", "stmt_list", "stmt", "block", "construct_while", "$@1", "$@2",
  "construct_repeat", "$@3", "$@4", "construct_if", "$@5", "$@6",
  "construct_else", "$@7", "l_expr", "op_rel", "assignment", "declaration",
  "array_size", "datatype", "a_expr", "a_term", "a_fact", "varref",
  "arr_index", "read", "write", "varlist", "expr_list", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short
  simple_parser::yyrline_[] =
  {
       0,    98,    98,   101,   102,   105,   106,   107,   108,   109,
     110,   111,   112,   115,   120,   128,   119,   150,   157,   149,
     176,   183,   172,   201,   200,   205,   210,   220,   221,   222,
     223,   226,   276,   289,   294,   297,   298,   301,   327,   349,
     358,   377,   397,   406,   414,   423,   434,   435,   442,   448,
     477,   478,   481,   496,   511,   512,   515,   522
  };

  // Print the state stack on the debug stream.
  void
  simple_parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << '\n';
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  simple_parser::yy_reduce_print_ (int yyrule)
  {
    unsigned yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


} // yy
#line 1682 "simple.cc"

#line 531 "grammar.y"


void yy::simple_parser::error (const yy::location & l, const std::string & s) {
	std::cerr << "Simple Parser error at " << l << " : " << s << std::endl;
}


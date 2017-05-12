// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

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


// First part of user declarations.

#line 37 "binary.tab.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "binary.tab.hh"

// User implementation prologue.

#line 51 "binary.tab.cc" // lalr1.cc:412
// Unqualified %code blocks.
#line 13 "binary.yy" // lalr1.cc:413
 
	#define YY_DECL yy::parser::symbol_type yylex() 
	extern FILE* yyin;
	YY_DECL; 
	Node root = *(new Node());

#line 60 "binary.tab.cc" // lalr1.cc:413


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
      *yycdebug_ << std::endl;                  \
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
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 127 "binary.tab.cc" // lalr1.cc:479

  /// Build a parser object.
  parser::parser ()
#if YYDEBUG
     :yydebug_ (false),
      yycdebug_ (&std::cerr)
#endif
  {}

  parser::~parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  inline
  parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  parser::symbol_number_type
  parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s)
  {
      switch (that.type_get ())
    {
      case 54: // chunk
      case 55: // optsemi
      case 56: // block
      case 57: // optelseblock
      case 58: // stat
      case 59: // elseif
      case 60: // laststat
      case 61: // optlaststat
      case 62: // funcname
      case 63: // pointword
      case 64: // optname
      case 65: // varlist
      case 66: // var
      case 67: // namelist
      case 68: // explist
      case 69: // optexplist
      case 70: // optequalsexplist
      case 71: // exp
      case 72: // optexp
      case 73: // prefixexp
      case 74: // functioncall
      case 75: // args
      case 76: // function
      case 77: // funcbody
      case 78: // parlist
      case 79: // optparlist
      case 80: // optcommapoint
      case 81: // tableconstructor
      case 82: // fieldlist
      case 83: // fieldlistend
      case 84: // optfieldlist
      case 85: // field
      case 86: // fieldsep
      case 87: // binop
      case 88: // unop
        value.move< Node > (that.value);
        break;

      case 3: // OR
      case 4: // AND
      case 5: // INF
      case 6: // INFEQUALS
      case 7: // SUP
      case 8: // SUPEQUALS
      case 9: // DBLEQUALS
      case 10: // DIFF
      case 11: // TWOPOINTS
      case 12: // PLUS
      case 13: // MINUS
      case 14: // STAR
      case 15: // DIV
      case 16: // PERCENT
      case 17: // NOT
      case 18: // DIESE
      case 19: // HAT
      case 20: // WORD
      case 21: // OPENACC
      case 22: // CLOSEACC
      case 23: // OPENRECT
      case 24: // CLOSERECT
      case 25: // OPENBRACKET
      case 26: // CLOSEBRACKET
      case 27: // STRING
      case 28: // NUMBER
      case 29: // SEMI
      case 30: // IF
      case 31: // THEN
      case 32: // ELSEIF
      case 33: // ELSE
      case 34: // FOR
      case 35: // IN
      case 36: // WHILE
      case 37: // DO
      case 38: // REPEAT
      case 39: // UNTIL
      case 40: // FUNCTION
      case 41: // LOCAL
      case 42: // NIL
      case 43: // BREAK
      case 44: // RETURN
      case 45: // ENDDING
      case 46: // FALSE
      case 47: // TRUE
      case 48: // COMMA
      case 49: // POINT
      case 50: // DBLPOINTS
      case 51: // EQUALS
      case 52: // TREPOINTS
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      case 54: // chunk
      case 55: // optsemi
      case 56: // block
      case 57: // optelseblock
      case 58: // stat
      case 59: // elseif
      case 60: // laststat
      case 61: // optlaststat
      case 62: // funcname
      case 63: // pointword
      case 64: // optname
      case 65: // varlist
      case 66: // var
      case 67: // namelist
      case 68: // explist
      case 69: // optexplist
      case 70: // optequalsexplist
      case 71: // exp
      case 72: // optexp
      case 73: // prefixexp
      case 74: // functioncall
      case 75: // args
      case 76: // function
      case 77: // funcbody
      case 78: // parlist
      case 79: // optparlist
      case 80: // optcommapoint
      case 81: // tableconstructor
      case 82: // fieldlist
      case 83: // fieldlistend
      case 84: // optfieldlist
      case 85: // field
      case 86: // fieldsep
      case 87: // binop
      case 88: // unop
        value.copy< Node > (that.value);
        break;

      case 3: // OR
      case 4: // AND
      case 5: // INF
      case 6: // INFEQUALS
      case 7: // SUP
      case 8: // SUPEQUALS
      case 9: // DBLEQUALS
      case 10: // DIFF
      case 11: // TWOPOINTS
      case 12: // PLUS
      case 13: // MINUS
      case 14: // STAR
      case 15: // DIV
      case 16: // PERCENT
      case 17: // NOT
      case 18: // DIESE
      case 19: // HAT
      case 20: // WORD
      case 21: // OPENACC
      case 22: // CLOSEACC
      case 23: // OPENRECT
      case 24: // CLOSERECT
      case 25: // OPENBRACKET
      case 26: // CLOSEBRACKET
      case 27: // STRING
      case 28: // NUMBER
      case 29: // SEMI
      case 30: // IF
      case 31: // THEN
      case 32: // ELSEIF
      case 33: // ELSE
      case 34: // FOR
      case 35: // IN
      case 36: // WHILE
      case 37: // DO
      case 38: // REPEAT
      case 39: // UNTIL
      case 40: // FUNCTION
      case 41: // LOCAL
      case 42: // NIL
      case 43: // BREAK
      case 44: // RETURN
      case 45: // ENDDING
      case 46: // FALSE
      case 47: // TRUE
      case 48: // COMMA
      case 49: // POINT
      case 50: // DBLPOINTS
      case 51: // EQUALS
      case 52: // TREPOINTS
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    return *this;
  }


  template <typename Base>
  inline
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " (";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::parse ()
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

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex ());
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
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
    yypush_ ("Shifting", yyn, yyla);
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
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
        switch (yyr1_[yyn])
    {
      case 54: // chunk
      case 55: // optsemi
      case 56: // block
      case 57: // optelseblock
      case 58: // stat
      case 59: // elseif
      case 60: // laststat
      case 61: // optlaststat
      case 62: // funcname
      case 63: // pointword
      case 64: // optname
      case 65: // varlist
      case 66: // var
      case 67: // namelist
      case 68: // explist
      case 69: // optexplist
      case 70: // optequalsexplist
      case 71: // exp
      case 72: // optexp
      case 73: // prefixexp
      case 74: // functioncall
      case 75: // args
      case 76: // function
      case 77: // funcbody
      case 78: // parlist
      case 79: // optparlist
      case 80: // optcommapoint
      case 81: // tableconstructor
      case 82: // fieldlist
      case 83: // fieldlistend
      case 84: // optfieldlist
      case 85: // field
      case 86: // fieldsep
      case 87: // binop
      case 88: // unop
        yylhs.value.build< Node > ();
        break;

      case 3: // OR
      case 4: // AND
      case 5: // INF
      case 6: // INFEQUALS
      case 7: // SUP
      case 8: // SUPEQUALS
      case 9: // DBLEQUALS
      case 10: // DIFF
      case 11: // TWOPOINTS
      case 12: // PLUS
      case 13: // MINUS
      case 14: // STAR
      case 15: // DIV
      case 16: // PERCENT
      case 17: // NOT
      case 18: // DIESE
      case 19: // HAT
      case 20: // WORD
      case 21: // OPENACC
      case 22: // CLOSEACC
      case 23: // OPENRECT
      case 24: // CLOSERECT
      case 25: // OPENBRACKET
      case 26: // CLOSEBRACKET
      case 27: // STRING
      case 28: // NUMBER
      case 29: // SEMI
      case 30: // IF
      case 31: // THEN
      case 32: // ELSEIF
      case 33: // ELSE
      case 34: // FOR
      case 35: // IN
      case 36: // WHILE
      case 37: // DO
      case 38: // REPEAT
      case 39: // UNTIL
      case 40: // FUNCTION
      case 41: // LOCAL
      case 42: // NIL
      case 43: // BREAK
      case 44: // RETURN
      case 45: // ENDDING
      case 46: // FALSE
      case 47: // TRUE
      case 48: // COMMA
      case 49: // POINT
      case 50: // DBLPOINTS
      case 51: // EQUALS
      case 52: // TREPOINTS
        yylhs.value.build< std::string > ();
        break;

      default:
        break;
    }



      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 116 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("laststmt",""); 
																		  yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ()); 
																		  root = yylhs.value.as< Node > ();
																		}
#line 728 "binary.tab.cc" // lalr1.cc:859
    break;

  case 3:
#line 120 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("stmt",""); 
																		  yylhs.value.as< Node > ().children.push_back(yystack_[1].value.as< Node > ()); 
																		  root = yylhs.value.as< Node > (); 
																		}
#line 737 "binary.tab.cc" // lalr1.cc:859
    break;

  case 4:
#line 124 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("stmt",""); 
																		  for(auto i=yystack_[2].value.as< Node > ().children.begin(); i!=yystack_[2].value.as< Node > ().children.end(); i++) 
																		  	yylhs.value.as< Node > ().children.push_back(*i); 
																		  yylhs.value.as< Node > ().children.push_back(yystack_[1].value.as< Node > ());
											  							  root = yylhs.value.as< Node > ();
											  							}
#line 748 "binary.tab.cc" // lalr1.cc:859
    break;

  case 5:
#line 132 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("empty",""); }
#line 754 "binary.tab.cc" // lalr1.cc:859
    break;

  case 6:
#line 133 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node(";",""); }
#line 760 "binary.tab.cc" // lalr1.cc:859
    break;

  case 7:
#line 136 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = yystack_[0].value.as< Node > (); }
#line 766 "binary.tab.cc" // lalr1.cc:859
    break;

  case 8:
#line 139 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("empty",""); }
#line 772 "binary.tab.cc" // lalr1.cc:859
    break;

  case 9:
#line 140 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("else",""); yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ()); }
#line 778 "binary.tab.cc" // lalr1.cc:859
    break;

  case 10:
#line 143 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("equals",""); 
																			  yylhs.value.as< Node > ().children.push_back(yystack_[2].value.as< Node > ()); 
																			  yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ()); 
																			}
#line 787 "binary.tab.cc" // lalr1.cc:859
    break;

  case 11:
#line 147 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("functioncall",""); yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ()); }
#line 793 "binary.tab.cc" // lalr1.cc:859
    break;

  case 12:
#line 148 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("do",""); yylhs.value.as< Node > ().children.push_back(yystack_[1].value.as< Node > ()); }
#line 799 "binary.tab.cc" // lalr1.cc:859
    break;

  case 13:
#line 149 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("while",""); 
																			  Node d = Node("do",""); 
																			  d.children.push_back(yystack_[1].value.as< Node > ()); 
																			  yylhs.value.as< Node > ().children.push_back(yystack_[3].value.as< Node > ()); 
																			  yylhs.value.as< Node > ().children.push_back(d); 
																			}
#line 810 "binary.tab.cc" // lalr1.cc:859
    break;

  case 14:
#line 155 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("repeat",""); 
																			  Node u = Node("until",""); 
																			  u.children.push_back(yystack_[0].value.as< Node > ()); 
																			  yylhs.value.as< Node > ().children.push_back(yystack_[2].value.as< Node > ()); 
																			  yylhs.value.as< Node > ().children.push_back(u); 
																			}
#line 821 "binary.tab.cc" // lalr1.cc:859
    break;

  case 15:
#line 161 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("if",""); 
																			  Node t = Node("then",""); 
																			  t.children.push_back(yystack_[3].value.as< Node > ()); 
																			  yylhs.value.as< Node > ().children.push_back(yystack_[5].value.as< Node > ());
																			  yylhs.value.as< Node > ().children.push_back(t);
																			  yylhs.value.as< Node > ().children.push_back(yystack_[2].value.as< Node > ());
																			  yylhs.value.as< Node > ().children.push_back(yystack_[1].value.as< Node > ());
																			}
#line 834 "binary.tab.cc" // lalr1.cc:859
    break;

  case 16:
#line 169 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("for",""); 
																			  Node n = Node("name",yystack_[8].value.as< std::string > ()); 
																			  n.children.push_back(yystack_[6].value.as< Node > ()); 
																			  n.children.push_back(yystack_[4].value.as< Node > ()); 
																			  n.children.push_back(yystack_[3].value.as< Node > ()); 
																			  Node d = Node("do",""); 
																			  d.children.push_back(yystack_[1].value.as< Node > ()); 
																			  yylhs.value.as< Node > ().children.push_back(n); 
																			  yylhs.value.as< Node > ().children.push_back(d); 
																			}
#line 849 "binary.tab.cc" // lalr1.cc:859
    break;

  case 17:
#line 179 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("for",""); 
																			  Node i = Node("in",""); 
																			  i.children.push_back(yystack_[5].value.as< Node > ()); 
																			  i.children.push_back(yystack_[3].value.as< Node > ()); 
																			  Node d = Node("do",""); 
																			  d.children.push_back(yystack_[1].value.as< Node > ());
																			  yylhs.value.as< Node > ().children.push_back(i); 
																			  yylhs.value.as< Node > ().children.push_back(d); 
																			}
#line 863 "binary.tab.cc" // lalr1.cc:859
    break;

  case 18:
#line 188 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("function",""); 
																			  yylhs.value.as< Node > ().children.push_back(yystack_[1].value.as< Node > ()); 
																			  yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ()); 
																			}
#line 872 "binary.tab.cc" // lalr1.cc:859
    break;

  case 19:
#line 192 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("local_function",""); 
																			  yylhs.value.as< Node > ().children.push_back(Node("name",yystack_[1].value.as< std::string > ()));
																			  yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ()); 
																			}
#line 881 "binary.tab.cc" // lalr1.cc:859
    break;

  case 20:
#line 196 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("local",""); 
																			  Node e = Node("equals",""); 
																			  e.children.push_back(yystack_[1].value.as< Node > ()); 
																			  e.children.push_back(yystack_[0].value.as< Node > ()); 
																			  yylhs.value.as< Node > ().children.push_back(e); 
																			}
#line 892 "binary.tab.cc" // lalr1.cc:859
    break;

  case 21:
#line 204 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("empty",""); }
#line 898 "binary.tab.cc" // lalr1.cc:859
    break;

  case 22:
#line 205 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("elseif",""); 
																		  Node t = Node("then",""); 
																		  t.children.push_back(yystack_[0].value.as< Node > ()); 
																		  yylhs.value.as< Node > ().children.push_back(yystack_[2].value.as< Node > ()); 
																		  yylhs.value.as< Node > ().children.push_back(t); 
																		}
#line 909 "binary.tab.cc" // lalr1.cc:859
    break;

  case 23:
#line 211 "binary.yy" // lalr1.cc:859
    { if(yystack_[4].value.as< Node > ().tag != "elseiflist"){
																			yylhs.value.as< Node > () = Node("elseiflist",""); 
																			yylhs.value.as< Node > ().children.push_back(yystack_[4].value.as< Node > ()); 
																		  }else yylhs.value.as< Node > () = yystack_[4].value.as< Node > (); 
																		  Node t = Node("then",""); 
																		  t.children.push_back(yystack_[0].value.as< Node > ());
																		  Node e = Node("elseif",""); 
																		  e.children.push_back(yystack_[2].value.as< Node > ()); 
																		  e.children.push_back(t); 
																		  yylhs.value.as< Node > ().children.push_back(e); 
																		}
#line 925 "binary.tab.cc" // lalr1.cc:859
    break;

  case 24:
#line 224 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("return",""); yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ()); }
#line 931 "binary.tab.cc" // lalr1.cc:859
    break;

  case 25:
#line 225 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("break",""); }
#line 937 "binary.tab.cc" // lalr1.cc:859
    break;

  case 26:
#line 228 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("empty",""); }
#line 943 "binary.tab.cc" // lalr1.cc:859
    break;

  case 27:
#line 229 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = yystack_[1].value.as< Node > (); }
#line 949 "binary.tab.cc" // lalr1.cc:859
    break;

  case 28:
#line 232 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("name",yystack_[2].value.as< std::string > ()); 
																		  yylhs.value.as< Node > ().children.push_back(yystack_[1].value.as< Node > ()); 
																		  yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ()); 
																		}
#line 958 "binary.tab.cc" // lalr1.cc:859
    break;

  case 29:
#line 238 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("empty",""); }
#line 964 "binary.tab.cc" // lalr1.cc:859
    break;

  case 30:
#line 239 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("name",yystack_[0].value.as< std::string > ()); }
#line 970 "binary.tab.cc" // lalr1.cc:859
    break;

  case 31:
#line 240 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = yystack_[2].value.as< Node > (); yylhs.value.as< Node > ().children.push_back(Node("name",yystack_[0].value.as< std::string > ())); }
#line 976 "binary.tab.cc" // lalr1.cc:859
    break;

  case 32:
#line 243 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("empty",""); }
#line 982 "binary.tab.cc" // lalr1.cc:859
    break;

  case 33:
#line 244 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("self",yystack_[0].value.as< std::string > ()); }
#line 988 "binary.tab.cc" // lalr1.cc:859
    break;

  case 34:
#line 247 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = yystack_[0].value.as< Node > (); }
#line 994 "binary.tab.cc" // lalr1.cc:859
    break;

  case 35:
#line 248 "binary.yy" // lalr1.cc:859
    { if(yystack_[2].value.as< Node > ().tag != "var"){
																			yylhs.value.as< Node > () = Node("var",""); 
																			yylhs.value.as< Node > ().children.push_back(yystack_[2].value.as< Node > ()); 
																		  } else yylhs.value.as< Node > () = yystack_[2].value.as< Node > (); 
																		  yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ()); 
																		}
#line 1005 "binary.tab.cc" // lalr1.cc:859
    break;

  case 36:
#line 256 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("name",yystack_[0].value.as< std::string > ()); }
#line 1011 "binary.tab.cc" // lalr1.cc:859
    break;

  case 37:
#line 257 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = yystack_[3].value.as< Node > (); 
																		  Node p = Node("position",""); 
																		  p.children.push_back(yystack_[1].value.as< Node > ()); 
																		  yylhs.value.as< Node > ().children.push_back(p); 
																		}
#line 1021 "binary.tab.cc" // lalr1.cc:859
    break;

  case 38:
#line 262 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = yystack_[2].value.as< Node > (); yylhs.value.as< Node > ().children.push_back(Node("name",yystack_[0].value.as< std::string > ())); }
#line 1027 "binary.tab.cc" // lalr1.cc:859
    break;

  case 39:
#line 265 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("name",yystack_[0].value.as< std::string > ()); }
#line 1033 "binary.tab.cc" // lalr1.cc:859
    break;

  case 40:
#line 266 "binary.yy" // lalr1.cc:859
    { if(yystack_[2].value.as< Node > ().tag != "namelist"){
																			yylhs.value.as< Node > () = Node("namelist",""); 
																			yylhs.value.as< Node > ().children.push_back(yystack_[2].value.as< Node > ());
																		  }
																		  yylhs.value.as< Node > ().children.push_back(Node("name",yystack_[0].value.as< std::string > ())); 
																		}
#line 1044 "binary.tab.cc" // lalr1.cc:859
    break;

  case 41:
#line 274 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = yystack_[0].value.as< Node > (); }
#line 1050 "binary.tab.cc" // lalr1.cc:859
    break;

  case 42:
#line 275 "binary.yy" // lalr1.cc:859
    { if(yystack_[2].value.as< Node > ().tag != "explist"){
																			yylhs.value.as< Node > () = Node("explist",""); 
																			yylhs.value.as< Node > ().children.push_back(yystack_[2].value.as< Node > ());
																		  }else yylhs.value.as< Node > () = yystack_[2].value.as< Node > ();
																		  yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ()); 
																		}
#line 1061 "binary.tab.cc" // lalr1.cc:859
    break;

  case 43:
#line 283 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("empty",""); }
#line 1067 "binary.tab.cc" // lalr1.cc:859
    break;

  case 44:
#line 284 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = yystack_[0].value.as< Node > (); }
#line 1073 "binary.tab.cc" // lalr1.cc:859
    break;

  case 45:
#line 287 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("empty",""); }
#line 1079 "binary.tab.cc" // lalr1.cc:859
    break;

  case 46:
#line 288 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("equals",""); yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ()); }
#line 1085 "binary.tab.cc" // lalr1.cc:859
    break;

  case 47:
#line 291 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("exp",yystack_[0].value.as< std::string > ()); }
#line 1091 "binary.tab.cc" // lalr1.cc:859
    break;

  case 48:
#line 292 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("exp",yystack_[0].value.as< std::string > ()); }
#line 1097 "binary.tab.cc" // lalr1.cc:859
    break;

  case 49:
#line 293 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("exp",yystack_[0].value.as< std::string > ()); }
#line 1103 "binary.tab.cc" // lalr1.cc:859
    break;

  case 50:
#line 294 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("number",yystack_[0].value.as< std::string > ()); }
#line 1109 "binary.tab.cc" // lalr1.cc:859
    break;

  case 51:
#line 295 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("exp",""); 
																		  int size = yystack_[0].value.as< std::string > ().size()-2;
																		  yylhs.value.as< Node > ().children.push_back(Node("string",yystack_[0].value.as< std::string > ().substr(1,size))); }
#line 1117 "binary.tab.cc" // lalr1.cc:859
    break;

  case 52:
#line 298 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("exp",yystack_[0].value.as< std::string > ()); }
#line 1123 "binary.tab.cc" // lalr1.cc:859
    break;

  case 53:
#line 299 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("exp",""); yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ()); }
#line 1129 "binary.tab.cc" // lalr1.cc:859
    break;

  case 54:
#line 300 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("exp",""); yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ()); }
#line 1135 "binary.tab.cc" // lalr1.cc:859
    break;

  case 55:
#line 301 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("exp",""); yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ()); }
#line 1141 "binary.tab.cc" // lalr1.cc:859
    break;

  case 56:
#line 302 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = yystack_[0].value.as< Node > (); }
#line 1147 "binary.tab.cc" // lalr1.cc:859
    break;

  case 57:
#line 303 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("exp",""); 
																		  yystack_[1].value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ()); 
																		  yylhs.value.as< Node > ().children.push_back(yystack_[1].value.as< Node > ());
																		}
#line 1156 "binary.tab.cc" // lalr1.cc:859
    break;

  case 58:
#line 309 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("empty",""); }
#line 1162 "binary.tab.cc" // lalr1.cc:859
    break;

  case 59:
#line 310 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = yystack_[0].value.as< Node > (); }
#line 1168 "binary.tab.cc" // lalr1.cc:859
    break;

  case 60:
#line 313 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = yystack_[0].value.as< Node > (); }
#line 1174 "binary.tab.cc" // lalr1.cc:859
    break;

  case 61:
#line 314 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("functioncall",""); yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ()); }
#line 1180 "binary.tab.cc" // lalr1.cc:859
    break;

  case 62:
#line 315 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = yystack_[1].value.as< Node > (); }
#line 1186 "binary.tab.cc" // lalr1.cc:859
    break;

  case 63:
#line 318 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = yystack_[1].value.as< Node > (); yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ()); }
#line 1192 "binary.tab.cc" // lalr1.cc:859
    break;

  case 64:
#line 319 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = yystack_[3].value.as< Node > (); 
																		  Node m = Node("method", yystack_[1].value.as< std::string > ()); 
																		  m.children.push_back(yystack_[0].value.as< Node > ()); 
																		  yylhs.value.as< Node > ().children.push_back(m); 
																		}
#line 1202 "binary.tab.cc" // lalr1.cc:859
    break;

  case 65:
#line 326 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("args",""); yylhs.value.as< Node > ().children.push_back(yystack_[1].value.as< Node > ()); }
#line 1208 "binary.tab.cc" // lalr1.cc:859
    break;

  case 66:
#line 327 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("args",""); yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ()); }
#line 1214 "binary.tab.cc" // lalr1.cc:859
    break;

  case 67:
#line 328 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("args",""); 
																		  int size = yystack_[0].value.as< std::string > ().size()-2;
																		  yylhs.value.as< Node > ().children.push_back(Node("string",yystack_[0].value.as< std::string > ().substr(1,size))); }
#line 1222 "binary.tab.cc" // lalr1.cc:859
    break;

  case 68:
#line 333 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("funcbody",""); 
																		  yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ()); 
																		}
#line 1230 "binary.tab.cc" // lalr1.cc:859
    break;

  case 69:
#line 338 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("body",""); 
																		  yylhs.value.as< Node > ().children.push_back(yystack_[3].value.as< Node > ()); 
																		  yylhs.value.as< Node > ().children.push_back(yystack_[1].value.as< Node > ()); 
																		}
#line 1239 "binary.tab.cc" // lalr1.cc:859
    break;

  case 70:
#line 344 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("parlist", "..."); }
#line 1245 "binary.tab.cc" // lalr1.cc:859
    break;

  case 71:
#line 345 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("parlist", ""); 
																		  yylhs.value.as< Node > ().children.push_back(yystack_[1].value.as< Node > ()); 
																		  yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ()); 
																		}
#line 1254 "binary.tab.cc" // lalr1.cc:859
    break;

  case 72:
#line 351 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("empty",""); }
#line 1260 "binary.tab.cc" // lalr1.cc:859
    break;

  case 73:
#line 352 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = yystack_[0].value.as< Node > (); }
#line 1266 "binary.tab.cc" // lalr1.cc:859
    break;

  case 74:
#line 355 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("empty",""); }
#line 1272 "binary.tab.cc" // lalr1.cc:859
    break;

  case 75:
#line 356 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("three_points",""); }
#line 1278 "binary.tab.cc" // lalr1.cc:859
    break;

  case 76:
#line 359 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("table",""); yylhs.value.as< Node > ().children.push_back(yystack_[1].value.as< Node > ()); }
#line 1284 "binary.tab.cc" // lalr1.cc:859
    break;

  case 77:
#line 362 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = yystack_[1].value.as< Node > (); }
#line 1290 "binary.tab.cc" // lalr1.cc:859
    break;

  case 78:
#line 364 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = yystack_[0].value.as< Node > (); }
#line 1296 "binary.tab.cc" // lalr1.cc:859
    break;

  case 79:
#line 365 "binary.yy" // lalr1.cc:859
    { if(yystack_[2].value.as< Node > ().tag != "fieldlist"){
																			yylhs.value.as< Node > () = Node("fieldlist",""); 
																			yylhs.value.as< Node > ().children.push_back(yystack_[2].value.as< Node > ()); 
																		  }else yylhs.value.as< Node > () = yystack_[2].value.as< Node > ();
																		  yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ()); 
																		}
#line 1307 "binary.tab.cc" // lalr1.cc:859
    break;

  case 80:
#line 373 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("empty",""); }
#line 1313 "binary.tab.cc" // lalr1.cc:859
    break;

  case 81:
#line 374 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = yystack_[0].value.as< Node > (); }
#line 1319 "binary.tab.cc" // lalr1.cc:859
    break;

  case 82:
#line 377 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = yystack_[3].value.as< Node > (); 
																		  Node e = Node("equals",""); 
																		  e.children.push_back(yystack_[0].value.as< Node > ()); 
																		  yylhs.value.as< Node > ().children.push_back(e); 
																		}
#line 1329 "binary.tab.cc" // lalr1.cc:859
    break;

  case 83:
#line 382 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("name",yystack_[2].value.as< std::string > ());
																		  Node e = Node("equals",""); 
																		  e.children.push_back(yystack_[0].value.as< Node > ()); 
																		  yylhs.value.as< Node > ().children.push_back(e); 
																		}
#line 1339 "binary.tab.cc" // lalr1.cc:859
    break;

  case 84:
#line 387 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = yystack_[0].value.as< Node > (); }
#line 1345 "binary.tab.cc" // lalr1.cc:859
    break;

  case 85:
#line 390 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node(",",""); }
#line 1351 "binary.tab.cc" // lalr1.cc:859
    break;

  case 86:
#line 391 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node(";",""); }
#line 1357 "binary.tab.cc" // lalr1.cc:859
    break;

  case 87:
#line 398 "binary.yy" // lalr1.cc:859
    { 
																		 yylhs.value.as< Node > () = Node("binop","+"); 
																		 yylhs.value.as< Node > ().children.push_back(yystack_[2].value.as< Node > ());
																		 yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ());
																		}
#line 1367 "binary.tab.cc" // lalr1.cc:859
    break;

  case 88:
#line 403 "binary.yy" // lalr1.cc:859
    { 
																		 yylhs.value.as< Node > () = Node("binop","-"); 
																		 yylhs.value.as< Node > ().children.push_back(yystack_[2].value.as< Node > ());
																		 yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ());
																		}
#line 1377 "binary.tab.cc" // lalr1.cc:859
    break;

  case 89:
#line 408 "binary.yy" // lalr1.cc:859
    { 
																		 yylhs.value.as< Node > () = Node("binop","*"); 
																		 yylhs.value.as< Node > ().children.push_back(yystack_[2].value.as< Node > ());
																		 yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ());
																		}
#line 1387 "binary.tab.cc" // lalr1.cc:859
    break;

  case 90:
#line 413 "binary.yy" // lalr1.cc:859
    { 
																		 yylhs.value.as< Node > () = Node("binop","/"); 
																		 yylhs.value.as< Node > ().children.push_back(yystack_[2].value.as< Node > ());
																		 yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ());
																		}
#line 1397 "binary.tab.cc" // lalr1.cc:859
    break;

  case 91:
#line 418 "binary.yy" // lalr1.cc:859
    { 
																		 yylhs.value.as< Node > () = Node("binop","^"); 
																		 yylhs.value.as< Node > ().children.push_back(yystack_[2].value.as< Node > ());
																		 yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ());
																		}
#line 1407 "binary.tab.cc" // lalr1.cc:859
    break;

  case 92:
#line 423 "binary.yy" // lalr1.cc:859
    { 
																		 yylhs.value.as< Node > () = Node("binop","%"); 
																		 yylhs.value.as< Node > ().children.push_back(yystack_[2].value.as< Node > ());
																		 yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ());
																		}
#line 1417 "binary.tab.cc" // lalr1.cc:859
    break;

  case 93:
#line 428 "binary.yy" // lalr1.cc:859
    { 
																		 yylhs.value.as< Node > () = Node("binop","."); 
																		 yylhs.value.as< Node > ().children.push_back(yystack_[2].value.as< Node > ());
																		 yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ());
																		}
#line 1427 "binary.tab.cc" // lalr1.cc:859
    break;

  case 94:
#line 433 "binary.yy" // lalr1.cc:859
    { 
																		 yylhs.value.as< Node > () = Node("binop","<"); 
																		 yylhs.value.as< Node > ().children.push_back(yystack_[2].value.as< Node > ());
																		 yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ());
																		}
#line 1437 "binary.tab.cc" // lalr1.cc:859
    break;

  case 95:
#line 438 "binary.yy" // lalr1.cc:859
    { 
																		 yylhs.value.as< Node > () = Node("binop","i"); 
																		 yylhs.value.as< Node > ().children.push_back(yystack_[2].value.as< Node > ());
																		 yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ());
																		}
#line 1447 "binary.tab.cc" // lalr1.cc:859
    break;

  case 96:
#line 443 "binary.yy" // lalr1.cc:859
    { 
																		 yylhs.value.as< Node > () = Node("binop",">"); 
																		 yylhs.value.as< Node > ().children.push_back(yystack_[2].value.as< Node > ());
																		 yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ());
																		}
#line 1457 "binary.tab.cc" // lalr1.cc:859
    break;

  case 97:
#line 448 "binary.yy" // lalr1.cc:859
    { 
																		 yylhs.value.as< Node > () = Node("binop","s"); 
																		 yylhs.value.as< Node > ().children.push_back(yystack_[2].value.as< Node > ());
																		 yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ());
																		}
#line 1467 "binary.tab.cc" // lalr1.cc:859
    break;

  case 98:
#line 453 "binary.yy" // lalr1.cc:859
    { 
																		 yylhs.value.as< Node > () = Node("binop","="); 
																		 yylhs.value.as< Node > ().children.push_back(yystack_[2].value.as< Node > ());
																		 yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ());
																		}
#line 1477 "binary.tab.cc" // lalr1.cc:859
    break;

  case 99:
#line 458 "binary.yy" // lalr1.cc:859
    { 
																		 yylhs.value.as< Node > () = Node("binop","~"); 
																		 yylhs.value.as< Node > ().children.push_back(yystack_[2].value.as< Node > ());
																		 yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ());
																		}
#line 1487 "binary.tab.cc" // lalr1.cc:859
    break;

  case 100:
#line 463 "binary.yy" // lalr1.cc:859
    { 
																		 yylhs.value.as< Node > () = Node("binop","&"); 
																		 yylhs.value.as< Node > ().children.push_back(yystack_[2].value.as< Node > ());
																		 yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ());
																		}
#line 1497 "binary.tab.cc" // lalr1.cc:859
    break;

  case 101:
#line 468 "binary.yy" // lalr1.cc:859
    { 
																		 yylhs.value.as< Node > () = Node("binop","|"); 
																		 yylhs.value.as< Node > ().children.push_back(yystack_[2].value.as< Node > ());
																		 yylhs.value.as< Node > ().children.push_back(yystack_[0].value.as< Node > ());
																		}
#line 1507 "binary.tab.cc" // lalr1.cc:859
    break;

  case 102:
#line 475 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("unop","-"); }
#line 1513 "binary.tab.cc" // lalr1.cc:859
    break;

  case 103:
#line 476 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("unop","not"); }
#line 1519 "binary.tab.cc" // lalr1.cc:859
    break;

  case 104:
#line 477 "binary.yy" // lalr1.cc:859
    { yylhs.value.as< Node > () = Node("unop","#"); }
#line 1525 "binary.tab.cc" // lalr1.cc:859
    break;


#line 1529 "binary.tab.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
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
        error (yysyntax_error_ (yystack_[0].state, yyla));
      }


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

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
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

          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }


      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

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
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.what());
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (state_type, const symbol_type&) const
  {
    return YY_("syntax error");
  }


  const signed char parser::yypact_ninf_ = -57;

  const signed char parser::yytable_ninf_ = -62;

  const short int
  parser::yypact_[] =
  {
     417,   -57,   258,   258,     2,   258,   417,   417,    24,    -6,
     -57,   258,    11,    36,    36,   -57,   -18,    10,   128,   267,
     -57,   -57,   -57,   294,   -57,   -57,    44,   -57,   -57,   -57,
     -57,   -57,   459,   128,   -57,   -57,   -57,   -57,   258,   361,
      31,   -19,   344,   194,    27,    45,    -7,    44,   -57,    63,
      23,    38,   -57,   525,   -57,    36,   -57,   -57,   -57,    -2,
     258,   258,   258,   -57,    75,    83,   -57,   -57,    53,   294,
     525,   -57,    60,    87,   -57,   -15,   -57,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   -57,   525,   417,   258,   258,    85,   417,   -57,
     258,    90,    62,    66,   -57,    44,   258,   -57,   258,   -57,
      28,    38,   483,    91,   -57,    43,   258,   505,   -57,   -57,
     -57,   294,   -57,   -57,    72,   -57,    96,   541,   556,   312,
     312,   312,   312,   312,   312,   312,    77,    77,   104,   104,
     104,   104,    93,   236,   -13,   -57,    81,   525,   -57,   107,
     108,   -57,   -57,    38,   525,   -57,   -57,   -57,   525,    94,
     -57,     1,   -57,   417,   258,     6,   258,   417,   -57,   -57,
     -57,   258,   -57,    99,   390,   258,   417,   101,   253,   103,
     525,   -57,   417,   419,   -57,   -57,   258,   113,   -57,   -57,
     417,   525,   417,   -57,   109,   -57
  };

  const unsigned char
  parser::yydefact_[] =
  {
      26,    36,     0,     0,     0,     0,    26,    26,     0,     0,
      25,    43,     0,     5,     5,     2,     0,    60,     0,    11,
     102,   103,   104,    80,    51,    50,     0,    47,    48,    49,
      52,    60,     0,    54,    61,    53,    55,    56,     0,     0,
      39,     0,     0,     7,     0,     0,    29,     0,    39,     0,
      45,    44,    24,    41,     1,     5,     6,     3,    27,     0,
       0,     0,    43,    67,     0,     0,    63,    66,    36,    80,
      84,    81,    80,     0,    78,    72,    68,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    62,    57,    26,     0,     0,     0,    26,    12,
       0,     0,     0,    32,    18,     0,     0,    20,     0,     4,
      60,    10,     0,     0,    38,     0,     0,    84,    86,    85,
      77,     0,    76,    70,    74,    73,     0,   101,   100,    94,
      95,    96,    97,    98,    99,    93,    87,    88,    89,    90,
      92,    91,    21,     0,     0,    40,     0,    14,    30,     0,
       0,    28,    19,    46,    42,    37,    65,    64,    83,     0,
      79,     0,    71,    26,     0,     8,     0,    26,    13,    31,
      33,     0,    75,     0,     0,     0,    26,     0,    58,     0,
      82,    69,    26,     0,     9,    15,     0,     0,    17,    22,
      26,    59,    26,    23,     0,    16
  };

  const short int
  parser::yypgoto_[] =
  {
     -57,   156,     5,    21,   -57,    13,   -57,   -57,   -57,   111,
     -57,   -57,   -57,     0,    -8,   -56,    97,   -57,    52,   -57,
       3,    20,    46,   -57,   -39,   -57,   -57,   -57,   -16,   -57,
     -57,    86,    41,   -57,   -57,   -57
  };

  const short int
  parser::yydefgoto_[] =
  {
      -1,    43,    57,    44,   177,    13,   165,    14,    15,    47,
     103,   151,    16,    31,    41,    51,    52,   107,    53,   187,
      33,    34,    66,    35,    76,   125,   126,   162,    36,    71,
      72,    73,    74,   121,    37,    38
  };

  const short int
  parser::yytable_[] =
  {
      17,    50,    67,    18,   111,    48,    17,    17,   104,    18,
      18,    54,    17,    46,    48,    18,    96,    67,     1,    58,
      19,   145,    40,     2,   167,    55,    19,    19,    45,    97,
      59,     1,    19,    60,    49,   108,     2,   123,   175,   176,
     144,     3,   101,    17,    46,     4,    18,     5,     6,     7,
     153,     8,     9,   172,    32,    39,    55,    42,   -34,   110,
     109,   -34,    18,    19,    23,    56,   152,   124,    62,    75,
      63,    97,    99,    20,   106,    70,   -35,    21,    22,   -35,
      68,    69,    95,   105,   100,     2,   108,    24,    25,   118,
      93,    88,    89,    90,    17,   114,    91,    18,    17,    67,
      26,    18,    27,   115,   116,   145,    28,    29,   119,   122,
     148,   149,    30,   112,    19,   142,   150,   156,    19,   146,
     161,   117,   163,    91,    70,   164,   168,   169,   170,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   181,   171,   185,   143,   188,    23,
     192,    61,   147,    62,   195,    63,    12,   102,   120,   113,
     154,   157,   160,    17,     0,     0,    18,    17,   158,     0,
      18,     0,     0,    70,     0,     0,    17,    64,    65,    18,
       0,     0,    17,    19,   173,    18,     0,    19,   179,     0,
      17,     0,    17,    18,     0,    18,    19,   184,     0,     0,
       0,     0,    19,   189,     0,     0,     0,     0,     0,     0,
      19,   193,    19,   194,     1,     0,   174,     0,   178,     2,
       0,     0,     0,   180,     3,     0,     0,   183,     4,     0,
       5,     6,     7,     0,     8,     9,     0,     0,   191,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,     0,     0,    91,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
       0,    20,    91,     0,     0,    21,    22,     0,     1,    23,
       0,     0,     0,     2,   166,    24,    25,     0,   -61,     0,
     -61,     0,     0,     0,   -61,     0,     0,     0,    26,     0,
      27,   186,     0,     0,    28,    29,     0,    20,     0,     0,
      30,    21,    22,     0,    68,    69,   -61,   -61,     0,     2,
       0,    24,    25,    85,    86,    87,    88,    89,    90,     0,
       0,    91,     0,     0,    26,     0,    27,     0,     0,     0,
      28,    29,     0,     0,     0,     0,    30,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,     0,     0,    91,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,     0,
      91,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   182,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,     0,     1,    91,     0,
       0,     0,     2,     0,     0,     0,     0,     3,     0,     0,
     190,     4,     0,     5,     6,     7,     0,     8,     9,     0,
      10,    11,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,     0,     0,    91,     0,
       0,     0,     0,     0,     0,    92,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
       0,     0,    91,     0,     0,     0,     0,   155,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,     0,     0,    91,     0,     0,   159,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,     0,     0,    91,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     0,     0,
      91,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,     0,     0,    91
  };

  const short int
  parser::yycheck_[] =
  {
       0,     9,    18,     0,    60,    20,     6,     7,    47,     6,
       7,     0,    12,    20,    20,    12,    35,    33,    20,    14,
       0,    20,    20,    25,    37,    12,     6,     7,     7,    48,
      48,    20,    12,    51,    40,    48,    25,    52,    32,    33,
      96,    30,    49,    43,    20,    34,    43,    36,    37,    38,
     106,    40,    41,    52,     2,     3,    43,     5,    48,    59,
      55,    51,    59,    43,    21,    29,   105,    75,    25,    25,
      27,    48,    45,    13,    51,    23,    48,    17,    18,    51,
      20,    21,    51,    20,    39,    25,    48,    27,    28,    29,
      38,    14,    15,    16,    94,    20,    19,    94,    98,   115,
      40,    98,    42,    20,    51,    20,    46,    47,    48,    22,
      20,    49,    52,    61,    94,    94,    50,    26,    98,    98,
      48,    69,    26,    19,    72,    32,    45,    20,    20,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    45,    51,    45,    95,    45,    21,
      37,    23,   100,    25,    45,    27,     0,    46,    72,    62,
     108,   115,   121,   163,    -1,    -1,   163,   167,   116,    -1,
     167,    -1,    -1,   121,    -1,    -1,   176,    49,    50,   176,
      -1,    -1,   182,   163,   163,   182,    -1,   167,   167,    -1,
     190,    -1,   192,   190,    -1,   192,   176,   176,    -1,    -1,
      -1,    -1,   182,   182,    -1,    -1,    -1,    -1,    -1,    -1,
     190,   190,   192,   192,    20,    -1,   164,    -1,   166,    25,
      -1,    -1,    -1,   171,    30,    -1,    -1,   175,    34,    -1,
      36,    37,    38,    -1,    40,    41,    -1,    -1,   186,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    -1,    19,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      -1,    13,    19,    -1,    -1,    17,    18,    -1,    20,    21,
      -1,    -1,    -1,    25,    48,    27,    28,    -1,    21,    -1,
      23,    -1,    -1,    -1,    27,    -1,    -1,    -1,    40,    -1,
      42,    48,    -1,    -1,    46,    47,    -1,    13,    -1,    -1,
      52,    17,    18,    -1,    20,    21,    49,    50,    -1,    25,
      -1,    27,    28,    11,    12,    13,    14,    15,    16,    -1,
      -1,    19,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    52,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    -1,    -1,    19,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      19,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    -1,    20,    19,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      31,    34,    -1,    36,    37,    38,    -1,    40,    41,    -1,
      43,    44,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    24,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    -1,    -1,    19,    -1,    -1,    22,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    -1,    -1,    19,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      19,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    -1,    19
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,    20,    25,    30,    34,    36,    37,    38,    40,    41,
      43,    44,    54,    58,    60,    61,    65,    66,    73,    74,
      13,    17,    18,    21,    27,    28,    40,    42,    46,    47,
      52,    66,    71,    73,    74,    76,    81,    87,    88,    71,
      20,    67,    71,    54,    56,    56,    20,    62,    20,    40,
      67,    68,    69,    71,     0,    58,    29,    55,    55,    48,
      51,    23,    25,    27,    49,    50,    75,    81,    20,    21,
      71,    82,    83,    84,    85,    25,    77,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    19,    26,    71,    31,    51,    35,    48,    37,    45,
      39,    49,    62,    63,    77,    20,    51,    70,    48,    55,
      66,    68,    71,    69,    20,    20,    51,    71,    29,    48,
      84,    86,    22,    52,    67,    78,    79,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    56,    71,    68,    20,    56,    71,    20,    49,
      50,    64,    77,    68,    71,    24,    26,    75,    71,    22,
      85,    48,    80,    26,    32,    59,    48,    37,    45,    20,
      20,    51,    52,    56,    71,    32,    33,    57,    71,    56,
      71,    45,    31,    71,    56,    45,    48,    72,    45,    56,
      31,    71,    37,    56,    56,    45
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,    53,    54,    54,    54,    55,    55,    56,    57,    57,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    59,    59,    59,    60,    60,    61,    61,    62,    63,
      63,    63,    64,    64,    65,    65,    66,    66,    66,    67,
      67,    68,    68,    69,    69,    70,    70,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    72,    72,
      73,    73,    73,    74,    74,    75,    75,    75,    76,    77,
      78,    78,    79,    79,    80,    80,    81,    82,    83,    83,
      84,    84,    85,    85,    85,    86,    86,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    88,    88,    88
  };

  const unsigned char
  parser::yyr2_[] =
  {
       0,     2,     1,     2,     3,     0,     1,     1,     0,     2,
       3,     1,     3,     5,     4,     7,    10,     7,     3,     4,
       3,     0,     4,     5,     2,     1,     0,     2,     3,     0,
       2,     3,     0,     2,     1,     3,     1,     4,     3,     1,
       3,     1,     3,     0,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     2,
       1,     1,     3,     2,     4,     3,     1,     1,     2,     5,
       1,     2,     0,     1,     0,     2,     3,     2,     1,     3,
       0,     1,     5,     3,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1
  };


#if YYDEBUG
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "OR", "AND", "INF",
  "INFEQUALS", "SUP", "SUPEQUALS", "DBLEQUALS", "DIFF", "TWOPOINTS",
  "PLUS", "MINUS", "STAR", "DIV", "PERCENT", "NOT", "DIESE", "HAT", "WORD",
  "OPENACC", "CLOSEACC", "OPENRECT", "CLOSERECT", "OPENBRACKET",
  "CLOSEBRACKET", "STRING", "NUMBER", "SEMI", "IF", "THEN", "ELSEIF",
  "ELSE", "FOR", "IN", "WHILE", "DO", "REPEAT", "UNTIL", "FUNCTION",
  "LOCAL", "NIL", "BREAK", "RETURN", "ENDDING", "FALSE", "TRUE", "COMMA",
  "POINT", "DBLPOINTS", "EQUALS", "TREPOINTS", "$accept", "chunk",
  "optsemi", "block", "optelseblock", "stat", "elseif", "laststat",
  "optlaststat", "funcname", "pointword", "optname", "varlist", "var",
  "namelist", "explist", "optexplist", "optequalsexplist", "exp", "optexp",
  "prefixexp", "functioncall", "args", "function", "funcbody", "parlist",
  "optparlist", "optcommapoint", "tableconstructor", "fieldlist",
  "fieldlistend", "optfieldlist", "field", "fieldsep", "binop", "unop", YY_NULLPTR
  };


  const unsigned short int
  parser::yyrline_[] =
  {
       0,   116,   116,   120,   124,   132,   133,   136,   139,   140,
     143,   147,   148,   149,   155,   161,   169,   179,   188,   192,
     196,   204,   205,   211,   224,   225,   228,   229,   232,   238,
     239,   240,   243,   244,   247,   248,   256,   257,   262,   265,
     266,   274,   275,   283,   284,   287,   288,   291,   292,   293,
     294,   295,   298,   299,   300,   301,   302,   303,   309,   310,
     313,   314,   315,   318,   319,   326,   327,   328,   333,   338,
     344,   345,   351,   352,   355,   356,   359,   362,   364,   365,
     373,   374,   377,   382,   387,   390,   391,   398,   403,   408,
     413,   418,   423,   428,   433,   438,   443,   448,   453,   458,
     463,   468,   475,   476,   477
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG



} // yy
#line 2017 "binary.tab.cc" // lalr1.cc:1167

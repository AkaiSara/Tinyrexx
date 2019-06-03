grammar tinyrexx;

program   : statement+ EOF;
          
statement : assign | print | input | w_loop | f_loop | i_t_e;

assign    : ID '=' a_expr;
print     : 'say' a_expr;
input     : 'pull' ID ;
i_t_e	  : 'if' guard 'then' 'do' statement+ 'end' e;
e 	  : 'else' 'do' statement+ 'end' | ;
w_loop    : 'do' 'while' guard statement+ 'end' ;
f_loop	  : 'do' ID '=' NUMBER 'to' NUMBER statement+ 'end';
guard     : OPENP ctest CLOSEP | ctest;
test      : a_expr r_op a_expr | '(' test ')';
ctest	  : ctest l_op ctest | test | NOT ctest | OPENP ctest CLOSEP | NOT a_expr | TRUE | FALSE;
a_expr    : ID | NUMBER | '(' a_expr ')' | a_expr a_op a_expr | MINUS a_expr ;
a_op      : MINUS | PLUS | MUL | DIV ;
r_op      : EQUAL | LT | LEQ | GT | GEQ ;
l_op	  : AND | OR ;


OPENP     : '(' ;
CLOSEP    : ')' ;
MINUS     : '-' ;
PLUS      : '+' ;
MUL       : '*' ;
DIV       : '/' ;
EQUAL     : '==' ;
LT        : '<' ;
LEQ       : '<=' ;
GT        : '>' ;
GEQ       : '>=' ;
TRUE      : 'true' ;
FALSE     : 'false' ;
ID        : [a-z]+ ;
NUMBER    : [0-9]+ ;
WS        : [ \n\t]+ -> skip;
AND	  : '&' ;
OR	  : '|' ;
NOT	  : '!' ;
ErrorChar : . ;


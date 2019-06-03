// Generated from tinyrexx.g4 by ANTLR 4.7
#include <iostream>
#include "MyListener.h"

using namespace std;

MyListener::MyListener(const std::set<std::string> &ids) {
  vars = ids;
}


void MyListener::enterProgram(tinyrexxParser::ProgramContext *ctx) {
    cout << "#include <iostream>" << endl << endl
         << "using namespace std;" << endl << endl
         << "int main() {" << endl;
    indent += 4;
    // Dichiara le variabili
    for (auto name : vars) {
        cout << string(indent, ' ') << "int " << name << " = 0;" << endl;
    }

}

void MyListener::exitProgram(tinyrexxParser::ProgramContext *ctx) {
    cout << "}" << endl;
}

void MyListener::enterAssign(tinyrexxParser::AssignContext * ctx) {
    string name = ctx->ID()->getText();
    cout << string(indent, ' ') << name << " = " ;
}

void MyListener::exitAssign(tinyrexxParser::AssignContext * ctx) {
    cout << ";" << endl;
}

void MyListener::enterPrint(tinyrexxParser::PrintContext * ctx) {
    cout << string(indent, ' ') << "cout << " ;    
}

void MyListener::exitPrint(tinyrexxParser::PrintContext * ctx) {
    cout << " << endl;" << endl;
}


void MyListener::exitInput(tinyrexxParser::InputContext * ctx) {
    string name = ctx->ID()->getText();
    cout << string(indent, ' ') << "cin >> " << name << ";" << endl;
}


void MyListener::enterA_expr(tinyrexxParser::A_exprContext * ctx) {
    // controllo in quale caso sono
    if(ctx->ID() != NULL) {
        // caso ID semplice
        cout << ctx->ID()->getText();
    } else if(ctx->NUMBER() != NULL) {
        // caso valore numerico semplice
        cout << ctx->NUMBER()->getText();
    } else if(ctx->MINUS() !=  NULL) {
        // caso operatore - unario
        cout << "-" ;
    } else if(ctx->a_op() != NULL) {
        // caso operatore binario: gestito da enterA_op
    } else {
        // caso parentesi
        cout << "(" ;
    }
}

void MyListener::exitA_expr(tinyrexxParser::A_exprContext * ctx) {
    // controllo in quale caso sono
    if(ctx->ID() != NULL) {
        // caso ID semplice
    } else if(ctx->NUMBER() != NULL) {
        // caso valore numerico semplice
    } else if(ctx->MINUS() !=  NULL) {
        // caso operatore - unario
    } else if(ctx->a_op() != NULL) {
        // caso operatore binario: gestito da exitA_op
    } else {
        // caso parentesi
        cout << ")" ;
    }
}

void MyListener::exitA_op(tinyrexxParser::A_opContext * ctx) {
    // controllo operatore aritmetico
    if(ctx->PLUS() != NULL) {
        cout << " + ";
    } else if(ctx->MINUS() != NULL) {
        cout << " - ";
    } else if(ctx->MUL() != NULL) {
        cout << " * ";
    } else if(ctx->DIV() != NULL) {
        cout << " / ";
    }
}

void MyListener::exitR_op(tinyrexxParser::R_opContext * ctx) {
    // controllo operatore aritmetico
    if(ctx->EQUAL() != NULL) {
        cout << " == ";
    } else if(ctx->LT() != NULL) {
        cout << " < ";
    } else if(ctx->LEQ() != NULL) {
        cout << " <= ";
    } else if(ctx->GT() != NULL) {
        cout << " > ";
    } else if(ctx->GEQ() != NULL) {
        cout << " >= ";
    }
}

void MyListener::exitL_op(tinyrexxParser::L_opContext * ctx) {
    // controllo operatore booleano/logico
    if(ctx->AND() != NULL) {
        cout << " && ";
    } else if(ctx->OR() != NULL) {
        cout << " || ";
    }
}


void MyListener::enterI_t_e(tinyrexxParser::I_t_eContext * ctx){
   cout << string(indent, ' ') << "if ";
   indent += 4;
}

void MyListener::exitI_t_e(tinyrexxParser::I_t_eContext * ctx){
   if(ctx->e()->statement(0)) {}
   else{
     indent -= 4;
     cout << string(indent, ' ') << "}" << endl;
   }
}

void MyListener::enterE(tinyrexxParser::EContext * ctx){
   if(ctx->statement(0)){
     indent -= 4;
     cout << string(indent, ' ') << "} else {"<<endl;
     indent += 4;
   }
}

void MyListener::exitE(tinyrexxParser::EContext * ctx){
   if(ctx->statement(0)){
     indent -= 4;
     cout << string(indent, ' ') << "}" << endl;
   }
}

void MyListener::enterW_loop(tinyrexxParser::W_loopContext * ctx){
    cout << string(indent, ' ') << "while";
    indent += 4;
}


void MyListener::exitW_loop(tinyrexxParser::W_loopContext * ctx){
    indent -= 4;
    cout << string(indent, ' ') << "}" << endl;
}

void MyListener::enterF_loop(tinyrexxParser::F_loopContext * ctx){
   string name= ctx->ID()->getText();
   string num0= ctx->NUMBER(0)->getText();
   string num1= ctx->NUMBER(1)->getText();
   cout<<string(indent, ' ')<<"for ("<<name<<"="<<num0<<"; "<<name<<"<"<<num1<<"; "<<name<<"++) {"<<endl;
   indent += 4;
}

void MyListener::exitF_loop(tinyrexxParser::F_loopContext * ctx){
   indent -= 4;
   cout << string(indent, ' ')<<"}" <<endl;
}


void MyListener::enterGuard(tinyrexxParser::GuardContext * ctx){
  if(ctx->OPENP())
      cout<<"(";
}

void MyListener::exitGuard(tinyrexxParser::GuardContext * ctx){
   if(ctx->CLOSEP())
      cout<<")";
   cout<<" {"<<endl;
}

void MyListener::enterTest(tinyrexxParser::TestContext * ctx){
    if(!ctx->test())
       cout << "(";
}

void MyListener::exitTest(tinyrexxParser::TestContext * ctx){
    if(!ctx->test())
       cout << ")";
}

void MyListener::enterCtest(tinyrexxParser::CtestContext * ctx){
   if(ctx->OPENP())
      cout<<"(";
   if(ctx->TRUE())
      cout<<"true";
   if(ctx->FALSE())
      cout<<"false";
   if(ctx->NOT())
      cout<<"!";
}

void MyListener::exitCtest(tinyrexxParser::CtestContext * ctx){
  if(ctx->CLOSEP())
      cout<<")";
}



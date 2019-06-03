
// Generated from tinyrexx.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "tinyrexxParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by tinyrexxParser.
 */
class  tinyrexxListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(tinyrexxParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(tinyrexxParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(tinyrexxParser::StatementContext *ctx) = 0;
  virtual void exitStatement(tinyrexxParser::StatementContext *ctx) = 0;

  virtual void enterAssign(tinyrexxParser::AssignContext *ctx) = 0;
  virtual void exitAssign(tinyrexxParser::AssignContext *ctx) = 0;

  virtual void enterPrint(tinyrexxParser::PrintContext *ctx) = 0;
  virtual void exitPrint(tinyrexxParser::PrintContext *ctx) = 0;

  virtual void enterInput(tinyrexxParser::InputContext *ctx) = 0;
  virtual void exitInput(tinyrexxParser::InputContext *ctx) = 0;

  virtual void enterI_t_e(tinyrexxParser::I_t_eContext *ctx) = 0;
  virtual void exitI_t_e(tinyrexxParser::I_t_eContext *ctx) = 0;

  virtual void enterE(tinyrexxParser::EContext *ctx) = 0;
  virtual void exitE(tinyrexxParser::EContext *ctx) = 0;

  virtual void enterW_loop(tinyrexxParser::W_loopContext *ctx) = 0;
  virtual void exitW_loop(tinyrexxParser::W_loopContext *ctx) = 0;

  virtual void enterF_loop(tinyrexxParser::F_loopContext *ctx) = 0;
  virtual void exitF_loop(tinyrexxParser::F_loopContext *ctx) = 0;

  virtual void enterGuard(tinyrexxParser::GuardContext *ctx) = 0;
  virtual void exitGuard(tinyrexxParser::GuardContext *ctx) = 0;

  virtual void enterTest(tinyrexxParser::TestContext *ctx) = 0;
  virtual void exitTest(tinyrexxParser::TestContext *ctx) = 0;

  virtual void enterCtest(tinyrexxParser::CtestContext *ctx) = 0;
  virtual void exitCtest(tinyrexxParser::CtestContext *ctx) = 0;

  virtual void enterA_expr(tinyrexxParser::A_exprContext *ctx) = 0;
  virtual void exitA_expr(tinyrexxParser::A_exprContext *ctx) = 0;

  virtual void enterA_op(tinyrexxParser::A_opContext *ctx) = 0;
  virtual void exitA_op(tinyrexxParser::A_opContext *ctx) = 0;

  virtual void enterR_op(tinyrexxParser::R_opContext *ctx) = 0;
  virtual void exitR_op(tinyrexxParser::R_opContext *ctx) = 0;

  virtual void enterL_op(tinyrexxParser::L_opContext *ctx) = 0;
  virtual void exitL_op(tinyrexxParser::L_opContext *ctx) = 0;


};

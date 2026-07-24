/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e3434
 * Function: Caver::TargetFrame::SetTargetInfo
 * Signature: undefined __thiscall SetTargetInfo(TargetFrame * this, string * param_1, int param_2, bool param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TargetFrame::SetTargetInfo(std::string const&, int, bool) */

void __thiscall
Caver::TargetFrame::SetTargetInfo(TargetFrame *this,string *param_1,int param_2,bool param_3)

{
  FUN_0066a6a8(this + 0xf8);
  *(int *)(this + 0x100) = param_2;
  this[0x104] = (TargetFrame)param_3;
                    /* try { // try from 004e346c to 005e346f has its CatchHandler @ 004e347c */
  UpdateInfo(this);
  return;
}



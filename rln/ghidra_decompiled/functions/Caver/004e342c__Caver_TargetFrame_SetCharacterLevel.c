/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e342c
 * Function: Caver::TargetFrame::SetCharacterLevel
 * Signature: undefined __thiscall SetCharacterLevel(TargetFrame * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TargetFrame::SetCharacterLevel(int) */

void __thiscall Caver::TargetFrame::SetCharacterLevel(TargetFrame *this,int param_1)

{
  *(int *)(this + 0xf0) = param_1;
  return;
}



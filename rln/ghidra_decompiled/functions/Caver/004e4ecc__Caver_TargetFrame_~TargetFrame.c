/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e4ecc
 * Function: Caver::TargetFrame::~TargetFrame
 * Signature: undefined __thiscall ~TargetFrame(TargetFrame * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TargetFrame::~TargetFrame() */

void __thiscall Caver::TargetFrame::~TargetFrame(TargetFrame *this)

{
  ~TargetFrame(this);
  operator_delete(this);
  return;
}



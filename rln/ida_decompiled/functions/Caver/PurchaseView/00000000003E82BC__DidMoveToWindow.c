/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E82BC
 * Mangled: _ZN5Caver12PurchaseView15DidMoveToWindowEv
 * Demangled: Caver::PurchaseView::DidMoveToWindow(void)
 *
 * Callers: 1
 *   0x00000000003E8284  Caver::PurchaseView::~PurchaseView()
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000003E82C8 string=0x00000000003E82CC "h"
 *   insn=0x00000000003E82CC string=0x00000000003E82D0 "y@"
 *   insn=0x00000000003E82D8 string=0x00000000003E82DC "h"
 *   insn=0x00000000003E82EC string=0x00000000003E82F0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PurchaseView::DidMoveToWindow(Caver::PurchaseView *this)
{
  __int64 result; // x0

  result = (*(__int64 (__fastcall **)(Caver::PurchaseView *))(*(_QWORD *)this + 240LL))(this);
  if ( result )
    return (*(__int64 (__fastcall **)(Caver::PurchaseView *))(*(_QWORD *)this + 200LL))(this);
  return result;
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003EFD58
 * Mangled: _ZN5Caver9StoreView15DidMoveToWindowEv
 * Demangled: Caver::StoreView::DidMoveToWindow(void)
 *
 * Callers: 1
 *   0x00000000003EF938  Caver::StoreView::~StoreView()
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000003EFD64 string=0x00000000003EFD68 "h"
 *   insn=0x00000000003EFD68 string=0x00000000003EFD6C "y@"
 *   insn=0x00000000003EFD74 string=0x00000000003EFD78 "h"
 *   insn=0x00000000003EFD88 string=0x00000000003EFD8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StoreView::DidMoveToWindow(Caver::StoreView *this)
{
  __int64 result; // x0

  result = (*(__int64 (__fastcall **)(Caver::StoreView *))(*(_QWORD *)this + 240LL))(this);
  if ( result )
    return (*(__int64 (__fastcall **)(Caver::StoreView *))(*(_QWORD *)this + 200LL))(this);
  return result;
}


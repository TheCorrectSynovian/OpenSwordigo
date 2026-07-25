/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A2F40
 * Mangled: _ZN5Caver20ProfileSelectionView15DidMoveToWindowEv
 * Demangled: Caver::ProfileSelectionView::DidMoveToWindow(void)
 *
 * Callers: 1
 *   0x00000000003A2DB4  Caver::ProfileSelectionView::~ProfileSelectionView()
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000003A2F4C string=0x00000000003A2F50 "h"
 *   insn=0x00000000003A2F50 string=0x00000000003A2F54 "y@"
 *   insn=0x00000000003A2F5C string=0x00000000003A2F60 "h"
 *   insn=0x00000000003A2F70 string=0x00000000003A2F74 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProfileSelectionView::DidMoveToWindow(Caver::ProfileSelectionView *this)
{
  __int64 result; // x0

  result = (*(__int64 (__fastcall **)(Caver::ProfileSelectionView *))(*(_QWORD *)this + 240LL))(this);
  if ( result )
    return (*(__int64 (__fastcall **)(Caver::ProfileSelectionView *))(*(_QWORD *)this + 200LL))(this);
  return result;
}


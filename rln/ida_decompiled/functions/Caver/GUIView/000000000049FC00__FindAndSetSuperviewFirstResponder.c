/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049FC00
 * Mangled: _ZN5Caver7GUIView33FindAndSetSuperviewFirstResponderEv
 * Demangled: Caver::GUIView::FindAndSetSuperviewFirstResponder(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x000000000049FC0C string=0x000000000049FC10 "h"
 *   insn=0x000000000049FC14 string=0x000000000049FC18 "a@"
 *   insn=0x000000000049FC20 string=0x000000000049FC24 "s.@"
 *   insn=0x000000000049FC20 string=0x000000000049FC34 "h"
 *   insn=0x000000000049FC24 string=0x000000000049FC28 "S"
 *   insn=0x000000000049FC38 string=0x000000000049FC3C "e@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIView::FindAndSetSuperviewFirstResponder(Caver::GUIView *this)
{
  while ( ((*(__int64 (__fastcall **)(Caver::GUIView *))(*(_QWORD *)this + 192LL))(this) & 1) == 0 )
  {
    this = (Caver::GUIView *)*((_QWORD *)this + 11);
    if ( !this )
      return 0;
  }
  (*(void (__fastcall **)(Caver::GUIView *))(*(_QWORD *)this + 200LL))(this);
  return 1;
}


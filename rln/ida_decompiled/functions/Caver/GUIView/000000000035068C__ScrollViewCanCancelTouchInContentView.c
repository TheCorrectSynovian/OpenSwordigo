/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000035068C
 * Mangled: _ZN5Caver7GUIView37ScrollViewCanCancelTouchInContentViewEPS0_
 * Demangled: Caver::GUIView::ScrollViewCanCancelTouchInContentView(Caver::GUIView*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000350690 string=0x0000000000350694 ""
 *   insn=0x0000000000350698 string=0x000000000035069C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIView::ScrollViewCanCancelTouchInContentView(Caver::GUIView *this, Caver::GUIView *a2)
{
  __int64 v2; // x0

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, Caver::GUIView *))(*(_QWORD *)v2 + 216LL))(v2, a2);
  else
    return 1;
}


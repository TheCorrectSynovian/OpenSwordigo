/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A0590
 * Mangled: _ZN5Caver7GUIView18DismissPopoverViewEv
 * Demangled: Caver::GUIView::DismissPopoverView(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000004A0594 string=0x00000000004A0598 ""
 *   insn=0x00000000004A059C string=0x00000000004A05A0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIView::DismissPopoverView(Caver::GUIView *this)
{
  __int64 result; // x0

  result = *((_QWORD *)this + 11);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 144LL))(result);
  return result;
}


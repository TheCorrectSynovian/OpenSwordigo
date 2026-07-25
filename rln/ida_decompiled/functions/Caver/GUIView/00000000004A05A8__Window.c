/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A05A8
 * Mangled: _ZN5Caver7GUIView6WindowEv
 * Demangled: Caver::GUIView::Window(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000004A05AC string=0x00000000004A05B0 ""
 *   insn=0x00000000004A05B4 string=0x00000000004A05B8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIView::Window(Caver::GUIView *this)
{
  __int64 result; // x0

  result = *((_QWORD *)this + 11);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 240LL))(result);
  return result;
}


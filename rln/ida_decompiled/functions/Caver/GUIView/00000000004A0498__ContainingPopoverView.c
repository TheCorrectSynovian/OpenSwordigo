/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A0498
 * Mangled: _ZN5Caver7GUIView21ContainingPopoverViewEv
 * Demangled: Caver::GUIView::ContainingPopoverView(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000004A049C string=0x00000000004A04A0 ""
 *   insn=0x00000000004A04A4 string=0x00000000004A04A8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIView::ContainingPopoverView(Caver::GUIView *this)
{
  __int64 result; // x0

  result = *((_QWORD *)this + 11);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 136LL))(result);
  return result;
}


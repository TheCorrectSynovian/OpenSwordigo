/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000350674
 * Mangled: _ZNK5Caver7GUIView13nextResponderEv
 * Demangled: Caver::GUIView::nextResponder(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000350678 string=0x000000000035067C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIView::nextResponder(Caver::GUIView *this)
{
  __int64 result; // x0

  result = *((_QWORD *)this + 3);
  if ( !result )
    return *((_QWORD *)this + 11);
  return result;
}


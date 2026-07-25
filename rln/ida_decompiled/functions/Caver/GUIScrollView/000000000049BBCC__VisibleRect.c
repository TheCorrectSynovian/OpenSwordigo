/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049BBCC
 * Mangled: _ZNK5Caver13GUIScrollView11VisibleRectEv
 * Demangled: Caver::GUIScrollView::VisibleRect(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000049BBD0 string=0x000000000049BBD4 "\t"
 *   insn=0x000000000049BBD8 string=0x000000000049BBDC "!@!"
 *   insn=0x000000000049BBE0 string=0x000000000049BBE4 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::GUIScrollView::VisibleRect@<S0>(Caver::GUIScrollView *this@<X0>, __int64 a2@<X8>)
{
  __int64 v2; // x9
  float result; // s0
  float v4; // s1

  v2 = *(_QWORD *)((char *)this + 140);
  result = -*((float *)this + 64);
  v4 = -*((float *)this + 75);
  *(float *)a2 = result;
  *(float *)(a2 + 4) = v4;
  *(_QWORD *)(a2 + 8) = v2;
  return result;
}


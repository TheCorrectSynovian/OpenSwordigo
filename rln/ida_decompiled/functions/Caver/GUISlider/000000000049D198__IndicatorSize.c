/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049D198
 * Mangled: _ZN5Caver9GUISlider13IndicatorSizeEv
 * Demangled: Caver::GUISlider::IndicatorSize(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000049D19C string=0x000000000049D1A0 ")AE"
 *   insn=0x000000000049D1A0 string=0x000000000049D1A4 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __usercall Caver::GUISlider::IndicatorSize@<D0>(Caver::GUISlider *this@<X0>, double *a2@<X8>)
{
  __int64 v2; // x9
  double result; // d0

  v2 = *((_QWORD *)this + 42);
  if ( v2 )
  {
    *a2 = *(double *)(v2 + 84);
  }
  else
  {
    __asm { FMOV            V0.2S, #10.0 }
    *a2 = result;
  }
  return result;
}


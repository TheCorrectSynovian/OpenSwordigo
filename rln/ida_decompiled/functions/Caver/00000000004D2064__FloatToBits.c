/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D2064
 * Mangled: _ZN5Caver11FloatToBitsEfj
 * Demangled: Caver::FloatToBits(float,uint)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000004D2068 string=0x00000000004D206C "!"
 *   insn=0x00000000004D2074 string=0x00000000004D2078 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FloatToBits(Caver *this, float a2)
{
  return (unsigned int)(float)((float)(fmaxf(fminf(a2, 1.0), 0.0) * (float)(unsigned int)((1 << (char)this) - 1)) + 0.5);
}


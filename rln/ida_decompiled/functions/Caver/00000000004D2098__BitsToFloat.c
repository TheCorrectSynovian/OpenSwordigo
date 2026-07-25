/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D2098
 * Mangled: _ZN5Caver11BitsToFloatEjj
 * Demangled: Caver::BitsToFloat(uint,uint)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004D2098 string=0x00000000004D209C "!"
 *   insn=0x00000000004D209C string=0x00000000004D20A0 ""
 *   insn=0x00000000004D20A0 string=0x00000000004D20A4 "\t"
 *   insn=0x00000000004D20A4 string=0x00000000004D20A8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::BitsToFloat(Caver *this, char a2)
{
  return (float)(((1 << a2) - 1) & (unsigned int)this) / (float)(unsigned int)((1 << a2) - 1);
}


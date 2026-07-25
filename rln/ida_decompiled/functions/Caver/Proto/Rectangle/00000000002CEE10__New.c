/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CEE10
 * Mangled: _ZNK5Caver5Proto9Rectangle3NewEv
 * Demangled: Caver::Proto::Rectangle::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x00000000002CEE1C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002CEE20 string=0x00000000002CEE24 ""
 *   insn=0x00000000002CEE28 string=0x00000000002CEE2C "A"
 *   insn=0x00000000002CEE2C string=0x00000000002CEE30 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::Rectangle::New(Caver::Proto::Rectangle *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x20u);
  result[2] = 0;
  result[3] = 0;
  *result = off_6C5AF8;
  result[1] = 0;
  return result;
}


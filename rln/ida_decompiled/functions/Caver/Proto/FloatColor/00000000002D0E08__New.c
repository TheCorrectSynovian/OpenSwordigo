/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D0E08
 * Mangled: _ZNK5Caver5Proto10FloatColor3NewEv
 * Demangled: Caver::Proto::FloatColor::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x00000000002D0E14 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D0E18 string=0x00000000002D0E1C ""
 *   insn=0x00000000002D0E24 string=0x00000000002D0E28 "A"
 *   insn=0x00000000002D0E28 string=0x00000000002D0E2C "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::FloatColor::New(Caver::Proto::FloatColor *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x20u);
  result[2] = 0;
  result[3] = 1065353216;
  *result = off_6C5CD8;
  result[1] = 0;
  return result;
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE2D8
 * Mangled: _ZNK5Caver5Proto7Vector23NewEv
 * Demangled: Caver::Proto::Vector2::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x00000000002CE2E4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002CE2E8 string=0x00000000002CE2EC ""
 *   insn=0x00000000002CE2F0 string=0x00000000002CE2F4 "A"
 *   insn=0x00000000002CE2F4 string=0x00000000002CE2F8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::Vector2::New(Caver::Proto::Vector2 *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x18u);
  result[1] = 0;
  result[2] = 0;
  *result = off_6C5A08;
  return result;
}


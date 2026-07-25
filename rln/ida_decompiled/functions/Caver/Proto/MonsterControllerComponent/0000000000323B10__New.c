/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323B10
 * Mangled: _ZNK5Caver5Proto26MonsterControllerComponent3NewEv
 * Demangled: Caver::Proto::MonsterControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x0000000000323B1C string=0x0000000000323B20 ""
 *   insn=0x0000000000323B1C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000323B20 string=0x0000000000323B24 ""
 *   insn=0x0000000000323B28 string=0x0000000000323B2C "A"
 *   insn=0x0000000000323B2C string=0x0000000000323B30 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::MonsterControllerComponent::New(Caver::Proto::MonsterControllerComponent *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x20u);
  result[2] = 0;
  result[3] = 0;
  *result = off_6C8AF0;
  result[1] = 0;
  return result;
}


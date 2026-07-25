/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003282D4
 * Mangled: _ZNK5Caver5Proto29BatMonsterControllerComponent3NewEv
 * Demangled: Caver::Proto::BatMonsterControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x00000000003282E0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003282E4 string=0x00000000003282E8 "aB"
 *   insn=0x00000000003282EC string=0x00000000003282F0 "A"
 *   insn=0x00000000003282F0 string=0x00000000003282F4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::BatMonsterControllerComponent::New(Caver::Proto::BatMonsterControllerComponent *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x18u);
  result[1] = 0;
  result[2] = 0;
  *result = off_6C8F28;
  return result;
}


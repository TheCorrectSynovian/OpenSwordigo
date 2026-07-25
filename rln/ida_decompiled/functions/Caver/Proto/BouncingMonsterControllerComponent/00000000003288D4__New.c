/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003288D4
 * Mangled: _ZNK5Caver5Proto34BouncingMonsterControllerComponent3NewEv
 * Demangled: Caver::Proto::BouncingMonsterControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x00000000003288DC string=0x00000000003288E0 "@3"
 *   insn=0x00000000003288E0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003288E4 string=0x00000000003288E8 ""
 *   insn=0x00000000003288EC string=0x00000000003288F0 "A"
 *   insn=0x00000000003288F0 string=0x00000000003288F4 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::BouncingMonsterControllerComponent::New(
        Caver::Proto::BouncingMonsterControllerComponent *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x20u);
  result[2] = 0;
  result[3] = 0;
  *result = off_6C8FA0;
  result[1] = 0;
  return result;
}


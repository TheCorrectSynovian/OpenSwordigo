/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000326E6C
 * Mangled: _ZNK5Caver5Proto32SkellyMonsterControllerComponent3NewEv
 * Demangled: Caver::Proto::SkellyMonsterControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x0000000000326E78 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000326E7C string=0x0000000000326E80 "=F"
 *   insn=0x0000000000326E84 string=0x0000000000326E88 "A"
 *   insn=0x0000000000326E88 string=0x0000000000326E8C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::SkellyMonsterControllerComponent::New(
        Caver::Proto::SkellyMonsterControllerComponent *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x18u);
  result[1] = 0;
  result[2] = 0;
  *result = off_6C8DC0;
  return result;
}


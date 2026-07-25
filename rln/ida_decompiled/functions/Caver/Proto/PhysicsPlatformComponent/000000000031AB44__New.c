/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031AB44
 * Mangled: _ZNK5Caver5Proto24PhysicsPlatformComponent3NewEv
 * Demangled: Caver::Proto::PhysicsPlatformComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x000000000031AB50 string=0x000000000031AB54 "H"
 *   insn=0x000000000031AB50 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031AB54 string=0x000000000031AB58 ""
 *   insn=0x000000000031AB5C string=0x000000000031AB60 "A"
 *   insn=0x000000000031AB60 string=0x000000000031AB64 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::PhysicsPlatformComponent::New(Caver::Proto::PhysicsPlatformComponent *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x20u);
  result[2] = 0;
  result[3] = 0;
  *result = off_6C84D8;
  result[1] = 0;
  return result;
}


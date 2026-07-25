/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000328F88
 * Mangled: _ZNK5Caver5Proto31MonsterDeathControllerComponent3NewEv
 * Demangled: Caver::Proto::MonsterDeathControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x0000000000328F94 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000328F98 string=0x0000000000328F9C "QF"
 *   insn=0x0000000000328FA0 string=0x0000000000328FA4 "A"
 *   insn=0x0000000000328FA4 string=0x0000000000328FA8 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MonsterDeathControllerComponent::New(
        Caver::Proto::MonsterDeathControllerComponent *this)
{
  __int64 result; // x0

  result = operator new(0x18u);
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)result = off_6C9018;
  *(_QWORD *)(result + 8) = 0;
  return result;
}


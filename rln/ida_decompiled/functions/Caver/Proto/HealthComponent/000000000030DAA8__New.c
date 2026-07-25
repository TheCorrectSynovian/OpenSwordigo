/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030DAA8
 * Mangled: _ZNK5Caver5Proto15HealthComponent3NewEv
 * Demangled: Caver::Proto::HealthComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x000000000030DAB4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030DAB8 string=0x000000000030DABC ""
 *   insn=0x000000000030DAC8 string=0x000000000030DACC "A"
 *   insn=0x000000000030DACC string=0x000000000030DAD0 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::HealthComponent::New(Caver::Proto::HealthComponent *this)
{
  __int64 result; // x0

  result = operator new(0x28u);
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_QWORD *)result = off_6C7B78;
  *(_QWORD *)(result + 8) = 0;
  return result;
}


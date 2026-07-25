/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030CDE4
 * Mangled: _ZNK5Caver5Proto15DamageComponent3NewEv
 * Demangled: Caver::Proto::DamageComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x000000000030CDF0 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030CDF4 string=0x000000000030CDF8 "E"
 *   insn=0x000000000030CE04 string=0x000000000030CE08 "A"
 *   insn=0x000000000030CE0C string=0x000000000030CE10 "\tP"
 *   insn=0x000000000030CE10 string=0x000000000030CE14 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DamageComponent::New(Caver::Proto::DamageComponent *this)
{
  __int64 result; // x0

  result = operator new(0x30u);
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 21) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_WORD *)(result + 40) = 256;
  *(_QWORD *)result = off_6C7B00;
  *(_DWORD *)(result + 44) = 0;
  return result;
}


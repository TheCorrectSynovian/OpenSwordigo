/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032472C
 * Mangled: _ZNK5Caver5Proto34ChargingMonsterControllerComponent3NewEv
 * Demangled: Caver::Proto::ChargingMonsterControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x0000000000324738 string=0x000000000032473C ""
 *   insn=0x0000000000324738 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032473C string=0x0000000000324740 ""
 *   insn=0x0000000000324748 string=0x000000000032474C "A"
 *   insn=0x000000000032474C string=0x0000000000324750 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ChargingMonsterControllerComponent::New(
        Caver::Proto::ChargingMonsterControllerComponent *this)
{
  __int64 result; // x0

  result = operator new(0x28u);
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_QWORD *)result = off_6C8BE0;
  *(_QWORD *)(result + 8) = 0;
  return result;
}


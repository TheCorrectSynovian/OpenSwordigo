/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030A358
 * Mangled: _ZNK5Caver5Proto18WaterMeshComponent3NewEv
 * Demangled: Caver::Proto::WaterMeshComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x000000000030A364 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030A368 string=0x000000000030A36C "iG"
 *   insn=0x000000000030A378 string=0x000000000030A37C "A"
 *   insn=0x000000000030A37C string=0x000000000030A380 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WaterMeshComponent::New(Caver::Proto::WaterMeshComponent *this)
{
  __int64 result; // x0

  result = operator new(0x30u);
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_QWORD *)result = off_6C7998;
  *(_QWORD *)(result + 8) = 0;
  return result;
}


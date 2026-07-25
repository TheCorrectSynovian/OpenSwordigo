/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032DA58
 * Mangled: _ZNK5Caver5Proto19SpawnPointComponent3NewEv
 * Demangled: Caver::Proto::SpawnPointComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x000000000032DA64 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032DA68 string=0x000000000032DA6C "mG"
 *   insn=0x000000000032DA74 string=0x000000000032DA78 "A"
 *   insn=0x000000000032DA78 string=0x000000000032DA7C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpawnPointComponent::New(Caver::Proto::SpawnPointComponent *this)
{
  __int64 result; // x0

  result = operator new(0x20u);
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_QWORD *)result = off_6C93D8;
  return result;
}


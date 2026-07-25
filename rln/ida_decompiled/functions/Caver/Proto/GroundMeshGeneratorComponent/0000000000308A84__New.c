/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000308A84
 * Mangled: _ZNK5Caver5Proto28GroundMeshGeneratorComponent3NewEv
 * Demangled: Caver::Proto::GroundMeshGeneratorComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x0000000000308A90 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000308A94 string=0x0000000000308A98 ""
 *   insn=0x0000000000308AA4 string=0x0000000000308AA8 "A"
 *   insn=0x0000000000308AA8 string=0x0000000000308AAC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GroundMeshGeneratorComponent::New(Caver::Proto::GroundMeshGeneratorComponent *this)
{
  __int64 result; // x0

  result = operator new(0x40u);
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)result = off_6C78A8;
  *(_DWORD *)(result + 56) = 0;
  return result;
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000446878
 * Mangled: _ZN5Caver11MeshBuilder21InitializeTexCoordSetEiNS_8DataTypeEi
 * Demangled: Caver::MeshBuilder::InitializeTexCoordSet(int,Caver::DataType,int)
 *
 * Callers: 1
 *   0x00000000001F7CF0  Caver::MeshBuilder::InitializeTexCoordSet(int,Caver::DataType,int)
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000044687C string=0x0000000000446880 ")@"
 *   insn=0x0000000000446884 string=0x0000000000446888 "( )"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MeshBuilder::InitializeTexCoordSet(__int64 result, int a2, int a3, int a4)
{
  __int64 v4; // x8

  v4 = *(_QWORD *)(*(_QWORD *)result + 80LL) + 24LL * a2;
  *(_DWORD *)v4 = a3;
  *(_DWORD *)(v4 + 4) = a4;
  *(_DWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v4 + 16) = 0;
  return result;
}


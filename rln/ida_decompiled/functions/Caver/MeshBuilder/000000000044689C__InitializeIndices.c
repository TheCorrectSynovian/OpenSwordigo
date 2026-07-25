/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044689C
 * Mangled: _ZN5Caver11MeshBuilder17InitializeIndicesENS_8DataTypeE
 * Demangled: Caver::MeshBuilder::InitializeIndices(Caver::DataType)
 *
 * Callers: 1
 *   0x00000000001FD170  Caver::MeshBuilder::InitializeIndices(Caver::DataType)
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000044689C string=0x00000000004468A0 ""
 *   insn=0x00000000004468A0 string=0x00000000004468A4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::MeshBuilder::InitializeIndices(__int64 *a1, int a2)
{
  __int64 v2; // x8
  double result; // d0

  v2 = *a1;
  *(_QWORD *)&result = 1;
  *(_DWORD *)(v2 + 8) = a2;
  *(_QWORD *)(v2 + 12) = 1;
  *(_QWORD *)(v2 + 24) = 0;
  return result;
}


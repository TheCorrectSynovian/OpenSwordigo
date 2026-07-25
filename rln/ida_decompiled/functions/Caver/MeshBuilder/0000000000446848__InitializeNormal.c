/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000446848
 * Mangled: _ZN5Caver11MeshBuilder16InitializeNormalENS_8DataTypeEi
 * Demangled: Caver::MeshBuilder::InitializeNormal(Caver::DataType,int)
 *
 * Callers: 1
 *   0x0000000000203380  Caver::MeshBuilder::InitializeNormal(Caver::DataType,int)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::MeshBuilder::InitializeNormal(__int64 *result, int a2, int a3)
{
  __int64 v3; // x8

  v3 = *result;
  *(_DWORD *)(v3 + 56) = a2;
  *(_DWORD *)(v3 + 60) = a3;
  *(_DWORD *)(v3 + 64) = 0;
  *(_QWORD *)(v3 + 72) = 0;
  return result;
}


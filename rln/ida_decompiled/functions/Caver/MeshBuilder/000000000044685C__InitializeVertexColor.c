/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044685C
 * Mangled: _ZN5Caver11MeshBuilder21InitializeVertexColorENS_8DataTypeEi
 * Demangled: Caver::MeshBuilder::InitializeVertexColor(Caver::DataType,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::MeshBuilder::InitializeVertexColor(__int64 *result, int a2, int a3)
{
  __int64 v3; // x8

  v3 = *result;
  *(_DWORD *)(v3 + 88) = a2;
  *(_DWORD *)(v3 + 92) = a3;
  *(_DWORD *)(v3 + 96) = 0;
  *(_QWORD *)(v3 + 104) = 0;
  return result;
}


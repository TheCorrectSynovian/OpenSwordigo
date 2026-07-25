/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048D358
 * Mangled: _ZN5Caver17VertexArrayObject17CreateIndexBufferENS_8DataTypeEi
 * Demangled: Caver::VertexArrayObject::CreateIndexBuffer(Caver::DataType,int)
 *
 * Callers: 1
 *   0x00000000001F92C0  Caver::VertexArrayObject::CreateIndexBuffer(Caver::DataType,int)
 *
 * Callees: 2
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FB1D0  Caver::SizeOfDataType(Caver::DataType)
 *
 * Referenced strings: 5
 *   insn=0x000000000048D374 string=0x000000000048D378 "|"
 *   insn=0x000000000048D374 string=0x00000000001FB1D0 "0'"
 *   insn=0x000000000048D378 string=0x000000000048D37C "}@"
 *   insn=0x000000000048D384 string=0x000000000048D388 "z"
 *   insn=0x000000000048D388 string=0x00000000001F8570 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::VertexArrayObject::CreateIndexBuffer(__int64 a1, int a2, int a3)
{
  int v5; // w0
  unsigned __int64 v6; // x0
  __int64 result; // x0

  *(_DWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 20) = a3;
  v5 = Caver::SizeOfDataType();
  if ( v5 * a3 < 0LL )
    v6 = -1;
  else
    v6 = v5 * a3;
  result = operator new[](v6);
  *(_QWORD *)(a1 + 24) = result;
  return result;
}


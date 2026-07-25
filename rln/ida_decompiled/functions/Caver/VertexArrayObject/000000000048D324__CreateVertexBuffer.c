/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048D324
 * Mangled: _ZN5Caver17VertexArrayObject18CreateVertexBufferEi
 * Demangled: Caver::VertexArrayObject::CreateVertexBuffer(int)
 *
 * Callers: 1
 *   0x00000000001F3DB0  Caver::VertexArrayObject::CreateVertexBuffer(int)
 *
 * Callees: 1
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 4
 *   insn=0x000000000048D32C string=0x000000000048D330 "(|@"
 *   insn=0x000000000048D33C string=0x000000000048D340 "a"
 *   insn=0x000000000048D344 string=0x000000000048D348 "`"
 *   insn=0x000000000048D344 string=0x00000000001F8570 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::VertexArrayObject::CreateVertexBuffer(Caver::VertexArrayObject *this, int a2)
{
  unsigned __int64 v3; // x0
  __int64 result; // x0

  if ( a2 < 0LL )
    v3 = -1;
  else
    v3 = a2;
  *(_DWORD *)this = a2;
  result = operator new[](v3);
  *((_QWORD *)this + 1) = result;
  return result;
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000444AD0
 * Mangled: _ZN5Caver4Mesh17AllocVertexBufferEi
 * Demangled: Caver::Mesh::AllocVertexBuffer(int)
 *
 * Callers: 1
 *   0x00000000001FC850  Caver::Mesh::AllocVertexBuffer(int)
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 6
 *   insn=0x0000000000444AD8 string=0x0000000000444ADC "(|@"
 *   insn=0x0000000000444AE8 string=0x0000000000444AEC "a\n"
 *   insn=0x0000000000444AF0 string=0x0000000000444AF4 "h"
 *   insn=0x0000000000444AF0 string=0x00000000001F8570 "0'"
 *   insn=0x0000000000444AF4 string=0x0000000000444AF8 "`"
 *   insn=0x0000000000444B0C string=0x00000000001F4F60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Mesh::AllocVertexBuffer(Caver::Mesh *this, int a2)
{
  unsigned __int64 v3; // x0
  __int64 v4; // x0
  void *v5; // x8

  if ( a2 < 0LL )
    v3 = -1;
  else
    v3 = a2;
  *((_DWORD *)this + 66) = a2;
  v4 = operator new[](v3);
  v5 = (void *)*((_QWORD *)this + 34);
  *((_QWORD *)this + 34) = v4;
  if ( v5 )
    operator delete[](v5);
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000444A84
 * Mangled: _ZN5Caver4Mesh16AllocIndexBufferEi
 * Demangled: Caver::Mesh::AllocIndexBuffer(int)
 *
 * Callers: 2
 *   0x00000000001FD600  Caver::Mesh::AllocIndexBuffer(int)
 *   0x0000000000444214  Caver::Mesh::LoadFromProtobufMessage(Caver::Proto::Mesh const&)
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 7
 *   insn=0x0000000000444A8C string=0x0000000000444A90 "(|@"
 *   insn=0x0000000000444A9C string=0x0000000000444AA0 "a"
 *   insn=0x0000000000444AA4 string=0x0000000000444AA8 "h"
 *   insn=0x0000000000444AA4 string=0x00000000001F8570 "0'"
 *   insn=0x0000000000444AA8 string=0x0000000000444AAC "`"
 *   insn=0x0000000000444ABC string=0x0000000000444AC0 "("
 *   insn=0x0000000000444AC0 string=0x00000000001F4F60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Mesh::AllocIndexBuffer(Caver::Mesh *this, int a2)
{
  unsigned __int64 v3; // x0
  __int64 v4; // x0
  void *v5; // x8

  if ( a2 < 0LL )
    v3 = -1;
  else
    v3 = a2;
  *((_DWORD *)this + 70) = a2;
  v4 = operator new[](v3);
  v5 = (void *)*((_QWORD *)this + 36);
  *((_QWORD *)this + 36) = v4;
  if ( v5 )
    operator delete[](v5);
}


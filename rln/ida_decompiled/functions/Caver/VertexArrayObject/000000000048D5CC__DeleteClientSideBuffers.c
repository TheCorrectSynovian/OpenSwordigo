/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048D5CC
 * Mangled: _ZN5Caver17VertexArrayObject23DeleteClientSideBuffersEv
 * Demangled: Caver::VertexArrayObject::DeleteClientSideBuffers(void)
 *
 * Callers: 1
 *   0x00000000001F91E0  Caver::VertexArrayObject::DeleteClientSideBuffers(void)
 *
 * Callees: 1
 *   0x00000000001F4F60  operator delete[](void *)
 *
 * Referenced strings: 9
 *   insn=0x000000000048D5D8 string=0x000000000048D5DC "h"@"
 *   insn=0x000000000048D5E0 string=0x000000000048D5E4 "k"
 *   insn=0x000000000048D5E4 string=0x000000000048D5E8 "`"
 *   insn=0x000000000048D5E8 string=0x000000000048D5EC "`"
 *   insn=0x000000000048D5EC string=0x000000000048D5F0 "\"
 *   insn=0x000000000048D5EC string=0x000000000048D5F8 "`"
 *   insn=0x000000000048D5F0 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000048D5F8 string=0x000000000048D5FC "`"
 *   insn=0x000000000048D5FC string=0x000000000048D600 "X"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::VertexArrayObject::DeleteClientSideBuffers(Caver::VertexArrayObject *this)
{
  void *v2; // x0
  void *v3; // x0

  if ( *((int *)this + 8) < 1 )
    return 0;
  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    operator delete[](v2);
    *((_QWORD *)this + 1) = 0;
  }
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    operator delete[](v3);
    *((_QWORD *)this + 3) = 0;
  }
  return 1;
}


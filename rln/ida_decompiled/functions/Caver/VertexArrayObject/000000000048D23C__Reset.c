/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048D23C
 * Mangled: _ZN5Caver17VertexArrayObject5ResetEv
 * Demangled: Caver::VertexArrayObject::Reset(void)
 *
 * Callers: 1
 *   0x00000000001F5390  Caver::VertexArrayObject::Reset(void)
 *
 * Callees: 3
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F88D0  .glDeleteBuffers
 *
 * Referenced strings: 21
 *   insn=0x000000000048D248 string=0x000000000048D24C "`"
 *   insn=0x000000000048D250 string=0x000000000048D264 "`"@"
 *   insn=0x000000000048D258 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000048D26C string=0x000000000048D270 ""
 *   insn=0x000000000048D270 string=0x000000000048D274 "hB@"
 *   insn=0x000000000048D274 string=0x000000000048D278 "H"
 *   insn=0x000000000048D278 string=0x000000000048D2A0 "t"
 *   insn=0x000000000048D27C string=0x000000000048D280 "i"
 *   insn=0x000000000048D280 string=0x000000000048D284 "?y("
 *   insn=0x000000000048D284 string=0x000000000048D288 "`""
 *   insn=0x000000000048D288 string=0x000000000048D28C ""
 *   insn=0x000000000048D2A8 string=0x000000000048D2AC "h"@"
 *   insn=0x000000000048D2A8 string=0x00000000001F88D0 "0'"
 *   insn=0x000000000048D2BC string=0x000000000048D2C0 "i""
 *   insn=0x000000000048D2C0 string=0x000000000048D2C4 ""
 *   insn=0x000000000048D2D8 string=0x000000000048D2EC "`"
 *   insn=0x000000000048D2E0 string=0x000000000048D2E4 "{"
 *   insn=0x000000000048D2F8 string=0x000000000048D2FC "`"
 *   insn=0x000000000048D2FC string=0x000000000048D308 "`"
 *   insn=0x000000000048D300 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000048D308 string=0x000000000048D30C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::VertexArrayObject::Reset(Caver::VertexArrayObject *this)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x20
  int v4; // w0
  __int64 v5; // x8
  __int64 v6; // x0
  __int64 v7; // x8
  void *v8; // x0
  void *v9; // x0

  v2 = (_QWORD *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)v2[3];
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = *((_DWORD *)this + 8);
  *((_QWORD *)this + 7) = 0;
  if ( v4 >= 1 )
  {
    if ( !*((_DWORD *)this + 16) )
      goto LABEL_8;
    v5 = 0;
    do
    {
      *((_DWORD *)this + v5 + 16) = 0;
      v6 = *((int *)this + 8);
      ++v5;
    }
    while ( v5 < v6 );
    if ( (int)v6 >= 1 )
    {
LABEL_8:
      glDeleteBuffers();
      if ( *((int *)this + 8) >= 1 )
      {
        v7 = 0;
        do
          *((_DWORD *)this + v7++ + 10) = 0;
        while ( v7 < *((int *)this + 8) );
      }
    }
  }
  if ( *((_DWORD *)this + 12) )
  {
    glDeleteBuffers();
    *((_DWORD *)this + 12) = 0;
  }
  v8 = (void *)*((_QWORD *)this + 1);
  *((_DWORD *)this + 8) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 5) = 0;
  if ( v8 )
  {
    operator delete[](v8);
    *((_QWORD *)this + 1) = 0;
  }
  v9 = (void *)*((_QWORD *)this + 3);
  if ( v9 )
  {
    operator delete[](v9);
    *((_QWORD *)this + 3) = 0;
  }
}


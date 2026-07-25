/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048D8B8
 * Mangled: _ZN5Caver17VertexArrayObject10BindArraysEPNS_16RenderingContextE
 * Demangled: Caver::VertexArrayObject::BindArrays(Caver::RenderingContext *)
 *
 * Callers: 1
 *   0x00000000001FF830  Caver::VertexArrayObject::BindArrays(Caver::RenderingContext *)
 *
 * Callees: 7
 *   0x00000000001F3E90  .glTexCoordPointer
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F85D0  Caver::RenderingContext::SetEnabledVertexAttribArrays(uint const*,int)
 *   0x00000000001F9880  .glNormalPointer
 *   0x0000000000200850  .glBindBuffer
 *   0x0000000000201850  .glVertexPointer
 *   0x0000000000202AA0  .glColorPointer
 *
 * Referenced strings: 25
 *   insn=0x000000000048D8D0 string=0x000000000048D8D4 "V"
 *   insn=0x000000000048D8EC string=0x000000000048D8F0 "\tA@"
 *   insn=0x000000000048D8F0 string=0x000000000048D8F4 "i"
 *   insn=0x000000000048D8F8 string=0x000000000048D8FC "a"
 *   insn=0x000000000048D8FC string=0x000000000048D900 "@"
 *   insn=0x000000000048D908 string=0x000000000048D90C "a"
 *   insn=0x000000000048D90C string=0x000000000048D910 "`"
 *   insn=0x000000000048D91C string=0x000000000048D920 "Z"
 *   insn=0x000000000048D928 string=0x000000000048D92C "y"
 *   insn=0x000000000048D92C string=0x000000000048D930 "Z"
 *   insn=0x000000000048D938 string=0x000000000048D93C ""
 *   insn=0x000000000048D944 string=0x000000000048D948 "H{"
 *   insn=0x000000000048D950 string=0x000000000048D954 ""
 *   insn=0x000000000048D958 string=0x000000000048D964 "O"
 *   insn=0x000000000048D958 string=0x000000000048D980 "D"
 *   insn=0x000000000048D978 string=0x00000000001F9880 "0'"
 *   insn=0x000000000048D980 string=0x00000000001F3E90 "P'"
 *   insn=0x000000000048D988 string=0x000000000048D98C "{5"
 *   insn=0x000000000048D994 string=0x000000000048D998 ")@"
 *   insn=0x000000000048D998 string=0x000000000048D99C "h"
 *   insn=0x000000000048D9A4 string=0x000000000048D9B4 "h"
 *   insn=0x000000000048D9C0 string=0x000000000048D9C4 "7"
 *   insn=0x000000000048D9DC string=0x00000000001F85D0 "0'"
 *   insn=0x000000000048D9EC string=0x000000000048DA0C "1"
 *   insn=0x000000000048DA0C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::VertexArrayObject::BindArrays(__int64 this, Caver::RenderingContext *a2)
{
  __int64 v2; // x20
  __int64 v4; // x8
  __int64 v5; // x23
  __int64 v6; // x21
  unsigned int v7[10]; // [xsp+0h] [xbp-70h] BYREF
  __int64 v8; // [xsp+28h] [xbp-48h]

  v2 = this;
  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = this + 4LL * *(int *)(this + 36);
  if ( !*(_DWORD *)(v4 + 64) )
  {
    if ( *(_DWORD *)(v4 + 40) )
      glBindBuffer();
    if ( *(_DWORD *)(v2 + 48) )
      glBindBuffer();
    v5 = *(_QWORD *)(v2 + 56);
    if ( v5 )
    {
      v6 = 0;
      do
      {
        v7[v6++] = *(_DWORD *)v5;
        if ( !*(_DWORD *)a2 )
        {
          switch ( *(_DWORD *)v5 )
          {
            case 0x8074:
              glVertexPointer();
              break;
            case 0x8075:
              glNormalPointer();
              break;
            case 0x8076:
              glColorPointer();
              break;
            case 0x8078:
              glTexCoordPointer();
              break;
            default:
              break;
          }
        }
        v5 = *(_QWORD *)(v5 + 24);
      }
      while ( v5 );
    }
    else
    {
      LODWORD(v6) = 0;
    }
    return Caver::RenderingContext::SetEnabledVertexAttribArrays(a2, v7, v6);
  }
  return this;
}


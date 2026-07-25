/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048C178
 * Mangled: _ZN5Caver16RenderingContext32SetEnabledVertexAttribArraysImplEPji
 * Demangled: Caver::RenderingContext::SetEnabledVertexAttribArraysImpl(uint *,int)
 *
 * Callers: 1
 *   0x00000000001FD1E0  Caver::RenderingContext::SetEnabledVertexAttribArraysImpl(uint *,int)
 *
 * Callees: 1
 *   0x00000000001FDD60  Caver::VertexArrayObject::SetVertexAttribArrayEnabled(Caver::RenderingContext *,uint,bool)
 *
 * Referenced strings: 17
 *   insn=0x000000000048C194 string=0x000000000048C198 "h2A"
 *   insn=0x000000000048C1A4 string=0x000000000048C1A8 "+"
 *   insn=0x000000000048C1BC string=0x000000000048C1C0 "h\n"
 *   insn=0x000000000048C1CC string=0x000000000048C1D0 ""
 *   insn=0x000000000048C1E0 string=0x000000000048C1E4 ""
 *   insn=0x000000000048C1E8 string=0x000000000048C1EC "k"
 *   insn=0x000000000048C1FC string=0x00000000001FDD60 "0'"
 *   insn=0x000000000048C208 string=0x000000000048C20C "h"
 *   insn=0x000000000048C208 string=0x000000000048C238 "h2"
 *   insn=0x000000000048C20C string=0x000000000048C210 "H"
 *   insn=0x000000000048C210 string=0x000000000048C214 "{"
 *   insn=0x000000000048C214 string=0x000000000048C218 ""
 *   insn=0x000000000048C228 string=0x000000000048C22C "i"
 *   insn=0x000000000048C22C string=0x000000000048C230 "(\t"
 *   insn=0x000000000048C248 string=0x000000000048C24C "\n"
 *   insn=0x000000000048C24C string=0x000000000048C28C "w2"
 *   insn=0x000000000048C270 string=0x000000000048C274 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::SetEnabledVertexAttribArraysImpl(
        __int64 this,
        unsigned int *a2,
        int a3,
        bool a4)
{
  __int64 v4; // x19
  __int64 v7; // x24
  int v8; // w23
  __int64 v9; // x8
  unsigned int v10; // w22
  _DWORD *v11; // x28
  __int64 v12; // x8
  __int64 v13; // x22
  unsigned int v14; // w21
  __int64 v15; // x8

  v4 = this;
  if ( *(int *)(this + 304) < 1 )
  {
    v8 = 0;
    if ( a3 <= 0 )
      goto LABEL_20;
    goto LABEL_15;
  }
  v7 = 0;
  v8 = 0;
  do
  {
    v9 = v4 + 4 * v7;
    v10 = *(_DWORD *)(v9 + 264);
    v11 = (_DWORD *)(v9 + 264);
    if ( a3 < 1 )
    {
LABEL_7:
      this = Caver::VertexArrayObject::SetVertexAttribArrayEnabled(
               (Caver::VertexArrayObject *)v4,
               (Caver::RenderingContext *)v10,
               0,
               a4);
      *v11 = 0;
      if ( v10 == 32886 && !*(_DWORD *)v4 )
        *(_BYTE *)(v4 + 118) = 1;
    }
    else
    {
      v12 = 0;
      while ( v7 != a2[v12] )
      {
        if ( ++v12 >= a3 )
          goto LABEL_7;
      }
      a2[v12] = 0;
      if ( v7 != v8 )
        *(_DWORD *)(v4 + 4LL * v8 + 264) = *v11;
      ++v8;
    }
    ++v7;
  }
  while ( v7 < *(int *)(v4 + 304) );
  if ( v8 < a3 )
  {
LABEL_15:
    if ( a3 > 0 )
    {
      v13 = (unsigned int)a3;
      do
      {
        v14 = *a2;
        if ( *a2 )
        {
          this = Caver::VertexArrayObject::SetVertexAttribArrayEnabled(
                   (Caver::VertexArrayObject *)v4,
                   (Caver::RenderingContext *)v14,
                   1u,
                   a4);
          v15 = v4 + 4LL * v8++;
          *(_DWORD *)(v15 + 264) = v14;
        }
        --v13;
        ++a2;
      }
      while ( v13 );
    }
  }
LABEL_20:
  *(_DWORD *)(v4 + 304) = v8;
  return this;
}


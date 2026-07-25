/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C7E68
 * Mangled: _ZN5Caver6Sprite16AddTriangleStripEiPKNS_7Vector2ES3_RKNS_5ColorE
 * Demangled: Caver::Sprite::AddTriangleStrip(int,Caver::Vector2 const*,Caver::Vector2 const*,Caver::Color const&)
 *
 * Callers: 1
 *   0x0000000000203E10  Caver::Sprite::AddTriangleStrip(int,Caver::Vector2 const*,Caver::Vector2 const*,Caver::Color const&)
 *
 * Callees: 3
 *   0x00000000001F8350  Caver::Sprite::AddVertex(Caver::Vector2 const&,Caver::Vector2 const&,Caver::Color const&)
 *   0x00000000001F9E30  Caver::Rectangle::ExpandToIncludePoint(Caver::Vector2 const&)
 *   0x0000000000200030  Caver::Sprite::AddFace(int,int,int)
 *
 * Referenced strings: 13
 *   insn=0x00000000004C7E84 string=0x00000000004C7E88 "`"
 *   insn=0x00000000004C7E84 string=0x0000000000583734 "o"
 *   insn=0x00000000004C7EA0 string=0x00000000004C7EA4 "e"
 *   insn=0x00000000004C7EA8 string=0x00000000004C7EAC "h"
 *   insn=0x00000000004C7EB0 string=0x00000000004C7EB4 "K"
 *   insn=0x00000000004C7EB4 string=0x00000000004C7EB8 "t.@"
 *   insn=0x00000000004C7EB8 string=0x00000000004C7EBC "y""
 *   insn=0x00000000004C7ECC string=0x00000000001F9E30 "0'"
 *   insn=0x00000000004C7EE0 string=0x00000000001F8350 "0'"
 *   insn=0x00000000004C7EE4 string=0x00000000004C7EE8 "Z"
 *   insn=0x00000000004C7EF4 string=0x00000000004C7EF8 "+"
 *   insn=0x00000000004C7F18 string=0x00000000004C7F28 "B"
 *   insn=0x00000000004C7F34 string=0x00000000004C7F38 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Sprite::AddTriangleStrip(
        __int64 this,
        int a2,
        const Caver::Vector2 *a3,
        const Caver::Vector2 *a4,
        const Caver::Color *a5)
{
  __int64 v5; // x19
  const Caver::Vector2 *v8; // x23
  int v10; // w20
  __int64 v11; // x26
  char v12; // w21
  int v13; // w22
  int v14; // w1
  Caver::Sprite *v15; // x0
  int v16; // w2

  v5 = this;
  v8 = a3;
  if ( *(float *)(this + 16) < 0.001 )
  {
    *(_QWORD *)(this + 8) = *(_QWORD *)a3;
    *(_QWORD *)(this + 16) = 0;
  }
  if ( a2 >= 1 )
  {
    v10 = *(_DWORD *)(this + 44);
    v11 = (unsigned int)a2;
    do
    {
      Caver::Rectangle::ExpandToIncludePoint((Caver::Rectangle *)(v5 + 8), v8);
      this = Caver::Sprite::AddVertex((Caver::Sprite *)v5, v8, a4, a5);
      v8 = (const Caver::Vector2 *)((char *)v8 + 8);
      --v11;
      a4 = (const Caver::Vector2 *)((char *)a4 + 8);
    }
    while ( v11 );
    if ( a2 >= 3 )
    {
      v12 = 0;
      v13 = a2 - 2;
      do
      {
        if ( (v12 & 1) != 0 )
        {
          v14 = v10 + 1;
          v15 = (Caver::Sprite *)v5;
          v16 = v10;
        }
        else
        {
          v16 = v10 + 1;
          v15 = (Caver::Sprite *)v5;
          v14 = v10;
        }
        this = Caver::Sprite::AddFace(v15, v14, v16, v10 + 2);
        v12 ^= 1u;
        --v13;
        ++v10;
      }
      while ( v13 );
    }
  }
  return this;
}


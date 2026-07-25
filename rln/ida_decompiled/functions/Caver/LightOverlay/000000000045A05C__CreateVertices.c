/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045A05C
 * Mangled: _ZN5Caver12LightOverlay14CreateVerticesEv
 * Demangled: Caver::LightOverlay::CreateVertices(void)
 *
 * Callers: 1
 *   0x00000000001F52B0  Caver::LightOverlay::CreateVertices(void)
 *
 * Callees: 9
 *   0x00000000001F3DB0  Caver::VertexArrayObject::CreateVertexBuffer(int)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F92C0  Caver::VertexArrayObject::CreateIndexBuffer(Caver::DataType,int)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FF8B0  Caver::VertexArrayObject::VertexArrayObject(void)
 *   0x0000000000200560  Caver::VertexArrayObject::~VertexArrayObject()
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 82
 *   insn=0x000000000045A06C string=0x000000000045A070 "U"
 *   insn=0x000000000045A080 string=0x000000000045A084 ""
 *   insn=0x000000000045A084 string=0x000000000045A088 "t""
 *   insn=0x000000000045A09C string=0x000000000045A0A0 "0"
 *   insn=0x000000000045A0A0 string=0x000000000045A0A4 "h&B)"
 *   insn=0x000000000045A0AC string=0x000000000045A0B0 "}\t"
 *   insn=0x000000000045A0B4 string=0x000000000045A0B8 ">g"
 *   insn=0x000000000045A0B8 string=0x000000000045A0BC "i*Bih*@"
 *   insn=0x000000000045A0B8 string=0x00000000001F3DB0 "P'"
 *   insn=0x000000000045A0BC string=0x000000000045A0C0 "h*@"
 *   insn=0x000000000045A0C4 string=0x000000000045A0C8 "V}\t"
 *   insn=0x000000000045A0CC string=0x000000000045A0D0 "h"
 *   insn=0x000000000045A0DC string=0x000000000045A0E0 "$y"
 *   insn=0x000000000045A0E0 string=0x000000000045A0E4 "h"
 *   insn=0x000000000045A0E0 string=0x00000000001F8570 "0'"
 *   insn=0x000000000045A0E4 string=0x000000000045A0E8 "`"
 *   insn=0x000000000045A0F4 string=0x000000000045A0F8 "h&Bi`"
 *   insn=0x000000000045A0F4 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000045A0F8 string=0x000000000045A0FC "`"
 *   insn=0x000000000045A0FC string=0x000000000045A100 "6}"
 *   insn=0x000000000045A10C string=0x000000000045A110 "j"
 *   insn=0x000000000045A10C string=0x00000000001FBC40 "0'"
 *   insn=0x000000000045A110 string=0x000000000045A114 "_"
 *   insn=0x000000000045A118 string=0x000000000045A188 "h"
 *   insn=0x000000000045A11C string=0x000000000045A120 "h"
 *   insn=0x000000000045A120 string=0x000000000045A124 " uD"
 *   insn=0x000000000045A12C string=0x000000000045A130 "K"
 *   insn=0x000000000045A130 string=0x000000000045A178 ")"
 *   insn=0x000000000045A134 string=0x000000000045A138 "k"
 *   insn=0x000000000045A138 string=0x000000000045A13C "l6C)()="
 *   insn=0x000000000045A13C string=0x000000000045A140 "()="
 *   insn=0x000000000045A140 string=0x000000000045A144 "="
 *   insn=0x000000000045A144 string=0x000000000045A148 "hQ("
 *   insn=0x000000000045A14C string=0x000000000045A150 "a"
 *   insn=0x000000000045A154 string=0x000000000045A158 "b"
 *   insn=0x000000000045A160 string=0x000000000045A164 "h"
 *   insn=0x000000000045A164 string=0x000000000045A168 "J"
 *   insn=0x000000000045A168 string=0x000000000045A16C "_"
 *   insn=0x000000000045A16C string=0x000000000045A170 "K"
 *   insn=0x000000000045A170 string=0x000000000045A174 "j"
 *   insn=0x000000000045A178 string=0x000000000045A17C "?"
 *   insn=0x000000000045A17C string=0x000000000045A180 "k"
 *   insn=0x000000000045A184 string=0x000000000045A18C "Iy"
 *   insn=0x000000000045A18C string=0x000000000045A190 ""
 *   insn=0x000000000045A190 string=0x000000000045A194 ")\t"
 *   insn=0x000000000045A194 string=0x000000000045A198 "}\t"
 *   insn=0x000000000045A19C string=0x000000000045A1A0 "a"
 *   insn=0x000000000045A1A4 string=0x000000000045A1A8 "h2"
 *   insn=0x000000000045A1A8 string=0x000000000045A1AC "E|"
 *   insn=0x000000000045A1AC string=0x000000000045A1B0 "l"
 *   insn=0x000000000045A1AC string=0x00000000001F92C0 "0'"
 *   insn=0x000000000045A1B0 string=0x000000000045A1B4 "h2@"
 *   insn=0x000000000045A1B8 string=0x000000000045A1BC "h""
 *   insn=0x000000000045A1C0 string=0x000000000045A1C4 "k"
 *   insn=0x000000000045A1D0 string=0x000000000045A1D4 "o}"
 *   insn=0x000000000045A1D8 string=0x000000000045A1DC "n"
 *   insn=0x000000000045A1EC string=0x000000000045A29C "J"
 *   insn=0x000000000045A1F0 string=0x000000000045A1F4 "q}\n"
 *   insn=0x000000000045A1F8 string=0x000000000045A1FC "R"
 *   insn=0x000000000045A1FC string=0x000000000045A200 "!"
 *   insn=0x000000000045A200 string=0x000000000045A204 "@:"
 *   insn=0x000000000045A204 string=0x000000000045A208 "R:"
 *   insn=0x000000000045A208 string=0x000000000045A20C """
 *   insn=0x000000000045A214 string=0x000000000045A218 "@\n"
 *   insn=0x000000000045A21C string=0x000000000045A220 "@"
 *   insn=0x000000000045A224 string=0x000000000045A228 "Q"
 *   insn=0x000000000045A22C string=0x000000000045A230 "@"
 *   insn=0x000000000045A230 string=0x000000000045A234 "R"
 *   insn=0x000000000045A248 string=0x000000000045A24C " "
 *   insn=0x000000000045A24C string=0x000000000045A250 "A:"
 *   insn=0x000000000045A258 string=0x000000000045A25C "#"
 *   insn=0x000000000045A264 string=0x000000000045A268 "#"
 *   insn=0x000000000045A268 string=0x000000000045A26C "1"
 *   insn=0x000000000045A270 string=0x000000000045A274 "#"
 *   insn=0x000000000045A278 string=0x000000000045A27C "@"
 *   insn=0x000000000045A27C string=0x000000000045A280 "#"
 *   insn=0x000000000045A280 string=0x000000000045A284 "!"
 *   insn=0x000000000045A284 string=0x000000000045A288 "?"
 *   insn=0x000000000045A288 string=0x000000000045A28C "R"
 *   insn=0x000000000045A2A0 string=0x000000000045A2A4 ")"
 *   insn=0x000000000045A2A4 string=0x000000000045A2A8 "_"
 *   insn=0x000000000045A2D8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LightOverlay::CreateVertices(Caver::LightOverlay *this)
{
  int v2; // w8
  int v3; // w9
  unsigned __int64 v4; // x22
  unsigned __int64 v5; // x0
  void *v6; // x0
  void *v7; // x8
  int v8; // w10
  int v9; // w8
  int i; // w9
  int j; // w10
  __int64 v12; // x8
  float v13; // s2
  __int64 result; // x0
  int v15; // w12
  __int64 v16; // x8
  int v17; // w11
  int v18; // w13
  __int16 v19; // w9
  int v20; // w10
  int v21; // w12
  int v22; // w14
  int v23; // w16
  __int16 v24; // w18
  unsigned int v25; // w0
  unsigned int v26; // w18
  int v27; // w17
  int v28; // w18
  __int16 v29; // w0
  int v30; // w2
  unsigned int v31; // w3
  unsigned int v32; // w1
  _QWORD v33[10]; // [xsp+0h] [xbp-70h] BYREF

  v33[9] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::VertexArrayObject::VertexArrayObject((Caver::VertexArrayObject *)v33);
  memcpy((char *)this + 72, v33, 0x48u);
  Caver::VertexArrayObject::~VertexArrayObject((Caver::VertexArrayObject *)v33);
  v2 = *((_DWORD *)this + 4);
  v3 = *((_DWORD *)this + 5);
  *((_BYTE *)this + 144) = 0;
  Caver::VertexArrayObject::CreateVertexBuffer((Caver::LightOverlay *)((char *)this + 72), 16 * v2 * v3);
  v4 = *((int *)this + 5) * (__int64)*((int *)this + 4);
  *((_QWORD *)this + 7) = *((_QWORD *)this + 10);
  if ( is_mul_ok(v4, 4u) )
    v5 = 4 * v4;
  else
    v5 = -1;
  v6 = (void *)operator new[](v5);
  v7 = (void *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = v6;
  if ( v7 )
  {
    operator delete[](v7);
    v6 = (void *)*((_QWORD *)this + 5);
    v4 = *((int *)this + 5) * (__int64)*((int *)this + 4);
  }
  memset(v6, 0, 4 * v4);
  v8 = *((_DWORD *)this + 4);
  if ( v8 <= 0 )
  {
    v9 = *((_DWORD *)this + 5);
  }
  else
  {
    v9 = *((_DWORD *)this + 5);
    for ( i = 0; i < v8; ++i )
    {
      if ( v9 >= 1 )
      {
        for ( j = 0; j < v9; ++j )
        {
          v12 = *((_QWORD *)this + 7) + 16LL * (unsigned __int16)(j + i * v9);
          v13 = (float)(*((_DWORD *)this + 6) * i);
          *(float *)v12 = (float)(*((_DWORD *)this + 7) * j);
          *(float *)(v12 + 4) = v13;
          *(_QWORD *)(v12 + 8) = 0x7F00000000000000LL;
          v9 = *((_DWORD *)this + 5);
        }
        v8 = *((_DWORD *)this + 4);
      }
    }
  }
  *((_DWORD *)this + 12) = (v9 - 1) * (2 * v8 - 2);
  result = Caver::VertexArrayObject::CreateIndexBuffer();
  v15 = *((_DWORD *)this + 4);
  v16 = *((_QWORD *)this + 12);
  *((_QWORD *)this + 8) = v16;
  if ( v15 >= 2 )
  {
    v17 = *((_DWORD *)this + 5);
    v18 = 6;
    v19 = 0;
    v20 = 0;
    v21 = v15 - 1;
    v22 = v17 - 1;
    v23 = v17;
    do
    {
      if ( v17 >= 2 )
      {
        v24 = 3 * v22 * v20;
        v25 = (2 * (v24 & 0x7FFF)) | 1;
        v26 = 2 * (v24 & 0x7FFF);
        *(_WORD *)(v16 + 2LL * v26) = v17 * v20;
        *(_WORD *)(v16 + 2LL * v25) = v17 * v20 + 1;
        *(_WORD *)(v16 + 2LL * (v26 + 2)) = v17 * v20 + v17;
        *(_WORD *)(v16 + 2LL * (v26 + 3)) = v17 * v20 + 1;
        result = v26 + 4;
        *(_WORD *)(v16 + 2LL * (unsigned int)result) = v17 * v20 + v17 + 1;
        *(_WORD *)(v16 + 2LL * (v26 + 5)) = v17 * v20 + v17;
        if ( v17 != 2 )
        {
          v27 = 1;
          v28 = v18;
          do
          {
            *(_WORD *)(v16 + 2LL * ((unsigned __int16)v28 & 0xFFFE)) = v19 + v27;
            v29 = v19 + v27 + 1;
            v30 = v23 + v27;
            *(_WORD *)(v16 + 2LL * (v28 & 0xFFFE | 1u)) = v29;
            ++v27;
            *(_WORD *)(v16 + 2LL * ((v28 & 0xFFFEu) + 2)) = v30;
            *(_WORD *)(v16 + 2LL * ((v28 & 0xFFFEu) + 3)) = v29;
            result = (unsigned int)(v30 + 1);
            v31 = (v28 & 0xFFFE) + 4;
            v32 = (v28 & 0xFFFE) + 5;
            v28 += 6;
            *(_WORD *)(v16 + 2LL * v31) = v30 + 1;
            *(_WORD *)(v16 + 2LL * v32) = v30;
          }
          while ( v27 < v22 );
        }
      }
      ++v20;
      v23 += v17;
      v19 += v17;
      v18 += 6 * v17 - 6;
    }
    while ( v20 < v21 );
  }
  return result;
}


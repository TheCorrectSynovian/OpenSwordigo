/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C3174
 * Mangled: _ZNSt6vectorIN5Caver4Font5GlyphESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::Font::Glyph,std::allocator<Caver::Font::Glyph>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Font::Glyph*,std::vector<Caver::Font::Glyph,std::allocator<Caver::Font::Glyph>>>,Caver::Font::Glyph const&)
 *
 * Callers: 1
 *   0x00000000001F4E30  std::vector<Caver::Font::Glyph,std::allocator<Caver::Font::Glyph>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Font::Glyph*,std::vector<Caver::Font::Glyph,std::allocator<Caver::Font::Glyph>>>,Caver::Font::Glyph const&)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000565294  sub_565294
 *
 * Referenced strings: 50
 *   insn=0x00000000004C319C string=0x00000000004C31A0 "@"
 *   insn=0x00000000004C31A4 string=0x00000000004C31A8 "\tA]"
 *   insn=0x00000000004C31AC string=0x00000000004C31B0 "\n"
 *   insn=0x00000000004C31B4 string=0x00000000004C31B8 "\t"
 *   insn=0x00000000004C31BC string=0x00000000004C31C0 "\n)"
 *   insn=0x00000000004C31E8 string=0x00000000004C31EC "K"
 *   insn=0x00000000004C31EC string=0x00000000004C31F0 "pt"
 *   insn=0x00000000004C31EC string=0x00000000004C3234 "h&"
 *   insn=0x00000000004C3234 string=0x00000000004C3238 "j."
 *   insn=0x00000000004C3238 string=0x00000000004C323C "l"
 *   insn=0x00000000004C323C string=0x00000000004C3240 "m*"
 *   insn=0x00000000004C3240 string=0x00000000004C3244 "T"
 *   insn=0x00000000004C3248 string=0x00000000004C324C "xt"
 *   insn=0x00000000004C324C string=0x00000000004C3258 ""
 *   insn=0x00000000004C325C string=0x00000000004C3260 "x"
 *   insn=0x00000000004C3260 string=0x00000000004C3264 ""
 *   insn=0x00000000004C3268 string=0x00000000004C326C "}"
 *   insn=0x00000000004C3270 string=0x00000000004C3274 "\n"
 *   insn=0x00000000004C3274 string=0x00000000004C3278 ")"
 *   insn=0x00000000004C3278 string=0x00000000004C327C "H"
 *   insn=0x00000000004C3288 string=0x00000000004C328C "J"
 *   insn=0x00000000004C328C string=0x00000000004C3290 "_"
 *   insn=0x00000000004C3290 string=0x00000000004C3294 "7"
 *   insn=0x00000000004C3294 string=0x00000000004C3298 "7"
 *   insn=0x00000000004C329C string=0x00000000004C32A0 "h"
 *   insn=0x00000000004C32AC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004C32B8 string=0x00000000004C32C4 "i"
 *   insn=0x00000000004C32C8 string=0x00000000004C32CC ")"
 *   insn=0x00000000004C32CC string=0x00000000004C32D0 ")}"
 *   insn=0x00000000004C32D4 string=0x00000000004C32D8 ")U"
 *   insn=0x00000000004C32D8 string=0x00000000004C32DC "*"
 *   insn=0x00000000004C32E4 string=0x00000000004C32E8 " "
 *   insn=0x00000000004C32EC string=0x00000000004C32F0 " "
 *   insn=0x00000000004C32F4 string=0x00000000004C32F8 "*)"
 *   insn=0x00000000004C3304 string=0x00000000004C3308 "\n"
 *   insn=0x00000000004C3308 string=0x00000000004C330C "*"
 *   insn=0x00000000004C3310 string=0x00000000004C3314 " "
 *   insn=0x00000000004C3318 string=0x00000000004C331C " "
 *   insn=0x00000000004C331C string=0x00000000004C3320 "\n)@"
 *   insn=0x00000000004C3320 string=0x00000000004C3324 ""
 *   insn=0x00000000004C3328 string=0x00000000004C332C "*)"
 *   insn=0x00000000004C332C string=0x00000000004C3330 ")"
 *   insn=0x00000000004C3338 string=0x00000000004C333C "6"
 *   insn=0x00000000004C3344 string=0x00000000004C3348 "i"
 *   insn=0x00000000004C334C string=0x00000000004C3350 "`"
 *   insn=0x00000000004C3354 string=0x00000000004C3358 "`"
 *   insn=0x00000000004C335C string=0x00000000004C3360 "i*@"
 *   insn=0x00000000004C3360 string=0x00000000004C3364 "s"
 *   insn=0x00000000004C3378 string=0x00000000004C337C "@"
 *   insn=0x00000000004C3380 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<Caver::Font::Glyph>::_M_insert_aux(void **a1, __int64 a2, __int64 *a3)
{
  char *v4; // x8
  char *v6; // x19
  __int64 v7; // x9
  __int128 v8; // q1
  int v9; // w10
  char *v10; // x14
  __int64 v11; // x8
  __int64 v12; // x9
  __int64 v13; // x10
  __int64 v14; // x11
  __int64 v15; // x12
  int v16; // w13
  char *v17; // x14
  signed __int64 v18; // x15
  __int128 v19; // q1
  __int128 v20; // q2
  char *v21; // x25
  bool v22; // zf
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x10
  bool v26; // cf
  unsigned __int64 v27; // x8
  int v28; // w10
  unsigned __int64 v29; // x23
  __int64 v30; // x0
  char *v31; // x8
  __int64 v32; // x21
  __int64 v33; // x9
  __int64 v34; // x9
  int v35; // w10
  char *v36; // x8
  __int64 i; // x22
  int v38; // w9

  v4 = (char *)a1[1];
  v6 = (char *)a2;
  if ( v4 == a1[2] )
  {
    v21 = (char *)*a1;
    v23 = v4 - (_BYTE *)*a1;
    v22 = v23 == 0;
    v24 = 0x2E8BA2E8BA2E8BA3LL * (v23 >> 2);
    if ( v22 )
      v25 = 1;
    else
      v25 = v24;
    v26 = __CFADD__(v25, v24);
    v27 = v25 + v24;
    v28 = v26;
    if ( v28 | (v27 > 0x5D1745D1745D174LL) )
      v29 = 0x5D1745D1745D174LL;
    else
      v29 = v27;
    if ( v29 )
    {
      if ( v29 > 0x5D1745D1745D174LL )
        sub_565294(a1, a2, a3);
      v30 = operator new(44 * v29);
      v31 = (char *)*a1;
      v32 = v30;
    }
    else
    {
      v32 = 0;
      v31 = (char *)*a1;
    }
    v33 = v32 + 4 * ((v6 - v21) >> 2);
    *(_QWORD *)v33 = *a3;
    *(_OWORD *)(v33 + 8) = *(_OWORD *)(a3 + 1);
    *(_OWORD *)(v33 + 24) = *(_OWORD *)(a3 + 3);
    *(_DWORD *)(v33 + 40) = *((_DWORD *)a3 + 10);
    v34 = v32;
    if ( v31 != v6 )
    {
      v34 = v32;
      do
      {
        *(_QWORD *)v34 = *(_QWORD *)v31;
        *(_OWORD *)(v34 + 8) = *(_OWORD *)(v31 + 8);
        *(_OWORD *)(v34 + 24) = *(_OWORD *)(v31 + 24);
        v35 = *((_DWORD *)v31 + 10);
        v31 += 44;
        *(_DWORD *)(v34 + 40) = v35;
        v34 += 44;
      }
      while ( v31 != v6 );
    }
    v36 = (char *)a1[1];
    for ( i = v34 + 44; v6 != v36; i += 44 )
    {
      *(_QWORD *)i = *(_QWORD *)v6;
      *(_OWORD *)(i + 8) = *(_OWORD *)(v6 + 8);
      *(_OWORD *)(i + 24) = *(_OWORD *)(v6 + 24);
      v38 = *((_DWORD *)v6 + 10);
      v6 += 44;
      *(_DWORD *)(i + 40) = v38;
    }
    if ( *a1 )
      operator delete(*a1);
    *a1 = (void *)v32;
    a1[1] = (void *)i;
    a1[2] = (void *)(v32 + 44 * v29);
  }
  else
  {
    v7 = *(_QWORD *)(v4 - 44);
    v8 = *(_OWORD *)(v4 - 20);
    v9 = *((_DWORD *)v4 - 1);
    *(_OWORD *)(v4 + 8) = *(_OWORD *)(v4 - 36);
    *(_QWORD *)v4 = v7;
    *(_OWORD *)(v4 + 24) = v8;
    *((_DWORD *)v4 + 10) = v9;
    v10 = (char *)a1[1];
    a1[1] = v10 + 44;
    v11 = *a3;
    v12 = a3[1];
    v13 = a3[2];
    v14 = a3[3];
    v15 = a3[4];
    v16 = *((_DWORD *)a3 + 10);
    v17 = v10 - 44;
    if ( (__int64)&v17[-a2] >= 1 )
    {
      v18 = (unsigned __int64)&v17[-a2] / 0x2C + 1;
      do
      {
        v19 = *(_OWORD *)(v17 - 28);
        v20 = *(_OWORD *)(v17 - 44);
        --v18;
        *(_OWORD *)(v17 + 28) = *((_OWORD *)v17 - 1);
        *(_OWORD *)v17 = v20;
        *((_OWORD *)v17 + 1) = v19;
        v17 -= 44;
      }
      while ( v18 > 1 );
    }
    *(_QWORD *)a2 = v11;
    *(_QWORD *)(a2 + 8) = v12;
    *(_QWORD *)(a2 + 16) = v13;
    *(_QWORD *)(a2 + 24) = v14;
    *(_QWORD *)(a2 + 32) = v15;
    *(_DWORD *)(a2 + 40) = v16;
  }
}


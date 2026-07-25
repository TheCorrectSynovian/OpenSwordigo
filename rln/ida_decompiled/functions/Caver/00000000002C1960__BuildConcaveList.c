/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C1960
 * Mangled: _ZN5Caver16BuildConcaveListEPNS_7Vector2EiPNS_11VertexList_E
 * Demangled: Caver::BuildConcaveList(Caver::Vector2 *,int,Caver::VertexList_ *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6DE0  Caver::Vector2::Angle(void)
 *
 * Referenced strings: 45
 *   insn=0x00000000002C1984 string=0x00000000002C1988 "X"
 *   insn=0x00000000002C1988 string=0x00000000002C198C ""
 *   insn=0x00000000002C19A0 string=0x00000000002C19A4 "3"
 *   insn=0x00000000002C19A4 string=0x00000000001F5E70 "P'"
 *   insn=0x00000000002C19B0 string=0x00000000002C19B4 "/"
 *   insn=0x00000000002C19BC string=0x00000000002C19C0 "v"
 *   insn=0x00000000002C19C0 string=0x00000000002C19C4 "u"
 *   insn=0x00000000002C19C4 string=0x00000000002C19C8 ""
 *   insn=0x00000000002C19DC string=0x00000000002C19E0 "i"
 *   insn=0x00000000002C19E0 string=0x00000000002C19E4 "lA"
 *   insn=0x00000000002C19E8 string=0x00000000002C19EC "l"
 *   insn=0x00000000002C19E8 string=0x00000000002C19F8 ")"
 *   insn=0x00000000002C19EC string=0x00000000002C19F0 "l"
 *   insn=0x00000000002C19F0 string=0x00000000002C19F4 "k"
 *   insn=0x00000000002C19F8 string=0x00000000002C19FC "_"
 *   insn=0x00000000002C19FC string=0x00000000002C1A00 ""
 *   insn=0x00000000002C1A10 string=0x00000000002C1A14 "\t"
 *   insn=0x00000000002C1A1C string=0x00000000002C1A20 "v"
 *   insn=0x00000000002C1A24 string=0x00000000002C1A28 "H"
 *   insn=0x00000000002C1A24 string=0x00000000002C1B14 ""
 *   insn=0x00000000002C1A28 string=0x00000000002C1A2C "\t"
 *   insn=0x00000000002C1A2C string=0x00000000002C1A30 "\n"
 *   insn=0x00000000002C1A30 string=0x00000000002C1A34 "\t"
 *   insn=0x00000000002C1A34 string=0x00000000002C1A38 "*"
 *   insn=0x00000000002C1A38 string=0x00000000002C1A3C "K"
 *   insn=0x00000000002C1A54 string=0x00000000002C1A58 ""
 *   insn=0x00000000002C1A58 string=0x00000000002C1A5C "\t"
 *   insn=0x00000000002C1A60 string=0x00000000002C1A64 " AA"
 *   insn=0x00000000002C1A6C string=0x00000000002C1A70 ""
 *   insn=0x00000000002C1A80 string=0x00000000001F6DE0 "0'"
 *   insn=0x00000000002C1A84 string=0x00000000002C1A88 ""
 *   insn=0x00000000002C1A90 string=0x00000000002C1A94 "  "
 *   insn=0x00000000002C1A98 string=0x00000000002C1A9C "h"
 *   insn=0x00000000002C1AAC string=0x00000000002C1AFC "9"
 *   insn=0x00000000002C1AB0 string=0x00000000002C1AB4 "K"
 *   insn=0x00000000002C1AC0 string=0x00000000002C1AC4 "u"
 *   insn=0x00000000002C1AC4 string=0x00000000002C1AC8 "`"
 *   insn=0x00000000002C1AC8 string=0x00000000002C1ACC "\t)@"
 *   insn=0x00000000002C1AD0 string=0x00000000002C1AD4 "I"
 *   insn=0x00000000002C1AD4 string=0x00000000002C1AD8 "\t"
 *   insn=0x00000000002C1AD8 string=0x00000000002C1ADC "*"
 *   insn=0x00000000002C1AE4 string=0x00000000002C1AE8 ""
 *   insn=0x00000000002C1AE8 string=0x00000000002C1AEC "{"
 *   insn=0x00000000002C1B00 string=0x00000000002C1B04 "a"
 *   insn=0x00000000002C1B50 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::BuildConcaveList(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v6; // x0
  _QWORD *v7; // x19
  _QWORD *v8; // x0
  _QWORD *v9; // x22
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x12
  _QWORD *v13; // x11
  _QWORD *v14; // x8
  __int64 v15; // x23
  __int64 v16; // x25
  _QWORD *v17; // x27
  _QWORD *v18; // x8
  float32x2_t v19; // d1
  float v20; // s0
  float v21; // s8
  float v22; // s0
  float v23; // s0
  bool v24; // cc
  double v25; // d0
  _QWORD *v26; // x8
  _QWORD *v27; // x10
  unsigned __int64 v29; // [xsp+8h] [xbp-88h] BYREF
  _QWORD v30[2]; // [xsp+10h] [xbp-80h] BYREF

  v30[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = malloc(0x18u);
  v7 = v6;
  if ( a2 )
  {
    v8 = malloc(32LL * a2);
    v9 = v8;
    *v7 = v8;
    *((_DWORD *)v7 + 4) = a2;
    if ( a2 >= 1 )
    {
      v10 = 0;
      v11 = 0;
      do
      {
        v12 = *(_QWORD *)(a1 + 8 * v11);
        v13 = &v8[v10];
        *((_DWORD *)v13 + 4) = v11;
        *(_QWORD *)((char *)v13 + 20) = v12;
        if ( v10 * 8 )
        {
          *v13 = v13 - 4;
          *(v13 - 3) = v13;
        }
        ++v11;
        v10 += 4;
      }
      while ( a2 != v11 );
    }
    v14 = &v8[4 * a2];
    *v8 = v14 - 4;
    *(v14 - 3) = v8;
    v7[1] = v8;
    if ( a2 >= 1 )
    {
      v15 = 0;
      v16 = (unsigned int)a2;
      v17 = v8;
      do
      {
        v18 = (_QWORD *)(*a3 + v15 * 8);
        v19.n64_u64[0] = *(unsigned __int64 *)((char *)v18 + 20);
        v30[0] = vsub_f32(*(float32x2_t *)(*v18 + 20LL), v19).n64_u64[0];
        v29 = vsub_f32(*(float32x2_t *)(v18[1] + 20LL), v19).n64_u64[0];
        Caver::Vector2::Angle((Caver::Vector2 *)&v29);
        v21 = v20;
        Caver::Vector2::Angle((Caver::Vector2 *)v30);
        v23 = v21 - v22;
        v24 = v23 > 0.0;
        v25 = v23;
        if ( !v24 && v25 >= -3.14159265 || v25 <= 6.28318531 && v25 >= 3.14159265 )
        {
          v26 = &v9[v15];
          --a2;
          LODWORD(v9[v15 + 2]) = -1;
          *((_DWORD *)v7 + 4) = a2;
          if ( a2 )
          {
            v27 = (_QWORD *)v26[1];
            *v27 = *v26;
            *(_QWORD *)(*v26 + 8LL) = v27;
            if ( v26 == v17 )
            {
              v17 = (_QWORD *)v9[v15 + 1];
              v7[1] = v17;
            }
          }
          else
          {
            v17 = 0;
            v7[1] = 0;
          }
        }
        --v16;
        v15 += 4;
      }
      while ( v16 );
    }
  }
  else
  {
    v6[1] = 0;
    *((_DWORD *)v6 + 4) = 0;
  }
  return v7;
}


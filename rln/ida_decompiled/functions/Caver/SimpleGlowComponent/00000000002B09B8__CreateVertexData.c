/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B09B8
 * Mangled: _ZN5Caver19SimpleGlowComponent16CreateVertexDataEv
 * Demangled: Caver::SimpleGlowComponent::CreateVertexData(void)
 *
 * Callers: 1
 *   0x0000000000200100  Caver::SimpleGlowComponent::CreateVertexData(void)
 *
 * Callees: 5
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5730  Caver::Vector2::FromAngle(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8570  operator new[](ulong)
 *   0x0000000000200F90  Caver::Color::FromFloatColor(Caver::FloatColor const&)
 *
 * Referenced strings: 69
 *   insn=0x00000000002B09D0 string=0x00000000002B09D4 "T"
 *   insn=0x00000000002B09E0 string=0x00000000002B09E4 "h"
 *   insn=0x00000000002B09E8 string=0x00000000002B09EC "K"
 *   insn=0x00000000002B09EC string=0x00000000002B09F0 "`BG"
 *   insn=0x00000000002B09F0 string=0x00000000002B09F4 "a"
 *   insn=0x00000000002B09F4 string=0x00000000002B09F8 "bBJ"
 *   insn=0x00000000002B09F8 string=0x00000000002B09FC "c"
 *   insn=0x00000000002B0A08 string=0x00000000002B0A0C "!"
 *   insn=0x00000000002B0A10 string=0x00000000002B0A14 "_A"
 *   insn=0x00000000002B0A14 string=0x00000000002B0A18 "h"
 *   insn=0x00000000002B0A20 string=0x00000000002B0A24 "\ty"
 *   insn=0x00000000002B0A28 string=0x00000000002B0A2C "(}@"
 *   insn=0x00000000002B0A2C string=0x00000000002B0A30 "}"
 *   insn=0x00000000002B0A30 string=0x00000000002B0A34 "i"
 *   insn=0x00000000002B0A34 string=0x00000000002B0A38 ")}|"
 *   insn=0x00000000002B0A3C string=0x00000000002B0A40 " "
 *   insn=0x00000000002B0A40 string=0x00000000002B0A44 "u"
 *   insn=0x00000000002B0A48 string=0x00000000002B0A4C "hF@"
 *   insn=0x00000000002B0A48 string=0x00000000001F8570 "0'"
 *   insn=0x00000000002B0A4C string=0x00000000002B0A50 "`F"
 *   insn=0x00000000002B0A58 string=0x00000000002B0A5C "A"
 *   insn=0x00000000002B0A5C string=0x00000000002B0A60 "u"
 *   insn=0x00000000002B0A5C string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002B0A64 string=0x00000000002B0A68 "}@"
 *   insn=0x00000000002B0A68 string=0x00000000002B0A6C ""
 *   insn=0x00000000002B0A74 string=0x00000000002B0A78 "hN@"
 *   insn=0x00000000002B0A78 string=0x00000000002B0A7C "`N"
 *   insn=0x00000000002B0A7C string=0x00000000002B0A80 "h"
 *   insn=0x00000000002B0A80 string=0x00000000002B0A8C "hF@"
 *   insn=0x00000000002B0A84 string=0x00000000002B0A88 "6"
 *   insn=0x00000000002B0A98 string=0x00000000002B0A9C "h"
 *   insn=0x00000000002B0AAC string=0x00000000002B0AB0 "("
 *   insn=0x00000000002B0AB0 string=0x00000000002B0AB4 "IiO"
 *   insn=0x00000000002B0ADC string=0x00000000002B0AE0 "J\t"
 *   insn=0x00000000002B0AE8 string=0x00000000002B0AEC ",\t"
 *   insn=0x00000000002B0AF0 string=0x00000000002B0AF4 "J"
 *   insn=0x00000000002B0B00 string=0x00000000002B0B04 "j"
 *   insn=0x00000000002B0B10 string=0x00000000002B0B14 "F"
 *   insn=0x00000000002B0B14 string=0x00000000002B0C2C ")9"
 *   insn=0x00000000002B0B34 string=0x00000000002B0B38 "`"
 *   insn=0x00000000002B0B34 string=0x00000000001F5730 "P'"
 *   insn=0x00000000002B0B3C string=0x00000000002B0B40 "iF@"
 *   insn=0x00000000002B0B44 string=0x00000000002B0B48 "\n="
 *   insn=0x00000000002B0B4C string=0x00000000002B0B50 ")Q*"
 *   insn=0x00000000002B0B50 string=0x00000000002B0B54 "# "
 *   insn=0x00000000002B0B58 string=0x00000000002B0B5C "#"
 *   insn=0x00000000002B0B60 string=0x00000000002B0B64 "M"
 *   insn=0x00000000002B0B68 string=0x00000000002B0B6C "?-"
 *   insn=0x00000000002B0B6C string=0x00000000002B0B70 "`"
 *   insn=0x00000000002B0B70 string=0x00000000002B0B74 "iF@"
 *   insn=0x00000000002B0B74 string=0x00000000002B0B78 "! "
 *   insn=0x00000000002B0B78 string=0x00000000002B0B7C "@ "
 *   insn=0x00000000002B0B7C string=0x00000000002B0B80 ")Q-"
 *   insn=0x00000000002B0B80 string=0x00000000002B0B84 "!"
 *   insn=0x00000000002B0B84 string=0x00000000002B0B88 "?"
 *   insn=0x00000000002B0BB0 string=0x00000000002B0BB4 "h"
 *   insn=0x00000000002B0BC0 string=0x00000000002B0BC4 "k\t"
 *   insn=0x00000000002B0BCC string=0x00000000002B0BD0 ""
 *   insn=0x00000000002B0BD0 string=0x00000000002B0BD4 "L"
 *   insn=0x00000000002B0BFC string=0x00000000002B0ACC "n"
 *   insn=0x00000000002B0C08 string=0x00000000002B0C0C "-"
 *   insn=0x00000000002B0C20 string=0x00000000002B0C24 "J"
 *   insn=0x00000000002B0C34 string=0x00000000002B0C44 "hN@"
 *   insn=0x00000000002B0C38 string=0x00000000002B0C3C ""
 *   insn=0x00000000002B0C50 string=0x00000000002B0C54 ""
 *   insn=0x00000000002B0C54 string=0x00000000002B0C58 "\t!"
 *   insn=0x00000000002B0C64 string=0x00000000002B0C68 "h"
 *   insn=0x00000000002B0C6C string=0x00000000002B0C70 "K"
 *   insn=0x00000000002B0CA0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SimpleGlowComponent::CreateVertexData(Caver::SimpleGlowComponent *this)
{
  unsigned __int64 v2; // d1
  int v3; // w8
  int v4; // w9
  int v5; // w21
  __int64 v6; // x8
  __int64 v7; // x9
  unsigned __int64 v8; // x0
  __int64 v9; // x0
  void *v10; // x8
  __int64 v11; // x8
  bool v12; // cf
  __int64 v13; // x8
  unsigned __int64 v14; // x0
  Caver::Vector2 *v15; // x0
  void *v16; // x8
  int v17; // w9
  __int64 v18; // x8
  __int64 v19; // x21
  __int16 v20; // w22
  __int64 v21; // x23
  float v22; // s0
  __int64 v23; // kr00_8
  int v24; // w10
  float v25; // s0
  __int64 v26; // x9
  float v27; // s3
  float v28; // s0
  int v29; // w11
  float v30; // s0
  __int64 v31; // x9
  int v32; // w8
  __int16 v33; // w11
  int v34; // w12
  int v35; // w13
  __int64 v36; // x8
  __int64 v37; // [xsp+0h] [xbp-70h] BYREF
  int v38; // [xsp+Ch] [xbp-64h]
  __int128 v39; // [xsp+10h] [xbp-60h]
  __int16 v40; // [xsp+20h] [xbp-50h]
  __int64 v41; // [xsp+28h] [xbp-48h]

  v41 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((int *)this + 46) >= 1 )
  {
    v2 = vmul_f32(*(float32x2_t *)((char *)this + 124), *(float32x2_t *)((char *)this + 172)).n64_u64[0];
    *(float32x2_t *)&v39 = vmul_f32(*(float32x2_t *)((char *)this + 116), *(float32x2_t *)((char *)this + 164));
    *((_QWORD *)&v39 + 1) = v2;
    Caver::Color::FromFloatColor();
    v3 = *((_DWORD *)this + 46);
    v4 = (2 * v3) | 1;
    v5 = 3 * v3;
    v6 = ((unsigned __int64)v4 * (unsigned __int128)0x10uLL) >> 64;
    *((_DWORD *)this + 36) = v4;
    v7 = 16LL * v4;
    if ( v6 )
      v8 = -1;
    else
      v8 = v7;
    *((_DWORD *)this + 40) = v5;
    v9 = operator new[](v8);
    v10 = (void *)*((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = v9;
    if ( v10 )
    {
      operator delete[](v10);
      v5 = *((_DWORD *)this + 40);
    }
    v11 = 3 * v5;
    v12 = __CFADD__(v11, v11);
    v13 = 2 * v11;
    if ( v12 )
      v14 = -1;
    else
      v14 = v13;
    v15 = (Caver::Vector2 *)operator new[](v14);
    v16 = (void *)*((_QWORD *)this + 19);
    *((_QWORD *)this + 19) = v15;
    if ( v16 )
      operator delete[](v16);
    v18 = *((_QWORD *)this + 17);
    *(_QWORD *)v18 = 0;
    v17 = v38;
    *(_DWORD *)(v18 + 8) = 0;
    *(_DWORD *)(v18 + 12) = v17;
    LODWORD(v18) = *((_DWORD *)this + 46);
    if ( (int)v18 >= 1 )
    {
      v19 = 0;
      v20 = 0;
      v21 = 0;
      do
      {
        v22 = (float)((float)(int)v21 / (float)(int)v18) * 6.28318531;
        v15 = (Caver::Vector2 *)Caver::Vector2::FromAngle(&v37, v15, v22);
        v23 = v37;
        v24 = (unsigned __int16)(v20 + 1);
        v25 = *((float *)this + 45) * 0.3;
        v26 = *((_QWORD *)this + 17) + 16LL * (unsigned __int16)(v20 + 1);
        v27 = *(float *)&v37 * v25;
        v28 = v25 * *((float *)&v37 + 1);
        *(float *)v26 = v27;
        *(float *)(v26 + 4) = v28;
        v29 = v38;
        *(_DWORD *)(v26 + 8) = 0;
        *(_DWORD *)(v26 + 12) = v29;
        v30 = *((float *)this + 45);
        v31 = *((_QWORD *)this + 17) + 16LL * (unsigned int)(v24 + 1);
        *(float *)v31 = *(float *)&v23 * v30;
        *(float *)(v31 + 4) = *((float *)&v23 + 1) * v30;
        *(_QWORD *)(v31 + 8) = 0;
        LODWORD(v39) = v24;
        WORD2(v39) = v20 + 3;
        WORD3(v39) = v20 + 2;
        WORD4(v39) = v20 + 1;
        WORD5(v39) = v20 + 3;
        WORD6(v39) = v20 + 2;
        HIWORD(v39) = v20 + 3;
        v40 = v20 + 4;
        v32 = *((_DWORD *)this + 36);
        if ( v32 <= v24 )
          LOWORD(v39) = v20 - v32 + 2;
        v33 = 1 - v32;
        if ( v32 <= 0 )
          WORD1(v39) = 1 - v32;
        v34 = (unsigned __int16)(v20 + 3);
        if ( v32 <= v34 )
          WORD2(v39) = v20 - v32 + 4;
        v35 = (v20 + 2) & 0xFFFE;
        if ( v32 <= v35 )
        {
          WORD3(v39) = v33 + v35;
          if ( v32 <= v24 )
            goto LABEL_15;
        }
        else if ( v32 <= v24 )
        {
LABEL_15:
          WORD4(v39) = v20 - v32 + 2;
          if ( v32 <= v34 )
            goto LABEL_16;
          goto LABEL_28;
        }
        if ( v32 <= v34 )
        {
LABEL_16:
          WORD5(v39) = v20 - v32 + 4;
          if ( v32 <= v35 )
            goto LABEL_17;
          goto LABEL_29;
        }
LABEL_28:
        if ( v32 <= v35 )
        {
LABEL_17:
          WORD6(v39) = v33 + v35;
          if ( v32 > v34 )
            goto LABEL_31;
LABEL_30:
          HIWORD(v39) = v20 - v32 + 4;
          goto LABEL_31;
        }
LABEL_29:
        if ( v32 <= v34 )
          goto LABEL_30;
LABEL_31:
        if ( v32 <= (unsigned __int16)((v20 + 4) & 0xFFFE) )
          v40 = v20 - v32 + 5;
        ++v21;
        v20 += 2;
        v36 = *((_QWORD *)this + 19) + v19;
        *(_WORD *)(v36 + 16) = v40;
        v19 += 18;
        *(_OWORD *)v36 = v39;
        v18 = *((int *)this + 46);
      }
      while ( v21 < v18 );
    }
  }
}


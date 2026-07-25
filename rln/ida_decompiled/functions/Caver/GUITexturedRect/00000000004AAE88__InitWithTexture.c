/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AAE88
 * Mangled: _ZN5Caver15GUITexturedRect15InitWithTextureERKN5boost13intrusive_ptrINS_7TextureEEERKNS_7Vector2E
 * Demangled: Caver::GUITexturedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000002029D0  Caver::GUITexturedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Vector2 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 39
 *   insn=0x00000000004AAE98 string=0x00000000004AAE9C "("
 *   insn=0x00000000004AAEA4 string=0x00000000004AAEA8 "\t\t@"
 *   insn=0x00000000004AAEA4 string=0x00000000004AAEB4 "`"
 *   insn=0x00000000004AAEA8 string=0x00000000004AAEAC ")"
 *   insn=0x00000000004AAEAC string=0x00000000004AAEB0 "\t\t"
 *   insn=0x00000000004AAEB4 string=0x00000000004AAEB8 "h"
 *   insn=0x00000000004AAEB8 string=0x00000000004AAEBC " "
 *   insn=0x00000000004AAEBC string=0x00000000004AAEC0 "\t@"
 *   insn=0x00000000004AAEC0 string=0x00000000004AAEC4 ")"
 *   insn=0x00000000004AAEC4 string=0x00000000004AAEC8 "\t"
 *   insn=0x00000000004AAECC string=0x00000000004AAED0 ""
 *   insn=0x00000000004AAED0 string=0x00000000004AAED4 ""
 *   insn=0x00000000004AAED8 string=0x00000000004AAEDC "h"
 *   insn=0x00000000004AAEE0 string=0x00000000004AAEE4 "aB"
 *   insn=0x00000000004AAEF4 string=0x00000000004AAEF8 "`"
 *   insn=0x00000000004AAEFC string=0x00000000004AAF00 "\t"
 *   insn=0x00000000004AAF0C string=0x00000000004AAF10 "k"@9$$"
 *   insn=0x00000000004AAF10 string=0x00000000004AAF14 "$$"
 *   insn=0x00000000004AAF14 string=0x00000000004AAF18 "d&"
 *   insn=0x00000000004AAF18 string=0x00000000004AAF1C "$"
 *   insn=0x00000000004AAF20 string=0x00000000004AAF24 "`"
 *   insn=0x00000000004AAF30 string=0x00000000004AAF34 "dB"
 *   insn=0x00000000004AAF34 string=0x00000000004AAF38 "a"
 *   insn=0x00000000004AAF40 string=0x00000000004AAF70 " "
 *   insn=0x00000000004AAF48 string=0x00000000004AAF4C "%"
 *   insn=0x00000000004AAF54 string=0x00000000004AAF58 " "
 *   insn=0x00000000004AAF5C string=0x00000000004AAF60 "f"
 *   insn=0x00000000004AAF60 string=0x00000000004AAF64 "dF"
 *   insn=0x00000000004AAF64 string=0x00000000004AAF68 "fV"
 *   insn=0x00000000004AAF68 string=0x00000000004AAF6C ""
 *   insn=0x00000000004AAF6C string=0x00000000004AAF8C "`B"
 *   insn=0x00000000004AAF70 string=0x00000000004AAF74 "A"
 *   insn=0x00000000004AAF74 string=0x00000000004AAF78 "i"
 *   insn=0x00000000004AAF78 string=0x00000000004AAF7C "`( "
 *   insn=0x00000000004AAF7C string=0x00000000004AAF80 "jF"
 *   insn=0x00000000004AAF80 string=0x00000000004AAF84 "A(!"
 *   insn=0x00000000004AAF84 string=0x00000000004AAF88 "iV"
 *   insn=0x00000000004AAF8C string=0x00000000004AAF90 "aZ"
 *   insn=0x00000000004AAF90 string=0x00000000004AAF94 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float *__fastcall Caver::GUITexturedRect::InitWithTexture(__int64 a1, float **a2, float32x2_t *a3)
{
  float *v4; // x8
  float *result; // x0
  int v7; // w9
  float32x2_t v8; // d1
  float32x2_t v9; // d0
  float v10; // w9
  float v11; // w10
  float v12; // s2
  float v13; // s3
  unsigned __int64 v14; // d1
  int v15; // w11
  float v16; // s2
  float v17; // s3
  float v18; // s6
  float v19; // s1

  *(_BYTE *)(a1 + 8) = 0;
  v4 = *a2;
  if ( *a2 )
    ++*((_DWORD *)v4 + 2);
  result = *(float **)a1;
  *(_QWORD *)a1 = v4;
  if ( result )
  {
    v7 = *((_DWORD *)result + 2) - 1;
    *((_DWORD *)result + 2) = v7;
    if ( !v7 )
    {
      result = (float *)(*(__int64 (__fastcall **)(float *))(*(_QWORD *)result + 8LL))(result);
      v4 = *(float **)a1;
    }
  }
  v8.n64_u64[0] = *(unsigned __int64 *)(v4 + 21);
  *(float32x2_t *)(a1 + 20) = v8;
  v9.n64_u64[0] = vrnda_f32(vneg_f32(vmul_f32((float32x2_t)a3->n64_u64[0], v8))).n64_u64[0];
  *(float32x2_t *)(a1 + 12) = v9;
  if ( v4 )
  {
    v10 = v4[23];
    v11 = v4[24];
    v13 = v4[25];
    v12 = v4[26];
    v14 = vadd_f32(v9, v8).n64_u64[0];
    v15 = *(unsigned __int8 *)(a1 + 8);
    *(_QWORD *)(a1 + 72) = __PAIR64__(HIDWORD(v14), v9.n64_u32[0]);
    *(float32x2_t *)(a1 + 32) = v9;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 60) = 0;
    *(_DWORD *)(a1 + 80) = 0;
    *(_QWORD *)(a1 + 52) = __PAIR64__(v9.n64_u32[1], v14);
    *(_QWORD *)(a1 + 92) = v14;
    *(_DWORD *)(a1 + 100) = 0;
    if ( v15 )
    {
      v16 = v4[21];
      v17 = v4[22];
      v18 = v9.n64_f32[0] / v16;
      v9.n64_f32[0] = *(float *)&v14 / v16;
      v19 = *((float *)&v14 + 1) / v17;
      *(float *)(a1 + 44) = v18;
      *(float *)(a1 + 48) = v9.n64_f32[1] / v17;
      *(float *)(a1 + 68) = v9.n64_f32[1] / v17;
      *(float *)(a1 + 84) = v18;
    }
    else
    {
      *(float *)(a1 + 44) = v10;
      *(float *)(a1 + 48) = v11;
      v9.n64_f32[0] = v13 + v10;
      *(float *)(a1 + 68) = v11;
      v19 = v12 + v11;
      *(float *)(a1 + 84) = v10;
    }
    *(_DWORD *)(a1 + 64) = v9.n64_u32[0];
    *(float *)(a1 + 88) = v19;
    *(_DWORD *)(a1 + 104) = v9.n64_u32[0];
    *(float *)(a1 + 108) = v19;
  }
  return result;
}


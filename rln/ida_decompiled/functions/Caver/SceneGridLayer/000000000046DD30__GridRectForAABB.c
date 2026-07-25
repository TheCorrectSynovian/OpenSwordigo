/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046DD30
 * Mangled: _ZNK5Caver14SceneGridLayer15GridRectForAABBERKNS_9RectangleE
 * Demangled: Caver::SceneGridLayer::GridRectForAABB(Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x00000000001F8770  Caver::SceneGridLayer::GridRectForAABB(Caver::Rectangle const&)
 *
 * Callees: 0
 *
 * Referenced strings: 33
 *   insn=0x000000000046DD30 string=0x000000000046DD34 "!@"
 *   insn=0x000000000046DD38 string=0x000000000046DD3C "  ""
 *   insn=0x000000000046DD40 string=0x000000000046DD44 " "
 *   insn=0x000000000046DD4C string=0x000000000046DD64 """
 *   insn=0x000000000046DD5C string=0x000000000046DD60 "*"
 *   insn=0x000000000046DD60 string=0x000000000046DE08 "j"
 *   insn=0x000000000046DD68 string=0x000000000046DD6C "$E)!(""
 *   insn=0x000000000046DD6C string=0x000000000046DD70 "!(""
 *   insn=0x000000000046DD74 string=0x000000000046DD78 "B8#"
 *   insn=0x000000000046DD7C string=0x000000000046DD80 "!8#"
 *   insn=0x000000000046DD88 string=0x000000000046DD8C ""
 *   insn=0x000000000046DD8C string=0x000000000046DD90 ")"
 *   insn=0x000000000046DD90 string=0x000000000046DD94 "B#"
 *   insn=0x000000000046DD94 string=0x000000000046DD98 "J"
 *   insn=0x000000000046DD98 string=0x000000000046DD9C "!#"
 *   insn=0x000000000046DDA0 string=0x000000000046DDA4 ","
 *   insn=0x000000000046DDA4 string=0x000000000046DDA8 "\n"
 *   insn=0x000000000046DDAC string=0x000000000046DDB0 "J}"
 *   insn=0x000000000046DDB4 string=0x000000000046DDB8 ""
 *   insn=0x000000000046DDB8 string=0x000000000046DDBC "L="
 *   insn=0x000000000046DDC8 string=0x000000000046DDCC ""
 *   insn=0x000000000046DDCC string=0x000000000046DDD0 "?"
 *   insn=0x000000000046DDD0 string=0x000000000046DDD4 ""
 *   insn=0x000000000046DDD4 string=0x000000000046DDD8 ","
 *   insn=0x000000000046DDD8 string=0x000000000046DDDC "?"
 *   insn=0x000000000046DDDC string=0x000000000046DDE0 "="
 *   insn=0x000000000046DDE4 string=0x000000000046DDE8 ")"
 *   insn=0x000000000046DDF0 string=0x000000000046DDF4 "="
 *   insn=0x000000000046DDF4 string=0x000000000046DDF8 ")"
 *   insn=0x000000000046DDF8 string=0x000000000046DDFC "}`"
 *   insn=0x000000000046DDFC string=0x000000000046DE00 ")=P"
 *   insn=0x000000000046DE00 string=0x000000000046DE04 "J="
 *   insn=0x000000000046DE08 string=0x000000000046DE0C "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall Caver::SceneGridLayer::GridRectForAABB(__int64 a1, float *a2)
{
  float v2; // s1
  float v3; // s0
  __int64 v4; // x10
  unsigned __int64 v5; // x8
  unsigned __int64 v6; // x9
  __int64 v7; // x11
  float v8; // s4
  float v9; // s3
  float v10; // s5
  float v11; // s0
  float v12; // s2
  float v13; // s4
  float v14; // s1
  float v15; // s0
  float v16; // s3
  float v17; // s5
  int v18; // w8
  __int64 v19; // x9
  int v20; // w10
  signed int v21; // w12
  float v22; // s4
  int v23; // w11
  float v24; // s0
  int v25; // w13
  int v26; // w12
  int v27; // w8

  v2 = a2[2];
  if ( v2 >= 0.0001 && (v3 = a2[3], v3 >= 0.0001) )
  {
    v8 = a2[1];
    v9 = *(float *)(a1 + 8);
    v10 = *(float *)(a1 + 12);
    v11 = v3 + v8;
    v12 = *a2 - v9;
    v13 = v8 - v10;
    v14 = (float)(v2 + *a2) - v9;
    v15 = v11 - v10;
    v16 = *(float *)(a1 + 32);
    v17 = *(float *)(a1 + 36);
    v18 = *(_DWORD *)(a1 + 40) - 1;
    LODWORD(v19) = *(_DWORD *)(a1 + 44) - 1;
    v20 = vcvtms_s32_f32(v12 * v16);
    v21 = vcvtms_s32_f32(v14 * v16);
    if ( v18 < v20 )
      v20 = *(_DWORD *)(a1 + 40) - 1;
    LODWORD(v4) = v20 & ~(v20 >> 31);
    v22 = v13 * v17;
    if ( v18 >= v21 )
      v18 = v21;
    v23 = vcvtms_s32_f32(v22);
    v24 = v15 * v17;
    if ( (__int16)v4 >= v18 )
      v18 = (__int16)v4;
    v25 = vcvtms_s32_f32(v24);
    if ( (int)v19 >= v23 )
      v26 = v23;
    else
      v26 = *(_DWORD *)(a1 + 44) - 1;
    v7 = (unsigned int)(v18 << 16);
    v27 = v26 & ~(v26 >> 31);
    if ( (int)v19 >= v25 )
      LODWORD(v19) = v25;
    if ( (__int16)v27 >= (int)v19 )
      v19 = (unsigned int)(__int16)v27;
    else
      v19 = (unsigned int)v19;
    v5 = (unsigned __int64)(unsigned __int16)v27 << 32;
    v6 = v19 << 48;
    v4 = (unsigned __int16)v4;
  }
  else
  {
    v4 = 0;
    v5 = 0;
    v6 = 0xFFFF000000000000LL;
    v7 = 4294901760LL;
  }
  return v7 | v4 | v5 | v6;
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B19F0
 * Mangled: _ZN5Caver9Rectangle25TransformedRectsIntersectERKS0_NS_7Vector2EffS2_S3_ff
 * Demangled: Caver::Rectangle::TransformedRectsIntersect(Caver::Rectangle const&,Caver::Vector2,float,float,Caver::Rectangle const&,Caver::Vector2,float,float)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC440  Caver::Vector2::Rotate(float)
 *   0x00000000001FF1F0  .cosf
 *   0x0000000000203C70  .sinf
 *
 * Referenced strings: 65
 *   insn=0x00000000004B1A1C string=0x00000000004B1A20 "W"
 *   insn=0x00000000004B1A28 string=0x00000000004B1A2C ""
 *   insn=0x00000000004B1A3C string=0x00000000004B1A40 "I"
 *   insn=0x00000000004B1A48 string=0x00000000004B1A4C " "
 *   insn=0x00000000004B1A5C string=0x00000000004B1A60 "x*"
 *   insn=0x00000000004B1A60 string=0x00000000001FC440 "0'"
 *   insn=0x00000000004B1A74 string=0x00000000004B1A78 "!"
 *   insn=0x00000000004B1A80 string=0x00000000004B1A84 "`"
 *   insn=0x00000000004B1A88 string=0x00000000004B1A8C " "
 *   insn=0x00000000004B1A8C string=0x00000000004B1A90 "l*"
 *   insn=0x00000000004B1A9C string=0x00000000004B1AA0 "a"
 *   insn=0x00000000004B1AA8 string=0x00000000004B1AAC "9)"
 *   insn=0x00000000004B1AB0 string=0x00000000004B1AB4 ""
 *   insn=0x00000000004B1AB8 string=0x00000000004B1ABC "M&"
 *   insn=0x00000000004B1ABC string=0x00000000004B1AC0 "n&"
 *   insn=0x00000000004B1AC8 string=0x00000000004B1ACC "\n"
 *   insn=0x00000000004B1AD0 string=0x00000000004B1AD4 "gH"
 *   insn=0x00000000004B1AD4 string=0x00000000004B1AD8 ""
 *   insn=0x00000000004B1AD8 string=0x00000000004B1ADC "a"
 *   insn=0x00000000004B1ADC string=0x00000000004B1AE0 " A!"
 *   insn=0x00000000004B1AE8 string=0x00000000004B1AEC "U*"
 *   insn=0x00000000004B1AFC string=0x00000000004B1B00 "F\t("
 *   insn=0x00000000004B1B04 string=0x00000000004B1B08 "%("
 *   insn=0x00000000004B1B08 string=0x00000000004B1B0C "'"
 *   insn=0x00000000004B1B10 string=0x00000000004B1B14 "!*"
 *   insn=0x00000000004B1B1C string=0x00000000004B1B20 "P:%"
 *   insn=0x00000000004B1B24 string=0x00000000004B1B28 "'($"
 *   insn=0x00000000004B1B28 string=0x00000000004B1B2C "%*#"
 *   insn=0x00000000004B1B2C string=0x00000000004B1B30 "38$"
 *   insn=0x00000000004B1B34 string=0x00000000004B1B38 "a"
 *   insn=0x00000000004B1B38 string=0x00000000004B1B3C "D"
 *   insn=0x00000000004B1B4C string=0x00000000004B1B50 "g"
 *   insn=0x00000000004B1B50 string=0x00000000004B1B54 "P"
 *   insn=0x00000000004B1B58 string=0x00000000004B1B5C "! "
 *   insn=0x00000000004B1B60 string=0x00000000004B1B64 "PN0"
 *   insn=0x00000000004B1B64 string=0x00000000004B1B68 "gN'"
 *   insn=0x00000000004B1B70 string=0x00000000004B1B74 "l"
 *   insn=0x00000000004B1B74 string=0x00000000004B1B78 "q81"
 *   insn=0x00000000004B1B78 string=0x00000000004B1B7C "#B!"
 *   insn=0x00000000004B1B90 string=0x00000000004B1B94 "C\n#"
 *   insn=0x00000000004B1B94 string=0x00000000004B1B98 "b""
 *   insn=0x00000000004B1BA0 string=0x00000000004B1BA4 "%@!"
 *   insn=0x00000000004B1BA0 string=0x00000000004B1BB8 "2:$"
 *   insn=0x00000000004B1BA4 string=0x00000000004B1BA8 "&"
 *   insn=0x00000000004B1BAC string=0x00000000004B1BB0 "$"
 *   insn=0x00000000004B1BB0 string=0x00000000004B1BB4 ","
 *   insn=0x00000000004B1BB4 string=0x00000000004B1C64 "@( "
 *   insn=0x00000000004B1BBC string=0x00000000004B1BC0 "f\n2"
 *   insn=0x00000000004B1BC4 string=0x00000000004B1BC8 "&"
 *   insn=0x00000000004B1BCC string=0x00000000004B1BD0 "H" "
 *   insn=0x00000000004B1BCC string=0x00000000004B1BFC "2*$"
 *   insn=0x00000000004B1BD8 string=0x00000000004B1BDC "rN2"
 *   insn=0x00000000004B1BE4 string=0x00000000004B1BE8 "3(3"
 *   insn=0x00000000004B1BEC string=0x00000000004B1BF0 "R\n3"
 *   insn=0x00000000004B1BF0 string=0x00000000004B1BF4 "F"
 *   insn=0x00000000004B1BF4 string=0x00000000004B1BF8 "&(&"
 *   insn=0x00000000004B1C00 string=0x00000000004B1C04 "%\n2"
 *   insn=0x00000000004B1C08 string=0x00000000004B1C0C "%@!"
 *   insn=0x00000000004B1C10 string=0x00000000004B1C14 "H" "
 *   insn=0x00000000004B1C2C string=0x00000000004B1C30 "0"
 *   insn=0x00000000004B1C34 string=0x00000000004B1C38 "Q"
 *   insn=0x00000000004B1C54 string=0x00000000004B1C58 "e"
 *   insn=0x00000000004B1C5C string=0x00000000004B1C60 ""
 *   insn=0x00000000004B1C88 string=0x00000000004B1C8C "a"
 *   insn=0x00000000004B1CB8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::Rectangle::TransformedRectsIntersect(
        float32x2_t *a1,
        float32x2_t *a2,
        float32x2_t *a3,
        float32x2_t *a4,
        float a5,
        float a6,
        float a7,
        float a8)
{
  float32x2_t v14; // d12
  float v15; // s8
  float32x2_t v16; // d11
  float v17; // s13
  float v18; // s14
  float v19; // s15
  float v20; // s10
  float v21; // s8
  float v22; // s6
  float v23; // s18
  float v24; // s1
  float v25; // s4
  float v26; // s16
  float v27; // s18
  float v28; // s7
  float v29; // s5
  float v30; // s19
  float v31; // s1
  float v32; // s4
  _BOOL8 result; // x0
  float v34; // s17
  float v35; // s2
  float v36; // s3
  float v37; // s5
  float v38; // s6
  float v39; // s18
  bool v40; // nf
  float v41; // s6
  float v42; // s19
  float v43; // s18
  float v44; // s17
  bool v45; // cc
  float v46; // s4
  float v47; // s16
  float v48; // [xsp+Ch] [xbp-B4h]
  unsigned __int64 v51; // [xsp+30h] [xbp-90h] BYREF
  float32x2_t v52; // [xsp+38h] [xbp-88h] BYREF
  float32x2_t v53[2]; // [xsp+40h] [xbp-80h] BYREF

  v53[1] = *(float32x2_t *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v53[0] = vadd_f32((float32x2_t)a1->n64_u64[0], vmul_f32(a1[1], (float32x2_t)0x3F0000003F000000LL));
  Caver::Vector2::Rotate((Caver::Vector2 *)v53, a5);
  v14.n64_u64[0] = vadd_f32(vmul_n_f32(v53[0], a6), (float32x2_t)a2->n64_u64[0]).n64_u64[0];
  v52.n64_u64[0] = vadd_f32((float32x2_t)a3->n64_u64[0], vmul_f32(a3[1], (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  Caver::Vector2::Rotate((Caver::Vector2 *)&v52, a7);
  v48 = a3[1].n64_f32[1];
  v15 = a5 - a7;
  v16.n64_u64[0] = vadd_f32(vmul_n_f32(v52, a8), (float32x2_t)a4->n64_u64[0]).n64_u64[0];
  v17 = a1[1].n64_f32[0] * a6;
  v18 = a1[1].n64_f32[1] * a6;
  v19 = a3[1].n64_f32[0] * a8;
  v20 = cosf(v15);
  v21 = sinf(v15);
  v51 = vsub_f32(v16, v14).n64_u64[0];
  Caver::Vector2::Rotate((Caver::Vector2 *)&v51, -a7);
  v22 = v20 * v21;
  v23 = (float)(v17 * 0.5) * v20;
  v24 = (float)(v18 * 0.5) * v20;
  v25 = (float)(v17 * 0.5) * v21;
  v26 = v23 - (float)((float)(v18 * 0.5) * v21);
  v27 = (float)-(float)((float)(v18 * 0.5) * v21) - v23;
  v28 = v24 + v25;
  v29 = (float)(v19 * 0.5) + *(float *)&v51;
  v30 = v24 - v25;
  if ( (float)(v20 * v21) >= 0.0 )
  {
    v31 = v24 + v25;
    v32 = v26;
    v28 = v30;
    v26 = v27;
  }
  else
  {
    v31 = v24 - v25;
    v32 = v27;
    v22 = v28;
  }
  if ( v21 < 0.0 )
  {
    v26 = -v26;
    v28 = -v28;
  }
  result = 0;
  if ( v26 <= v29 )
  {
    v34 = *(float *)&v51 - (float)(v19 * 0.5);
    if ( v26 <= (float)-v34 )
    {
      v35 = (float)(v48 * a8) * 0.5;
      v36 = *((float *)&v51 + 1) - v35;
      if ( v22 == 0.0 )
      {
        v37 = -v31;
        v38 = v31;
        if ( v31 >= v36 )
          return v38 <= (float)(v35 + *((float *)&v51 + 1)) || v37 <= (float)(v35 + *((float *)&v51 + 1));
      }
      else
      {
        v39 = v34 - v32;
        v38 = v31;
        if ( (float)((float)(v29 - v32) * (float)(v34 - v32)) > 0.0 )
        {
          v40 = v39 < 0.0;
          v41 = -v26;
          if ( v39 >= 0.0 )
          {
            v42 = v28;
          }
          else
          {
            v39 = v29 - v32;
            v42 = -v28;
          }
          if ( !v40 )
            v41 = v26;
          v38 = v31 + (float)((float)(v39 * (float)(v31 + v42)) / (float)(v32 + v41));
        }
        v43 = v34 + v32;
        v44 = v29 + v32;
        v45 = (float)((float)(v29 + v32) * v43) <= 0.0;
        v37 = -v31;
        if ( !v45 )
        {
          if ( v43 >= 0.0 )
          {
            v46 = v26 - v32;
            v47 = v31;
            v37 = v28;
            v44 = v43;
          }
          else
          {
            v46 = (float)-v32 - v26;
            v47 = v28;
          }
          v37 = (float)((float)((float)(v37 - v47) * v44) / v46) - v31;
        }
        if ( v38 >= v36 )
          return v38 <= (float)(v35 + *((float *)&v51 + 1)) || v37 <= (float)(v35 + *((float *)&v51 + 1));
      }
      if ( v37 < v36 )
        return 0;
      return v38 <= (float)(v35 + *((float *)&v51 + 1)) || v37 <= (float)(v35 + *((float *)&v51 + 1));
    }
  }
  return result;
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AA9A8
 * Mangled: _ZN5Caver13GUITextBubble12UpdateLayoutEv
 * Demangled: Caver::GUITextBubble::UpdateLayout(void)
 *
 * Callers: 1
 *   0x00000000001F3DD0  Caver::GUITextBubble::UpdateLayout(void)
 *
 * Callees: 6
 *   0x00000000001F5550  Caver::GUIRoundedRect::CreateWithOuterBounds(Caver::Rectangle const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7E80  Caver::FontText::Translate(Caver::Vector2 const&)
 *   0x00000000001F9470  Caver::Rectangle::Translate(Caver::Vector2 const&)
 *   0x00000000001F9920  Caver::Sprite::Translate(Caver::Vector2 const&)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *
 * Referenced strings: 66
 *   insn=0x00000000004AA9B8 string=0x00000000004AA9BC "T"
 *   insn=0x00000000004AA9C8 string=0x00000000004AA9CC " 5F"
 *   insn=0x00000000004AA9D0 string=0x00000000004AA9D4 "h2@"
 *   insn=0x00000000004AA9D4 string=0x00000000004AA9D8 "a"
 *   insn=0x00000000004AA9DC string=0x00000000004AA9E0 ""EI"
 *   insn=0x00000000004AA9DC string=0x0000000000583944 "\n"
 *   insn=0x00000000004AA9F0 string=0x00000000004AA9F4 "d"
 *   insn=0x00000000004AA9F4 string=0x00000000004AA9F8 "!81"
 *   insn=0x00000000004AA9F8 string=0x00000000004AA9FC "!*!"
 *   insn=0x00000000004AAA08 string=0x00000000004AAA0C "(81"
 *   insn=0x00000000004AAA10 string=0x00000000004AAA14 "`80"
 *   insn=0x00000000004AAA18 string=0x00000000004AAA1C "  ""
 *   insn=0x00000000004AAA24 string=0x00000000004AAA54 "h"
 *   insn=0x00000000004AAA28 string=0x00000000004AAA2C "!""
 *   insn=0x00000000004AAA2C string=0x00000000004AAA30 "":!"
 *   insn=0x00000000004AAA30 string=0x00000000004AAA34 "#*("
 *   insn=0x00000000004AAA34 string=0x00000000004AAA38 "B@&"
 *   insn=0x00000000004AAA38 string=0x00000000004AAA3C "c8""
 *   insn=0x00000000004AAA3C string=0x00000000004AAA40 "C(#"
 *   insn=0x00000000004AAA40 string=0x00000000004AAA44 "!(#"
 *   insn=0x00000000004AAA44 string=0x00000000004AAA48 "!@&"
 *   insn=0x00000000004AAA48 string=0x00000000004AAA4C "(8""
 *   insn=0x00000000004AAA4C string=0x00000000004AAA50 "Q"
 *   insn=0x00000000004AAA54 string=0x00000000004AAA58 "\t80"
 *   insn=0x00000000004AAA58 string=0x00000000004AAA5C "("
 *   insn=0x00000000004AAA5C string=0x00000000004AAA60 "h"@"
 *   insn=0x00000000004AAA5C string=0x00000000004AAA80 "qB"
 *   insn=0x00000000004AAA64 string=0x00000000004AAA68 "h"
 *   insn=0x00000000004AAA68 string=0x00000000004AAA6C ""
 *   insn=0x00000000004AAA78 string=0x00000000004AAA7C ""
 *   insn=0x00000000004AAA7C string=0x00000000004AAA98 "h"
 *   insn=0x00000000004AAA80 string=0x00000000004AAA84 "h&"
 *   insn=0x00000000004AAA84 string=0x00000000004AAA88 "h*@"
 *   insn=0x00000000004AAA88 string=0x00000000004AAA8C ""
 *   insn=0x00000000004AAA8C string=0x00000000004AAA90 "U"
 *   insn=0x00000000004AAA8C string=0x00000000004AAB8C "c"
 *   insn=0x00000000004AAAB0 string=0x00000000001FDA30 "0'"
 *   insn=0x00000000004AAABC string=0x00000000004AAAC0 "a"
 *   insn=0x00000000004AAAC0 string=0x00000000004AAAC4 "   "
 *   insn=0x00000000004AAAC4 string=0x00000000004AAAC8 ""
 *   insn=0x00000000004AAAC8 string=0x00000000004AAAE8 "b\n@"
 *   insn=0x00000000004AAAD4 string=0x00000000004AAAD8 "!X""
 *   insn=0x00000000004AAAD8 string=0x00000000004AAADC " 8 "
 *   insn=0x00000000004AAAEC string=0x00000000004AAAF0 "!(""
 *   insn=0x00000000004AAAF8 string=0x00000000004AAB28 "`"
 *   insn=0x00000000004AAB04 string=0x00000000004AAB08 "!h""
 *   insn=0x00000000004AAB08 string=0x00000000004AAB0C " 8 "
 *   insn=0x00000000004AAB20 string=0x00000000004AAB24 "S:"
 *   insn=0x00000000004AAB24 string=0x00000000001F9470 "0'"
 *   insn=0x00000000004AAB30 string=0x00000000004AAB34 "h"
 *   insn=0x00000000004AAB30 string=0x00000000001F5550 "P'"
 *   insn=0x00000000004AAB48 string=0x00000000004AAB4C "C"
 *   insn=0x00000000004AAB6C string=0x00000000004AAB70 "`2@"
 *   insn=0x00000000004AAB74 string=0x00000000004AAB78 "h"
 *   insn=0x00000000004AAB74 string=0x00000000001F7E80 "0'"
 *   insn=0x00000000004AAB7C string=0x00000000004AAB80 "`"
 *   insn=0x00000000004AAB80 string=0x00000000004AAB84 "h*@"
 *   insn=0x00000000004AAB8C string=0x00000000004AAB90 "b"
 *   insn=0x00000000004AABA4 string=0x00000000004AABA8 "c(%"
 *   insn=0x00000000004AABA8 string=0x00000000004AABAC "@( "
 *   insn=0x00000000004AABAC string=0x00000000004AABB0 "b8&"
 *   insn=0x00000000004AABC4 string=0x00000000004AABC8 "`*@"
 *   insn=0x00000000004AABD4 string=0x00000000004AABD8 " "
 *   insn=0x00000000004AABDC string=0x00000000004AABE0 "P;"
 *   insn=0x00000000004AABE0 string=0x00000000001F9920 "0'"
 *   insn=0x00000000004AAC08 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUITextBubble::UpdateLayout(Caver::GUITextBubble *this)
{
  float *v2; // x8
  float v3; // s4
  float v4; // s6
  float v5; // s17
  float v6; // s16
  float v7; // s8
  float v8; // s1
  float v9; // s2
  float v10; // s9
  __int64 v11; // x8
  float v12; // s0
  __int64 v13; // x8
  float v14; // s1
  float v15; // s0
  float v16; // s1
  float v17; // s6
  float v18; // s3
  float32x2_t *v19; // x0
  float v20; // [xsp+0h] [xbp-80h]
  float v21; // [xsp+10h] [xbp-70h]
  float v22[2]; // [xsp+28h] [xbp-58h] BYREF
  __int64 v23; // [xsp+30h] [xbp-50h] BYREF
  float v24[2]; // [xsp+38h] [xbp-48h] BYREF
  __int64 v25; // [xsp+40h] [xbp-40h] BYREF
  float32x2_t v26; // [xsp+48h] [xbp-38h] BYREF
  float v27; // [xsp+50h] [xbp-30h]
  float v28; // [xsp+54h] [xbp-2Ch]
  __int64 v29; // [xsp+58h] [xbp-28h]

  v29 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (float *)*((_QWORD *)this + 12);
  v3 = v2[16];
  v4 = v2[17];
  v5 = v3 - *((float *)this + 28);
  v6 = v4 - *((float *)this + 29);
  v7 = (float)(*((float *)this + 30) + (float)(v5 + (float)((float)(v3 + v2[18]) - v5))) - v5;
  if ( (float)(60.0 - v7) > 0.01 )
  {
    v8 = (float)(60.0 - v7) * 0.5;
    v9 = roundf(v5 - v8);
    v7 = roundf(v8 + (float)(v9 + (float)((float)(v5 + v7) - v9))) - v9;
    v5 = v9;
  }
  v10 = (float)(*((float *)this + 31) + (float)(v6 + (float)((float)(v4 + v2[19]) - v6))) - v6;
  if ( *((_QWORD *)this + 6) )
  {
    v11 = *((_QWORD *)this + 8);
    v20 = v5;
    v21 = v4 - *((float *)this + 29);
    if ( v11 )
      v12 = *(float *)(*(_QWORD *)v11 + 88LL) + -3.0;
    else
      v12 = 0.0;
    v24[0] = v7 * -0.6;
    v24[1] = v12;
    Caver::Vector2::Rounded(&v25, (Caver::Vector2 *)v24);
    v27 = v7;
    v28 = v10;
    v26.n64_u64[0] = v25;
    v14 = *(float *)this;
    if ( *(float *)this <= *(float *)&v25 )
    {
      v16 = v14 + *((float *)this + 2);
      if ( (float)(v7 + *(float *)&v25) <= v16 )
        goto LABEL_14;
      v15 = fminf(fmaxf(v16, 40.0) - (float)(v7 + *(float *)&v25), 0.0);
    }
    else
    {
      v15 = fmaxf(fminf(v14, -50.0) - *(float *)&v25, 0.0);
    }
    v25 = LODWORD(v15);
    Caver::Rectangle::Translate((Caver::Rectangle *)&v26, (const Caver::Vector2 *)&v25);
LABEL_14:
    Caver::GUIRoundedRect::CreateWithOuterBounds(*((Caver::GUIRoundedRect **)this + 6), (const Caver::Rectangle *)&v26);
    v25 = vadd_f32(
            vsub_f32(
              *(float32x2_t *)(*((_QWORD *)this + 6) + 12LL),
              (float32x2_t)__PAIR64__(LODWORD(v21), LODWORD(v20))),
            (float32x2_t)0x3F80000000000000LL).n64_i64[0];
    Caver::Vector2::Rounded(&v23, (Caver::Vector2 *)&v25);
    v25 = v23;
    Caver::FontText::Translate();
    *((_OWORD *)this + 1) = *(_OWORD *)(*((_QWORD *)this + 6) + 12LL);
    v13 = *((_QWORD *)this + 10);
    if ( !v13 )
      return;
    goto LABEL_15;
  }
  *((float *)this + 4) = v5;
  *((float *)this + 5) = v6;
  *((float *)this + 6) = v7;
  *((float *)this + 7) = v10;
  v13 = *((_QWORD *)this + 10);
  if ( v13 )
  {
LABEL_15:
    v17 = *(float *)(v13 + 20);
    v18 = *((float *)this + 5) + -2.0;
    v22[0] = (float)(*((float *)this + 4) + (float)(*((float *)this + 6) * 0.5)) - (float)(*(float *)(v13 + 16) * 0.5);
    v22[1] = v18 - v17;
    Caver::Vector2::Rounded((__int64 *)&v26, (Caver::Vector2 *)v22);
    v19 = (float32x2_t *)*((_QWORD *)this + 10);
    v25 = vsub_f32(v26, v19[1]).n64_i64[0];
    Caver::Sprite::Translate((Caver::Sprite *)v19, (const Caver::Vector2 *)&v25);
  }
}


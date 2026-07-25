/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000383ADC
 * Mangled: _ZN5Caver23OfflineAchievementsView14LayoutSubviewsEv
 * Demangled: Caver::OfflineAchievementsView::LayoutSubviews(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5840  Caver::GUILabel::UpdateBounds(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *
 * Referenced strings: 86
 *   insn=0x0000000000383AF4 string=0x0000000000383AF8 "T"
 *   insn=0x0000000000383B04 string=0x0000000000383B08 "j"
 *   insn=0x0000000000383B08 string=0x0000000000383B0C "b"
 *   insn=0x0000000000383B08 string=0x00000000001F94B0 "0'"
 *   insn=0x0000000000383B0C string=0x0000000000383B10 "a"
 *   insn=0x0000000000383B10 string=0x0000000000383B14 "`z@"
 *   insn=0x0000000000383B24 string=0x0000000000383B28 "|@"
 *   insn=0x0000000000383B28 string=0x0000000000383B2C "B($"
 *   insn=0x0000000000383B30 string=0x0000000000383B34 "c8!"
 *   insn=0x0000000000383B48 string=0x0000000000383B4C ""
 *   insn=0x0000000000383B48 string=0x00000000001FB170 "0'"
 *   insn=0x0000000000383B4C string=0x0000000000383B50 "`"
 *   insn=0x0000000000383B50 string=0x0000000000383B54 "i"
 *   insn=0x0000000000383B58 string=0x0000000000383B5C """
 *   insn=0x0000000000383B5C string=0x0000000000383B60 "`"
 *   insn=0x0000000000383B60 string=0x0000000000383B64 "h"
 *   insn=0x0000000000383B78 string=0x0000000000383B7C "}"
 *   insn=0x0000000000383B7C string=0x0000000000383B80 "`"
 *   insn=0x0000000000383B80 string=0x0000000000383B84 "h"
 *   insn=0x0000000000383B84 string=0x0000000000383B88 "\nB"
 *   insn=0x0000000000383B8C string=0x0000000000383B90 "\t@G"
 *   insn=0x0000000000383B90 string=0x0000000000383B94 ""
 *   insn=0x0000000000383B9C string=0x0000000000383BA0 "t"
 *   insn=0x0000000000383BA0 string=0x0000000000383BA4 "`"
 *   insn=0x0000000000383BB0 string=0x0000000000383BB4 "|@"
 *   insn=0x0000000000383BB8 string=0x0000000000383BBC "(8 "
 *   insn=0x0000000000383BC8 string=0x0000000000383BCC "i"
 *   insn=0x0000000000383BCC string=0x0000000000383BD0 "`"
 *   insn=0x0000000000383BD4 string=0x0000000000383BD8 "4"
 *   insn=0x0000000000383BDC string=0x0000000000383BE0 "h"
 *   insn=0x0000000000383BDC string=0x00000000001F5840 "P'"
 *   insn=0x0000000000383BE0 string=0x0000000000383BE4 "`"
 *   insn=0x0000000000383BEC string=0x0000000000383BF0 "\tAH"
 *   insn=0x0000000000383BF0 string=0x0000000000383BF4 ""
 *   insn=0x0000000000383BFC string=0x0000000000383C00 "\"
 *   insn=0x0000000000383C00 string=0x0000000000383C04 "h&S"
 *   insn=0x0000000000383C04 string=0x0000000000383C08 "?"
 *   insn=0x0000000000383C0C string=0x0000000000383C10 "i"
 *   insn=0x0000000000383C0C string=0x0000000000383C64 "`"
 *   insn=0x0000000000383C10 string=0x0000000000383C14 ")"
 *   insn=0x0000000000383C20 string=0x0000000000383C24 "i"
 *   insn=0x0000000000383C28 string=0x0000000000383C2C "))"
 *   insn=0x0000000000383C30 string=0x0000000000383C34 ")"
 *   insn=0x0000000000383C40 string=0x0000000000383C44 "K"
 *   insn=0x0000000000383C44 string=0x0000000000383C48 "h&S"
 *   insn=0x0000000000383C50 string=0x0000000000383C54 ")"
 *   insn=0x0000000000383C54 string=0x0000000000383C58 ")"
 *   insn=0x0000000000383C58 string=0x0000000000383C5C "?"
 *   insn=0x0000000000383C5C string=0x0000000000383C60 "("
 *   insn=0x0000000000383C70 string=0x0000000000383C74 ""
 *   insn=0x0000000000383C74 string=0x0000000000383C78 "\t"
 *   insn=0x0000000000383C7C string=0x0000000000383C80 ""
 *   insn=0x0000000000383C94 string=0x0000000000383C98 "h"
 *   insn=0x0000000000383C98 string=0x0000000000383C9C "\t"
 *   insn=0x0000000000383C9C string=0x0000000000383CA0 ""EI"
 *   insn=0x0000000000383C9C string=0x0000000000583944 "\n"
 *   insn=0x0000000000383CB4 string=0x0000000000383CB8 "!(#"
 *   insn=0x0000000000383CBC string=0x0000000000383CC0 "!8$"
 *   insn=0x0000000000383CC0 string=0x0000000000383CC4 "c"
 *   insn=0x0000000000383CC4 string=0x0000000000383CC8 "` ""
 *   insn=0x0000000000383CC8 string=0x0000000000383CCC "!@!"
 *   insn=0x0000000000383CCC string=0x0000000000383CD0 "M"
 *   insn=0x0000000000383CDC string=0x0000000000383CE0 "\t"
 *   insn=0x0000000000383CE4 string=0x0000000000383CE8 "#8#"
 *   insn=0x0000000000383CE8 string=0x0000000000383CEC "c"
 *   insn=0x0000000000383CEC string=0x0000000000383CF0 "` ""
 *   insn=0x0000000000383CF0 string=0x0000000000383CF4 "M"
 *   insn=0x0000000000383CF4 string=0x0000000000383CFC "\t"
 *   insn=0x0000000000383D08 string=0x0000000000383D0C "`"
 *   insn=0x0000000000383D10 string=0x0000000000383D14 "c"
 *   insn=0x0000000000383D14 string=0x0000000000383D18 "b"
 *   insn=0x0000000000383D1C string=0x0000000000383D20 ""
 *   insn=0x0000000000383D20 string=0x0000000000383D24 ""
 *   insn=0x0000000000383D24 string=0x0000000000383D28 "@( "
 *   insn=0x0000000000383D30 string=0x0000000000383D34 "b($"
 *   insn=0x0000000000383D48 string=0x0000000000383D4C "\t"
 *   insn=0x0000000000383D4C string=0x0000000000383D50 "`"
 *   insn=0x0000000000383D50 string=0x0000000000383D54 "`"
 *   insn=0x0000000000383D54 string=0x0000000000383D58 "`"
 *   insn=0x0000000000383D58 string=0x0000000000383D5C "a"
 *   insn=0x0000000000383D5C string=0x0000000000383D60 "h"
 *   insn=0x0000000000383D78 string=0x0000000000383D7C ""
 *   insn=0x0000000000383D84 string=0x0000000000383D88 "!(#"
 *   insn=0x0000000000383D8C string=0x0000000000383D90 "!(""
 *   insn=0x0000000000383DAC string=0x0000000000383DCC "A"
 *   insn=0x0000000000383DCC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float *__fastcall Caver::OfflineAchievementsView::LayoutSubviews(Caver::OfflineAchievementsView *this)
{
  float *v2; // x0
  float v3; // s1
  unsigned int v4; // s2
  unsigned int v5; // s0
  Caver::GUIView *v6; // x0
  float v7; // w8
  float v8; // s0
  __int64 v9; // x0
  float v10; // w8
  float *v11; // x0
  float v12; // s0
  float v13; // w8
  float v14; // s8
  Caver::GUILabel *v15; // x0
  __int64 v16; // x8
  Caver::GUIView *v17; // x0
  unsigned __int64 v18; // x9
  __int64 v19; // x8
  __int64 v20; // x21
  unsigned __int64 v21; // x22
  Caver::GUIView *v22; // x0
  float v23; // w9
  float *v24; // x0
  float v25; // w9
  void (__fastcall *v26)(float *, unsigned __int64 *); // x8
  __int64 v27; // x8
  float v28; // s0
  float v29; // s1
  float v30; // s3
  float *result; // x0
  float v32; // s3
  float v33; // s1
  float v34; // s0
  __int64 v35; // x8
  float v36; // s0
  float v37; // s1
  float v38; // s3
  unsigned __int64 v39; // [xsp+8h] [xbp-58h] BYREF
  float v40; // [xsp+10h] [xbp-50h]
  float v41; // [xsp+14h] [xbp-4Ch]
  __int64 v42; // [xsp+18h] [xbp-48h]

  v42 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::LayoutSubviews(this);
  v2 = (float *)*((_QWORD *)this + 30);
  v3 = v2[32];
  *(float *)&v4 = *((float *)this + 33) + 0.0;
  *(float *)&v5 = (float)(*((float *)this + 34) + *((float *)this + 36)) + (float)(-14.0 - v3);
  v40 = v2[31];
  v41 = v3;
  v39 = __PAIR64__(v5, v4);
  Caver::GUIView::SetFrame((Caver::GUIView *)v2, (const Caver::Rectangle *)&v39);
  v6 = (Caver::GUIView *)*((_QWORD *)this + 36);
  v7 = *((float *)this + 36);
  v8 = *((float *)this + 35) + -200.0;
  v39 = 1120403456;
  v40 = v8;
  v41 = v7;
  Caver::GUIView::SetFrame(v6, (const Caver::Rectangle *)&v39);
  v9 = *((_QWORD *)this + 32);
  v10 = *(float *)(*((_QWORD *)this + 36) + 140LL);
  v39 = *(_QWORD *)(v9 + 116);
  v40 = v10;
  v41 = 36.0;
  Caver::GUIView::SetFrame((Caver::GUIView *)v9, (const Caver::Rectangle *)&v39);
  v11 = (float *)*((_QWORD *)this + 32);
  v12 = v11[32];
  v13 = v11[31];
  LODWORD(v39) = 0;
  v14 = -20.0 - v12;
  v40 = v13;
  v41 = v12;
  *((float *)&v39 + 1) = -20.0 - v12;
  Caver::GUIView::SetFrame((Caver::GUIView *)v11, (const Caver::Rectangle *)&v39);
  v15 = (Caver::GUILabel *)*((_QWORD *)this + 32);
  *((_DWORD *)v15 + 77) = 4;
  Caver::GUILabel::UpdateBounds(v15);
  v16 = *((_QWORD *)this + 32);
  v17 = (Caver::GUIView *)*((_QWORD *)this + 34);
  v18 = *(_QWORD *)(v16 + 132);
  LODWORD(v16) = *(_DWORD *)(v16 + 140);
  v39 = v18;
  v40 = *(float *)&v16;
  v41 = 1.0;
  Caver::GUIView::SetFrame(v17, (const Caver::Rectangle *)&v39);
  v19 = *((_QWORD *)this + 38);
  if ( *((_QWORD *)this + 39) != v19 )
  {
    v20 = 0;
    v21 = 0;
    do
    {
      v22 = *(Caver::GUIView **)(v19 + v20);
      v14 = v14 + -62.0;
      v23 = *(float *)(*((_QWORD *)this + 36) + 140LL);
      LODWORD(v39) = 0;
      *((float *)&v39 + 1) = v14;
      v40 = v23;
      v41 = 52.0;
      Caver::GUIView::SetFrame(v22, (const Caver::Rectangle *)&v39);
      v19 = *((_QWORD *)this + 38);
      ++v21;
      v20 += 16;
    }
    while ( (*((_QWORD *)this + 39) - v19) >> 4 > v21 );
  }
  v24 = (float *)*((_QWORD *)this + 36);
  v25 = v24[35];
  v26 = *(void (__fastcall **)(float *, unsigned __int64 *))(*(_QWORD *)v24 + 304LL);
  LODWORD(v39) = 0;
  *((float *)&v39 + 1) = v14 + -30.0;
  v40 = v25;
  v41 = -(float)(v14 + -30.0);
  v26(v24, &v39);
  v27 = *((_QWORD *)this + 36);
  v28 = -*(float *)(v27 + 236);
  v29 = -(float)((float)(*(float *)(v27 + 240) + *(float *)(v27 + 248)) - *(float *)(v27 + 144));
  if ( fabsf(v28 - *(float *)(v27 + 264)) > 0.01 )
    *(_DWORD *)(v27 + 292) = 0;
  v30 = *(float *)(v27 + 308);
  *(_BYTE *)(v27 + 260) = 1;
  *(float *)(v27 + 264) = v28;
  if ( fabsf(v29 - v30) > 0.01 )
    *(_DWORD *)(v27 + 336) = 0;
  *(_BYTE *)(v27 + 304) = 1;
  *(float *)(v27 + 308) = v29;
  *(float *)(v27 + 256) = v28;
  *(float *)(v27 + 300) = v29;
  result = (float *)*((_QWORD *)this + 41);
  if ( result )
  {
    v32 = *((float *)this + 34);
    v33 = result[31];
    v34 = (float)((float)(*((float *)this + 33) + *((float *)this + 35)) - v33) + -15.0;
    v41 = result[32];
    *(float *)&v39 = v34;
    *((float *)&v39 + 1) = v32 + 15.0;
    v40 = v33;
    Caver::GUIView::SetFrame((Caver::GUIView *)result, (const Caver::Rectangle *)&v39);
    result = (float *)*((_QWORD *)this + 43);
    if ( result )
    {
      v35 = *((_QWORD *)this + 41);
      v36 = *((float *)this + 33) + *((float *)this + 35);
      v37 = *(float *)(v35 + 120);
      v38 = *(float *)(v35 + 128);
      v40 = result[31];
      v41 = result[32];
      *(float *)&v39 = (float)(v36 - v40) + -15.0;
      *((float *)&v39 + 1) = (float)(v37 + v38) + 10.0;
      return (float *)Caver::GUIView::SetFrame((Caver::GUIView *)result, (const Caver::Rectangle *)&v39);
    }
  }
  return result;
}


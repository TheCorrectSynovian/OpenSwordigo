/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049008C
 * Mangled: _ZN5Caver12GUIAlertView12UpdateLayoutEv
 * Demangled: Caver::GUIAlertView::UpdateLayout(void)
 *
 * Callers: 1
 *   0x00000000001F7610  Caver::GUIAlertView::UpdateLayout(void)
 *
 * Callees: 5
 *   0x00000000001F3C90  Caver::Rectangle::RectangleByOutsetting(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FB1E0  Caver::Rectangle::RectangleByInsetting(float)
 *   0x0000000000202DC0  Caver::GUIView::SetTouchBoundsToIncludeSubviewTouchBounds(void)
 *
 * Referenced strings: 143
 *   insn=0x00000000004900B0 string=0x00000000004900B4 "U"
 *   insn=0x00000000004900C0 string=0x00000000004900C4 "!5G"
 *   insn=0x00000000004900C0 string=0x0000000000583734 "o"
 *   insn=0x00000000004900C8 string=0x00000000004900CC "`"
 *   insn=0x00000000004900D4 string=0x00000000004900D8 "l"T"
 *   insn=0x00000000004900D8 string=0x00000000004900DC "n"
 *   insn=0x00000000004900DC string=0x00000000004900E0 "j"
 *   insn=0x00000000004900E4 string=0x00000000004900E8 ""
 *   insn=0x00000000004900F0 string=0x00000000004900F4 "k"
 *   insn=0x00000000004900FC string=0x0000000000490100 "?"
 *   insn=0x0000000000490100 string=0x0000000000490104 "h"
 *   insn=0x0000000000490104 string=0x0000000000490108 """
 *   insn=0x0000000000490110 string=0x0000000000490114 "*"
 *   insn=0x0000000000490118 string=0x0000000000490130 "."
 *   insn=0x0000000000490120 string=0x0000000000490124 "Bh$"
 *   insn=0x0000000000490124 string=0x0000000000490128 "C)#"
 *   insn=0x000000000049012C string=0x000000000049013C "n"
 *   insn=0x000000000049013C string=0x0000000000490140 "c8*"
 *   insn=0x000000000049014C string=0x0000000000490164 "n"
 *   insn=0x0000000000490150 string=0x0000000000490154 "@ $"
 *   insn=0x0000000000490154 string=0x0000000000490158 "E)%"
 *   insn=0x000000000049015C string=0x0000000000490160 "c(%"
 *   insn=0x0000000000490170 string=0x0000000000490174 "+"
 *   insn=0x0000000000490174 string=0x0000000000490198 "?"
 *   insn=0x0000000000490180 string=0x0000000000490184 "E)%"
 *   insn=0x0000000000490198 string=0x000000000049019C "K"
 *   insn=0x000000000049019C string=0x00000000004901C4 "l6W"
 *   insn=0x00000000004901A8 string=0x00000000004901AC "@ $"
 *   insn=0x00000000004901AC string=0x00000000004901B0 "E)%"
 *   insn=0x00000000004901B8 string=0x00000000004901BC "c(%"
 *   insn=0x00000000004901BC string=0x00000000004901C0 "!"
 *   insn=0x00000000004901C4 string=0x00000000004901C8 "t"
 *   insn=0x00000000004901F0 string=0x00000000004901F4 "@ %"
 *   insn=0x0000000000490200 string=0x0000000000490204 "c(&"
 *   insn=0x0000000000490204 string=0x0000000000490208 ""
 *   insn=0x000000000049020C string=0x0000000000490210 "K"
 *   insn=0x0000000000490210 string=0x0000000000490214 "k"
 *   insn=0x0000000000490210 string=0x0000000000490238 "?"
 *   insn=0x0000000000490214 string=0x0000000000490218 "L"
 *   insn=0x000000000049021C string=0x0000000000490220 "@ $"
 *   insn=0x0000000000490220 string=0x0000000000490224 "E)%"
 *   insn=0x0000000000490228 string=0x000000000049022C "k"
 *   insn=0x000000000049022C string=0x0000000000490230 "c(%"
 *   insn=0x0000000000490230 string=0x0000000000490234 "!"
 *   insn=0x0000000000490238 string=0x000000000049023C "i"
 *   insn=0x0000000000490240 string=0x0000000000490244 "!"
 *   insn=0x0000000000490248 string=0x000000000049024C "(}@"
 *   insn=0x000000000049024C string=0x0000000000490250 ""
 *   insn=0x0000000000490280 string=0x0000000000490284 "`"
 *   insn=0x0000000000490280 string=0x00000000001FB1E0 "0'"
 *   insn=0x000000000049028C string=0x0000000000490290 ""
 *   insn=0x0000000000490294 string=0x0000000000490298 "K) "
 *   insn=0x0000000000490298 string=0x000000000049029C ""
 *   insn=0x00000000004902A0 string=0x00000000004902D0 "`"
 *   insn=0x00000000004902B0 string=0x00000000004902B4 "A) "
 *   insn=0x00000000004902B4 string=0x00000000004902B8 "k9!"
 *   insn=0x00000000004902CC string=0x00000000001FB170 "0'"
 *   insn=0x00000000004902D0 string=0x00000000004902D4 ""
 *   insn=0x00000000004902D4 string=0x00000000004902D8 ""
 *   insn=0x00000000004902DC string=0x000000000049030C "h&T"
 *   insn=0x00000000004902EC string=0x00000000004902F0 "A) "
 *   insn=0x00000000004902F0 string=0x00000000004902F4 "k9!"
 *   insn=0x000000000049030C string=0x0000000000490310 ")"
 *   insn=0x0000000000490310 string=0x0000000000490314 ")"
 *   insn=0x0000000000490314 string=0x0000000000490318 "?"
 *   insn=0x000000000049031C string=0x0000000000490370 "h&W"
 *   insn=0x0000000000490330 string=0x0000000000490334 "\n"
 *   insn=0x0000000000490338 string=0x000000000049033C " "
 *   insn=0x000000000049033C string=0x0000000000490340 "@) "
 *   insn=0x0000000000490340 string=0x0000000000490344 "k9 "
 *   insn=0x0000000000490350 string=0x0000000000490354 "h&T"
 *   insn=0x000000000049035C string=0x0000000000490360 ")"
 *   insn=0x0000000000490360 string=0x0000000000490364 ")"
 *   insn=0x0000000000490370 string=0x0000000000490374 ")"
 *   insn=0x0000000000490374 string=0x0000000000490378 ")"
 *   insn=0x0000000000490378 string=0x000000000049037C "?"
 *   insn=0x0000000000490380 string=0x0000000000490410 "h"
 *   insn=0x0000000000490388 string=0x000000000049038C "\t"
 *   insn=0x000000000049038C string=0x0000000000490390 ""
 *   insn=0x00000000004903A4 string=0x00000000004903A8 "!)"
 *   insn=0x00000000004903B4 string=0x00000000004903B8 "!(,"
 *   insn=0x00000000004903B8 string=0x00000000004903BC "k9!"
 *   insn=0x00000000004903BC string=0x00000000004903C0 "!"
 *   insn=0x00000000004903C0 string=0x00000000004903C4 "!)"
 *   insn=0x00000000004903D4 string=0x00000000004903D8 "f"
 *   insn=0x00000000004903E4 string=0x00000000004903E8 "*"
 *   insn=0x00000000004903E8 string=0x00000000001F3C90 "P'"
 *   insn=0x00000000004903F8 string=0x00000000004903FC "h&W"
 *   insn=0x00000000004903FC string=0x0000000000490400 ")"
 *   insn=0x0000000000490400 string=0x0000000000490404 ")"
 *   insn=0x0000000000490408 string=0x000000000049040C "K"
 *   insn=0x0000000000490410 string=0x0000000000490414 ")"
 *   insn=0x0000000000490414 string=0x0000000000490418 ")"
 *   insn=0x0000000000490418 string=0x000000000049041C "?"
 *   insn=0x0000000000490420 string=0x0000000000490490 "i"
 *   insn=0x0000000000490428 string=0x000000000049042C ""
 *   insn=0x000000000049043C string=0x0000000000490440 "\t"
 *   insn=0x0000000000490440 string=0x0000000000490444 "!("
 *   insn=0x000000000049044C string=0x0000000000490450 "A)!"
 *   insn=0x0000000000490450 string=0x0000000000490454 "k9!"
 *   insn=0x0000000000490454 string=0x0000000000490458 "!"
 *   insn=0x0000000000490458 string=0x000000000049045C "!("
 *   insn=0x000000000049046C string=0x0000000000490470 "@"
 *   insn=0x0000000000490470 string=0x0000000000490474 "h"
 *   insn=0x000000000049047C string=0x0000000000490480 ")"
 *   insn=0x0000000000490480 string=0x0000000000490484 ")"
 *   insn=0x0000000000490488 string=0x000000000049048C "+"
 *   insn=0x0000000000490490 string=0x0000000000490494 ""
 *   insn=0x0000000000490494 string=0x0000000000490498 ""
 *   insn=0x00000000004904A0 string=0x00000000004904A4 "`"
 *   insn=0x00000000004904AC string=0x00000000004904B0 "D-H"
 *   insn=0x00000000004904C0 string=0x00000000004904C4 "!(%"
 *   insn=0x00000000004904C8 string=0x00000000004904CC "K5F"
 *   insn=0x00000000004904CC string=0x00000000004904D0 "!"
 *   insn=0x00000000004904D0 string=0x00000000004904D4 "!(#"
 *   insn=0x00000000004904D4 string=0x00000000004904D8 "-X$"
 *   insn=0x00000000004904E0 string=0x00000000004904E4 ""
 *   insn=0x00000000004904E4 string=0x00000000004904E8 "\n"
 *   insn=0x00000000004904F8 string=0x00000000004904FC "\t"
 *   insn=0x000000000049050C string=0x0000000000490510 ""
 *   insn=0x000000000049051C string=0x0000000000490520 "B$"
 *   insn=0x0000000000490520 string=0x0000000000490524 "!(""
 *   insn=0x0000000000490524 string=0x0000000000490528 "c"
 *   insn=0x0000000000490528 string=0x000000000049052C "4iv"
 *   insn=0x0000000000490530 string=0x0000000000490534 "!("
 *   insn=0x0000000000490534 string=0x0000000000490538 "`( "
 *   insn=0x0000000000490544 string=0x0000000000490548 "`( "
 *   insn=0x0000000000490548 string=0x000000000049054C "B(*"
 *   insn=0x0000000000490570 string=0x0000000000490574 "i*T"
 *   insn=0x0000000000490580 string=0x0000000000490584 "I"
 *   insn=0x000000000049058C string=0x0000000000490590 "("
 *   insn=0x0000000000490590 string=0x0000000000490594 "@( "
 *   insn=0x00000000004905A0 string=0x00000000004905A4 "  "
 *   insn=0x00000000004905A4 string=0x00000000004905A8 "`"
 *   insn=0x00000000004905B8 string=0x00000000004905BC "i"
 *   insn=0x00000000004905C0 string=0x00000000004905C4 ""
 *   insn=0x00000000004905C4 string=0x00000000004905C8 ""
 *   insn=0x00000000004905D0 string=0x0000000000490504 "`"
 *   insn=0x00000000004905D8 string=0x00000000004905DC "h"
 *   insn=0x00000000004905E0 string=0x00000000004905E4 "-@"
 *   insn=0x00000000004905F4 string=0x00000000004905F8 "a"
 *   insn=0x00000000004905F8 string=0x0000000000490624 "+"
 *   insn=0x0000000000490624 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIAlertView::UpdateLayout(__int64 this)
{
  __int64 v1; // x19
  __int64 *v2; // x12
  __int64 v3; // x14
  __int64 *v4; // x10
  unsigned __int64 v5; // x13
  unsigned __int64 v6; // x9
  unsigned __int64 v7; // x11
  unsigned __int64 v8; // x8
  float v9; // s2
  float v10; // s1
  float v11; // s10
  float v12; // s2
  float v13; // s3
  __int64 v14; // x14
  float v15; // s3
  __int64 v16; // x13
  __int64 v17; // t1
  float v18; // s4
  float v19; // s5
  __int64 *v20; // x12
  __int64 v21; // x14
  __int64 v22; // x13
  __int64 v23; // x14
  __int64 v24; // t1
  float v25; // s5
  float v26; // s6
  __int64 v27; // x11
  __int64 v28; // t1
  float v29; // s4
  float v30; // s5
  bool v31; // cc
  void (__fastcall *v32)(__int64, __int64 *); // x8
  float v33; // s8
  __int64 v34; // x0
  float v35; // s11
  float v36; // s0
  __int64 v37; // x0
  float v38; // s0
  __int64 v39; // x8
  __int64 v40; // x20
  __int64 v41; // x22
  float *v42; // x0
  float v43; // w9
  float v44; // w10
  __int64 v45; // x8
  __int64 v46; // x22
  __int64 v47; // x23
  __int64 v48; // x20
  float v49; // w8
  float v50; // w9
  __int64 v51; // x8
  __int64 v52; // x20
  __int64 v53; // x22
  float *v54; // x0
  float v55; // w8
  float v56; // w9
  __int64 v57; // x9
  unsigned __int64 v58; // x8
  float v59; // s0
  float v60; // s13
  __int64 v61; // x22
  __int64 v62; // x23
  float v63; // s15
  __int64 v64; // x20
  float v65; // s2
  float v66; // s0
  float v67; // s2
  float v68; // s0
  unsigned __int64 v69; // x9
  float v70; // s0
  __int128 v71; // [xsp+8h] [xbp-A8h] BYREF
  float v72; // [xsp+18h] [xbp-98h] BYREF
  float v73; // [xsp+1Ch] [xbp-94h]
  float v74; // [xsp+20h] [xbp-90h]
  int v75; // [xsp+24h] [xbp-8Ch]
  __int64 v76; // [xsp+28h] [xbp-88h] BYREF
  float v77; // [xsp+30h] [xbp-80h]
  float v78; // [xsp+34h] [xbp-7Ch]
  __int64 v79; // [xsp+38h] [xbp-78h]

  v1 = this;
  v79 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(float *)(this + 140) > 0.001 )
  {
    v2 = *(__int64 **)(this + 320);
    v3 = *(_QWORD *)(this + 288);
    v4 = *(__int64 **)(this + 392);
    v5 = *(_QWORD *)(this + 328) - (_QWORD)v2;
    v6 = v5 >> 4;
    v7 = *(_QWORD *)(this + 400) - (_QWORD)v4;
    v8 = v7 >> 4;
    if ( (int)(v5 >> 4) <= 0 )
      v9 = 16.0;
    else
      v9 = 8.0;
    v10 = 12.0;
    if ( (int)v8 <= 0 )
      v11 = v9;
    else
      v11 = 12.0;
    if ( *(_QWORD *)(*(_QWORD *)(v3 + 256) - 24LL) )
    {
      v12 = fmaxf(*(float *)(v3 + 124), 0.0);
      v13 = v11 + *(float *)(v3 + 128);
    }
    else
    {
      v13 = -0.0;
      v12 = 0.0;
    }
    v14 = *(_QWORD *)(this + 304);
    v15 = v13 - v11;
    if ( *(_QWORD *)(*(_QWORD *)(v14 + 256) - 24LL) )
    {
      if ( v12 < *(float *)(v14 + 124) )
        v12 = *(float *)(v14 + 124);
      v15 = v15 + (float)(v11 + *(float *)(v14 + 128));
    }
    if ( (int)((*(_QWORD *)(this + 352) - *(_QWORD *)(this + 344)) >> 4) >= 1 )
      v15 = (float)((float)((float)(v11 + 4.0) + 36.0) + -12.0) + v15;
    if ( (int)v6 >= 1 )
    {
      v16 = (unsigned int)(v5 >> 4);
      do
      {
        v17 = *v2;
        v2 += 2;
        v18 = *(float *)(v17 + 124);
        v19 = v11 + *(float *)(v17 + 128);
        if ( v12 < v18 )
          v12 = v18;
        --v16;
        v15 = v15 + v19;
      }
      while ( v16 );
    }
    v20 = *(__int64 **)(this + 368);
    v21 = *(_QWORD *)(this + 376) - (_QWORD)v20;
    if ( (int)((unsigned __int64)v21 >> 4) >= 1 )
    {
      v22 = 0;
      v23 = (int)(v21 >> 4);
      do
      {
        v24 = *v20;
        v20 += 2;
        ++v22;
        v25 = *(float *)(v24 + 124);
        v26 = *(float *)(v24 + 128) + 20.0;
        if ( v12 < v25 )
          v12 = v25;
        v15 = v15 + v26;
      }
      while ( v22 < v23 );
    }
    if ( (int)v8 >= 1 )
    {
      v27 = (unsigned int)(v7 >> 4);
      do
      {
        v28 = *v4;
        v4 += 2;
        v29 = *(float *)(v28 + 124);
        v30 = v11 + *(float *)(v28 + 128);
        if ( v12 < v29 )
          v12 = v29;
        --v27;
        v15 = v15 + v30;
      }
      while ( v27 );
    }
    if ( (int)v6 <= 0 )
      v10 = 20.0;
    v31 = (int)v8 <= 0;
    v32 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)this + 248LL);
    if ( v31 )
      v33 = v10;
    else
      v33 = 16.0;
    v76 = 0;
    v77 = (float)(v33 + v33) + v12;
    v78 = v33 + v15;
    v32(this, &v76);
    Caver::Rectangle::RectangleByInsetting(&v76, (Caver::Rectangle *)(v1 + 132), v33);
    v34 = *(_QWORD *)(v1 + 288);
    v35 = v11 + (float)(*((float *)&v76 + 1) + v78);
    if ( *(_QWORD *)(*(_QWORD *)(v34 + 256) - 24LL) )
    {
      v36 = *(float *)(v34 + 128);
      v35 = v35 - (float)(v11 + v36);
      v72 = *(float *)&v76;
      v73 = v35;
      v74 = v77;
      v75 = LODWORD(v36);
      Caver::GUIView::SetFrame((Caver::GUIView *)v34, (const Caver::Rectangle *)&v72);
    }
    v37 = *(_QWORD *)(v1 + 304);
    if ( *(_QWORD *)(*(_QWORD *)(v37 + 256) - 24LL) )
    {
      v38 = *(float *)(v37 + 128);
      v35 = v35 - (float)(v11 + v38);
      v72 = *(float *)&v76;
      v73 = v35;
      v74 = v77;
      v75 = LODWORD(v38);
      Caver::GUIView::SetFrame((Caver::GUIView *)v37, (const Caver::Rectangle *)&v72);
    }
    v39 = *(_QWORD *)(v1 + 320);
    if ( (int)((unsigned __int64)(*(_QWORD *)(v1 + 328) - v39) >> 4) >= 1 )
    {
      v40 = 0;
      v41 = 0;
      do
      {
        v42 = *(float **)(v39 + v40);
        v44 = v42[31];
        v43 = v42[32];
        v72 = *(float *)&v76;
        v35 = v35 - (float)(v11 + v43);
        v73 = v35;
        v74 = v44;
        v75 = LODWORD(v43);
        Caver::GUIView::SetFrame((Caver::GUIView *)v42, (const Caver::Rectangle *)&v72);
        v39 = *(_QWORD *)(v1 + 320);
        ++v41;
        v40 += 16;
      }
      while ( v41 < (int)((unsigned __int64)(*(_QWORD *)(v1 + 328) - v39) >> 4) );
    }
    v45 = *(_QWORD *)(v1 + 368);
    if ( (int)((unsigned __int64)(*(_QWORD *)(v1 + 376) - v45) >> 4) >= 1 )
    {
      v46 = 0;
      v47 = 0;
      do
      {
        v48 = *(_QWORD *)(v45 + v46);
        v50 = *(float *)(v48 + 124);
        v49 = *(float *)(v48 + 128);
        v35 = v35 - (float)(v49 + 20.0);
        v72 = roundf((float)(*(float *)&v76 + (float)(v77 * 0.5)) - (float)(v50 * 0.5));
        v73 = v35;
        v74 = v50;
        v75 = LODWORD(v49);
        Caver::GUIView::SetFrame((Caver::GUIView *)v48, (const Caver::Rectangle *)&v72);
        Caver::Rectangle::RectangleByOutsetting((__int64 *)&v71, (Caver::Rectangle *)(v48 + 132), 10.0);
        ++v47;
        v46 += 16;
        *(_OWORD *)(v48 + 148) = v71;
        v45 = *(_QWORD *)(v1 + 368);
      }
      while ( v47 < (int)((unsigned __int64)(*(_QWORD *)(v1 + 376) - v45) >> 4) );
    }
    v51 = *(_QWORD *)(v1 + 392);
    if ( (int)((unsigned __int64)(*(_QWORD *)(v1 + 400) - v51) >> 4) >= 1 )
    {
      v52 = 0;
      v53 = 0;
      do
      {
        v54 = *(float **)(v51 + v52);
        v56 = v54[31];
        v55 = v54[32];
        v35 = v35 - (float)(v11 + v55);
        v72 = roundf((float)(*(float *)&v76 + (float)(v77 * 0.5)) - (float)(v56 * 0.5));
        v73 = v35;
        v74 = v56;
        v75 = LODWORD(v55);
        Caver::GUIView::SetFrame((Caver::GUIView *)v54, (const Caver::Rectangle *)&v72);
        v51 = *(_QWORD *)(v1 + 392);
        ++v53;
        v52 += 16;
      }
      while ( v53 < (int)((unsigned __int64)(*(_QWORD *)(v1 + 400) - v51) >> 4) );
    }
    v57 = *(_QWORD *)(v1 + 344);
    v58 = (unsigned __int64)(*(_QWORD *)(v1 + 352) - v57) >> 4;
    if ( (int)v58 >= 1 )
    {
      v59 = *(float *)(v1 + 140);
      v60 = fminf((float)((float)((float)(v59 + -16.0) + 8.0) / (float)(int)v58) + -8.0, 100.0);
      v61 = 0;
      v62 = 0;
      v63 = roundf(v60);
      while ( 1 )
      {
        v64 = *(_QWORD *)(v57 + v61);
        v65 = *(float *)(v1 + 136) + -12.0;
        v72 = roundf(
                (float)((float)(v60 + 8.0) * (float)(int)v62)
              + (float)((float)(*(float *)(v1 + 132) + (float)(v59 * 0.5))
                      - (float)((float)((float)(v60 * (float)(int)v58) + (float)((float)((int)v58 - 1) * 8.0)) * 0.5)));
        v73 = v65;
        v74 = v63;
        v75 = 1108344832;
        Caver::GUIView::SetFrame((Caver::GUIView *)v64, (const Caver::Rectangle *)&v72);
        v66 = *(float *)(v64 + 136);
        v67 = v66 + -10.0;
        v68 = v66 + *(float *)(v64 + 144);
        v69 = *(_QWORD *)(v1 + 328) - *(_QWORD *)(v1 + 320);
        *(_DWORD *)(v64 + 148) = *(_DWORD *)(v64 + 132);
        v70 = (float)((float)(v67 + (float)(v68 - v67)) + (float)(int)(v69 >> 4)) <= 0.0 ? 10.0 : 60.0;
        *(_DWORD *)(v64 + 156) = *(_DWORD *)(v64 + 140);
        *(float *)(v64 + 152) = v67;
        *(float *)(v64 + 160) = v70 - v67;
        v57 = *(_QWORD *)(v1 + 344);
        ++v62;
        v58 = (unsigned __int64)(*(_QWORD *)(v1 + 352) - v57) >> 4;
        if ( v62 >= (int)v58 )
          break;
        v59 = *(float *)(v1 + 140);
        v61 += 16;
      }
    }
    Caver::GUIView::SetTouchBoundsToIncludeSubviewTouchBounds((Caver::GUIView *)v1);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 88LL))(v1);
  }
  return this;
}


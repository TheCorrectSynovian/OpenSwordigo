/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F8230
 * Mangled: _ZN5Caver19AttributePointsView14LayoutSubviewsEv
 * Demangled: Caver::AttributePointsView::LayoutSubviews(void)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F3C90  Caver::Rectangle::RectangleByOutsetting(float)
 *   0x00000000001F5AC0  Caver::GUIAnimatedSprite::SetFrame(Caver::Rectangle const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6E00  Caver::Rectangle::ExpandToincludeRectangle(Caver::Rectangle const&)
 *   0x00000000001F8600  Caver::GUIView::AddPopupAnimation(void)
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x00000000002003B0  Caver::GUIView::ConvertRectFromView(Caver::Rectangle const&,Caver::GUIView*)
 *   0x0000000000202DC0  Caver::GUIView::SetTouchBoundsToIncludeSubviewTouchBounds(void)
 *   0x00000000002039B0  Caver::GUILabel::TextSize(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 112
 *   insn=0x00000000003F8250 string=0x00000000003F8254 "W"
 *   insn=0x00000000003F8264 string=0x00000000003F8268 "h"
 *   insn=0x00000000003F8264 string=0x00000000001F94B0 "0'"
 *   insn=0x00000000003F8268 string=0x00000000003F826C "`"
 *   insn=0x00000000003F826C string=0x00000000003F8270 "\t"
 *   insn=0x00000000003F8270 string=0x00000000003F8274 "i"
 *   insn=0x00000000003F8274 string=0x00000000003F8278 "a"
 *   insn=0x00000000003F8274 string=0x00000000003F8280 "`"
 *   insn=0x00000000003F8278 string=0x00000000003F827C ""
 *   insn=0x00000000003F8284 string=0x00000000003F8288 "h"
 *   insn=0x00000000003F82A8 string=0x00000000003F82AC "h"
 *   insn=0x00000000003F82A8 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003F82AC string=0x00000000003F82B0 "`"
 *   insn=0x00000000003F82BC string=0x00000000003F82DC "`"
 *   insn=0x00000000003F82C4 string=0x00000000003F82C8 "Y"
 *   insn=0x00000000003F82E0 string=0x00000000003F82E4 ""
 *   insn=0x00000000003F82E0 string=0x00000000003F83C0 "`"
 *   insn=0x00000000003F8304 string=0x00000000003F8308 "c!"
 *   insn=0x00000000003F8308 string=0x00000000003F830C "b(""
 *   insn=0x00000000003F8314 string=0x00000000003F8318 "#"
 *   insn=0x00000000003F8318 string=0x00000000003F831C "a!"
 *   insn=0x00000000003F831C string=0x00000000003F8320 "A8!"
 *   insn=0x00000000003F8324 string=0x00000000003F8328 " @&"
 *   insn=0x00000000003F8338 string=0x00000000003F833C "y"
 *   insn=0x00000000003F8344 string=0x00000000003F8348 " "
 *   insn=0x00000000003F8348 string=0x00000000003F834C "Q"
 *   insn=0x00000000003F834C string=0x00000000001F3C90 "P'"
 *   insn=0x00000000003F8350 string=0x00000000003F8354 "H"
 *   insn=0x00000000003F8354 string=0x0000000000583734 "o"
 *   insn=0x00000000003F8358 string=0x00000000003F835C "hR"
 *   insn=0x00000000003F835C string=0x00000000003F8360 " C"
 *   insn=0x00000000003F8360 string=0x00000000003F8364 "`"
 *   insn=0x00000000003F8364 string=0x00000000003F8368 "i"
 *   insn=0x00000000003F8374 string=0x00000000003F8378 ""
 *   insn=0x00000000003F8380 string=0x00000000003F8384 "b"
 *   insn=0x00000000003F8384 string=0x00000000003F8388 "@"
 *   insn=0x00000000003F8388 string=0x00000000003F838C "HP"
 *   insn=0x00000000003F838C string=0x00000000003F8390 "I"
 *   insn=0x00000000003F8394 string=0x00000000003F8398 ""
 *   insn=0x00000000003F83B4 string=0x00000000001F6E00 "0'"
 *   insn=0x00000000003F83B8 string=0x00000000003F83BC "`B"
 *   insn=0x00000000003F83C4 string=0x00000000003F83C8 "h"
 *   insn=0x00000000003F83C4 string=0x00000000003F83F4 "`"
 *   insn=0x00000000003F83C8 string=0x00000000003F83CC "H"
 *   insn=0x00000000003F83D0 string=0x00000000003F83D4 "g"
 *   insn=0x00000000003F83D4 string=0x00000000003F83D8 "y"
 *   insn=0x00000000003F83E0 string=0x00000000003F83E4 " "
 *   insn=0x00000000003F83E4 string=0x00000000003F83E8 "*"
 *   insn=0x00000000003F83EC string=0x00000000003F83F0 " C"
 *   insn=0x00000000003F83F4 string=0x00000000003F83F8 "@"
 *   insn=0x00000000003F83FC string=0x00000000003F8400 "l-"
 *   insn=0x00000000003F8428 string=0x00000000003F842C "`"
 *   insn=0x00000000003F8430 string=0x00000000003F8434 "#%"
 *   insn=0x00000000003F8440 string=0x00000000003F8444 "`@&"
 *   insn=0x00000000003F8454 string=0x00000000003F8458 "F"
 *   insn=0x00000000003F8458 string=0x00000000003F845C ""
 *   insn=0x00000000003F845C string=0x00000000003F8478 "h"
 *   insn=0x00000000003F8468 string=0x00000000003F846C "!""
 *   insn=0x00000000003F846C string=0x00000000003F8470 " ( "
 *   insn=0x00000000003F8478 string=0x00000000003F847C "-H"
 *   insn=0x00000000003F847C string=0x00000000003F8480 "u""
 *   insn=0x00000000003F8484 string=0x00000000003F8488 "\t"
 *   insn=0x00000000003F8498 string=0x00000000003F849C "\t"
 *   insn=0x00000000003F849C string=0x00000000003F84A0 " "
 *   insn=0x00000000003F84A8 string=0x00000000003F84AC "("
 *   insn=0x00000000003F84B8 string=0x00000000003F84BC ""
 *   insn=0x00000000003F84D0 string=0x00000000003F84D4 ""
 *   insn=0x00000000003F84E4 string=0x00000000003F84E8 """
 *   insn=0x00000000003F84E8 string=0x00000000003F84EC "@"
 *   insn=0x00000000003F84F8 string=0x00000000003F84FC "M"
 *   insn=0x00000000003F84FC string=0x00000000001FDA30 "0'"
 *   insn=0x00000000003F8508 string=0x00000000003F850C ""
 *   insn=0x00000000003F8524 string=0x00000000003F8528 "f"
 *   insn=0x00000000003F8528 string=0x00000000001F5AC0 "P'"
 *   insn=0x00000000003F852C string=0x00000000003F8530 ""
 *   insn=0x00000000003F853C string=0x00000000003F8540 ""
 *   insn=0x00000000003F854C string=0x00000000003F8550 ""
 *   insn=0x00000000003F8560 string=0x00000000003F8564 ""
 *   insn=0x00000000003F8578 string=0x00000000003F857C "`"
 *   insn=0x00000000003F8580 string=0x00000000003F8584 "h"
 *   insn=0x00000000003F8588 string=0x00000000003F858C "h"
 *   insn=0x00000000003F858C string=0x00000000003F8590 "a"
 *   insn=0x00000000003F8590 string=0x00000000003F8594 "`"
 *   insn=0x00000000003F85A4 string=0x00000000003F85A8 "|@"
 *   insn=0x00000000003F85A8 string=0x00000000003F85AC "!%"
 *   insn=0x00000000003F85AC string=0x00000000003F85B0 "E%"
 *   insn=0x00000000003F85C0 string=0x00000000003F85C4 "b($"
 *   insn=0x00000000003F85C8 string=0x00000000003F85CC "A(!"
 *   insn=0x00000000003F85DC string=0x00000000003F85E0 "t"
 *   insn=0x00000000003F860C string=0x00000000003F8610 "A"
 *   insn=0x00000000003F8610 string=0x00000000003F8638 "&"
 *   insn=0x00000000003F8638 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003F8644 string=0x00000000003F8648 ""
 *   insn=0x00000000003F8654 string=0x00000000003F8658 ""
 *   insn=0x00000000003F866C string=0x00000000003F8670 ""
 *   insn=0x00000000003F867C string=0x00000000003F8680 ""
 *   insn=0x00000000003F8690 string=0x00000000003F8694 ".W"
 *   insn=0x00000000003F86A8 string=0x00000000003F86AC "i"
 *   insn=0x00000000003F86AC string=0x00000000003F86B0 "("
 *   insn=0x00000000003F86B8 string=0x00000000003F86BC "`"
 *   insn=0x00000000003F86BC string=0x00000000003F86C0 "t"
 *   insn=0x00000000003F86C0 string=0x00000000003F86C4 "u"
 *   insn=0x00000000003F86C4 string=0x00000000003F86C8 "h"
 *   insn=0x00000000003F86C8 string=0x00000000003F86CC ""
 *   insn=0x00000000003F86DC string=0x00000000003F86E0 "_"
 *   insn=0x00000000003F86E4 string=0x00000000003F86FC "`"
 *   insn=0x00000000003F86EC string=0x00000000003F86F0 ""
 *   insn=0x00000000003F86F0 string=0x00000000003F86F4 "@"
 *   insn=0x00000000003F86F8 string=0x00000000001F8600 "0'"
 *   insn=0x00000000003F8704 string=0x00000000003F8708 ""
 *   insn=0x00000000003F8710 string=0x00000000003F8714 "?"
 *   insn=0x00000000003F8720 string=0x00000000003F8724 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AttributePointsView::LayoutSubviews(Caver::AttributePointsView *this)
{
  __int64 v2; // x8
  Caver::GUIView *v3; // x0
  const Caver::Rectangle *v4; // x1
  float v5; // s2
  unsigned int v6; // w8
  unsigned int v7; // s0
  float *v8; // x8
  Caver::GUIView *v9; // x0
  float v10; // w21
  float v11; // w24
  float v12; // w20
  float v13; // w22
  float *v14; // x0
  float v15; // w8
  float v16; // s3
  __int64 v17; // x25
  char *v18; // x8
  float *v19; // x2
  __int128 *v20; // x8
  Caver::GUIView *v21; // x0
  __int64 v22; // x8
  __int64 v23; // x25
  Caver::GUILabel *v24; // x0
  Caver::GUIView *v25; // x0
  Caver::GUIAnimatedSprite *v26; // x21
  unsigned __int64 v27; // x24
  __int64 v28; // x20
  float32x2_t v29; // d2
  __int64 v30; // x22
  __int64 v31; // x9
  int v32; // w8
  int v33; // w8
  __int64 v34; // x0
  __int64 v35; // x8
  float v36; // s3
  float v37; // s4
  float v38; // s5
  float v39; // s0
  __int64 v40; // x20
  float v42; // [xsp+40h] [xbp-B0h]
  unsigned __int64 v43; // [xsp+58h] [xbp-98h] BYREF
  __int128 v44; // [xsp+60h] [xbp-90h] BYREF
  __int64 v45[2]; // [xsp+70h] [xbp-80h] BYREF
  __int128 v46; // [xsp+80h] [xbp-70h] BYREF
  __int64 v47; // [xsp+98h] [xbp-58h]

  v47 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::LayoutSubviews(this);
  v2 = *((_QWORD *)this + 43);
  v3 = (Caver::GUIView *)*((_QWORD *)this + 33);
  if ( *(_BYTE *)(v2 + 228) )
  {
    v4 = (Caver::AttributePointsView *)((char *)this + 132);
  }
  else
  {
    v5 = *(float *)(v2 + 124);
    v6 = *((_DWORD *)this + 36);
    *(float *)&v7 = (float)(*((float *)this + 35) + -15.0) - v5;
    *(_QWORD *)&v46 = 0;
    *((_QWORD *)&v46 + 1) = __PAIR64__(v6, v7);
    v4 = (const Caver::Rectangle *)&v46;
  }
  Caver::GUIView::SetFrame(v3, v4);
  v8 = (float *)*((_QWORD *)this + 33);
  v9 = (Caver::GUIView *)*((_QWORD *)this + 35);
  v11 = v8[33];
  v10 = v8[34];
  v13 = v8[35];
  v12 = v8[36];
  if ( v9 )
  {
    DWORD2(v46) = 1120403456;
    *((float *)&v46 + 3) = v12;
    *(_QWORD *)&v46 = 1092616192;
    Caver::GUIView::SetFrame(v9, (const Caver::Rectangle *)&v46);
  }
  v14 = (float *)*((_QWORD *)this + 37);
  if ( v14 )
  {
    v15 = v14[31];
    v16 = v14[32];
    *(float *)&v46 = (float)((float)(v11 + v13) + -8.0) - v15;
    *(_QWORD *)((char *)&v46 + 4) = __PAIR64__(
                                      LODWORD(v15),
                                      COERCE_UNSIGNED_INT(roundf((float)((float)(v12 * 0.5) + v10) - (float)(v16 * 0.5))));
    *((float *)&v46 + 3) = v16;
    Caver::GUIView::SetFrame((Caver::GUIView *)v14, (const Caver::Rectangle *)&v46);
    v17 = *((_QWORD *)this + 37);
    Caver::Rectangle::RectangleByOutsetting((__int64 *)&v46, (Caver::Rectangle *)(v17 + 132), 10.0);
    v18 = (char *)this + 148;
    *(_OWORD *)(v17 + 148) = v46;
    if ( *((float *)this + 39) <= 0.001 )
      v18 = (char *)this + 132;
    v46 = *(_OWORD *)v18;
    v19 = (float *)*((_QWORD *)this + 37);
    v20 = (__int128 *)(v19 + 37);
    if ( v19[39] <= 0.001 )
      v20 = (__int128 *)(v19 + 33);
    v44 = *v20;
    Caver::GUIView::ConvertRectFromView(v45, this, (const Caver::Rectangle *)&v44, (Caver::GUIView *)v19);
    Caver::Rectangle::ExpandToincludeRectangle((Caver::Rectangle *)&v46, (const Caver::Rectangle *)v45);
    *(_OWORD *)((char *)this + 148) = v46;
  }
  v21 = (Caver::GUIView *)*((_QWORD *)this + 39);
  if ( v21 )
  {
    v22 = *((_QWORD *)this + 37);
    if ( v22 )
    {
      Caver::GUIView::SetFrame(v21, (const Caver::Rectangle *)(v22 + 116));
      v23 = *((_QWORD *)this + 39);
      Caver::Rectangle::RectangleByOutsetting((__int64 *)&v46, (Caver::Rectangle *)(v23 + 132), 10.0);
      *(_OWORD *)(v23 + 148) = v46;
    }
  }
  v24 = (Caver::GUILabel *)*((_QWORD *)this + 41);
  if ( v24 )
  {
    Caver::GUILabel::TextSize(v45, v24);
    v25 = (Caver::GUIView *)*((_QWORD *)this + 41);
    *(float *)&v46 = (float)((float)(v11 + v13) + -10.0) - *(float *)v45;
    v42 = (float)(v12 * 0.5) + v10;
    DWORD1(v46) = roundf(v42 - (float)(*((float *)v45 + 1) * 0.5));
    *((_QWORD *)&v46 + 1) = v45[0];
    Caver::GUIView::SetFrame(v25, (const Caver::Rectangle *)&v46);
  }
  else
  {
    v42 = (float)(v12 * 0.5) + v10;
  }
  v26 = (Caver::AttributePointsView *)((char *)this + 392);
  v27 = -1;
  do
  {
    v28 = *(_QWORD *)v26;
    if ( *(_QWORD *)v26 )
    {
      v29.n64_f32[0] = (float)((float)((int)v27 + 1) * 29.0) + 100.0;
      if ( *(_DWORD *)(v28 + 8)
        || ((*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28 + 8LL))(*(_QWORD *)v26),
            v29.n64_f32[0] = (float)((float)((int)v27 + 1) * 29.0) + 100.0,
            (v28 = *(_QWORD *)v26) != 0) )
      {
        ++*(_DWORD *)(v28 + 8);
      }
      v29.n64_f32[1] = v42;
      v43 = vsub_f32(v29, vmul_f32(*(float32x2_t *)(v28 + 84), (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
      Caver::Vector2::Rounded(v45, (Caver::Vector2 *)&v43);
      v30 = *(_QWORD *)v26;
      if ( *(_QWORD *)v26 )
        ++*(_DWORD *)(v30 + 8);
      v31 = *(_QWORD *)(v30 + 84);
      *(_QWORD *)&v46 = v45[0];
      *((_QWORD *)&v46 + 1) = v31;
      Caver::GUIAnimatedSprite::SetFrame(v26, (const Caver::Rectangle *)&v46);
      v32 = *(_DWORD *)(v30 + 8) - 1;
      *(_DWORD *)(v30 + 8) = v32;
      if ( !v32 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
      v33 = *(_DWORD *)(v28 + 8) - 1;
      *(_DWORD *)(v28 + 8) = v33;
      if ( !v33 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
    }
    ++v27;
    v26 = (Caver::GUIAnimatedSprite *)((char *)v26 + 72);
  }
  while ( v27 < 0xB );
  v34 = *((_QWORD *)this + 43);
  *((_BYTE *)this + 1344) = 1;
  if ( v34 )
  {
    v35 = *((_QWORD *)this + 33);
    v36 = *(float *)(v35 + 116);
    v37 = *(float *)(v35 + 124);
    LODWORD(v35) = *(_DWORD *)(v34 + 124);
    v38 = *(float *)(v34 + 128) * 0.5;
    v39 = *((float *)this + 34) + (float)(*((float *)this + 36) * 0.5);
    HIDWORD(v46) = *(_DWORD *)(v34 + 128);
    *(float *)&v46 = (float)(v36 + v37) + 15.0;
    *(_QWORD *)((char *)&v46 + 4) = __PAIR64__(v35, COERCE_UNSIGNED_INT(roundf(v39 - v38)));
    Caver::GUIView::SetFrame((Caver::GUIView *)v34, (const Caver::Rectangle *)&v46);
    v40 = *((_QWORD *)this + 43);
    Caver::Rectangle::RectangleByOutsetting((__int64 *)&v46, (Caver::Rectangle *)(v40 + 132), 4.0);
    *(_OWORD *)(v40 + 148) = v46;
  }
  return Caver::GUIView::SetTouchBoundsToIncludeSubviewTouchBounds(this);
}


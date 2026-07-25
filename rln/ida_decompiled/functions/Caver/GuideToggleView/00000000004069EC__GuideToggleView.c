/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004069EC
 * Mangled: _ZN5Caver15GuideToggleViewC2Ev
 * Demangled: Caver::GuideToggleView::GuideToggleView(void)
 *
 * Callers: 1
 *   0x00000000001FFCA0  Caver::GuideToggleView::GuideToggleView(void)
 *
 * Callees: 14
 *   0x00000000001F5840  Caver::GUILabel::UpdateBounds(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F9BE0  Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FC9D0  Caver::GameInterfaceBuilder::SmallLabel(std::string const&,Caver::Color,Caver::Color)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x0000000000203AB0  Caver::GameInterfaceBuilder::Switch(void)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 167
 *   insn=0x00000000004069FC string=0x0000000000406A00 "U"
 *   insn=0x0000000000406A0C string=0x0000000000406A10 "L"
 *   insn=0x0000000000406A10 string=0x0000000000406A14 ""
 *   insn=0x0000000000406A14 string=0x0000000000406A18 ""
 *   insn=0x0000000000406A24 string=0x0000000000406A28 "A"
 *   insn=0x0000000000406A28 string=0x0000000000406A2C "h"
 *   insn=0x0000000000406A2C string=0x0000000000406A30 "a"
 *   insn=0x0000000000406A30 string=0x0000000000593DEA "TOGGLE"
 *   insn=0x0000000000406A3C string=0x0000000000406A40 "^"
 *   insn=0x0000000000406A68 string=0x00000000001FC9D0 "0'"
 *   insn=0x0000000000406A70 string=0x0000000000406A74 "\n"
 *   insn=0x0000000000406A70 string=0x0000000000406A80 "t"
 *   insn=0x0000000000406A74 string=0x0000000000406A78 "J"
 *   insn=0x0000000000406A78 string=0x0000000000406A7C "\n"
 *   insn=0x0000000000406A80 string=0x0000000000406A84 "i"
 *   insn=0x0000000000406A84 string=0x0000000000406A88 "4"
 *   insn=0x0000000000406A8C string=0x0000000000406A90 ""
 *   insn=0x0000000000406A9C string=0x0000000000406AA0 "\t@"
 *   insn=0x0000000000406AAC string=0x0000000000406AB0 ""
 *   insn=0x0000000000406ABC string=0x0000000000406AC0 "@"
 *   insn=0x0000000000406ACC string=0x0000000000406AD0 "4"
 *   insn=0x0000000000406AD4 string=0x0000000000406AD8 ""
 *   insn=0x0000000000406AE4 string=0x0000000000406AE8 "\t@"
 *   insn=0x0000000000406AF4 string=0x0000000000406AF8 ""
 *   insn=0x0000000000406B04 string=0x0000000000406B08 "@"
 *   insn=0x0000000000406B18 string=0x0000000000406B1C ")"
 *   insn=0x0000000000406B28 string=0x0000000000406B2C "`~@"
 *   insn=0x0000000000406B30 string=0x0000000000406B34 "0"
 *   insn=0x0000000000406B34 string=0x0000000000406B38 "B"
 *   insn=0x0000000000406B38 string=0x0000000000406B3C "h"
 *   insn=0x0000000000406B38 string=0x00000000001F5840 "P'"
 *   insn=0x0000000000406B3C string=0x0000000000406B40 "i~@"
 *   insn=0x0000000000406B40 string=0x0000000000406B44 "1@"
 *   insn=0x0000000000406B48 string=0x0000000000406B4C "i"
 *   insn=0x0000000000406B54 string=0x0000000000406B58 "*"
 *   insn=0x0000000000406B58 string=0x0000000000406B5C "J"
 *   insn=0x0000000000406B5C string=0x0000000000406B60 "*"
 *   insn=0x0000000000406B70 string=0x0000000000406B74 "4"
 *   insn=0x0000000000406B78 string=0x0000000000406B7C ""
 *   insn=0x0000000000406B88 string=0x0000000000406B8C "\t@"
 *   insn=0x0000000000406B98 string=0x0000000000406B9C ""
 *   insn=0x0000000000406BA8 string=0x0000000000406BAC "@"
 *   insn=0x0000000000406BC4 string=0x0000000000406BC8 "\n"
 *   insn=0x0000000000406BC4 string=0x0000000000406BD4 "t"
 *   insn=0x0000000000406BC8 string=0x0000000000406BCC "J"
 *   insn=0x0000000000406BCC string=0x0000000000406BD0 "\n"
 *   insn=0x0000000000406BD4 string=0x0000000000406BD8 "i"
 *   insn=0x0000000000406BD8 string=0x0000000000406BDC "4"
 *   insn=0x0000000000406BE0 string=0x0000000000406BE4 ""
 *   insn=0x0000000000406BF0 string=0x0000000000406BF4 "\t@"
 *   insn=0x0000000000406C00 string=0x0000000000406C04 ""
 *   insn=0x0000000000406C10 string=0x0000000000406C14 "@"
 *   insn=0x0000000000406C20 string=0x0000000000406C24 "4"
 *   insn=0x0000000000406C24 string=0x0000000000406C68 "t"
 *   insn=0x0000000000406C28 string=0x0000000000406C2C ""
 *   insn=0x0000000000406C38 string=0x0000000000406C3C "\t@"
 *   insn=0x0000000000406C48 string=0x0000000000406C4C ""
 *   insn=0x0000000000406C58 string=0x0000000000406C5C "@"
 *   insn=0x0000000000406C6C string=0x0000000000406C70 ""
 *   insn=0x0000000000406C70 string=0x0000000000406C74 "%D"
 *   insn=0x0000000000406C8C string=0x0000000000406C90 "`"
 *   insn=0x0000000000406C8C string=0x00000000001F6B70 "0'"
 *   insn=0x0000000000406C94 string=0x0000000000406C98 ""
 *   insn=0x0000000000406CA8 string=0x0000000000406CAC ""
 *   insn=0x0000000000406CAC string=0x0000000000406CB0 "EG"
 *   insn=0x0000000000406CC8 string=0x00000000001F9BE0 "0'"
 *   insn=0x0000000000406CCC string=0x0000000000406CD0 "h"
 *   insn=0x0000000000406CD0 string=0x0000000000406CD4 "("
 *   insn=0x0000000000406CD0 string=0x0000000000406CFC "h"
 *   insn=0x0000000000406CD4 string=0x0000000000406CD8 ""
 *   insn=0x0000000000406CD8 string=0x0000000000406CDC ""
 *   insn=0x0000000000406CE4 string=0x0000000000406CE8 " !"
 *   insn=0x0000000000406CFC string=0x0000000000406D00 "i"
 *   insn=0x0000000000406D00 string=0x0000000000406D04 "1@"
 *   insn=0x0000000000406D08 string=0x0000000000406D0C "i"
 *   insn=0x0000000000406D14 string=0x0000000000406D18 "*"
 *   insn=0x0000000000406D18 string=0x0000000000406D1C "J"
 *   insn=0x0000000000406D1C string=0x0000000000406D20 "*"
 *   insn=0x0000000000406D30 string=0x0000000000406D34 "4"
 *   insn=0x0000000000406D34 string=0x0000000000406D78 "h"
 *   insn=0x0000000000406D38 string=0x0000000000406D3C ""
 *   insn=0x0000000000406D48 string=0x0000000000406D4C "\t@"
 *   insn=0x0000000000406D58 string=0x0000000000406D5C ""
 *   insn=0x0000000000406D68 string=0x0000000000406D6C "@"
 *   insn=0x0000000000406D78 string=0x0000000000406D7C "iBG"
 *   insn=0x0000000000406D7C string=0x0000000000406D80 ""
 *   insn=0x0000000000406D84 string=0x0000000000406D88 "\tn"
 *   insn=0x0000000000406D98 string=0x00000000001FB170 "0'"
 *   insn=0x0000000000406DA8 string=0x0000000000406E04 "3"
 *   insn=0x0000000000406DC0 string=0x0000000000406DC4 ")=G"
 *   insn=0x0000000000406DC4 string=0x0000000000406DC8 "!"
 *   insn=0x0000000000406DCC string=0x0000000000406DD0 "\t"
 *   insn=0x0000000000406DCC string=0x0000000000406DE4 "\t"
 *   insn=0x0000000000406DD0 string=0x0000000000406DD4 "*"
 *   insn=0x0000000000406DD4 string=0x0000000000406DD8 "\n"
 *   insn=0x0000000000406DE0 string=0x0000000000406DF0 "?"
 *   insn=0x0000000000406DE4 string=0x0000000000406DE8 "*"
 *   insn=0x0000000000406DE8 string=0x0000000000406DEC "\n"
 *   insn=0x0000000000406DF8 string=0x0000000000406DFC "j"
 *   insn=0x0000000000406DFC string=0x0000000000406E00 "K"
 *   insn=0x0000000000406E04 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000406E14 string=0x0000000000406E18 "u"
 *   insn=0x0000000000406E18 string=0x0000000000406FA4 "u"
 *   insn=0x0000000000406E1C string=0x0000000000406E20 ""
 *   insn=0x0000000000406E2C string=0x0000000000406E30 "\t@"
 *   insn=0x0000000000406E3C string=0x0000000000406E40 ""
 *   insn=0x0000000000406E4C string=0x0000000000406E50 "@"
 *   insn=0x0000000000406E58 string=0x0000000000406E5C "R"
 *   insn=0x0000000000406E68 string=0x0000000000406E6C "U"
 *   insn=0x0000000000406E70 string=0x0000000000406E74 ""
 *   insn=0x0000000000406E80 string=0x0000000000406E84 "\t@"
 *   insn=0x0000000000406E90 string=0x0000000000406E94 ""
 *   insn=0x0000000000406EA0 string=0x0000000000406EA4 "@"
 *   insn=0x0000000000406EAC string=0x0000000000406EB0 "Q"
 *   insn=0x0000000000406EBC string=0x0000000000406EC0 "5"
 *   insn=0x0000000000406EC4 string=0x0000000000406EC8 ""
 *   insn=0x0000000000406ED4 string=0x0000000000406ED8 "\t@"
 *   insn=0x0000000000406EE4 string=0x0000000000406EE8 ""
 *   insn=0x0000000000406EF4 string=0x0000000000406EF8 "@"
 *   insn=0x0000000000406F00 string=0x0000000000406F04 "("
 *   insn=0x0000000000406F10 string=0x0000000000406F14 "("
 *   insn=0x0000000000406F14 string=0x0000000000406F18 ""
 *   insn=0x0000000000406F18 string=0x0000000000406F1C ""
 *   insn=0x0000000000406F24 string=0x0000000000406F28 " !"
 *   insn=0x0000000000406F38 string=0x0000000000406F3C "u"
 *   insn=0x0000000000406F3C string=0x0000000000406F40 "u"
 *   insn=0x0000000000406F40 string=0x0000000000406F44 "@"
 *   insn=0x0000000000406F44 string=0x0000000000407044 "u"
 *   insn=0x0000000000406F54 string=0x0000000000406F58 ""
 *   insn=0x0000000000406F5C string=0x0000000000406F60 "!"
 *   insn=0x0000000000406F64 string=0x0000000000406F68 "\t@"
 *   insn=0x0000000000406F74 string=0x0000000000406F78 ""
 *   insn=0x0000000000406F7C string=0x0000000000406F80 "!"
 *   insn=0x0000000000406F84 string=0x0000000000406F88 "@"
 *   insn=0x0000000000406FAC string=0x0000000000406FB0 ""
 *   insn=0x0000000000406FB4 string=0x0000000000406FB8 "a"
 *   insn=0x0000000000406FBC string=0x0000000000406FC0 "\t@"
 *   insn=0x0000000000406FCC string=0x0000000000406FD0 ""
 *   insn=0x0000000000406FD4 string=0x0000000000406FD8 "a"
 *   insn=0x0000000000406FDC string=0x0000000000406FE0 "@"
 *   insn=0x0000000000406FF8 string=0x0000000000406FFC ")"
 *   insn=0x000000000040700C string=0x0000000000407010 ")=G"
 *   insn=0x0000000000407010 string=0x0000000000407014 "!"
 *   insn=0x0000000000407014 string=0x0000000000407018 ")"
 *   insn=0x0000000000407018 string=0x000000000040701C "\t"
 *   insn=0x0000000000407018 string=0x000000000040709C "\t"
 *   insn=0x000000000040701C string=0x0000000000407020 "*"
 *   insn=0x0000000000407020 string=0x0000000000407024 "\n"
 *   insn=0x0000000000407028 string=0x000000000040702C "?"
 *   insn=0x0000000000407038 string=0x000000000040703C "u"
 *   insn=0x000000000040703C string=0x0000000000407040 "u"
 *   insn=0x0000000000407044 string=0x0000000000407048 "5"
 *   insn=0x000000000040704C string=0x0000000000407050 ""
 *   insn=0x000000000040705C string=0x0000000000407060 "\t@"
 *   insn=0x000000000040706C string=0x0000000000407070 ""
 *   insn=0x000000000040707C string=0x0000000000407080 "@"
 *   insn=0x000000000040708C string=0x0000000000407090 "h"
 *   insn=0x0000000000407094 string=0x0000000000407098 ""
 *   insn=0x000000000040709C string=0x00000000004070A0 "*"
 *   insn=0x00000000004070A0 string=0x00000000004070A4 "\n"
 *   insn=0x00000000004070A4 string=0x00000000004070A8 "?"
 *   insn=0x00000000004070B8 string=0x00000000004070BC "\t"
 *   insn=0x00000000004070BC string=0x00000000004070C0 "?"
 *   insn=0x00000000004070C0 string=0x00000000004070C4 "@"
 *   insn=0x00000000004070D0 string=0x00000000004070D4 "\t"
 *   insn=0x00000000004070D8 string=0x00000000004070DC """
 *   insn=0x00000000004070DC string=0x00000000004070E0 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GuideToggleView::GuideToggleView(Caver::GuideToggleView *this)
{
  unsigned __int64 v2; // x8
  __int64 (__fastcall **v3)(); // x9
  _QWORD *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x8
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x8
  void *v10; // x0
  Caver::GUILabel *v11; // x0
  __int64 (__fastcall *v12)(Caver::GuideToggleView *, __int64 (__fastcall ***)()); // x8
  unsigned __int64 v13; // x9
  Caver::GameInterfaceBuilder *v14; // x0
  _QWORD *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x8
  unsigned __int64 v18; // x8
  __int64 (__fastcall **v19)(); // x9
  _QWORD *v20; // x20
  __int64 v21; // x8
  __int64 v22; // x8
  _QWORD *v23; // x20
  __int64 v24; // x8
  __int64 v25; // x8
  int64x2_t v26; // q0
  __int64 (__fastcall **v27)(); // x8
  void (__fastcall *v28)(int64x2_t *, int64x2_t *, __int64); // x8
  void (__fastcall *v29)(Caver::GuideToggleView *, __int64 (__fastcall ***)()); // x8
  unsigned __int64 v30; // x9
  _QWORD *v31; // x20
  __int64 v32; // x8
  __int64 v33; // x8
  unsigned __int32 v34; // w8
  unsigned int *v36; // x8
  int v37; // w9
  __int64 (__fastcall **v38)(); // [xsp+8h] [xbp-88h] BYREF
  int64x2_t v39; // [xsp+10h] [xbp-80h] BYREF
  Caver::GuideToggleView *v40; // [xsp+20h] [xbp-70h]
  int v41; // [xsp+28h] [xbp-68h]
  int v42; // [xsp+30h] [xbp-60h]
  int64x2_t v43; // [xsp+40h] [xbp-50h] BYREF
  Caver::GuideToggleView *v44; // [xsp+50h] [xbp-40h]
  __int64 v45; // [xsp+68h] [xbp-28h]

  v45 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::GUIView(this);
  *((_QWORD *)this + 33) = 0;
  *((_QWORD *)this + 34) = 0;
  *((_QWORD *)this + 31) = 0;
  *((_QWORD *)this + 32) = 0;
  *((_QWORD *)this + 30) = 0;
  *(_QWORD *)this = off_6D19F0;
  sub_566BB8((int)&v43, "TOGGLE");
  v42 = -2953473;
  v41 = -16777216;
  Caver::GameInterfaceBuilder::SmallLabel();
  v3 = v38;
  v2 = v39.n128_u64[0];
  if ( v39.n128_u64[0] )
    ++*(_QWORD *)(v39.n128_u64[0] + 8);
  v4 = (_QWORD *)*((_QWORD *)this + 32);
  *((_QWORD *)this + 31) = v3;
  *((_QWORD *)this + 32) = v2;
  if ( v4 )
  {
    v5 = v4[1] - 1LL;
    v4[1] = v5;
    if ( !v5 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
      v6 = v4[2] - 1LL;
      v4[2] = v6;
      if ( !v6 )
        (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
    }
  }
  v7 = (_QWORD *)v39.n128_u64[0];
  if ( v39.n128_u64[0] )
  {
    v8 = *(_QWORD *)(v39.n128_u64[0] + 8) - 1LL;
    *(_QWORD *)(v39.n128_u64[0] + 8) = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
  }
  v10 = (void *)(v43.n128_u64[0] - 24);
  if ( (__int64 *)(v43.n128_u64[0] - 24) != &qword_6FD2E0 )
  {
    v36 = (unsigned int *)(v43.n128_u64[0] - 8);
    if ( &pthread_create )
    {
      do
        v37 = __ldaxr(v36);
      while ( __stlxr(v37 - 1, v36) );
    }
    else
    {
      v37 = (*v36)--;
    }
    if ( v37 <= 0 )
      operator delete(v10);
  }
  v11 = (Caver::GUILabel *)*((_QWORD *)this + 31);
  *((_DWORD *)v11 + 76) = 1;
  Caver::GUILabel::UpdateBounds(v11);
  v12 = *(__int64 (__fastcall **)(Caver::GuideToggleView *, __int64 (__fastcall ***)()))(*(_QWORD *)this + 96LL);
  v38 = (__int64 (__fastcall **)())*((_QWORD *)this + 31);
  v13 = *((_QWORD *)this + 32);
  v39.n128_u64[0] = v13;
  if ( v13 )
    ++*(_QWORD *)(v13 + 8);
  v14 = (Caver::GameInterfaceBuilder *)v12(this, &v38);
  v15 = (_QWORD *)v39.n128_u64[0];
  if ( v39.n128_u64[0] )
  {
    v16 = *(_QWORD *)(v39.n128_u64[0] + 8) - 1LL;
    *(_QWORD *)(v39.n128_u64[0] + 8) = v16;
    if ( !v16 )
    {
      v14 = (Caver::GameInterfaceBuilder *)(*(__int64 (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
      v17 = v15[2] - 1LL;
      v15[2] = v17;
      if ( !v17 )
        v14 = (Caver::GameInterfaceBuilder *)(*(__int64 (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
    }
  }
  Caver::GameInterfaceBuilder::Switch(v14);
  v19 = v38;
  v18 = v39.n128_u64[0];
  if ( v39.n128_u64[0] )
    ++*(_QWORD *)(v39.n128_u64[0] + 8);
  v20 = (_QWORD *)*((_QWORD *)this + 34);
  *((_QWORD *)this + 33) = v19;
  *((_QWORD *)this + 34) = v18;
  if ( v20 )
  {
    v21 = v20[1] - 1LL;
    v20[1] = v21;
    if ( !v21 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
      v22 = v20[2] - 1LL;
      v20[2] = v22;
      if ( !v22 )
        (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
    }
  }
  v23 = (_QWORD *)v39.n128_u64[0];
  if ( v39.n128_u64[0] )
  {
    v24 = *(_QWORD *)(v39.n128_u64[0] + 8) - 1LL;
    *(_QWORD *)(v39.n128_u64[0] + 8) = v24;
    if ( !v24 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
      v25 = v23[2] - 1LL;
      v23[2] = v25;
      if ( !v25 )
        (*(void (__fastcall **)(_QWORD *))(*v23 + 24LL))(v23);
    }
  }
  v38 = 0;
  v26 = vdupq_n_s64(0);
  v44 = this;
  v26.n128_u64[0] = (unsigned __int64)&Caver::GuideToggleView::SwitchToggled;
  v43 = v26;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v27 = 0;
  }
  else
  {
    v40 = v44;
    v39 = v43;
    v27 = boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::GuideToggleView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::GuideToggleView*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::GuideToggleView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::GuideToggleView*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
  }
  v38 = v27;
  Caver::GUIControl::AddTargetActionForControlEvent();
  if ( v38 )
  {
    if ( ((unsigned __int8)v38 & 1) == 0 )
    {
      v28 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFFELL);
      if ( v28 )
        v28(&v39, &v39, 2);
    }
    v38 = 0;
  }
  v29 = *(void (__fastcall **)(Caver::GuideToggleView *, __int64 (__fastcall ***)()))(*(_QWORD *)this + 96LL);
  v38 = (__int64 (__fastcall **)())*((_QWORD *)this + 33);
  v30 = *((_QWORD *)this + 34);
  v39.n128_u64[0] = v30;
  if ( v30 )
    ++*(_QWORD *)(v30 + 8);
  v29(this, &v38);
  v31 = (_QWORD *)v39.n128_u64[0];
  if ( v39.n128_u64[0] )
  {
    v32 = *(_QWORD *)(v39.n128_u64[0] + 8) - 1LL;
    *(_QWORD *)(v39.n128_u64[0] + 8) = v32;
    if ( !v32 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v31 + 16LL))(v31);
      v33 = v31[2] - 1LL;
      v31[2] = v33;
      if ( !v33 )
        (*(void (__fastcall **)(_QWORD *))(*v31 + 24LL))(v31);
    }
  }
  v34 = *(_DWORD *)(*((_QWORD *)this + 33) + 128LL);
  v38 = *(__int64 (__fastcall ***)())((char *)this + 116);
  v39.n128_u32[0] = 1131413504;
  v39.n128_u32[1] = v34;
  return Caver::GUIView::SetFrame(this, (const Caver::Rectangle *)&v38);
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000038935C
 * Mangled: _ZN5Caver14BadgeCountViewC2Ev
 * Demangled: Caver::BadgeCountView::BadgeCountView(void)
 *
 * Callers: 1
 *   0x00000000001FCB70  Caver::BadgeCountView::BadgeCountView(void)
 *
 * Callees: 21
 *   0x00000000001F5420  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>(Caver::GUIFrameView *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7430  Caver::GUIFrameView::GUIFrameView(void)
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001F8CE0  Caver::GameInterfaceBuilder::NormalLabel(std::string const&,Caver::Color,Caver::Color)
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000201F70  Caver::GUIFrameView::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,bool)
 *   0x00000000002039B0  Caver::GUILabel::TextSize(void)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 212
 *   insn=0x000000000038936C string=0x0000000000389370 "V"
 *   insn=0x0000000000389384 string=0x0000000000389388 ""
 *   insn=0x0000000000389388 string=0x000000000038938C "i"
 *   insn=0x0000000000389394 string=0x0000000000389398 "A"
 *   insn=0x000000000038939C string=0x00000000003893A0 "h"
 *   insn=0x00000000003893A0 string=0x00000000003893A4 "?"
 *   insn=0x00000000003893B0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003893BC string=0x00000000001F7430 "0'"
 *   insn=0x00000000003893C8 string=0x00000000003893CC "hRO"
 *   insn=0x00000000003893C8 string=0x00000000001F5420 "P'"
 *   insn=0x00000000003893D8 string=0x00000000003893DC "i""
 *   insn=0x00000000003893E0 string=0x00000000003893E4 "4"
 *   insn=0x00000000003893E4 string=0x0000000000389428 "tz@"
 *   insn=0x00000000003893E8 string=0x00000000003893EC ""
 *   insn=0x00000000003893F8 string=0x00000000003893FC "\t@"
 *   insn=0x0000000000389408 string=0x000000000038940C ""
 *   insn=0x0000000000389418 string=0x000000000038941C "@"
 *   insn=0x000000000038942C string=0x00000000001FA350 "0'"
 *   insn=0x0000000000389430 string=0x0000000000389434 "!"
 *   insn=0x0000000000389434 string=0x0000000000590CDF "countbadge"
 *   insn=0x0000000000389454 string=0x0000000000389458 "V"
 *   insn=0x0000000000389470 string=0x0000000000389474 "@"
 *   insn=0x0000000000389474 string=0x0000000000389478 ""
 *   insn=0x0000000000389478 string=0x000000000038947C ""
 *   insn=0x0000000000389480 string=0x0000000000389484 ""
 *   insn=0x0000000000389484 string=0x0000000000389488 ""
 *   insn=0x00000000003894A0 string=0x00000000003894A4 "A"
 *   insn=0x00000000003894A4 string=0x00000000003894A8 "h"
 *   insn=0x00000000003894A8 string=0x00000000003894AC "iz@"
 *   insn=0x00000000003894AC string=0x00000000003894B0 "1@"
 *   insn=0x00000000003894B4 string=0x00000000003894B8 "i~@"
 *   insn=0x00000000003894C0 string=0x00000000003894C4 "*"
 *   insn=0x00000000003894C4 string=0x00000000003894C8 "J"
 *   insn=0x00000000003894C8 string=0x00000000003894CC "*"
 *   insn=0x00000000003894DC string=0x00000000003894E0 "4"
 *   insn=0x00000000003894E0 string=0x0000000000389524 "hz@"
 *   insn=0x00000000003894E4 string=0x00000000003894E8 ""
 *   insn=0x00000000003894F4 string=0x00000000003894F8 "\t@"
 *   insn=0x0000000000389504 string=0x0000000000389508 ""
 *   insn=0x0000000000389514 string=0x0000000000389518 "@"
 *   insn=0x0000000000389528 string=0x000000000038952C "\t"
 *   insn=0x000000000038952C string=0x0000000000389530 "!"
 *   insn=0x0000000000389540 string=0x0000000000389544 ""
 *   insn=0x0000000000389560 string=0x00000000001F8CE0 "0'"
 *   insn=0x0000000000389568 string=0x000000000038956C "\n"
 *   insn=0x0000000000389568 string=0x0000000000389578 "t"
 *   insn=0x000000000038956C string=0x0000000000389570 "J"
 *   insn=0x0000000000389570 string=0x0000000000389574 "\n"
 *   insn=0x0000000000389578 string=0x000000000038957C "i""
 *   insn=0x000000000038957C string=0x0000000000389580 "4"
 *   insn=0x0000000000389584 string=0x0000000000389588 ""
 *   insn=0x0000000000389594 string=0x0000000000389598 "\t@"
 *   insn=0x00000000003895A4 string=0x00000000003895A8 ""
 *   insn=0x00000000003895B4 string=0x00000000003895B8 "@"
 *   insn=0x00000000003895C4 string=0x00000000003895C8 "4"
 *   insn=0x00000000003895CC string=0x00000000003895D0 ""
 *   insn=0x00000000003895DC string=0x00000000003895E0 "\t@"
 *   insn=0x00000000003895EC string=0x00000000003895F0 ""
 *   insn=0x00000000003895FC string=0x0000000000389600 "@"
 *   insn=0x0000000000389618 string=0x000000000038961C "t"
 *   insn=0x0000000000389624 string=0x0000000000389628 "A"
 *   insn=0x0000000000389648 string=0x000000000038964C " "
 *   insn=0x0000000000389650 string=0x0000000000389654 ""
 *   insn=0x000000000038965C string=0x0000000000389660 "5"
 *   insn=0x0000000000389664 string=0x0000000000389668 ""
 *   insn=0x0000000000389674 string=0x0000000000389678 "\t@"
 *   insn=0x0000000000389684 string=0x0000000000389688 ""
 *   insn=0x0000000000389694 string=0x0000000000389698 "@"
 *   insn=0x00000000003896A8 string=0x00000000003896AC "t"
 *   insn=0x00000000003896A8 string=0x00000000001F8510 "0'"
 *   insn=0x00000000003896B8 string=0x00000000003896BC "`z@"
 *   insn=0x00000000003896BC string=0x00000000003896C0 "i"
 *   insn=0x00000000003896C0 string=0x00000000003896C4 ""
 *   insn=0x00000000003896C4 string=0x00000000003896C8 "1@"
 *   insn=0x00000000003896CC string=0x00000000003896D0 "i"
 *   insn=0x00000000003896D8 string=0x00000000003896DC "*"
 *   insn=0x00000000003896DC string=0x00000000003896E0 "J"
 *   insn=0x00000000003896E0 string=0x00000000003896E4 "*"
 *   insn=0x00000000003896F0 string=0x00000000003896F4 "4"
 *   insn=0x00000000003896F4 string=0x0000000000389738 "hz@"
 *   insn=0x00000000003896F8 string=0x00000000003896FC ""
 *   insn=0x0000000000389708 string=0x000000000038970C "\t@"
 *   insn=0x0000000000389718 string=0x000000000038971C ""
 *   insn=0x0000000000389728 string=0x000000000038972C "@"
 *   insn=0x0000000000389740 string=0x0000000000389750 "hBG"
 *   insn=0x0000000000389744 string=0x0000000000389748 ""
 *   insn=0x0000000000389764 string=0x00000000001FB170 "0'"
 *   insn=0x0000000000389768 string=0x000000000038976C ""
 *   insn=0x0000000000389778 string=0x000000000038977C ""
 *   insn=0x00000000003897AC string=0x00000000003897B0 ")=G"
 *   insn=0x00000000003897B0 string=0x00000000003897B4 "!"
 *   insn=0x00000000003897B8 string=0x00000000003897BC "\t"
 *   insn=0x00000000003897B8 string=0x00000000003897F4 "\t"
 *   insn=0x00000000003897BC string=0x00000000003897C0 "*"
 *   insn=0x00000000003897C0 string=0x00000000003897C4 "\n"
 *   insn=0x00000000003897C8 string=0x00000000003897CC ""
 *   insn=0x00000000003897CC string=0x0000000000389800 "?"
 *   insn=0x00000000003897D0 string=0x00000000003897D4 ")=G"
 *   insn=0x00000000003897D4 string=0x00000000003897D8 "!"
 *   insn=0x00000000003897DC string=0x00000000003897E0 "\t"
 *   insn=0x00000000003897DC string=0x0000000000389814 "\t"
 *   insn=0x00000000003897E0 string=0x00000000003897E4 "*"
 *   insn=0x00000000003897E4 string=0x00000000003897E8 "\n"
 *   insn=0x00000000003897F0 string=0x0000000000389820 "?"
 *   insn=0x00000000003897F4 string=0x00000000003897F8 "*"
 *   insn=0x00000000003897F8 string=0x00000000003897FC "\n"
 *   insn=0x0000000000389800 string=0x0000000000389804 ","
 *   insn=0x000000000038980C string=0x0000000000389810 "&"
 *   insn=0x0000000000389814 string=0x0000000000389818 "*"
 *   insn=0x0000000000389818 string=0x000000000038981C "\n"
 *   insn=0x000000000038982C string=0x0000000000389830 "{"
 *   insn=0x0000000000389834 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000389844 string=0x0000000000389848 "U"
 *   insn=0x000000000038984C string=0x0000000000389850 ""
 *   insn=0x000000000038985C string=0x0000000000389860 "\t@"
 *   insn=0x000000000038986C string=0x0000000000389870 ""
 *   insn=0x000000000038987C string=0x0000000000389880 "@"
 *   insn=0x0000000000389888 string=0x000000000038988C "a"
 *   insn=0x0000000000389898 string=0x000000000038989C "(\t@"
 *   insn=0x00000000003898A0 string=0x00000000003898A4 "\n"
 *   insn=0x00000000003898A8 string=0x00000000003898AC "*\t"
 *   insn=0x00000000003898AC string=0x00000000003898B0 "A"
 *   insn=0x00000000003898B0 string=0x0000000000389A78 "u"
 *   insn=0x00000000003898B4 string=0x00000000003898B8 ""
 *   insn=0x00000000003898B8 string=0x00000000003898BC ""
 *   insn=0x00000000003898C0 string=0x00000000003898C4 "m"
 *   insn=0x00000000003898CC string=0x00000000003898D0 "U"
 *   insn=0x00000000003898D4 string=0x00000000003898D8 ""
 *   insn=0x00000000003898E4 string=0x00000000003898E8 "\t@"
 *   insn=0x00000000003898F4 string=0x00000000003898F8 ""
 *   insn=0x0000000000389904 string=0x0000000000389908 "@"
 *   insn=0x0000000000389910 string=0x0000000000389914 "Y"
 *   insn=0x0000000000389928 string=0x000000000038992C ""
 *   insn=0x0000000000389930 string=0x0000000000389934 "!\n"
 *   insn=0x0000000000389938 string=0x000000000038993C "\t@"
 *   insn=0x0000000000389948 string=0x000000000038994C ""
 *   insn=0x0000000000389950 string=0x0000000000389954 "!\t"
 *   insn=0x0000000000389958 string=0x000000000038995C "@"
 *   insn=0x0000000000389964 string=0x0000000000389968 "D"
 *   insn=0x0000000000389974 string=0x0000000000389978 "\t\t@"
 *   insn=0x0000000000389978 string=0x000000000038997C ")"
 *   insn=0x000000000038997C string=0x0000000000389980 "\t\t"
 *   insn=0x0000000000389980 string=0x0000000000389984 "A"
 *   insn=0x0000000000389984 string=0x0000000000389988 "\t"
 *   insn=0x0000000000389988 string=0x000000000038998C ")"
 *   insn=0x0000000000389990 string=0x0000000000389994 " "
 *   insn=0x0000000000389994 string=0x0000000000389998 ""
 *   insn=0x00000000003899A0 string=0x00000000003899A4 "u"
 *   insn=0x00000000003899A8 string=0x00000000003899AC "E"
 *   insn=0x00000000003899AC string=0x0000000000389AC0 "u~@"
 *   insn=0x00000000003899B4 string=0x00000000003899B8 ">"
 *   insn=0x00000000003899B8 string=0x00000000003899BC "u"
 *   insn=0x00000000003899B8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003899C0 string=0x00000000003899C4 "?"
 *   insn=0x00000000003899D0 string=0x00000000003899D4 ")"
 *   insn=0x00000000003899E4 string=0x00000000003899E8 ")=G"
 *   insn=0x00000000003899E8 string=0x00000000003899EC "!"
 *   insn=0x00000000003899EC string=0x00000000003899F0 "i"
 *   insn=0x00000000003899F0 string=0x00000000003899F4 "\t"
 *   insn=0x00000000003899F0 string=0x0000000000389A5C "\t"
 *   insn=0x00000000003899F4 string=0x00000000003899F8 "*"
 *   insn=0x00000000003899F8 string=0x00000000003899FC "\n"
 *   insn=0x0000000000389A04 string=0x0000000000389A40 "?"
 *   insn=0x0000000000389A20 string=0x0000000000389A24 ")=G"
 *   insn=0x0000000000389A24 string=0x0000000000389A28 "!"
 *   insn=0x0000000000389A2C string=0x0000000000389A30 "\t"
 *   insn=0x0000000000389A30 string=0x0000000000389A34 "*"
 *   insn=0x0000000000389A34 string=0x0000000000389A38 "\n"
 *   insn=0x0000000000389A48 string=0x0000000000389A4C "V"
 *   insn=0x0000000000389A4C string=0x0000000000389A50 "u"
 *   insn=0x0000000000389A50 string=0x0000000000389A54 "u"
 *   insn=0x0000000000389A5C string=0x0000000000389A60 "*"
 *   insn=0x0000000000389A60 string=0x0000000000389A64 "\n"
 *   insn=0x0000000000389A64 string=0x0000000000389A68 "?"
 *   insn=0x0000000000389A78 string=0x0000000000389A7C "5"
 *   insn=0x0000000000389A80 string=0x0000000000389A84 ""
 *   insn=0x0000000000389A90 string=0x0000000000389A94 "\t@"
 *   insn=0x0000000000389AA0 string=0x0000000000389AA4 ""
 *   insn=0x0000000000389AB0 string=0x0000000000389AB4 "@"
 *   insn=0x0000000000389AC0 string=0x0000000000389AC4 "5"
 *   insn=0x0000000000389AC8 string=0x0000000000389ACC ""
 *   insn=0x0000000000389AD8 string=0x0000000000389ADC "\t@"
 *   insn=0x0000000000389AE8 string=0x0000000000389AEC ""
 *   insn=0x0000000000389AF8 string=0x0000000000389AFC "@"
 *   insn=0x0000000000389B10 string=0x0000000000389B14 "l"
 *   insn=0x0000000000389B14 string=0x0000000000389B18 ""
 *   insn=0x0000000000389B30 string=0x0000000000389B34 "U"
 *   insn=0x0000000000389B40 string=0x0000000000389B44 "["
 *   insn=0x0000000000389B44 string=0x0000000000389B48 "t"
 *   insn=0x0000000000389B44 string=0x00000000001F94B0 "0'"
 *   insn=0x0000000000389B6C string=0x0000000000389B70 "h"
 *   insn=0x0000000000389B70 string=0x0000000000389B74 "`z@"
 *   insn=0x0000000000389B74 string=0x0000000000389B78 "b"
 *   insn=0x0000000000389B80 string=0x0000000000389B84 "@G"
 *   insn=0x0000000000389B88 string=0x0000000000389B8C " ( "
 *   insn=0x0000000000389B90 string=0x0000000000389B94 "@L "
 *   insn=0x0000000000389BA0 string=0x0000000000389BA4 "s"
 *   insn=0x0000000000389BA4 string=0x0000000000389BA8 "`"
 *   insn=0x0000000000389BAC string=0x0000000000389BB0 "aBH"
 *   insn=0x0000000000389BB4 string=0x0000000000389BB8 "tz@"
 *   insn=0x0000000000389BB8 string=0x0000000000389BBC "b"
 *   insn=0x0000000000389BC0 string=0x0000000000389BC4 " "
 *   insn=0x0000000000389BC4 string=0x0000000000389BC8 "A"
 *   insn=0x0000000000389BDC string=0x00000000001FDA30 "0'"
 *   insn=0x0000000000389BF0 string=0x0000000000389BF4 "_"
 *   insn=0x0000000000389BF4 string=0x0000000000389BF8 "hz@"
 *   insn=0x0000000000389BF8 string=0x0000000000389BFC "s"
 *   insn=0x0000000000389C08 string=0x0000000000389C0C "b"
 *   insn=0x0000000000389C14 string=0x0000000000389C18 " "
 *   insn=0x0000000000389C18 string=0x0000000000389C1C "A"
 *   insn=0x0000000000389C28 string=0x0000000000389C2C "h"
 *   insn=0x0000000000389C3C string=0x0000000000389C40 "L"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BadgeCountView::BadgeCountView(Caver::BadgeCountView *this)
{
  Caver::GUIFrameView *v2; // x0
  Caver::TextureLibrary *v3; // x0
  _QWORD *v4; // x20
  __int64 v5; // x9
  _QWORD *v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x0
  int v10; // w8
  void *v11; // x0
  void (__fastcall *v12)(Caver::BadgeCountView *, __int64 *); // x8
  _QWORD *v13; // x9
  _QWORD *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x8
  _QWORD *v17; // x8
  __int64 v18; // x9
  _QWORD *v19; // x20
  __int64 v20; // x8
  __int64 v21; // x8
  _QWORD *v22; // x20
  __int64 v23; // x8
  __int64 v24; // x8
  void *v25; // x0
  __int64 v26; // x20
  _QWORD *v27; // x21
  __int64 v28; // x8
  __int64 v29; // x8
  void (*v30)(void); // x8
  _QWORD *v31; // x9
  _QWORD *v32; // x20
  __int64 v33; // x8
  __int64 v34; // x8
  __int64 v35; // x20
  _QWORD *v36; // x9
  __int64 result; // x0
  int v38; // w8
  unsigned int *v39; // x8
  int v40; // w9
  unsigned int *v41; // x8
  int v42; // w9
  __int64 v43; // [xsp+98h] [xbp-48h] BYREF
  __int64 v44; // [xsp+A0h] [xbp-40h] BYREF
  _QWORD *v45; // [xsp+A8h] [xbp-38h]
  __int64 v46; // [xsp+B8h] [xbp-28h]

  v46 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::GUIView(this);
  *(_QWORD *)((char *)this + 252) = 0;
  *(_QWORD *)((char *)this + 244) = 0;
  *(_QWORD *)((char *)this + 236) = 0;
  *(_QWORD *)this = off_6CD7A0;
  *(_QWORD *)((char *)this + 260) = 0;
  *((_DWORD *)this + 67) = 0;
  v2 = (Caver::GUIFrameView *)operator new(0x110u);
  Caver::GUIFrameView::GUIFrameView(v2);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>();
  v4 = (_QWORD *)*((_QWORD *)this + 31);
  v5 = v44;
  v44 = *((_QWORD *)this + 30);
  v6 = v45;
  *((_QWORD *)this + 30) = v5;
  *((_QWORD *)this + 31) = v6;
  v45 = v4;
  if ( v4 )
  {
    v7 = v4[1] - 1LL;
    v4[1] = v7;
    if ( !v7 )
    {
      v3 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
      v8 = v4[2] - 1LL;
      v4[2] = v8;
      if ( !v8 )
        v3 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
    }
  }
  Caver::TextureLibrary::sharedLibrary(v3);
  sub_566BB8((int)&v43, "countbadge");
  Caver::TextureLibrary::TextureForName();
  Caver::GUIFrameView::SetFrameTexture();
  v9 = v44;
  if ( v44 )
  {
    v10 = *(_DWORD *)(v44 + 8) - 1;
    *(_DWORD *)(v44 + 8) = v10;
    if ( !v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  v11 = (void *)(v43 - 24);
  if ( (__int64 *)(v43 - 24) != &qword_6FD2E0 )
  {
    v39 = (unsigned int *)(v43 - 8);
    if ( &pthread_create )
    {
      do
        v40 = __ldaxr(v39);
      while ( __stlxr(v40 - 1, v39) );
    }
    else
    {
      v40 = (*v39)--;
    }
    if ( v40 <= 0 )
      operator delete(v11);
  }
  v12 = *(void (__fastcall **)(Caver::BadgeCountView *, __int64 *))(*(_QWORD *)this + 96LL);
  v44 = *((_QWORD *)this + 30);
  v13 = (_QWORD *)*((_QWORD *)this + 31);
  v45 = v13;
  if ( v13 )
    ++v13[1];
  v12(this, &v44);
  v14 = v45;
  if ( v45 )
  {
    v15 = v45[1] - 1LL;
    v45[1] = v15;
    if ( !v15 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      v16 = v14[2] - 1LL;
      v14[2] = v16;
      if ( !v16 )
        (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
    }
  }
  *(_BYTE *)(*((_QWORD *)this + 30) + 228LL) = 1;
  sub_566BB8((int)&v43, "");
  Caver::GameInterfaceBuilder::NormalLabel();
  v18 = v44;
  v17 = v45;
  if ( v45 )
    ++v45[1];
  v19 = (_QWORD *)*((_QWORD *)this + 33);
  *((_QWORD *)this + 32) = v18;
  *((_QWORD *)this + 33) = v17;
  if ( v19 )
  {
    v20 = v19[1] - 1LL;
    v19[1] = v20;
    if ( !v20 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
      v21 = v19[2] - 1LL;
      v19[2] = v21;
      if ( !v21 )
        (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
    }
  }
  v22 = v45;
  if ( v45 )
  {
    v23 = v45[1] - 1LL;
    v45[1] = v23;
    if ( !v23 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
      v24 = v22[2] - 1LL;
      v22[2] = v24;
      if ( !v24 )
        (*(void (__fastcall **)(_QWORD *))(*v22 + 24LL))(v22);
    }
  }
  v25 = (void *)(v43 - 24);
  if ( (__int64 *)(v43 - 24) != &qword_6FD2E0 )
  {
    v41 = (unsigned int *)(v43 - 8);
    if ( &pthread_create )
    {
      do
        v42 = __ldaxr(v41);
      while ( __stlxr(v42 - 1, v41) );
    }
    else
    {
      v42 = (*v41)--;
    }
    if ( v42 <= 0 )
      operator delete(v25);
  }
  v26 = *((_QWORD *)this + 32);
  if ( *(unsigned __int8 *)(v26 + 264) != 255
    || *(unsigned __int8 *)(v26 + 265) != 255
    || *(unsigned __int8 *)(v26 + 266) != 255
    || *(unsigned __int8 *)(v26 + 267) != 255 )
  {
    v27 = *(_QWORD **)(v26 + 280);
    *(_DWORD *)(v26 + 264) = -1;
    *(_QWORD *)(v26 + 272) = 0;
    *(_QWORD *)(v26 + 280) = 0;
    if ( v27 )
    {
      v28 = v27[1] - 1LL;
      v27[1] = v28;
      if ( !v28 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
        v29 = v27[2] - 1LL;
        v27[2] = v29;
        if ( !v29 )
          (*(void (__fastcall **)(_QWORD *))(*v27 + 24LL))(v27);
      }
    }
    Caver::GUILabel::UpdateText((Caver::GUILabel *)v26);
    v26 = *((_QWORD *)this + 32);
  }
  *(_BYTE *)(v26 + 320) = 0;
  Caver::GUILabel::UpdateText((Caver::GUILabel *)v26);
  v30 = *(void (**)(void))(**((_QWORD **)this + 30) + 96LL);
  v44 = *((_QWORD *)this + 32);
  v31 = (_QWORD *)*((_QWORD *)this + 33);
  v45 = v31;
  if ( v31 )
    ++v31[1];
  v30();
  v32 = v45;
  if ( v45 )
  {
    v33 = v45[1] - 1LL;
    v45[1] = v33;
    if ( !v33 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v32 + 16LL))(v32);
      v34 = v32[2] - 1LL;
      v32[2] = v34;
      if ( !v34 )
        (*(void (__fastcall **)(_QWORD *))(*v32 + 24LL))(v32);
    }
  }
  v35 = *(_QWORD *)(*((_QWORD *)this + 30) + 256LL);
  if ( v35 )
    ++*(_DWORD *)(v35 + 8);
  v36 = *(_QWORD **)(v35 + 84);
  v44 = *(_QWORD *)((char *)this + 116);
  v45 = v36;
  result = Caver::GUIView::SetFrame(this, (const Caver::Rectangle *)&v44);
  v38 = *(_DWORD *)(v35 + 8) - 1;
  *(_DWORD *)(v35 + 8) = v38;
  if ( !v38 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
  return result;
}


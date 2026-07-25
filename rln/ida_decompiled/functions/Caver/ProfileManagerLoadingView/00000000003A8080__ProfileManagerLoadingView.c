/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A8080
 * Mangled: _ZN5Caver25ProfileManagerLoadingViewC2Ev
 * Demangled: Caver::ProfileManagerLoadingView::ProfileManagerLoadingView(void)
 *
 * Callers: 1
 *   0x00000000001FCBA0  Caver::ProfileManagerLoadingView::ProfileManagerLoadingView(void)
 *
 * Callees: 19
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F5960  Caver::GUIButton::SetTintColor(Caver::Color)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001F8CE0  Caver::GameInterfaceBuilder::NormalLabel(std::string const&,Caver::Color,Caver::Color)
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FB2E0  Caver::GUIButton::SetTextColor(Caver::Color)
 *   0x00000000001FD290  Caver::GameInterfaceBuilder::FramedButtonWithTitle(std::string const&,bool)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x00000000002039B0  Caver::GUILabel::TextSize(void)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 219
 *   insn=0x00000000003A8094 string=0x00000000003A8098 "W"
 *   insn=0x00000000003A80AC string=0x00000000003A80B0 ""
 *   insn=0x00000000003A80B0 string=0x00000000003A80B4 "\n"
 *   insn=0x00000000003A80B4 string=0x00000000003A80B8 "@"
 *   insn=0x00000000003A80BC string=0x00000000003A80C0 "A"
 *   insn=0x00000000003A80C0 string=0x00000000003A80C4 "iR"
 *   insn=0x00000000003A80C8 string=0x00000000003A80CC "h"
 *   insn=0x00000000003A80D8 string=0x00000000003A80DC " "
 *   insn=0x00000000003A80DC string=0x00000000003A80E0 "!"
 *   insn=0x00000000003A80F0 string=0x00000000003A80F4 ""
 *   insn=0x00000000003A8110 string=0x00000000001F8CE0 "0'"
 *   insn=0x00000000003A8118 string=0x00000000003A811C "\n"
 *   insn=0x00000000003A8118 string=0x00000000003A8128 "t~@"
 *   insn=0x00000000003A811C string=0x00000000003A8120 "J"
 *   insn=0x00000000003A8120 string=0x00000000003A8124 "\n"
 *   insn=0x00000000003A8128 string=0x00000000003A812C "i""
 *   insn=0x00000000003A812C string=0x00000000003A8130 "4"
 *   insn=0x00000000003A8134 string=0x00000000003A8138 ""
 *   insn=0x00000000003A8144 string=0x00000000003A8148 "\t@"
 *   insn=0x00000000003A8154 string=0x00000000003A8158 ""
 *   insn=0x00000000003A8164 string=0x00000000003A8168 "@"
 *   insn=0x00000000003A8174 string=0x00000000003A8178 "4"
 *   insn=0x00000000003A817C string=0x00000000003A8180 ""
 *   insn=0x00000000003A818C string=0x00000000003A8190 "\t@"
 *   insn=0x00000000003A819C string=0x00000000003A81A0 ""
 *   insn=0x00000000003A81AC string=0x00000000003A81B0 "@"
 *   insn=0x00000000003A81D4 string=0x00000000003A81D8 "A"
 *   insn=0x00000000003A81D8 string=0x00000000005919D0 "Downloading saves from iCloud..."
 *   insn=0x00000000003A81E4 string=0x00000000003A81E8 "t"
 *   insn=0x00000000003A81F8 string=0x00000000003A81FC "("
 *   insn=0x00000000003A81FC string=0x00000000003A8200 "_"
 *   insn=0x00000000003A820C string=0x00000000001F5190 "P'"
 *   insn=0x00000000003A8218 string=0x00000000003A821C "#\t"
 *   insn=0x00000000003A8224 string=0x00000000001F8510 "0'"
 *   insn=0x00000000003A8234 string=0x00000000003A8238 "h"
 *   insn=0x00000000003A8238 string=0x00000000003A823C "iz@"
 *   insn=0x00000000003A823C string=0x00000000003A8240 "1@"
 *   insn=0x00000000003A8244 string=0x00000000003A8248 "i~@"
 *   insn=0x00000000003A8250 string=0x00000000003A8254 "*"
 *   insn=0x00000000003A8254 string=0x00000000003A8258 "J"
 *   insn=0x00000000003A8258 string=0x00000000003A825C "*"
 *   insn=0x00000000003A826C string=0x00000000003A8270 "4"
 *   insn=0x00000000003A8270 string=0x00000000003A82B4 "A"
 *   insn=0x00000000003A8274 string=0x00000000003A8278 ""
 *   insn=0x00000000003A8284 string=0x00000000003A8288 "\t@"
 *   insn=0x00000000003A8294 string=0x00000000003A8298 ""
 *   insn=0x00000000003A82A4 string=0x00000000003A82A8 "@"
 *   insn=0x00000000003A82B4 string=0x00000000005919F1 "Skip"
 *   insn=0x00000000003A82C0 string=0x00000000003A82C4 "="
 *   insn=0x00000000003A82D4 string=0x00000000001FD290 "0'"
 *   insn=0x00000000003A82DC string=0x00000000003A82E0 "\n"
 *   insn=0x00000000003A82DC string=0x00000000003A82EC "t"
 *   insn=0x00000000003A82E0 string=0x00000000003A82E4 "J"
 *   insn=0x00000000003A82E4 string=0x00000000003A82E8 "\n"
 *   insn=0x00000000003A82EC string=0x00000000003A82F0 "i""
 *   insn=0x00000000003A82F0 string=0x00000000003A82F4 "4"
 *   insn=0x00000000003A82F8 string=0x00000000003A82FC ""
 *   insn=0x00000000003A8308 string=0x00000000003A830C "\t@"
 *   insn=0x00000000003A8318 string=0x00000000003A831C ""
 *   insn=0x00000000003A8328 string=0x00000000003A832C "@"
 *   insn=0x00000000003A8338 string=0x00000000003A833C "4"
 *   insn=0x00000000003A8340 string=0x00000000003A8344 ""
 *   insn=0x00000000003A8350 string=0x00000000003A8354 "\t@"
 *   insn=0x00000000003A8360 string=0x00000000003A8364 ""
 *   insn=0x00000000003A8370 string=0x00000000003A8374 "@"
 *   insn=0x00000000003A8388 string=0x00000000003A838C "!\t"
 *   insn=0x00000000003A838C string=0x00000000003A8390 "`"
 *   insn=0x00000000003A839C string=0x00000000003A83A0 "p5"
 *   insn=0x00000000003A83A0 string=0x00000000003A83A4 "`"
 *   insn=0x00000000003A83A0 string=0x00000000001F5960 "P'"
 *   insn=0x00000000003A83A4 string=0x00000000003A83A8 ""
 *   insn=0x00000000003A83B4 string=0x00000000003A83B8 "h"
 *   insn=0x00000000003A83B4 string=0x00000000001FB2E0 "0'"
 *   insn=0x00000000003A83B8 string=0x00000000003A83BC "i"
 *   insn=0x00000000003A83BC string=0x00000000003A83C0 "1@"
 *   insn=0x00000000003A83C4 string=0x00000000003A83C8 "i"
 *   insn=0x00000000003A83D0 string=0x00000000003A83D4 "*"
 *   insn=0x00000000003A83D4 string=0x00000000003A83D8 "J"
 *   insn=0x00000000003A83D8 string=0x00000000003A83DC "*"
 *   insn=0x00000000003A83EC string=0x00000000003A83F0 "4"
 *   insn=0x00000000003A83F0 string=0x00000000003A8434 "h"
 *   insn=0x00000000003A83F4 string=0x00000000003A83F8 ""
 *   insn=0x00000000003A8404 string=0x00000000003A8408 "\t@"
 *   insn=0x00000000003A8414 string=0x00000000003A8418 ""
 *   insn=0x00000000003A8424 string=0x00000000003A8428 "@"
 *   insn=0x00000000003A8438 string=0x00000000003A843C "\t"
 *   insn=0x00000000003A8448 string=0x00000000003A844C "a"
 *   insn=0x00000000003A844C string=0x00000000003A8538 "f7"
 *   insn=0x00000000003A8468 string=0x00000000003A846C ")=G"
 *   insn=0x00000000003A846C string=0x00000000003A8470 "!"
 *   insn=0x00000000003A8470 string=0x00000000003A8474 "\t"
 *   insn=0x00000000003A8474 string=0x00000000003A8478 "\t"
 *   insn=0x00000000003A8474 string=0x00000000003A84D4 "\t"
 *   insn=0x00000000003A8478 string=0x00000000003A847C "*"
 *   insn=0x00000000003A847C string=0x00000000003A8480 "\n"
 *   insn=0x00000000003A8488 string=0x00000000003A84E0 "?"
 *   insn=0x00000000003A848C string=0x00000000003A8490 ")=G"
 *   insn=0x00000000003A8498 string=0x00000000003A849C "\t"
 *   insn=0x00000000003A8498 string=0x00000000003A84F4 "\t"
 *   insn=0x00000000003A849C string=0x00000000003A84A0 "*"
 *   insn=0x00000000003A84A0 string=0x00000000003A84A4 "\n"
 *   insn=0x00000000003A84AC string=0x00000000003A8500 "?"
 *   insn=0x00000000003A84B0 string=0x00000000003A84B4 ")=G"
 *   insn=0x00000000003A84B4 string=0x00000000003A84B8 "!"
 *   insn=0x00000000003A84BC string=0x00000000003A84C0 "\t"
 *   insn=0x00000000003A84BC string=0x00000000003A8518 "\t"
 *   insn=0x00000000003A84C0 string=0x00000000003A84C4 "*"
 *   insn=0x00000000003A84C4 string=0x00000000003A84C8 "\n"
 *   insn=0x00000000003A84D0 string=0x00000000003A8524 "?"
 *   insn=0x00000000003A84D4 string=0x00000000003A84D8 "*"
 *   insn=0x00000000003A84D8 string=0x00000000003A84DC "\n"
 *   insn=0x00000000003A84EC string=0x00000000003A84F0 "9"
 *   insn=0x00000000003A84F4 string=0x00000000003A84F8 "*"
 *   insn=0x00000000003A84F8 string=0x00000000003A84FC "\n"
 *   insn=0x00000000003A8510 string=0x00000000003A8514 "I"
 *   insn=0x00000000003A8518 string=0x00000000003A851C "*"
 *   insn=0x00000000003A851C string=0x00000000003A8520 "\n"
 *   insn=0x00000000003A8524 string=0x00000000003A8528 "L"
 *   insn=0x00000000003A8538 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003A854C string=0x00000000003A8550 ""
 *   insn=0x00000000003A8554 string=0x00000000003A8558 "A\n"
 *   insn=0x00000000003A855C string=0x00000000003A8560 "\t@"
 *   insn=0x00000000003A856C string=0x00000000003A8570 ""
 *   insn=0x00000000003A8574 string=0x00000000003A8578 "A\t"
 *   insn=0x00000000003A857C string=0x00000000003A8580 "@"
 *   insn=0x00000000003A8588 string=0x00000000003A858C "E"
 *   insn=0x00000000003A85A0 string=0x00000000003A85A4 ""
 *   insn=0x00000000003A85A8 string=0x00000000003A85AC "a\t"
 *   insn=0x00000000003A85B0 string=0x00000000003A85B4 "\t@"
 *   insn=0x00000000003A85C0 string=0x00000000003A85C4 ""
 *   insn=0x00000000003A85C8 string=0x00000000003A85CC "a"
 *   insn=0x00000000003A85D0 string=0x00000000003A85D4 "@"
 *   insn=0x00000000003A85DC string=0x00000000003A85E0 ">"
 *   insn=0x00000000003A85EC string=0x00000000003A87A8 "u"
 *   insn=0x00000000003A85F0 string=0x00000000003A85F4 ""
 *   insn=0x00000000003A85F8 string=0x00000000003A85FC "a"
 *   insn=0x00000000003A8600 string=0x00000000003A8604 "\t@"
 *   insn=0x00000000003A8610 string=0x00000000003A8614 ""
 *   insn=0x00000000003A8618 string=0x00000000003A861C "a"
 *   insn=0x00000000003A8620 string=0x00000000003A8624 "@"
 *   insn=0x00000000003A862C string=0x00000000003A8630 "^"
 *   insn=0x00000000003A863C string=0x00000000003A8640 "U"
 *   insn=0x00000000003A8644 string=0x00000000003A8648 ""
 *   insn=0x00000000003A8654 string=0x00000000003A8658 "\t@"
 *   insn=0x00000000003A8664 string=0x00000000003A8668 ""
 *   insn=0x00000000003A8674 string=0x00000000003A8678 "@"
 *   insn=0x00000000003A8680 string=0x00000000003A8684 "I"
 *   insn=0x00000000003A868C string=0x00000000003A8690 "u"
 *   insn=0x00000000003A8694 string=0x00000000003A8698 "V"
 *   insn=0x00000000003A8698 string=0x00000000003A87F0 "u~@"
 *   insn=0x00000000003A86B0 string=0x00000000003A86B4 ")=G"
 *   insn=0x00000000003A86B4 string=0x00000000003A86B8 "!"
 *   insn=0x00000000003A86B8 string=0x00000000003A86BC ")"
 *   insn=0x00000000003A86BC string=0x00000000003A86C0 "\t"
 *   insn=0x00000000003A86BC string=0x00000000003A8720 "\t"
 *   insn=0x00000000003A86C0 string=0x00000000003A86C4 "*"
 *   insn=0x00000000003A86C4 string=0x00000000003A86C8 "\n"
 *   insn=0x00000000003A86D0 string=0x00000000003A8710 "?"
 *   insn=0x00000000003A86DC string=0x00000000003A86E0 ")"
 *   insn=0x00000000003A86F0 string=0x00000000003A86F4 ")=G"
 *   insn=0x00000000003A86F4 string=0x00000000003A86F8 "!"
 *   insn=0x00000000003A86F8 string=0x00000000003A86FC ")"
 *   insn=0x00000000003A86FC string=0x00000000003A8700 "\t"
 *   insn=0x00000000003A8700 string=0x00000000003A8704 "*"
 *   insn=0x00000000003A8704 string=0x00000000003A8708 "\n"
 *   insn=0x00000000003A871C string=0x00000000003A877C "\n"
 *   insn=0x00000000003A8720 string=0x00000000003A8724 "*"
 *   insn=0x00000000003A8724 string=0x00000000003A8728 "\n"
 *   insn=0x00000000003A8728 string=0x00000000003A872C "?"
 *   insn=0x00000000003A872C string=0x00000000003A8730 "M"
 *   insn=0x00000000003A873C string=0x00000000003A8740 "(a"
 *   insn=0x00000000003A874C string=0x00000000003A8750 "J=G"
 *   insn=0x00000000003A8750 string=0x00000000003A8754 ")!"
 *   insn=0x00000000003A8758 string=0x00000000003A875C "*"
 *   insn=0x00000000003A8758 string=0x00000000003A878C "*"
 *   insn=0x00000000003A875C string=0x00000000003A8760 "K"
 *   insn=0x00000000003A8760 string=0x00000000003A8764 "+"
 *   insn=0x00000000003A8768 string=0x00000000003A876C "_"
 *   insn=0x00000000003A877C string=0x00000000003A8780 "u"
 *   insn=0x00000000003A8780 string=0x00000000003A8784 "u"
 *   insn=0x00000000003A878C string=0x00000000003A8790 "K"
 *   insn=0x00000000003A8790 string=0x00000000003A8794 "+"
 *   insn=0x00000000003A8794 string=0x00000000003A8798 "_"
 *   insn=0x00000000003A87A8 string=0x00000000003A87AC "5"
 *   insn=0x00000000003A87B0 string=0x00000000003A87B4 ""
 *   insn=0x00000000003A87C0 string=0x00000000003A87C4 "\t@"
 *   insn=0x00000000003A87D0 string=0x00000000003A87D4 ""
 *   insn=0x00000000003A87E0 string=0x00000000003A87E4 "@"
 *   insn=0x00000000003A87F0 string=0x00000000003A87F4 "5"
 *   insn=0x00000000003A87F8 string=0x00000000003A87FC ""
 *   insn=0x00000000003A8808 string=0x00000000003A880C "\t@"
 *   insn=0x00000000003A8818 string=0x00000000003A881C ""
 *   insn=0x00000000003A8828 string=0x00000000003A882C "@"
 *   insn=0x00000000003A8838 string=0x00000000003A883C "}Y"
 *   insn=0x00000000003A8840 string=0x00000000003A8844 " d"
 *   insn=0x00000000003A8860 string=0x00000000003A8864 "U"
 *   insn=0x00000000003A8874 string=0x00000000003A8878 "tz@"
 *   insn=0x00000000003A8874 string=0x00000000001F94B0 "0'"
 *   insn=0x00000000003A8880 string=0x00000000003A8884 "Kl"
 *   insn=0x00000000003A8898 string=0x00000000003A889C "5J"
 *   insn=0x00000000003A889C string=0x00000000003A88A0 "tz@"
 *   insn=0x00000000003A889C string=0x00000000001FB170 "0'"
 *   insn=0x00000000003A88A0 string=0x00000000003A88A4 "`"
 *   insn=0x00000000003A88A4 string=0x00000000003A88A8 "aBH"
 *   insn=0x00000000003A88B4 string=0x00000000003A88B8 " "
 *   insn=0x00000000003A88BC string=0x00000000003A88C0 "A"
 *   insn=0x00000000003A88CC string=0x00000000003A88D0 "XT"
 *   insn=0x00000000003A88D0 string=0x00000000001FDA30 "0'"
 *   insn=0x00000000003A88F4 string=0x00000000003A88F8 "`"
 *   insn=0x00000000003A88F8 string=0x00000000003A88FC "H"
 *   insn=0x00000000003A8904 string=0x00000000003A8908 "\t@G"
 *   insn=0x00000000003A8914 string=0x00000000003A8918 "t"
 *   insn=0x00000000003A8918 string=0x00000000003A891C "`"
 *   insn=0x00000000003A891C string=0x00000000003A8920 "aBH"
 *   insn=0x00000000003A892C string=0x00000000003A8930 " "
 *   insn=0x00000000003A8934 string=0x00000000003A8938 "A"
 *   insn=0x00000000003A8940 string=0x00000000003A8944 ";T"
 *   insn=0x00000000003A8944 string=0x00000000003A8948 "H"
 *   insn=0x00000000003A897C string=0x00000000003A8998 "N6"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProfileManagerLoadingView::ProfileManagerLoadingView(Caver::ProfileManagerLoadingView *this)
{
  _QWORD *v2; // x8
  void *v3; // x9
  _QWORD *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x8
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x8
  void *v10; // x0
  Caver::GUILabel *v11; // x21
  char *v12; // x22
  size_t v13; // x2
  __int64 *v14; // x20
  _QWORD *v15; // x1
  void (__fastcall *v16)(Caver::ProfileManagerLoadingView *, void **); // x8
  _QWORD *v17; // x9
  _QWORD *v18; // x20
  __int64 v19; // x8
  __int64 v20; // x8
  _QWORD *v21; // x8
  void *v22; // x9
  _QWORD *v23; // x20
  __int64 v24; // x8
  __int64 v25; // x8
  _QWORD *v26; // x20
  __int64 v27; // x8
  __int64 v28; // x8
  void *v29; // x0
  __int64 (__fastcall *v30)(Caver::ProfileManagerLoadingView *, void **); // x8
  _QWORD *v31; // x9
  __int64 result; // x0
  _QWORD *v33; // x20
  __int64 v34; // x8
  __int64 v35; // x8
  unsigned int *v36; // x8
  int v37; // w9
  unsigned int *v38; // x8
  int v39; // w9
  unsigned int *v40; // x8
  int v41; // w9
  __int64 v42; // [xsp+88h] [xbp-58h] BYREF
  void *v43; // [xsp+90h] [xbp-50h] BYREF
  _QWORD *v44; // [xsp+98h] [xbp-48h]
  __int64 v45; // [xsp+A8h] [xbp-38h]

  v45 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::GUIView(this);
  *((_QWORD *)this + 32) = 0;
  *((_QWORD *)this + 33) = 0;
  *(_QWORD *)this = off_6CEA10;
  *((_QWORD *)this + 30) = 0;
  *((_QWORD *)this + 31) = 0;
  *((_DWORD *)this + 68) = 0;
  *(_QWORD *)((char *)this + 276) = 2139095039;
  sub_566BB8((int)&v42, "");
  Caver::GameInterfaceBuilder::NormalLabel();
  v3 = v43;
  v2 = v44;
  if ( v44 )
    ++v44[1];
  v4 = (_QWORD *)*((_QWORD *)this + 31);
  *((_QWORD *)this + 30) = v3;
  *((_QWORD *)this + 31) = v2;
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
  v7 = v44;
  if ( v44 )
  {
    v8 = v44[1] - 1LL;
    v44[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
  }
  v10 = (void *)(v42 - 24);
  if ( (__int64 *)(v42 - 24) != &qword_6FD2E0 )
  {
    v36 = (unsigned int *)(v42 - 8);
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
  v11 = (Caver::GUILabel *)*((_QWORD *)this + 30);
  sub_566BB8((int)&v43, "Downloading saves from iCloud...");
  v12 = (char *)v43;
  v14 = (__int64 *)((char *)v43 - 24);
  v13 = *((_QWORD *)v43 - 3);
  v15 = (_QWORD *)*((_QWORD *)v11 + 32);
  if ( v13 != *(v15 - 3) || memcmp(v43, v15, v13) )
  {
    sub_56A6A8((char *)v11 + 256);
    Caver::GUILabel::UpdateText(v11);
    v12 = (char *)v43;
    v14 = (__int64 *)((char *)v43 - 24);
  }
  if ( v14 != &qword_6FD2E0 )
  {
    v38 = (unsigned int *)(v12 - 8);
    if ( &pthread_create )
    {
      do
        v39 = __ldaxr(v38);
      while ( __stlxr(v39 - 1, v38) );
    }
    else
    {
      v39 = (*v38)--;
    }
    if ( v39 <= 0 )
      operator delete(v14);
  }
  v16 = *(void (__fastcall **)(Caver::ProfileManagerLoadingView *, void **))(*(_QWORD *)this + 96LL);
  v43 = (void *)*((_QWORD *)this + 30);
  v17 = (_QWORD *)*((_QWORD *)this + 31);
  v44 = v17;
  if ( v17 )
    ++v17[1];
  v16(this, &v43);
  v18 = v44;
  if ( v44 )
  {
    v19 = v44[1] - 1LL;
    v44[1] = v19;
    if ( !v19 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
      v20 = v18[2] - 1LL;
      v18[2] = v20;
      if ( !v20 )
        (*(void (__fastcall **)(_QWORD *))(*v18 + 24LL))(v18);
    }
  }
  sub_566BB8((int)&v42, "Skip");
  Caver::GameInterfaceBuilder::FramedButtonWithTitle();
  v22 = v43;
  v21 = v44;
  if ( v44 )
    ++v44[1];
  v23 = (_QWORD *)*((_QWORD *)this + 33);
  *((_QWORD *)this + 32) = v22;
  *((_QWORD *)this + 33) = v21;
  if ( v23 )
  {
    v24 = v23[1] - 1LL;
    v23[1] = v24;
    if ( !v24 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
      v25 = v23[2] - 1LL;
      v23[2] = v25;
      if ( !v25 )
        (*(void (__fastcall **)(_QWORD *))(*v23 + 24LL))(v23);
    }
  }
  v26 = v44;
  if ( v44 )
  {
    v27 = v44[1] - 1LL;
    v44[1] = v27;
    if ( !v27 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
      v28 = v26[2] - 1LL;
      v26[2] = v28;
      if ( !v28 )
        (*(void (__fastcall **)(_QWORD *))(*v26 + 24LL))(v26);
    }
  }
  v29 = (void *)(v42 - 24);
  if ( (__int64 *)(v42 - 24) != &qword_6FD2E0 )
  {
    v40 = (unsigned int *)(v42 - 8);
    if ( &pthread_create )
    {
      do
        v41 = __ldaxr(v40);
      while ( __stlxr(v41 - 1, v40) );
    }
    else
    {
      v41 = (*v40)--;
    }
    if ( v41 <= 0 )
      operator delete(v29);
  }
  Caver::GUIButton::SetTintColor();
  Caver::GUIButton::SetTextColor();
  v30 = *(__int64 (__fastcall **)(Caver::ProfileManagerLoadingView *, void **))(*(_QWORD *)this + 96LL);
  v43 = (void *)*((_QWORD *)this + 32);
  v31 = (_QWORD *)*((_QWORD *)this + 33);
  v44 = v31;
  if ( v31 )
    ++v31[1];
  result = v30(this, &v43);
  v33 = v44;
  if ( v44 )
  {
    v34 = v44[1] - 1LL;
    v44[1] = v34;
    if ( !v34 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v33 + 16LL))(v33);
      v35 = v33[2] - 1LL;
      v33[2] = v35;
      if ( !v35 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v33 + 24LL))(v33);
    }
  }
  *(_BYTE *)(*((_QWORD *)this + 32) + 228LL) = 1;
  return result;
}


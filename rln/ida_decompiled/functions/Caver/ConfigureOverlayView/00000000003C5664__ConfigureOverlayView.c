/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C5664
 * Mangled: _ZN5Caver20ConfigureOverlayViewC2Ev
 * Demangled: Caver::ConfigureOverlayView::ConfigureOverlayView(void)
 *
 * Callers: 2
 *   0x00000000001F75B0  Caver::ConfigureOverlayView::ConfigureOverlayView(void)
 *   0x00000000003C5460  Caver::CoinBar::~CoinBar()
 *
 * Callees: 15
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9BE0  Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FD290  Caver::GameInterfaceBuilder::FramedButtonWithTitle(std::string const&,bool)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003C6014  Caver::ConfigureOverlayView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 230
 *   insn=0x00000000003C5678 string=0x00000000003C567C "U"
 *   insn=0x00000000003C5688 string=0x00000000003C568C "-"
 *   insn=0x00000000003C568C string=0x00000000003C5690 ""
 *   insn=0x00000000003C5690 string=0x00000000003C5694 ""
 *   insn=0x00000000003C5694 string=0x00000000003C5698 "`"
 *   insn=0x00000000003C56A0 string=0x00000000003C56A4 "\n"
 *   insn=0x00000000003C56A4 string=0x00000000003C56A8 "\tA"
 *   insn=0x00000000003C56A8 string=0x00000000003C56AC ""
 *   insn=0x00000000003C56AC string=0x00000000003C56B0 "@"
 *   insn=0x00000000003C56B4 string=0x00000000003C56B8 "i"
 *   insn=0x00000000003C56B8 string=0x00000000003C56BC "`>"
 *   insn=0x00000000003C56BC string=0x00000000003C56C0 "`"
 *   insn=0x00000000003C56C0 string=0x00000000003C56C4 "a"
 *   insn=0x00000000003C56C0 string=0x00000000001FBC40 "0'"
 *   insn=0x00000000003C56C4 string=0x00000000005920D8 "Done"
 *   insn=0x00000000003C56D0 string=0x00000000003C56D4 "9"
 *   insn=0x00000000003C56E4 string=0x00000000001FD290 "0'"
 *   insn=0x00000000003C56EC string=0x00000000003C56F0 "\n"
 *   insn=0x00000000003C56EC string=0x00000000003C56FC "t"
 *   insn=0x00000000003C56F0 string=0x00000000003C56F4 "J"
 *   insn=0x00000000003C56F4 string=0x00000000003C56F8 "\n"
 *   insn=0x00000000003C56FC string=0x00000000003C5700 "i"
 *   insn=0x00000000003C5700 string=0x00000000003C5704 "4"
 *   insn=0x00000000003C5708 string=0x00000000003C570C ""
 *   insn=0x00000000003C5718 string=0x00000000003C571C "\t@"
 *   insn=0x00000000003C5728 string=0x00000000003C572C ""
 *   insn=0x00000000003C5738 string=0x00000000003C573C "@"
 *   insn=0x00000000003C5748 string=0x00000000003C574C "4"
 *   insn=0x00000000003C5750 string=0x00000000003C5754 ""
 *   insn=0x00000000003C5760 string=0x00000000003C5764 "\t@"
 *   insn=0x00000000003C5770 string=0x00000000003C5774 ""
 *   insn=0x00000000003C5780 string=0x00000000003C5784 "@"
 *   insn=0x00000000003C57A0 string=0x00000000003C57A4 "a"
 *   insn=0x00000000003C57A4 string=0x00000000003C57A8 "t"
 *   insn=0x00000000003C57CC string=0x00000000003C57D0 "`"
 *   insn=0x00000000003C57CC string=0x00000000001F6B70 "0'"
 *   insn=0x00000000003C57D4 string=0x00000000003C57D8 ""
 *   insn=0x00000000003C57E8 string=0x00000000003C57EC ""
 *   insn=0x00000000003C57EC string=0x00000000003C57F0 ""
 *   insn=0x00000000003C5808 string=0x00000000001F9BE0 "0'"
 *   insn=0x00000000003C580C string=0x00000000003C5810 "h"
 *   insn=0x00000000003C5810 string=0x00000000003C5814 "("
 *   insn=0x00000000003C5810 string=0x00000000003C583C "H"
 *   insn=0x00000000003C5814 string=0x00000000003C5818 ""
 *   insn=0x00000000003C5818 string=0x00000000003C581C ""
 *   insn=0x00000000003C5824 string=0x00000000003C5828 " !"
 *   insn=0x00000000003C5840 string=0x00000000003C5844 "`"
 *   insn=0x00000000003C584C string=0x00000000003C5850 "H"
 *   insn=0x00000000003C5850 string=0x00000000003C5854 "h"
 *   insn=0x00000000003C5850 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003C5854 string=0x00000000003C5858 "i"
 *   insn=0x00000000003C5858 string=0x00000000003C585C "1@"
 *   insn=0x00000000003C5860 string=0x00000000003C5864 "i"
 *   insn=0x00000000003C586C string=0x00000000003C5870 "*"
 *   insn=0x00000000003C5870 string=0x00000000003C5874 "J"
 *   insn=0x00000000003C5874 string=0x00000000003C5878 "*"
 *   insn=0x00000000003C5888 string=0x00000000003C588C "4"
 *   insn=0x00000000003C588C string=0x00000000003C58D0 "a"
 *   insn=0x00000000003C5890 string=0x00000000003C5894 ""
 *   insn=0x00000000003C58A0 string=0x00000000003C58A4 "\t@"
 *   insn=0x00000000003C58B0 string=0x00000000003C58B4 ""
 *   insn=0x00000000003C58C0 string=0x00000000003C58C4 "@"
 *   insn=0x00000000003C58D0 string=0x00000000005920DD "Reset"
 *   insn=0x00000000003C58EC string=0x00000000003C58F0 "h"
 *   insn=0x00000000003C58F8 string=0x00000000003C58FC "\n"
 *   insn=0x00000000003C58F8 string=0x00000000003C5908 "t"
 *   insn=0x00000000003C58FC string=0x00000000003C5900 "J"
 *   insn=0x00000000003C5900 string=0x00000000003C5904 "\n"
 *   insn=0x00000000003C5908 string=0x00000000003C590C "i"
 *   insn=0x00000000003C590C string=0x00000000003C5910 "4"
 *   insn=0x00000000003C5914 string=0x00000000003C5918 ""
 *   insn=0x00000000003C5924 string=0x00000000003C5928 "\t@"
 *   insn=0x00000000003C5934 string=0x00000000003C5938 ""
 *   insn=0x00000000003C5944 string=0x00000000003C5948 "@"
 *   insn=0x00000000003C5954 string=0x00000000003C5958 "4"
 *   insn=0x00000000003C595C string=0x00000000003C5960 ""
 *   insn=0x00000000003C596C string=0x00000000003C5970 "\t@"
 *   insn=0x00000000003C597C string=0x00000000003C5980 ""
 *   insn=0x00000000003C598C string=0x00000000003C5990 "@"
 *   insn=0x00000000003C59A4 string=0x00000000003C59A8 "a"
 *   insn=0x00000000003C59A8 string=0x00000000003C59AC "t"
 *   insn=0x00000000003C59C4 string=0x00000000003C59C8 "j"
 *   insn=0x00000000003C59C8 string=0x00000000003C59CC "`"
 *   insn=0x00000000003C59D0 string=0x00000000003C59D4 ""
 *   insn=0x00000000003C59E4 string=0x00000000003C59E8 ""
 *   insn=0x00000000003C59E8 string=0x00000000003C59EC ""
 *   insn=0x00000000003C5A00 string=0x00000000003C5A04 "w"
 *   insn=0x00000000003C5A08 string=0x00000000003C5A0C "h"
 *   insn=0x00000000003C5A0C string=0x00000000003C5A10 "("
 *   insn=0x00000000003C5A0C string=0x00000000003C5A38 "`"
 *   insn=0x00000000003C5A10 string=0x00000000003C5A14 ""
 *   insn=0x00000000003C5A14 string=0x00000000003C5A18 ""
 *   insn=0x00000000003C5A20 string=0x00000000003C5A24 " !"
 *   insn=0x00000000003C5A48 string=0x00000000003C5A4C "h"
 *   insn=0x00000000003C5A4C string=0x00000000003C5A50 "i"
 *   insn=0x00000000003C5A50 string=0x00000000003C5A54 "1@"
 *   insn=0x00000000003C5A58 string=0x00000000003C5A5C "i"
 *   insn=0x00000000003C5A64 string=0x00000000003C5A68 "*"
 *   insn=0x00000000003C5A68 string=0x00000000003C5A6C "J"
 *   insn=0x00000000003C5A6C string=0x00000000003C5A70 "*"
 *   insn=0x00000000003C5A80 string=0x00000000003C5A84 "4"
 *   insn=0x00000000003C5A88 string=0x00000000003C5A8C ""
 *   insn=0x00000000003C5A98 string=0x00000000003C5A9C "\t@"
 *   insn=0x00000000003C5AA8 string=0x00000000003C5AAC ""
 *   insn=0x00000000003C5AB8 string=0x00000000003C5ABC "@"
 *   insn=0x00000000003C5AD0 string=0x00000000003C5AD4 "!"
 *   insn=0x00000000003C5AF0 string=0x00000000003C5AF4 ")=G"
 *   insn=0x00000000003C5AF4 string=0x00000000003C5AF8 "!"
 *   insn=0x00000000003C5AFC string=0x00000000003C5B00 "\t"
 *   insn=0x00000000003C5AFC string=0x00000000003C5B38 "\t"
 *   insn=0x00000000003C5B00 string=0x00000000003C5B04 "*"
 *   insn=0x00000000003C5B04 string=0x00000000003C5B08 "\n"
 *   insn=0x00000000003C5B0C string=0x00000000003C5B10 ""
 *   insn=0x00000000003C5B10 string=0x00000000003C5B44 "?"
 *   insn=0x00000000003C5B14 string=0x00000000003C5B18 ")=G"
 *   insn=0x00000000003C5B18 string=0x00000000003C5B1C "!"
 *   insn=0x00000000003C5B20 string=0x00000000003C5B24 "\t"
 *   insn=0x00000000003C5B20 string=0x00000000003C5B58 "\t"
 *   insn=0x00000000003C5B24 string=0x00000000003C5B28 "*"
 *   insn=0x00000000003C5B28 string=0x00000000003C5B2C "\n"
 *   insn=0x00000000003C5B34 string=0x00000000003C5B64 "?"
 *   insn=0x00000000003C5B38 string=0x00000000003C5B3C "*"
 *   insn=0x00000000003C5B3C string=0x00000000003C5B40 "\n"
 *   insn=0x00000000003C5B58 string=0x00000000003C5B5C "*"
 *   insn=0x00000000003C5B5C string=0x00000000003C5B60 "\n"
 *   insn=0x00000000003C5B64 string=0x00000000003C5B68 ","
 *   insn=0x00000000003C5B6C string=0x00000000003C5B70 ""
 *   insn=0x00000000003C5B78 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003C5B94 string=0x00000000003C5B98 ""
 *   insn=0x00000000003C5BA4 string=0x00000000003C5BA8 "\t@"
 *   insn=0x00000000003C5BB4 string=0x00000000003C5BB8 ""
 *   insn=0x00000000003C5BC4 string=0x00000000003C5BC8 "@"
 *   insn=0x00000000003C5BD0 string=0x00000000003C5BD4 "c"
 *   insn=0x00000000003C5BE8 string=0x00000000003C5BEC ""
 *   insn=0x00000000003C5BF0 string=0x00000000003C5BF4 "!"
 *   insn=0x00000000003C5BF8 string=0x00000000003C5BFC "\t@"
 *   insn=0x00000000003C5C08 string=0x00000000003C5C0C ""
 *   insn=0x00000000003C5C10 string=0x00000000003C5C14 "!"
 *   insn=0x00000000003C5C18 string=0x00000000003C5C1C "@"
 *   insn=0x00000000003C5C24 string=0x00000000003C5C28 "\"
 *   insn=0x00000000003C5C34 string=0x00000000003C5DB0 "u"
 *   insn=0x00000000003C5C38 string=0x00000000003C5C3C ""
 *   insn=0x00000000003C5C40 string=0x00000000003C5C44 "a"
 *   insn=0x00000000003C5C48 string=0x00000000003C5C4C "\t@"
 *   insn=0x00000000003C5C58 string=0x00000000003C5C5C ""
 *   insn=0x00000000003C5C60 string=0x00000000003C5C64 "a\n"
 *   insn=0x00000000003C5C68 string=0x00000000003C5C6C "@"
 *   insn=0x00000000003C5C74 string=0x00000000003C5C78 "N"
 *   insn=0x00000000003C5C84 string=0x00000000003C5C88 "H\t"
 *   insn=0x00000000003C5C8C string=0x00000000003C5C90 ""
 *   insn=0x00000000003C5C90 string=0x00000000003C5C94 ""
 *   insn=0x00000000003C5C94 string=0x00000000003C5C98 "("
 *   insn=0x00000000003C5C9C string=0x00000000003C5CA0 " !"
 *   insn=0x00000000003C5CAC string=0x00000000003C5CB0 "#"
 *   insn=0x00000000003C5CC4 string=0x00000000003C5CC8 ""
 *   insn=0x00000000003C5CD4 string=0x00000000003C5CD8 "\t@"
 *   insn=0x00000000003C5CE4 string=0x00000000003C5CE8 ""
 *   insn=0x00000000003C5CF4 string=0x00000000003C5CF8 "@"
 *   insn=0x00000000003C5D00 string=0x00000000003C5D04 "+"
 *   insn=0x00000000003C5D14 string=0x00000000003C5D18 "("
 *   insn=0x00000000003C5D18 string=0x00000000003C5D1C ""
 *   insn=0x00000000003C5D1C string=0x00000000003C5D20 ""
 *   insn=0x00000000003C5D28 string=0x00000000003C5D2C " !"
 *   insn=0x00000000003C5D3C string=0x00000000003C5D40 "u"
 *   insn=0x00000000003C5D44 string=0x00000000003C5D48 ","
 *   insn=0x00000000003C5D48 string=0x00000000003C5DF8 "u"
 *   insn=0x00000000003C5D4C string=0x00000000003C5D50 "u"
 *   insn=0x00000000003C5D50 string=0x00000000003C5D54 "5"
 *   insn=0x00000000003C5D54 string=0x00000000003C5D58 "("
 *   insn=0x00000000003C5D68 string=0x00000000003C5D6C " "
 *   insn=0x00000000003C5D70 string=0x00000000003C5D74 ")=G"
 *   insn=0x00000000003C5D74 string=0x00000000003C5D78 "!"
 *   insn=0x00000000003C5D78 string=0x00000000003C5D7C "\t"
 *   insn=0x00000000003C5D7C string=0x00000000003C5D80 "\t"
 *   insn=0x00000000003C5D7C string=0x00000000003C5FBC "\t"
 *   insn=0x00000000003C5D80 string=0x00000000003C5D84 "*"
 *   insn=0x00000000003C5D84 string=0x00000000003C5D88 "\n"
 *   insn=0x00000000003C5D90 string=0x00000000003C5FC8 "?"
 *   insn=0x00000000003C5D98 string=0x00000000003C5D9C "\t"
 *   insn=0x00000000003C5D9C string=0x00000000003C5DA0 ")"
 *   insn=0x00000000003C5DA8 string=0x00000000003C5DAC "a"
 *   insn=0x00000000003C5DB0 string=0x00000000003C5DB4 "5"
 *   insn=0x00000000003C5DB8 string=0x00000000003C5DBC ""
 *   insn=0x00000000003C5DC8 string=0x00000000003C5DCC "\t@"
 *   insn=0x00000000003C5DD8 string=0x00000000003C5DDC ""
 *   insn=0x00000000003C5DE8 string=0x00000000003C5DEC "@"
 *   insn=0x00000000003C5E00 string=0x00000000003C5E5C "u"
 *   insn=0x00000000003C5E04 string=0x00000000003C5E08 "6"
 *   insn=0x00000000003C5E0C string=0x00000000003C5E10 ""
 *   insn=0x00000000003C5E1C string=0x00000000003C5E20 "\t@"
 *   insn=0x00000000003C5E2C string=0x00000000003C5E30 ""
 *   insn=0x00000000003C5E3C string=0x00000000003C5E40 "@"
 *   insn=0x00000000003C5E54 string=0x00000000003C5E58 "u"
 *   insn=0x00000000003C5E5C string=0x00000000003C5E68 "u"
 *   insn=0x00000000003C5E64 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003C5E68 string=0x00000000003C5E6C "5"
 *   insn=0x00000000003C5E6C string=0x00000000003C5EB0 "u"
 *   insn=0x00000000003C5E70 string=0x00000000003C5E74 ""
 *   insn=0x00000000003C5E80 string=0x00000000003C5E84 "\t@"
 *   insn=0x00000000003C5E90 string=0x00000000003C5E94 ""
 *   insn=0x00000000003C5EA0 string=0x00000000003C5EA4 "@"
 *   insn=0x00000000003C5EB0 string=0x00000000003C5EB4 "5"
 *   insn=0x00000000003C5EB4 string=0x00000000003C5EF8 "u"
 *   insn=0x00000000003C5EB8 string=0x00000000003C5EBC ""
 *   insn=0x00000000003C5EC8 string=0x00000000003C5ECC "\t@"
 *   insn=0x00000000003C5ED8 string=0x00000000003C5EDC ""
 *   insn=0x00000000003C5EE8 string=0x00000000003C5EEC "@"
 *   insn=0x00000000003C5EF8 string=0x00000000003C5EFC "5"
 *   insn=0x00000000003C5EFC string=0x00000000003C5F40 "u"
 *   insn=0x00000000003C5F00 string=0x00000000003C5F04 ""
 *   insn=0x00000000003C5F10 string=0x00000000003C5F14 "\t@"
 *   insn=0x00000000003C5F20 string=0x00000000003C5F24 ""
 *   insn=0x00000000003C5F30 string=0x00000000003C5F34 "@"
 *   insn=0x00000000003C5F40 string=0x00000000003C5F44 "5"
 *   insn=0x00000000003C5F48 string=0x00000000003C5F4C ""
 *   insn=0x00000000003C5F58 string=0x00000000003C5F5C "\t@"
 *   insn=0x00000000003C5F68 string=0x00000000003C5F6C ""
 *   insn=0x00000000003C5F78 string=0x00000000003C5F7C "@"
 *   insn=0x00000000003C5F90 string=0x00000000003C5F94 "L"
 *   insn=0x00000000003C5F98 string=0x00000000003C5F9C ")=G"
 *   insn=0x00000000003C5F9C string=0x00000000003C5FA0 "!"
 *   insn=0x00000000003C5FA4 string=0x00000000003C5FA8 "\t"
 *   insn=0x00000000003C5FA8 string=0x00000000003C5FAC "*"
 *   insn=0x00000000003C5FAC string=0x00000000003C5FB0 "\n"
 *   insn=0x00000000003C5FBC string=0x00000000003C5FC0 "*"
 *   insn=0x00000000003C5FC0 string=0x00000000003C5FC4 "\n"
 *   insn=0x00000000003C5FC8 string=0x00000000003C5FCC ","
 *   insn=0x00000000003C5FD4 string=0x00000000003C5FD8 "u"
 *   insn=0x00000000003C5FEC string=0x00000000003C5FF0 "h"
 *   insn=0x00000000003C5FF4 string=0x00000000003C5FF8 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ConfigureOverlayView::ConfigureOverlayView(Caver::GUIView **this)
{
  __int128 v2; // q0
  __int128 v3; // kr00_16
  Caver::GUIView *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x8
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x8
  void *v10; // x0
  int64x2_t v11; // q0
  __int64 (__fastcall **v12)(); // x8
  void (__fastcall *v13)(_BYTE *, _BYTE *, __int64); // x8
  Caver::GUIView *v14; // x0
  void (__fastcall *v15)(Caver::GUIView **, _BYTE *); // x8
  Caver::GUIView *v16; // x9
  _QWORD *v17; // x20
  __int64 v18; // x8
  __int64 v19; // x8
  __int128 v20; // kr10_16
  Caver::GUIView *v21; // x20
  __int64 v22; // x8
  __int64 v23; // x8
  _QWORD *v24; // x20
  __int64 v25; // x8
  __int64 v26; // x8
  void *v27; // x0
  int64x2_t v28; // q0
  __int64 (__fastcall **v29)(); // x8
  void (__fastcall *v30)(_BYTE *, _BYTE *, __int64); // x8
  Caver::GUIView *v31; // x0
  __int64 (__fastcall *v32)(Caver::GUIView **, _BYTE *); // x8
  Caver::GUIView *v33; // x9
  __int64 result; // x0
  _QWORD *v35; // x20
  __int64 v36; // x8
  __int64 v37; // x8
  unsigned int *v38; // x8
  int v39; // w9
  unsigned int *v40; // x8
  int v41; // w9
  _BYTE v42[24]; // [xsp+10h] [xbp-90h] BYREF
  Caver::ConfigureOverlayView *v43; // [xsp+28h] [xbp-78h]
  int64x2_t v44; // [xsp+40h] [xbp-60h] BYREF
  Caver::ConfigureOverlayView *v45; // [xsp+50h] [xbp-50h]
  __int64 v46; // [xsp+68h] [xbp-38h]

  v46 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIView::GUIView((Caver::GUIView *)this);
  *(_QWORD *)&v2 = &off_6CF4D8;
  *((_QWORD *)&v2 + 1) = &off_6CF4F0;
  *this = (Caver::GUIView *)off_6CF380;
  *((_OWORD *)this + 15) = v2;
  memset(this + 32, 0, 0x70u);
  sub_566BB8((int)&v44, "Done");
  Caver::GameInterfaceBuilder::FramedButtonWithTitle();
  v3 = *(_OWORD *)v42;
  if ( *(_QWORD *)&v42[8] )
    ++*(_QWORD *)(*(_QWORD *)&v42[8] + 8LL);
  v4 = this[34];
  *(_OWORD *)(this + 33) = v3;
  if ( v4 )
  {
    v5 = *((_QWORD *)v4 + 1) - 1LL;
    *((_QWORD *)v4 + 1) = v5;
    if ( !v5 )
    {
      (*(void (__fastcall **)(Caver::GUIView *))(*(_QWORD *)v4 + 16LL))(v4);
      v6 = *((_QWORD *)v4 + 2) - 1LL;
      *((_QWORD *)v4 + 2) = v6;
      if ( !v6 )
        (*(void (__fastcall **)(Caver::GUIView *))(*(_QWORD *)v4 + 24LL))(v4);
    }
  }
  v7 = *(_QWORD **)&v42[8];
  if ( *(_QWORD *)&v42[8] )
  {
    v8 = *(_QWORD *)(*(_QWORD *)&v42[8] + 8LL) - 1LL;
    *(_QWORD *)(*(_QWORD *)&v42[8] + 8LL) = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
  }
  v10 = (void *)(v44.n128_u64[0] - 24);
  if ( (__int64 *)(v44.n128_u64[0] - 24) != &qword_6FD2E0 )
  {
    v38 = (unsigned int *)(v44.n128_u64[0] - 8);
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
      operator delete(v10);
  }
  *(_QWORD *)v42 = 0;
  v11 = vdupq_n_s64(0);
  v45 = (Caver::ConfigureOverlayView *)this;
  v11.n128_u64[0] = (unsigned __int64)Caver::ConfigureOverlayView::ButtonPressed;
  v44 = v11;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v12 = 0;
  }
  else
  {
    v43 = v45;
    *(int64x2_t *)&v42[8] = v44;
    v12 = boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::ConfigureOverlayView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::ConfigureOverlayView*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::ConfigureOverlayView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::ConfigureOverlayView*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
  }
  *(_QWORD *)v42 = v12;
  Caver::GUIControl::AddTargetActionForControlEvent();
  if ( *(_QWORD *)v42 )
  {
    if ( (v42[0] & 1) == 0 )
    {
      v13 = *(void (__fastcall **)(_BYTE *, _BYTE *, __int64))(*(_QWORD *)v42 & 0xFFFFFFFFFFFFFFFELL);
      if ( v13 )
        v13(&v42[8], &v42[8], 2);
    }
    *(_QWORD *)v42 = 0;
  }
  v14 = this[33];
  *(_OWORD *)v42 = xmmword_58E250;
  Caver::GUIView::SetFrame(v14, (const Caver::Rectangle *)v42);
  v15 = (void (__fastcall *)(Caver::GUIView **, _BYTE *))*((_QWORD *)*this + 12);
  *(_QWORD *)v42 = this[33];
  v16 = this[34];
  *(_QWORD *)&v42[8] = v16;
  if ( v16 )
    ++*((_QWORD *)v16 + 1);
  v15(this, v42);
  v17 = *(_QWORD **)&v42[8];
  if ( *(_QWORD *)&v42[8] )
  {
    v18 = *(_QWORD *)(*(_QWORD *)&v42[8] + 8LL) - 1LL;
    *(_QWORD *)(*(_QWORD *)&v42[8] + 8LL) = v18;
    if ( !v18 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
      v19 = v17[2] - 1LL;
      v17[2] = v19;
      if ( !v19 )
        (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
    }
  }
  sub_566BB8((int)&v44, "Reset");
  Caver::GameInterfaceBuilder::FramedButtonWithTitle();
  v20 = *(_OWORD *)v42;
  if ( *(_QWORD *)&v42[8] )
    ++*(_QWORD *)(*(_QWORD *)&v42[8] + 8LL);
  v21 = this[36];
  *(_OWORD *)(this + 35) = v20;
  if ( v21 )
  {
    v22 = *((_QWORD *)v21 + 1) - 1LL;
    *((_QWORD *)v21 + 1) = v22;
    if ( !v22 )
    {
      (*(void (__fastcall **)(Caver::GUIView *))(*(_QWORD *)v21 + 16LL))(v21);
      v23 = *((_QWORD *)v21 + 2) - 1LL;
      *((_QWORD *)v21 + 2) = v23;
      if ( !v23 )
        (*(void (__fastcall **)(Caver::GUIView *))(*(_QWORD *)v21 + 24LL))(v21);
    }
  }
  v24 = *(_QWORD **)&v42[8];
  if ( *(_QWORD *)&v42[8] )
  {
    v25 = *(_QWORD *)(*(_QWORD *)&v42[8] + 8LL) - 1LL;
    *(_QWORD *)(*(_QWORD *)&v42[8] + 8LL) = v25;
    if ( !v25 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
      v26 = v24[2] - 1LL;
      v24[2] = v26;
      if ( !v26 )
        (*(void (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
    }
  }
  v27 = (void *)(v44.n128_u64[0] - 24);
  if ( (__int64 *)(v44.n128_u64[0] - 24) != &qword_6FD2E0 )
  {
    v40 = (unsigned int *)(v44.n128_u64[0] - 8);
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
      operator delete(v27);
  }
  v28 = vdupq_n_s64(0);
  v28.n128_u64[0] = (unsigned __int64)Caver::ConfigureOverlayView::ButtonPressed;
  *(_QWORD *)v42 = 0;
  v44 = v28;
  v45 = (Caver::ConfigureOverlayView *)this;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v29 = 0;
  }
  else
  {
    v43 = v45;
    *(int64x2_t *)&v42[8] = v44;
    v29 = boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::ConfigureOverlayView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::ConfigureOverlayView*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::ConfigureOverlayView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::ConfigureOverlayView*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
  }
  *(_QWORD *)v42 = v29;
  Caver::GUIControl::AddTargetActionForControlEvent();
  if ( *(_QWORD *)v42 )
  {
    if ( (v42[0] & 1) == 0 )
    {
      v30 = *(void (__fastcall **)(_BYTE *, _BYTE *, __int64))(*(_QWORD *)v42 & 0xFFFFFFFFFFFFFFFELL);
      if ( v30 )
        v30(&v42[8], &v42[8], 2);
    }
    *(_QWORD *)v42 = 0;
  }
  v31 = this[35];
  *(_OWORD *)v42 = xmmword_58E250;
  Caver::GUIView::SetFrame(v31, (const Caver::Rectangle *)v42);
  v32 = (__int64 (__fastcall *)(Caver::GUIView **, _BYTE *))*((_QWORD *)*this + 12);
  *(_QWORD *)v42 = this[35];
  v33 = this[36];
  *(_QWORD *)&v42[8] = v33;
  if ( v33 )
    ++*((_QWORD *)v33 + 1);
  result = v32(this, v42);
  v35 = *(_QWORD **)&v42[8];
  if ( *(_QWORD *)&v42[8] )
  {
    v36 = *(_QWORD *)(*(_QWORD *)&v42[8] + 8LL) - 1LL;
    *(_QWORD *)(*(_QWORD *)&v42[8] + 8LL) = v36;
    if ( !v36 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v35 + 16LL))(v35);
      v37 = v35[2] - 1LL;
      v35[2] = v37;
      if ( !v37 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v35 + 24LL))(v35);
    }
  }
  return result;
}


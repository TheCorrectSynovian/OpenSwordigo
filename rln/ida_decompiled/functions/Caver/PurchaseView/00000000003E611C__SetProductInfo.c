/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E611C
 * Mangled: _ZN5Caver12PurchaseView14SetProductInfoERKSsSt6vectorISsSaISsEES2_f
 * Demangled: Caver::PurchaseView::SetProductInfo(std::string const&,std::vector<std::string,std::allocator<std::string>>,std::string const&,float)
 *
 * Callers: 2
 *   0x00000000001F9B20  Caver::PurchaseView::SetProductInfo(std::string const&,std::vector<std::string,std::allocator<std::string>>,std::string const&,float)
 *   0x00000000003E4FB8  Caver::PurchaseView::PurchaseView(void)
 *
 * Callees: 21
 *   0x00000000001F36B0  std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUILabel>*,std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>>,boost::shared_ptr<Caver::GUILabel> const&)
 *   0x00000000001F3C90  Caver::Rectangle::RectangleByOutsetting(float)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F5CB0  Caver::GUIView::safeBounds(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B30  Caver::GUIButton::titleLabel(void)
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001F8CE0  Caver::GameInterfaceBuilder::NormalLabel(std::string const&,Caver::Color,Caver::Color)
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x00000000001FEC20  Caver::FontLibrary::sharedLibrary(void)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000201F70  Caver::GUIFrameView::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,bool)
 *   0x00000000002026D0  Caver::FontLibrary::SmallDefaultFont(void)
 *   0x0000000000203960  Caver::PurchaseView::UpdateBuyButtonSize(void)
 *   0x00000000002039B0  Caver::GUILabel::TextSize(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 210
 *   insn=0x00000000003E6140 string=0x00000000003E6144 "Y"
 *   insn=0x00000000003E6144 string=0x00000000003E6148 "("
 *   insn=0x00000000003E6158 string=0x00000000003E615C "wz@"
 *   insn=0x00000000003E6164 string=0x00000000003E6168 ""
 *   insn=0x00000000003E6168 string=0x00000000003E616C ")"
 *   insn=0x00000000003E617C string=0x00000000001F5190 "P'"
 *   insn=0x00000000003E6188 string=0x00000000003E618C "G"
 *   insn=0x00000000003E6194 string=0x00000000001F8510 "0'"
 *   insn=0x00000000003E6198 string=0x00000000003E619C "?"
 *   insn=0x00000000003E61A0 string=0x00000000003E61A4 "u"
 *   insn=0x00000000003E61A4 string=0x00000000003E61A8 "jP"
 *   insn=0x00000000003E61A8 string=0x00000000001FA350 "0'"
 *   insn=0x00000000003E61C4 string=0x00000000003E61C8 "jo"
 *   insn=0x00000000003E61D0 string=0x00000000003E61D4 "@"
 *   insn=0x00000000003E61D0 string=0x00000000003E61F0 "`"
 *   insn=0x00000000003E61D4 string=0x00000000003E61D8 ""
 *   insn=0x00000000003E61D8 string=0x00000000003E61DC ""
 *   insn=0x00000000003E61E0 string=0x00000000003E61E4 ""
 *   insn=0x00000000003E61E4 string=0x00000000003E61E8 ""
 *   insn=0x00000000003E61FC string=0x00000000003E6200 ""
 *   insn=0x00000000003E620C string=0x00000000003E6210 "@G"
 *   insn=0x00000000003E6224 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003E6228 string=0x00000000003E622C ""
 *   insn=0x00000000003E6234 string=0x00000000003E6248 "("
 *   insn=0x00000000003E623C string=0x00000000003E6240 ""
 *   insn=0x00000000003E6280 string=0x00000000003E6284 "i"
 *   insn=0x00000000003E6284 string=0x00000000003E6288 "|"
 *   insn=0x00000000003E62B0 string=0x00000000001F8CE0 "0'"
 *   insn=0x00000000003E62B4 string=0x00000000003E62B8 "Zb"
 *   insn=0x00000000003E62CC string=0x00000000003E62D0 "`"
 *   insn=0x00000000003E62D8 string=0x00000000003E62DC "*"
 *   insn=0x00000000003E62DC string=0x00000000003E62E0 "J"
 *   insn=0x00000000003E62E0 string=0x00000000003E62E4 "*"
 *   insn=0x00000000003E62EC string=0x00000000003E62F0 "8"
 *   insn=0x00000000003E62F0 string=0x00000000003E62F4 "@"
 *   insn=0x00000000003E62F4 string=0x00000000003E62F8 ""
 *   insn=0x00000000003E62F8 string=0x00000000003E62FC ""
 *   insn=0x00000000003E6300 string=0x00000000003E6304 ""
 *   insn=0x00000000003E6304 string=0x00000000003E6308 "\t@"
 *   insn=0x00000000003E6310 string=0x00000000003E6314 "@"
 *   insn=0x00000000003E6314 string=0x00000000003E6318 ""
 *   insn=0x00000000003E6318 string=0x00000000003E631C ""
 *   insn=0x00000000003E6320 string=0x00000000003E6324 ""
 *   insn=0x00000000003E6324 string=0x00000000003E6328 "@"
 *   insn=0x00000000003E6334 string=0x00000000003E6338 "vH"
 *   insn=0x00000000003E633C string=0x00000000003E6340 "7"
 *   insn=0x00000000003E6344 string=0x00000000003E6348 ""
 *   insn=0x00000000003E6354 string=0x00000000003E6358 "\t@"
 *   insn=0x00000000003E6364 string=0x00000000003E6368 ""
 *   insn=0x00000000003E6374 string=0x00000000003E6378 "@"
 *   insn=0x00000000003E6388 string=0x00000000003E638C "aH"
 *   insn=0x00000000003E638C string=0x00000000003E6390 "a"
 *   insn=0x00000000003E6390 string=0x00000000003E6394 "?"
 *   insn=0x00000000003E639C string=0x00000000003E63A0 "("
 *   insn=0x00000000003E63A4 string=0x00000000003E63A8 "("
 *   insn=0x00000000003E63AC string=0x00000000003E63B0 "\t"
 *   insn=0x00000000003E63AC string=0x00000000003E63BC "(@"
 *   insn=0x00000000003E63B0 string=0x00000000003E63B4 ")"
 *   insn=0x00000000003E63B4 string=0x00000000003E63B8 "\t"
 *   insn=0x00000000003E63BC string=0x00000000003E63C0 "h"
 *   insn=0x00000000003E63C4 string=0x00000000003E63D4 "h"
 *   insn=0x00000000003E63D0 string=0x00000000001F36B0 "P'"
 *   insn=0x00000000003E63D8 string=0x00000000003E63DC "1@"
 *   insn=0x00000000003E63E4 string=0x00000000003E63E8 "*"
 *   insn=0x00000000003E63E8 string=0x00000000003E63EC "J"
 *   insn=0x00000000003E63EC string=0x00000000003E63F0 "*"
 *   insn=0x00000000003E6400 string=0x00000000003E6404 "7"
 *   insn=0x00000000003E6408 string=0x00000000003E640C ""
 *   insn=0x00000000003E6418 string=0x00000000003E641C "\t@"
 *   insn=0x00000000003E6428 string=0x00000000003E642C ""
 *   insn=0x00000000003E6438 string=0x00000000003E643C "@"
 *   insn=0x00000000003E6448 string=0x00000000003E644C "7"
 *   insn=0x00000000003E6450 string=0x00000000003E6454 ""
 *   insn=0x00000000003E6464 string=0x00000000003E6468 "\t@"
 *   insn=0x00000000003E6470 string=0x00000000003E6474 ""
 *   insn=0x00000000003E6484 string=0x00000000003E6488 "@"
 *   insn=0x00000000003E6490 string=0x00000000003E6494 "{"
 *   insn=0x00000000003E6494 string=0x00000000003E6498 "Z#"
 *   insn=0x00000000003E6498 string=0x00000000003E649C ")"
 *   insn=0x00000000003E649C string=0x00000000003E64A0 ")"
 *   insn=0x00000000003E64A0 string=0x00000000003E64A4 "?"
 *   insn=0x00000000003E64A8 string=0x00000000003E64AC ">"
 *   insn=0x00000000003E64B0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003E64B8 string=0x00000000003E64BC ""
 *   insn=0x00000000003E64C0 string=0x00000000003E64C4 "A\n"
 *   insn=0x00000000003E64C8 string=0x00000000003E64CC ""
 *   insn=0x00000000003E64D4 string=0x00000000003E64D8 "M"
 *   insn=0x00000000003E64E0 string=0x00000000003E64E4 "H\t"
 *   insn=0x00000000003E64E4 string=0x00000000003E64E8 "\t\t@"
 *   insn=0x00000000003E64E8 string=0x00000000003E64EC ")"
 *   insn=0x00000000003E64EC string=0x00000000003E64F0 "\t\t"
 *   insn=0x00000000003E64F4 string=0x00000000003E64F8 "\t"
 *   insn=0x00000000003E64F8 string=0x00000000003E64FC ")"
 *   insn=0x00000000003E6500 string=0x00000000003E6504 " "
 *   insn=0x00000000003E6504 string=0x00000000003E6508 "A"
 *   insn=0x00000000003E651C string=0x00000000003E6520 ""
 *   insn=0x00000000003E6524 string=0x00000000003E6528 "a"
 *   insn=0x00000000003E652C string=0x00000000003E6530 "\t@"
 *   insn=0x00000000003E653C string=0x00000000003E6540 ""
 *   insn=0x00000000003E6544 string=0x00000000003E6548 "a"
 *   insn=0x00000000003E654C string=0x00000000003E6550 "@"
 *   insn=0x00000000003E6564 string=0x00000000003E6568 "t"
 *   insn=0x00000000003E656C string=0x00000000003E6570 ""
 *   insn=0x00000000003E657C string=0x00000000003E6580 "\t@"
 *   insn=0x00000000003E658C string=0x00000000003E6590 ""
 *   insn=0x00000000003E659C string=0x00000000003E65A0 "@"
 *   insn=0x00000000003E65C4 string=0x00000000003E65C8 "4"
 *   insn=0x00000000003E65CC string=0x00000000003E65D0 ""
 *   insn=0x00000000003E65DC string=0x00000000003E65E0 "\t@"
 *   insn=0x00000000003E65EC string=0x00000000003E65F0 ""
 *   insn=0x00000000003E65FC string=0x00000000003E6600 "@"
 *   insn=0x00000000003E6610 string=0x00000000003E6614 "N"
 *   insn=0x00000000003E663C string=0x00000000003E6640 "V"
 *   insn=0x00000000003E6650 string=0x00000000003E6654 "b"
 *   insn=0x00000000003E6650 string=0x00000000001F94B0 "0'"
 *   insn=0x00000000003E6654 string=0x00000000003E6658 "`"
 *   insn=0x00000000003E6658 string=0x00000000003E665C "t"
 *   insn=0x00000000003E665C string=0x00000000003E6660 ""
 *   insn=0x00000000003E6660 string=0x00000000003E6664 "B("
 *   insn=0x00000000003E666C string=0x00000000003E6670 "c("
 *   insn=0x00000000003E6670 string=0x00000000003E6674 "!(#"
 *   insn=0x00000000003E6680 string=0x00000000003E6684 "!(""
 *   insn=0x00000000003E6684 string=0x00000000003E6688 "\t@&"
 *   insn=0x00000000003E668C string=0x00000000003E6690 " 9#"
 *   insn=0x00000000003E6690 string=0x00000000003E6694 "!8""
 *   insn=0x00000000003E66A4 string=0x00000000001FDA30 "0'"
 *   insn=0x00000000003E66BC string=0x00000000003E66C0 "c"
 *   insn=0x00000000003E66C0 string=0x00000000003E66C4 "b"
 *   insn=0x00000000003E66C4 string=0x00000000003E66C8 "`z@"
 *   insn=0x00000000003E66C8 string=0x00000000003E66CC "d"
 *   insn=0x00000000003E66CC string=0x00000000003E66D0 "h"
 *   insn=0x00000000003E66D0 string=0x00000000003E66D4 "A(!"
 *   insn=0x00000000003E66D8 string=0x00000000003E66DC "!(""
 *   insn=0x00000000003E66E0 string=0x00000000003E66E4 "x@"
 *   insn=0x00000000003E66E4 string=0x00000000003E66E8 "\t"
 *   insn=0x00000000003E66F0 string=0x00000000003E66F4 "c($"
 *   insn=0x00000000003E66F4 string=0x00000000003E66F8 "$"
 *   insn=0x00000000003E66F8 string=0x00000000003E66FC " ) "
 *   insn=0x00000000003E66FC string=0x00000000003E6700 "\t@G"
 *   insn=0x00000000003E6700 string=0x00000000003E6704 "I@"
 *   insn=0x00000000003E6704 string=0x00000000003E6708 "\t@&"
 *   insn=0x00000000003E6708 string=0x00000000003E670C " 8)"
 *   insn=0x00000000003E670C string=0x00000000003E6710 "\nX""
 *   insn=0x00000000003E6710 string=0x00000000003E6714 "`($"
 *   insn=0x00000000003E6718 string=0x00000000003E671C "@&"
 *   insn=0x00000000003E672C string=0x00000000003E6730 "`z@"
 *   insn=0x00000000003E6738 string=0x00000000003E673C "|@"
 *   insn=0x00000000003E673C string=0x00000000003E6740 "k9 "
 *   insn=0x00000000003E6750 string=0x00000000003E6754 "h&P"
 *   insn=0x00000000003E6754 string=0x00000000003E6758 "?"
 *   insn=0x00000000003E6758 string=0x00000000003E675C "a\n"
 *   insn=0x00000000003E6764 string=0x00000000003E6768 "t"
 *   insn=0x00000000003E6768 string=0x00000000003E676C "@\t("
 *   insn=0x00000000003E6770 string=0x00000000003E6774 " ) "
 *   insn=0x00000000003E6778 string=0x00000000003E677C "a)!"
 *   insn=0x00000000003E6784 string=0x00000000003E6788 "B("
 *   insn=0x00000000003E6788 string=0x00000000003E678C "!8#"
 *   insn=0x00000000003E67AC string=0x00000000003E67B0 "pR"
 *   insn=0x00000000003E67B0 string=0x00000000003E67B4 "t"
 *   insn=0x00000000003E67B4 string=0x00000000003E67B8 ""
 *   insn=0x00000000003E67C4 string=0x00000000003E67C8 "25"
 *   insn=0x00000000003E67C8 string=0x00000000001F3C90 "P'"
 *   insn=0x00000000003E67D8 string=0x00000000003E67DC "t"
 *   insn=0x00000000003E67DC string=0x00000000003E67E0 "4="
 *   insn=0x00000000003E67E0 string=0x00000000003E67E4 "h"
 *   insn=0x00000000003E67E0 string=0x00000000001F5CB0 "P'"
 *   insn=0x00000000003E67EC string=0x00000000003E67F0 "\t"
 *   insn=0x00000000003E6804 string=0x00000000003E6808 "\n8""
 *   insn=0x00000000003E6808 string=0x00000000003E680C ")="
 *   insn=0x00000000003E680C string=0x00000000003E6810 "h"
 *   insn=0x00000000003E6834 string=0x00000000003E6838 "~\"
 *   insn=0x00000000003E684C string=0x00000000003E6850 "HR"
 *   insn=0x00000000003E6850 string=0x00000000003E6854 "s"
 *   insn=0x00000000003E685C string=0x00000000003E6860 "`"
 *   insn=0x00000000003E6860 string=0x00000000003E6864 "5"
 *   insn=0x00000000003E6868 string=0x00000000003E686C "`B"
 *   insn=0x00000000003E6878 string=0x00000000003E687C "!\t"
 *   insn=0x00000000003E687C string=0x00000000003E69A0 "L>"
 *   insn=0x00000000003E68B4 string=0x00000000003E68B8 ""
 *   insn=0x00000000003E68C4 string=0x00000000003E68C8 ""
 *   insn=0x00000000003E68E4 string=0x00000000003E68E8 ""R"
 *   insn=0x00000000003E68F0 string=0x00000000003E68F4 "/t"
 *   insn=0x00000000003E6920 string=0x00000000003E6924 "k9!"
 *   insn=0x00000000003E6938 string=0x00000000003E693C "R"
 *   insn=0x00000000003E693C string=0x00000000003E6940 "4"
 *   insn=0x00000000003E6940 string=0x00000000003E6984 "h&P"
 *   insn=0x00000000003E6944 string=0x00000000003E6948 ""
 *   insn=0x00000000003E6958 string=0x00000000003E695C "\t@"
 *   insn=0x00000000003E6964 string=0x00000000003E6968 ""
 *   insn=0x00000000003E6978 string=0x00000000003E697C "@"
 *   insn=0x00000000003E698C string=0x00000000003E6990 ")"
 *   insn=0x00000000003E6998 string=0x00000000003E699C "q"
 *   insn=0x00000000003E69BC string=0x00000000003E69C0 "4"
 *   insn=0x00000000003E69C4 string=0x00000000003E69C8 ""
 *   insn=0x00000000003E69D4 string=0x00000000003E69D8 "\t@"
 *   insn=0x00000000003E69E4 string=0x00000000003E69E8 ""
 *   insn=0x00000000003E69F4 string=0x00000000003E69F8 "@"
 *   insn=0x00000000003E6A08 string=0x00000000003E6A0C "P"
 *   insn=0x00000000003E6A24 string=0x00000000003E6A28 "U"
 *   insn=0x00000000003E6A38 string=0x00000000003E6A3C "t"
 *   insn=0x00000000003E6A4C string=0x00000000003E6A50 ")"
 *   insn=0x00000000003E6A50 string=0x00000000003E6A54 "7@"
 *   insn=0x00000000003E6A54 string=0x00000000001F6B30 "0'"
 *   insn=0x00000000003E6A5C string=0x00000000003E6A60 "i"
 *   insn=0x00000000003E6A64 string=0x00000000003E6A68 ""
 *   insn=0x00000000003E6A70 string=0x00000000003E6A74 ")"
 *   insn=0x00000000003E6A98 string=0x00000000003E6A9C "s"
 *   insn=0x00000000003E6AA4 string=0x00000000003E6AA8 "`"
 *   insn=0x00000000003E6AAC string=0x00000000003E6AB0 " "
 *   insn=0x00000000003E6AB8 string=0x00000000003E6ABC "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PurchaseView::SetProductInfo(_QWORD *a1, const void **a2, _QWORD *a3, float a4)
{
  Caver::GUILabel *v6; // x23
  _QWORD *v7; // x0
  _QWORD *v8; // x1
  __int64 updated; // x0
  Caver::GUILabel *v10; // x0
  int v11; // w8
  __int64 v12; // x0
  __int64 v13; // x20
  unsigned __int64 v14; // d0
  __int64 result; // x0
  int v16; // w8
  __int64 v17; // x26
  unsigned __int64 v18; // x27
  Caver::GUILabel *v19; // x23
  Caver::FontLibrary *v20; // x0
  Caver::FontLibrary *v21; // x0
  Caver::GUILabel *v22; // x8
  Caver::GUILabel *v23; // x9
  _QWORD *v24; // x24
  __int64 v25; // x8
  __int64 v26; // x8
  Caver::GUILabel *v27; // x23
  __int64 v28; // x8
  __int64 v29; // x8
  Caver::GUILabel *v30; // x0
  Caver::GUILabel **v31; // x1
  Caver::GUILabel *v32; // x8
  __int64 (__fastcall *v33)(_QWORD *, Caver::GUILabel **); // x8
  Caver::GUILabel *v34; // x23
  __int64 v35; // x8
  __int64 v36; // x8
  Caver::GUILabel *v37; // x23
  __int64 v38; // x8
  __int64 v39; // x8
  Caver::GUILabel *v41; // [xsp+168h] [xbp-88h] BYREF
  Caver::GUILabel *v42; // [xsp+170h] [xbp-80h]
  int v43; // [xsp+178h] [xbp-78h]
  int v44; // [xsp+180h] [xbp-70h]
  Caver::GUILabel *v45; // [xsp+188h] [xbp-68h] BYREF
  Caver::GUILabel *v46; // [xsp+190h] [xbp-60h]
  __int64 v47; // [xsp+198h] [xbp-58h]

  v47 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = (Caver::GUILabel *)a1[30];
  v7 = *a2;
  v8 = (_QWORD *)*((_QWORD *)v6 + 32);
  if ( *(v7 - 3) != *(v8 - 3) || (updated = memcmp(v7, v8, *(v7 - 3)), (_DWORD)updated) )
  {
    sub_56A6A8((char *)v6 + 256);
    updated = Caver::GUILabel::UpdateText(v6);
  }
  if ( a3[1] != *a3 )
  {
    v17 = 0;
    v18 = 0;
    do
    {
      v44 = -441723163;
      v43 = -16777216;
      Caver::GameInterfaceBuilder::NormalLabel();
      v19 = v45;
      v21 = (Caver::FontLibrary *)Caver::FontLibrary::sharedLibrary(v20);
      Caver::FontLibrary::SmallDefaultFont(v21);
      v22 = v41;
      if ( v41 != *((Caver::GUILabel **)v19 + 30) )
      {
        v23 = v42;
        if ( v42 )
          ++*((_QWORD *)v42 + 1);
        v24 = (_QWORD *)*((_QWORD *)v19 + 31);
        *((_QWORD *)v19 + 30) = v22;
        *((_QWORD *)v19 + 31) = v23;
        if ( v24 )
        {
          v25 = v24[1] - 1LL;
          v24[1] = v25;
          if ( !v25 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
            v26 = v24[2] - 1LL;
            v24[2] = v26;
            if ( !v26 )
              (*(void (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
          }
        }
        Caver::GUILabel::UpdateText(v19);
      }
      v27 = v42;
      if ( v42 )
      {
        v28 = *((_QWORD *)v42 + 1) - 1LL;
        *((_QWORD *)v42 + 1) = v28;
        if ( !v28 )
        {
          (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v27 + 16LL))(v27);
          v29 = *((_QWORD *)v27 + 2) - 1LL;
          *((_QWORD *)v27 + 2) = v29;
          if ( !v29 )
            (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v27 + 24LL))(v27);
        }
      }
      v30 = v45;
      *((_BYTE *)v45 + 312) = 1;
      Caver::GUILabel::UpdateText(v30);
      v31 = (Caver::GUILabel **)a1[33];
      if ( v31 == (Caver::GUILabel **)a1[34] )
      {
        std::vector<boost::shared_ptr<Caver::GUILabel>>::_M_insert_aux();
      }
      else
      {
        *v31 = v45;
        v32 = v46;
        v31[1] = v46;
        if ( v32 )
          ++*((_QWORD *)v32 + 1);
        a1[33] = v31 + 2;
      }
      v33 = *(__int64 (__fastcall **)(_QWORD *, Caver::GUILabel **))(*a1 + 96LL);
      v41 = v45;
      v42 = v46;
      if ( v46 )
        ++*((_QWORD *)v46 + 1);
      updated = v33(a1, &v41);
      v34 = v42;
      if ( v42 )
      {
        v35 = *((_QWORD *)v42 + 1) - 1LL;
        *((_QWORD *)v42 + 1) = v35;
        if ( !v35 )
        {
          updated = (*(__int64 (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v34 + 16LL))(v34);
          v36 = *((_QWORD *)v34 + 2) - 1LL;
          *((_QWORD *)v34 + 2) = v36;
          if ( !v36 )
            updated = (*(__int64 (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v34 + 24LL))(v34);
        }
      }
      v37 = v46;
      if ( v46 )
      {
        v38 = *((_QWORD *)v46 + 1) - 1LL;
        *((_QWORD *)v46 + 1) = v38;
        if ( !v38 )
        {
          updated = (*(__int64 (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v37 + 16LL))(v37);
          v39 = *((_QWORD *)v37 + 2) - 1LL;
          *((_QWORD *)v37 + 2) = v39;
          if ( !v39 )
            updated = (*(__int64 (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v37 + 24LL))(v37);
        }
      }
      ++v18;
      v17 += 8;
    }
    while ( (__int64)(a3[1] - *a3) >> 3 > v18 );
  }
  Caver::TextureLibrary::sharedLibrary((Caver::TextureLibrary *)updated);
  Caver::TextureLibrary::TextureForName();
  Caver::GUIFrameView::SetFrameTexture();
  v10 = v45;
  if ( v45 )
  {
    v11 = *((_DWORD *)v45 + 2) - 1;
    *((_DWORD *)v45 + 2) = v11;
    if ( !v11 )
      (*(void (__fastcall **)(Caver::GUILabel *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  v12 = a1[35];
  v13 = *(_QWORD *)(v12 + 256);
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  v14 = vmul_n_f32(*(float32x2_t *)(v13 + 84), a4).n64_u64[0];
  v45 = *(Caver::GUILabel **)(v12 + 116);
  v46 = (Caver::GUILabel *)v14;
  result = Caver::GUIView::SetFrame((Caver::GUIView *)v12, (const Caver::Rectangle *)&v45);
  v16 = *(_DWORD *)(v13 + 8) - 1;
  *(_DWORD *)(v13 + 8) = v16;
  if ( !v16 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  return result;
}


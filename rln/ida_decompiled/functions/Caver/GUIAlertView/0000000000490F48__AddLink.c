/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000490F48
 * Mangled: _ZN5Caver12GUIAlertView7AddLinkERKSs
 * Demangled: Caver::GUIAlertView::AddLink(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F9CC0  Caver::GUIAlertView::AddLink(std::string const&)
 *
 * Callees: 28
 *   0x00000000001F3EE0  std::vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUIButton>*,std::vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>>,boost::shared_ptr<Caver::GUIButton> const&)
 *   0x00000000001F5420  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>(Caver::GUIFrameView *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B30  Caver::GUIButton::titleLabel(void)
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7430  Caver::GUIFrameView::GUIFrameView(void)
 *   0x00000000001F7610  Caver::GUIAlertView::UpdateLayout(void)
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001F8F40  boost::shared_ptr<Caver::GUIButton>::shared_ptr<Caver::GUIButton>(Caver::GUIButton *)
 *   0x00000000001F9BE0  Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FB6B0  std::vector<boost::shared_ptr<Caver::GUIView>,std::allocator<boost::shared_ptr<Caver::GUIView>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUIView>*,std::vector<boost::shared_ptr<Caver::GUIView>,std::allocator<boost::shared_ptr<Caver::GUIView>>>>,boost::shared_ptr<Caver::GUIView> const&)
 *   0x00000000001FC220  Caver::GUIButton::SetTitle(std::string const&)
 *   0x00000000001FEAD0  Caver::GUIButton::GUIButton(Caver::GUIButtonType)
 *   0x00000000001FEC30  Caver::GUIFrameView::SetFrameColor(Caver::Color const&)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000201F70  Caver::GUIFrameView::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,bool)
 *   0x00000000002039B0  Caver::GUILabel::TextSize(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000490A78  Caver::GUIAlertView::AddTextField(boost::shared_ptr<Caver::GUITextField> const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 226
 *   insn=0x0000000000490F60 string=0x0000000000490F64 "W"
 *   insn=0x0000000000490F6C string=0x0000000000490F70 "i"
 *   insn=0x0000000000490F84 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000490F9C string=0x00000000001F8F40 "0'"
 *   insn=0x0000000000490FA4 string=0x00000000001F6B30 "0'"
 *   insn=0x0000000000490FA8 string=0x0000000000490FAC "i"
 *   insn=0x0000000000490FB0 string=0x0000000000490FB4 "(y@"
 *   insn=0x0000000000490FB8 string=0x0000000000490FBC "`"
 *   insn=0x0000000000490FBC string=0x0000000000490FC0 ")}@"
 *   insn=0x0000000000490FC4 string=0x0000000000490FC8 "*"
 *   insn=0x0000000000490FC8 string=0x0000000000490FCC "J"
 *   insn=0x0000000000490FCC string=0x0000000000490FD0 "*"
 *   insn=0x0000000000490FD8 string=0x0000000000490FDC "6"
 *   insn=0x0000000000490FE0 string=0x0000000000490FE4 ""
 *   insn=0x0000000000490FF0 string=0x0000000000490FF4 "\t@"
 *   insn=0x0000000000491000 string=0x0000000000491004 ""
 *   insn=0x0000000000491010 string=0x0000000000491014 "@"
 *   insn=0x0000000000491020 string=0x0000000000491024 ";"
 *   insn=0x0000000000491024 string=0x00000000001F8510 "0'"
 *   insn=0x0000000000491048 string=0x000000000049104C "A"
 *   insn=0x000000000049105C string=0x0000000000491060 "_"
 *   insn=0x0000000000491068 string=0x000000000049106C "?"
 *   insn=0x000000000049106C string=0x0000000000491070 "@"
 *   insn=0x0000000000491074 string=0x0000000000491078 "h"
 *   insn=0x0000000000491078 string=0x000000000049107C "H"
 *   insn=0x000000000049107C string=0x0000000000491080 "("
 *   insn=0x0000000000491088 string=0x000000000049108C "6"
 *   insn=0x0000000000491090 string=0x0000000000491094 ""
 *   insn=0x00000000004910A0 string=0x00000000004910A4 "\t@"
 *   insn=0x00000000004910B0 string=0x00000000004910B4 ""
 *   insn=0x00000000004910C0 string=0x00000000004910C4 "@"
 *   insn=0x00000000004910E0 string=0x00000000004910E4 " "
 *   insn=0x00000000004910E8 string=0x00000000004910EC ""
 *   insn=0x00000000004910EC string=0x00000000004910F0 ""
 *   insn=0x00000000004910F4 string=0x00000000004910F8 "\t"
 *   insn=0x0000000000491108 string=0x000000000049110C "E"
 *   insn=0x000000000049110C string=0x00000000001FC220 "0'"
 *   insn=0x0000000000491114 string=0x0000000000584965 "click"
 *   insn=0x000000000049112C string=0x0000000000491130 "^e"
 *   insn=0x0000000000491144 string=0x0000000000491148 "a"
 *   insn=0x0000000000491150 string=0x0000000000491154 "w"
 *   insn=0x000000000049115C string=0x0000000000491160 "("
 *   insn=0x0000000000491184 string=0x00000000001FB170 "0'"
 *   insn=0x0000000000491198 string=0x00000000001F7430 "0'"
 *   insn=0x00000000004911A4 string=0x00000000001F5420 "P'"
 *   insn=0x00000000004911A8 string=0x00000000004911AC "i"
 *   insn=0x00000000004911AC string=0x00000000001FA350 "0'"
 *   insn=0x00000000004911B4 string=0x0000000000590918 "white"
 *   insn=0x00000000004911C0 string=0x00000000004911C4 "}V"
 *   insn=0x00000000004911E4 string=0x00000000004911E8 "b"
 *   insn=0x00000000004911F0 string=0x00000000004911F4 "@"
 *   insn=0x00000000004911F4 string=0x00000000004911F8 ""
 *   insn=0x00000000004911F8 string=0x00000000004911FC ""
 *   insn=0x0000000000491200 string=0x0000000000491204 ""
 *   insn=0x0000000000491204 string=0x0000000000491208 ""
 *   insn=0x0000000000491230 string=0x0000000000491234 "\tAH"
 *   insn=0x0000000000491238 string=0x000000000049123C ""
 *   insn=0x0000000000491254 string=0x0000000000491258 ""
 *   insn=0x0000000000491258 string=0x000000000049125C "1@"
 *   insn=0x0000000000491264 string=0x0000000000491268 "*"
 *   insn=0x0000000000491268 string=0x000000000049126C "J"
 *   insn=0x000000000049126C string=0x0000000000491270 "*"
 *   insn=0x000000000049127C string=0x0000000000491280 "4"
 *   insn=0x0000000000491280 string=0x00000000004912C4 "h"
 *   insn=0x0000000000491284 string=0x0000000000491288 ""
 *   insn=0x0000000000491294 string=0x0000000000491298 "\t@"
 *   insn=0x00000000004912A4 string=0x00000000004912A8 ""
 *   insn=0x00000000004912B4 string=0x00000000004912B8 "@"
 *   insn=0x00000000004912C8 string=0x00000000004912CC "1@"
 *   insn=0x00000000004912D4 string=0x00000000004912D8 "*"
 *   insn=0x00000000004912D8 string=0x00000000004912DC "J"
 *   insn=0x00000000004912DC string=0x00000000004912E0 "*"
 *   insn=0x00000000004912F0 string=0x00000000004912F4 "4"
 *   insn=0x00000000004912F4 string=0x0000000000491338 "vRW"
 *   insn=0x00000000004912F8 string=0x00000000004912FC ""
 *   insn=0x0000000000491308 string=0x000000000049130C "\t@"
 *   insn=0x0000000000491318 string=0x000000000049131C ""
 *   insn=0x0000000000491328 string=0x000000000049132C "@"
 *   insn=0x0000000000491338 string=0x000000000049133C "h"
 *   insn=0x000000000049133C string=0x0000000000491340 "x"
 *   insn=0x0000000000491348 string=0x0000000000491378 "`"
 *   insn=0x000000000049135C string=0x0000000000491360 "\t"
 *   insn=0x0000000000491360 string=0x0000000000491364 ")"
 *   insn=0x0000000000491364 string=0x0000000000491368 "\t"
 *   insn=0x000000000049136C string=0x0000000000491370 "h"
 *   insn=0x0000000000491384 string=0x00000000001F3EE0 "P'"
 *   insn=0x0000000000491390 string=0x0000000000491394 "!E"
 *   insn=0x00000000004913AC string=0x00000000004913B0 "`"
 *   insn=0x00000000004913AC string=0x00000000001F6B70 "0'"
 *   insn=0x00000000004913B4 string=0x00000000004913B8 ""
 *   insn=0x00000000004913CC string=0x00000000004913D0 ""
 *   insn=0x00000000004913E8 string=0x00000000001F9BE0 "0'"
 *   insn=0x00000000004913EC string=0x00000000004913F0 "h"
 *   insn=0x00000000004913F0 string=0x00000000004913F4 "("
 *   insn=0x00000000004913F4 string=0x00000000004913F8 ""
 *   insn=0x00000000004913F8 string=0x00000000004913FC ""
 *   insn=0x0000000000491404 string=0x0000000000491408 " !"
 *   insn=0x000000000049141C string=0x0000000000491420 "|"
 *   insn=0x0000000000491420 string=0x00000000001F7610 "0'"
 *   insn=0x0000000000491424 string=0x0000000000491428 "3"
 *   insn=0x0000000000491428 string=0x000000000049142C "h"
 *   insn=0x000000000049142C string=0x0000000000491430 ""
 *   insn=0x0000000000491430 string=0x0000000000491434 "h"
 *   insn=0x0000000000491438 string=0x000000000049143C "h"
 *   insn=0x000000000049143C string=0x0000000000491440 "\t@"
 *   insn=0x0000000000491448 string=0x000000000049144C "h\n@"
 *   insn=0x000000000049144C string=0x0000000000491450 ""
 *   insn=0x0000000000491450 string=0x0000000000491454 "h\n"
 *   insn=0x0000000000491458 string=0x000000000049145C "h"
 *   insn=0x000000000049145C string=0x0000000000491460 "@"
 *   insn=0x000000000049146C string=0x0000000000491470 "3"
 *   insn=0x0000000000491470 string=0x0000000000491474 "h"
 *   insn=0x0000000000491474 string=0x0000000000491478 ""
 *   insn=0x0000000000491478 string=0x000000000049147C "h"
 *   insn=0x0000000000491480 string=0x0000000000491484 "h"
 *   insn=0x0000000000491488 string=0x000000000049148C "\t@"
 *   insn=0x0000000000491490 string=0x0000000000491494 "h\n@"
 *   insn=0x0000000000491494 string=0x0000000000491498 ""
 *   insn=0x0000000000491498 string=0x000000000049149C "h\n"
 *   insn=0x00000000004914A0 string=0x00000000004914A4 "h"
 *   insn=0x00000000004914A8 string=0x00000000004914AC "@"
 *   insn=0x00000000004914C0 string=0x00000000004914C4 "("
 *   insn=0x00000000004914C0 string=0x000000000049157C "U"
 *   insn=0x00000000004914DC string=0x00000000004914E0 ""
 *   insn=0x00000000004914E0 string=0x00000000004914E4 ")"
 *   insn=0x00000000004914E4 string=0x00000000004914E8 " "
 *   insn=0x00000000004914F4 string=0x00000000004914F8 ")=G"
 *   insn=0x00000000004914F8 string=0x00000000004914FC "!"
 *   insn=0x0000000000491500 string=0x0000000000491504 "\t"
 *   insn=0x0000000000491500 string=0x000000000049153C "\t"
 *   insn=0x0000000000491504 string=0x0000000000491508 "*"
 *   insn=0x0000000000491508 string=0x000000000049150C "\n"
 *   insn=0x0000000000491510 string=0x0000000000491514 ""
 *   insn=0x0000000000491514 string=0x0000000000491548 "?"
 *   insn=0x0000000000491518 string=0x000000000049151C ")=G"
 *   insn=0x000000000049151C string=0x0000000000491520 "!"
 *   insn=0x0000000000491524 string=0x0000000000491528 "\t"
 *   insn=0x0000000000491524 string=0x000000000049155C "\t"
 *   insn=0x0000000000491528 string=0x000000000049152C "*"
 *   insn=0x000000000049152C string=0x0000000000491530 "\n"
 *   insn=0x0000000000491538 string=0x0000000000491568 "?"
 *   insn=0x000000000049153C string=0x0000000000491540 "*"
 *   insn=0x0000000000491540 string=0x0000000000491544 "\n"
 *   insn=0x000000000049155C string=0x0000000000491560 "*"
 *   insn=0x0000000000491560 string=0x0000000000491564 "\n"
 *   insn=0x0000000000491574 string=0x0000000000491578 "*"
 *   insn=0x000000000049157C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000491594 string=0x0000000000491598 "("
 *   insn=0x0000000000491598 string=0x000000000049159C ""
 *   insn=0x000000000049159C string=0x00000000004915A0 ""
 *   insn=0x00000000004915A8 string=0x00000000004915AC " !"
 *   insn=0x00000000004915C0 string=0x00000000004915C4 "T"
 *   insn=0x00000000004915D8 string=0x00000000004915DC ""
 *   insn=0x00000000004915E8 string=0x00000000004915EC "\t@"
 *   insn=0x00000000004915F8 string=0x00000000004915FC ""
 *   insn=0x0000000000491608 string=0x000000000049160C "@"
 *   insn=0x0000000000491614 string=0x0000000000491618 "k"
 *   insn=0x0000000000491628 string=0x000000000049162C ""
 *   insn=0x0000000000491638 string=0x000000000049163C "\t@"
 *   insn=0x0000000000491648 string=0x000000000049164C ""
 *   insn=0x0000000000491658 string=0x000000000049165C "@"
 *   insn=0x0000000000491664 string=0x0000000000491668 "W"
 *   insn=0x0000000000491678 string=0x000000000049167C ""
 *   insn=0x000000000049167C string=0x0000000000491680 "\t\t@"
 *   insn=0x0000000000491680 string=0x0000000000491684 ")"
 *   insn=0x0000000000491684 string=0x0000000000491688 "\t\t"
 *   insn=0x000000000049168C string=0x0000000000491690 "\t"
 *   insn=0x0000000000491690 string=0x0000000000491694 ")"
 *   insn=0x0000000000491698 string=0x000000000049169C " "
 *   insn=0x000000000049169C string=0x00000000004916A0 "/"
 *   insn=0x00000000004916B4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004916BC string=0x00000000004916C0 "l"
 *   insn=0x00000000004916CC string=0x00000000004916D0 "J"
 *   insn=0x00000000004916D4 string=0x00000000004916D8 "(a"
 *   insn=0x00000000004916DC string=0x00000000004916E0 "@\n"
 *   insn=0x00000000004916E4 string=0x00000000004916E8 "J=G"
 *   insn=0x00000000004916E8 string=0x00000000004916EC ")!"
 *   insn=0x00000000004916F0 string=0x00000000004916F4 "*"
 *   insn=0x00000000004916F0 string=0x0000000000491724 "*"
 *   insn=0x00000000004916F4 string=0x00000000004916F8 "K"
 *   insn=0x00000000004916F8 string=0x00000000004916FC "+"
 *   insn=0x0000000000491700 string=0x0000000000491704 "_"
 *   insn=0x0000000000491710 string=0x0000000000491714 "$c"
 *   insn=0x000000000049171C string=0x0000000000491720 "T"
 *   insn=0x0000000000491724 string=0x0000000000491728 "K"
 *   insn=0x0000000000491728 string=0x000000000049172C "+"
 *   insn=0x000000000049172C string=0x0000000000491730 "_"
 *   insn=0x0000000000491734 string=0x0000000000491738 "<"
 *   insn=0x0000000000491750 string=0x0000000000491754 "\"
 *   insn=0x000000000049176C string=0x0000000000491770 ")=G"
 *   insn=0x0000000000491770 string=0x0000000000491774 "!"
 *   insn=0x0000000000491778 string=0x000000000049177C "\t"
 *   insn=0x0000000000491778 string=0x00000000004917A8 "\t"
 *   insn=0x000000000049177C string=0x0000000000491780 "*"
 *   insn=0x0000000000491780 string=0x0000000000491784 "\n"
 *   insn=0x0000000000491788 string=0x000000000049178C "?"
 *   insn=0x000000000049179C string=0x00000000004917A0 "t"
 *   insn=0x00000000004917A0 string=0x00000000004917A4 "!"
 *   insn=0x00000000004917A8 string=0x00000000004917AC "*"
 *   insn=0x00000000004917AC string=0x00000000004917B0 "\n"
 *   insn=0x00000000004917B0 string=0x00000000004917B4 "?"
 *   insn=0x00000000004917CC string=0x00000000004917D0 ""
 *   insn=0x00000000004917DC string=0x00000000004917E0 "\t@"
 *   insn=0x00000000004917EC string=0x00000000004917F0 ""
 *   insn=0x00000000004917FC string=0x0000000000491800 "@"
 *   insn=0x0000000000491808 string=0x000000000049180C ""
 *   insn=0x0000000000491828 string=0x000000000049182C "4"
 *   insn=0x0000000000491830 string=0x0000000000491834 ""
 *   insn=0x0000000000491840 string=0x0000000000491844 "\t@"
 *   insn=0x0000000000491850 string=0x0000000000491854 ""
 *   insn=0x0000000000491860 string=0x0000000000491864 "@"
 *   insn=0x0000000000491888 string=0x000000000049188C "h"
 *   insn=0x0000000000491890 string=0x0000000000491894 "1@"
 *   insn=0x0000000000491898 string=0x000000000049189C "a"Y"
 *   insn=0x000000000049189C string=0x00000000004918A0 "?"
 *   insn=0x00000000004918A4 string=0x00000000004918D4 "`""
 *   insn=0x00000000004918A8 string=0x00000000004918AC "("
 *   insn=0x00000000004918B0 string=0x00000000004918B4 "("
 *   insn=0x00000000004918B8 string=0x00000000004918BC "\t"
 *   insn=0x00000000004918B8 string=0x00000000004918C8 "(@"
 *   insn=0x00000000004918BC string=0x00000000004918C0 ")"
 *   insn=0x00000000004918C0 string=0x00000000004918C4 "\t"
 *   insn=0x00000000004918C8 string=0x00000000004918CC "h"
 *   insn=0x00000000004918D8 string=0x00000000004918DC "u"
 *   insn=0x00000000004918DC string=0x00000000001FB6B0 "0'"
 *   insn=0x00000000004918E8 string=0x00000000004918EC "I"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIAlertView::AddLink(Caver::GUIAlertView *a1)
{
  Caver::GUILabel *v2; // x0
  Caver::GUILabel *v3; // x21
  __int64 v4; // x9
  __int64 v5; // x8
  __int64 v6; // x9
  _QWORD *v7; // x22
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x0
  Caver::GUILabel *v11; // x21
  _QWORD *v12; // x22
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x0
  Caver::GUIButton *v16; // x20
  char *v17; // x0
  Caver::GUIButton *v18; // x20
  Caver::GUILabel *v19; // x0
  Caver::GUIFrameView *v20; // x0
  Caver::TextureLibrary *v21; // x0
  Caver::GUIView *v22; // x0
  int v23; // w8
  void *v24; // x0
  void (*v25)(void); // x8
  _QWORD *v26; // x20
  __int64 v27; // x8
  __int64 v28; // x8
  void (__fastcall *v29)(Caver::GUIAlertView *, Caver::GUIView **); // x8
  _QWORD *v30; // x20
  __int64 v31; // x8
  __int64 v32; // x8
  Caver::GUIButton **v33; // x20
  __int64 v34; // x22
  __int64 v35; // x24
  __int64 v36; // x25
  Caver::GUIButton *v37; // x8
  int64x2_t v38; // q0
  __int64 (__fastcall **v39)(); // x8
  void (__fastcall *v40)(int64x2_t *, int64x2_t *, __int64); // x8
  _QWORD *v41; // x19
  __int64 v42; // x8
  __int64 v43; // x8
  Caver::GUIButton *v44; // x19
  __int64 v45; // x8
  __int64 v46; // x8
  unsigned int *v48; // x8
  int v49; // w9
  unsigned int *v50; // x8
  int v51; // w9
  Caver::GUIView *v52; // [xsp+28h] [xbp-C8h] BYREF
  int64x2_t v53; // [xsp+30h] [xbp-C0h] BYREF
  Caver::GUIAlertView *v54; // [xsp+40h] [xbp-B0h]
  __int64 v55; // [xsp+48h] [xbp-A8h] BYREF
  int v56; // [xsp+50h] [xbp-A0h]
  int v57; // [xsp+54h] [xbp-9Ch]
  Caver::GUIView *v58; // [xsp+60h] [xbp-90h]
  _QWORD *v59; // [xsp+68h] [xbp-88h]
  float32x2_t v60; // [xsp+70h] [xbp-80h] BYREF
  Caver::GUIButton *v61; // [xsp+78h] [xbp-78h]
  Caver::GUIButton *v62; // [xsp+80h] [xbp-70h]
  int v63; // [xsp+88h] [xbp-68h] BYREF
  int64x2_t v64; // [xsp+90h] [xbp-60h] BYREF
  Caver::GUIAlertView *v65; // [xsp+A0h] [xbp-50h]
  __int64 v66; // [xsp+A8h] [xbp-48h]

  v66 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v63 = -14156;
  operator new(0x1D0u);
  Caver::GUIButton::GUIButton();
  boost::shared_ptr<Caver::GUIButton>::shared_ptr<Caver::GUIButton>();
  Caver::GUIButton::titleLabel(v61);
  v3 = v2;
  v4 = *((_QWORD *)a1 + 38);
  v5 = *(_QWORD *)(v4 + 240);
  if ( v5 != *((_QWORD *)v2 + 30) )
  {
    v6 = *(_QWORD *)(v4 + 248);
    if ( v6 )
      ++*(_QWORD *)(v6 + 8);
    v7 = (_QWORD *)*((_QWORD *)v2 + 31);
    *((_QWORD *)v2 + 30) = v5;
    *((_QWORD *)v2 + 31) = v6;
    if ( v7 )
    {
      v8 = v7[1] - 1LL;
      v7[1] = v8;
      if ( !v8 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
        v9 = v7[2] - 1LL;
        v7[2] = v9;
        if ( !v9 )
          (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
      }
    }
    Caver::GUILabel::UpdateText(v3);
  }
  Caver::GUIButton::titleLabel(v61);
  v11 = (Caver::GUILabel *)v10;
  if ( (unsigned __int8)v63 != *(unsigned __int8 *)(v10 + 264)
    || __PAIR64__(BYTE2(v63), BYTE1(v63)) != __PAIR64__(
                                               *(unsigned __int8 *)(v10 + 266),
                                               *(unsigned __int8 *)(v10 + 265))
    || HIBYTE(v63) != *(unsigned __int8 *)(v10 + 267) )
  {
    v12 = *(_QWORD **)(v10 + 280);
    *(_DWORD *)(v10 + 264) = (unsigned __int8)v63
                           | (unsigned __int16)(BYTE1(v63) << 8)
                           | (BYTE2(v63) << 16) & 0xFFFFFF
                           | (HIBYTE(v63) << 24);
    *(_QWORD *)(v10 + 272) = 0;
    *(_QWORD *)(v10 + 280) = 0;
    if ( v12 )
    {
      v13 = v12[1] - 1LL;
      v12[1] = v13;
      if ( !v13 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
        v14 = v12[2] - 1LL;
        v12[2] = v14;
        if ( !v14 )
          (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
      }
    }
    Caver::GUILabel::UpdateText(v11);
  }
  Caver::GUIButton::titleLabel(v61);
  *(_BYTE *)(v15 + 320) = 1;
  *(_DWORD *)(v15 + 321) = -16777216;
  *(_QWORD *)(v15 + 328) = 0xBF80000000000000LL;
  Caver::GUILabel::UpdateText((Caver::GUILabel *)v15);
  Caver::GUIButton::SetTitle(v61);
  v16 = v61;
  sub_566BB8((int)&v52, "click");
  sub_56A6A8((char *)v16 + 448);
  v17 = (char *)v52 - 24;
  if ( (__int64 *)((char *)v52 - 24) != &qword_6FD2E0 )
  {
    v48 = (unsigned int *)((char *)v52 - 8);
    if ( &pthread_create )
    {
      do
        v49 = __ldaxr(v48);
      while ( __stlxr(v49 - 1, v48) );
    }
    else
    {
      v49 = (*v48)--;
    }
    if ( v49 <= 0 )
      operator delete(v17);
  }
  v18 = v61;
  Caver::GUIButton::titleLabel(v61);
  Caver::GUILabel::TextSize((__int64 *)&v60, v19);
  v52 = *(Caver::GUIView **)((char *)v18 + 116);
  v53.n128_u64[0] = vadd_f32(v60, (float32x2_t)0x4000000000000000LL).n64_u64[0];
  Caver::GUIView::SetFrame(v18, (const Caver::Rectangle *)&v52);
  v20 = (Caver::GUIFrameView *)operator new(0x110u);
  Caver::GUIFrameView::GUIFrameView(v20);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>();
  Caver::TextureLibrary::sharedLibrary(v21);
  sub_566BB8((int)&v64, "white");
  Caver::TextureLibrary::TextureForName();
  Caver::GUIFrameView::SetFrameTexture();
  v22 = v52;
  if ( v52 )
  {
    v23 = *((_DWORD *)v52 + 2) - 1;
    *((_DWORD *)v52 + 2) = v23;
    if ( !v23 )
      (*(void (__fastcall **)(Caver::GUIView *))(*(_QWORD *)v22 + 8LL))(v22);
  }
  v24 = (void *)(v64.n128_u64[0] - 24);
  if ( (__int64 *)(v64.n128_u64[0] - 24) != &qword_6FD2E0 )
  {
    v50 = (unsigned int *)(v64.n128_u64[0] - 8);
    if ( &pthread_create )
    {
      do
        v51 = __ldaxr(v50);
      while ( __stlxr(v51 - 1, v50) );
    }
    else
    {
      v51 = (*v50)--;
    }
    if ( v51 <= 0 )
      operator delete(v24);
  }
  Caver::GUIFrameView::SetFrameColor(v58, (const Caver::Color *)&v63);
  v55 = *(_QWORD *)((char *)v61 + 132);
  v56 = *((_DWORD *)v61 + 35);
  v57 = 1056964608;
  Caver::GUIView::SetFrame(v58, (const Caver::Rectangle *)&v55);
  v25 = *(void (**)(void))(*(_QWORD *)v61 + 96LL);
  v52 = v58;
  v53.n128_u64[0] = (unsigned __int64)v59;
  if ( v59 )
    ++v59[1];
  v25();
  v26 = (_QWORD *)v53.n128_u64[0];
  if ( v53.n128_u64[0] )
  {
    v27 = *(_QWORD *)(v53.n128_u64[0] + 8) - 1LL;
    *(_QWORD *)(v53.n128_u64[0] + 8) = v27;
    if ( !v27 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
      v28 = v26[2] - 1LL;
      v26[2] = v28;
      if ( !v28 )
        (*(void (__fastcall **)(_QWORD *))(*v26 + 24LL))(v26);
    }
  }
  v29 = *(void (__fastcall **)(Caver::GUIAlertView *, Caver::GUIView **))(*(_QWORD *)a1 + 96LL);
  v52 = v61;
  v53.n128_u64[0] = (unsigned __int64)v62;
  if ( v62 )
    ++*((_QWORD *)v62 + 1);
  v29(a1, &v52);
  v30 = (_QWORD *)v53.n128_u64[0];
  if ( v53.n128_u64[0] )
  {
    v31 = *(_QWORD *)(v53.n128_u64[0] + 8) - 1LL;
    *(_QWORD *)(v53.n128_u64[0] + 8) = v31;
    if ( !v31 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v30 + 16LL))(v30);
      v32 = v30[2] - 1LL;
      v30[2] = v32;
      if ( !v32 )
        (*(void (__fastcall **)(_QWORD *))(*v30 + 24LL))(v30);
    }
  }
  v34 = *((_QWORD *)a1 + 46);
  v33 = (Caver::GUIButton **)*((_QWORD *)a1 + 47);
  v35 = *((_QWORD *)a1 + 43);
  v36 = *((_QWORD *)a1 + 44);
  if ( *((Caver::GUIButton ***)a1 + 48) == v33 )
  {
    std::vector<boost::shared_ptr<Caver::GUIButton>>::_M_insert_aux();
  }
  else
  {
    *v33 = v61;
    v37 = v62;
    v33[1] = v62;
    if ( v37 )
      ++*((_QWORD *)v37 + 1);
    *((_QWORD *)a1 + 47) = v33 + 2;
  }
  v52 = 0;
  v38 = vdupq_n_s64(0);
  v65 = a1;
  v38.n128_u64[0] = (unsigned __int64)&Caver::GUIAlertView::ButtonPressed;
  v64 = v38;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v39 = 0;
  }
  else
  {
    v54 = v65;
    v53 = v64;
    v39 = boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::GUIAlertView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::GUIAlertView*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::GUIAlertView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::GUIAlertView*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
  }
  v52 = (Caver::GUIView *)v39;
  Caver::GUIControl::AddTargetActionForControlEvent();
  if ( v52 )
  {
    if ( ((unsigned __int8)v52 & 1) == 0 )
    {
      v40 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFFELL);
      if ( v40 )
        v40(&v53, &v53, 2);
    }
    v52 = 0;
  }
  Caver::GUIAlertView::UpdateLayout(a1);
  v41 = v59;
  if ( v59 )
  {
    v42 = v59[1] - 1LL;
    v59[1] = v42;
    if ( !v42 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v41 + 16LL))(v41);
      v43 = v41[2] - 1LL;
      v41[2] = v43;
      if ( !v43 )
        (*(void (__fastcall **)(_QWORD *))(*v41 + 24LL))(v41);
    }
  }
  v44 = v62;
  if ( v62 )
  {
    v45 = *((_QWORD *)v62 + 1) - 1LL;
    *((_QWORD *)v62 + 1) = v45;
    if ( !v45 )
    {
      (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v44 + 16LL))(v44);
      v46 = *((_QWORD *)v44 + 2) - 1LL;
      *((_QWORD *)v44 + 2) = v46;
      if ( !v46 )
        (*(void (__fastcall **)(Caver::GUIButton *))(*(_QWORD *)v44 + 24LL))(v44);
    }
  }
  return (unsigned int)(((unsigned __int64)v33 - v34) >> 4) + (unsigned int)((unsigned __int64)(v36 - v35) >> 4);
}


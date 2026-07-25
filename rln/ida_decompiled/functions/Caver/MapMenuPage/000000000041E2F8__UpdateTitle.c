/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041E2F8
 * Mangled: _ZN5Caver11MapMenuPage11UpdateTitleEv
 * Demangled: Caver::MapMenuPage::UpdateTitle(void)
 *
 * Callers: 1
 *   0x00000000001FD030  Caver::MapMenuPage::UpdateTitle(void)
 *
 * Callees: 24
 *   0x00000000001F35B0  Caver::GUILabel::ClearText(void)
 *   0x00000000001F5840  Caver::GUILabel::UpdateBounds(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6F20  Caver::GUIScrollView::ScrollRectToVisible(Caver::Rectangle const&,bool)
 *   0x00000000001F7060  Caver::StripeView::SetTitle(std::string const&)
 *   0x00000000001F8B90  Caver::StripeView::SetTitleHorizOffset(float)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FCAA0  Caver::MapNode::Title(void)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x00000000001FF000  Caver::GUILabel::AddText(std::string const&,boost::shared_ptr<Caver::GradientColor> const&)
 *   0x00000000001FF420  Caver::GUILabel::AddText(std::string const&,Caver::Color)
 *   0x00000000001FFB20  Caver::GameInterfaceBuilder::TextGradient(float,float,float,float)
 *   0x00000000002003B0  Caver::GUIView::ConvertRectFromView(Caver::Rectangle const&,Caver::GUIView*)
 *   0x0000000000200F70  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x0000000000567614  sub_567614
 *   0x00000000005677D4  sub_5677D4
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 389
 *   insn=0x000000000041E310 string=0x000000000041E314 "W"
 *   insn=0x000000000041E320 string=0x000000000041E324 "h"
 *   insn=0x000000000041E324 string=0x000000000041E328 "\t"
 *   insn=0x000000000041E328 string=0x000000000041E32C "I"
 *   insn=0x000000000041E32C string=0x000000000041E330 "\t"
 *   insn=0x000000000041E330 string=0x000000000041E334 ""
 *   insn=0x000000000041E334 string=0x000000000041E338 "u"
 *   insn=0x000000000041E338 string=0x000000000041E33C ")"
 *   insn=0x000000000041E360 string=0x000000000041E364 "?c"
 *   insn=0x000000000041E364 string=0x00000000001F7060 "0'"
 *   insn=0x000000000041E368 string=0x000000000041E36C "6"
 *   insn=0x000000000041E378 string=0x000000000041E37C "!"
 *   insn=0x000000000041E37C string=0x000000000041E380 "h"
 *   insn=0x000000000041E37C string=0x000000000041E440 ")"
 *   insn=0x000000000041E388 string=0x000000000041E38C "h"
 *   insn=0x000000000041E388 string=0x00000000001F35B0 "P'"
 *   insn=0x000000000041E39C string=0x000000000041E3A0 ""
 *   insn=0x000000000041E39C string=0x00000000001FCAA0 "0'"
 *   insn=0x000000000041E3B0 string=0x000000000041E3B4 ""
 *   insn=0x000000000041E3C4 string=0x000000000041E3C8 "w@9(\t"
 *   insn=0x000000000041E3C4 string=0x000000000041E464 ")"
 *   insn=0x000000000041E3C8 string=0x000000000041E3CC "(\t"
 *   insn=0x000000000041E3CC string=0x000000000041E3D0 "h"
 *   insn=0x000000000041E3CC string=0x000000000041E4F0 "#@"
 *   insn=0x000000000041E3D8 string=0x0000000000594738 " (Quest Location)"
 *   insn=0x000000000041E3E8 string=0x000000000041E3EC ""
 *   insn=0x000000000041E3FC string=0x000000000041E400 ""
 *   insn=0x000000000041E410 string=0x000000000041E488 ")"
 *   insn=0x000000000041E440 string=0x000000000041E444 ")=G"
 *   insn=0x000000000041E444 string=0x000000000041E448 "!"
 *   insn=0x000000000041E448 string=0x000000000041E44C "\t"
 *   insn=0x000000000041E44C string=0x000000000041E450 "\t"
 *   insn=0x000000000041E44C string=0x000000000041E4AC "\t"
 *   insn=0x000000000041E450 string=0x000000000041E454 "*"
 *   insn=0x000000000041E454 string=0x000000000041E458 "\n"
 *   insn=0x000000000041E460 string=0x000000000041E4B8 "?"
 *   insn=0x000000000041E464 string=0x000000000041E468 ")=G"
 *   insn=0x000000000041E468 string=0x000000000041E46C "!"
 *   insn=0x000000000041E470 string=0x000000000041E474 "\t"
 *   insn=0x000000000041E470 string=0x000000000041E4CC "\t"
 *   insn=0x000000000041E474 string=0x000000000041E478 "*"
 *   insn=0x000000000041E478 string=0x000000000041E47C "\n"
 *   insn=0x000000000041E484 string=0x000000000041E4D8 "?"
 *   insn=0x000000000041E488 string=0x000000000041E48C ")=G"
 *   insn=0x000000000041E48C string=0x000000000041E490 "!"
 *   insn=0x000000000041E490 string=0x000000000041E494 "\t"
 *   insn=0x000000000041E494 string=0x000000000041E498 "\t"
 *   insn=0x000000000041E494 string=0x000000000041E714 "\t"
 *   insn=0x000000000041E498 string=0x000000000041E49C "*"
 *   insn=0x000000000041E49C string=0x000000000041E4A0 "\n"
 *   insn=0x000000000041E4A8 string=0x000000000041E720 "?"
 *   insn=0x000000000041E4AC string=0x000000000041E4B0 "*"
 *   insn=0x000000000041E4B0 string=0x000000000041E4B4 "\n"
 *   insn=0x000000000041E4B8 string=0x000000000041E4BC ","
 *   insn=0x000000000041E4CC string=0x000000000041E4D0 "*"
 *   insn=0x000000000041E4D0 string=0x000000000041E4D4 "\n"
 *   insn=0x000000000041E4D8 string=0x000000000041E4DC "l"
 *   insn=0x000000000041E4E4 string=0x000000000041E4E8 "w@9("
 *   insn=0x000000000041E4E8 string=0x000000000041E4EC "("
 *   insn=0x000000000041E500 string=0x000000000041E504 "H"
 *   insn=0x000000000041E504 string=0x000000000041E508 "I"
 *   insn=0x000000000041E508 string=0x0000000000587828 "33s?"
 *   insn=0x000000000041E514 string=0x000000000041E518 "")H"
 *   insn=0x000000000041E524 string=0x000000000041E528 "h"
 *   insn=0x000000000041E530 string=0x000000000059474A " (Treasures: "
 *   insn=0x000000000041E560 string=0x000000000041E564 "h"
 *   insn=0x000000000041E560 string=0x000000000041E734 ")"
 *   insn=0x000000000041E56C string=0x000000000041E570 "5Q"
 *   insn=0x000000000041E574 string=0x000000000041E578 "_"
 *   insn=0x000000000041E578 string=0x000000000041E57C "@W"
 *   insn=0x000000000041E588 string=0x000000000041E58C "y"
 *   insn=0x000000000041E594 string=0x000000000041E5A4 """
 *   insn=0x000000000041E598 string=0x000000000041E59C "\t"
 *   insn=0x000000000041E5C8 string=0x000000000059091E " of "
 *   insn=0x000000000041E5E4 string=0x000000000041E5E8 "?"
 *   insn=0x000000000041E5E8 string=0x000000000041E5EC " W"
 *   insn=0x000000000041E5F0 string=0x000000000041E5F4 "_"
 *   insn=0x000000000041E600 string=0x000000000041E604 "\t"
 *   insn=0x000000000041E644 string=0x000000000041E648 "n"
 *   insn=0x000000000041E658 string=0x000000000041E758 ")"
 *   insn=0x000000000041E668 string=0x000000000041E77C ")"
 *   insn=0x000000000041E674 string=0x000000000041E678 "A\t"
 *   insn=0x000000000041E678 string=0x000000000041E7A0 ")"
 *   insn=0x000000000041E688 string=0x000000000041E68C "h"
 *   insn=0x000000000041E688 string=0x000000000041E7C4 ")"
 *   insn=0x000000000041E694 string=0x00000000005933DB ")"
 *   insn=0x000000000041E6A0 string=0x000000000041E6A4 "E!"
 *   insn=0x000000000041E6B0 string=0x000000000041E6B4 "S"
 *   insn=0x000000000041E6C0 string=0x000000000041E6C4 "!\t"
 *   insn=0x000000000041E6C4 string=0x000000000041E7E8 ")"
 *   insn=0x000000000041E6C8 string=0x000000000041E6CC "S"
 *   insn=0x000000000041E6CC string=0x000000000041E6D0 "h"
 *   insn=0x000000000041E6D0 string=0x000000000041E6D4 ""
 *   insn=0x000000000041E6D4 string=0x000000000041E6D8 "h"
 *   insn=0x000000000041E6DC string=0x000000000041E6E0 "h"
 *   insn=0x000000000041E6E4 string=0x000000000041E6E8 "\t@"
 *   insn=0x000000000041E6EC string=0x000000000041E6F0 "h\n@"
 *   insn=0x000000000041E6F0 string=0x000000000041E6F4 ""
 *   insn=0x000000000041E6F4 string=0x000000000041E6F8 "h\n"
 *   insn=0x000000000041E6FC string=0x000000000041E700 "h"
 *   insn=0x000000000041E704 string=0x000000000041E708 "@"
 *   insn=0x000000000041E70C string=0x000000000041E710 "A"
 *   insn=0x000000000041E714 string=0x000000000041E718 "*"
 *   insn=0x000000000041E718 string=0x000000000041E71C "\n"
 *   insn=0x000000000041E72C string=0x000000000041E730 "9"
 *   insn=0x000000000041E734 string=0x000000000041E738 ")=G"
 *   insn=0x000000000041E738 string=0x000000000041E73C "!"
 *   insn=0x000000000041E73C string=0x000000000041E740 "i"
 *   insn=0x000000000041E740 string=0x000000000041E744 "\t"
 *   insn=0x000000000041E740 string=0x000000000041E80C "\t"
 *   insn=0x000000000041E744 string=0x000000000041E748 "*"
 *   insn=0x000000000041E748 string=0x000000000041E74C "\n"
 *   insn=0x000000000041E750 string=0x000000000041E754 "1"
 *   insn=0x000000000041E754 string=0x000000000041E818 "?"
 *   insn=0x000000000041E758 string=0x000000000041E75C ")=G"
 *   insn=0x000000000041E75C string=0x000000000041E760 "!"
 *   insn=0x000000000041E760 string=0x000000000041E764 "I"
 *   insn=0x000000000041E764 string=0x000000000041E768 "\t"
 *   insn=0x000000000041E764 string=0x000000000041E82C "\t"
 *   insn=0x000000000041E768 string=0x000000000041E76C "*"
 *   insn=0x000000000041E76C string=0x000000000041E770 "\n"
 *   insn=0x000000000041E774 string=0x000000000041E778 "0"
 *   insn=0x000000000041E778 string=0x000000000041E838 "?"
 *   insn=0x000000000041E77C string=0x000000000041E780 ")=G"
 *   insn=0x000000000041E780 string=0x000000000041E784 "!"
 *   insn=0x000000000041E784 string=0x000000000041E788 ")"
 *   insn=0x000000000041E788 string=0x000000000041E78C "\t"
 *   insn=0x000000000041E788 string=0x000000000041E84C "\t"
 *   insn=0x000000000041E78C string=0x000000000041E790 "*"
 *   insn=0x000000000041E790 string=0x000000000041E794 "\n"
 *   insn=0x000000000041E798 string=0x000000000041E79C "/"
 *   insn=0x000000000041E79C string=0x000000000041E858 "?"
 *   insn=0x000000000041E7A0 string=0x000000000041E7A4 ")=G"
 *   insn=0x000000000041E7A4 string=0x000000000041E7A8 "!"
 *   insn=0x000000000041E7A8 string=0x000000000041E7AC "\t"
 *   insn=0x000000000041E7AC string=0x000000000041E7B0 "\t"
 *   insn=0x000000000041E7AC string=0x000000000041E86C "\t"
 *   insn=0x000000000041E7B0 string=0x000000000041E7B4 "*"
 *   insn=0x000000000041E7B4 string=0x000000000041E7B8 "\n"
 *   insn=0x000000000041E7BC string=0x000000000041E7C0 "."
 *   insn=0x000000000041E7C0 string=0x000000000041E878 "?"
 *   insn=0x000000000041E7C4 string=0x000000000041E7C8 ")=G"
 *   insn=0x000000000041E7C8 string=0x000000000041E7CC "!"
 *   insn=0x000000000041E7D0 string=0x000000000041E7D4 "\t"
 *   insn=0x000000000041E7D0 string=0x000000000041E88C "\t"
 *   insn=0x000000000041E7D4 string=0x000000000041E7D8 "*"
 *   insn=0x000000000041E7D8 string=0x000000000041E7DC "\n"
 *   insn=0x000000000041E7E0 string=0x000000000041E7E4 "-"
 *   insn=0x000000000041E7E4 string=0x000000000041E898 "?"
 *   insn=0x000000000041E7E8 string=0x000000000041E7EC ")=G"
 *   insn=0x000000000041E7EC string=0x000000000041E7F0 "!"
 *   insn=0x000000000041E7F4 string=0x000000000041E7F8 "\t"
 *   insn=0x000000000041E7F4 string=0x000000000041E8AC "\t"
 *   insn=0x000000000041E7F8 string=0x000000000041E7FC "*"
 *   insn=0x000000000041E7FC string=0x000000000041E800 "\n"
 *   insn=0x000000000041E804 string=0x000000000041E808 ","
 *   insn=0x000000000041E808 string=0x000000000041E8B8 "?"
 *   insn=0x000000000041E80C string=0x000000000041E810 "*"
 *   insn=0x000000000041E810 string=0x000000000041E814 "\n"
 *   insn=0x000000000041E818 string=0x000000000041E81C "L"
 *   insn=0x000000000041E824 string=0x000000000041E828 "O"
 *   insn=0x000000000041E82C string=0x000000000041E830 "*"
 *   insn=0x000000000041E830 string=0x000000000041E834 "\n"
 *   insn=0x000000000041E84C string=0x000000000041E850 "*"
 *   insn=0x000000000041E850 string=0x000000000041E854 "\n"
 *   insn=0x000000000041E86C string=0x000000000041E870 "*"
 *   insn=0x000000000041E870 string=0x000000000041E874 "\n"
 *   insn=0x000000000041E884 string=0x000000000041E888 "}"
 *   insn=0x000000000041E88C string=0x000000000041E890 "*"
 *   insn=0x000000000041E890 string=0x000000000041E894 "\n"
 *   insn=0x000000000041E8A4 string=0x000000000041E8A8 "y"
 *   insn=0x000000000041E8AC string=0x000000000041E8B0 "*"
 *   insn=0x000000000041E8B0 string=0x000000000041E8B4 "\n"
 *   insn=0x000000000041E8B8 string=0x000000000041E8BC "l"
 *   insn=0x000000000041E8C8 string=0x000000000041E8CC "3"
 *   insn=0x000000000041E8D4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000041E8DC string=0x000000000041E8E0 "(a"
 *   insn=0x000000000041E8E8 string=0x000000000041E8EC "*"
 *   insn=0x000000000041E8EC string=0x000000000041E8F0 "J=G"
 *   insn=0x000000000041E8F0 string=0x000000000041E8F4 ")!"
 *   insn=0x000000000041E8F4 string=0x000000000041E8F8 "J"
 *   insn=0x000000000041E8F8 string=0x000000000041E8FC "*"
 *   insn=0x000000000041E8F8 string=0x000000000041EAA0 "*"
 *   insn=0x000000000041E8FC string=0x000000000041E900 "K"
 *   insn=0x000000000041E900 string=0x000000000041E904 "+"
 *   insn=0x000000000041E908 string=0x000000000041E90C "a"
 *   insn=0x000000000041E90C string=0x000000000041EA90 "_"
 *   insn=0x000000000041E918 string=0x000000000041E91C "(a"
 *   insn=0x000000000041E920 string=0x000000000041E924 "@"
 *   insn=0x000000000041E924 string=0x000000000041E928 "*"
 *   insn=0x000000000041E928 string=0x000000000041E92C "J=G"
 *   insn=0x000000000041E92C string=0x000000000041E930 ")!"
 *   insn=0x000000000041E934 string=0x000000000041E938 "*"
 *   insn=0x000000000041E934 string=0x000000000041E984 "*"
 *   insn=0x000000000041E938 string=0x000000000041E93C "K"
 *   insn=0x000000000041E93C string=0x000000000041E940 "+"
 *   insn=0x000000000041E948 string=0x000000000041E990 "_"
 *   insn=0x000000000041E950 string=0x000000000041E954 "(a"
 *   insn=0x000000000041E95C string=0x000000000041E960 "*"
 *   insn=0x000000000041E960 string=0x000000000041E964 "J=G"
 *   insn=0x000000000041E964 string=0x000000000041E968 ")!"
 *   insn=0x000000000041E96C string=0x000000000041E970 "*"
 *   insn=0x000000000041E970 string=0x000000000041E974 "K"
 *   insn=0x000000000041E974 string=0x000000000041E978 "+"
 *   insn=0x000000000041E984 string=0x000000000041E988 "K"
 *   insn=0x000000000041E988 string=0x000000000041E98C "+"
 *   insn=0x000000000041E9B4 string=0x000000000041E9B8 " \t"
 *   insn=0x000000000041E9B8 string=0x000000000041E9BC ")"
 *   insn=0x000000000041E9BC string=0x000000000041E9C0 ")=G"
 *   insn=0x000000000041E9C0 string=0x000000000041E9C4 "!"
 *   insn=0x000000000041E9C8 string=0x000000000041E9CC "\t"
 *   insn=0x000000000041E9C8 string=0x000000000041E9E0 "\t"
 *   insn=0x000000000041E9CC string=0x000000000041E9D0 "*"
 *   insn=0x000000000041E9D0 string=0x000000000041E9D4 "\n"
 *   insn=0x000000000041E9DC string=0x000000000041E9EC "?"
 *   insn=0x000000000041E9E0 string=0x000000000041E9E4 "*"
 *   insn=0x000000000041E9E4 string=0x000000000041E9E8 "\n"
 *   insn=0x000000000041E9EC string=0x000000000041E9F0 "l"
 *   insn=0x000000000041E9F4 string=0x000000000041E9F8 "n"
 *   insn=0x000000000041EA00 string=0x000000000041EA04 "(a"
 *   insn=0x000000000041EA0C string=0x000000000041EA10 "*"
 *   insn=0x000000000041EA10 string=0x000000000041EA14 "J=G"
 *   insn=0x000000000041EA14 string=0x000000000041EA18 ")!"
 *   insn=0x000000000041EA1C string=0x000000000041EA20 "*"
 *   insn=0x000000000041EA1C string=0x000000000041EA34 "*"
 *   insn=0x000000000041EA20 string=0x000000000041EA24 "K"
 *   insn=0x000000000041EA24 string=0x000000000041EA28 "+"
 *   insn=0x000000000041EA30 string=0x000000000041EA40 "_"
 *   insn=0x000000000041EA34 string=0x000000000041EA38 "K"
 *   insn=0x000000000041EA38 string=0x000000000041EA3C "+"
 *   insn=0x000000000041EA40 string=0x000000000041EA44 "L"
 *   insn=0x000000000041EA4C string=0x000000000041EA50 "F"
 *   insn=0x000000000041EA54 string=0x000000000041EA58 "%"
 *   insn=0x000000000041EA60 string=0x000000000041EA64 "(a"
 *   insn=0x000000000041EA68 string=0x000000000041EA6C "`"
 *   insn=0x000000000041EA6C string=0x000000000041EA70 "*"
 *   insn=0x000000000041EA70 string=0x000000000041EA74 "J=G"
 *   insn=0x000000000041EA74 string=0x000000000041EA78 ")!"
 *   insn=0x000000000041EA78 string=0x000000000041EA7C "*"
 *   insn=0x000000000041EA7C string=0x000000000041EA80 "*"
 *   insn=0x000000000041EA80 string=0x000000000041EA84 "K"
 *   insn=0x000000000041EA84 string=0x000000000041EA88 "+"
 *   insn=0x000000000041EA90 string=0x000000000041EA94 ","
 *   insn=0x000000000041EA98 string=0x000000000041EA9C "]"
 *   insn=0x000000000041EAA0 string=0x000000000041EAA4 "K"
 *   insn=0x000000000041EAA4 string=0x000000000041EAA8 "+"
 *   insn=0x000000000041EAA8 string=0x000000000041EAAC "_"
 *   insn=0x000000000041EAAC string=0x000000000041EAB0 "M"
 *   insn=0x000000000041EAB0 string=0x000000000041EAB4 "Y"
 *   insn=0x000000000041EACC string=0x000000000041EAD0 "(a"
 *   insn=0x000000000041EAD8 string=0x000000000041EB70 "*"
 *   insn=0x000000000041EAE4 string=0x000000000041EAE8 "!"
 *   insn=0x000000000041EAE8 string=0x000000000041EB2C ")"
 *   insn=0x000000000041EAF8 string=0x000000000041EAFC ")"
 *   insn=0x000000000041EAFC string=0x000000000041EB00 ")=G"
 *   insn=0x000000000041EB00 string=0x000000000041EB04 "!"
 *   insn=0x000000000041EB08 string=0x000000000041EB0C "\t"
 *   insn=0x000000000041EB08 string=0x000000000041EBB8 "\t"
 *   insn=0x000000000041EB0C string=0x000000000041EB10 "*"
 *   insn=0x000000000041EB10 string=0x000000000041EB14 "\n"
 *   insn=0x000000000041EB18 string=0x000000000041EB1C "?"
 *   insn=0x000000000041EB24 string=0x000000000041EB28 ";"
 *   insn=0x000000000041EB2C string=0x000000000041EB30 ")=G"
 *   insn=0x000000000041EB30 string=0x000000000041EB34 "!"
 *   insn=0x000000000041EB38 string=0x000000000041EB3C "\t"
 *   insn=0x000000000041EB38 string=0x000000000041EB50 "\t"
 *   insn=0x000000000041EB3C string=0x000000000041EB40 "*"
 *   insn=0x000000000041EB40 string=0x000000000041EB44 "\n"
 *   insn=0x000000000041EB4C string=0x000000000041EB5C "?"
 *   insn=0x000000000041EB50 string=0x000000000041EB54 "*"
 *   insn=0x000000000041EB54 string=0x000000000041EB58 "\n"
 *   insn=0x000000000041EB5C string=0x000000000041EB60 "l"
 *   insn=0x000000000041EB70 string=0x000000000041EB74 "J=G"
 *   insn=0x000000000041EB74 string=0x000000000041EB78 ")!"
 *   insn=0x000000000041EB7C string=0x000000000041EB80 "*"
 *   insn=0x000000000041EB7C string=0x000000000041EB94 "*"
 *   insn=0x000000000041EB80 string=0x000000000041EB84 "K"
 *   insn=0x000000000041EB84 string=0x000000000041EB88 "+"
 *   insn=0x000000000041EB90 string=0x000000000041EBA0 "_"
 *   insn=0x000000000041EB94 string=0x000000000041EB98 "K"
 *   insn=0x000000000041EB98 string=0x000000000041EB9C "+"
 *   insn=0x000000000041EBB8 string=0x000000000041EBBC "*"
 *   insn=0x000000000041EBBC string=0x000000000041EBC0 "\n"
 *   insn=0x000000000041EBC0 string=0x000000000041EBC4 "?"
 *   insn=0x000000000041EBD4 string=0x000000000041EBD8 "(a"
 *   insn=0x000000000041EBE0 string=0x000000000041EBE4 "*"
 *   insn=0x000000000041EBE4 string=0x000000000041EBE8 "J=G"
 *   insn=0x000000000041EBE8 string=0x000000000041EBEC ")!"
 *   insn=0x000000000041EBF0 string=0x000000000041EBF4 "*"
 *   insn=0x000000000041EBF0 string=0x000000000041EC64 "*"
 *   insn=0x000000000041EBF4 string=0x000000000041EBF8 "K"
 *   insn=0x000000000041EBF8 string=0x000000000041EBFC "+"
 *   insn=0x000000000041EC00 string=0x000000000041EC04 "_"
 *   insn=0x000000000041EC18 string=0x000000000041EC1C "4\n"
 *   insn=0x000000000041EC20 string=0x000000000041EC24 ""
 *   insn=0x000000000041EC30 string=0x000000000041EC34 "\t@"
 *   insn=0x000000000041EC40 string=0x000000000041EC44 ""
 *   insn=0x000000000041EC50 string=0x000000000041EC54 "@"
 *   insn=0x000000000041EC5C string=0x000000000041EC60 "@"
 *   insn=0x000000000041EC64 string=0x000000000041EC68 "K"
 *   insn=0x000000000041EC68 string=0x000000000041EC6C "+"
 *   insn=0x000000000041EC6C string=0x000000000041EC70 "_"
 *   insn=0x000000000041EC84 string=0x000000000041EC88 "(a"
 *   insn=0x000000000041EC90 string=0x000000000041EC94 "*"
 *   insn=0x000000000041EC94 string=0x000000000041EC98 "J=G"
 *   insn=0x000000000041EC98 string=0x000000000041EC9C ")!"
 *   insn=0x000000000041EC9C string=0x000000000041ECA0 "j"
 *   insn=0x000000000041ECA0 string=0x000000000041ECA4 "*"
 *   insn=0x000000000041ECA0 string=0x000000000041ED4C "*"
 *   insn=0x000000000041ECA4 string=0x000000000041ECA8 "K"
 *   insn=0x000000000041ECA8 string=0x000000000041ECAC "+"
 *   insn=0x000000000041ECB4 string=0x000000000041ED30 "_"
 *   insn=0x000000000041ECC0 string=0x000000000041ECC4 "(a"
 *   insn=0x000000000041ECCC string=0x000000000041ECD0 "*"
 *   insn=0x000000000041ECD0 string=0x000000000041ECD4 "J=G"
 *   insn=0x000000000041ECD4 string=0x000000000041ECD8 ")!"
 *   insn=0x000000000041ECDC string=0x000000000041ECE0 "*"
 *   insn=0x000000000041ECE0 string=0x000000000041ECE4 "K"
 *   insn=0x000000000041ECE4 string=0x000000000041ECE8 "+"
 *   insn=0x000000000041ECF4 string=0x000000000041ECF8 "*"
 *   insn=0x000000000041ECF8 string=0x000000000041ECFC "J"
 *   insn=0x000000000041ED00 string=0x000000000041ED04 "(a"
 *   insn=0x000000000041ED0C string=0x000000000041ED10 "*"
 *   insn=0x000000000041ED10 string=0x000000000041ED14 "J=G"
 *   insn=0x000000000041ED14 string=0x000000000041ED18 ")!"
 *   insn=0x000000000041ED1C string=0x000000000041ED20 "*"
 *   insn=0x000000000041ED20 string=0x000000000041ED24 "K"
 *   insn=0x000000000041ED24 string=0x000000000041ED28 "+"
 *   insn=0x000000000041ED30 string=0x000000000041ED34 "l"
 *   insn=0x000000000041ED4C string=0x000000000041ED50 "K"
 *   insn=0x000000000041ED50 string=0x000000000041ED54 "+"
 *   insn=0x000000000041ED54 string=0x000000000041ED58 "_"
 *   insn=0x000000000041ED7C string=0x000000000041ED80 "U"
 *   insn=0x000000000041ED8C string=0x000000000041ED90 " EA"
 *   insn=0x000000000041ED94 string=0x000000000041ED98 "a"
 *   insn=0x000000000041ED98 string=0x000000000041ED9C "h"
 *   insn=0x000000000041EDA4 string=0x000000000041EDA8 " (""
 *   insn=0x000000000041EDB0 string=0x000000000041EDB4 "`"
 *   insn=0x000000000041EDBC string=0x000000000041EDC0 "`"
 *   insn=0x000000000041EDBC string=0x00000000001FB170 "0'"
 *   insn=0x000000000041EDC4 string=0x000000000041EDC8 "H"
 *   insn=0x000000000041EDC4 string=0x000000000041EE04 "`"
 *   insn=0x000000000041EDC8 string=0x000000000041EDCC "`"
 *   insn=0x000000000041EDD4 string=0x000000000041EDD8 ""uC"
 *   insn=0x000000000041EDD8 string=0x000000000041EDDC ""
 *   insn=0x000000000041EDF4 string=0x000000000041EDF8 "`"
 *   insn=0x000000000041EDFC string=0x000000000041EE00 "dg"
 *   insn=0x000000000041EE00 string=0x00000000001F8B90 "0'"
 *   insn=0x000000000041EE04 string=0x000000000041EE08 "@"
 *   insn=0x000000000041EE08 string=0x000000000041EE50 "i"
 *   insn=0x000000000041EE0C string=0x000000000041EE10 "0"
 *   insn=0x000000000041EE14 string=0x000000000041EE18 "`"
 *   insn=0x000000000041EE14 string=0x00000000001F5840 "P'"
 *   insn=0x000000000041EE18 string=0x000000000041EE1C "`"
 *   insn=0x000000000041EE1C string=0x000000000041EE20 "a"
 *   insn=0x000000000041EE20 string=0x000000000041EE24 "i"
 *   insn=0x000000000041EE24 string=0x000000000041EE28 "x@"
 *   insn=0x000000000041EE34 string=0x000000000041EE38 "I@"
 *   insn=0x000000000041EE50 string=0x000000000041EE54 "h"
 *   insn=0x000000000041EE54 string=0x000000000041EE58 "`"
 *   insn=0x000000000041EE58 string=0x000000000041EE5C "*"
 *   insn=0x000000000041EE5C string=0x000000000041EE60 """
 *   insn=0x000000000041EE5C string=0x0000000000583944 "\n"
 *   insn=0x000000000041EE6C string=0x000000000041EE70 "BEI"
 *   insn=0x000000000041EE74 string=0x000000000041EE78 "!8$"
 *   insn=0x000000000041EE84 string=0x000000000041EE88 "!#"
 *   insn=0x000000000041EE88 string=0x000000000041EE8C "M"
 *   insn=0x000000000041EE98 string=0x000000000041EE9C "\n"
 *   insn=0x000000000041EEA0 string=0x000000000041EEA4 "#8#"
 *   insn=0x000000000041EEA4 string=0x000000000041EEA8 "c"
 *   insn=0x000000000041EEA8 string=0x000000000041EEAC "` ""
 *   insn=0x000000000041EEAC string=0x000000000041EEB0 "M"
 *   insn=0x000000000041EEB0 string=0x000000000041EEB8 "\n"
 *   insn=0x000000000041EEC4 string=0x000000000041EEC8 "*"
 *   insn=0x000000000041EECC string=0x000000000041EED0 "*"
 *   insn=0x000000000041EED0 string=0x000000000041EED4 ")"
 *   insn=0x000000000041EEDC string=0x000000000041EEE0 "J"
 *   insn=0x000000000041EEE0 string=0x000000000041EEE4 "(ij"
 *   insn=0x000000000041EEF0 string=0x000000000041EEF4 ""
 *   insn=0x000000000041EEFC string=0x000000000041EF00 " "
 *   insn=0x000000000041EF08 string=0x00000000001FDA30 "0'"
 *   insn=0x000000000041EF14 string=0x000000000041EF18 "t"
 *   insn=0x000000000041EF18 string=0x000000000041EF1C "b"
 *   insn=0x000000000041EF24 string=0x000000000041EF28 """
 *   insn=0x000000000041EF28 string=0x000000000041EF2C "h"
 *   insn=0x000000000041EF44 string=0x000000000041EF48 "!@!"
 *   insn=0x000000000041EF4C string=0x000000000041EF50 "Dk"
 *   insn=0x000000000041EF50 string=0x00000000001F9C60 "0'"
 *   insn=0x000000000041EF60 string=0x00000000001F6F20 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MapMenuPage::UpdateTitle(Caver::MapMenuPage *this)
{
  __int64 v2; // x8
  __int64 v3; // x24
  Caver::MapNode *v4; // x20
  void *v5; // x0
  __int64 v6; // x21
  void *v7; // x0
  __int64 v8; // x19
  void *v9; // x0
  unsigned int *v10; // x8
  int v11; // w9
  unsigned int *v12; // x8
  int v13; // w9
  unsigned int *v14; // x8
  int v15; // w9
  int v16; // w8
  void *v17; // x0
  int v18; // w26
  char *v19; // x25
  __int64 v20; // x0
  __int64 v21; // x8
  int v22; // w25
  char *v23; // x24
  __int64 v24; // x0
  __int64 v25; // x8
  void *v26; // x0
  char *v27; // x0
  void *v28; // x0
  char *v29; // x0
  void *v30; // x0
  _QWORD *v31; // x19
  __int64 v32; // x8
  __int64 v33; // x8
  unsigned int *v34; // x8
  int v35; // w9
  unsigned int *v36; // x8
  int v37; // w9
  unsigned int *v38; // x8
  int v39; // w9
  unsigned int *v40; // x8
  int v41; // w9
  unsigned int *v42; // x8
  int v43; // w9
  unsigned int *v44; // x8
  int v45; // w9
  char *v46; // [xsp+88h] [xbp-A0h] BYREF
  char *v47; // [xsp+90h] [xbp-98h] BYREF
  __int64 v48; // [xsp+98h] [xbp-90h] BYREF
  __int64 v49; // [xsp+A0h] [xbp-88h] BYREF
  _QWORD *v50; // [xsp+B0h] [xbp-78h]
  int v51; // [xsp+B8h] [xbp-70h] BYREF
  int v52; // [xsp+BCh] [xbp-6Ch] BYREF
  __int64 v53[2]; // [xsp+C8h] [xbp-60h] BYREF
  _BYTE v54[12]; // [xsp+DCh] [xbp-4Ch] BYREF

  *(_QWORD *)&v54[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *((_QWORD *)this + 57);
  if ( !*(_BYTE *)(v2 + 1016) )
    return;
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 280) + 16LL * *(_QWORD *)(v2 + 1024));
  v4 = *(Caver::MapNode **)v3;
  sub_566BB8((int)v53, "");
  Caver::StripeView::SetTitle();
  v5 = (void *)(v53[0] - 24);
  if ( (__int64 *)(v53[0] - 24) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v53[0] - 8);
    if ( &pthread_create )
    {
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
    }
    else
    {
      v11 = (*v10)--;
    }
    if ( v11 <= 0 )
      operator delete(v5);
  }
  Caver::GUILabel::ClearText(*(Caver::GUILabel **)(*((_QWORD *)this + 61) + 288LL));
  v6 = *(_QWORD *)(*((_QWORD *)this + 61) + 288LL);
  Caver::MapNode::Title(v53, v4);
  v52 = -1;
  Caver::GUILabel::AddText(v6, (int)v53, (Caver::Color *)&v52);
  v7 = (void *)(v53[0] - 24);
  if ( (__int64 *)(v53[0] - 24) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(v53[0] - 8);
    if ( &pthread_create )
    {
      do
        v13 = __ldaxr(v12);
      while ( __stlxr(v13 - 1, v12) );
    }
    else
    {
      v13 = (*v12)--;
    }
    if ( v13 <= 0 )
    {
      operator delete(v7);
      if ( !*(_BYTE *)(v3 + 29) )
        goto LABEL_22;
LABEL_5:
      v8 = *(_QWORD *)(*((_QWORD *)this + 61) + 288LL);
      sub_566BB8((int)v53, " (Quest Location)");
      v51 = -1;
      Caver::GUILabel::AddText(v8, (int)v53, (Caver::Color *)&v51);
      v9 = (void *)(v53[0] - 24);
      if ( (__int64 *)(v53[0] - 24) != &qword_6FD2E0 )
      {
        v14 = (unsigned int *)(v53[0] - 8);
        if ( &pthread_create )
        {
          do
            v15 = __ldaxr(v14);
          while ( __stlxr(v15 - 1, v14) );
        }
        else
        {
          v15 = (*v14)--;
        }
        if ( v15 <= 0 )
          operator delete(v9);
      }
      return;
    }
  }
  if ( *(_BYTE *)(v3 + 29) )
    goto LABEL_5;
LABEL_22:
  v16 = *(_DWORD *)(v3 + 32);
  if ( v16 < 1 )
    return;
  Caver::GameInterfaceBuilder::TextGradient(
    (Caver::GameInterfaceBuilder *)v7,
    0.15,
    (float)*(int *)(v3 + 36) / (float)v16,
    0.95,
    1.0);
  sub_566BB8((int)v53, " (Treasures: ");
  Caver::GUILabel::AddText();
  v17 = (void *)(v53[0] - 24);
  if ( (__int64 *)(v53[0] - 24) != &qword_6FD2E0 )
  {
    v34 = (unsigned int *)(v53[0] - 8);
    if ( &pthread_create )
    {
      do
        v35 = __ldaxr(v34);
      while ( __stlxr(v35 - 1, v34) );
    }
    else
    {
      v35 = (*v34)--;
    }
    if ( v35 <= 0 )
      operator delete(v17);
  }
  v18 = *(_DWORD *)(v3 + 36);
  v19 = &byte_6FD2F8;
  v47 = &byte_6FD2F8;
  v20 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
  v21 = v20;
  if ( v18 < 0 )
  {
    *(_BYTE *)(v20 - 1) = 45;
    v21 = v20 - 1;
    v19 = v47;
  }
  sub_569E1C(&v47, 0, *((_QWORD *)v19 - 3), v21, &v54[-v21]);
  sub_56A528(&v48, &v47);
  sub_5677D4(&v48, " of ", 4);
  v22 = *(_DWORD *)(v3 + 32);
  v23 = &byte_6FD2F8;
  v46 = &byte_6FD2F8;
  v24 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
  v25 = v24;
  if ( v22 < 0 )
  {
    *(_BYTE *)(v24 - 1) = 45;
    v25 = v24 - 1;
    v23 = v46;
  }
  sub_569E1C(&v46, 0, *((_QWORD *)v23 - 3), v25, &v54[-v25]);
  sub_56A528(&v49, &v48);
  sub_567614(&v49, &v46);
  Caver::GUILabel::AddText();
  v26 = (void *)(v49 - 24);
  if ( (__int64 *)(v49 - 24) != &qword_6FD2E0 )
  {
    v36 = (unsigned int *)(v49 - 8);
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
      operator delete(v26);
  }
  v27 = v46 - 24;
  if ( v46 - 24 != (char *)&qword_6FD2E0 )
  {
    v38 = (unsigned int *)(v46 - 8);
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
      operator delete(v27);
  }
  v28 = (void *)(v48 - 24);
  if ( (__int64 *)(v48 - 24) != &qword_6FD2E0 )
  {
    v40 = (unsigned int *)(v48 - 8);
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
      operator delete(v28);
  }
  v29 = v47 - 24;
  if ( v47 - 24 != (char *)&qword_6FD2E0 )
  {
    v42 = (unsigned int *)(v47 - 8);
    if ( &pthread_create )
    {
      do
        v43 = __ldaxr(v42);
      while ( __stlxr(v43 - 1, v42) );
    }
    else
    {
      v43 = (*v42)--;
    }
    if ( v43 <= 0 )
      operator delete(v29);
  }
  sub_566BB8((int)v53, ")");
  Caver::GUILabel::AddText();
  v30 = (void *)(v53[0] - 24);
  if ( (__int64 *)(v53[0] - 24) == &qword_6FD2E0 )
    goto LABEL_33;
  v44 = (unsigned int *)(v53[0] - 8);
  if ( &pthread_create )
  {
    do
      v45 = __ldaxr(v44);
    while ( __stlxr(v45 - 1, v44) );
  }
  else
  {
    v45 = (*v44)--;
  }
  if ( v45 > 0 )
  {
LABEL_33:
    v31 = v50;
    if ( !v50 )
      return;
  }
  else
  {
    operator delete(v30);
    v31 = v50;
    if ( !v50 )
      return;
  }
  v32 = v31[1] - 1LL;
  v31[1] = v32;
  if ( !v32 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v31 + 16LL))(v31);
    v33 = v31[2] - 1LL;
    v31[2] = v33;
    if ( !v33 )
      (*(void (__fastcall **)(_QWORD *))(*v31 + 24LL))(v31);
  }
}


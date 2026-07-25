/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C53E4
 * Mangled: _ZN5Caver8FontText7AddTextERKSsfRKNS_7Vector2E
 * Demangled: Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001F9CD0  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *
 * Callees: 25
 *   0x00000000001F60F0  Caver::Sprite::AddGradientRectangle(Caver::Rectangle const&,Caver::Rectangle const&,boost::shared_ptr<Caver::GradientColor> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6E00  Caver::Rectangle::ExpandToincludeRectangle(Caver::Rectangle const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F78C0  Caver::Font::KerningBetweenGlyphsAtIndices(int,int)
 *   0x00000000001F79B0  Caver::GradientColor::GradientColorByReversingAlphaPremultiplication(void)
 *   0x00000000001F7B80  std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>::_M_range_insert<__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>>(__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>,__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>,__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>,std::forward_iterator_tag)
 *   0x00000000001F9190  Caver::Color::ColorByReversingAlphaPremultiplication(void)
 *   0x00000000001F9470  Caver::Rectangle::Translate(Caver::Vector2 const&)
 *   0x00000000001F9730  Caver::Sprite::Init(boost::intrusive_ptr<Caver::Texture> const&,int,int,bool)
 *   0x00000000001F9920  Caver::Sprite::Translate(Caver::Vector2 const&)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FEEA0  std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo,std::allocator<Caver::FontText::CharacterInfo>>>,Caver::FontText::CharacterInfo const&)
 *   0x0000000000200B90  Caver::Sprite::AddRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Color const&)
 *   0x0000000000200FA0  Caver::Sprite::ResizeVertexBuffer(int)
 *   0x0000000000201910  std::vector<Caver::FontText::LineInfo,std::allocator<Caver::FontText::LineInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::FontText::LineInfo*,std::vector<Caver::FontText::LineInfo,std::allocator<Caver::FontText::LineInfo>>>,Caver::FontText::LineInfo const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566784  sub_566784
 *   0x00000000005677D4  sub_5677D4
 *   0x0000000000568EA8  sub_568EA8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 415
 *   insn=0x00000000004C540C string=0x00000000004C5410 "T"
 *   insn=0x00000000004C5420 string=0x00000000004C5424 ""
 *   insn=0x00000000004C5428 string=0x00000000004C542C "?"
 *   insn=0x00000000004C5434 string=0x00000000004C5438 ""
 *   insn=0x00000000004C543C string=0x00000000004C5440 "i"
 *   insn=0x00000000004C543C string=0x00000000004C5F0C ""
 *   insn=0x00000000004C5444 string=0x00000000004C5448 ")"
 *   insn=0x00000000004C5448 string=0x00000000004C544C ")y"
 *   insn=0x00000000004C544C string=0x00000000004C5450 ")\t"
 *   insn=0x00000000004C545C string=0x00000000004C5460 "j"
 *   insn=0x00000000004C5460 string=0x00000000004C5464 ""
 *   insn=0x00000000004C5464 string=0x00000000004C5468 "a"
 *   insn=0x00000000004C5468 string=0x00000000004C546C ",\t"
 *   insn=0x00000000004C546C string=0x00000000004C5470 "_"
 *   insn=0x00000000004C5470 string=0x00000000004C5474 "<"
 *   insn=0x00000000004C5474 string=0x00000000004C5478 "-"
 *   insn=0x00000000004C5478 string=0x00000000004C547C "}"
 *   insn=0x00000000004C5488 string=0x00000000004C54A0 "i"P)"
 *   insn=0x00000000004C5498 string=0x00000000004C549C ""
 *   insn=0x00000000004C5498 string=0x00000000001F9730 "0'"
 *   insn=0x00000000004C54A4 string=0x00000000004C54A8 "?"
 *   insn=0x00000000004C54A8 string=0x00000000004C54AC "j"
 *   insn=0x00000000004C54CC string=0x00000000004C54D0 "?"
 *   insn=0x00000000004C54D0 string=0x00000000004C54D4 " "
 *   insn=0x00000000004C54D4 string=0x00000000004C54D8 "\t"
 *   insn=0x00000000004C54D8 string=0x00000000004C54DC "i"
 *   insn=0x00000000004C54DC string=0x00000000004C54E0 "\nA_"
 *   insn=0x00000000004C54E0 string=0x00000000004C54E4 "!"
 *   insn=0x00000000004C54E4 string=0x00000000004C54E8 "j"
 *   insn=0x00000000004C54E8 string=0x00000000004C54EC ""
 *   insn=0x00000000004C54EC string=0x00000000004C54F0 "@"
 *   insn=0x00000000004C54F0 string=0x00000000004C54F4 "H"
 *   insn=0x00000000004C54F4 string=0x00000000004C54F8 "i"
 *   insn=0x00000000004C54FC string=0x00000000004C5500 ")\t@"
 *   insn=0x00000000004C5504 string=0x00000000004C5508 "%\n"
 *   insn=0x00000000004C550C string=0x00000000004C5510 "B"
 *   insn=0x00000000004C5510 string=0x00000000004C5514 "!(""
 *   insn=0x00000000004C5514 string=0x00000000004C5518 "a"
 *   insn=0x00000000004C551C string=0x00000000004C5520 "A(!"
 *   insn=0x00000000004C5520 string=0x00000000004C5524 "a"
 *   insn=0x00000000004C5528 string=0x00000000004C552C " ( "
 *   insn=0x00000000004C552C string=0x00000000004C5530 "`"
 *   insn=0x00000000004C5538 string=0x00000000004C553C "i"
 *   insn=0x00000000004C553C string=0x00000000004C5540 "h"
 *   insn=0x00000000004C5554 string=0x00000000004C5558 "?"
 *   insn=0x00000000004C555C string=0x00000000004C5598 "`B"
 *   insn=0x00000000004C5560 string=0x00000000004C5564 "hn@"
 *   insn=0x00000000004C5564 string=0x00000000004C5568 "?"
 *   insn=0x00000000004C5570 string=0x00000000004C5574 "("
 *   insn=0x00000000004C5574 string=0x00000000004C5578 "hj@"
 *   insn=0x00000000004C557C string=0x00000000004C5580 "yj"
 *   insn=0x00000000004C5590 string=0x00000000004C5594 "yj@"
 *   insn=0x00000000004C55A0 string=0x00000000004C55A4 "`"
 *   insn=0x00000000004C55A0 string=0x00000000001F9190 "0'"
 *   insn=0x00000000004C55B0 string=0x00000000004C55B4 "`"
 *   insn=0x00000000004C55C0 string=0x00000000001F79B0 "0'"
 *   insn=0x00000000004C55C8 string=0x00000000004C55CC "\n"
 *   insn=0x00000000004C55CC string=0x00000000004C55D0 "J"
 *   insn=0x00000000004C55D0 string=0x00000000004C55D4 "\n"
 *   insn=0x00000000004C55DC string=0x00000000004C55E0 "7"
 *   insn=0x00000000004C55E4 string=0x00000000004C55E8 ""
 *   insn=0x00000000004C55F4 string=0x00000000004C55F8 "\t@"
 *   insn=0x00000000004C5604 string=0x00000000004C5608 ""
 *   insn=0x00000000004C5614 string=0x00000000004C5618 "@"
 *   insn=0x00000000004C5624 string=0x00000000004C5628 "7"
 *   insn=0x00000000004C562C string=0x00000000004C5630 ""
 *   insn=0x00000000004C563C string=0x00000000004C5640 "\t@"
 *   insn=0x00000000004C564C string=0x00000000004C5650 ""
 *   insn=0x00000000004C565C string=0x00000000004C5660 "@"
 *   insn=0x00000000004C5670 string=0x00000000004C5674 "\t"
 *   insn=0x00000000004C5678 string=0x00000000004C567C "i"
 *   insn=0x00000000004C5678 string=0x00000000004C5DB0 "aJ@"
 *   insn=0x00000000004C5694 string=0x00000000004C5698 "+5G"
 *   insn=0x00000000004C5694 string=0x0000000000583734 "o"
 *   insn=0x00000000004C56A4 string=0x00000000004C56A8 ";#"
 *   insn=0x00000000004C56AC string=0x00000000004C56B0 "\n"
 *   insn=0x00000000004C56B4 string=0x00000000004C56B8 "\t"
 *   insn=0x00000000004C56C4 string=0x00000000004C56C8 "*"
 *   insn=0x00000000004C56CC string=0x00000000004C56D0 "!"
 *   insn=0x00000000004C56D0 string=0x00000000004C5AF0 "\t"
 *   insn=0x00000000004C56D4 string=0x00000000004C5B10 "h"
 *   insn=0x00000000004C56D8 string=0x00000000004C56DC ")=G"
 *   insn=0x00000000004C56DC string=0x00000000004C56E0 "!"
 *   insn=0x00000000004C56E4 string=0x00000000004C56E8 "\t"
 *   insn=0x00000000004C56E4 string=0x00000000004C5720 "\t"
 *   insn=0x00000000004C56E8 string=0x00000000004C56EC "*"
 *   insn=0x00000000004C56EC string=0x00000000004C56F0 "\n"
 *   insn=0x00000000004C56F4 string=0x00000000004C56F8 ""
 *   insn=0x00000000004C56FC string=0x00000000004C5700 ")=G"
 *   insn=0x00000000004C5700 string=0x00000000004C5704 "!"
 *   insn=0x00000000004C5704 string=0x00000000004C5708 ")"
 *   insn=0x00000000004C5708 string=0x00000000004C570C "\t"
 *   insn=0x00000000004C5708 string=0x00000000004C574C "\t"
 *   insn=0x00000000004C570C string=0x00000000004C5710 "*"
 *   insn=0x00000000004C5710 string=0x00000000004C5714 "\n"
 *   insn=0x00000000004C571C string=0x00000000004C5758 "?"
 *   insn=0x00000000004C5720 string=0x00000000004C5724 "*"
 *   insn=0x00000000004C5724 string=0x00000000004C5728 "\n"
 *   insn=0x00000000004C5730 string=0x00000000004C5734 "?"
 *   insn=0x00000000004C574C string=0x00000000004C5750 "*"
 *   insn=0x00000000004C5750 string=0x00000000004C5754 "\n"
 *   insn=0x00000000004C5768 string=0x00000000004C576C "}"
 *   insn=0x00000000004C577C string=0x00000000004C5780 "?"
 *   insn=0x00000000004C5784 string=0x00000000004C5788 "?"
 *   insn=0x00000000004C5788 string=0x00000000004C578C "?@"
 *   insn=0x00000000004C578C string=0x00000000004C5790 "?"
 *   insn=0x00000000004C5790 string=0x00000000004C5794 "?@"
 *   insn=0x00000000004C5798 string=0x00000000004C579C "*"
 *   insn=0x00000000004C579C string=0x00000000004C57A0 ")"
 *   insn=0x00000000004C57A4 string=0x00000000004C57A8 "\t"
 *   insn=0x00000000004C57A8 string=0x00000000004C57AC "\t"
 *   insn=0x00000000004C57AC string=0x00000000004C57B0 ""
 *   insn=0x00000000004C57B0 string=0x00000000004C57DC ""
 *   insn=0x00000000004C57C0 string=0x00000000004C57C4 "\t"
 *   insn=0x00000000004C57D4 string=0x00000000004C57D8 "\t"
 *   insn=0x00000000004C57E0 string=0x00000000004C57E4 ""
 *   insn=0x00000000004C57EC string=0x00000000004C57F0 "K"
 *   insn=0x00000000004C57F0 string=0x00000000004C57F4 "kR@"
 *   insn=0x00000000004C57F4 string=0x00000000004C57F8 "K9"
 *   insn=0x00000000004C57F8 string=0x00000000004C57FC "u"
 *   insn=0x00000000004C580C string=0x00000000004C5810 ""
 *   insn=0x00000000004C5814 string=0x00000000004C5818 ""
 *   insn=0x00000000004C5818 string=0x00000000004C581C "J"
 *   insn=0x00000000004C581C string=0x00000000004C5820 "J"
 *   insn=0x00000000004C5820 string=0x00000000004C5824 "_"
 *   insn=0x00000000004C5824 string=0x00000000004C5828 "I"
 *   insn=0x00000000004C582C string=0x00000000004C5830 "9yh"
 *   insn=0x00000000004C5840 string=0x00000000004C5844 "a"
 *   insn=0x00000000004C5840 string=0x00000000004C59B8 "h&K"
 *   insn=0x00000000004C5848 string=0x00000000004C584C "`"
 *   insn=0x00000000004C5848 string=0x00000000004C5884 "h"
 *   insn=0x00000000004C5850 string=0x00000000004C5854 ""
 *   insn=0x00000000004C5854 string=0x00000000004C5858 "`"
 *   insn=0x00000000004C5854 string=0x00000000001F78C0 "0'"
 *   insn=0x00000000004C5860 string=0x00000000004C5864 "`"
 *   insn=0x00000000004C5864 string=0x00000000004C5868 ""
 *   insn=0x00000000004C5868 string=0x00000000004C586C ""
 *   insn=0x00000000004C586C string=0x00000000004C5888 "i"
 *   insn=0x00000000004C5870 string=0x00000000004C5874 "\t"
 *   insn=0x00000000004C5878 string=0x00000000004C587C "\t!"
 *   insn=0x00000000004C587C string=0x00000000004C5880 "N"
 *   insn=0x00000000004C5888 string=0x00000000004C588C "6"
 *   insn=0x00000000004C588C string=0x00000000004C5890 "5\t@"
 *   insn=0x00000000004C5894 string=0x00000000004C5898 "h"
 *   insn=0x00000000004C58A0 string=0x00000000004C58A4 " !"
 *   insn=0x00000000004C58B4 string=0x00000000001F9C60 "0'"
 *   insn=0x00000000004C58B8 string=0x00000000004C58BC "ir@"
 *   insn=0x00000000004C58C4 string=0x00000000004C58C8 "\tA"
 *   insn=0x00000000004C58C8 string=0x00000000004C58CC "i"
 *   insn=0x00000000004C58D8 string=0x00000000004C58DC "!Q@"
 *   insn=0x00000000004C58DC string=0x00000000004C58E0 ")Y@"
 *   insn=0x00000000004C58E0 string=0x00000000004C58E4 "\n"
 *   insn=0x00000000004C58E4 string=0x00000000004C58E8 " ( "
 *   insn=0x00000000004C58EC string=0x00000000004C58F0 ""
 *   insn=0x00000000004C58F0 string=0x00000000004C58F4 "h"
 *   insn=0x00000000004C58F4 string=0x00000000004C58F8 "("
 *   insn=0x00000000004C5928 string=0x00000000004C592C "hR@"
 *   insn=0x00000000004C592C string=0x00000000004C5930 "\t"
 *   insn=0x00000000004C5930 string=0x00000000004C5934 "hR"
 *   insn=0x00000000004C5934 string=0x00000000004C5938 "h"
 *   insn=0x00000000004C5950 string=0x00000000001F60F0 "0'"
 *   insn=0x00000000004C5954 string=0x00000000004C5958 ""
 *   insn=0x00000000004C5958 string=0x00000000004C598C "hR@"
 *   insn=0x00000000004C5964 string=0x00000000004C5968 "h"
 *   insn=0x00000000004C5994 string=0x00000000004C5998 "a"
 *   insn=0x00000000004C5998 string=0x00000000004C599C ""
 *   insn=0x00000000004C599C string=0x00000000004C59A0 "hR"
 *   insn=0x00000000004C59A0 string=0x00000000004C59A4 " "
 *   insn=0x00000000004C59A4 string=0x00000000004C59A8 "y"
 *   insn=0x00000000004C59AC string=0x00000000004C59B0 " ( "
 *   insn=0x00000000004C59B0 string=0x00000000004C59B4 "`"
 *   insn=0x00000000004C59B8 string=0x00000000004C59BC "j"
 *   insn=0x00000000004C59C4 string=0x00000000004C59C8 "("
 *   insn=0x00000000004C59C8 string=0x00000000004C59CC ")"
 *   insn=0x00000000004C59CC string=0x00000000004C59D0 "*"
 *   insn=0x00000000004C59D0 string=0x00000000004C59D4 ""
 *   insn=0x00000000004C59D4 string=0x00000000004C59D8 "j"
 *   insn=0x00000000004C59D8 string=0x00000000004C59DC "%\nh"
 *   insn=0x00000000004C59DC string=0x00000000004C59E0 "h"
 *   insn=0x00000000004C59E4 string=0x00000000004C59E8 "`"
 *   insn=0x00000000004C59EC string=0x00000000004C59F0 "L"
 *   insn=0x00000000004C59F0 string=0x00000000004C5A18 "W"
 *   insn=0x00000000004C59F4 string=0x00000000004C59F8 "\t"
 *   insn=0x00000000004C59FC string=0x00000000004C5A0C "it8"
 *   insn=0x00000000004C5A00 string=0x00000000004C5A04 ")"
 *   insn=0x00000000004C5A10 string=0x00000000004C5A14 "!"
 *   insn=0x00000000004C5A18 string=0x00000000004C5A1C "h:@"
 *   insn=0x00000000004C5A24 string=0x00000000004C5A28 "i>@"
 *   insn=0x00000000004C5A28 string=0x00000000004C5A2C "?"
 *   insn=0x00000000004C5A2C string=0x00000000004C5A30 "*"
 *   insn=0x00000000004C5A30 string=0x00000000004C5BF4 "h"
 *   insn=0x00000000004C5A38 string=0x00000000004C5A3C "M"
 *   insn=0x00000000004C5A48 string=0x00000000004C5A4C "5}@"
 *   insn=0x00000000004C5A4C string=0x00000000004C5A50 "\t"
 *   insn=0x00000000004C5A54 string=0x00000000004C5A64 "\tiz8?"
 *   insn=0x00000000004C5A64 string=0x00000000004C5A68 "?"
 *   insn=0x00000000004C5A6C string=0x00000000004C5A88 "\n"
 *   insn=0x00000000004C5A74 string=0x00000000004C5A78 "J!"
 *   insn=0x00000000004C5A78 string=0x00000000004C5A7C ""
 *   insn=0x00000000004C5A7C string=0x00000000004C5A80 "_"
 *   insn=0x00000000004C5A80 string=0x00000000004C5A84 "A"
 *   insn=0x00000000004C5A88 string=0x00000000004C5A8C "v"
 *   insn=0x00000000004C5A9C string=0x00000000004C5AA0 "\tiz8"
 *   insn=0x00000000004C5AA4 string=0x00000000004C5AA8 "k"
 *   insn=0x00000000004C5AA8 string=0x00000000004C5AAC "k"
 *   insn=0x00000000004C5AB4 string=0x00000000004C5AB8 "Iyi"
 *   insn=0x00000000004C5AB4 string=0x00000000004C5AC8 "Z"
 *   insn=0x00000000004C5AB8 string=0x00000000004C5ABC ")}"
 *   insn=0x00000000004C5ABC string=0x00000000004C5AC0 ")"
 *   insn=0x00000000004C5AC0 string=0x00000000004C5AC4 "7"
 *   insn=0x00000000004C5AC8 string=0x00000000004C5ACC "_"
 *   insn=0x00000000004C5AD4 string=0x00000000004C5AD8 "\t"
 *   insn=0x00000000004C5ADC string=0x00000000004C5AE0 "\t"
 *   insn=0x00000000004C5AE0 string=0x00000000004C5B04 "it8"
 *   insn=0x00000000004C5B10 string=0x00000000004C5B14 "iR@"
 *   insn=0x00000000004C5B18 string=0x00000000004C5B1C ","
 *   insn=0x00000000004C5B24 string=0x00000000004C5B28 "H"
 *   insn=0x00000000004C5B28 string=0x00000000004C5B2C "h"
 *   insn=0x00000000004C5B2C string=0x00000000004C5B30 "iR"
 *   insn=0x00000000004C5B38 string=0x00000000004C5B3C "Y"
 *   insn=0x00000000004C5B40 string=0x00000000004C5B44 "\n"
 *   insn=0x00000000004C5B44 string=0x00000000004C5B48 "J"
 *   insn=0x00000000004C5B48 string=0x00000000004C5B4C "K}"
 *   insn=0x00000000004C5B4C string=0x00000000004C5B50 "*"
 *   insn=0x00000000004C5B54 string=0x00000000004C5B58 "\t"
 *   insn=0x00000000004C5B58 string=0x00000000004C5B5C ""
 *   insn=0x00000000004C5B58 string=0x00000000004C5B78 "h"
 *   insn=0x00000000004C5B5C string=0x00000000004C5B60 ""
 *   insn=0x00000000004C5B60 string=0x00000000004C5B64 "k"
 *   insn=0x00000000004C5B64 string=0x00000000004C5B68 "k}"
 *   insn=0x00000000004C5B6C string=0x00000000004C5B70 "h"
 *   insn=0x00000000004C5B78 string=0x00000000004C5B7C "`"
 *   insn=0x00000000004C5B7C string=0x00000000004C5B80 "\n"
 *   insn=0x00000000004C5B84 string=0x00000000004C5B88 "h&K"
 *   insn=0x00000000004C5B8C string=0x00000000004C5B90 "j"
 *   insn=0x00000000004C5B90 string=0x00000000004C5B94 "-(,"
 *   insn=0x00000000004C5B98 string=0x00000000004C5B9C "`"
 *   insn=0x00000000004C5B9C string=0x00000000004C5BA0 "j"
 *   insn=0x00000000004C5BA0 string=0x00000000004C5BA4 "("
 *   insn=0x00000000004C5BA4 string=0x00000000004C5BA8 ")"
 *   insn=0x00000000004C5BA8 string=0x00000000004C5BAC ""
 *   insn=0x00000000004C5BAC string=0x00000000004C5BB0 "i"
 *   insn=0x00000000004C5BB0 string=0x00000000004C5BB4 "i\t"
 *   insn=0x00000000004C5BB8 string=0x00000000004C5BBC ")"
 *   insn=0x00000000004C5BBC string=0x00000000004C5BC0 ")"
 *   insn=0x00000000004C5BC0 string=0x00000000004C5BC4 ""
 *   insn=0x00000000004C5BC4 string=0x00000000004C5BC8 "i"
 *   insn=0x00000000004C5BCC string=0x00000000004C5BD0 "a"M"
 *   insn=0x00000000004C5BD0 string=0x00000000004C5BD4 "?"
 *   insn=0x00000000004C5BDC string=0x00000000004C5BE0 "("
 *   insn=0x00000000004C5BE0 string=0x00000000004C5BE4 "hj@"
 *   insn=0x00000000004C5BE4 string=0x00000000004C5BE8 "!"
 *   insn=0x00000000004C5BE8 string=0x00000000004C5BEC "hj"
 *   insn=0x00000000004C5BEC string=0x00000000004C5BF0 "b"
 *   insn=0x00000000004C5BF0 string=0x00000000004C5D78 "i>@"
 *   insn=0x00000000004C5BF4 string=0x00000000004C5BF8 "\t"
 *   insn=0x00000000004C5BF8 string=0x00000000004C5BFC "J"
 *   insn=0x00000000004C5BFC string=0x00000000004C5C00 "J"
 *   insn=0x00000000004C5C00 string=0x00000000004C5C04 "_"
 *   insn=0x00000000004C5C04 string=0x00000000004C5C08 "#"
 *   insn=0x00000000004C5C08 string=0x00000000004C5C0C ")"
 *   insn=0x00000000004C5C08 string=0x00000000004C5CEC "\t"
 *   insn=0x00000000004C5C10 string=0x00000000004C5C14 "-"
 *   insn=0x00000000004C5C14 string=0x00000000004C5CF8 "#"
 *   insn=0x00000000004C5C1C string=0x00000000004C5C20 "\t@"
 *   insn=0x00000000004C5C24 string=0x00000000004C5C28 "`"
 *   insn=0x00000000004C5C30 string=0x00000000004C5C34 "(!*"
 *   insn=0x00000000004C5C44 string=0x00000000004C5C48 "!"
 *   insn=0x00000000004C5C48 string=0x00000000004C5C4C "-*"
 *   insn=0x00000000004C5C58 string=0x00000000004C5C98 "h"
 *   insn=0x00000000004C5C5C string=0x00000000004C5C60 "\t"
 *   insn=0x00000000004C5C64 string=0x00000000004C5C74 "it8"
 *   insn=0x00000000004C5C78 string=0x00000000004C5C7C ""
 *   insn=0x00000000004C5C80 string=0x00000000004C5C84 "(!"
 *   insn=0x00000000004C5C90 string=0x00000000004C5C94 "@"
 *   insn=0x00000000004C5C98 string=0x00000000004C5C9C "iR@"
 *   insn=0x00000000004C5CA0 string=0x00000000004C5CA4 ""
 *   insn=0x00000000004C5CA4 string=0x00000000004C5CA8 ")"
 *   insn=0x00000000004C5CA8 string=0x00000000004C5CAC "h"
 *   insn=0x00000000004C5CAC string=0x00000000004C5CB0 "iR"
 *   insn=0x00000000004C5CB4 string=0x00000000004C5CB8 ""
 *   insn=0x00000000004C5CBC string=0x00000000004C5CC0 ")"
 *   insn=0x00000000004C5CC4 string=0x00000000004C5CC8 "`r"
 *   insn=0x00000000004C5CCC string=0x00000000004C5CD0 ""
 *   insn=0x00000000004C5CD0 string=0x00000000004C5CD4 "h"
 *   insn=0x00000000004C5CE4 string=0x00000000004C5CE8 "+"
 *   insn=0x00000000004C5CF0 string=0x00000000004C5CF4 ","
 *   insn=0x00000000004C5D1C string=0x00000000004C5D20 "a"
 *   insn=0x00000000004C5D20 string=0x00000000005919ED "..."
 *   insn=0x00000000004C5D28 string=0x00000000004C5D2C "!"
 *   insn=0x00000000004C5D38 string=0x00000000004C5D3C "["
 *   insn=0x00000000004C5D48 string=0x00000000004C5D4C "a"
 *   insn=0x00000000004C5D60 string=0x00000000004C5D64 ""
 *   insn=0x00000000004C5D70 string=0x00000000004C5D74 "hj@"
 *   insn=0x00000000004C5D78 string=0x00000000004C5D7C ")9-"
 *   insn=0x00000000004C5D7C string=0x00000000004C5D80 "!"
 *   insn=0x00000000004C5D84 string=0x00000000004C5D88 "("
 *   insn=0x00000000004C5D88 string=0x00000000004C5D8C "h>"
 *   insn=0x00000000004C5D98 string=0x00000000004C5D9C "4"
 *   insn=0x00000000004C5DA0 string=0x00000000004C5DA4 "\t"
 *   insn=0x00000000004C5DA4 string=0x00000000004C5DA8 "?"
 *   insn=0x00000000004C5DA8 string=0x00000000004C5DAC "("
 *   insn=0x00000000004C5DB4 string=0x00000000004C5DB8 " 5G"
 *   insn=0x00000000004C5DB8 string=0x00000000004C5DBC "u"
 *   insn=0x00000000004C5DBC string=0x00000000004C5DC0 "!"
 *   insn=0x00000000004C5DC0 string=0x00000000004C5DC4 "   "
 *   insn=0x00000000004C5DC4 string=0x00000000004C5DC8 ""
 *   insn=0x00000000004C5DC8 string=0x00000000004C5DCC "aN@"
 *   insn=0x00000000004C5DCC string=0x00000000004C5DD0 "!"
 *   insn=0x00000000004C5DD0 string=0x00000000004C5DD4 "   "
 *   insn=0x00000000004C5DDC string=0x00000000004C5DE0 " A"
 *   insn=0x00000000004C5DF4 string=0x00000000004C5DF8 "7"
 *   insn=0x00000000004C5DF4 string=0x00000000004C5E88 "`F@"
 *   insn=0x00000000004C5E18 string=0x00000000004C5E1C "\t"
 *   insn=0x00000000004C5E1C string=0x00000000004C5E20 ")"
 *   insn=0x00000000004C5E20 string=0x00000000004C5E44 "it8"
 *   insn=0x00000000004C5E24 string=0x00000000004C5E28 " "
 *   insn=0x00000000004C5E38 string=0x00000000004C5E3C "\t"
 *   insn=0x00000000004C5E3C string=0x00000000004C5E40 ")"
 *   insn=0x00000000004C5E4C string=0x00000000004C5E50 "#"
 *   insn=0x00000000004C5E68 string=0x00000000001F6E00 "0'"
 *   insn=0x00000000004C5E70 string=0x00000000004C5E74 "h"
 *   insn=0x00000000004C5E74 string=0x00000000004C5E78 ""
 *   insn=0x00000000004C5E78 string=0x00000000004C5E7C "}"
 *   insn=0x00000000004C5E88 string=0x00000000004C5E8C "aN@"
 *   insn=0x00000000004C5E8C string=0x00000000004C5E90 "a^@"
 *   insn=0x00000000004C5E90 string=0x00000000004C5E94 "iF"
 *   insn=0x00000000004C5E9C string=0x00000000004C5EA0 "`N"
 *   insn=0x00000000004C5EA4 string=0x00000000004C5EA8 "6"
 *   insn=0x00000000004C5EA8 string=0x00000000001F7B80 "0'"
 *   insn=0x00000000004C5EB0 string=0x00000000004C5EB4 "3"
 *   insn=0x00000000004C5EB4 string=0x00000000004C5EB8 "h"
 *   insn=0x00000000004C5EB8 string=0x00000000004C5EBC ""
 *   insn=0x00000000004C5EBC string=0x00000000004C5EC0 "h"
 *   insn=0x00000000004C5EC4 string=0x00000000004C5EC8 "h"
 *   insn=0x00000000004C5EC8 string=0x00000000004C5ECC "\t@"
 *   insn=0x00000000004C5ED4 string=0x00000000004C5ED8 "h\n@"
 *   insn=0x00000000004C5ED8 string=0x00000000004C5EDC ""
 *   insn=0x00000000004C5EDC string=0x00000000004C5EE0 "h\n"
 *   insn=0x00000000004C5EE4 string=0x00000000004C5EE8 "h"
 *   insn=0x00000000004C5EE8 string=0x00000000004C5EEC "@"
 *   insn=0x00000000004C5EF8 string=0x00000000004C5EFC "@"
 *   insn=0x00000000004C5F00 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004C5F04 string=0x00000000004C5F08 " a"
 *   insn=0x00000000004C5F0C string=0x00000000004C5F10 ""
 *   insn=0x00000000004C5F58 string=0x00000000004C5F5C "J=G"
 *   insn=0x00000000004C5F5C string=0x00000000004C5F60 "(!"
 *   insn=0x00000000004C5F64 string=0x00000000004C5F68 "\t"
 *   insn=0x00000000004C5F64 string=0x00000000004C5F7C "\t"
 *   insn=0x00000000004C5F68 string=0x00000000004C5F6C "*"
 *   insn=0x00000000004C5F6C string=0x00000000004C5F70 "\n"
 *   insn=0x00000000004C5F78 string=0x00000000004C5F88 "?"
 *   insn=0x00000000004C5F7C string=0x00000000004C5F80 "*"
 *   insn=0x00000000004C5F80 string=0x00000000004C5F84 "\n"
 *   insn=0x00000000004C5F9C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004C5FB4 string=0x00000000004C5FB8 ""
 *   insn=0x00000000004C5FC4 string=0x00000000004C5FC8 "\t@"
 *   insn=0x00000000004C5FD4 string=0x00000000004C5FD8 ""
 *   insn=0x00000000004C5FE4 string=0x00000000004C5FE8 "@"
 *   insn=0x00000000004C5FF0 string=0x00000000004C5FF4 "W"
 *   insn=0x00000000004C5FFC string=0x00000000004C6000 "i"
 *   insn=0x00000000004C6010 string=0x00000000004C6014 "`"
 *   insn=0x00000000004C6014 string=0x00000000004C6018 "c"
 *   insn=0x00000000004C6014 string=0x00000000004C61A0 "D"
 *   insn=0x00000000004C6024 string=0x00000000004C6028 "(a"
 *   insn=0x00000000004C6034 string=0x00000000004C6038 "J=G"
 *   insn=0x00000000004C6038 string=0x00000000004C603C ")!"
 *   insn=0x00000000004C6040 string=0x00000000004C6044 "*"
 *   insn=0x00000000004C6040 string=0x00000000004C6090 "*"
 *   insn=0x00000000004C6044 string=0x00000000004C6048 "K"
 *   insn=0x00000000004C6048 string=0x00000000004C604C "+"
 *   insn=0x00000000004C605C string=0x00000000004C6060 "(a"
 *   insn=0x00000000004C606C string=0x00000000004C6070 "J=G"
 *   insn=0x00000000004C6070 string=0x00000000004C6074 ")!"
 *   insn=0x00000000004C6078 string=0x00000000004C607C "*"
 *   insn=0x00000000004C607C string=0x00000000004C6080 "K"
 *   insn=0x00000000004C6080 string=0x00000000004C6084 "+"
 *   insn=0x00000000004C6090 string=0x00000000004C6094 "K"
 *   insn=0x00000000004C6094 string=0x00000000004C6098 "+"
 *   insn=0x00000000004C60A0 string=0x00000000004C60A4 "_"
 *   insn=0x00000000004C60D8 string=0x00000000004C60DC ")=G"
 *   insn=0x00000000004C60DC string=0x00000000004C60E0 "!"
 *   insn=0x00000000004C60E4 string=0x00000000004C60E8 "\t"
 *   insn=0x00000000004C60E4 string=0x00000000004C60FC "\t"
 *   insn=0x00000000004C60E8 string=0x00000000004C60EC "*"
 *   insn=0x00000000004C60EC string=0x00000000004C60F0 "\n"
 *   insn=0x00000000004C60F8 string=0x00000000004C6108 "?"
 *   insn=0x00000000004C60FC string=0x00000000004C6100 "*"
 *   insn=0x00000000004C6100 string=0x00000000004C6104 "\n"
 *   insn=0x00000000004C6108 string=0x00000000004C610C ","
 *   insn=0x00000000004C6150 string=0x00000000004C6154 "4"
 *   insn=0x00000000004C6158 string=0x00000000004C615C ""
 *   insn=0x00000000004C6168 string=0x00000000004C616C "\t@"
 *   insn=0x00000000004C6178 string=0x00000000004C617C ""
 *   insn=0x00000000004C6188 string=0x00000000004C618C "@"
 *   insn=0x00000000004C6198 string=0x00000000004C619C "@"
 *   insn=0x00000000004C61A8 string=0x00000000004C61AC ")"
 *   insn=0x00000000004C61BC string=0x00000000004C61C0 ")=G"
 *   insn=0x00000000004C61C0 string=0x00000000004C61C4 "!"
 *   insn=0x00000000004C61C4 string=0x00000000004C61C8 "i"
 *   insn=0x00000000004C61C8 string=0x00000000004C61CC "\t"
 *   insn=0x00000000004C61C8 string=0x00000000004C61F4 "\t"
 *   insn=0x00000000004C61CC string=0x00000000004C61D0 "*"
 *   insn=0x00000000004C61D0 string=0x00000000004C61D4 "\n"
 *   insn=0x00000000004C61D8 string=0x00000000004C61DC "?"
 *   insn=0x00000000004C61DC string=0x00000000004C61E0 "l"
 *   insn=0x00000000004C61E4 string=0x00000000004C61E8 "o"
 *   insn=0x00000000004C61F4 string=0x00000000004C61F8 "*"
 *   insn=0x00000000004C61F8 string=0x00000000004C61FC "\n"
 *   insn=0x00000000004C61FC string=0x00000000004C6200 "?"
 *   insn=0x00000000004C6200 string=0x00000000004C6204 ""
 *   insn=0x00000000004C622C string=0x00000000001F9920 "0'"
 *   insn=0x00000000004C6238 string=0x00000000001F9470 "0'"
 *   insn=0x00000000004C6240 string=0x00000000004C6244 "`"
 *   insn=0x00000000004C6244 string=0x00000000004C6248 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FontText::AddText(__int64 *a1, __int64 a2, float *a3, float a4)
{
  __int64 v7; // x9
  __int64 *v8; // x0
  __int64 v9; // x8
  _DWORD *v10; // x9
  int v11; // w9
  int v12; // w28
  int v13; // w1
  float v14; // s9
  __int64 v15; // x8
  float v16; // w9
  float v17; // w10
  float v18; // s1
  __int64 v19; // x8
  float v20; // w8
  _QWORD *v21; // x1
  __int64 v22; // x25
  Caver::GradientColor *v23; // x0
  __int128 v24; // kr00_16
  _QWORD *v25; // x23
  __int64 v26; // x8
  __int64 v27; // x8
  _QWORD *v28; // x23
  __int64 v29; // x8
  __int64 v30; // x8
  __int64 v31; // x8
  __int64 v32; // x20
  int v33; // w24
  _DWORD *v34; // x27
  char v35; // w23
  unsigned int *v36; // x8
  int v37; // w9
  unsigned int *v38; // x8
  int v39; // w9
  _BYTE *v40; // x1
  int v41; // w9
  char *v42; // x8
  char *v43; // x10
  __int64 v44; // x21
  __int64 v45; // x9
  unsigned __int64 v46; // x8
  int v47; // w25
  int v48; // w1
  float v49; // s0
  float v50; // w8
  __int64 v51; // x21
  char *v52; // x8
  float v53; // s0
  int v54; // w11
  float v55; // s1
  int v56; // w9
  const Caver::Rectangle *v57; // x26
  int v58; // w0
  float v59; // s1
  int v60; // s0
  int v61; // w25
  __int64 v62; // x8
  int v63; // w8
  __int64 v64; // x8
  int v65; // w23
  __int64 v66; // x26
  unsigned __int64 v67; // x9
  Caver::Font *v68; // x22
  __int64 v69; // x10
  int v70; // w9
  _BYTE *v71; // x8
  float v72; // s0
  float v73; // s1
  __int64 v74; // x8
  __int64 v75; // x9
  float v76; // s13
  _QWORD *v77; // x1
  __int64 v78; // x8
  __int64 v79; // x9
  int v80; // w9
  __int64 v81; // d0
  __int64 v82; // x20
  __int64 v83; // x21
  float v84; // s13
  __int64 v85; // x8
  unsigned int v86; // w8
  bool v87; // cc
  int v88; // w9
  char *v89; // x8
  _BYTE *v90; // x9
  void *v91; // x0
  void *v92; // x0
  __int64 v93; // x20
  __int64 v94; // x22
  unsigned int v95; // w8
  float v96; // s0
  float v97; // s1
  _QWORD *v98; // x19
  __int64 v99; // x8
  __int64 v100; // x8
  unsigned int *v101; // x8
  int v102; // w9
  int v103; // [xsp+68h] [xbp-118h]
  Caver::Sprite *v104; // [xsp+70h] [xbp-110h]
  __int64 v105[2]; // [xsp+78h] [xbp-108h] BYREF
  float v106; // [xsp+88h] [xbp-F8h] BYREF
  float v107; // [xsp+8Ch] [xbp-F4h]
  _BYTE v108[36]; // [xsp+90h] [xbp-F0h] BYREF
  __int128 v109; // [xsp+B8h] [xbp-C8h]
  __int64 v110; // [xsp+C8h] [xbp-B8h] BYREF
  __int64 v111; // [xsp+D0h] [xbp-B0h] BYREF
  void *p; // [xsp+D8h] [xbp-A8h]
  _BYTE *v113; // [xsp+E0h] [xbp-A0h]
  _BYTE *v114; // [xsp+E8h] [xbp-98h]
  _QWORD v115[2]; // [xsp+F0h] [xbp-90h] BYREF

  v115[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_56A528(v115, a2);
  v7 = v115[0];
  v8 = (__int64 *)(v115[0] - 24LL);
  v9 = *(_QWORD *)(v115[0] - 24LL);
  if ( v9 )
  {
    v10 = (_DWORD *)a1[3];
    if ( v10 )
      v11 = 2 * *v10 - 2;
    else
      v11 = 2;
    if ( *((_BYTE *)a1 + 40) )
      v12 = v11 + 2;
    else
      v12 = v11;
    if ( a1[11] == *(_QWORD *)(*a1 + 8) )
    {
      v13 = *((_DWORD *)a1 + 33) + 3 * v9 * v12;
      if ( *((_DWORD *)a1 + 32) < v13 )
        Caver::Sprite::ResizeVertexBuffer((Caver::Sprite *)(a1 + 11), v13);
    }
    else
    {
      Caver::Sprite::Init();
    }
    v113 = 0;
    v114 = 0;
    p = 0;
    v14 = a3[1];
    v15 = a1[23];
    if ( a1[22] == v15 )
    {
      v20 = *a3;
      *((float *)a1 + 57) = v14;
      *((float *)a1 + 56) = v20;
    }
    else
    {
      v16 = *(float *)(v15 - 16);
      *((float *)a1 + 56) = v16;
      v17 = *(float *)(v15 - 12);
      v18 = v16;
      *((float *)a1 + 57) = v17;
      v19 = *(int *)(v15 - 4);
      if ( (v19 & 0x80000000) == 0 )
      {
        v18 = v16 + (float)*(int *)(*(_QWORD *)(*a1 + 16) + 44 * v19 + 24);
        *((float *)a1 + 56) = v18;
      }
      *((float *)a1 + 56) = *a3 + v18;
      *((float *)a1 + 57) = a3[1] + v17;
    }
    v21 = (_QWORD *)a1[25];
    v22 = a1[26];
    *((_DWORD *)a1 + 15) = 1;
    if ( v21 == (_QWORD *)v22 )
    {
      *(_QWORD *)v108 = 0;
      if ( v21 == (_QWORD *)a1[27] )
      {
        std::vector<Caver::FontText::LineInfo>::_M_insert_aux((_DWORD)a1 + 200, v21);
        v22 = a1[26];
      }
      else
      {
        *v21 = *(_QWORD *)v108;
        v22 = a1[26] + 8;
        a1[26] = v22;
      }
    }
    Caver::Color::ColorByReversingAlphaPremultiplication(&v111, (Caver::Color *)(a1 + 2));
    Caver::Color::ColorByReversingAlphaPremultiplication(&v110, (Caver::Color *)((char *)a1 + 41));
    v109 = 0u;
    v23 = (Caver::GradientColor *)a1[3];
    if ( v23 )
    {
      Caver::GradientColor::GradientColorByReversingAlphaPremultiplication((__int64 *)v108, v23);
      v24 = *(_OWORD *)v108;
      if ( *(_QWORD *)&v108[8] )
        ++*(_QWORD *)(*(_QWORD *)&v108[8] + 8LL);
      v25 = (_QWORD *)*((_QWORD *)&v109 + 1);
      v109 = v24;
      if ( v25 )
      {
        v26 = v25[1] - 1LL;
        v25[1] = v26;
        if ( !v26 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
          v27 = v25[2] - 1LL;
          v25[2] = v27;
          if ( !v27 )
            (*(void (__fastcall **)(_QWORD *))(*v25 + 24LL))(v25);
        }
      }
      v28 = *(_QWORD **)&v108[8];
      if ( *(_QWORD *)&v108[8] )
      {
        v29 = *(_QWORD *)(*(_QWORD *)&v108[8] + 8LL) - 1LL;
        *(_QWORD *)(*(_QWORD *)&v108[8] + 8LL) = v29;
        if ( !v29 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
          v30 = v28[2] - 1LL;
          v28[2] = v30;
          if ( !v30 )
            (*(void (__fastcall **)(_QWORD *))(*v28 + 24LL))(v28);
        }
      }
    }
    v31 = v115[0];
    if ( *(_QWORD *)(v115[0] - 24LL) )
    {
      v104 = (Caver::Sprite *)(a1 + 11);
      v32 = 0;
      v33 = 0;
      v34 = (_DWORD *)(v22 - 8);
      v35 = 1;
      v103 = -1;
      while ( 1 )
      {
        v40 = v113;
        memset(v108, 0, sizeof(v108));
        if ( v113 == v114 )
          break;
        *v113 = 0;
        *(_QWORD *)(v40 + 20) = 0;
        *(_QWORD *)(v40 + 12) = 0;
        *(_QWORD *)(v40 + 4) = 0;
        *(_QWORD *)(v40 + 28) = *(_QWORD *)&v108[28];
        v113 = v40 + 36;
        v41 = *(_DWORD *)(v31 - 8);
        if ( (v41 & 0x80000000) == 0 )
          goto LABEL_52;
LABEL_53:
        v42 = (char *)(v31 + v32);
        v43 = (char *)p + 36 * v32;
        *v43 = *v42;
        *((_WORD *)v43 + 14) = *((_DWORD *)a1 + 20);
        v44 = *a1;
        if ( (v41 & 0x80000000) == 0 )
        {
          sub_568EA8(v115);
          v42 = (char *)(v115[0] + v32);
        }
        v45 = *(_QWORD *)(v44 + 40);
        v46 = (unsigned __int8)*v42;
        if ( (*(_QWORD *)(v44 + 48) - v45) >> 2 <= v46 )
        {
          *((_DWORD *)p + 9 * v32 + 8) = -1;
          goto LABEL_67;
        }
        v47 = *(_DWORD *)(v45 + 4 * v46);
        *((_DWORD *)p + 9 * v32 + 8) = v47;
        if ( v47 < 0 )
          goto LABEL_67;
        v48 = *((_DWORD *)a1 + 58);
        if ( v48 < 0 )
        {
          v50 = *((float *)a1 + 56);
        }
        else
        {
          v49 = *((float *)a1 + 56)
              + (float)(int)Caver::Font::KerningBetweenGlyphsAtIndices((Caver::Font *)*a1, v48, v47);
          *((float *)a1 + 56) = v49;
          v50 = v49;
        }
        v51 = *(_QWORD *)(*a1 + 16);
        v106 = v50;
        v107 = *((float *)a1 + 57);
        Caver::Rectangle::TranslatedRectangle(
          (__int64 *)v108,
          (Caver::Rectangle *)(v51 + 44LL * v47 + 8),
          (const Caver::Vector2 *)&v106);
        v52 = (char *)p + 36 * v32;
        *(_QWORD *)(v52 + 20) = a1[28];
        v53 = v107;
        v54 = *(_DWORD *)&v108[8];
        v55 = *(float *)(*a1 + 80);
        v56 = *(_DWORD *)(*a1 + 88);
        *((_DWORD *)v52 + 1) = *(_DWORD *)v108;
        *((float *)v52 + 2) = v55 + v53;
        *((_DWORD *)v52 + 3) = v54;
        *((_DWORD *)v52 + 4) = v56;
        if ( *((_BYTE *)a1 + 40) )
        {
          Caver::Rectangle::TranslatedRectangle(v105, (Caver::Rectangle *)v108, (const Caver::Vector2 *)(a1 + 6));
          v57 = (const Caver::Rectangle *)(v51 + 44LL * v47 + 28);
          Caver::Sprite::AddRectangle(v104, (const Caver::Rectangle *)v105, v57, (const Caver::Color *)&v110);
          *((_DWORD *)a1 + 20) += 2;
          if ( !a1[3] )
            goto LABEL_65;
        }
        else
        {
          v57 = (const Caver::Rectangle *)(v51 + 44LL * v47 + 28);
          if ( !a1[3] )
          {
LABEL_65:
            Caver::Sprite::AddRectangle(v104, (const Caver::Rectangle *)v108, v57, (const Caver::Color *)&v111);
            v58 = 2;
            goto LABEL_66;
          }
        }
        v58 = Caver::Sprite::AddGradientRectangle(v104, (Caver::Rectangle *)v108);
LABEL_66:
        v59 = *((float *)a1 + 56);
        *((_DWORD *)a1 + 20) += v58;
        v60 = *(_DWORD *)(v51 + 44LL * v47 + 24);
        *((_DWORD *)a1 + 58) = v47;
        *((float *)a1 + 56) = v59 + (float)v60;
LABEL_67:
        v61 = v33 + 1;
        v34[1] = v33 + 1 - *v34 + 954437177 * ((unsigned __int64)(a1[23] - a1[22]) >> 2);
        if ( a4 <= 0.001 || *((float *)a1 + 56) <= a4 )
        {
          v62 = v115[0];
          if ( (*(_DWORD *)(v115[0] - 8LL) & 0x80000000) == 0 )
          {
            sub_568EA8(v115);
            v62 = v115[0];
          }
          if ( *(_BYTE *)(v62 + v32) != 10 )
            goto LABEL_116;
        }
        if ( (v35 & 1) != 0 )
        {
          v63 = *((_DWORD *)a1 + 14);
          if ( v63 < 1 || *((_DWORD *)a1 + 15) < v63 )
          {
            if ( v33 <= v103 )
            {
              v64 = v115[0];
              v65 = 0;
              LODWORD(v66) = 0;
LABEL_89:
              if ( (*(_DWORD *)(v64 - 8) & 0x80000000) == 0 )
              {
LABEL_90:
                sub_568EA8(v115);
                v64 = v115[0];
              }
            }
            else
            {
              v64 = v115[0];
              v65 = 0;
              v66 = v33;
              do
              {
                if ( (*(_DWORD *)(v64 - 8) & 0x80000000) == 0 )
                {
                  sub_568EA8(v115);
                  v64 = v115[0];
                }
                v67 = *(unsigned __int8 *)(v64 + v66);
                if ( (unsigned int)v67 <= 0x20 && ((1LL << v67) & 0x100000600LL) != 0 )
                {
                  if ( v33 <= (int)v66 )
                    goto LABEL_89;
                  goto LABEL_92;
                }
                v68 = (Caver::Font *)*a1;
                if ( (*(_DWORD *)(v64 - 8) & 0x80000000) == 0 )
                {
                  sub_568EA8(v115);
                  v64 = v115[0];
                  v67 = *(unsigned __int8 *)(v115[0] + v66);
                }
                v69 = *((_QWORD *)v68 + 5);
                if ( (*((_QWORD *)v68 + 6) - v69) >> 2 > v67 )
                  v65 += *(_DWORD *)(v69 + 4 * v67) >= 0;
                --v66;
              }
              while ( v66 > v103 );
              LODWORD(v66) = 0;
              if ( (*(_DWORD *)(v64 - 8) & 0x80000000) == 0 )
                goto LABEL_90;
            }
            if ( *(_BYTE *)(v64 + v32) == 10 )
            {
LABEL_92:
              v70 = *((_DWORD *)a1 + 20) - v65 * v12;
              *((_DWORD *)a1 + 33) -= 3 * v12 * v65;
              *((_DWORD *)a1 + 20) = v70;
              v71 = v113;
              v61 = v66 + 1;
              if ( 0x8E38E38E38E38E39LL * ((v113 - (_BYTE *)p) >> 2) > (int)v66 + 1 )
              {
                do
                  v71 -= 36;
                while ( 0x8E38E38E38E38E39LL * ((v71 - (_BYTE *)p) >> 2) > v61 );
                v113 = v71;
              }
              v72 = *((float *)a1 + 57);
              v73 = *(float *)(*a1 + 72);
              v74 = a1[22];
              v75 = a1[23];
              *((_DWORD *)a1 + 56) = 0;
              *((_DWORD *)a1 + 58) = -1;
              v76 = v73 + 1.0;
              *((float *)a1 + 57) = v72 - (float)(v73 + 1.0);
              LODWORD(v74) = v66 + 954437177 * ((unsigned __int64)(v75 - v74) >> 2);
              v34[1] = 1 - *v34 + v74;
              *(_QWORD *)v108 = (unsigned int)(v74 + 1);
              v77 = (_QWORD *)a1[26];
              if ( v77 == (_QWORD *)a1[27] )
              {
                std::vector<Caver::FontText::LineInfo>::_M_insert_aux((_DWORD)a1 + 200, v77);
                v78 = a1[26];
              }
              else
              {
                *v77 = *(_QWORD *)v108;
                v78 = a1[26] + 8;
                a1[26] = v78;
              }
              v14 = v14 - v76;
              v34 = (_DWORD *)(v78 - 8);
              v35 = 1;
              ++*((_DWORD *)a1 + 15);
              v103 = v66;
            }
            else
            {
              v35 = 1;
            }
            goto LABEL_116;
          }
          v79 = *(_QWORD *)(*a1 + 40);
          if ( (unsigned __int64)((*(_QWORD *)(*a1 + 48) - v79) >> 2) < 0x2F )
          {
            v80 = -1;
            if ( a4 > 0.001 )
              goto LABEL_99;
          }
          else
          {
            v80 = *(_DWORD *)(v79 + 184);
            if ( a4 > 0.001 )
            {
LABEL_99:
              if ( v33 >= 1 )
              {
                LODWORD(v81) = *((_DWORD *)a1 + 56);
                v82 = v33;
                v83 = 36LL * v33;
                v84 = (float)*(int *)(*(_QWORD *)(*a1 + 16) + 44LL * v80 + 24) * 3.0;
                do
                {
                  if ( (float)(v84 + *(float *)&v81) <= a4 )
                  {
                    v85 = v115[0];
                    if ( (*(_DWORD *)(v115[0] - 8LL) & 0x80000000) == 0 )
                    {
                      sub_568EA8(v115);
                      v85 = v115[0];
                    }
                    v86 = *(unsigned __int8 *)(v85 + v82);
                    if ( v86 > 0x20 || ((1LL << v86) & 0x100000600LL) == 0 )
                      break;
                  }
                  v87 = v82-- <= 1;
                  v88 = *((_DWORD *)a1 + 20) - v12;
                  *((_DWORD *)a1 + 33) -= 3 * v12;
                  *((_DWORD *)a1 + 20) = v88;
                  v89 = (char *)p + v83;
                  v81 = *(_QWORD *)((char *)p + v83 + 20);
                  v90 = v113 - 36;
                  v83 -= 36;
                  a1[28] = v81;
                  v113 = v90;
                  *((_DWORD *)a1 + 58) = *((_DWORD *)v89 - 1);
                }
                while ( !v87 );
                v61 = v82 + 1;
              }
            }
          }
          sub_566784(v105, v115);
          sub_56A528(v108, v105);
          sub_5677D4(v108, "...", 3);
          sub_56A6A8(v115);
          v91 = (void *)(*(_QWORD *)v108 - 24LL);
          if ( (__int64 *)(*(_QWORD *)v108 - 24LL) != &qword_6FD2E0 )
          {
            v36 = (unsigned int *)(*(_QWORD *)v108 - 8LL);
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
              operator delete(v91);
          }
          v92 = (void *)(v105[0] - 24);
          if ( (__int64 *)(v105[0] - 24) != &qword_6FD2E0 )
          {
            v38 = (unsigned int *)(v105[0] - 8);
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
              operator delete(v92);
          }
        }
        v35 = 0;
LABEL_116:
        v31 = v115[0];
        v32 = v61;
        v33 = v61;
        if ( *(_QWORD *)(v115[0] - 24LL) <= (unsigned __int64)v61 )
          goto LABEL_117;
      }
      std::vector<Caver::FontText::CharacterInfo>::_M_insert_aux();
      v31 = v115[0];
      v41 = *(_DWORD *)(v115[0] - 8LL);
      if ( v41 < 0 )
        goto LABEL_53;
LABEL_52:
      sub_568EA8(v115);
      v31 = v115[0];
      v41 = *(_DWORD *)(v115[0] - 8LL);
      goto LABEL_53;
    }
LABEL_117:
    if ( fabsf(*((float *)a1 + 18)) <= 0.001 && fabsf(*((float *)a1 + 19)) <= 0.001 )
      *((_OWORD *)a1 + 4) = *(_OWORD *)((char *)p + 4);
    if ( v113 != p )
    {
      v93 = 0;
      v94 = 4;
      if ( (*(_DWORD *)(v31 - 8) & 0x80000000) == 0 )
      {
LABEL_122:
        sub_568EA8(v115);
        v31 = v115[0];
        goto LABEL_124;
      }
      while ( 1 )
      {
LABEL_124:
        v95 = *(unsigned __int8 *)(v31 + v93);
        if ( v95 > 0x20 || ((1LL << v95) & 0x100000600LL) == 0 )
          Caver::Rectangle::ExpandToincludeRectangle(
            (Caver::Rectangle *)(a1 + 8),
            (const Caver::Rectangle *)((char *)p + v94));
        if ( ++v93 >= 0x8E38E38E38E38E39LL * ((v113 - (_BYTE *)p) >> 2) )
          break;
        v31 = v115[0];
        v94 += 36;
        if ( (*(_DWORD *)(v115[0] - 8LL) & 0x80000000) == 0 )
          goto LABEL_122;
      }
    }
    v96 = *((float *)a1 + 17);
    v97 = *((float *)a1 + 19);
    *((float *)a1 + 17) = v14;
    *((float *)a1 + 19) = (float)(v96 + v97) - v14;
    std::vector<Caver::FontText::CharacterInfo>::_M_range_insert<__gnu_cxx::__normal_iterator<Caver::FontText::CharacterInfo*,std::vector<Caver::FontText::CharacterInfo>>>();
    v98 = (_QWORD *)*((_QWORD *)&v109 + 1);
    if ( *((_QWORD *)&v109 + 1) )
    {
      v99 = *(_QWORD *)(*((_QWORD *)&v109 + 1) + 8LL) - 1LL;
      *(_QWORD *)(*((_QWORD *)&v109 + 1) + 8LL) = v99;
      if ( !v99 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v98 + 16LL))(v98);
        v100 = v98[2] - 1LL;
        v98[2] = v100;
        if ( !v100 )
          (*(void (__fastcall **)(_QWORD *))(*v98 + 24LL))(v98);
      }
    }
    if ( p )
      operator delete(p);
    v7 = v115[0];
    v8 = (__int64 *)(v115[0] - 24LL);
  }
  if ( v8 != &qword_6FD2E0 )
  {
    v101 = (unsigned int *)(v7 - 8);
    if ( &pthread_create )
    {
      do
        v102 = __ldaxr(v101);
      while ( __stlxr(v102 - 1, v101) );
    }
    else
    {
      v102 = (*v101)--;
    }
    if ( v102 <= 0 )
      operator delete(v8);
  }
}


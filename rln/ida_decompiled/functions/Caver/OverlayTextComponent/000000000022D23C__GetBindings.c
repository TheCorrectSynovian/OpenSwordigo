/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022D23C
 * Mangled: _ZN5Caver20OverlayTextComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::OverlayTextComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001FFEA0  Caver::OverlayTextComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x000000000022D0C0  Caver::OverlayTextComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001F95C0  Caver::OverlayComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001FFEA0  Caver::OverlayTextComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 323
 *   insn=0x000000000022D254 string=0x000000000022D258 "W"
 *   insn=0x000000000022D268 string=0x000000000022D26C "A"
 *   insn=0x000000000022D268 string=0x00000000001F95C0 "0'"
 *   insn=0x000000000022D26C string=0x0000000000596619 "text"
 *   insn=0x000000000022D278 string=0x000000000022D27C "O"
 *   insn=0x000000000022D298 string=0x000000000022D29C ")"
 *   insn=0x000000000022D2A4 string=0x000000000022D2A8 "t"
 *   insn=0x000000000022D2B8 string=0x000000000022D2BC ""
 *   insn=0x000000000022D2C8 string=0x000000000022D2CC "\t\t@"
 *   insn=0x000000000022D2D0 string=0x000000000022D2D4 ""
 *   insn=0x000000000022D2D8 string=0x000000000022D2DC "h"
 *   insn=0x000000000022D2DC string=0x000000000022D2E0 ""
 *   insn=0x000000000022D2E0 string=0x000000000022D2E4 "h"
 *   insn=0x000000000022D2F4 string=0x000000000022D2F8 "z)"
 *   insn=0x000000000022D2F8 string=0x00000000001F78E0 "0'"
 *   insn=0x000000000022D30C string=0x000000000022D310 "!"
 *   insn=0x000000000022D324 string=0x00000000005843B8 "textOffsetX"
 *   insn=0x000000000022D330 string=0x000000000022D334 "!"
 *   insn=0x000000000022D34C string=0x000000000022D350 "v"
 *   insn=0x000000000022D354 string=0x000000000022D358 ""
 *   insn=0x000000000022D360 string=0x000000000022D364 "t"
 *   insn=0x000000000022D374 string=0x000000000022D378 ""
 *   insn=0x000000000022D37C string=0x000000000022D380 "j"
 *   insn=0x000000000022D380 string=0x000000000022D384 "C"
 *   insn=0x000000000022D384 string=0x000000000022D388 "\t\t@"
 *   insn=0x000000000022D38C string=0x000000000022D390 ""
 *   insn=0x000000000022D394 string=0x000000000022D398 "h"
 *   insn=0x000000000022D398 string=0x000000000022D39C ""
 *   insn=0x000000000022D39C string=0x000000000022D3A0 "h"
 *   insn=0x000000000022D3B0 string=0x000000000022D3B4 "K)"
 *   insn=0x000000000022D3D0 string=0x000000000022D3D4 "a"
 *   insn=0x000000000022D3D8 string=0x00000000005843C4 "textOffsetY"
 *   insn=0x000000000022D400 string=0x000000000022D404 "I"
 *   insn=0x000000000022D40C string=0x000000000022D410 "t"
 *   insn=0x000000000022D420 string=0x000000000022D424 ""
 *   insn=0x000000000022D428 string=0x000000000022D42C "?"
 *   insn=0x000000000022D42C string=0x000000000022D430 "C"
 *   insn=0x000000000022D430 string=0x000000000022D434 "\t\t@"
 *   insn=0x000000000022D438 string=0x000000000022D43C ""
 *   insn=0x000000000022D440 string=0x000000000022D444 "h"
 *   insn=0x000000000022D444 string=0x000000000022D448 ""
 *   insn=0x000000000022D448 string=0x000000000022D44C "h"
 *   insn=0x000000000022D45C string=0x000000000022D460 " )"
 *   insn=0x000000000022D47C string=0x000000000022D480 "A"
 *   insn=0x000000000022D484 string=0x00000000005843D0 "spriteName"
 *   insn=0x000000000022D4B8 string=0x000000000022D4BC "t"
 *   insn=0x000000000022D4CC string=0x000000000022D4D0 ""
 *   insn=0x000000000022D4D8 string=0x000000000022D4DC "C"
 *   insn=0x000000000022D4DC string=0x000000000022D4E0 "\t\t@"
 *   insn=0x000000000022D4E4 string=0x000000000022D4E8 ""
 *   insn=0x000000000022D4EC string=0x000000000022D4F0 "h"
 *   insn=0x000000000022D4F0 string=0x000000000022D4F4 ""
 *   insn=0x000000000022D4F4 string=0x000000000022D4F8 "h"
 *   insn=0x000000000022D528 string=0x000000000022D52C "!"
 *   insn=0x000000000022D530 string=0x00000000005843DB "spriteOffsetX"
 *   insn=0x000000000022D544 string=0x000000000022D548 ""
 *   insn=0x000000000022D564 string=0x000000000022D568 "t"
 *   insn=0x000000000022D578 string=0x000000000022D57C ""
 *   insn=0x000000000022D584 string=0x000000000022D588 "C"
 *   insn=0x000000000022D588 string=0x000000000022D58C "\t\t@"
 *   insn=0x000000000022D590 string=0x000000000022D594 ""
 *   insn=0x000000000022D598 string=0x000000000022D59C "h"
 *   insn=0x000000000022D59C string=0x000000000022D5A0 ""
 *   insn=0x000000000022D5A0 string=0x000000000022D5A4 "h"
 *   insn=0x000000000022D5C4 string=0x000000000022D5C8 "a"
 *   insn=0x000000000022D5DC string=0x00000000005843E9 "spriteOffsetY"
 *   insn=0x000000000022D5E8 string=0x000000000022D5EC "s"
 *   insn=0x000000000022D5F0 string=0x000000000022D5F4 "("
 *   insn=0x000000000022D610 string=0x000000000022D614 "t"
 *   insn=0x000000000022D624 string=0x000000000022D628 ""
 *   insn=0x000000000022D630 string=0x000000000022D634 "C"
 *   insn=0x000000000022D634 string=0x000000000022D638 "\t\t@"
 *   insn=0x000000000022D63C string=0x000000000022D640 ""
 *   insn=0x000000000022D644 string=0x000000000022D648 "h"
 *   insn=0x000000000022D648 string=0x000000000022D64C ""
 *   insn=0x000000000022D64C string=0x000000000022D650 "h"
 *   insn=0x000000000022D670 string=0x000000000022D674 "A"
 *   insn=0x000000000022D694 string=0x000000000022D9E4 ";""
 *   insn=0x000000000022D6B4 string=0x000000000022D6B8 ")=G"
 *   insn=0x000000000022D6B8 string=0x000000000022D6BC "!"
 *   insn=0x000000000022D6BC string=0x000000000022D6C0 ")"
 *   insn=0x000000000022D6C0 string=0x000000000022D6C4 "\t"
 *   insn=0x000000000022D6C0 string=0x000000000022D864 "\t"
 *   insn=0x000000000022D6C4 string=0x000000000022D6C8 "*"
 *   insn=0x000000000022D6C8 string=0x000000000022D6CC "\n"
 *   insn=0x000000000022D6D0 string=0x000000000022D6D4 "g"
 *   insn=0x000000000022D6D4 string=0x000000000022D870 "?"
 *   insn=0x000000000022D6D8 string=0x000000000022D6DC ")=G"
 *   insn=0x000000000022D6DC string=0x000000000022D6E0 "!"
 *   insn=0x000000000022D6E0 string=0x000000000022D6E4 "\t"
 *   insn=0x000000000022D6E4 string=0x000000000022D6E8 "\t"
 *   insn=0x000000000022D6E4 string=0x000000000022D884 "\t"
 *   insn=0x000000000022D6E8 string=0x000000000022D6EC "*"
 *   insn=0x000000000022D6EC string=0x000000000022D6F0 "\n"
 *   insn=0x000000000022D6F4 string=0x000000000022D6F8 "f"
 *   insn=0x000000000022D6F8 string=0x000000000022D890 "?"
 *   insn=0x000000000022D6FC string=0x000000000022D700 ")=G"
 *   insn=0x000000000022D700 string=0x000000000022D704 "!"
 *   insn=0x000000000022D708 string=0x000000000022D70C "\t"
 *   insn=0x000000000022D708 string=0x000000000022D8A4 "\t"
 *   insn=0x000000000022D70C string=0x000000000022D710 "*"
 *   insn=0x000000000022D710 string=0x000000000022D714 "\n"
 *   insn=0x000000000022D718 string=0x000000000022D71C "e"
 *   insn=0x000000000022D71C string=0x000000000022D8B0 "?"
 *   insn=0x000000000022D720 string=0x000000000022D724 ")=G"
 *   insn=0x000000000022D724 string=0x000000000022D728 "!"
 *   insn=0x000000000022D72C string=0x000000000022D730 "\t"
 *   insn=0x000000000022D72C string=0x000000000022D8C4 "\t"
 *   insn=0x000000000022D730 string=0x000000000022D734 "*"
 *   insn=0x000000000022D734 string=0x000000000022D738 "\n"
 *   insn=0x000000000022D73C string=0x000000000022D740 "d"
 *   insn=0x000000000022D740 string=0x000000000022D8D0 "?"
 *   insn=0x000000000022D744 string=0x000000000022D748 ")=G"
 *   insn=0x000000000022D748 string=0x000000000022D74C "!"
 *   insn=0x000000000022D750 string=0x000000000022D754 "\t"
 *   insn=0x000000000022D750 string=0x000000000022D8E4 "\t"
 *   insn=0x000000000022D754 string=0x000000000022D758 "*"
 *   insn=0x000000000022D758 string=0x000000000022D75C "\n"
 *   insn=0x000000000022D760 string=0x000000000022D764 "c"
 *   insn=0x000000000022D764 string=0x000000000022D8F0 "?"
 *   insn=0x000000000022D768 string=0x000000000022D76C ")=G"
 *   insn=0x000000000022D76C string=0x000000000022D770 "!"
 *   insn=0x000000000022D774 string=0x000000000022D778 "\t"
 *   insn=0x000000000022D774 string=0x000000000022D904 "\t"
 *   insn=0x000000000022D778 string=0x000000000022D77C "*"
 *   insn=0x000000000022D77C string=0x000000000022D780 "\n"
 *   insn=0x000000000022D784 string=0x000000000022D788 "b"
 *   insn=0x000000000022D788 string=0x000000000022D910 "?"
 *   insn=0x000000000022D78C string=0x000000000022D790 ")=G"
 *   insn=0x000000000022D790 string=0x000000000022D794 "!"
 *   insn=0x000000000022D794 string=0x000000000022D798 "i"
 *   insn=0x000000000022D798 string=0x000000000022D79C "\t"
 *   insn=0x000000000022D798 string=0x000000000022D924 "\t"
 *   insn=0x000000000022D79C string=0x000000000022D7A0 "*"
 *   insn=0x000000000022D7A0 string=0x000000000022D7A4 "\n"
 *   insn=0x000000000022D7A8 string=0x000000000022D7AC "a"
 *   insn=0x000000000022D7AC string=0x000000000022D930 "?"
 *   insn=0x000000000022D7B0 string=0x000000000022D7B4 ")=G"
 *   insn=0x000000000022D7B4 string=0x000000000022D7B8 "!"
 *   insn=0x000000000022D7B8 string=0x000000000022D7BC "I"
 *   insn=0x000000000022D7BC string=0x000000000022D7C0 "\t"
 *   insn=0x000000000022D7BC string=0x000000000022D944 "\t"
 *   insn=0x000000000022D7C0 string=0x000000000022D7C4 "*"
 *   insn=0x000000000022D7C4 string=0x000000000022D7C8 "\n"
 *   insn=0x000000000022D7CC string=0x000000000022D7D0 "`"
 *   insn=0x000000000022D7D0 string=0x000000000022D950 "?"
 *   insn=0x000000000022D7D4 string=0x000000000022D7D8 ")=G"
 *   insn=0x000000000022D7D8 string=0x000000000022D7DC "!"
 *   insn=0x000000000022D7DC string=0x000000000022D7E0 ")"
 *   insn=0x000000000022D7E0 string=0x000000000022D7E4 "\t"
 *   insn=0x000000000022D7E0 string=0x000000000022D964 "\t"
 *   insn=0x000000000022D7E4 string=0x000000000022D7E8 "*"
 *   insn=0x000000000022D7E8 string=0x000000000022D7EC "\n"
 *   insn=0x000000000022D7F0 string=0x000000000022D7F4 "_"
 *   insn=0x000000000022D7F4 string=0x000000000022D970 "?"
 *   insn=0x000000000022D7F8 string=0x000000000022D7FC ")=G"
 *   insn=0x000000000022D7FC string=0x000000000022D800 "!"
 *   insn=0x000000000022D800 string=0x000000000022D804 "\t"
 *   insn=0x000000000022D804 string=0x000000000022D808 "\t"
 *   insn=0x000000000022D804 string=0x000000000022D984 "\t"
 *   insn=0x000000000022D808 string=0x000000000022D80C "*"
 *   insn=0x000000000022D80C string=0x000000000022D810 "\n"
 *   insn=0x000000000022D814 string=0x000000000022D818 "^"
 *   insn=0x000000000022D818 string=0x000000000022D990 "?"
 *   insn=0x000000000022D81C string=0x000000000022D820 ")=G"
 *   insn=0x000000000022D820 string=0x000000000022D824 "!"
 *   insn=0x000000000022D828 string=0x000000000022D82C "\t"
 *   insn=0x000000000022D828 string=0x000000000022D9A4 "\t"
 *   insn=0x000000000022D82C string=0x000000000022D830 "*"
 *   insn=0x000000000022D830 string=0x000000000022D834 "\n"
 *   insn=0x000000000022D838 string=0x000000000022D83C "]"
 *   insn=0x000000000022D83C string=0x000000000022D9B0 "?"
 *   insn=0x000000000022D840 string=0x000000000022D844 ")=G"
 *   insn=0x000000000022D844 string=0x000000000022D848 "!"
 *   insn=0x000000000022D84C string=0x000000000022D850 "\t"
 *   insn=0x000000000022D84C string=0x000000000022D9C4 "\t"
 *   insn=0x000000000022D850 string=0x000000000022D854 "*"
 *   insn=0x000000000022D854 string=0x000000000022D858 "\n"
 *   insn=0x000000000022D85C string=0x000000000022D860 "\"
 *   insn=0x000000000022D860 string=0x000000000022D9D0 "?"
 *   insn=0x000000000022D864 string=0x000000000022D868 "*"
 *   insn=0x000000000022D868 string=0x000000000022D86C "\n"
 *   insn=0x000000000022D884 string=0x000000000022D888 "*"
 *   insn=0x000000000022D888 string=0x000000000022D88C "\n"
 *   insn=0x000000000022D8A4 string=0x000000000022D8A8 "*"
 *   insn=0x000000000022D8A8 string=0x000000000022D8AC "\n"
 *   insn=0x000000000022D8C4 string=0x000000000022D8C8 "*"
 *   insn=0x000000000022D8C8 string=0x000000000022D8CC "\n"
 *   insn=0x000000000022D8D0 string=0x000000000022D8D4 ","
 *   insn=0x000000000022D8E4 string=0x000000000022D8E8 "*"
 *   insn=0x000000000022D8E8 string=0x000000000022D8EC "\n"
 *   insn=0x000000000022D904 string=0x000000000022D908 "*"
 *   insn=0x000000000022D908 string=0x000000000022D90C "\n"
 *   insn=0x000000000022D924 string=0x000000000022D928 "*"
 *   insn=0x000000000022D928 string=0x000000000022D92C "\n"
 *   insn=0x000000000022D930 string=0x000000000022D934 "l"
 *   insn=0x000000000022D944 string=0x000000000022D948 "*"
 *   insn=0x000000000022D948 string=0x000000000022D94C "\n"
 *   insn=0x000000000022D964 string=0x000000000022D968 "*"
 *   insn=0x000000000022D968 string=0x000000000022D96C "\n"
 *   insn=0x000000000022D984 string=0x000000000022D988 "*"
 *   insn=0x000000000022D988 string=0x000000000022D98C "\n"
 *   insn=0x000000000022D990 string=0x000000000022D994 "L"
 *   insn=0x000000000022D9A4 string=0x000000000022D9A8 "*"
 *   insn=0x000000000022D9A8 string=0x000000000022D9AC "\n"
 *   insn=0x000000000022D9B0 string=0x000000000022D9B4 ","
 *   insn=0x000000000022D9B8 string=0x000000000022D9BC "z"
 *   insn=0x000000000022D9BC string=0x000000000022D9C0 "."
 *   insn=0x000000000022D9C4 string=0x000000000022D9C8 "*"
 *   insn=0x000000000022D9C8 string=0x000000000022D9CC "\n"
 *   insn=0x000000000022D9D8 string=0x000000000022D9DC "r"
 *   insn=0x000000000022D9DC string=0x000000000022D9E0 "*"
 *   insn=0x000000000022D9E4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000022D9EC string=0x000000000022D9F0 "(a"
 *   insn=0x000000000022D9FC string=0x000000000022DA00 "J=G"
 *   insn=0x000000000022DA00 string=0x000000000022DA04 ")!"
 *   insn=0x000000000022DA08 string=0x000000000022DA0C "*"
 *   insn=0x000000000022DA08 string=0x000000000022DA20 "*"
 *   insn=0x000000000022DA0C string=0x000000000022DA10 "K"
 *   insn=0x000000000022DA10 string=0x000000000022DA14 "+"
 *   insn=0x000000000022DA1C string=0x000000000022DA2C "_"
 *   insn=0x000000000022DA20 string=0x000000000022DA24 "K"
 *   insn=0x000000000022DA24 string=0x000000000022DA28 "+"
 *   insn=0x000000000022DA38 string=0x000000000022DA3C "Z"
 *   insn=0x000000000022DA58 string=0x000000000022DA5C ")=G"
 *   insn=0x000000000022DA5C string=0x000000000022DA60 "!"
 *   insn=0x000000000022DA64 string=0x000000000022DA68 "\t"
 *   insn=0x000000000022DA64 string=0x000000000022DD98 "\t"
 *   insn=0x000000000022DA68 string=0x000000000022DA6C "*"
 *   insn=0x000000000022DA6C string=0x000000000022DA70 "\n"
 *   insn=0x000000000022DA78 string=0x000000000022DD80 "?"
 *   insn=0x000000000022DA84 string=0x000000000022DA88 "(a"
 *   insn=0x000000000022DA94 string=0x000000000022DA98 "J=G"
 *   insn=0x000000000022DA98 string=0x000000000022DA9C ")!"
 *   insn=0x000000000022DAA0 string=0x000000000022DAA4 "*"
 *   insn=0x000000000022DAA0 string=0x000000000022DAB8 "*"
 *   insn=0x000000000022DAA4 string=0x000000000022DAA8 "K"
 *   insn=0x000000000022DAA8 string=0x000000000022DAAC "+"
 *   insn=0x000000000022DAB4 string=0x000000000022DAC4 "_"
 *   insn=0x000000000022DAB8 string=0x000000000022DABC "K"
 *   insn=0x000000000022DABC string=0x000000000022DAC0 "+"
 *   insn=0x000000000022DAD0 string=0x000000000022DAD4 "4"
 *   insn=0x000000000022DAE8 string=0x000000000022DAEC " "
 *   insn=0x000000000022DAF0 string=0x000000000022DAF4 ")=G"
 *   insn=0x000000000022DAF4 string=0x000000000022DAF8 "!"
 *   insn=0x000000000022DAFC string=0x000000000022DB00 "\t"
 *   insn=0x000000000022DB00 string=0x000000000022DB04 "*"
 *   insn=0x000000000022DB04 string=0x000000000022DB08 "\n"
 *   insn=0x000000000022DB1C string=0x000000000022DB20 "(a"
 *   insn=0x000000000022DB2C string=0x000000000022DB30 "J=G"
 *   insn=0x000000000022DB30 string=0x000000000022DB34 ")!"
 *   insn=0x000000000022DB38 string=0x000000000022DB3C "*"
 *   insn=0x000000000022DB38 string=0x000000000022DB50 "*"
 *   insn=0x000000000022DB3C string=0x000000000022DB40 "K"
 *   insn=0x000000000022DB40 string=0x000000000022DB44 "+"
 *   insn=0x000000000022DB4C string=0x000000000022DB5C "_"
 *   insn=0x000000000022DB50 string=0x000000000022DB54 "K"
 *   insn=0x000000000022DB54 string=0x000000000022DB58 "+"
 *   insn=0x000000000022DB80 string=0x000000000022DB84 "`"
 *   insn=0x000000000022DB88 string=0x000000000022DB8C ")=G"
 *   insn=0x000000000022DB8C string=0x000000000022DB90 "!"
 *   insn=0x000000000022DB90 string=0x000000000022DB94 ")"
 *   insn=0x000000000022DB94 string=0x000000000022DB98 "\t"
 *   insn=0x000000000022DB98 string=0x000000000022DB9C "*"
 *   insn=0x000000000022DB9C string=0x000000000022DBA0 "\n"
 *   insn=0x000000000022DBA4 string=0x000000000022DBA8 "v"
 *   insn=0x000000000022DBB4 string=0x000000000022DBB8 "(a"
 *   insn=0x000000000022DBC4 string=0x000000000022DBC8 "J=G"
 *   insn=0x000000000022DBC8 string=0x000000000022DBCC ")!"
 *   insn=0x000000000022DBD0 string=0x000000000022DBD4 "*"
 *   insn=0x000000000022DBD0 string=0x000000000022DBE8 "*"
 *   insn=0x000000000022DBD4 string=0x000000000022DBD8 "K"
 *   insn=0x000000000022DBD8 string=0x000000000022DBDC "+"
 *   insn=0x000000000022DBE4 string=0x000000000022DBF4 "_"
 *   insn=0x000000000022DBE8 string=0x000000000022DBEC "K"
 *   insn=0x000000000022DBEC string=0x000000000022DBF0 "+"
 *   insn=0x000000000022DC20 string=0x000000000022DC24 ")=G"
 *   insn=0x000000000022DC24 string=0x000000000022DC28 "!"
 *   insn=0x000000000022DC28 string=0x000000000022DC2C "i"
 *   insn=0x000000000022DC2C string=0x000000000022DC30 "\t"
 *   insn=0x000000000022DC30 string=0x000000000022DC34 "*"
 *   insn=0x000000000022DC34 string=0x000000000022DC38 "\n"
 *   insn=0x000000000022DC3C string=0x000000000022DC40 "P"
 *   insn=0x000000000022DC4C string=0x000000000022DC50 "(a"
 *   insn=0x000000000022DC5C string=0x000000000022DC60 "J=G"
 *   insn=0x000000000022DC60 string=0x000000000022DC64 ")!"
 *   insn=0x000000000022DC68 string=0x000000000022DC6C "*"
 *   insn=0x000000000022DC68 string=0x000000000022DC80 "*"
 *   insn=0x000000000022DC6C string=0x000000000022DC70 "K"
 *   insn=0x000000000022DC70 string=0x000000000022DC74 "+"
 *   insn=0x000000000022DC7C string=0x000000000022DC8C "_"
 *   insn=0x000000000022DC80 string=0x000000000022DC84 "K"
 *   insn=0x000000000022DC84 string=0x000000000022DC88 "+"
 *   insn=0x000000000022DCB8 string=0x000000000022DCBC ")=G"
 *   insn=0x000000000022DCBC string=0x000000000022DCC0 "!"
 *   insn=0x000000000022DCC4 string=0x000000000022DCC8 "\t"
 *   insn=0x000000000022DCC8 string=0x000000000022DCCC "*"
 *   insn=0x000000000022DCCC string=0x000000000022DCD0 "\n"
 *   insn=0x000000000022DCD4 string=0x000000000022DCD8 "*"
 *   insn=0x000000000022DCE4 string=0x000000000022DCE8 "J"
 *   insn=0x000000000022DCEC string=0x000000000022DCF0 "(a"
 *   insn=0x000000000022DCFC string=0x000000000022DD00 "J=G"
 *   insn=0x000000000022DD00 string=0x000000000022DD04 ")!"
 *   insn=0x000000000022DD08 string=0x000000000022DD0C "*"
 *   insn=0x000000000022DD08 string=0x000000000022DD20 "*"
 *   insn=0x000000000022DD0C string=0x000000000022DD10 "K"
 *   insn=0x000000000022DD10 string=0x000000000022DD14 "+"
 *   insn=0x000000000022DD1C string=0x000000000022DD2C "_"
 *   insn=0x000000000022DD20 string=0x000000000022DD24 "K"
 *   insn=0x000000000022DD24 string=0x000000000022DD28 "+"
 *   insn=0x000000000022DD4C string=0x000000000022DD50 ")"
 *   insn=0x000000000022DD60 string=0x000000000022DD64 ")=G"
 *   insn=0x000000000022DD64 string=0x000000000022DD68 "!"
 *   insn=0x000000000022DD68 string=0x000000000022DD6C "i"
 *   insn=0x000000000022DD6C string=0x000000000022DD70 "\t"
 *   insn=0x000000000022DD70 string=0x000000000022DD74 "*"
 *   insn=0x000000000022DD74 string=0x000000000022DD78 "\n"
 *   insn=0x000000000022DD80 string=0x000000000022DD84 "l"
 *   insn=0x000000000022DD98 string=0x000000000022DD9C "*"
 *   insn=0x000000000022DD9C string=0x000000000022DDA0 "\n"
 *   insn=0x000000000022DDA0 string=0x000000000022DDA4 "?"
 *   insn=0x000000000022DDA4 string=0x000000000022DDA8 ""
 *   insn=0x000000000022DDB4 string=0x000000000022DDB8 ":H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OverlayTextComponent::GetBindings(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  void *v4; // x0
  void *v5; // x0
  __int64 v6; // x20
  void *v7; // x0
  void *v8; // x0
  __int64 v9; // x20
  void *v10; // x0
  void *v11; // x0
  __int64 v12; // x20
  void *v13; // x0
  void *v14; // x0
  __int64 v15; // x20
  void *v16; // x0
  void *v17; // x0
  __int64 v18; // x20
  void *v19; // x0
  void *v20; // x0
  unsigned int *v21; // x8
  int v22; // w9
  unsigned int *v23; // x8
  int v24; // w9
  unsigned int *v25; // x8
  int v26; // w9
  unsigned int *v27; // x8
  int v28; // w9
  unsigned int *v29; // x8
  int v30; // w9
  unsigned int *v31; // x8
  int v32; // w9
  unsigned int *v33; // x8
  int v34; // w9
  unsigned int *v35; // x8
  int v36; // w9
  unsigned int *v37; // x8
  int v38; // w9
  unsigned int *v39; // x8
  int v40; // w9
  unsigned int *v41; // x8
  int v42; // w9
  unsigned int *v43; // x8
  int v44; // w9
  __int64 v45; // [xsp+8h] [xbp-78h] BYREF
  int v46; // [xsp+18h] [xbp-68h]
  __int64 v47; // [xsp+20h] [xbp-60h] BYREF
  __int64 v48; // [xsp+28h] [xbp-58h]
  int v49; // [xsp+30h] [xbp-50h]
  __int64 v50; // [xsp+38h] [xbp-48h]

  v50 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::OverlayComponent::GetBindings();
  sub_566BB8((int)&v45, "text");
  v46 = 100;
  sub_56A528(&v47, &v45);
  v48 = 0x100000001LL;
  v49 = 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v3 = v46;
    sub_56A528(v3 + 8, &v47);
    *(_DWORD *)(v3 + 24) = v49;
    *(_QWORD *)(v3 + 16) = v48;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v4 = (void *)(v47 - 24);
  if ( (__int64 *)(v47 - 24) != &qword_6FD2E0 )
  {
    v21 = (unsigned int *)(v47 - 8);
    if ( &pthread_create )
    {
      do
        v22 = __ldaxr(v21);
      while ( __stlxr(v22 - 1, v21) );
    }
    else
    {
      v22 = (*v21)--;
    }
    if ( v22 <= 0 )
      operator delete(v4);
  }
  v5 = (void *)(v45 - 24);
  if ( (__int64 *)(v45 - 24) != &qword_6FD2E0 )
  {
    v23 = (unsigned int *)(v45 - 8);
    if ( &pthread_create )
    {
      do
        v24 = __ldaxr(v23);
      while ( __stlxr(v24 - 1, v23) );
    }
    else
    {
      v24 = (*v23)--;
    }
    if ( v24 <= 0 )
      operator delete(v5);
  }
  sub_566BB8((int)&v45, "textOffsetX");
  v46 = 101;
  sub_56A528(&v47, &v45);
  v49 = 0;
  v48 = 0x500000001LL;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v6 = v46;
    sub_56A528(v6 + 8, &v47);
    *(_DWORD *)(v6 + 24) = v49;
    *(_QWORD *)(v6 + 16) = v48;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v7 = (void *)(v47 - 24);
  if ( (__int64 *)(v47 - 24) != &qword_6FD2E0 )
  {
    v25 = (unsigned int *)(v47 - 8);
    if ( &pthread_create )
    {
      do
        v26 = __ldaxr(v25);
      while ( __stlxr(v26 - 1, v25) );
    }
    else
    {
      v26 = (*v25)--;
    }
    if ( v26 <= 0 )
      operator delete(v7);
  }
  v8 = (void *)(v45 - 24);
  if ( (__int64 *)(v45 - 24) != &qword_6FD2E0 )
  {
    v27 = (unsigned int *)(v45 - 8);
    if ( &pthread_create )
    {
      do
        v28 = __ldaxr(v27);
      while ( __stlxr(v28 - 1, v27) );
    }
    else
    {
      v28 = (*v27)--;
    }
    if ( v28 <= 0 )
      operator delete(v8);
  }
  sub_566BB8((int)&v45, "textOffsetY");
  v46 = 102;
  sub_56A528(&v47, &v45);
  v48 = 0x500000001LL;
  v49 = 0;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v9 = v46;
    sub_56A528(v9 + 8, &v47);
    *(_DWORD *)(v9 + 24) = v49;
    *(_QWORD *)(v9 + 16) = v48;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v10 = (void *)(v47 - 24);
  if ( (__int64 *)(v47 - 24) != &qword_6FD2E0 )
  {
    v29 = (unsigned int *)(v47 - 8);
    if ( &pthread_create )
    {
      do
        v30 = __ldaxr(v29);
      while ( __stlxr(v30 - 1, v29) );
    }
    else
    {
      v30 = (*v29)--;
    }
    if ( v30 <= 0 )
      operator delete(v10);
  }
  v11 = (void *)(v45 - 24);
  if ( (__int64 *)(v45 - 24) != &qword_6FD2E0 )
  {
    v31 = (unsigned int *)(v45 - 8);
    if ( &pthread_create )
    {
      do
        v32 = __ldaxr(v31);
      while ( __stlxr(v32 - 1, v31) );
    }
    else
    {
      v32 = (*v31)--;
    }
    if ( v32 <= 0 )
      operator delete(v11);
  }
  sub_566BB8((int)&v45, "spriteName");
  v46 = 103;
  sub_56A528(&v47, &v45);
  v48 = 0x100000001LL;
  v49 = 0;
  v12 = *(_QWORD *)(a2 + 8);
  if ( v12 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v12 = v46;
    sub_56A528(v12 + 8, &v47);
    *(_DWORD *)(v12 + 24) = v49;
    *(_QWORD *)(v12 + 16) = v48;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v13 = (void *)(v47 - 24);
  if ( (__int64 *)(v47 - 24) != &qword_6FD2E0 )
  {
    v33 = (unsigned int *)(v47 - 8);
    if ( &pthread_create )
    {
      do
        v34 = __ldaxr(v33);
      while ( __stlxr(v34 - 1, v33) );
    }
    else
    {
      v34 = (*v33)--;
    }
    if ( v34 <= 0 )
      operator delete(v13);
  }
  v14 = (void *)(v45 - 24);
  if ( (__int64 *)(v45 - 24) != &qword_6FD2E0 )
  {
    v35 = (unsigned int *)(v45 - 8);
    if ( &pthread_create )
    {
      do
        v36 = __ldaxr(v35);
      while ( __stlxr(v36 - 1, v35) );
    }
    else
    {
      v36 = (*v35)--;
    }
    if ( v36 <= 0 )
      operator delete(v14);
  }
  sub_566BB8((int)&v45, "spriteOffsetX");
  v46 = 104;
  sub_56A528(&v47, &v45);
  v48 = 0x500000001LL;
  v49 = 0;
  v15 = *(_QWORD *)(a2 + 8);
  if ( v15 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v15 = v46;
    sub_56A528(v15 + 8, &v47);
    *(_DWORD *)(v15 + 24) = v49;
    *(_QWORD *)(v15 + 16) = v48;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v16 = (void *)(v47 - 24);
  if ( (__int64 *)(v47 - 24) != &qword_6FD2E0 )
  {
    v37 = (unsigned int *)(v47 - 8);
    if ( &pthread_create )
    {
      do
        v38 = __ldaxr(v37);
      while ( __stlxr(v38 - 1, v37) );
    }
    else
    {
      v38 = (*v37)--;
    }
    if ( v38 <= 0 )
      operator delete(v16);
  }
  v17 = (void *)(v45 - 24);
  if ( (__int64 *)(v45 - 24) != &qword_6FD2E0 )
  {
    v39 = (unsigned int *)(v45 - 8);
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
      operator delete(v17);
  }
  sub_566BB8((int)&v45, "spriteOffsetY");
  v46 = 105;
  sub_56A528(&v47, &v45);
  v48 = 0x500000001LL;
  v49 = 0;
  v18 = *(_QWORD *)(a2 + 8);
  if ( v18 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v18 = v46;
    sub_56A528(v18 + 8, &v47);
    *(_DWORD *)(v18 + 24) = v49;
    *(_QWORD *)(v18 + 16) = v48;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v19 = (void *)(v47 - 24);
  if ( (__int64 *)(v47 - 24) != &qword_6FD2E0 )
  {
    v41 = (unsigned int *)(v47 - 8);
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
      operator delete(v19);
  }
  v20 = (void *)(v45 - 24);
  if ( (__int64 *)(v45 - 24) != &qword_6FD2E0 )
  {
    v43 = (unsigned int *)(v45 - 8);
    if ( &pthread_create )
    {
      do
        v44 = __ldaxr(v43);
      while ( __stlxr(v44 - 1, v43) );
    }
    else
    {
      v44 = (*v43)--;
    }
    if ( v44 <= 0 )
      operator delete(v20);
  }
}


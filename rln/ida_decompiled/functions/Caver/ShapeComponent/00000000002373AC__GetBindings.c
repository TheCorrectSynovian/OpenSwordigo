/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002373AC
 * Mangled: _ZN5Caver14ShapeComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::ShapeComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x0000000000203A90  Caver::ShapeComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000236DAC  Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000002382C8  `non-virtual thunk to'Caver::ShapeComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 478
 *   insn=0x00000000002373C4 string=0x00000000002373C8 "W"
 *   insn=0x00000000002373DC string=0x00000000002373E0 "a"
 *   insn=0x00000000002373DC string=0x00000000001FB3B0 "0'"
 *   insn=0x00000000002373E0 string=0x0000000000583F74 "type"
 *   insn=0x0000000000237408 string=0x000000000023740C "G"
 *   insn=0x000000000023740C string=0x0000000000237410 " "
 *   insn=0x000000000023741C string=0x0000000000237420 "u"
 *   insn=0x0000000000237430 string=0x0000000000237434 ""
 *   insn=0x0000000000237438 string=0x000000000023743C ";"
 *   insn=0x000000000023743C string=0x0000000000237440 "C"
 *   insn=0x0000000000237440 string=0x0000000000237444 "\t\t@"
 *   insn=0x0000000000237448 string=0x000000000023744C ""
 *   insn=0x0000000000237450 string=0x0000000000237454 "h"
 *   insn=0x0000000000237454 string=0x0000000000237458 ""
 *   insn=0x0000000000237458 string=0x000000000023745C "h"
 *   insn=0x0000000000237470 string=0x00000000001F78E0 "0'"
 *   insn=0x0000000000237474 string=0x0000000000237478 "v%"
 *   insn=0x0000000000237488 string=0x00000000002379C4 "i%"
 *   insn=0x0000000000237498 string=0x00000000002379E8 "i%"
 *   insn=0x00000000002374A8 string=0x00000000002374AC "a'"
 *   insn=0x00000000002374AC string=0x00000000002374B0 "a"
 *   insn=0x00000000002374B0 string=0x0000000000584800 "centerX"
 *   insn=0x00000000002374C4 string=0x00000000002374C8 "("
 *   insn=0x00000000002374DC string=0x00000000002374E0 "h"
 *   insn=0x00000000002374E0 string=0x00000000002374E4 ""
 *   insn=0x00000000002374EC string=0x00000000002374F0 "t"
 *   insn=0x0000000000237500 string=0x0000000000237504 ""
 *   insn=0x0000000000237508 string=0x000000000023750C ""
 *   insn=0x000000000023750C string=0x0000000000237510 "C"
 *   insn=0x0000000000237510 string=0x0000000000237514 "\t\t@"
 *   insn=0x0000000000237518 string=0x000000000023751C ""
 *   insn=0x0000000000237520 string=0x0000000000237524 "h"
 *   insn=0x0000000000237524 string=0x0000000000237528 ""
 *   insn=0x0000000000237528 string=0x000000000023752C "h"
 *   insn=0x000000000023752C string=0x0000000000237530 "&"
 *   insn=0x0000000000237534 string=0x000000000059257C "left"
 *   insn=0x0000000000237560 string=0x0000000000237564 "h"
 *   insn=0x0000000000237564 string=0x0000000000237568 ""
 *   insn=0x0000000000237570 string=0x0000000000237574 "t"
 *   insn=0x0000000000237578 string=0x000000000023757C "@"
 *   insn=0x0000000000237584 string=0x0000000000237588 ""
 *   insn=0x0000000000237590 string=0x0000000000237594 "C"
 *   insn=0x0000000000237594 string=0x0000000000237598 "\t\t@"
 *   insn=0x000000000023759C string=0x00000000002375A0 ""
 *   insn=0x00000000002375A4 string=0x00000000002375A8 "h"
 *   insn=0x00000000002375A8 string=0x00000000002375AC ""
 *   insn=0x00000000002375AC string=0x00000000002375B0 "h"
 *   insn=0x00000000002375B0 string=0x00000000002375B4 "0"
 *   insn=0x00000000002375D4 string=0x0000000000237A4C "i%"
 *   insn=0x00000000002375E0 string=0x00000000002375E4 "a$"
 *   insn=0x00000000002375E4 string=0x00000000002375E8 "a"
 *   insn=0x00000000002375E4 string=0x0000000000237A70 "i%"
 *   insn=0x00000000002375E8 string=0x0000000000584808 "centerY"
 *   insn=0x00000000002375F4 string=0x00000000002375F8 "p"
 *   insn=0x00000000002375FC string=0x0000000000237600 "H"
 *   insn=0x000000000023761C string=0x0000000000237620 "t"
 *   insn=0x0000000000237624 string=0x0000000000237628 "@"
 *   insn=0x0000000000237630 string=0x0000000000237634 ""
 *   insn=0x000000000023763C string=0x0000000000237640 "C"
 *   insn=0x0000000000237640 string=0x0000000000237644 "\t\t@"
 *   insn=0x0000000000237648 string=0x000000000023764C ""
 *   insn=0x0000000000237650 string=0x0000000000237654 "h"
 *   insn=0x0000000000237654 string=0x0000000000237658 ""
 *   insn=0x0000000000237658 string=0x000000000023765C "h"
 *   insn=0x000000000023765C string=0x0000000000237660 "0"
 *   insn=0x0000000000237680 string=0x0000000000237A94 "i%"
 *   insn=0x000000000023768C string=0x0000000000237690 "A!"
 *   insn=0x0000000000237690 string=0x0000000000237AB8 "i%"
 *   insn=0x0000000000237694 string=0x000000000059258D "right"
 *   insn=0x00000000002376A0 string=0x00000000002376A4 "E"
 *   insn=0x00000000002376C8 string=0x00000000002376CC "t"
 *   insn=0x00000000002376D0 string=0x00000000002376D4 "@"
 *   insn=0x00000000002376DC string=0x00000000002376E0 ""
 *   insn=0x00000000002376E8 string=0x00000000002376EC "C"
 *   insn=0x00000000002376EC string=0x00000000002376F0 "\t\t@"
 *   insn=0x00000000002376F4 string=0x00000000002376F8 ""
 *   insn=0x00000000002376FC string=0x0000000000237700 "h"
 *   insn=0x0000000000237700 string=0x0000000000237704 ""
 *   insn=0x0000000000237704 string=0x0000000000237708 "h"
 *   insn=0x0000000000237708 string=0x000000000023770C "0"
 *   insn=0x0000000000237718 string=0x000000000023771C "q"
 *   insn=0x000000000023772C string=0x0000000000237ADC "i%"
 *   insn=0x0000000000237738 string=0x000000000023773C "!"
 *   insn=0x000000000023773C string=0x0000000000237740 "a"
 *   insn=0x000000000023773C string=0x0000000000237B00 "i%"
 *   insn=0x0000000000237740 string=0x0000000000583F89 "radius"
 *   insn=0x0000000000237754 string=0x0000000000237758 "h"
 *   insn=0x0000000000237768 string=0x000000000023776C "o"
 *   insn=0x0000000000237774 string=0x0000000000237778 "t"
 *   insn=0x000000000023777C string=0x0000000000237780 "@"
 *   insn=0x0000000000237788 string=0x000000000023778C ""
 *   insn=0x0000000000237790 string=0x0000000000237794 "e"
 *   insn=0x0000000000237794 string=0x0000000000237798 "C"
 *   insn=0x0000000000237798 string=0x000000000023779C "\t\t@"
 *   insn=0x00000000002377A0 string=0x00000000002377A4 ""
 *   insn=0x00000000002377A8 string=0x00000000002377AC "h"
 *   insn=0x00000000002377AC string=0x00000000002377B0 ""
 *   insn=0x00000000002377B0 string=0x00000000002377B4 "h"
 *   insn=0x00000000002377B4 string=0x00000000002377B8 "0"
 *   insn=0x00000000002377C4 string=0x00000000002377C8 "F"
 *   insn=0x00000000002377D4 string=0x00000000002377D8 "a"
 *   insn=0x00000000002377D8 string=0x0000000000237B24 "i%"
 *   insn=0x00000000002377E8 string=0x00000000002377EC "a"
 *   insn=0x00000000002377E8 string=0x0000000000237B48 "i%"
 *   insn=0x00000000002377EC string=0x00000000005847F9 "bottom"
 *   insn=0x0000000000237814 string=0x0000000000237818 "D"
 *   insn=0x0000000000237820 string=0x0000000000237824 "t"
 *   insn=0x0000000000237834 string=0x0000000000237838 ""
 *   insn=0x000000000023783C string=0x0000000000237840 ":"
 *   insn=0x0000000000237840 string=0x0000000000237844 "C"
 *   insn=0x0000000000237844 string=0x0000000000237848 "\t\t@"
 *   insn=0x000000000023784C string=0x0000000000237850 ""
 *   insn=0x0000000000237854 string=0x0000000000237858 "h"
 *   insn=0x0000000000237858 string=0x000000000023785C ""
 *   insn=0x000000000023785C string=0x0000000000237860 "h"
 *   insn=0x0000000000237870 string=0x0000000000237874 ""
 *   insn=0x0000000000237880 string=0x0000000000237884 "A"
 *   insn=0x0000000000237884 string=0x0000000000237B6C "i%"
 *   insn=0x0000000000237890 string=0x0000000000237894 " "
 *   insn=0x0000000000237894 string=0x0000000000237898 "i%"
 *   insn=0x0000000000237898 string=0x000000000023789C ")=G"
 *   insn=0x000000000023789C string=0x00000000002378A0 "!"
 *   insn=0x00000000002378A4 string=0x00000000002378A8 "\t"
 *   insn=0x00000000002378A4 string=0x0000000000237C20 "\t"
 *   insn=0x00000000002378A8 string=0x00000000002378AC "*"
 *   insn=0x00000000002378AC string=0x00000000002378B0 "\n"
 *   insn=0x00000000002378B8 string=0x0000000000237C2C "?"
 *   insn=0x00000000002378D8 string=0x0000000000237B90 "i%"
 *   insn=0x00000000002378E4 string=0x00000000002378E8 "a"
 *   insn=0x00000000002378E8 string=0x0000000000237BB4 "i%"
 *   insn=0x00000000002378EC string=0x000000000059681B "top"
 *   insn=0x0000000000237900 string=0x0000000000237904 ""
 *   insn=0x0000000000237920 string=0x0000000000237924 "t"
 *   insn=0x0000000000237934 string=0x0000000000237938 ""
 *   insn=0x0000000000237940 string=0x0000000000237944 "C"
 *   insn=0x0000000000237944 string=0x0000000000237948 "\t\t@"
 *   insn=0x000000000023794C string=0x0000000000237950 ""
 *   insn=0x0000000000237954 string=0x0000000000237958 "h"
 *   insn=0x0000000000237958 string=0x000000000023795C ""
 *   insn=0x000000000023795C string=0x0000000000237960 "h"
 *   insn=0x0000000000237984 string=0x0000000000237BD8 "i%"
 *   insn=0x0000000000237990 string=0x0000000000237994 "A"
 *   insn=0x0000000000237994 string=0x0000000000237BFC "i%"
 *   insn=0x00000000002379A4 string=0x0000000000237DC0 "D"
 *   insn=0x00000000002379C4 string=0x00000000002379C8 ")=G"
 *   insn=0x00000000002379C8 string=0x00000000002379CC "!"
 *   insn=0x00000000002379D0 string=0x00000000002379D4 "\t"
 *   insn=0x00000000002379D0 string=0x0000000000237A0C "\t"
 *   insn=0x00000000002379D4 string=0x00000000002379D8 "*"
 *   insn=0x00000000002379D8 string=0x00000000002379DC "\n"
 *   insn=0x00000000002379E0 string=0x00000000002379E4 ""
 *   insn=0x00000000002379E4 string=0x0000000000237A18 "?"
 *   insn=0x00000000002379E8 string=0x00000000002379EC ")=G"
 *   insn=0x00000000002379EC string=0x00000000002379F0 "!"
 *   insn=0x00000000002379F4 string=0x00000000002379F8 "\t"
 *   insn=0x00000000002379F4 string=0x0000000000237A2C "\t"
 *   insn=0x00000000002379F8 string=0x00000000002379FC "*"
 *   insn=0x00000000002379FC string=0x0000000000237A00 "\n"
 *   insn=0x0000000000237A08 string=0x0000000000237A38 "?"
 *   insn=0x0000000000237A0C string=0x0000000000237A10 "*"
 *   insn=0x0000000000237A10 string=0x0000000000237A14 "\n"
 *   insn=0x0000000000237A20 string=0x0000000000237A24 "`"
 *   insn=0x0000000000237A2C string=0x0000000000237A30 "*"
 *   insn=0x0000000000237A30 string=0x0000000000237A34 "\n"
 *   insn=0x0000000000237A40 string=0x0000000000237A44 "X"
 *   insn=0x0000000000237A4C string=0x0000000000237A50 ")=G"
 *   insn=0x0000000000237A50 string=0x0000000000237A54 "!"
 *   insn=0x0000000000237A54 string=0x0000000000237A58 "I"
 *   insn=0x0000000000237A58 string=0x0000000000237A5C "\t"
 *   insn=0x0000000000237A58 string=0x0000000000237C40 "\t"
 *   insn=0x0000000000237A5C string=0x0000000000237A60 "*"
 *   insn=0x0000000000237A60 string=0x0000000000237A64 "\n"
 *   insn=0x0000000000237A68 string=0x0000000000237A6C "x"
 *   insn=0x0000000000237A6C string=0x0000000000237C4C "?"
 *   insn=0x0000000000237A70 string=0x0000000000237A74 ")=G"
 *   insn=0x0000000000237A74 string=0x0000000000237A78 "!"
 *   insn=0x0000000000237A78 string=0x0000000000237A7C ")"
 *   insn=0x0000000000237A7C string=0x0000000000237A80 "\t"
 *   insn=0x0000000000237A7C string=0x0000000000237C60 "\t"
 *   insn=0x0000000000237A80 string=0x0000000000237A84 "*"
 *   insn=0x0000000000237A84 string=0x0000000000237A88 "\n"
 *   insn=0x0000000000237A8C string=0x0000000000237A90 "w"
 *   insn=0x0000000000237A90 string=0x0000000000237C6C "?"
 *   insn=0x0000000000237A94 string=0x0000000000237A98 ")=G"
 *   insn=0x0000000000237A98 string=0x0000000000237A9C "!"
 *   insn=0x0000000000237A9C string=0x0000000000237AA0 "\t"
 *   insn=0x0000000000237AA0 string=0x0000000000237AA4 "\t"
 *   insn=0x0000000000237AA0 string=0x0000000000237C80 "\t"
 *   insn=0x0000000000237AA4 string=0x0000000000237AA8 "*"
 *   insn=0x0000000000237AA8 string=0x0000000000237AAC "\n"
 *   insn=0x0000000000237AB0 string=0x0000000000237AB4 "v"
 *   insn=0x0000000000237AB4 string=0x0000000000237C8C "?"
 *   insn=0x0000000000237AB8 string=0x0000000000237ABC ")=G"
 *   insn=0x0000000000237ABC string=0x0000000000237AC0 "!"
 *   insn=0x0000000000237AC4 string=0x0000000000237AC8 "\t"
 *   insn=0x0000000000237AC4 string=0x0000000000237CA0 "\t"
 *   insn=0x0000000000237AC8 string=0x0000000000237ACC "*"
 *   insn=0x0000000000237ACC string=0x0000000000237AD0 "\n"
 *   insn=0x0000000000237AD4 string=0x0000000000237AD8 "u"
 *   insn=0x0000000000237AD8 string=0x0000000000237CAC "?"
 *   insn=0x0000000000237ADC string=0x0000000000237AE0 ")=G"
 *   insn=0x0000000000237AE0 string=0x0000000000237AE4 "!"
 *   insn=0x0000000000237AE8 string=0x0000000000237AEC "\t"
 *   insn=0x0000000000237AE8 string=0x0000000000237CC0 "\t"
 *   insn=0x0000000000237AEC string=0x0000000000237AF0 "*"
 *   insn=0x0000000000237AF0 string=0x0000000000237AF4 "\n"
 *   insn=0x0000000000237AF8 string=0x0000000000237AFC "t"
 *   insn=0x0000000000237AFC string=0x0000000000237CCC "?"
 *   insn=0x0000000000237B00 string=0x0000000000237B04 ")=G"
 *   insn=0x0000000000237B04 string=0x0000000000237B08 "!"
 *   insn=0x0000000000237B0C string=0x0000000000237B10 "\t"
 *   insn=0x0000000000237B0C string=0x0000000000237CE0 "\t"
 *   insn=0x0000000000237B10 string=0x0000000000237B14 "*"
 *   insn=0x0000000000237B14 string=0x0000000000237B18 "\n"
 *   insn=0x0000000000237B1C string=0x0000000000237B20 "s"
 *   insn=0x0000000000237B20 string=0x0000000000237CEC "?"
 *   insn=0x0000000000237B24 string=0x0000000000237B28 ")=G"
 *   insn=0x0000000000237B28 string=0x0000000000237B2C "!"
 *   insn=0x0000000000237B30 string=0x0000000000237B34 "\t"
 *   insn=0x0000000000237B30 string=0x0000000000237D00 "\t"
 *   insn=0x0000000000237B34 string=0x0000000000237B38 "*"
 *   insn=0x0000000000237B38 string=0x0000000000237B3C "\n"
 *   insn=0x0000000000237B40 string=0x0000000000237B44 "r"
 *   insn=0x0000000000237B44 string=0x0000000000237D0C "?"
 *   insn=0x0000000000237B48 string=0x0000000000237B4C ")=G"
 *   insn=0x0000000000237B4C string=0x0000000000237B50 "!"
 *   insn=0x0000000000237B50 string=0x0000000000237B54 "i"
 *   insn=0x0000000000237B54 string=0x0000000000237B58 "\t"
 *   insn=0x0000000000237B54 string=0x0000000000237D20 "\t"
 *   insn=0x0000000000237B58 string=0x0000000000237B5C "*"
 *   insn=0x0000000000237B5C string=0x0000000000237B60 "\n"
 *   insn=0x0000000000237B64 string=0x0000000000237B68 "q"
 *   insn=0x0000000000237B68 string=0x0000000000237D2C "?"
 *   insn=0x0000000000237B6C string=0x0000000000237B70 ")=G"
 *   insn=0x0000000000237B70 string=0x0000000000237B74 "!"
 *   insn=0x0000000000237B74 string=0x0000000000237B78 "I"
 *   insn=0x0000000000237B78 string=0x0000000000237B7C "\t"
 *   insn=0x0000000000237B78 string=0x0000000000237D40 "\t"
 *   insn=0x0000000000237B7C string=0x0000000000237B80 "*"
 *   insn=0x0000000000237B80 string=0x0000000000237B84 "\n"
 *   insn=0x0000000000237B88 string=0x0000000000237B8C "p"
 *   insn=0x0000000000237B8C string=0x0000000000237D4C "?"
 *   insn=0x0000000000237B90 string=0x0000000000237B94 ")=G"
 *   insn=0x0000000000237B94 string=0x0000000000237B98 "!"
 *   insn=0x0000000000237B98 string=0x0000000000237B9C ")"
 *   insn=0x0000000000237B9C string=0x0000000000237BA0 "\t"
 *   insn=0x0000000000237B9C string=0x0000000000237D60 "\t"
 *   insn=0x0000000000237BA0 string=0x0000000000237BA4 "*"
 *   insn=0x0000000000237BA4 string=0x0000000000237BA8 "\n"
 *   insn=0x0000000000237BAC string=0x0000000000237BB0 "o"
 *   insn=0x0000000000237BB0 string=0x0000000000237D6C "?"
 *   insn=0x0000000000237BB4 string=0x0000000000237BB8 ")=G"
 *   insn=0x0000000000237BB8 string=0x0000000000237BBC "!"
 *   insn=0x0000000000237BBC string=0x0000000000237BC0 "\t"
 *   insn=0x0000000000237BC0 string=0x0000000000237BC4 "\t"
 *   insn=0x0000000000237BC0 string=0x0000000000237D80 "\t"
 *   insn=0x0000000000237BC4 string=0x0000000000237BC8 "*"
 *   insn=0x0000000000237BC8 string=0x0000000000237BCC "\n"
 *   insn=0x0000000000237BD0 string=0x0000000000237BD4 "n"
 *   insn=0x0000000000237BD4 string=0x0000000000237D8C "?"
 *   insn=0x0000000000237BD8 string=0x0000000000237BDC ")=G"
 *   insn=0x0000000000237BDC string=0x0000000000237BE0 "!"
 *   insn=0x0000000000237BE4 string=0x0000000000237BE8 "\t"
 *   insn=0x0000000000237BE4 string=0x0000000000237DA0 "\t"
 *   insn=0x0000000000237BE8 string=0x0000000000237BEC "*"
 *   insn=0x0000000000237BEC string=0x0000000000237BF0 "\n"
 *   insn=0x0000000000237BF4 string=0x0000000000237BF8 "m"
 *   insn=0x0000000000237BF8 string=0x0000000000237DAC "?"
 *   insn=0x0000000000237BFC string=0x0000000000237C00 ")=G"
 *   insn=0x0000000000237C00 string=0x0000000000237C04 "!"
 *   insn=0x0000000000237C08 string=0x0000000000237C0C "\t"
 *   insn=0x0000000000237C0C string=0x0000000000237C10 "*"
 *   insn=0x0000000000237C10 string=0x0000000000237C14 "\n"
 *   insn=0x0000000000237C20 string=0x0000000000237C24 "*"
 *   insn=0x0000000000237C24 string=0x0000000000237C28 "\n"
 *   insn=0x0000000000237C2C string=0x0000000000237C30 "L"
 *   insn=0x0000000000237C38 string=0x0000000000237C3C "W"
 *   insn=0x0000000000237C40 string=0x0000000000237C44 "*"
 *   insn=0x0000000000237C44 string=0x0000000000237C48 "\n"
 *   insn=0x0000000000237C4C string=0x0000000000237C50 "L"
 *   insn=0x0000000000237C58 string=0x0000000000237C5C "_"
 *   insn=0x0000000000237C60 string=0x0000000000237C64 "*"
 *   insn=0x0000000000237C64 string=0x0000000000237C68 "\n"
 *   insn=0x0000000000237C78 string=0x0000000000237C7C "["
 *   insn=0x0000000000237C80 string=0x0000000000237C84 "*"
 *   insn=0x0000000000237C84 string=0x0000000000237C88 "\n"
 *   insn=0x0000000000237C98 string=0x0000000000237C9C "z"
 *   insn=0x0000000000237CA0 string=0x0000000000237CA4 "*"
 *   insn=0x0000000000237CA4 string=0x0000000000237CA8 "\n"
 *   insn=0x0000000000237CAC string=0x0000000000237CB0 ","
 *   insn=0x0000000000237CB8 string=0x0000000000237CBC "v"
 *   insn=0x0000000000237CC0 string=0x0000000000237CC4 "*"
 *   insn=0x0000000000237CC4 string=0x0000000000237CC8 "\n"
 *   insn=0x0000000000237CE0 string=0x0000000000237CE4 "*"
 *   insn=0x0000000000237CE4 string=0x0000000000237CE8 "\n"
 *   insn=0x0000000000237D00 string=0x0000000000237D04 "*"
 *   insn=0x0000000000237D04 string=0x0000000000237D08 "\n"
 *   insn=0x0000000000237D0C string=0x0000000000237D10 "l"
 *   insn=0x0000000000237D20 string=0x0000000000237D24 "*"
 *   insn=0x0000000000237D24 string=0x0000000000237D28 "\n"
 *   insn=0x0000000000237D40 string=0x0000000000237D44 "*"
 *   insn=0x0000000000237D44 string=0x0000000000237D48 "\n"
 *   insn=0x0000000000237D60 string=0x0000000000237D64 "*"
 *   insn=0x0000000000237D64 string=0x0000000000237D68 "\n"
 *   insn=0x0000000000237D6C string=0x0000000000237D70 "l"
 *   insn=0x0000000000237D80 string=0x0000000000237D84 "*"
 *   insn=0x0000000000237D84 string=0x0000000000237D88 "\n"
 *   insn=0x0000000000237DA0 string=0x0000000000237DA4 "*"
 *   insn=0x0000000000237DA4 string=0x0000000000237DA8 "\n"
 *   insn=0x0000000000237DB4 string=0x0000000000237DB8 "{"
 *   insn=0x0000000000237DC0 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000237DC8 string=0x0000000000237DCC "(a"
 *   insn=0x0000000000237DD4 string=0x0000000000237DD8 "j%"
 *   insn=0x0000000000237DD8 string=0x0000000000237DDC "J=G"
 *   insn=0x0000000000237DDC string=0x0000000000237DE0 ")!"
 *   insn=0x0000000000237DE4 string=0x0000000000237DE8 "*"
 *   insn=0x0000000000237DE4 string=0x0000000000237DFC "*"
 *   insn=0x0000000000237DE8 string=0x0000000000237DEC "K"
 *   insn=0x0000000000237DEC string=0x0000000000237DF0 "+"
 *   insn=0x0000000000237DF8 string=0x0000000000237E08 "_"
 *   insn=0x0000000000237DFC string=0x0000000000237E00 "K"
 *   insn=0x0000000000237E00 string=0x0000000000237E04 "+"
 *   insn=0x0000000000237E14 string=0x0000000000237E18 "c"
 *   insn=0x0000000000237E30 string=0x0000000000237E34 "i%"
 *   insn=0x0000000000237E34 string=0x0000000000237E38 ")=G"
 *   insn=0x0000000000237E38 string=0x0000000000237E3C "!"
 *   insn=0x0000000000237E3C string=0x0000000000237E40 ")#"
 *   insn=0x0000000000237E40 string=0x0000000000237E44 "\t"
 *   insn=0x0000000000237E40 string=0x00000000002382A4 "\t"
 *   insn=0x0000000000237E44 string=0x0000000000237E48 "*"
 *   insn=0x0000000000237E48 string=0x0000000000237E4C "\n"
 *   insn=0x0000000000237E54 string=0x000000000023828C "?"
 *   insn=0x0000000000237E60 string=0x0000000000237E64 "(a"
 *   insn=0x0000000000237E68 string=0x0000000000237E6C "`"
 *   insn=0x0000000000237E6C string=0x0000000000237E70 "j%"
 *   insn=0x0000000000237E70 string=0x0000000000237E74 "J=G"
 *   insn=0x0000000000237E74 string=0x0000000000237E78 ")!"
 *   insn=0x0000000000237E7C string=0x0000000000237E80 "*"
 *   insn=0x0000000000237E7C string=0x0000000000237E94 "*"
 *   insn=0x0000000000237E80 string=0x0000000000237E84 "K"
 *   insn=0x0000000000237E84 string=0x0000000000237E88 "+"
 *   insn=0x0000000000237E90 string=0x0000000000237EA0 "_"
 *   insn=0x0000000000237E94 string=0x0000000000237E98 "K"
 *   insn=0x0000000000237E98 string=0x0000000000237E9C "+"
 *   insn=0x0000000000237EAC string=0x0000000000237EB0 "="
 *   insn=0x0000000000237EBC string=0x0000000000237EC0 "(a"
 *   insn=0x0000000000237EC4 string=0x0000000000237EC8 "@"
 *   insn=0x0000000000237EC8 string=0x0000000000237ECC "j%"
 *   insn=0x0000000000237ECC string=0x0000000000237ED0 "J=G"
 *   insn=0x0000000000237ED0 string=0x0000000000237ED4 ")!"
 *   insn=0x0000000000237ED8 string=0x0000000000237EDC "*"
 *   insn=0x0000000000237ED8 string=0x0000000000237EF0 "*"
 *   insn=0x0000000000237EDC string=0x0000000000237EE0 "K"
 *   insn=0x0000000000237EE0 string=0x0000000000237EE4 "+"
 *   insn=0x0000000000237EEC string=0x0000000000237EFC "_"
 *   insn=0x0000000000237EF0 string=0x0000000000237EF4 "K"
 *   insn=0x0000000000237EF4 string=0x0000000000237EF8 "+"
 *   insn=0x0000000000237F08 string=0x0000000000237F0C "&"
 *   insn=0x0000000000237F24 string=0x0000000000237F28 "i%"
 *   insn=0x0000000000237F28 string=0x0000000000237F2C ")=G"
 *   insn=0x0000000000237F2C string=0x0000000000237F30 "!"
 *   insn=0x0000000000237F34 string=0x0000000000237F38 "\t"
 *   insn=0x0000000000237F38 string=0x0000000000237F3C "*"
 *   insn=0x0000000000237F3C string=0x0000000000237F40 "\n"
 *   insn=0x0000000000237F58 string=0x0000000000237F5C " "
 *   insn=0x0000000000237F5C string=0x0000000000237F60 "i%"
 *   insn=0x0000000000237F60 string=0x0000000000237F64 ")=G"
 *   insn=0x0000000000237F64 string=0x0000000000237F68 "!"
 *   insn=0x0000000000237F6C string=0x0000000000237F70 "\t"
 *   insn=0x0000000000237F70 string=0x0000000000237F74 "*"
 *   insn=0x0000000000237F74 string=0x0000000000237F78 "\n"
 *   insn=0x0000000000237F90 string=0x0000000000237F94 "(a"
 *   insn=0x0000000000237F98 string=0x0000000000237F9C "`"
 *   insn=0x0000000000237F9C string=0x0000000000237FA0 "j%"
 *   insn=0x0000000000237FA0 string=0x0000000000237FA4 "J=G"
 *   insn=0x0000000000237FA4 string=0x0000000000237FA8 ")!"
 *   insn=0x0000000000237FAC string=0x0000000000237FB0 "*"
 *   insn=0x0000000000237FAC string=0x0000000000237FC4 "*"
 *   insn=0x0000000000237FB0 string=0x0000000000237FB4 "K"
 *   insn=0x0000000000237FB4 string=0x0000000000237FB8 "+"
 *   insn=0x0000000000237FC0 string=0x0000000000237FD0 "_"
 *   insn=0x0000000000237FC4 string=0x0000000000237FC8 "K"
 *   insn=0x0000000000237FC8 string=0x0000000000237FCC "+"
 *   insn=0x0000000000237FEC string=0x0000000000237FF0 "(a"
 *   insn=0x0000000000237FF4 string=0x0000000000237FF8 "@"
 *   insn=0x0000000000237FF8 string=0x0000000000237FFC "j%"
 *   insn=0x0000000000237FFC string=0x0000000000238000 "J=G"
 *   insn=0x0000000000238000 string=0x0000000000238004 ")!"
 *   insn=0x0000000000238008 string=0x000000000023800C "*"
 *   insn=0x0000000000238008 string=0x0000000000238020 "*"
 *   insn=0x000000000023800C string=0x0000000000238010 "K"
 *   insn=0x0000000000238010 string=0x0000000000238014 "+"
 *   insn=0x000000000023801C string=0x000000000023802C "_"
 *   insn=0x0000000000238020 string=0x0000000000238024 "K"
 *   insn=0x0000000000238024 string=0x0000000000238028 "+"
 *   insn=0x0000000000238050 string=0x0000000000238054 "`"
 *   insn=0x0000000000238054 string=0x0000000000238058 "i%"
 *   insn=0x0000000000238058 string=0x000000000023805C ")=G"
 *   insn=0x000000000023805C string=0x0000000000238060 "!"
 *   insn=0x0000000000238060 string=0x0000000000238064 "\t"
 *   insn=0x0000000000238064 string=0x0000000000238068 "\t"
 *   insn=0x0000000000238068 string=0x000000000023806C "*"
 *   insn=0x000000000023806C string=0x0000000000238070 "\n"
 *   insn=0x000000000023808C string=0x0000000000238090 "i%"
 *   insn=0x0000000000238090 string=0x0000000000238094 ")=G"
 *   insn=0x0000000000238094 string=0x0000000000238098 "!"
 *   insn=0x0000000000238098 string=0x000000000023809C "I"
 *   insn=0x000000000023809C string=0x00000000002380A0 "\t"
 *   insn=0x00000000002380A0 string=0x00000000002380A4 "*"
 *   insn=0x00000000002380A4 string=0x00000000002380A8 "\n"
 *   insn=0x00000000002380AC string=0x00000000002380B0 "w"
 *   insn=0x00000000002380C0 string=0x00000000002380C4 "(a"
 *   insn=0x00000000002380C8 string=0x00000000002380CC "`"
 *   insn=0x00000000002380CC string=0x00000000002380D0 "j%"
 *   insn=0x00000000002380D0 string=0x00000000002380D4 "J=G"
 *   insn=0x00000000002380D4 string=0x00000000002380D8 ")!"
 *   insn=0x00000000002380DC string=0x00000000002380E0 "*"
 *   insn=0x00000000002380DC string=0x00000000002380F4 "*"
 *   insn=0x00000000002380E0 string=0x00000000002380E4 "K"
 *   insn=0x00000000002380E4 string=0x00000000002380E8 "+"
 *   insn=0x00000000002380F0 string=0x0000000000238100 "_"
 *   insn=0x00000000002380F4 string=0x00000000002380F8 "K"
 *   insn=0x00000000002380F8 string=0x00000000002380FC "+"
 *   insn=0x000000000023811C string=0x0000000000238120 "(a"
 *   insn=0x0000000000238124 string=0x0000000000238128 "@"
 *   insn=0x0000000000238128 string=0x000000000023812C "j%"
 *   insn=0x000000000023812C string=0x0000000000238130 "J=G"
 *   insn=0x0000000000238130 string=0x0000000000238134 ")!"
 *   insn=0x0000000000238138 string=0x000000000023813C "*"
 *   insn=0x0000000000238138 string=0x0000000000238150 "*"
 *   insn=0x000000000023813C string=0x0000000000238140 "K"
 *   insn=0x0000000000238140 string=0x0000000000238144 "+"
 *   insn=0x000000000023814C string=0x000000000023815C "_"
 *   insn=0x0000000000238150 string=0x0000000000238154 "K"
 *   insn=0x0000000000238154 string=0x0000000000238158 "+"
 *   insn=0x0000000000238184 string=0x0000000000238188 "i%"
 *   insn=0x0000000000238188 string=0x000000000023818C ")=G"
 *   insn=0x000000000023818C string=0x0000000000238190 "!"
 *   insn=0x0000000000238194 string=0x0000000000238198 "\t"
 *   insn=0x0000000000238198 string=0x000000000023819C "*"
 *   insn=0x000000000023819C string=0x00000000002381A0 "\n"
 *   insn=0x00000000002381A4 string=0x00000000002381A8 "9"
 *   insn=0x00000000002381B8 string=0x00000000002381BC " "
 *   insn=0x00000000002381BC string=0x00000000002381C0 "i%"
 *   insn=0x00000000002381C0 string=0x00000000002381C4 ")=G"
 *   insn=0x00000000002381C4 string=0x00000000002381C8 "!"
 *   insn=0x00000000002381CC string=0x00000000002381D0 "\t"
 *   insn=0x00000000002381D0 string=0x00000000002381D4 "*"
 *   insn=0x00000000002381D4 string=0x00000000002381D8 "\n"
 *   insn=0x00000000002381DC string=0x00000000002381E0 "+"
 *   insn=0x00000000002381EC string=0x00000000002381F0 "j%"
 *   insn=0x00000000002381F0 string=0x00000000002381F4 "J"
 *   insn=0x00000000002381F8 string=0x00000000002381FC "(a"
 *   insn=0x0000000000238204 string=0x0000000000238208 "j%"
 *   insn=0x0000000000238208 string=0x000000000023820C "J=G"
 *   insn=0x000000000023820C string=0x0000000000238210 ")!"
 *   insn=0x0000000000238214 string=0x0000000000238218 "*"
 *   insn=0x0000000000238214 string=0x000000000023822C "*"
 *   insn=0x0000000000238218 string=0x000000000023821C "K"
 *   insn=0x000000000023821C string=0x0000000000238220 "+"
 *   insn=0x0000000000238228 string=0x0000000000238238 "_"
 *   insn=0x000000000023822C string=0x0000000000238230 "K"
 *   insn=0x0000000000238230 string=0x0000000000238234 "+"
 *   insn=0x0000000000238244 string=0x0000000000238248 "W"
 *   insn=0x0000000000238254 string=0x0000000000238258 "i%"
 *   insn=0x0000000000238258 string=0x000000000023825C ")"
 *   insn=0x0000000000238268 string=0x000000000023826C "i%"
 *   insn=0x000000000023826C string=0x0000000000238270 ")=G"
 *   insn=0x0000000000238270 string=0x0000000000238274 "!"
 *   insn=0x0000000000238274 string=0x0000000000238278 "i"
 *   insn=0x0000000000238278 string=0x000000000023827C "\t"
 *   insn=0x000000000023827C string=0x0000000000238280 "*"
 *   insn=0x0000000000238280 string=0x0000000000238284 "\n"
 *   insn=0x0000000000238294 string=0x0000000000238298 "C"
 *   insn=0x00000000002382A4 string=0x00000000002382A8 "*"
 *   insn=0x00000000002382A8 string=0x00000000002382AC "\n"
 *   insn=0x00000000002382AC string=0x00000000002382B0 "?"
 *   insn=0x00000000002382B0 string=0x00000000002382B4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ShapeComponent::GetBindings(Caver::Component *a1, __int64 a2)
{
  __int64 v4; // x21
  void *v5; // x0
  void *v6; // x0
  int v7; // w8
  __int64 v8; // x20
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
  __int64 v21; // x20
  void *v22; // x0
  void *v23; // x0
  unsigned int *v24; // x8
  int v25; // w9
  void *v26; // x0
  void *v27; // x0
  __int64 v28; // x20
  void *v29; // x0
  unsigned int *v30; // x8
  int v31; // w9
  unsigned int *v32; // x8
  int v33; // w9
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
  unsigned int *v46; // x8
  int v47; // w9
  unsigned int *v48; // x8
  int v49; // w9
  unsigned int *v50; // x8
  int v51; // w9
  unsigned int *v52; // x8
  int v53; // w9
  unsigned int *v54; // x8
  int v55; // w9
  unsigned int *v56; // x8
  int v57; // w9
  __int64 v58; // [xsp+8h] [xbp-78h] BYREF
  int v59; // [xsp+18h] [xbp-68h]
  __int64 v60; // [xsp+20h] [xbp-60h] BYREF
  __int64 v61; // [xsp+28h] [xbp-58h]
  int v62; // [xsp+30h] [xbp-50h]
  __int64 v63; // [xsp+38h] [xbp-48h]

  v63 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::GetBindings(a1);
  sub_566BB8((int)&v58, "type");
  v59 = 100;
  sub_56A528(&v60, &v58);
  v61 = 0x100000001LL;
  v62 = 5;
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v4 = v59;
    sub_56A528(v4 + 8, &v60);
    *(_DWORD *)(v4 + 24) = v62;
    *(_QWORD *)(v4 + 16) = v61;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v5 = (void *)(v60 - 24);
  if ( (__int64 *)(v60 - 24) != &qword_6FD2E0 )
  {
    v30 = (unsigned int *)(v60 - 8);
    if ( &pthread_create )
    {
      do
        v31 = __ldaxr(v30);
      while ( __stlxr(v31 - 1, v30) );
    }
    else
    {
      v31 = (*v30)--;
    }
    if ( v31 <= 0 )
      operator delete(v5);
  }
  v6 = (void *)(v58 - 24);
  if ( (__int64 *)(v58 - 24) != &qword_6FD2E0 )
  {
    v32 = (unsigned int *)(v58 - 8);
    if ( &pthread_create )
    {
      do
        v33 = __ldaxr(v32);
      while ( __stlxr(v33 - 1, v32) );
    }
    else
    {
      v33 = (*v32)--;
    }
    if ( v33 <= 0 )
      operator delete(v6);
  }
  v7 = *((_DWORD *)a1 + 28);
  if ( v7 == 1 )
  {
    sub_566BB8((int)&v58, "left");
    v59 = 101;
    sub_56A528(&v60, &v58);
    v62 = 0;
    v61 = 0x500000001LL;
    v9 = *(_QWORD *)(a2 + 8);
    if ( v9 == *(_QWORD *)(a2 + 16) )
    {
      std::vector<Caver::Binding>::_M_insert_aux();
    }
    else
    {
      *(_DWORD *)v9 = v59;
      sub_56A528(v9 + 8, &v60);
      *(_DWORD *)(v9 + 24) = v62;
      *(_QWORD *)(v9 + 16) = v61;
      *(_QWORD *)(a2 + 8) += 32LL;
    }
    v13 = (void *)(v60 - 24);
    if ( (__int64 *)(v60 - 24) != &qword_6FD2E0 )
    {
      v38 = (unsigned int *)(v60 - 8);
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
        operator delete(v13);
    }
    v14 = (void *)(v58 - 24);
    if ( (__int64 *)(v58 - 24) != &qword_6FD2E0 )
    {
      v40 = (unsigned int *)(v58 - 8);
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
        operator delete(v14);
    }
    sub_566BB8((int)&v58, "right");
    v59 = 102;
    sub_56A528(&v60, &v58);
    v61 = 0x500000001LL;
    v62 = 0;
    v15 = *(_QWORD *)(a2 + 8);
    if ( v15 == *(_QWORD *)(a2 + 16) )
    {
      std::vector<Caver::Binding>::_M_insert_aux();
    }
    else
    {
      *(_DWORD *)v15 = v59;
      sub_56A528(v15 + 8, &v60);
      *(_DWORD *)(v15 + 24) = v62;
      *(_QWORD *)(v15 + 16) = v61;
      *(_QWORD *)(a2 + 8) += 32LL;
    }
    v19 = (void *)(v60 - 24);
    if ( (__int64 *)(v60 - 24) != &qword_6FD2E0 )
    {
      v46 = (unsigned int *)(v60 - 8);
      if ( &pthread_create )
      {
        do
          v47 = __ldaxr(v46);
        while ( __stlxr(v47 - 1, v46) );
      }
      else
      {
        v47 = (*v46)--;
      }
      if ( v47 <= 0 )
        operator delete(v19);
    }
    v20 = (void *)(v58 - 24);
    if ( (__int64 *)(v58 - 24) != &qword_6FD2E0 )
    {
      v48 = (unsigned int *)(v58 - 8);
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
        operator delete(v20);
    }
    sub_566BB8((int)&v58, "bottom");
    v59 = 103;
    sub_56A528(&v60, &v58);
    v61 = 0x500000001LL;
    v62 = 0;
    v21 = *(_QWORD *)(a2 + 8);
    if ( v21 == *(_QWORD *)(a2 + 16) )
    {
      std::vector<Caver::Binding>::_M_insert_aux();
    }
    else
    {
      *(_DWORD *)v21 = v59;
      sub_56A528(v21 + 8, &v60);
      *(_DWORD *)(v21 + 24) = v62;
      *(_QWORD *)(v21 + 16) = v61;
      *(_QWORD *)(a2 + 8) += 32LL;
    }
    v26 = (void *)(v60 - 24);
    if ( (__int64 *)(v60 - 24) != &qword_6FD2E0 )
    {
      v52 = (unsigned int *)(v60 - 8);
      if ( &pthread_create )
      {
        do
          v53 = __ldaxr(v52);
        while ( __stlxr(v53 - 1, v52) );
      }
      else
      {
        v53 = (*v52)--;
      }
      if ( v53 <= 0 )
        operator delete(v26);
    }
    v27 = (void *)(v58 - 24);
    if ( (__int64 *)(v58 - 24) != &qword_6FD2E0 )
    {
      v54 = (unsigned int *)(v58 - 8);
      if ( &pthread_create )
      {
        do
          v55 = __ldaxr(v54);
        while ( __stlxr(v55 - 1, v54) );
      }
      else
      {
        v55 = (*v54)--;
      }
      if ( v55 <= 0 )
        operator delete(v27);
    }
    sub_566BB8((int)&v58, "top");
    v59 = 104;
    sub_56A528(&v60, &v58);
    v61 = 0x500000001LL;
    v62 = 0;
    v28 = *(_QWORD *)(a2 + 8);
    if ( v28 == *(_QWORD *)(a2 + 16) )
    {
      std::vector<Caver::Binding>::_M_insert_aux();
    }
    else
    {
      *(_DWORD *)v28 = v59;
      sub_56A528(v28 + 8, &v60);
      *(_DWORD *)(v28 + 24) = v62;
      *(_QWORD *)(v28 + 16) = v61;
      *(_QWORD *)(a2 + 8) += 32LL;
    }
    v29 = (void *)(v60 - 24);
    if ( (__int64 *)(v60 - 24) != &qword_6FD2E0 )
    {
      v56 = (unsigned int *)(v60 - 8);
      if ( &pthread_create )
      {
        do
          v57 = __ldaxr(v56);
        while ( __stlxr(v57 - 1, v56) );
      }
      else
      {
        v57 = (*v56)--;
      }
      if ( v57 <= 0 )
        operator delete(v29);
    }
    v23 = (void *)(v58 - 24);
    if ( (__int64 *)(v58 - 24) != &qword_6FD2E0 )
    {
      v24 = (unsigned int *)(v58 - 8);
      if ( &pthread_create )
      {
        do
          v25 = __ldaxr(v24);
        while ( __stlxr(v25 - 1, v24) );
        goto LABEL_99;
      }
      goto LABEL_98;
    }
  }
  else if ( v7 == 2 )
  {
    sub_566BB8((int)&v58, "centerX");
    v59 = 105;
    sub_56A528(&v60, &v58);
    v62 = 0;
    v61 = 0x500000001LL;
    v8 = *(_QWORD *)(a2 + 8);
    if ( v8 == *(_QWORD *)(a2 + 16) )
    {
      std::vector<Caver::Binding>::_M_insert_aux();
    }
    else
    {
      *(_DWORD *)v8 = v59;
      sub_56A528(v8 + 8, &v60);
      *(_DWORD *)(v8 + 24) = v62;
      *(_QWORD *)(v8 + 16) = v61;
      *(_QWORD *)(a2 + 8) += 32LL;
    }
    v10 = (void *)(v60 - 24);
    if ( (__int64 *)(v60 - 24) != &qword_6FD2E0 )
    {
      v34 = (unsigned int *)(v60 - 8);
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
        operator delete(v10);
    }
    v11 = (void *)(v58 - 24);
    if ( (__int64 *)(v58 - 24) != &qword_6FD2E0 )
    {
      v36 = (unsigned int *)(v58 - 8);
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
        operator delete(v11);
    }
    sub_566BB8((int)&v58, "centerY");
    v59 = 106;
    sub_56A528(&v60, &v58);
    v61 = 0x500000001LL;
    v62 = 0;
    v12 = *(_QWORD *)(a2 + 8);
    if ( v12 == *(_QWORD *)(a2 + 16) )
    {
      std::vector<Caver::Binding>::_M_insert_aux();
    }
    else
    {
      *(_DWORD *)v12 = v59;
      sub_56A528(v12 + 8, &v60);
      *(_DWORD *)(v12 + 24) = v62;
      *(_QWORD *)(v12 + 16) = v61;
      *(_QWORD *)(a2 + 8) += 32LL;
    }
    v16 = (void *)(v60 - 24);
    if ( (__int64 *)(v60 - 24) != &qword_6FD2E0 )
    {
      v42 = (unsigned int *)(v60 - 8);
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
        operator delete(v16);
    }
    v17 = (void *)(v58 - 24);
    if ( (__int64 *)(v58 - 24) != &qword_6FD2E0 )
    {
      v44 = (unsigned int *)(v58 - 8);
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
      if ( v45 <= 0 )
        operator delete(v17);
    }
    sub_566BB8((int)&v58, "radius");
    v59 = 107;
    sub_56A528(&v60, &v58);
    v61 = 0x500000001LL;
    v62 = 0;
    v18 = *(_QWORD *)(a2 + 8);
    if ( v18 == *(_QWORD *)(a2 + 16) )
    {
      std::vector<Caver::Binding>::_M_insert_aux();
    }
    else
    {
      *(_DWORD *)v18 = v59;
      sub_56A528(v18 + 8, &v60);
      *(_DWORD *)(v18 + 24) = v62;
      *(_QWORD *)(v18 + 16) = v61;
      *(_QWORD *)(a2 + 8) += 32LL;
    }
    v22 = (void *)(v60 - 24);
    if ( (__int64 *)(v60 - 24) != &qword_6FD2E0 )
    {
      v50 = (unsigned int *)(v60 - 8);
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
        operator delete(v22);
    }
    v23 = (void *)(v58 - 24);
    if ( (__int64 *)(v58 - 24) != &qword_6FD2E0 )
    {
      v24 = (unsigned int *)(v58 - 8);
      if ( &pthread_create )
      {
        do
          v25 = __ldaxr(v24);
        while ( __stlxr(v25 - 1, v24) );
        goto LABEL_99;
      }
LABEL_98:
      v25 = (*v24)--;
LABEL_99:
      if ( v25 <= 0 )
        operator delete(v23);
    }
  }
}


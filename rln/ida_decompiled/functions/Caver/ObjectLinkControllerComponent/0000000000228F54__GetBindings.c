/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000228F54
 * Mangled: _ZN5Caver29ObjectLinkControllerComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::ObjectLinkControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000001F7350  Caver::ObjectLinkControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7350  Caver::ObjectLinkControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 271
 *   insn=0x0000000000228F6C string=0x0000000000228F70 "W"
 *   insn=0x0000000000228F80 string=0x00000000001FB3B0 "0'"
 *   insn=0x0000000000228F84 string=0x0000000000584234 "targetObject"
 *   insn=0x0000000000228F90 string=0x0000000000228F94 "\t"
 *   insn=0x0000000000228FA8 string=0x0000000000228FAC "_"
 *   insn=0x0000000000228FAC string=0x0000000000228FB0 "("
 *   insn=0x0000000000228FB8 string=0x0000000000228FBC "t"
 *   insn=0x0000000000228FCC string=0x0000000000228FD0 ""
 *   insn=0x0000000000228FD4 string=0x0000000000228FD8 "T"
 *   insn=0x0000000000228FDC string=0x0000000000228FE0 "\t\t@"
 *   insn=0x0000000000228FE4 string=0x0000000000228FE8 ""
 *   insn=0x0000000000228FEC string=0x0000000000228FF0 "h"
 *   insn=0x0000000000228FF0 string=0x0000000000228FF4 ""
 *   insn=0x0000000000228FF4 string=0x0000000000228FF8 "h"
 *   insn=0x0000000000229008 string=0x000000000022900C "5:"
 *   insn=0x000000000022900C string=0x00000000001F78E0 "0'"
 *   insn=0x0000000000229030 string=0x0000000000229034 "a"
 *   insn=0x0000000000229038 string=0x0000000000584241 "targetBone"
 *   insn=0x0000000000229060 string=0x0000000000229064 "1"
 *   insn=0x000000000022906C string=0x0000000000229070 "t"
 *   insn=0x0000000000229080 string=0x0000000000229084 ""
 *   insn=0x0000000000229088 string=0x000000000022908C "'"
 *   insn=0x000000000022908C string=0x0000000000229090 "C"
 *   insn=0x0000000000229090 string=0x0000000000229094 "\t\t@"
 *   insn=0x0000000000229098 string=0x000000000022909C ""
 *   insn=0x00000000002290A0 string=0x00000000002290A4 "h"
 *   insn=0x00000000002290A4 string=0x00000000002290A8 ""
 *   insn=0x00000000002290A8 string=0x00000000002290AC "h"
 *   insn=0x00000000002290BC string=0x00000000002290C0 ":"
 *   insn=0x00000000002290DC string=0x00000000002290E0 "A"
 *   insn=0x00000000002290E4 string=0x000000000058424C "localOffset"
 *   insn=0x0000000000229114 string=0x0000000000229118 "}G"
 *   insn=0x0000000000229120 string=0x0000000000229124 "t"
 *   insn=0x0000000000229134 string=0x0000000000229138 ""
 *   insn=0x0000000000229140 string=0x0000000000229144 "C"
 *   insn=0x0000000000229144 string=0x0000000000229148 "\t\t@"
 *   insn=0x000000000022914C string=0x0000000000229150 ""
 *   insn=0x0000000000229154 string=0x0000000000229158 "h"
 *   insn=0x0000000000229158 string=0x000000000022915C ""
 *   insn=0x000000000022915C string=0x0000000000229160 "h"
 *   insn=0x0000000000229180 string=0x0000000000229184 "A"
 *   insn=0x0000000000229198 string=0x0000000000584258 "localRotation"
 *   insn=0x00000000002291CC string=0x00000000002291D0 "t"
 *   insn=0x00000000002291E0 string=0x00000000002291E4 ""
 *   insn=0x00000000002291EC string=0x00000000002291F0 "C"
 *   insn=0x00000000002291F0 string=0x00000000002291F4 "\t\t@"
 *   insn=0x00000000002291F8 string=0x00000000002291FC ""
 *   insn=0x0000000000229200 string=0x0000000000229204 "h"
 *   insn=0x0000000000229204 string=0x0000000000229208 ""
 *   insn=0x0000000000229208 string=0x000000000022920C "h"
 *   insn=0x000000000022922C string=0x0000000000229230 "!"
 *   insn=0x0000000000229244 string=0x0000000000584266 "worldOffset"
 *   insn=0x0000000000229250 string=0x0000000000229254 "Y"
 *   insn=0x0000000000229278 string=0x000000000022927C "t"
 *   insn=0x000000000022928C string=0x0000000000229290 ""
 *   insn=0x0000000000229298 string=0x000000000022929C "C"
 *   insn=0x000000000022929C string=0x00000000002292A0 "\t\t@"
 *   insn=0x00000000002292A4 string=0x00000000002292A8 ""
 *   insn=0x00000000002292AC string=0x00000000002292B0 "h"
 *   insn=0x00000000002292B0 string=0x00000000002292B4 ""
 *   insn=0x00000000002292B4 string=0x00000000002292B8 "h"
 *   insn=0x00000000002292F8 string=0x00000000002292FC "A"
 *   insn=0x00000000002292FC string=0x00000000002295C4 "C3"
 *   insn=0x000000000022931C string=0x0000000000229320 ")=G"
 *   insn=0x0000000000229320 string=0x0000000000229324 "!"
 *   insn=0x0000000000229328 string=0x000000000022932C "\t"
 *   insn=0x0000000000229328 string=0x0000000000229484 "\t"
 *   insn=0x000000000022932C string=0x0000000000229330 "*"
 *   insn=0x0000000000229330 string=0x0000000000229334 "\n"
 *   insn=0x0000000000229338 string=0x000000000022933C "U"
 *   insn=0x000000000022933C string=0x0000000000229490 "?"
 *   insn=0x0000000000229340 string=0x0000000000229344 ")=G"
 *   insn=0x0000000000229344 string=0x0000000000229348 "!"
 *   insn=0x000000000022934C string=0x0000000000229350 "\t"
 *   insn=0x000000000022934C string=0x00000000002294A4 "\t"
 *   insn=0x0000000000229350 string=0x0000000000229354 "*"
 *   insn=0x0000000000229354 string=0x0000000000229358 "\n"
 *   insn=0x000000000022935C string=0x0000000000229360 "T"
 *   insn=0x0000000000229360 string=0x00000000002294B0 "?"
 *   insn=0x0000000000229364 string=0x0000000000229368 ")=G"
 *   insn=0x0000000000229368 string=0x000000000022936C "!"
 *   insn=0x0000000000229370 string=0x0000000000229374 "\t"
 *   insn=0x0000000000229370 string=0x00000000002294C4 "\t"
 *   insn=0x0000000000229374 string=0x0000000000229378 "*"
 *   insn=0x0000000000229378 string=0x000000000022937C "\n"
 *   insn=0x0000000000229380 string=0x0000000000229384 "S"
 *   insn=0x0000000000229384 string=0x00000000002294D0 "?"
 *   insn=0x0000000000229388 string=0x000000000022938C ")=G"
 *   insn=0x000000000022938C string=0x0000000000229390 "!"
 *   insn=0x0000000000229394 string=0x0000000000229398 "\t"
 *   insn=0x0000000000229394 string=0x00000000002294E4 "\t"
 *   insn=0x0000000000229398 string=0x000000000022939C "*"
 *   insn=0x000000000022939C string=0x00000000002293A0 "\n"
 *   insn=0x00000000002293A4 string=0x00000000002293A8 "R"
 *   insn=0x00000000002293A8 string=0x00000000002294F0 "?"
 *   insn=0x00000000002293AC string=0x00000000002293B0 ")=G"
 *   insn=0x00000000002293B0 string=0x00000000002293B4 "!"
 *   insn=0x00000000002293B4 string=0x00000000002293B8 "i\n"
 *   insn=0x00000000002293B8 string=0x00000000002293BC "\t"
 *   insn=0x00000000002293B8 string=0x0000000000229504 "\t"
 *   insn=0x00000000002293BC string=0x00000000002293C0 "*"
 *   insn=0x00000000002293C0 string=0x00000000002293C4 "\n"
 *   insn=0x00000000002293C8 string=0x00000000002293CC "Q"
 *   insn=0x00000000002293CC string=0x0000000000229510 "?"
 *   insn=0x00000000002293D0 string=0x00000000002293D4 ")=G"
 *   insn=0x00000000002293D4 string=0x00000000002293D8 "!"
 *   insn=0x00000000002293D8 string=0x00000000002293DC "I\n"
 *   insn=0x00000000002293DC string=0x00000000002293E0 "\t"
 *   insn=0x00000000002293DC string=0x0000000000229524 "\t"
 *   insn=0x00000000002293E0 string=0x00000000002293E4 "*"
 *   insn=0x00000000002293E4 string=0x00000000002293E8 "\n"
 *   insn=0x00000000002293EC string=0x00000000002293F0 "P"
 *   insn=0x00000000002293F0 string=0x0000000000229530 "?"
 *   insn=0x00000000002293F4 string=0x00000000002293F8 ")=G"
 *   insn=0x00000000002293F8 string=0x00000000002293FC "!"
 *   insn=0x00000000002293FC string=0x0000000000229400 ")\n"
 *   insn=0x0000000000229400 string=0x0000000000229404 "\t"
 *   insn=0x0000000000229400 string=0x0000000000229544 "\t"
 *   insn=0x0000000000229404 string=0x0000000000229408 "*"
 *   insn=0x0000000000229408 string=0x000000000022940C "\n"
 *   insn=0x0000000000229410 string=0x0000000000229414 "O"
 *   insn=0x0000000000229414 string=0x0000000000229550 "?"
 *   insn=0x0000000000229418 string=0x000000000022941C ")=G"
 *   insn=0x000000000022941C string=0x0000000000229420 "!"
 *   insn=0x0000000000229420 string=0x0000000000229424 "\t\n"
 *   insn=0x0000000000229424 string=0x0000000000229428 "\t"
 *   insn=0x0000000000229424 string=0x0000000000229564 "\t"
 *   insn=0x0000000000229428 string=0x000000000022942C "*"
 *   insn=0x000000000022942C string=0x0000000000229430 "\n"
 *   insn=0x0000000000229434 string=0x0000000000229438 "N"
 *   insn=0x0000000000229438 string=0x0000000000229570 "?"
 *   insn=0x000000000022943C string=0x0000000000229440 ")=G"
 *   insn=0x0000000000229440 string=0x0000000000229444 "!"
 *   insn=0x0000000000229448 string=0x000000000022944C "\t"
 *   insn=0x0000000000229448 string=0x0000000000229584 "\t"
 *   insn=0x000000000022944C string=0x0000000000229450 "*"
 *   insn=0x0000000000229450 string=0x0000000000229454 "\n"
 *   insn=0x0000000000229458 string=0x000000000022945C "M"
 *   insn=0x000000000022945C string=0x0000000000229590 "?"
 *   insn=0x0000000000229460 string=0x0000000000229464 ")=G"
 *   insn=0x0000000000229464 string=0x0000000000229468 "!"
 *   insn=0x000000000022946C string=0x0000000000229470 "\t"
 *   insn=0x000000000022946C string=0x00000000002295A4 "\t"
 *   insn=0x0000000000229470 string=0x0000000000229474 "*"
 *   insn=0x0000000000229474 string=0x0000000000229478 "\n"
 *   insn=0x000000000022947C string=0x0000000000229480 "L"
 *   insn=0x0000000000229480 string=0x00000000002295B0 "?"
 *   insn=0x0000000000229484 string=0x0000000000229488 "*"
 *   insn=0x0000000000229488 string=0x000000000022948C "\n"
 *   insn=0x00000000002294A4 string=0x00000000002294A8 "*"
 *   insn=0x00000000002294A8 string=0x00000000002294AC "\n"
 *   insn=0x00000000002294B0 string=0x00000000002294B4 ","
 *   insn=0x00000000002294C4 string=0x00000000002294C8 "*"
 *   insn=0x00000000002294C8 string=0x00000000002294CC "\n"
 *   insn=0x00000000002294E4 string=0x00000000002294E8 "*"
 *   insn=0x00000000002294E8 string=0x00000000002294EC "\n"
 *   insn=0x0000000000229504 string=0x0000000000229508 "*"
 *   insn=0x0000000000229508 string=0x000000000022950C "\n"
 *   insn=0x0000000000229524 string=0x0000000000229528 "*"
 *   insn=0x0000000000229528 string=0x000000000022952C "\n"
 *   insn=0x0000000000229530 string=0x0000000000229534 ","
 *   insn=0x0000000000229544 string=0x0000000000229548 "*"
 *   insn=0x0000000000229548 string=0x000000000022954C "\n"
 *   insn=0x000000000022955C string=0x0000000000229560 "5"
 *   insn=0x0000000000229564 string=0x0000000000229568 "*"
 *   insn=0x0000000000229568 string=0x000000000022956C "\n"
 *   insn=0x000000000022957C string=0x0000000000229580 "1"
 *   insn=0x0000000000229584 string=0x0000000000229588 "*"
 *   insn=0x0000000000229588 string=0x000000000022958C "\n"
 *   insn=0x0000000000229590 string=0x0000000000229594 "l"
 *   insn=0x000000000022959C string=0x00000000002295A0 "P"
 *   insn=0x00000000002295A4 string=0x00000000002295A8 "*"
 *   insn=0x00000000002295A8 string=0x00000000002295AC "\n"
 *   insn=0x00000000002295B8 string=0x00000000002295BC "z"
 *   insn=0x00000000002295BC string=0x00000000002295C0 "L"
 *   insn=0x00000000002295C4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002295CC string=0x00000000002295D0 "(a"
 *   insn=0x00000000002295DC string=0x00000000002295E0 "J=G"
 *   insn=0x00000000002295E0 string=0x00000000002295E4 ")!"
 *   insn=0x00000000002295E8 string=0x00000000002295EC "*"
 *   insn=0x00000000002295E8 string=0x0000000000229600 "*"
 *   insn=0x00000000002295EC string=0x00000000002295F0 "K"
 *   insn=0x00000000002295F0 string=0x00000000002295F4 "+"
 *   insn=0x00000000002295FC string=0x000000000022960C "_"
 *   insn=0x0000000000229600 string=0x0000000000229604 "K"
 *   insn=0x0000000000229604 string=0x0000000000229608 "+"
 *   insn=0x0000000000229618 string=0x000000000022961C "b"
 *   insn=0x0000000000229630 string=0x0000000000229634 " "
 *   insn=0x0000000000229638 string=0x000000000022963C ")=G"
 *   insn=0x000000000022963C string=0x0000000000229640 "!"
 *   insn=0x0000000000229644 string=0x0000000000229648 "\t"
 *   insn=0x0000000000229644 string=0x00000000002298E0 "\t"
 *   insn=0x0000000000229648 string=0x000000000022964C "*"
 *   insn=0x000000000022964C string=0x0000000000229650 "\n"
 *   insn=0x0000000000229658 string=0x00000000002298C8 "?"
 *   insn=0x0000000000229664 string=0x0000000000229668 "(a"
 *   insn=0x0000000000229674 string=0x0000000000229678 "J=G"
 *   insn=0x0000000000229678 string=0x000000000022967C ")!"
 *   insn=0x0000000000229680 string=0x0000000000229684 "*"
 *   insn=0x0000000000229680 string=0x0000000000229698 "*"
 *   insn=0x0000000000229684 string=0x0000000000229688 "K"
 *   insn=0x0000000000229688 string=0x000000000022968C "+"
 *   insn=0x0000000000229694 string=0x00000000002296A4 "_"
 *   insn=0x0000000000229698 string=0x000000000022969C "K"
 *   insn=0x000000000022969C string=0x00000000002296A0 "+"
 *   insn=0x00000000002296B0 string=0x00000000002296B4 "<"
 *   insn=0x00000000002296C8 string=0x00000000002296CC "`"
 *   insn=0x00000000002296D0 string=0x00000000002296D4 ")=G"
 *   insn=0x00000000002296D4 string=0x00000000002296D8 "!"
 *   insn=0x00000000002296D8 string=0x00000000002296DC ")"
 *   insn=0x00000000002296DC string=0x00000000002296E0 "\t"
 *   insn=0x00000000002296E0 string=0x00000000002296E4 "*"
 *   insn=0x00000000002296E4 string=0x00000000002296E8 "\n"
 *   insn=0x00000000002296EC string=0x00000000002296F0 "v"
 *   insn=0x00000000002296FC string=0x0000000000229700 "(a"
 *   insn=0x000000000022970C string=0x0000000000229710 "J=G"
 *   insn=0x0000000000229710 string=0x0000000000229714 ")!"
 *   insn=0x0000000000229718 string=0x000000000022971C "*"
 *   insn=0x0000000000229718 string=0x0000000000229730 "*"
 *   insn=0x000000000022971C string=0x0000000000229720 "K"
 *   insn=0x0000000000229720 string=0x0000000000229724 "+"
 *   insn=0x000000000022972C string=0x000000000022973C "_"
 *   insn=0x0000000000229730 string=0x0000000000229734 "K"
 *   insn=0x0000000000229734 string=0x0000000000229738 "+"
 *   insn=0x0000000000229768 string=0x000000000022976C ")=G"
 *   insn=0x000000000022976C string=0x0000000000229770 "!"
 *   insn=0x0000000000229770 string=0x0000000000229774 "i"
 *   insn=0x0000000000229774 string=0x0000000000229778 "\t"
 *   insn=0x0000000000229778 string=0x000000000022977C "*"
 *   insn=0x000000000022977C string=0x0000000000229780 "\n"
 *   insn=0x0000000000229784 string=0x0000000000229788 "P"
 *   insn=0x0000000000229794 string=0x0000000000229798 "(a"
 *   insn=0x00000000002297A4 string=0x00000000002297A8 "J=G"
 *   insn=0x00000000002297A8 string=0x00000000002297AC ")!"
 *   insn=0x00000000002297B0 string=0x00000000002297B4 "*"
 *   insn=0x00000000002297B0 string=0x00000000002297C8 "*"
 *   insn=0x00000000002297B4 string=0x00000000002297B8 "K"
 *   insn=0x00000000002297B8 string=0x00000000002297BC "+"
 *   insn=0x00000000002297C4 string=0x00000000002297D4 "_"
 *   insn=0x00000000002297C8 string=0x00000000002297CC "K"
 *   insn=0x00000000002297CC string=0x00000000002297D0 "+"
 *   insn=0x0000000000229800 string=0x0000000000229804 ")=G"
 *   insn=0x0000000000229804 string=0x0000000000229808 "!"
 *   insn=0x000000000022980C string=0x0000000000229810 "\t"
 *   insn=0x0000000000229810 string=0x0000000000229814 "*"
 *   insn=0x0000000000229814 string=0x0000000000229818 "\n"
 *   insn=0x000000000022981C string=0x0000000000229820 "*"
 *   insn=0x000000000022982C string=0x0000000000229830 "J"
 *   insn=0x0000000000229834 string=0x0000000000229838 "(a"
 *   insn=0x0000000000229844 string=0x0000000000229848 "J=G"
 *   insn=0x0000000000229848 string=0x000000000022984C ")!"
 *   insn=0x0000000000229850 string=0x0000000000229854 "*"
 *   insn=0x0000000000229850 string=0x0000000000229868 "*"
 *   insn=0x0000000000229854 string=0x0000000000229858 "K"
 *   insn=0x0000000000229858 string=0x000000000022985C "+"
 *   insn=0x0000000000229864 string=0x0000000000229874 "_"
 *   insn=0x0000000000229868 string=0x000000000022986C "K"
 *   insn=0x000000000022986C string=0x0000000000229870 "+"
 *   insn=0x0000000000229894 string=0x0000000000229898 ")"
 *   insn=0x00000000002298A8 string=0x00000000002298AC ")=G"
 *   insn=0x00000000002298AC string=0x00000000002298B0 "!"
 *   insn=0x00000000002298B0 string=0x00000000002298B4 "i"
 *   insn=0x00000000002298B4 string=0x00000000002298B8 "\t"
 *   insn=0x00000000002298B8 string=0x00000000002298BC "*"
 *   insn=0x00000000002298BC string=0x00000000002298C0 "\n"
 *   insn=0x00000000002298C8 string=0x00000000002298CC "l"
 *   insn=0x00000000002298E0 string=0x00000000002298E4 "*"
 *   insn=0x00000000002298E4 string=0x00000000002298E8 "\n"
 *   insn=0x00000000002298E8 string=0x00000000002298EC "?"
 *   insn=0x00000000002298EC string=0x00000000002298F0 ""
 *   insn=0x0000000000229900 string=0x00000000001F7350 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ObjectLinkControllerComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  unsigned int *v18; // x8
  int v19; // w9
  unsigned int *v20; // x8
  int v21; // w9
  unsigned int *v22; // x8
  int v23; // w9
  unsigned int *v24; // x8
  int v25; // w9
  unsigned int *v26; // x8
  int v27; // w9
  unsigned int *v28; // x8
  int v29; // w9
  unsigned int *v30; // x8
  int v31; // w9
  unsigned int *v32; // x8
  int v33; // w9
  unsigned int *v34; // x8
  int v35; // w9
  unsigned int *v36; // x8
  int v37; // w9
  __int64 v38; // [xsp+8h] [xbp-78h] BYREF
  int v39; // [xsp+18h] [xbp-68h]
  __int64 v40; // [xsp+20h] [xbp-60h] BYREF
  __int64 v41; // [xsp+28h] [xbp-58h]
  int v42; // [xsp+30h] [xbp-50h]
  __int64 v43; // [xsp+38h] [xbp-48h]

  v43 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::GetBindings(a1);
  sub_566BB8((int)&v38, "targetObject");
  v39 = 0;
  sub_56A528(&v40, &v38);
  v41 = 0x100000001LL;
  v42 = 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v3 = v39;
    sub_56A528(v3 + 8, &v40);
    *(_DWORD *)(v3 + 24) = v42;
    *(_QWORD *)(v3 + 16) = v41;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v4 = (void *)(v40 - 24);
  if ( (__int64 *)(v40 - 24) != &qword_6FD2E0 )
  {
    v18 = (unsigned int *)(v40 - 8);
    if ( &pthread_create )
    {
      do
        v19 = __ldaxr(v18);
      while ( __stlxr(v19 - 1, v18) );
    }
    else
    {
      v19 = (*v18)--;
    }
    if ( v19 <= 0 )
      operator delete(v4);
  }
  v5 = (void *)(v38 - 24);
  if ( (__int64 *)(v38 - 24) != &qword_6FD2E0 )
  {
    v20 = (unsigned int *)(v38 - 8);
    if ( &pthread_create )
    {
      do
        v21 = __ldaxr(v20);
      while ( __stlxr(v21 - 1, v20) );
    }
    else
    {
      v21 = (*v20)--;
    }
    if ( v21 <= 0 )
      operator delete(v5);
  }
  sub_566BB8((int)&v38, "targetBone");
  v39 = 1;
  sub_56A528(&v40, &v38);
  v41 = 0x100000001LL;
  v42 = 1;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v6 = v39;
    sub_56A528(v6 + 8, &v40);
    *(_DWORD *)(v6 + 24) = v42;
    *(_QWORD *)(v6 + 16) = v41;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v7 = (void *)(v40 - 24);
  if ( (__int64 *)(v40 - 24) != &qword_6FD2E0 )
  {
    v22 = (unsigned int *)(v40 - 8);
    if ( &pthread_create )
    {
      do
        v23 = __ldaxr(v22);
      while ( __stlxr(v23 - 1, v22) );
    }
    else
    {
      v23 = (*v22)--;
    }
    if ( v23 <= 0 )
      operator delete(v7);
  }
  v8 = (void *)(v38 - 24);
  if ( (__int64 *)(v38 - 24) != &qword_6FD2E0 )
  {
    v24 = (unsigned int *)(v38 - 8);
    if ( &pthread_create )
    {
      do
        v25 = __ldaxr(v24);
      while ( __stlxr(v25 - 1, v24) );
    }
    else
    {
      v25 = (*v24)--;
    }
    if ( v25 <= 0 )
      operator delete(v8);
  }
  sub_566BB8((int)&v38, "localOffset");
  v39 = 2;
  sub_56A528(&v40, &v38);
  v42 = 0;
  v41 = 0x900000001LL;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v9 = v39;
    sub_56A528(v9 + 8, &v40);
    *(_DWORD *)(v9 + 24) = v42;
    *(_QWORD *)(v9 + 16) = v41;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v10 = (void *)(v40 - 24);
  if ( (__int64 *)(v40 - 24) != &qword_6FD2E0 )
  {
    v26 = (unsigned int *)(v40 - 8);
    if ( &pthread_create )
    {
      do
        v27 = __ldaxr(v26);
      while ( __stlxr(v27 - 1, v26) );
    }
    else
    {
      v27 = (*v26)--;
    }
    if ( v27 <= 0 )
      operator delete(v10);
  }
  v11 = (void *)(v38 - 24);
  if ( (__int64 *)(v38 - 24) != &qword_6FD2E0 )
  {
    v28 = (unsigned int *)(v38 - 8);
    if ( &pthread_create )
    {
      do
        v29 = __ldaxr(v28);
      while ( __stlxr(v29 - 1, v28) );
    }
    else
    {
      v29 = (*v28)--;
    }
    if ( v29 <= 0 )
      operator delete(v11);
  }
  sub_566BB8((int)&v38, "localRotation");
  v39 = 3;
  sub_56A528(&v40, &v38);
  v41 = 0x900000001LL;
  v42 = 0;
  v12 = *(_QWORD *)(a2 + 8);
  if ( v12 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v12 = v39;
    sub_56A528(v12 + 8, &v40);
    *(_DWORD *)(v12 + 24) = v42;
    *(_QWORD *)(v12 + 16) = v41;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v13 = (void *)(v40 - 24);
  if ( (__int64 *)(v40 - 24) != &qword_6FD2E0 )
  {
    v30 = (unsigned int *)(v40 - 8);
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
      operator delete(v13);
  }
  v14 = (void *)(v38 - 24);
  if ( (__int64 *)(v38 - 24) != &qword_6FD2E0 )
  {
    v32 = (unsigned int *)(v38 - 8);
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
      operator delete(v14);
  }
  sub_566BB8((int)&v38, "worldOffset");
  v39 = 4;
  sub_56A528(&v40, &v38);
  v41 = 0x900000001LL;
  v42 = 0;
  v15 = *(_QWORD *)(a2 + 8);
  if ( v15 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v15 = v39;
    sub_56A528(v15 + 8, &v40);
    *(_DWORD *)(v15 + 24) = v42;
    *(_QWORD *)(v15 + 16) = v41;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v16 = (void *)(v40 - 24);
  if ( (__int64 *)(v40 - 24) != &qword_6FD2E0 )
  {
    v34 = (unsigned int *)(v40 - 8);
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
      operator delete(v16);
  }
  v17 = (void *)(v38 - 24);
  if ( (__int64 *)(v38 - 24) != &qword_6FD2E0 )
  {
    v36 = (unsigned int *)(v38 - 8);
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
      operator delete(v17);
  }
}


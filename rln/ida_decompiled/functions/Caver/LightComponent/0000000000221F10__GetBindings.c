/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000221F10
 * Mangled: _ZN5Caver14LightComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::LightComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x0000000000202970  Caver::LightComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000221DE0  Caver::LightComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000002228E8  `non-virtual thunk to'Caver::LightComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 297
 *   insn=0x0000000000221F2C string=0x0000000000221F30 "X"
 *   insn=0x0000000000221F30 string=0x0000000000221F34 ""
 *   insn=0x0000000000221F44 string=0x0000000000583F74 "type"
 *   insn=0x0000000000221F68 string=0x0000000000221F6C "o!"
 *   insn=0x0000000000221F6C string=0x0000000000221F70 " "
 *   insn=0x0000000000221F7C string=0x0000000000221F80 "u"
 *   insn=0x0000000000221F90 string=0x0000000000221F94 ""
 *   insn=0x0000000000221F98 string=0x0000000000221F9C "c!"
 *   insn=0x0000000000221FA0 string=0x0000000000221FA4 "\t\t@"
 *   insn=0x0000000000221FA8 string=0x0000000000221FAC ""
 *   insn=0x0000000000221FB0 string=0x0000000000221FB4 "h"
 *   insn=0x0000000000221FB4 string=0x0000000000221FB8 ""
 *   insn=0x0000000000221FB8 string=0x0000000000221FBC "h"
 *   insn=0x0000000000221FCC string=0x0000000000221FD0 "DV"
 *   insn=0x0000000000221FD0 string=0x00000000001F78E0 "0'"
 *   insn=0x0000000000221FD4 string=0x0000000000221FD8 "7&"
 *   insn=0x0000000000221FE8 string=0x0000000000222300 "\t&"
 *   insn=0x0000000000221FF4 string=0x0000000000221FF8 "a"
 *   insn=0x0000000000221FF8 string=0x0000000000222324 "\t&"
 *   insn=0x0000000000221FFC string=0x0000000000583F79 "intensity"
 *   insn=0x0000000000222014 string=0x0000000000222018 "6#"
 *   insn=0x0000000000222024 string=0x0000000000222028 "@!"
 *   insn=0x0000000000222028 string=0x000000000022202C ""
 *   insn=0x000000000022202C string=0x0000000000222030 ""
 *   insn=0x0000000000222038 string=0x000000000022203C "u"
 *   insn=0x000000000022204C string=0x0000000000222050 ""
 *   insn=0x0000000000222054 string=0x0000000000222058 "4!"
 *   insn=0x0000000000222058 string=0x000000000022205C "(C"
 *   insn=0x000000000022205C string=0x0000000000222060 "\t\t@"
 *   insn=0x0000000000222064 string=0x0000000000222068 ""
 *   insn=0x000000000022206C string=0x0000000000222070 "h"
 *   insn=0x0000000000222070 string=0x0000000000222074 ""
 *   insn=0x0000000000222074 string=0x0000000000222078 "h"
 *   insn=0x0000000000222098 string=0x000000000022209C "a"
 *   insn=0x000000000022209C string=0x0000000000222348 "\t&"
 *   insn=0x00000000002220AC string=0x000000000022236C "\t&"
 *   insn=0x00000000002220B0 string=0x0000000000583F83 "color"
 *   insn=0x00000000002220C8 string=0x00000000002220CC "6#"
 *   insn=0x00000000002220DC string=0x00000000002220E0 ""
 *   insn=0x00000000002220EC string=0x00000000002220F0 "u"
 *   insn=0x0000000000222100 string=0x0000000000222104 ""
 *   insn=0x0000000000222108 string=0x000000000022210C "!"
 *   insn=0x000000000022210C string=0x0000000000222110 "(C"
 *   insn=0x0000000000222110 string=0x0000000000222114 "\t\t@"
 *   insn=0x0000000000222118 string=0x000000000022211C ""
 *   insn=0x0000000000222120 string=0x0000000000222124 "h"
 *   insn=0x0000000000222124 string=0x0000000000222128 ""
 *   insn=0x0000000000222128 string=0x000000000022212C "h"
 *   insn=0x0000000000222150 string=0x0000000000222390 "\t&"
 *   insn=0x0000000000222160 string=0x00000000002223B4 "\t&"
 *   insn=0x0000000000222168 string=0x000000000022216C "!"
 *   insn=0x000000000022216C string=0x00000000002222D0 ""
 *   insn=0x0000000000222170 string=0x0000000000583F89 "radius"
 *   insn=0x00000000002221A4 string=0x00000000002221A8 "t"
 *   insn=0x00000000002221B8 string=0x00000000002221BC ""
 *   insn=0x00000000002221C8 string=0x00000000002221CC "\t\t@"
 *   insn=0x00000000002221D0 string=0x00000000002221D4 ""
 *   insn=0x00000000002221D8 string=0x00000000002221DC "h"
 *   insn=0x00000000002221DC string=0x00000000002221E0 ""
 *   insn=0x00000000002221E0 string=0x00000000002221E4 "h"
 *   insn=0x0000000000222208 string=0x0000000000222498 "\t&"
 *   insn=0x0000000000222214 string=0x0000000000222218 "!"
 *   insn=0x0000000000222218 string=0x00000000002224BC "\t&"
 *   insn=0x000000000022221C string=0x0000000000583F90 "offset"
 *   insn=0x0000000000222228 string=0x000000000022222C "c"
 *   insn=0x0000000000222248 string=0x000000000022224C ""
 *   insn=0x0000000000222258 string=0x000000000022225C "t"
 *   insn=0x000000000022226C string=0x0000000000222270 ""
 *   insn=0x000000000022227C string=0x0000000000222280 "\t\t@"
 *   insn=0x0000000000222284 string=0x0000000000222288 ""
 *   insn=0x000000000022228C string=0x0000000000222290 "h"
 *   insn=0x0000000000222290 string=0x0000000000222294 ""
 *   insn=0x0000000000222294 string=0x0000000000222298 "h"
 *   insn=0x00000000002222B8 string=0x00000000002222BC "!"
 *   insn=0x00000000002222BC string=0x00000000002224E0 "\t&"
 *   insn=0x00000000002222CC string=0x0000000000222504 "\t&"
 *   insn=0x00000000002222D8 string=0x00000000002222DC "a"
 *   insn=0x00000000002222DC string=0x00000000002225A8 "JO"
 *   insn=0x0000000000222300 string=0x0000000000222304 ")=G"
 *   insn=0x0000000000222304 string=0x0000000000222308 "!"
 *   insn=0x0000000000222308 string=0x000000000022230C "i"
 *   insn=0x000000000022230C string=0x0000000000222310 "\t"
 *   insn=0x000000000022230C string=0x00000000002223D8 "\t"
 *   insn=0x0000000000222310 string=0x0000000000222314 "*"
 *   insn=0x0000000000222314 string=0x0000000000222318 "\n"
 *   insn=0x000000000022231C string=0x0000000000222320 "1"
 *   insn=0x0000000000222320 string=0x00000000002223E4 "?"
 *   insn=0x0000000000222324 string=0x0000000000222328 ")=G"
 *   insn=0x0000000000222328 string=0x000000000022232C "!"
 *   insn=0x000000000022232C string=0x0000000000222330 "I"
 *   insn=0x0000000000222330 string=0x0000000000222334 "\t"
 *   insn=0x0000000000222330 string=0x00000000002223F8 "\t"
 *   insn=0x0000000000222334 string=0x0000000000222338 "*"
 *   insn=0x0000000000222338 string=0x000000000022233C "\n"
 *   insn=0x0000000000222340 string=0x0000000000222344 "0"
 *   insn=0x0000000000222344 string=0x0000000000222404 "?"
 *   insn=0x0000000000222348 string=0x000000000022234C ")=G"
 *   insn=0x000000000022234C string=0x0000000000222350 "!"
 *   insn=0x0000000000222350 string=0x0000000000222354 ")"
 *   insn=0x0000000000222354 string=0x0000000000222358 "\t"
 *   insn=0x0000000000222354 string=0x0000000000222418 "\t"
 *   insn=0x0000000000222358 string=0x000000000022235C "*"
 *   insn=0x000000000022235C string=0x0000000000222360 "\n"
 *   insn=0x0000000000222364 string=0x0000000000222368 "/"
 *   insn=0x0000000000222368 string=0x0000000000222424 "?"
 *   insn=0x000000000022236C string=0x0000000000222370 ")=G"
 *   insn=0x0000000000222370 string=0x0000000000222374 "!"
 *   insn=0x0000000000222374 string=0x0000000000222378 "\t"
 *   insn=0x0000000000222378 string=0x000000000022237C "\t"
 *   insn=0x0000000000222378 string=0x0000000000222438 "\t"
 *   insn=0x000000000022237C string=0x0000000000222380 "*"
 *   insn=0x0000000000222380 string=0x0000000000222384 "\n"
 *   insn=0x0000000000222388 string=0x000000000022238C "."
 *   insn=0x000000000022238C string=0x0000000000222444 "?"
 *   insn=0x0000000000222390 string=0x0000000000222394 ")=G"
 *   insn=0x0000000000222394 string=0x0000000000222398 "!"
 *   insn=0x000000000022239C string=0x00000000002223A0 "\t"
 *   insn=0x000000000022239C string=0x0000000000222458 "\t"
 *   insn=0x00000000002223A0 string=0x00000000002223A4 "*"
 *   insn=0x00000000002223A4 string=0x00000000002223A8 "\n"
 *   insn=0x00000000002223AC string=0x00000000002223B0 "-"
 *   insn=0x00000000002223B0 string=0x0000000000222464 "?"
 *   insn=0x00000000002223B4 string=0x00000000002223B8 ")=G"
 *   insn=0x00000000002223B8 string=0x00000000002223BC "!"
 *   insn=0x00000000002223C0 string=0x00000000002223C4 "\t"
 *   insn=0x00000000002223C0 string=0x0000000000222478 "\t"
 *   insn=0x00000000002223C4 string=0x00000000002223C8 "*"
 *   insn=0x00000000002223C8 string=0x00000000002223CC "\n"
 *   insn=0x00000000002223D0 string=0x00000000002223D4 ","
 *   insn=0x00000000002223D4 string=0x0000000000222484 "?"
 *   insn=0x00000000002223D8 string=0x00000000002223DC "*"
 *   insn=0x00000000002223DC string=0x00000000002223E0 "\n"
 *   insn=0x00000000002223E4 string=0x00000000002223E8 ","
 *   insn=0x00000000002223F8 string=0x00000000002223FC "*"
 *   insn=0x00000000002223FC string=0x0000000000222400 "\n"
 *   insn=0x0000000000222418 string=0x000000000022241C "*"
 *   insn=0x000000000022241C string=0x0000000000222420 "\n"
 *   insn=0x0000000000222430 string=0x0000000000222434 ""
 *   insn=0x0000000000222438 string=0x000000000022243C "*"
 *   insn=0x000000000022243C string=0x0000000000222440 "\n"
 *   insn=0x0000000000222444 string=0x0000000000222448 "L"
 *   insn=0x0000000000222458 string=0x000000000022245C "*"
 *   insn=0x000000000022245C string=0x0000000000222460 "\n"
 *   insn=0x0000000000222464 string=0x0000000000222468 "l"
 *   insn=0x0000000000222470 string=0x0000000000222474 "8"
 *   insn=0x0000000000222478 string=0x000000000022247C "*"
 *   insn=0x000000000022247C string=0x0000000000222480 "\n"
 *   insn=0x0000000000222490 string=0x0000000000222494 "4"
 *   insn=0x0000000000222498 string=0x000000000022249C ")=G"
 *   insn=0x000000000022249C string=0x00000000002224A0 "!"
 *   insn=0x00000000002224A0 string=0x00000000002224A4 ")"
 *   insn=0x00000000002224A4 string=0x00000000002224A8 "\t"
 *   insn=0x00000000002224A4 string=0x0000000000222528 "\t"
 *   insn=0x00000000002224A8 string=0x00000000002224AC "*"
 *   insn=0x00000000002224AC string=0x00000000002224B0 "\n"
 *   insn=0x00000000002224B8 string=0x0000000000222534 "?"
 *   insn=0x00000000002224BC string=0x00000000002224C0 ")=G"
 *   insn=0x00000000002224C0 string=0x00000000002224C4 "!"
 *   insn=0x00000000002224C4 string=0x00000000002224C8 "\t"
 *   insn=0x00000000002224C8 string=0x00000000002224CC "\t"
 *   insn=0x00000000002224C8 string=0x0000000000222548 "\t"
 *   insn=0x00000000002224CC string=0x00000000002224D0 "*"
 *   insn=0x00000000002224D0 string=0x00000000002224D4 "\n"
 *   insn=0x00000000002224DC string=0x0000000000222554 "?"
 *   insn=0x00000000002224E0 string=0x00000000002224E4 ")=G"
 *   insn=0x00000000002224E4 string=0x00000000002224E8 "!"
 *   insn=0x00000000002224EC string=0x00000000002224F0 "\t"
 *   insn=0x00000000002224EC string=0x0000000000222568 "\t"
 *   insn=0x00000000002224F0 string=0x00000000002224F4 "*"
 *   insn=0x00000000002224F4 string=0x00000000002224F8 "\n"
 *   insn=0x0000000000222500 string=0x0000000000222574 "?"
 *   insn=0x0000000000222504 string=0x0000000000222508 ")=G"
 *   insn=0x0000000000222508 string=0x000000000022250C "!"
 *   insn=0x0000000000222510 string=0x0000000000222514 "\t"
 *   insn=0x0000000000222510 string=0x0000000000222588 "\t"
 *   insn=0x0000000000222514 string=0x0000000000222518 "*"
 *   insn=0x0000000000222518 string=0x000000000022251C "\n"
 *   insn=0x0000000000222524 string=0x0000000000222594 "?"
 *   insn=0x0000000000222528 string=0x000000000022252C "*"
 *   insn=0x000000000022252C string=0x0000000000222530 "\n"
 *   insn=0x0000000000222540 string=0x0000000000222544 "2"
 *   insn=0x0000000000222548 string=0x000000000022254C "*"
 *   insn=0x000000000022254C string=0x0000000000222550 "\n"
 *   insn=0x0000000000222554 string=0x0000000000222558 ","
 *   insn=0x0000000000222560 string=0x0000000000222564 "."
 *   insn=0x0000000000222568 string=0x000000000022256C "*"
 *   insn=0x000000000022256C string=0x0000000000222570 "\n"
 *   insn=0x0000000000222574 string=0x0000000000222578 "L"
 *   insn=0x0000000000222580 string=0x0000000000222584 "O"
 *   insn=0x0000000000222588 string=0x000000000022258C "*"
 *   insn=0x000000000022258C string=0x0000000000222590 "\n"
 *   insn=0x00000000002225A0 string=0x00000000002225A4 "K"
 *   insn=0x00000000002225A8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002225B0 string=0x00000000002225B4 "(a"
 *   insn=0x00000000002225BC string=0x00000000002225C0 "\n&"
 *   insn=0x00000000002225C0 string=0x00000000002225C4 "J=G"
 *   insn=0x00000000002225C4 string=0x00000000002225C8 ")!"
 *   insn=0x00000000002225CC string=0x00000000002225D0 "*"
 *   insn=0x00000000002225CC string=0x00000000002225E4 "*"
 *   insn=0x00000000002225D0 string=0x00000000002225D4 "K"
 *   insn=0x00000000002225D4 string=0x00000000002225D8 "+"
 *   insn=0x00000000002225E0 string=0x00000000002225F0 "_"
 *   insn=0x00000000002225E4 string=0x00000000002225E8 "K"
 *   insn=0x00000000002225E8 string=0x00000000002225EC "+"
 *   insn=0x00000000002225FC string=0x0000000000222600 "i"
 *   insn=0x0000000000222614 string=0x0000000000222618 "@"
 *   insn=0x0000000000222618 string=0x000000000022261C "\t&"
 *   insn=0x000000000022261C string=0x0000000000222620 ")=G"
 *   insn=0x0000000000222620 string=0x0000000000222624 "!"
 *   insn=0x0000000000222628 string=0x000000000022262C "\t"
 *   insn=0x0000000000222628 string=0x00000000002228C4 "\t"
 *   insn=0x000000000022262C string=0x0000000000222630 "*"
 *   insn=0x0000000000222630 string=0x0000000000222634 "\n"
 *   insn=0x000000000022263C string=0x00000000002228AC "?"
 *   insn=0x0000000000222648 string=0x000000000022264C "(a"
 *   insn=0x0000000000222654 string=0x0000000000222658 "\n&"
 *   insn=0x0000000000222658 string=0x000000000022265C "J=G"
 *   insn=0x000000000022265C string=0x0000000000222660 ")!"
 *   insn=0x0000000000222664 string=0x0000000000222668 "*"
 *   insn=0x0000000000222664 string=0x000000000022267C "*"
 *   insn=0x0000000000222668 string=0x000000000022266C "K"
 *   insn=0x000000000022266C string=0x0000000000222670 "+"
 *   insn=0x0000000000222678 string=0x0000000000222688 "_"
 *   insn=0x000000000022267C string=0x0000000000222680 "K"
 *   insn=0x0000000000222680 string=0x0000000000222684 "+"
 *   insn=0x0000000000222694 string=0x0000000000222698 "C"
 *   insn=0x00000000002226B0 string=0x00000000002226B4 "\t&"
 *   insn=0x00000000002226B4 string=0x00000000002226B8 ")=G"
 *   insn=0x00000000002226B8 string=0x00000000002226BC "!"
 *   insn=0x00000000002226BC string=0x00000000002226C0 ")"
 *   insn=0x00000000002226C0 string=0x00000000002226C4 "\t"
 *   insn=0x00000000002226C4 string=0x00000000002226C8 "*"
 *   insn=0x00000000002226C8 string=0x00000000002226CC "\n"
 *   insn=0x00000000002226D0 string=0x00000000002226D4 "v"
 *   insn=0x00000000002226E0 string=0x00000000002226E4 "(a"
 *   insn=0x00000000002226EC string=0x00000000002226F0 "\n&"
 *   insn=0x00000000002226F0 string=0x00000000002226F4 "J=G"
 *   insn=0x00000000002226F4 string=0x00000000002226F8 ")!"
 *   insn=0x00000000002226FC string=0x0000000000222700 "*"
 *   insn=0x00000000002226FC string=0x0000000000222714 "*"
 *   insn=0x0000000000222700 string=0x0000000000222704 "K"
 *   insn=0x0000000000222704 string=0x0000000000222708 "+"
 *   insn=0x0000000000222710 string=0x0000000000222720 "_"
 *   insn=0x0000000000222714 string=0x0000000000222718 "K"
 *   insn=0x0000000000222718 string=0x000000000022271C "+"
 *   insn=0x0000000000222748 string=0x000000000022274C "\t&"
 *   insn=0x000000000022274C string=0x0000000000222750 ")=G"
 *   insn=0x0000000000222750 string=0x0000000000222754 "!"
 *   insn=0x0000000000222754 string=0x0000000000222758 "i"
 *   insn=0x0000000000222758 string=0x000000000022275C "\t"
 *   insn=0x000000000022275C string=0x0000000000222760 "*"
 *   insn=0x0000000000222760 string=0x0000000000222764 "\n"
 *   insn=0x0000000000222768 string=0x000000000022276C "P"
 *   insn=0x0000000000222778 string=0x000000000022277C "(a"
 *   insn=0x0000000000222784 string=0x0000000000222788 "\n&"
 *   insn=0x0000000000222788 string=0x000000000022278C "J=G"
 *   insn=0x000000000022278C string=0x0000000000222790 ")!"
 *   insn=0x0000000000222794 string=0x0000000000222798 "*"
 *   insn=0x0000000000222794 string=0x00000000002227AC "*"
 *   insn=0x0000000000222798 string=0x000000000022279C "K"
 *   insn=0x000000000022279C string=0x00000000002227A0 "+"
 *   insn=0x00000000002227A8 string=0x00000000002227B8 "_"
 *   insn=0x00000000002227AC string=0x00000000002227B0 "K"
 *   insn=0x00000000002227B0 string=0x00000000002227B4 "+"
 *   insn=0x00000000002227E0 string=0x00000000002227E4 "\t&"
 *   insn=0x00000000002227E4 string=0x00000000002227E8 ")=G"
 *   insn=0x00000000002227E8 string=0x00000000002227EC "!"
 *   insn=0x00000000002227F0 string=0x00000000002227F4 "\t"
 *   insn=0x00000000002227F4 string=0x00000000002227F8 "*"
 *   insn=0x00000000002227F8 string=0x00000000002227FC "\n"
 *   insn=0x0000000000222800 string=0x0000000000222804 "*"
 *   insn=0x000000000022280C string=0x0000000000222810 "\n&"
 *   insn=0x0000000000222810 string=0x0000000000222814 "J"
 *   insn=0x0000000000222818 string=0x000000000022281C "(a"
 *   insn=0x0000000000222824 string=0x0000000000222828 "\n&"
 *   insn=0x0000000000222828 string=0x000000000022282C "J=G"
 *   insn=0x000000000022282C string=0x0000000000222830 ")!"
 *   insn=0x0000000000222834 string=0x0000000000222838 "*"
 *   insn=0x0000000000222834 string=0x000000000022284C "*"
 *   insn=0x0000000000222838 string=0x000000000022283C "K"
 *   insn=0x000000000022283C string=0x0000000000222840 "+"
 *   insn=0x0000000000222848 string=0x0000000000222858 "_"
 *   insn=0x000000000022284C string=0x0000000000222850 "K"
 *   insn=0x0000000000222850 string=0x0000000000222854 "+"
 *   insn=0x0000000000222874 string=0x0000000000222878 "\t&"
 *   insn=0x0000000000222878 string=0x000000000022287C ")"
 *   insn=0x0000000000222888 string=0x000000000022288C "\t&"
 *   insn=0x000000000022288C string=0x0000000000222890 ")=G"
 *   insn=0x0000000000222890 string=0x0000000000222894 "!"
 *   insn=0x0000000000222894 string=0x0000000000222898 "i"
 *   insn=0x0000000000222898 string=0x000000000022289C "\t"
 *   insn=0x000000000022289C string=0x00000000002228A0 "*"
 *   insn=0x00000000002228A0 string=0x00000000002228A4 "\n"
 *   insn=0x00000000002228C4 string=0x00000000002228C8 "*"
 *   insn=0x00000000002228C8 string=0x00000000002228CC "\n"
 *   insn=0x00000000002228CC string=0x00000000002228D0 "?"
 *   insn=0x00000000002228D0 string=0x00000000002228D4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::LightComponent::GetBindings(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  void *v5; // x0
  void *v6; // x0
  __int64 v7; // x21
  void *v8; // x0
  void *v9; // x0
  __int64 v10; // x21
  void *v11; // x0
  void *v12; // x0
  __int64 v13; // x20
  void *v14; // x0
  void *v15; // x0
  __int64 v16; // x20
  void *v17; // x0
  void *v18; // x0
  unsigned int *v19; // x8
  int v20; // w9
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
  __int64 v39; // [xsp+8h] [xbp-78h] BYREF
  int v40; // [xsp+18h] [xbp-68h]
  __int64 v41; // [xsp+20h] [xbp-60h] BYREF
  __int64 v42; // [xsp+28h] [xbp-58h]
  int v43; // [xsp+30h] [xbp-50h]
  __int64 v44; // [xsp+38h] [xbp-48h]

  v44 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)&v39, "type");
  v40 = 0;
  sub_56A528(&v41, &v39);
  v42 = 0x100000001LL;
  v43 = 5;
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v4 = v40;
    sub_56A528(v4 + 8, &v41);
    *(_DWORD *)(v4 + 24) = v43;
    *(_QWORD *)(v4 + 16) = v42;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v5 = (void *)(v41 - 24);
  if ( (__int64 *)(v41 - 24) != &qword_6FD2E0 )
  {
    v19 = (unsigned int *)(v41 - 8);
    if ( &pthread_create )
    {
      do
        v20 = __ldaxr(v19);
      while ( __stlxr(v20 - 1, v19) );
    }
    else
    {
      v20 = (*v19)--;
    }
    if ( v20 <= 0 )
      operator delete(v5);
  }
  v6 = (void *)(v39 - 24);
  if ( (__int64 *)(v39 - 24) != &qword_6FD2E0 )
  {
    v21 = (unsigned int *)(v39 - 8);
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
      operator delete(v6);
  }
  sub_566BB8((int)&v39, "intensity");
  v40 = 1;
  sub_56A528(&v41, &v39);
  v43 = 0;
  v42 = 0x500000001LL;
  v7 = *(_QWORD *)(a2 + 8);
  if ( v7 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v7 = v40;
    sub_56A528(v7 + 8, &v41);
    *(_DWORD *)(v7 + 24) = v43;
    *(_QWORD *)(v7 + 16) = v42;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v8 = (void *)(v41 - 24);
  if ( (__int64 *)(v41 - 24) != &qword_6FD2E0 )
  {
    v23 = (unsigned int *)(v41 - 8);
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
      operator delete(v8);
  }
  v9 = (void *)(v39 - 24);
  if ( (__int64 *)(v39 - 24) != &qword_6FD2E0 )
  {
    v25 = (unsigned int *)(v39 - 8);
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
      operator delete(v9);
  }
  sub_566BB8((int)&v39, "color");
  v40 = 2;
  sub_56A528(&v41, &v39);
  v43 = 0;
  v42 = 0x700000001LL;
  v10 = *(_QWORD *)(a2 + 8);
  if ( v10 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v10 = v40;
    sub_56A528(v10 + 8, &v41);
    *(_DWORD *)(v10 + 24) = v43;
    *(_QWORD *)(v10 + 16) = v42;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v11 = (void *)(v41 - 24);
  if ( (__int64 *)(v41 - 24) != &qword_6FD2E0 )
  {
    v27 = (unsigned int *)(v41 - 8);
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
      operator delete(v11);
  }
  v12 = (void *)(v39 - 24);
  if ( (__int64 *)(v39 - 24) != &qword_6FD2E0 )
  {
    v29 = (unsigned int *)(v39 - 8);
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
      operator delete(v12);
  }
  if ( *(_DWORD *)(a1 + 112) == 3 )
  {
    sub_566BB8((int)&v39, "radius");
    v40 = 5;
    sub_56A528(&v41, &v39);
    v42 = 0x500000001LL;
    v43 = 0;
    v13 = *(_QWORD *)(a2 + 8);
    if ( v13 == *(_QWORD *)(a2 + 16) )
    {
      std::vector<Caver::Binding>::_M_insert_aux();
    }
    else
    {
      *(_DWORD *)v13 = v40;
      sub_56A528(v13 + 8, &v41);
      *(_DWORD *)(v13 + 24) = v43;
      *(_QWORD *)(v13 + 16) = v42;
      *(_QWORD *)(a2 + 8) += 32LL;
    }
    v14 = (void *)(v41 - 24);
    if ( (__int64 *)(v41 - 24) != &qword_6FD2E0 )
    {
      v31 = (unsigned int *)(v41 - 8);
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
        operator delete(v14);
    }
    v15 = (void *)(v39 - 24);
    if ( (__int64 *)(v39 - 24) != &qword_6FD2E0 )
    {
      v33 = (unsigned int *)(v39 - 8);
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
        operator delete(v15);
    }
    sub_566BB8((int)&v39, "offset");
    v40 = 6;
    sub_56A528(&v41, &v39);
    v43 = 0;
    v42 = 0x900000001LL;
    v16 = *(_QWORD *)(a2 + 8);
    if ( v16 == *(_QWORD *)(a2 + 16) )
    {
      std::vector<Caver::Binding>::_M_insert_aux();
    }
    else
    {
      *(_DWORD *)v16 = v40;
      sub_56A528(v16 + 8, &v41);
      *(_DWORD *)(v16 + 24) = v43;
      *(_QWORD *)(v16 + 16) = v42;
      *(_QWORD *)(a2 + 8) += 32LL;
    }
    v17 = (void *)(v41 - 24);
    if ( (__int64 *)(v41 - 24) != &qword_6FD2E0 )
    {
      v35 = (unsigned int *)(v41 - 8);
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
        operator delete(v17);
    }
    v18 = (void *)(v39 - 24);
    if ( (__int64 *)(v39 - 24) != &qword_6FD2E0 )
    {
      v37 = (unsigned int *)(v39 - 8);
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
        operator delete(v18);
    }
  }
}


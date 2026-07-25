/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000290FF4
 * Mangled: _ZN5Caver15AttackComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::AttackComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001FDA60  Caver::AttackComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000290EE0  Caver::AttackComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001FDA60  Caver::AttackComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 470
 *   insn=0x000000000029100C string=0x0000000000291010 "W"
 *   insn=0x0000000000291020 string=0x00000000001FB3B0 "0'"
 *   insn=0x0000000000291024 string=0x0000000000588EF4 "onAttack"
 *   insn=0x000000000029104C string=0x0000000000291050 "6e"
 *   insn=0x0000000000291060 string=0x0000000000291064 "t"
 *   insn=0x0000000000291074 string=0x0000000000291078 ""
 *   insn=0x000000000029107C string=0x0000000000291080 "*e"
 *   insn=0x0000000000291084 string=0x0000000000291088 "\t\t@"
 *   insn=0x000000000029108C string=0x0000000000291090 ""
 *   insn=0x0000000000291094 string=0x0000000000291098 "h"
 *   insn=0x0000000000291098 string=0x000000000029109C ""
 *   insn=0x000000000029109C string=0x00000000002910A0 "h"
 *   insn=0x00000000002910B0 string=0x00000000002910B4 ""
 *   insn=0x00000000002910B4 string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002910C8 string=0x00000000002910CC "A-"
 *   insn=0x00000000002910E0 string=0x0000000000588EFD "attackInterval"
 *   insn=0x0000000000291108 string=0x000000000029110C "e"
 *   insn=0x0000000000291110 string=0x0000000000291114 ""
 *   insn=0x000000000029111C string=0x0000000000291120 "t"
 *   insn=0x0000000000291130 string=0x0000000000291134 ""
 *   insn=0x000000000029113C string=0x0000000000291140 "C"
 *   insn=0x0000000000291140 string=0x0000000000291144 "\t\t@"
 *   insn=0x0000000000291148 string=0x000000000029114C ""
 *   insn=0x0000000000291150 string=0x0000000000291154 "h"
 *   insn=0x0000000000291154 string=0x0000000000291158 ""
 *   insn=0x0000000000291158 string=0x000000000029115C "h"
 *   insn=0x0000000000291194 string=0x0000000000588F0C "attackDuration"
 *   insn=0x00000000002911C8 string=0x00000000002911CC "t"
 *   insn=0x00000000002911DC string=0x00000000002911E0 ""
 *   insn=0x00000000002911E8 string=0x00000000002911EC "C"
 *   insn=0x00000000002911EC string=0x00000000002911F0 "\t\t@"
 *   insn=0x00000000002911F4 string=0x00000000002911F8 ""
 *   insn=0x00000000002911FC string=0x0000000000291200 "h"
 *   insn=0x0000000000291200 string=0x0000000000291204 ""
 *   insn=0x0000000000291204 string=0x0000000000291208 "h"
 *   insn=0x0000000000291238 string=0x000000000029123C "a'"
 *   insn=0x0000000000291240 string=0x0000000000588F1B "damageStartTime"
 *   insn=0x000000000029124C string=0x0000000000291250 "ZV"
 *   insn=0x0000000000291274 string=0x0000000000291278 "t"
 *   insn=0x0000000000291288 string=0x000000000029128C ""
 *   insn=0x0000000000291294 string=0x0000000000291298 "C"
 *   insn=0x0000000000291298 string=0x000000000029129C "\t\t@"
 *   insn=0x00000000002912A0 string=0x00000000002912A4 ""
 *   insn=0x00000000002912A8 string=0x00000000002912AC "h"
 *   insn=0x00000000002912AC string=0x00000000002912B0 ""
 *   insn=0x00000000002912B0 string=0x00000000002912B4 "h"
 *   insn=0x00000000002912E4 string=0x00000000002912E8 "A$"
 *   insn=0x00000000002912EC string=0x0000000000588F2B "damageEndTime"
 *   insn=0x00000000002912F8 string=0x00000000002912FC "/V"
 *   insn=0x0000000000291320 string=0x0000000000291324 "t"
 *   insn=0x0000000000291334 string=0x0000000000291338 ""
 *   insn=0x000000000029133C string=0x0000000000291340 "zd"
 *   insn=0x0000000000291340 string=0x0000000000291344 "C"
 *   insn=0x0000000000291344 string=0x0000000000291348 "\t\t@"
 *   insn=0x000000000029134C string=0x0000000000291350 ""
 *   insn=0x0000000000291354 string=0x0000000000291358 "h"
 *   insn=0x0000000000291358 string=0x000000000029135C ""
 *   insn=0x000000000029135C string=0x0000000000291360 "h"
 *   insn=0x0000000000291370 string=0x0000000000291374 "["
 *   insn=0x0000000000291390 string=0x0000000000291394 "!!"
 *   insn=0x0000000000291398 string=0x0000000000588F39 "damageStartTime2"
 *   insn=0x00000000002913AC string=0x00000000002913B0 "("
 *   insn=0x00000000002913C0 string=0x00000000002913C4 "Yd"
 *   insn=0x00000000002913CC string=0x00000000002913D0 "t"
 *   insn=0x00000000002913E0 string=0x00000000002913E4 ""
 *   insn=0x00000000002913E8 string=0x00000000002913EC "Od"
 *   insn=0x00000000002913EC string=0x00000000002913F0 "C"
 *   insn=0x00000000002913F0 string=0x00000000002913F4 "\t\t@"
 *   insn=0x00000000002913F8 string=0x00000000002913FC ""
 *   insn=0x0000000000291400 string=0x0000000000291404 "h"
 *   insn=0x0000000000291404 string=0x0000000000291408 ""
 *   insn=0x0000000000291408 string=0x000000000029140C "h"
 *   insn=0x000000000029141C string=0x0000000000291420 "0"
 *   insn=0x000000000029142C string=0x0000000000291430 "a"
 *   insn=0x0000000000291444 string=0x0000000000588F4A "damageEndTime2"
 *   insn=0x0000000000291458 string=0x000000000029145C "H"
 *   insn=0x000000000029146C string=0x0000000000291470 ".d"
 *   insn=0x0000000000291478 string=0x000000000029147C "t"
 *   insn=0x000000000029148C string=0x0000000000291490 ""
 *   insn=0x0000000000291494 string=0x0000000000291498 "$d"
 *   insn=0x0000000000291498 string=0x000000000029149C "C"
 *   insn=0x000000000029149C string=0x00000000002914A0 "\t\t@"
 *   insn=0x00000000002914A4 string=0x00000000002914A8 ""
 *   insn=0x00000000002914AC string=0x00000000002914B0 "h"
 *   insn=0x00000000002914B0 string=0x00000000002914B4 ""
 *   insn=0x00000000002914B4 string=0x00000000002914B8 "h"
 *   insn=0x00000000002914D8 string=0x00000000002914DC "A"
 *   insn=0x00000000002914F0 string=0x0000000000588F59 "animationStartBlendTime"
 *   insn=0x0000000000291504 string=0x0000000000291508 "h"
 *   insn=0x0000000000291524 string=0x0000000000291528 "t"
 *   insn=0x0000000000291538 string=0x000000000029153C ""
 *   insn=0x0000000000291544 string=0x0000000000291548 "C"
 *   insn=0x0000000000291548 string=0x000000000029154C "\t\t@"
 *   insn=0x0000000000291550 string=0x0000000000291554 ""
 *   insn=0x0000000000291558 string=0x000000000029155C "h"
 *   insn=0x000000000029155C string=0x0000000000291560 ""
 *   insn=0x0000000000291560 string=0x0000000000291564 "h"
 *   insn=0x0000000000291584 string=0x0000000000291588 "!"
 *   insn=0x000000000029159C string=0x0000000000588F71 "animationEndBlendTime"
 *   insn=0x00000000002915D0 string=0x00000000002915D4 "t"
 *   insn=0x00000000002915E4 string=0x00000000002915E8 ""
 *   insn=0x00000000002915F0 string=0x00000000002915F4 "C"
 *   insn=0x00000000002915F4 string=0x00000000002915F8 "\t\t@"
 *   insn=0x00000000002915FC string=0x0000000000291600 ""
 *   insn=0x0000000000291604 string=0x0000000000291608 "h"
 *   insn=0x0000000000291608 string=0x000000000029160C ""
 *   insn=0x000000000029160C string=0x0000000000291610 "h"
 *   insn=0x0000000000291650 string=0x0000000000291654 "A'"
 *   insn=0x0000000000291674 string=0x0000000000291678 ")=G"
 *   insn=0x0000000000291678 string=0x000000000029167C "!"
 *   insn=0x0000000000291680 string=0x0000000000291684 "\t"
 *   insn=0x0000000000291680 string=0x00000000002918FC "\t"
 *   insn=0x0000000000291684 string=0x0000000000291688 "*"
 *   insn=0x0000000000291688 string=0x000000000029168C "\n"
 *   insn=0x0000000000291694 string=0x0000000000291908 "?"
 *   insn=0x0000000000291698 string=0x000000000029169C ")=G"
 *   insn=0x000000000029169C string=0x00000000002916A0 "!"
 *   insn=0x00000000002916A4 string=0x00000000002916A8 "\t"
 *   insn=0x00000000002916A4 string=0x000000000029191C "\t"
 *   insn=0x00000000002916A8 string=0x00000000002916AC "*"
 *   insn=0x00000000002916AC string=0x00000000002916B0 "\n"
 *   insn=0x00000000002916B8 string=0x0000000000291928 "?"
 *   insn=0x00000000002916BC string=0x00000000002916C0 ")=G"
 *   insn=0x00000000002916C0 string=0x00000000002916C4 "!"
 *   insn=0x00000000002916C8 string=0x00000000002916CC "\t"
 *   insn=0x00000000002916C8 string=0x000000000029193C "\t"
 *   insn=0x00000000002916CC string=0x00000000002916D0 "*"
 *   insn=0x00000000002916D0 string=0x00000000002916D4 "\n"
 *   insn=0x00000000002916DC string=0x0000000000291948 "?"
 *   insn=0x00000000002916E0 string=0x00000000002916E4 ")=G"
 *   insn=0x00000000002916E4 string=0x00000000002916E8 "!"
 *   insn=0x00000000002916EC string=0x00000000002916F0 "\t"
 *   insn=0x00000000002916EC string=0x000000000029195C "\t"
 *   insn=0x00000000002916F0 string=0x00000000002916F4 "*"
 *   insn=0x00000000002916F4 string=0x00000000002916F8 "\n"
 *   insn=0x0000000000291700 string=0x0000000000291968 "?"
 *   insn=0x0000000000291704 string=0x0000000000291708 ")=G"
 *   insn=0x0000000000291708 string=0x000000000029170C "!"
 *   insn=0x000000000029170C string=0x0000000000291710 "i"
 *   insn=0x0000000000291710 string=0x0000000000291714 "\t"
 *   insn=0x0000000000291710 string=0x000000000029197C "\t"
 *   insn=0x0000000000291714 string=0x0000000000291718 "*"
 *   insn=0x0000000000291718 string=0x000000000029171C "\n"
 *   insn=0x0000000000291724 string=0x0000000000291988 "?"
 *   insn=0x0000000000291728 string=0x000000000029172C ")=G"
 *   insn=0x000000000029172C string=0x0000000000291730 "!"
 *   insn=0x0000000000291730 string=0x0000000000291734 "I"
 *   insn=0x0000000000291734 string=0x0000000000291738 "\t"
 *   insn=0x0000000000291734 string=0x000000000029199C "\t"
 *   insn=0x0000000000291738 string=0x000000000029173C "*"
 *   insn=0x000000000029173C string=0x0000000000291740 "\n"
 *   insn=0x0000000000291748 string=0x00000000002919A8 "?"
 *   insn=0x000000000029174C string=0x0000000000291750 ")=G"
 *   insn=0x0000000000291750 string=0x0000000000291754 "!"
 *   insn=0x0000000000291754 string=0x0000000000291758 ")"
 *   insn=0x0000000000291758 string=0x000000000029175C "\t"
 *   insn=0x0000000000291758 string=0x00000000002919BC "\t"
 *   insn=0x000000000029175C string=0x0000000000291760 "*"
 *   insn=0x0000000000291760 string=0x0000000000291764 "\n"
 *   insn=0x000000000029176C string=0x00000000002919C8 "?"
 *   insn=0x0000000000291770 string=0x0000000000291774 ")=G"
 *   insn=0x0000000000291774 string=0x0000000000291778 "!"
 *   insn=0x0000000000291778 string=0x000000000029177C "\t"
 *   insn=0x000000000029177C string=0x0000000000291780 "\t"
 *   insn=0x000000000029177C string=0x00000000002919DC "\t"
 *   insn=0x0000000000291780 string=0x0000000000291784 "*"
 *   insn=0x0000000000291784 string=0x0000000000291788 "\n"
 *   insn=0x0000000000291790 string=0x00000000002919E8 "?"
 *   insn=0x0000000000291794 string=0x0000000000291798 ")=G"
 *   insn=0x0000000000291798 string=0x000000000029179C "!"
 *   insn=0x00000000002917A0 string=0x00000000002917A4 "\t"
 *   insn=0x00000000002917A0 string=0x00000000002919FC "\t"
 *   insn=0x00000000002917A4 string=0x00000000002917A8 "*"
 *   insn=0x00000000002917A8 string=0x00000000002917AC "\n"
 *   insn=0x00000000002917B4 string=0x0000000000291A08 "?"
 *   insn=0x00000000002917B8 string=0x00000000002917BC ")=G"
 *   insn=0x00000000002917BC string=0x00000000002917C0 "!"
 *   insn=0x00000000002917C4 string=0x00000000002917C8 "\t"
 *   insn=0x00000000002917C4 string=0x0000000000291A1C "\t"
 *   insn=0x00000000002917C8 string=0x00000000002917CC "*"
 *   insn=0x00000000002917CC string=0x00000000002917D0 "\n"
 *   insn=0x00000000002917D8 string=0x0000000000291A28 "?"
 *   insn=0x00000000002917DC string=0x00000000002917E0 ")=G"
 *   insn=0x00000000002917E0 string=0x00000000002917E4 "!"
 *   insn=0x00000000002917E8 string=0x00000000002917EC "\t"
 *   insn=0x00000000002917E8 string=0x0000000000291A3C "\t"
 *   insn=0x00000000002917EC string=0x00000000002917F0 "*"
 *   insn=0x00000000002917F0 string=0x00000000002917F4 "\n"
 *   insn=0x00000000002917FC string=0x0000000000291A48 "?"
 *   insn=0x0000000000291800 string=0x0000000000291804 ")=G"
 *   insn=0x0000000000291804 string=0x0000000000291808 "!"
 *   insn=0x000000000029180C string=0x0000000000291810 "\t"
 *   insn=0x000000000029180C string=0x0000000000291A5C "\t"
 *   insn=0x0000000000291810 string=0x0000000000291814 "*"
 *   insn=0x0000000000291814 string=0x0000000000291818 "\n"
 *   insn=0x0000000000291820 string=0x0000000000291A68 "?"
 *   insn=0x0000000000291824 string=0x0000000000291828 ")=G"
 *   insn=0x0000000000291828 string=0x000000000029182C "!"
 *   insn=0x000000000029182C string=0x0000000000291830 "i"
 *   insn=0x0000000000291830 string=0x0000000000291834 "\t"
 *   insn=0x0000000000291830 string=0x0000000000291A7C "\t"
 *   insn=0x0000000000291834 string=0x0000000000291838 "*"
 *   insn=0x0000000000291838 string=0x000000000029183C "\n"
 *   insn=0x0000000000291844 string=0x0000000000291A88 "?"
 *   insn=0x0000000000291848 string=0x000000000029184C ")=G"
 *   insn=0x000000000029184C string=0x0000000000291850 "!"
 *   insn=0x0000000000291850 string=0x0000000000291854 "I"
 *   insn=0x0000000000291854 string=0x0000000000291858 "\t"
 *   insn=0x0000000000291854 string=0x0000000000291A9C "\t"
 *   insn=0x0000000000291858 string=0x000000000029185C "*"
 *   insn=0x000000000029185C string=0x0000000000291860 "\n"
 *   insn=0x0000000000291868 string=0x0000000000291AA8 "?"
 *   insn=0x000000000029186C string=0x0000000000291870 ")=G"
 *   insn=0x0000000000291870 string=0x0000000000291874 "!"
 *   insn=0x0000000000291874 string=0x0000000000291878 ")"
 *   insn=0x0000000000291878 string=0x000000000029187C "\t"
 *   insn=0x0000000000291878 string=0x0000000000291ABC "\t"
 *   insn=0x000000000029187C string=0x0000000000291880 "*"
 *   insn=0x0000000000291880 string=0x0000000000291884 "\n"
 *   insn=0x000000000029188C string=0x0000000000291AC8 "?"
 *   insn=0x0000000000291890 string=0x0000000000291894 ")=G"
 *   insn=0x0000000000291894 string=0x0000000000291898 "!"
 *   insn=0x0000000000291898 string=0x000000000029189C "\t"
 *   insn=0x000000000029189C string=0x00000000002918A0 "\t"
 *   insn=0x000000000029189C string=0x0000000000291ADC "\t"
 *   insn=0x00000000002918A0 string=0x00000000002918A4 "*"
 *   insn=0x00000000002918A4 string=0x00000000002918A8 "\n"
 *   insn=0x00000000002918B0 string=0x0000000000291AE8 "?"
 *   insn=0x00000000002918B4 string=0x00000000002918B8 ")=G"
 *   insn=0x00000000002918B8 string=0x00000000002918BC "!"
 *   insn=0x00000000002918C0 string=0x00000000002918C4 "\t"
 *   insn=0x00000000002918C0 string=0x0000000000291AFC "\t"
 *   insn=0x00000000002918C4 string=0x00000000002918C8 "*"
 *   insn=0x00000000002918C8 string=0x00000000002918CC "\n"
 *   insn=0x00000000002918D4 string=0x0000000000291B08 "?"
 *   insn=0x00000000002918D8 string=0x00000000002918DC ")=G"
 *   insn=0x00000000002918DC string=0x00000000002918E0 "!"
 *   insn=0x00000000002918E4 string=0x00000000002918E8 "\t"
 *   insn=0x00000000002918E4 string=0x0000000000291B1C "\t"
 *   insn=0x00000000002918E8 string=0x00000000002918EC "*"
 *   insn=0x00000000002918EC string=0x00000000002918F0 "\n"
 *   insn=0x00000000002918F8 string=0x0000000000291B28 "?"
 *   insn=0x00000000002918FC string=0x0000000000291900 "*"
 *   insn=0x0000000000291900 string=0x0000000000291904 "\n"
 *   insn=0x0000000000291908 string=0x000000000029190C ","
 *   insn=0x000000000029191C string=0x0000000000291920 "*"
 *   insn=0x0000000000291920 string=0x0000000000291924 "\n"
 *   insn=0x000000000029193C string=0x0000000000291940 "*"
 *   insn=0x0000000000291940 string=0x0000000000291944 "\n"
 *   insn=0x0000000000291954 string=0x0000000000291958 ""
 *   insn=0x000000000029195C string=0x0000000000291960 "*"
 *   insn=0x0000000000291960 string=0x0000000000291964 "\n"
 *   insn=0x0000000000291968 string=0x000000000029196C "L"
 *   insn=0x0000000000291974 string=0x0000000000291978 ""
 *   insn=0x000000000029197C string=0x0000000000291980 "*"
 *   insn=0x0000000000291980 string=0x0000000000291984 "\n"
 *   insn=0x0000000000291988 string=0x000000000029198C ","
 *   insn=0x0000000000291994 string=0x0000000000291998 "&"
 *   insn=0x000000000029199C string=0x00000000002919A0 "*"
 *   insn=0x00000000002919A0 string=0x00000000002919A4 "\n"
 *   insn=0x00000000002919B0 string=0x00000000002919B4 "|b"
 *   insn=0x00000000002919B4 string=0x00000000002919B8 """
 *   insn=0x00000000002919BC string=0x00000000002919C0 "*"
 *   insn=0x00000000002919C0 string=0x00000000002919C4 "\n"
 *   insn=0x00000000002919D0 string=0x00000000002919D4 "tb"
 *   insn=0x00000000002919D4 string=0x00000000002919D8 "A"
 *   insn=0x00000000002919DC string=0x00000000002919E0 "*"
 *   insn=0x00000000002919E0 string=0x00000000002919E4 "\n"
 *   insn=0x00000000002919F0 string=0x00000000002919F4 "lb"
 *   insn=0x00000000002919F4 string=0x00000000002919F8 "="
 *   insn=0x00000000002919FC string=0x0000000000291A00 "*"
 *   insn=0x0000000000291A00 string=0x0000000000291A04 "\n"
 *   insn=0x0000000000291A10 string=0x0000000000291A14 "db"
 *   insn=0x0000000000291A14 string=0x0000000000291A18 "\"
 *   insn=0x0000000000291A1C string=0x0000000000291A20 "*"
 *   insn=0x0000000000291A20 string=0x0000000000291A24 "\n"
 *   insn=0x0000000000291A28 string=0x0000000000291A2C "l"
 *   insn=0x0000000000291A30 string=0x0000000000291A34 "\b"
 *   insn=0x0000000000291A34 string=0x0000000000291A38 "X"
 *   insn=0x0000000000291A3C string=0x0000000000291A40 "*"
 *   insn=0x0000000000291A40 string=0x0000000000291A44 "\n"
 *   insn=0x0000000000291A48 string=0x0000000000291A4C "L"
 *   insn=0x0000000000291A50 string=0x0000000000291A54 "Tb"
 *   insn=0x0000000000291A54 string=0x0000000000291A58 "w"
 *   insn=0x0000000000291A5C string=0x0000000000291A60 "*"
 *   insn=0x0000000000291A60 string=0x0000000000291A64 "\n"
 *   insn=0x0000000000291A70 string=0x0000000000291A74 "Lb"
 *   insn=0x0000000000291A74 string=0x0000000000291A78 "s"
 *   insn=0x0000000000291A7C string=0x0000000000291A80 "*"
 *   insn=0x0000000000291A80 string=0x0000000000291A84 "\n"
 *   insn=0x0000000000291A90 string=0x0000000000291A94 "Db"
 *   insn=0x0000000000291A9C string=0x0000000000291AA0 "*"
 *   insn=0x0000000000291AA0 string=0x0000000000291AA4 "\n"
 *   insn=0x0000000000291AA8 string=0x0000000000291AAC ","
 *   insn=0x0000000000291AB0 string=0x0000000000291AB4 "<b"
 *   insn=0x0000000000291ABC string=0x0000000000291AC0 "*"
 *   insn=0x0000000000291AC0 string=0x0000000000291AC4 "\n"
 *   insn=0x0000000000291AD0 string=0x0000000000291AD4 "4b"
 *   insn=0x0000000000291ADC string=0x0000000000291AE0 "*"
 *   insn=0x0000000000291AE0 string=0x0000000000291AE4 "\n"
 *   insn=0x0000000000291AF0 string=0x0000000000291AF4 ",b"
 *   insn=0x0000000000291AFC string=0x0000000000291B00 "*"
 *   insn=0x0000000000291B00 string=0x0000000000291B04 "\n"
 *   insn=0x0000000000291B08 string=0x0000000000291B0C "l"
 *   insn=0x0000000000291B10 string=0x0000000000291B14 "$b"
 *   insn=0x0000000000291B1C string=0x0000000000291B20 "*"
 *   insn=0x0000000000291B20 string=0x0000000000291B24 "\n"
 *   insn=0x0000000000291B3C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000291B44 string=0x0000000000291B48 "(a"
 *   insn=0x0000000000291B54 string=0x0000000000291B58 "J=G"
 *   insn=0x0000000000291B58 string=0x0000000000291B5C ")!"
 *   insn=0x0000000000291B60 string=0x0000000000291B64 "*"
 *   insn=0x0000000000291B60 string=0x0000000000291B78 "*"
 *   insn=0x0000000000291B64 string=0x0000000000291B68 "K"
 *   insn=0x0000000000291B68 string=0x0000000000291B6C "+"
 *   insn=0x0000000000291B74 string=0x0000000000291B84 "_"
 *   insn=0x0000000000291B78 string=0x0000000000291B7C "K"
 *   insn=0x0000000000291B7C string=0x0000000000291B80 "+"
 *   insn=0x0000000000291BA8 string=0x0000000000291BAC " ("
 *   insn=0x0000000000291BB0 string=0x0000000000291BB4 ")=G"
 *   insn=0x0000000000291BB4 string=0x0000000000291BB8 "!"
 *   insn=0x0000000000291BBC string=0x0000000000291BC0 "\t"
 *   insn=0x0000000000291BBC string=0x00000000002920B8 "\t"
 *   insn=0x0000000000291BC0 string=0x0000000000291BC4 "*"
 *   insn=0x0000000000291BC4 string=0x0000000000291BC8 "\n"
 *   insn=0x0000000000291BCC string=0x0000000000291BD0 "4"
 *   insn=0x0000000000291BD0 string=0x00000000002920A0 "?"
 *   insn=0x0000000000291BDC string=0x0000000000291BE0 "(a"
 *   insn=0x0000000000291BEC string=0x0000000000291BF0 "J=G"
 *   insn=0x0000000000291BF0 string=0x0000000000291BF4 ")!"
 *   insn=0x0000000000291BF8 string=0x0000000000291BFC "*"
 *   insn=0x0000000000291BF8 string=0x0000000000291C10 "*"
 *   insn=0x0000000000291BFC string=0x0000000000291C00 "K"
 *   insn=0x0000000000291C00 string=0x0000000000291C04 "+"
 *   insn=0x0000000000291C0C string=0x0000000000291C1C "_"
 *   insn=0x0000000000291C10 string=0x0000000000291C14 "K"
 *   insn=0x0000000000291C14 string=0x0000000000291C18 "+"
 *   insn=0x0000000000291C40 string=0x0000000000291C44 "`#"
 *   insn=0x0000000000291C48 string=0x0000000000291C4C ")=G"
 *   insn=0x0000000000291C4C string=0x0000000000291C50 "!"
 *   insn=0x0000000000291C50 string=0x0000000000291C54 ")#"
 *   insn=0x0000000000291C54 string=0x0000000000291C58 "\t"
 *   insn=0x0000000000291C58 string=0x0000000000291C5C "*"
 *   insn=0x0000000000291C5C string=0x0000000000291C60 "\n"
 *   insn=0x0000000000291C74 string=0x0000000000291C78 "(a"
 *   insn=0x0000000000291C84 string=0x0000000000291C88 "J=G"
 *   insn=0x0000000000291C88 string=0x0000000000291C8C ")!"
 *   insn=0x0000000000291C90 string=0x0000000000291C94 "*"
 *   insn=0x0000000000291C90 string=0x0000000000291CA8 "*"
 *   insn=0x0000000000291C94 string=0x0000000000291C98 "K"
 *   insn=0x0000000000291C98 string=0x0000000000291C9C "+"
 *   insn=0x0000000000291CA4 string=0x0000000000291CB4 "_"
 *   insn=0x0000000000291CA8 string=0x0000000000291CAC "K"
 *   insn=0x0000000000291CAC string=0x0000000000291CB0 "+"
 *   insn=0x0000000000291CE0 string=0x0000000000291CE4 ")=G"
 *   insn=0x0000000000291CE4 string=0x0000000000291CE8 "!"
 *   insn=0x0000000000291CE8 string=0x0000000000291CEC "i"
 *   insn=0x0000000000291CEC string=0x0000000000291CF0 "\t"
 *   insn=0x0000000000291CF0 string=0x0000000000291CF4 "*"
 *   insn=0x0000000000291CF4 string=0x0000000000291CF8 "\n"
 *   insn=0x0000000000291D0C string=0x0000000000291D10 "(a"
 *   insn=0x0000000000291D1C string=0x0000000000291D20 "J=G"
 *   insn=0x0000000000291D20 string=0x0000000000291D24 ")!"
 *   insn=0x0000000000291D28 string=0x0000000000291D2C "*"
 *   insn=0x0000000000291D28 string=0x0000000000291D40 "*"
 *   insn=0x0000000000291D2C string=0x0000000000291D30 "K"
 *   insn=0x0000000000291D30 string=0x0000000000291D34 "+"
 *   insn=0x0000000000291D3C string=0x0000000000291D4C "_"
 *   insn=0x0000000000291D40 string=0x0000000000291D44 "K"
 *   insn=0x0000000000291D44 string=0x0000000000291D48 "+"
 *   insn=0x0000000000291D78 string=0x0000000000291D7C ")=G"
 *   insn=0x0000000000291D7C string=0x0000000000291D80 "!"
 *   insn=0x0000000000291D84 string=0x0000000000291D88 "\t"
 *   insn=0x0000000000291D88 string=0x0000000000291D8C "*"
 *   insn=0x0000000000291D8C string=0x0000000000291D90 "\n"
 *   insn=0x0000000000291DA4 string=0x0000000000291DA8 "(a"
 *   insn=0x0000000000291DB4 string=0x0000000000291DB8 "J=G"
 *   insn=0x0000000000291DB8 string=0x0000000000291DBC ")!"
 *   insn=0x0000000000291DC0 string=0x0000000000291DC4 "*"
 *   insn=0x0000000000291DC0 string=0x0000000000291DD8 "*"
 *   insn=0x0000000000291DC4 string=0x0000000000291DC8 "K"
 *   insn=0x0000000000291DC8 string=0x0000000000291DCC "+"
 *   insn=0x0000000000291DD4 string=0x0000000000291DE4 "_"
 *   insn=0x0000000000291DD8 string=0x0000000000291DDC "K"
 *   insn=0x0000000000291DDC string=0x0000000000291DE0 "+"
 *   insn=0x0000000000291DF0 string=0x0000000000291DF4 "la"
 *   insn=0x0000000000291E08 string=0x0000000000291E0C " "
 *   insn=0x0000000000291E10 string=0x0000000000291E14 ")=G"
 *   insn=0x0000000000291E14 string=0x0000000000291E18 "!"
 *   insn=0x0000000000291E1C string=0x0000000000291E20 "\t"
 *   insn=0x0000000000291E20 string=0x0000000000291E24 "*"
 *   insn=0x0000000000291E24 string=0x0000000000291E28 "\n"
 *   insn=0x0000000000291E3C string=0x0000000000291E40 "(a"
 *   insn=0x0000000000291E4C string=0x0000000000291E50 "J=G"
 *   insn=0x0000000000291E50 string=0x0000000000291E54 ")!"
 *   insn=0x0000000000291E58 string=0x0000000000291E5C "*"
 *   insn=0x0000000000291E58 string=0x0000000000291E70 "*"
 *   insn=0x0000000000291E5C string=0x0000000000291E60 "K"
 *   insn=0x0000000000291E60 string=0x0000000000291E64 "+"
 *   insn=0x0000000000291E6C string=0x0000000000291E7C "_"
 *   insn=0x0000000000291E70 string=0x0000000000291E74 "K"
 *   insn=0x0000000000291E74 string=0x0000000000291E78 "+"
 *   insn=0x0000000000291E88 string=0x0000000000291E8C "Fa"
 *   insn=0x0000000000291EA0 string=0x0000000000291EA4 "`"
 *   insn=0x0000000000291EA8 string=0x0000000000291EAC ")=G"
 *   insn=0x0000000000291EAC string=0x0000000000291EB0 "!"
 *   insn=0x0000000000291EB0 string=0x0000000000291EB4 ")"
 *   insn=0x0000000000291EB4 string=0x0000000000291EB8 "\t"
 *   insn=0x0000000000291EB8 string=0x0000000000291EBC "*"
 *   insn=0x0000000000291EBC string=0x0000000000291EC0 "\n"
 *   insn=0x0000000000291EC4 string=0x0000000000291EC8 "v"
 *   insn=0x0000000000291ED4 string=0x0000000000291ED8 "(a"
 *   insn=0x0000000000291EE4 string=0x0000000000291EE8 "J=G"
 *   insn=0x0000000000291EE8 string=0x0000000000291EEC ")!"
 *   insn=0x0000000000291EF0 string=0x0000000000291EF4 "*"
 *   insn=0x0000000000291EF0 string=0x0000000000291F08 "*"
 *   insn=0x0000000000291EF4 string=0x0000000000291EF8 "K"
 *   insn=0x0000000000291EF8 string=0x0000000000291EFC "+"
 *   insn=0x0000000000291F04 string=0x0000000000291F14 "_"
 *   insn=0x0000000000291F08 string=0x0000000000291F0C "K"
 *   insn=0x0000000000291F0C string=0x0000000000291F10 "+"
 *   insn=0x0000000000291F20 string=0x0000000000291F24 " a"
 *   insn=0x0000000000291F40 string=0x0000000000291F44 ")=G"
 *   insn=0x0000000000291F44 string=0x0000000000291F48 "!"
 *   insn=0x0000000000291F48 string=0x0000000000291F4C "i"
 *   insn=0x0000000000291F4C string=0x0000000000291F50 "\t"
 *   insn=0x0000000000291F50 string=0x0000000000291F54 "*"
 *   insn=0x0000000000291F54 string=0x0000000000291F58 "\n"
 *   insn=0x0000000000291F5C string=0x0000000000291F60 "P"
 *   insn=0x0000000000291F6C string=0x0000000000291F70 "(a"
 *   insn=0x0000000000291F7C string=0x0000000000291F80 "J=G"
 *   insn=0x0000000000291F80 string=0x0000000000291F84 ")!"
 *   insn=0x0000000000291F88 string=0x0000000000291F8C "*"
 *   insn=0x0000000000291F88 string=0x0000000000291FA0 "*"
 *   insn=0x0000000000291F8C string=0x0000000000291F90 "K"
 *   insn=0x0000000000291F90 string=0x0000000000291F94 "+"
 *   insn=0x0000000000291F9C string=0x0000000000291FAC "_"
 *   insn=0x0000000000291FA0 string=0x0000000000291FA4 "K"
 *   insn=0x0000000000291FA4 string=0x0000000000291FA8 "+"
 *   insn=0x0000000000291FD8 string=0x0000000000291FDC ")=G"
 *   insn=0x0000000000291FDC string=0x0000000000291FE0 "!"
 *   insn=0x0000000000291FE4 string=0x0000000000291FE8 "\t"
 *   insn=0x0000000000291FE8 string=0x0000000000291FEC "*"
 *   insn=0x0000000000291FEC string=0x0000000000291FF0 "\n"
 *   insn=0x0000000000291FF4 string=0x0000000000291FF8 "*"
 *   insn=0x0000000000292004 string=0x0000000000292008 "J"
 *   insn=0x000000000029200C string=0x0000000000292010 "(a"
 *   insn=0x000000000029201C string=0x0000000000292020 "J=G"
 *   insn=0x0000000000292020 string=0x0000000000292024 ")!"
 *   insn=0x0000000000292028 string=0x000000000029202C "*"
 *   insn=0x0000000000292028 string=0x0000000000292040 "*"
 *   insn=0x000000000029202C string=0x0000000000292030 "K"
 *   insn=0x0000000000292030 string=0x0000000000292034 "+"
 *   insn=0x000000000029203C string=0x000000000029204C "_"
 *   insn=0x0000000000292040 string=0x0000000000292044 "K"
 *   insn=0x0000000000292044 string=0x0000000000292048 "+"
 *   insn=0x000000000029206C string=0x0000000000292070 ")"
 *   insn=0x0000000000292080 string=0x0000000000292084 ")=G"
 *   insn=0x0000000000292084 string=0x0000000000292088 "!"
 *   insn=0x0000000000292088 string=0x000000000029208C "i"
 *   insn=0x000000000029208C string=0x0000000000292090 "\t"
 *   insn=0x0000000000292090 string=0x0000000000292094 "*"
 *   insn=0x0000000000292094 string=0x0000000000292098 "\n"
 *   insn=0x00000000002920A0 string=0x00000000002920A4 "l"
 *   insn=0x00000000002920B8 string=0x00000000002920BC "*"
 *   insn=0x00000000002920BC string=0x00000000002920C0 "\n"
 *   insn=0x00000000002920C0 string=0x00000000002920C4 "?"
 *   insn=0x00000000002920C4 string=0x00000000002920C8 ""
 *   insn=0x00000000002920D4 string=0x00000000002920D8 "b"
 *   insn=0x00000000002920D8 string=0x00000000001FDA60 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AttackComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  __int64 v21; // x20
  void *v22; // x0
  void *v23; // x0
  __int64 v24; // x20
  void *v25; // x0
  void *v26; // x0
  __int64 v27; // x20
  void *v28; // x0
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
  unsigned int *v58; // x8
  int v59; // w9
  unsigned int *v60; // x8
  int v61; // w9
  unsigned int *v62; // x8
  int v63; // w9
  unsigned int *v64; // x8
  int v65; // w9
  __int64 v66; // [xsp+8h] [xbp-78h] BYREF
  int v67; // [xsp+18h] [xbp-68h]
  __int64 v68; // [xsp+20h] [xbp-60h] BYREF
  __int64 v69; // [xsp+28h] [xbp-58h]
  int v70; // [xsp+30h] [xbp-50h]
  __int64 v71; // [xsp+38h] [xbp-48h]

  v71 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::GetBindings(a1);
  sub_566BB8((int)&v66, "onAttack");
  v67 = 4;
  sub_56A528(&v68, &v66);
  v70 = 0;
  v69 = 0x600000001LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v3 = v67;
    sub_56A528(v3 + 8, &v68);
    *(_DWORD *)(v3 + 24) = v70;
    *(_QWORD *)(v3 + 16) = v69;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v4 = (void *)(v68 - 24);
  if ( (__int64 *)(v68 - 24) != &qword_6FD2E0 )
  {
    v30 = (unsigned int *)(v68 - 8);
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
      operator delete(v4);
  }
  v5 = (void *)(v66 - 24);
  if ( (__int64 *)(v66 - 24) != &qword_6FD2E0 )
  {
    v32 = (unsigned int *)(v66 - 8);
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
      operator delete(v5);
  }
  sub_566BB8((int)&v66, "attackInterval");
  v67 = 5;
  sub_56A528(&v68, &v66);
  v70 = 0;
  v69 = 0x500000001LL;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v6 = v67;
    sub_56A528(v6 + 8, &v68);
    *(_DWORD *)(v6 + 24) = v70;
    *(_QWORD *)(v6 + 16) = v69;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v7 = (void *)(v68 - 24);
  if ( (__int64 *)(v68 - 24) != &qword_6FD2E0 )
  {
    v34 = (unsigned int *)(v68 - 8);
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
      operator delete(v7);
  }
  v8 = (void *)(v66 - 24);
  if ( (__int64 *)(v66 - 24) != &qword_6FD2E0 )
  {
    v36 = (unsigned int *)(v66 - 8);
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
      operator delete(v8);
  }
  sub_566BB8((int)&v66, "attackDuration");
  v67 = 6;
  sub_56A528(&v68, &v66);
  v69 = 0x500000001LL;
  v70 = 0;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v9 = v67;
    sub_56A528(v9 + 8, &v68);
    *(_DWORD *)(v9 + 24) = v70;
    *(_QWORD *)(v9 + 16) = v69;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v10 = (void *)(v68 - 24);
  if ( (__int64 *)(v68 - 24) != &qword_6FD2E0 )
  {
    v38 = (unsigned int *)(v68 - 8);
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
  v11 = (void *)(v66 - 24);
  if ( (__int64 *)(v66 - 24) != &qword_6FD2E0 )
  {
    v40 = (unsigned int *)(v66 - 8);
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
      operator delete(v11);
  }
  sub_566BB8((int)&v66, "damageStartTime");
  v67 = 7;
  sub_56A528(&v68, &v66);
  v69 = 0x500000001LL;
  v70 = 0;
  v12 = *(_QWORD *)(a2 + 8);
  if ( v12 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v12 = v67;
    sub_56A528(v12 + 8, &v68);
    *(_DWORD *)(v12 + 24) = v70;
    *(_QWORD *)(v12 + 16) = v69;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v13 = (void *)(v68 - 24);
  if ( (__int64 *)(v68 - 24) != &qword_6FD2E0 )
  {
    v42 = (unsigned int *)(v68 - 8);
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
      operator delete(v13);
  }
  v14 = (void *)(v66 - 24);
  if ( (__int64 *)(v66 - 24) != &qword_6FD2E0 )
  {
    v44 = (unsigned int *)(v66 - 8);
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
      operator delete(v14);
  }
  sub_566BB8((int)&v66, "damageEndTime");
  v67 = 8;
  sub_56A528(&v68, &v66);
  v69 = 0x500000001LL;
  v70 = 0;
  v15 = *(_QWORD *)(a2 + 8);
  if ( v15 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v15 = v67;
    sub_56A528(v15 + 8, &v68);
    *(_DWORD *)(v15 + 24) = v70;
    *(_QWORD *)(v15 + 16) = v69;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v16 = (void *)(v68 - 24);
  if ( (__int64 *)(v68 - 24) != &qword_6FD2E0 )
  {
    v46 = (unsigned int *)(v68 - 8);
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
      operator delete(v16);
  }
  v17 = (void *)(v66 - 24);
  if ( (__int64 *)(v66 - 24) != &qword_6FD2E0 )
  {
    v48 = (unsigned int *)(v66 - 8);
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
  sub_566BB8((int)&v66, "damageStartTime2");
  v67 = 9;
  sub_56A528(&v68, &v66);
  v69 = 0x500000001LL;
  v70 = 0;
  v18 = *(_QWORD *)(a2 + 8);
  if ( v18 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v18 = v67;
    sub_56A528(v18 + 8, &v68);
    *(_DWORD *)(v18 + 24) = v70;
    *(_QWORD *)(v18 + 16) = v69;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v19 = (void *)(v68 - 24);
  if ( (__int64 *)(v68 - 24) != &qword_6FD2E0 )
  {
    v50 = (unsigned int *)(v68 - 8);
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
      operator delete(v19);
  }
  v20 = (void *)(v66 - 24);
  if ( (__int64 *)(v66 - 24) != &qword_6FD2E0 )
  {
    v52 = (unsigned int *)(v66 - 8);
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
      operator delete(v20);
  }
  sub_566BB8((int)&v66, "damageEndTime2");
  v67 = 10;
  sub_56A528(&v68, &v66);
  v69 = 0x500000001LL;
  v70 = 0;
  v21 = *(_QWORD *)(a2 + 8);
  if ( v21 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v21 = v67;
    sub_56A528(v21 + 8, &v68);
    *(_DWORD *)(v21 + 24) = v70;
    *(_QWORD *)(v21 + 16) = v69;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v22 = (void *)(v68 - 24);
  if ( (__int64 *)(v68 - 24) != &qword_6FD2E0 )
  {
    v54 = (unsigned int *)(v68 - 8);
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
      operator delete(v22);
  }
  v23 = (void *)(v66 - 24);
  if ( (__int64 *)(v66 - 24) != &qword_6FD2E0 )
  {
    v56 = (unsigned int *)(v66 - 8);
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
      operator delete(v23);
  }
  sub_566BB8((int)&v66, "animationStartBlendTime");
  v67 = 11;
  sub_56A528(&v68, &v66);
  v69 = 0x500000001LL;
  v70 = 0;
  v24 = *(_QWORD *)(a2 + 8);
  if ( v24 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v24 = v67;
    sub_56A528(v24 + 8, &v68);
    *(_DWORD *)(v24 + 24) = v70;
    *(_QWORD *)(v24 + 16) = v69;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v25 = (void *)(v68 - 24);
  if ( (__int64 *)(v68 - 24) != &qword_6FD2E0 )
  {
    v58 = (unsigned int *)(v68 - 8);
    if ( &pthread_create )
    {
      do
        v59 = __ldaxr(v58);
      while ( __stlxr(v59 - 1, v58) );
    }
    else
    {
      v59 = (*v58)--;
    }
    if ( v59 <= 0 )
      operator delete(v25);
  }
  v26 = (void *)(v66 - 24);
  if ( (__int64 *)(v66 - 24) != &qword_6FD2E0 )
  {
    v60 = (unsigned int *)(v66 - 8);
    if ( &pthread_create )
    {
      do
        v61 = __ldaxr(v60);
      while ( __stlxr(v61 - 1, v60) );
    }
    else
    {
      v61 = (*v60)--;
    }
    if ( v61 <= 0 )
      operator delete(v26);
  }
  sub_566BB8((int)&v66, "animationEndBlendTime");
  v67 = 12;
  sub_56A528(&v68, &v66);
  v69 = 0x500000001LL;
  v70 = 0;
  v27 = *(_QWORD *)(a2 + 8);
  if ( v27 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v27 = v67;
    sub_56A528(v27 + 8, &v68);
    *(_DWORD *)(v27 + 24) = v70;
    *(_QWORD *)(v27 + 16) = v69;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v28 = (void *)(v68 - 24);
  if ( (__int64 *)(v68 - 24) != &qword_6FD2E0 )
  {
    v62 = (unsigned int *)(v68 - 8);
    if ( &pthread_create )
    {
      do
        v63 = __ldaxr(v62);
      while ( __stlxr(v63 - 1, v62) );
    }
    else
    {
      v63 = (*v62)--;
    }
    if ( v63 <= 0 )
      operator delete(v28);
  }
  v29 = (void *)(v66 - 24);
  if ( (__int64 *)(v66 - 24) != &qword_6FD2E0 )
  {
    v64 = (unsigned int *)(v66 - 8);
    if ( &pthread_create )
    {
      do
        v65 = __ldaxr(v64);
      while ( __stlxr(v65 - 1, v64) );
    }
    else
    {
      v65 = (*v64)--;
    }
    if ( v65 <= 0 )
      operator delete(v29);
  }
}


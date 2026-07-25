/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027B2E4
 * Mangled: _ZN5Caver22MonsterEntityComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::MonsterEntityComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001F7320  Caver::MonsterEntityComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x000000000027B1EC  Caver::MonsterEntityComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7320  Caver::MonsterEntityComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FA860  Caver::EntityComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 254
 *   insn=0x000000000027B2FC string=0x000000000027B300 "W"
 *   insn=0x000000000027B30C string=0x000000000027B310 "T"
 *   insn=0x000000000027B310 string=0x000000000027B314 "a"
 *   insn=0x000000000027B310 string=0x00000000001FA860 "0'"
 *   insn=0x000000000027B314 string=0x0000000000588650 "onHurt"
 *   insn=0x000000000027B320 string=0x000000000027B324 "%"
 *   insn=0x000000000027B33C string=0x000000000027B340 "z"
 *   insn=0x000000000027B340 string=0x000000000027B344 "H"
 *   insn=0x000000000027B344 string=0x000000000027B348 ""
 *   insn=0x000000000027B350 string=0x000000000027B354 "t"
 *   insn=0x000000000027B364 string=0x000000000027B368 ""
 *   insn=0x000000000027B36C string=0x000000000027B370 "n"
 *   insn=0x000000000027B374 string=0x000000000027B378 "\t\t@"
 *   insn=0x000000000027B37C string=0x000000000027B380 ""
 *   insn=0x000000000027B384 string=0x000000000027B388 "h"
 *   insn=0x000000000027B388 string=0x000000000027B38C ""
 *   insn=0x000000000027B38C string=0x000000000027B390 "h"
 *   insn=0x000000000027B3A0 string=0x000000000027B3A4 "O"
 *   insn=0x000000000027B3A4 string=0x00000000001F78E0 "0'"
 *   insn=0x000000000027B3A8 string=0x000000000027B3AC "V#"
 *   insn=0x000000000027B3B8 string=0x000000000027B3BC "a"
 *   insn=0x000000000027B3BC string=0x000000000027B608 "I#"
 *   insn=0x000000000027B3CC string=0x000000000027B3D0 "a"
 *   insn=0x000000000027B3CC string=0x000000000027B62C "I#"
 *   insn=0x000000000027B3D0 string=0x0000000000588657 "onKill"
 *   insn=0x000000000027B3F8 string=0x000000000027B3FC "K"
 *   insn=0x000000000027B404 string=0x000000000027B408 "t"
 *   insn=0x000000000027B418 string=0x000000000027B41C ""
 *   insn=0x000000000027B420 string=0x000000000027B424 "A"
 *   insn=0x000000000027B424 string=0x000000000027B428 "C"
 *   insn=0x000000000027B428 string=0x000000000027B42C "\t\t@"
 *   insn=0x000000000027B430 string=0x000000000027B434 ""
 *   insn=0x000000000027B438 string=0x000000000027B43C "h"
 *   insn=0x000000000027B43C string=0x000000000027B440 ""
 *   insn=0x000000000027B440 string=0x000000000027B444 "h"
 *   insn=0x000000000027B454 string=0x000000000027B458 """
 *   insn=0x000000000027B464 string=0x000000000027B468 "A"
 *   insn=0x000000000027B468 string=0x000000000027B650 "I#"
 *   insn=0x000000000027B478 string=0x000000000027B47C "a"
 *   insn=0x000000000027B478 string=0x000000000027B674 "I#"
 *   insn=0x000000000027B47C string=0x000000000058865E "givesExperience"
 *   insn=0x000000000027B4A4 string=0x000000000027B4A8 " "
 *   insn=0x000000000027B4A8 string=0x000000000027B4AC "H"
 *   insn=0x000000000027B4AC string=0x000000000027B4B0 ""
 *   insn=0x000000000027B4B8 string=0x000000000027B4BC "t"
 *   insn=0x000000000027B4CC string=0x000000000027B4D0 ""
 *   insn=0x000000000027B4D8 string=0x000000000027B4DC "C"
 *   insn=0x000000000027B4DC string=0x000000000027B4E0 "\t\t@"
 *   insn=0x000000000027B4E4 string=0x000000000027B4E8 ""
 *   insn=0x000000000027B4EC string=0x000000000027B4F0 "h"
 *   insn=0x000000000027B4F0 string=0x000000000027B4F4 ""
 *   insn=0x000000000027B4F4 string=0x000000000027B4F8 "h"
 *   insn=0x000000000027B51C string=0x000000000027B698 "I#"
 *   insn=0x000000000027B52C string=0x000000000027B530 "a"
 *   insn=0x000000000027B52C string=0x000000000027B6BC "I#"
 *   insn=0x000000000027B530 string=0x000000000058866E "defaultDeathAnimation"
 *   insn=0x000000000027B564 string=0x000000000027B568 "t"
 *   insn=0x000000000027B578 string=0x000000000027B57C ""
 *   insn=0x000000000027B584 string=0x000000000027B588 "C"
 *   insn=0x000000000027B588 string=0x000000000027B58C "\t\t@"
 *   insn=0x000000000027B590 string=0x000000000027B594 ""
 *   insn=0x000000000027B598 string=0x000000000027B59C "h"
 *   insn=0x000000000027B59C string=0x000000000027B5A0 ""
 *   insn=0x000000000027B5A0 string=0x000000000027B5A4 "h"
 *   insn=0x000000000027B5C8 string=0x000000000027B6E0 "I#"
 *   insn=0x000000000027B5D4 string=0x000000000027B5D8 "a\t"
 *   insn=0x000000000027B5D8 string=0x000000000027B704 "I#"
 *   insn=0x000000000027B608 string=0x000000000027B60C ")=G"
 *   insn=0x000000000027B60C string=0x000000000027B610 "!"
 *   insn=0x000000000027B614 string=0x000000000027B618 "\t"
 *   insn=0x000000000027B614 string=0x000000000027B728 "\t"
 *   insn=0x000000000027B618 string=0x000000000027B61C "*"
 *   insn=0x000000000027B61C string=0x000000000027B620 "\n"
 *   insn=0x000000000027B624 string=0x000000000027B628 "C"
 *   insn=0x000000000027B628 string=0x000000000027B734 "?"
 *   insn=0x000000000027B62C string=0x000000000027B630 ")=G"
 *   insn=0x000000000027B630 string=0x000000000027B634 "!"
 *   insn=0x000000000027B638 string=0x000000000027B63C "\t"
 *   insn=0x000000000027B638 string=0x000000000027B748 "\t"
 *   insn=0x000000000027B63C string=0x000000000027B640 "*"
 *   insn=0x000000000027B640 string=0x000000000027B644 "\n"
 *   insn=0x000000000027B648 string=0x000000000027B64C "B"
 *   insn=0x000000000027B64C string=0x000000000027B754 "?"
 *   insn=0x000000000027B650 string=0x000000000027B654 ")=G"
 *   insn=0x000000000027B654 string=0x000000000027B658 "!"
 *   insn=0x000000000027B658 string=0x000000000027B65C "i"
 *   insn=0x000000000027B65C string=0x000000000027B660 "\t"
 *   insn=0x000000000027B65C string=0x000000000027B768 "\t"
 *   insn=0x000000000027B660 string=0x000000000027B664 "*"
 *   insn=0x000000000027B664 string=0x000000000027B668 "\n"
 *   insn=0x000000000027B66C string=0x000000000027B670 "A"
 *   insn=0x000000000027B670 string=0x000000000027B774 "?"
 *   insn=0x000000000027B674 string=0x000000000027B678 ")=G"
 *   insn=0x000000000027B678 string=0x000000000027B67C "!"
 *   insn=0x000000000027B67C string=0x000000000027B680 "I"
 *   insn=0x000000000027B680 string=0x000000000027B684 "\t"
 *   insn=0x000000000027B680 string=0x000000000027B788 "\t"
 *   insn=0x000000000027B684 string=0x000000000027B688 "*"
 *   insn=0x000000000027B688 string=0x000000000027B68C "\n"
 *   insn=0x000000000027B690 string=0x000000000027B694 "@"
 *   insn=0x000000000027B694 string=0x000000000027B794 "?"
 *   insn=0x000000000027B698 string=0x000000000027B69C ")=G"
 *   insn=0x000000000027B69C string=0x000000000027B6A0 "!"
 *   insn=0x000000000027B6A0 string=0x000000000027B6A4 ")"
 *   insn=0x000000000027B6A4 string=0x000000000027B6A8 "\t"
 *   insn=0x000000000027B6A4 string=0x000000000027B7A8 "\t"
 *   insn=0x000000000027B6A8 string=0x000000000027B6AC "*"
 *   insn=0x000000000027B6AC string=0x000000000027B6B0 "\n"
 *   insn=0x000000000027B6B4 string=0x000000000027B6B8 "?"
 *   insn=0x000000000027B6B8 string=0x000000000027B7B4 "?"
 *   insn=0x000000000027B6BC string=0x000000000027B6C0 ")=G"
 *   insn=0x000000000027B6C0 string=0x000000000027B6C4 "!"
 *   insn=0x000000000027B6C4 string=0x000000000027B6C8 "\t"
 *   insn=0x000000000027B6C8 string=0x000000000027B6CC "\t"
 *   insn=0x000000000027B6C8 string=0x000000000027B7C8 "\t"
 *   insn=0x000000000027B6CC string=0x000000000027B6D0 "*"
 *   insn=0x000000000027B6D0 string=0x000000000027B6D4 "\n"
 *   insn=0x000000000027B6D8 string=0x000000000027B6DC ">"
 *   insn=0x000000000027B6DC string=0x000000000027B7D4 "?"
 *   insn=0x000000000027B6E0 string=0x000000000027B6E4 ")=G"
 *   insn=0x000000000027B6E4 string=0x000000000027B6E8 "!"
 *   insn=0x000000000027B6EC string=0x000000000027B6F0 "\t"
 *   insn=0x000000000027B6EC string=0x000000000027B7E8 "\t"
 *   insn=0x000000000027B6F0 string=0x000000000027B6F4 "*"
 *   insn=0x000000000027B6F4 string=0x000000000027B6F8 "\n"
 *   insn=0x000000000027B6FC string=0x000000000027B700 "="
 *   insn=0x000000000027B700 string=0x000000000027B7F4 "?"
 *   insn=0x000000000027B704 string=0x000000000027B708 ")=G"
 *   insn=0x000000000027B708 string=0x000000000027B70C "!"
 *   insn=0x000000000027B710 string=0x000000000027B714 "\t"
 *   insn=0x000000000027B710 string=0x000000000027B808 "\t"
 *   insn=0x000000000027B714 string=0x000000000027B718 "*"
 *   insn=0x000000000027B718 string=0x000000000027B71C "\n"
 *   insn=0x000000000027B720 string=0x000000000027B724 "<"
 *   insn=0x000000000027B724 string=0x000000000027B814 "?"
 *   insn=0x000000000027B728 string=0x000000000027B72C "*"
 *   insn=0x000000000027B72C string=0x000000000027B730 "\n"
 *   insn=0x000000000027B734 string=0x000000000027B738 "L"
 *   insn=0x000000000027B748 string=0x000000000027B74C "*"
 *   insn=0x000000000027B74C string=0x000000000027B750 "\n"
 *   insn=0x000000000027B760 string=0x000000000027B764 ""
 *   insn=0x000000000027B768 string=0x000000000027B76C "*"
 *   insn=0x000000000027B76C string=0x000000000027B770 "\n"
 *   insn=0x000000000027B77C string=0x000000000027B780 "\t"
 *   insn=0x000000000027B780 string=0x000000000027B784 ":"
 *   insn=0x000000000027B788 string=0x000000000027B78C "*"
 *   insn=0x000000000027B78C string=0x000000000027B790 "\n"
 *   insn=0x000000000027B794 string=0x000000000027B798 ","
 *   insn=0x000000000027B7A0 string=0x000000000027B7A4 "6"
 *   insn=0x000000000027B7A8 string=0x000000000027B7AC "*"
 *   insn=0x000000000027B7AC string=0x000000000027B7B0 "\n"
 *   insn=0x000000000027B7B4 string=0x000000000027B7B8 "L"
 *   insn=0x000000000027B7C0 string=0x000000000027B7C4 "W"
 *   insn=0x000000000027B7C8 string=0x000000000027B7CC "*"
 *   insn=0x000000000027B7CC string=0x000000000027B7D0 "\n"
 *   insn=0x000000000027B7E0 string=0x000000000027B7E4 "S"
 *   insn=0x000000000027B7E8 string=0x000000000027B7EC "*"
 *   insn=0x000000000027B7EC string=0x000000000027B7F0 "\n"
 *   insn=0x000000000027B800 string=0x000000000027B804 "r"
 *   insn=0x000000000027B808 string=0x000000000027B80C "*"
 *   insn=0x000000000027B80C string=0x000000000027B810 "\n"
 *   insn=0x000000000027B814 string=0x000000000027B818 ","
 *   insn=0x000000000027B820 string=0x000000000027B824 "n"
 *   insn=0x000000000027B828 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000027B830 string=0x000000000027B834 "(a"
 *   insn=0x000000000027B83C string=0x000000000027B840 "J#"
 *   insn=0x000000000027B840 string=0x000000000027B844 "J=G"
 *   insn=0x000000000027B844 string=0x000000000027B848 ")!"
 *   insn=0x000000000027B84C string=0x000000000027B850 "*"
 *   insn=0x000000000027B84C string=0x000000000027B864 "*"
 *   insn=0x000000000027B850 string=0x000000000027B854 "K"
 *   insn=0x000000000027B854 string=0x000000000027B858 "+"
 *   insn=0x000000000027B860 string=0x000000000027B870 "_"
 *   insn=0x000000000027B864 string=0x000000000027B868 "K"
 *   insn=0x000000000027B868 string=0x000000000027B86C "+"
 *   insn=0x000000000027B894 string=0x000000000027B898 "`"
 *   insn=0x000000000027B898 string=0x000000000027B89C "I#"
 *   insn=0x000000000027B89C string=0x000000000027B8A0 ")=G"
 *   insn=0x000000000027B8A0 string=0x000000000027B8A4 "!"
 *   insn=0x000000000027B8A4 string=0x000000000027B8A8 ")"
 *   insn=0x000000000027B8A8 string=0x000000000027B8AC "\t"
 *   insn=0x000000000027B8A8 string=0x000000000027BAAC "\t"
 *   insn=0x000000000027B8AC string=0x000000000027B8B0 "*"
 *   insn=0x000000000027B8B0 string=0x000000000027B8B4 "\n"
 *   insn=0x000000000027B8B8 string=0x000000000027B8BC "v"
 *   insn=0x000000000027B8BC string=0x000000000027BA94 "?"
 *   insn=0x000000000027B8C8 string=0x000000000027B8CC "(a"
 *   insn=0x000000000027B8D4 string=0x000000000027B8D8 "J#"
 *   insn=0x000000000027B8D8 string=0x000000000027B8DC "J=G"
 *   insn=0x000000000027B8DC string=0x000000000027B8E0 ")!"
 *   insn=0x000000000027B8E4 string=0x000000000027B8E8 "*"
 *   insn=0x000000000027B8E4 string=0x000000000027B8FC "*"
 *   insn=0x000000000027B8E8 string=0x000000000027B8EC "K"
 *   insn=0x000000000027B8EC string=0x000000000027B8F0 "+"
 *   insn=0x000000000027B8F8 string=0x000000000027B908 "_"
 *   insn=0x000000000027B8FC string=0x000000000027B900 "K"
 *   insn=0x000000000027B900 string=0x000000000027B904 "+"
 *   insn=0x000000000027B930 string=0x000000000027B934 "I#"
 *   insn=0x000000000027B934 string=0x000000000027B938 ")=G"
 *   insn=0x000000000027B938 string=0x000000000027B93C "!"
 *   insn=0x000000000027B93C string=0x000000000027B940 "i"
 *   insn=0x000000000027B940 string=0x000000000027B944 "\t"
 *   insn=0x000000000027B944 string=0x000000000027B948 "*"
 *   insn=0x000000000027B948 string=0x000000000027B94C "\n"
 *   insn=0x000000000027B950 string=0x000000000027B954 "P"
 *   insn=0x000000000027B960 string=0x000000000027B964 "(a"
 *   insn=0x000000000027B96C string=0x000000000027B970 "J#"
 *   insn=0x000000000027B970 string=0x000000000027B974 "J=G"
 *   insn=0x000000000027B974 string=0x000000000027B978 ")!"
 *   insn=0x000000000027B97C string=0x000000000027B980 "*"
 *   insn=0x000000000027B97C string=0x000000000027B994 "*"
 *   insn=0x000000000027B980 string=0x000000000027B984 "K"
 *   insn=0x000000000027B984 string=0x000000000027B988 "+"
 *   insn=0x000000000027B990 string=0x000000000027B9A0 "_"
 *   insn=0x000000000027B994 string=0x000000000027B998 "K"
 *   insn=0x000000000027B998 string=0x000000000027B99C "+"
 *   insn=0x000000000027B9AC string=0x000000000027B9B0 "}"
 *   insn=0x000000000027B9C8 string=0x000000000027B9CC "I#"
 *   insn=0x000000000027B9CC string=0x000000000027B9D0 ")=G"
 *   insn=0x000000000027B9D0 string=0x000000000027B9D4 "!"
 *   insn=0x000000000027B9D8 string=0x000000000027B9DC "\t"
 *   insn=0x000000000027B9DC string=0x000000000027B9E0 "*"
 *   insn=0x000000000027B9E0 string=0x000000000027B9E4 "\n"
 *   insn=0x000000000027B9E8 string=0x000000000027B9EC "*"
 *   insn=0x000000000027B9F4 string=0x000000000027B9F8 "J#"
 *   insn=0x000000000027B9F8 string=0x000000000027B9FC "J"
 *   insn=0x000000000027BA00 string=0x000000000027BA04 "(a"
 *   insn=0x000000000027BA0C string=0x000000000027BA10 "J#"
 *   insn=0x000000000027BA10 string=0x000000000027BA14 "J=G"
 *   insn=0x000000000027BA14 string=0x000000000027BA18 ")!"
 *   insn=0x000000000027BA1C string=0x000000000027BA20 "*"
 *   insn=0x000000000027BA1C string=0x000000000027BA34 "*"
 *   insn=0x000000000027BA20 string=0x000000000027BA24 "K"
 *   insn=0x000000000027BA24 string=0x000000000027BA28 "+"
 *   insn=0x000000000027BA30 string=0x000000000027BA40 "_"
 *   insn=0x000000000027BA34 string=0x000000000027BA38 "K"
 *   insn=0x000000000027BA38 string=0x000000000027BA3C "+"
 *   insn=0x000000000027BA4C string=0x000000000027BA50 "U"
 *   insn=0x000000000027BA5C string=0x000000000027BA60 "I#"
 *   insn=0x000000000027BA60 string=0x000000000027BA64 ")"
 *   insn=0x000000000027BA70 string=0x000000000027BA74 "I#"
 *   insn=0x000000000027BA74 string=0x000000000027BA78 ")=G"
 *   insn=0x000000000027BA78 string=0x000000000027BA7C "!"
 *   insn=0x000000000027BA7C string=0x000000000027BA80 "i"
 *   insn=0x000000000027BA80 string=0x000000000027BA84 "\t"
 *   insn=0x000000000027BA84 string=0x000000000027BA88 "*"
 *   insn=0x000000000027BA88 string=0x000000000027BA8C "\n"
 *   insn=0x000000000027BA94 string=0x000000000027BA98 "l"
 *   insn=0x000000000027BA9C string=0x000000000027BAA0 "A"
 *   insn=0x000000000027BAAC string=0x000000000027BAB0 "*"
 *   insn=0x000000000027BAB0 string=0x000000000027BAB4 "\n"
 *   insn=0x000000000027BAB4 string=0x000000000027BAB8 "?"
 *   insn=0x000000000027BAB8 string=0x000000000027BABC ""
 *   insn=0x000000000027BACC string=0x00000000001F7320 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MonsterEntityComponent::GetBindings(__int64 a1, __int64 a2)
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
  unsigned int *v15; // x8
  int v16; // w9
  unsigned int *v17; // x8
  int v18; // w9
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
  __int64 v31; // [xsp+8h] [xbp-78h] BYREF
  int v32; // [xsp+18h] [xbp-68h]
  __int64 v33; // [xsp+20h] [xbp-60h] BYREF
  __int64 v34; // [xsp+28h] [xbp-58h]
  int v35; // [xsp+30h] [xbp-50h]
  __int64 v36; // [xsp+38h] [xbp-48h]

  v36 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::EntityComponent::GetBindings();
  sub_566BB8((int)&v31, "onHurt");
  v32 = 100;
  sub_56A528(&v33, &v31);
  v35 = 0;
  v34 = 0x600000001LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v3 = v32;
    sub_56A528(v3 + 8, &v33);
    *(_DWORD *)(v3 + 24) = v35;
    *(_QWORD *)(v3 + 16) = v34;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v4 = (void *)(v33 - 24);
  if ( (__int64 *)(v33 - 24) != &qword_6FD2E0 )
  {
    v15 = (unsigned int *)(v33 - 8);
    if ( &pthread_create )
    {
      do
        v16 = __ldaxr(v15);
      while ( __stlxr(v16 - 1, v15) );
    }
    else
    {
      v16 = (*v15)--;
    }
    if ( v16 <= 0 )
      operator delete(v4);
  }
  v5 = (void *)(v31 - 24);
  if ( (__int64 *)(v31 - 24) != &qword_6FD2E0 )
  {
    v17 = (unsigned int *)(v31 - 8);
    if ( &pthread_create )
    {
      do
        v18 = __ldaxr(v17);
      while ( __stlxr(v18 - 1, v17) );
    }
    else
    {
      v18 = (*v17)--;
    }
    if ( v18 <= 0 )
      operator delete(v5);
  }
  sub_566BB8((int)&v31, "onKill");
  v32 = 101;
  sub_56A528(&v33, &v31);
  v34 = 0x600000001LL;
  v35 = 0;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v6 = v32;
    sub_56A528(v6 + 8, &v33);
    *(_DWORD *)(v6 + 24) = v35;
    *(_QWORD *)(v6 + 16) = v34;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v7 = (void *)(v33 - 24);
  if ( (__int64 *)(v33 - 24) != &qword_6FD2E0 )
  {
    v19 = (unsigned int *)(v33 - 8);
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
      operator delete(v7);
  }
  v8 = (void *)(v31 - 24);
  if ( (__int64 *)(v31 - 24) != &qword_6FD2E0 )
  {
    v21 = (unsigned int *)(v31 - 8);
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
      operator delete(v8);
  }
  sub_566BB8((int)&v31, "givesExperience");
  v32 = 102;
  sub_56A528(&v33, &v31);
  v35 = 0;
  v34 = 0x400000001LL;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v9 = v32;
    sub_56A528(v9 + 8, &v33);
    *(_DWORD *)(v9 + 24) = v35;
    *(_QWORD *)(v9 + 16) = v34;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v10 = (void *)(v33 - 24);
  if ( (__int64 *)(v33 - 24) != &qword_6FD2E0 )
  {
    v23 = (unsigned int *)(v33 - 8);
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
      operator delete(v10);
  }
  v11 = (void *)(v31 - 24);
  if ( (__int64 *)(v31 - 24) != &qword_6FD2E0 )
  {
    v25 = (unsigned int *)(v31 - 8);
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
      operator delete(v11);
  }
  sub_566BB8((int)&v31, "defaultDeathAnimation");
  v32 = 103;
  sub_56A528(&v33, &v31);
  v34 = 0x400000001LL;
  v35 = 0;
  v12 = *(_QWORD *)(a2 + 8);
  if ( v12 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v12 = v32;
    sub_56A528(v12 + 8, &v33);
    *(_DWORD *)(v12 + 24) = v35;
    *(_QWORD *)(v12 + 16) = v34;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v13 = (void *)(v33 - 24);
  if ( (__int64 *)(v33 - 24) != &qword_6FD2E0 )
  {
    v27 = (unsigned int *)(v33 - 8);
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
      operator delete(v13);
  }
  v14 = (void *)(v31 - 24);
  if ( (__int64 *)(v31 - 24) != &qword_6FD2E0 )
  {
    v29 = (unsigned int *)(v31 - 8);
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
      operator delete(v14);
  }
}


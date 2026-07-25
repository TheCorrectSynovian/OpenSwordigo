/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027E198
 * Mangled: _ZN5Caver22PhysicsObjectComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::PhysicsObjectComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001FCD70  Caver::PhysicsObjectComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x000000000027E034  Caver::PhysicsObjectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001FCD70  Caver::PhysicsObjectComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 513
 *   insn=0x000000000027E1B0 string=0x000000000027E1B4 "W"
 *   insn=0x000000000027E1C0 string=0x000000000027E1C4 "{"
 *   insn=0x000000000027E1C4 string=0x000000000027E1C8 "A"
 *   insn=0x000000000027E1C4 string=0x00000000001FB3B0 "0'"
 *   insn=0x000000000027E1C8 string=0x0000000000587F48 "physicsEnabled"
 *   insn=0x000000000027E1D4 string=0x000000000027E1D8 "x"
 *   insn=0x000000000027E1F0 string=0x000000000027E1F4 "("
 *   insn=0x000000000027E1F4 string=0x000000000027E1F8 ""
 *   insn=0x000000000027E200 string=0x000000000027E204 "t"
 *   insn=0x000000000027E214 string=0x000000000027E218 ""
 *   insn=0x000000000027E21C string=0x000000000027E220 "°"
 *   insn=0x000000000027E224 string=0x000000000027E228 "\t\t@"
 *   insn=0x000000000027E22C string=0x000000000027E230 ""
 *   insn=0x000000000027E234 string=0x000000000027E238 "h"
 *   insn=0x000000000027E238 string=0x000000000027E23C ""
 *   insn=0x000000000027E23C string=0x000000000027E240 "h"
 *   insn=0x000000000027E254 string=0x00000000001F78E0 "0'"
 *   insn=0x000000000027E258 string=0x000000000027E25C "6#"
 *   insn=0x000000000027E26C string=0x000000000027E81C ")#"
 *   insn=0x000000000027E278 string=0x000000000027E27C "!."
 *   insn=0x000000000027E27C string=0x000000000027E280 "A"
 *   insn=0x000000000027E27C string=0x000000000027E840 ")#"
 *   insn=0x000000000027E280 string=0x00000000005887C8 "gravityMagnitude"
 *   insn=0x000000000027E28C string=0x000000000027E290 "J"
 *   insn=0x000000000027E2AC string=0x000000000027E2B0 "("
 *   insn=0x000000000027E2B0 string=0x000000000027E2B4 "\t"
 *   insn=0x000000000027E2BC string=0x000000000027E2C0 "t"
 *   insn=0x000000000027E2D0 string=0x000000000027E2D4 ""
 *   insn=0x000000000027E2DC string=0x000000000027E2E0 "C"
 *   insn=0x000000000027E2E0 string=0x000000000027E2E4 "\t\t@"
 *   insn=0x000000000027E2E8 string=0x000000000027E2EC ""
 *   insn=0x000000000027E2F0 string=0x000000000027E2F4 "h"
 *   insn=0x000000000027E2F4 string=0x000000000027E2F8 ""
 *   insn=0x000000000027E2F8 string=0x000000000027E2FC "h"
 *   insn=0x000000000027E30C string=0x000000000027E310 "t"
 *   insn=0x000000000027E31C string=0x000000000027E320 "!*"
 *   insn=0x000000000027E320 string=0x000000000027E864 ")#"
 *   insn=0x000000000027E330 string=0x000000000027E334 "A"
 *   insn=0x000000000027E330 string=0x000000000027E888 ")#"
 *   insn=0x000000000027E334 string=0x00000000005887D9 "gravityDirectionX"
 *   insn=0x000000000027E35C string=0x000000000027E360 "r"
 *   insn=0x000000000027E36C string=0x000000000027E370 "t"
 *   insn=0x000000000027E380 string=0x000000000027E384 ""
 *   insn=0x000000000027E388 string=0x000000000027E38C "g"
 *   insn=0x000000000027E38C string=0x000000000027E390 "C"
 *   insn=0x000000000027E390 string=0x000000000027E394 "\t\t@"
 *   insn=0x000000000027E398 string=0x000000000027E39C ""
 *   insn=0x000000000027E3A0 string=0x000000000027E3A4 "h"
 *   insn=0x000000000027E3A4 string=0x000000000027E3A8 ""
 *   insn=0x000000000027E3A8 string=0x000000000027E3AC "h"
 *   insn=0x000000000027E3BC string=0x000000000027E3C0 "H"
 *   insn=0x000000000027E3D0 string=0x000000000027E8AC ")#"
 *   insn=0x000000000027E3E0 string=0x000000000027E3E4 "A"
 *   insn=0x000000000027E3E0 string=0x000000000027E8D0 ")#"
 *   insn=0x000000000027E3E4 string=0x00000000005887EB "gravityDirectionY"
 *   insn=0x000000000027E40C string=0x000000000027E410 "F"
 *   insn=0x000000000027E41C string=0x000000000027E420 "t"
 *   insn=0x000000000027E430 string=0x000000000027E434 ""
 *   insn=0x000000000027E438 string=0x000000000027E43C ";"
 *   insn=0x000000000027E43C string=0x000000000027E440 "C"
 *   insn=0x000000000027E440 string=0x000000000027E444 "\t\t@"
 *   insn=0x000000000027E448 string=0x000000000027E44C ""
 *   insn=0x000000000027E450 string=0x000000000027E454 "h"
 *   insn=0x000000000027E454 string=0x000000000027E458 ""
 *   insn=0x000000000027E458 string=0x000000000027E45C "h"
 *   insn=0x000000000027E480 string=0x000000000027E8F4 ")#"
 *   insn=0x000000000027E48C string=0x000000000027E490 "A$"
 *   insn=0x000000000027E490 string=0x000000000027E494 "A"
 *   insn=0x000000000027E490 string=0x000000000027E918 ")#"
 *   insn=0x000000000027E494 string=0x00000000005887FD "groundDeceleration"
 *   insn=0x000000000027E4C8 string=0x000000000027E4CC "t"
 *   insn=0x000000000027E4DC string=0x000000000027E4E0 ""
 *   insn=0x000000000027E4E8 string=0x000000000027E4EC "C"
 *   insn=0x000000000027E4EC string=0x000000000027E4F0 "\t\t@"
 *   insn=0x000000000027E4F4 string=0x000000000027E4F8 ""
 *   insn=0x000000000027E4FC string=0x000000000027E500 "h"
 *   insn=0x000000000027E500 string=0x000000000027E504 ""
 *   insn=0x000000000027E504 string=0x000000000027E508 "h"
 *   insn=0x000000000027E52C string=0x000000000027E93C ")#"
 *   insn=0x000000000027E538 string=0x000000000027E53C "!!"
 *   insn=0x000000000027E53C string=0x000000000027E540 "A"
 *   insn=0x000000000027E53C string=0x000000000027E960 ")#"
 *   insn=0x000000000027E540 string=0x0000000000588810 "airDeceleration"
 *   insn=0x000000000027E574 string=0x000000000027E578 "t"
 *   insn=0x000000000027E588 string=0x000000000027E58C ""
 *   insn=0x000000000027E594 string=0x000000000027E598 "C"
 *   insn=0x000000000027E598 string=0x000000000027E59C "\t\t@"
 *   insn=0x000000000027E5A0 string=0x000000000027E5A4 ""
 *   insn=0x000000000027E5A8 string=0x000000000027E5AC "h"
 *   insn=0x000000000027E5AC string=0x000000000027E5B0 ""
 *   insn=0x000000000027E5B0 string=0x000000000027E5B4 "h"
 *   insn=0x000000000027E5D4 string=0x000000000027E5D8 "a"
 *   insn=0x000000000027E5D8 string=0x000000000027E984 ")#"
 *   insn=0x000000000027E5E8 string=0x000000000027E5EC "A"
 *   insn=0x000000000027E5E8 string=0x000000000027E9A8 ")#"
 *   insn=0x000000000027E5EC string=0x0000000000588820 "maxSpeed"
 *   insn=0x000000000027E5F8 string=0x000000000027E5FC "o"
 *   insn=0x000000000027E620 string=0x000000000027E624 "t"
 *   insn=0x000000000027E634 string=0x000000000027E638 ""
 *   insn=0x000000000027E640 string=0x000000000027E644 "C"
 *   insn=0x000000000027E644 string=0x000000000027E648 "\t\t@"
 *   insn=0x000000000027E64C string=0x000000000027E650 ""
 *   insn=0x000000000027E654 string=0x000000000027E658 "h"
 *   insn=0x000000000027E658 string=0x000000000027E65C ""
 *   insn=0x000000000027E65C string=0x000000000027E660 "h"
 *   insn=0x000000000027E680 string=0x000000000027E684 "A"
 *   insn=0x000000000027E684 string=0x000000000027E9CC ")#"
 *   insn=0x000000000027E694 string=0x000000000027E698 "A"
 *   insn=0x000000000027E694 string=0x000000000027E9F0 ")#"
 *   insn=0x000000000027E698 string=0x0000000000588829 "allowsRotation"
 *   insn=0x000000000027E6A4 string=0x000000000027E6A8 "D"
 *   insn=0x000000000027E6CC string=0x000000000027E6D0 "t"
 *   insn=0x000000000027E6E0 string=0x000000000027E6E4 ""
 *   insn=0x000000000027E6EC string=0x000000000027E6F0 "C"
 *   insn=0x000000000027E6F0 string=0x000000000027E6F4 "\t\t@"
 *   insn=0x000000000027E6F8 string=0x000000000027E6FC ""
 *   insn=0x000000000027E700 string=0x000000000027E704 "h"
 *   insn=0x000000000027E704 string=0x000000000027E708 ""
 *   insn=0x000000000027E708 string=0x000000000027E70C "h"
 *   insn=0x000000000027E71C string=0x000000000027E720 "p"
 *   insn=0x000000000027E72C string=0x000000000027E730 "!"
 *   insn=0x000000000027E730 string=0x000000000027EA14 ")#"
 *   insn=0x000000000027E740 string=0x000000000027E744 "A"
 *   insn=0x000000000027E740 string=0x000000000027EA38 ")#"
 *   insn=0x000000000027E744 string=0x0000000000588838 "elasticity"
 *   insn=0x000000000027E76C string=0x000000000027E770 "n"
 *   insn=0x000000000027E778 string=0x000000000027E77C "t"
 *   insn=0x000000000027E78C string=0x000000000027E790 ""
 *   insn=0x000000000027E794 string=0x000000000027E798 "d"
 *   insn=0x000000000027E798 string=0x000000000027E79C "C"
 *   insn=0x000000000027E79C string=0x000000000027E7A0 "\t\t@"
 *   insn=0x000000000027E7A4 string=0x000000000027E7A8 ""
 *   insn=0x000000000027E7AC string=0x000000000027E7B0 "h"
 *   insn=0x000000000027E7B0 string=0x000000000027E7B4 ""
 *   insn=0x000000000027E7B4 string=0x000000000027E7B8 "h"
 *   insn=0x000000000027E7C8 string=0x000000000027E7CC "E"
 *   insn=0x000000000027E7DC string=0x000000000027EA5C ")#"
 *   insn=0x000000000027E7EC string=0x000000000027EA80 ")#"
 *   insn=0x000000000027E7F8 string=0x000000000027E7FC "A'"
 *   insn=0x000000000027E7FC string=0x000000000027ECE4 "{"
 *   insn=0x000000000027E81C string=0x000000000027E820 ")=G"
 *   insn=0x000000000027E820 string=0x000000000027E824 "!"
 *   insn=0x000000000027E828 string=0x000000000027E82C "\t"
 *   insn=0x000000000027E828 string=0x000000000027EAA4 "\t"
 *   insn=0x000000000027E82C string=0x000000000027E830 "*"
 *   insn=0x000000000027E830 string=0x000000000027E834 "\n"
 *   insn=0x000000000027E83C string=0x000000000027EAB0 "?"
 *   insn=0x000000000027E840 string=0x000000000027E844 ")=G"
 *   insn=0x000000000027E844 string=0x000000000027E848 "!"
 *   insn=0x000000000027E84C string=0x000000000027E850 "\t"
 *   insn=0x000000000027E84C string=0x000000000027EAC4 "\t"
 *   insn=0x000000000027E850 string=0x000000000027E854 "*"
 *   insn=0x000000000027E854 string=0x000000000027E858 "\n"
 *   insn=0x000000000027E860 string=0x000000000027EAD0 "?"
 *   insn=0x000000000027E864 string=0x000000000027E868 ")=G"
 *   insn=0x000000000027E868 string=0x000000000027E86C "!"
 *   insn=0x000000000027E870 string=0x000000000027E874 "\t"
 *   insn=0x000000000027E870 string=0x000000000027EAE4 "\t"
 *   insn=0x000000000027E874 string=0x000000000027E878 "*"
 *   insn=0x000000000027E878 string=0x000000000027E87C "\n"
 *   insn=0x000000000027E884 string=0x000000000027EAF0 "?"
 *   insn=0x000000000027E888 string=0x000000000027E88C ")=G"
 *   insn=0x000000000027E88C string=0x000000000027E890 "!"
 *   insn=0x000000000027E894 string=0x000000000027E898 "\t"
 *   insn=0x000000000027E894 string=0x000000000027EB04 "\t"
 *   insn=0x000000000027E898 string=0x000000000027E89C "*"
 *   insn=0x000000000027E89C string=0x000000000027E8A0 "\n"
 *   insn=0x000000000027E8A8 string=0x000000000027EB10 "?"
 *   insn=0x000000000027E8AC string=0x000000000027E8B0 ")=G"
 *   insn=0x000000000027E8B0 string=0x000000000027E8B4 "!"
 *   insn=0x000000000027E8B4 string=0x000000000027E8B8 "i"
 *   insn=0x000000000027E8B8 string=0x000000000027E8BC "\t"
 *   insn=0x000000000027E8B8 string=0x000000000027EB24 "\t"
 *   insn=0x000000000027E8BC string=0x000000000027E8C0 "*"
 *   insn=0x000000000027E8C0 string=0x000000000027E8C4 "\n"
 *   insn=0x000000000027E8CC string=0x000000000027EB30 "?"
 *   insn=0x000000000027E8D0 string=0x000000000027E8D4 ")=G"
 *   insn=0x000000000027E8D4 string=0x000000000027E8D8 "!"
 *   insn=0x000000000027E8D8 string=0x000000000027E8DC "I"
 *   insn=0x000000000027E8DC string=0x000000000027E8E0 "\t"
 *   insn=0x000000000027E8DC string=0x000000000027EB44 "\t"
 *   insn=0x000000000027E8E0 string=0x000000000027E8E4 "*"
 *   insn=0x000000000027E8E4 string=0x000000000027E8E8 "\n"
 *   insn=0x000000000027E8F0 string=0x000000000027EB50 "?"
 *   insn=0x000000000027E8F4 string=0x000000000027E8F8 ")=G"
 *   insn=0x000000000027E8F8 string=0x000000000027E8FC "!"
 *   insn=0x000000000027E8FC string=0x000000000027E900 ")"
 *   insn=0x000000000027E900 string=0x000000000027E904 "\t"
 *   insn=0x000000000027E900 string=0x000000000027EB64 "\t"
 *   insn=0x000000000027E904 string=0x000000000027E908 "*"
 *   insn=0x000000000027E908 string=0x000000000027E90C "\n"
 *   insn=0x000000000027E914 string=0x000000000027EB70 "?"
 *   insn=0x000000000027E918 string=0x000000000027E91C ")=G"
 *   insn=0x000000000027E91C string=0x000000000027E920 "!"
 *   insn=0x000000000027E920 string=0x000000000027E924 "\t"
 *   insn=0x000000000027E924 string=0x000000000027E928 "\t"
 *   insn=0x000000000027E924 string=0x000000000027EB84 "\t"
 *   insn=0x000000000027E928 string=0x000000000027E92C "*"
 *   insn=0x000000000027E92C string=0x000000000027E930 "\n"
 *   insn=0x000000000027E938 string=0x000000000027EB90 "?"
 *   insn=0x000000000027E93C string=0x000000000027E940 ")=G"
 *   insn=0x000000000027E940 string=0x000000000027E944 "!"
 *   insn=0x000000000027E948 string=0x000000000027E94C "\t"
 *   insn=0x000000000027E948 string=0x000000000027EBA4 "\t"
 *   insn=0x000000000027E94C string=0x000000000027E950 "*"
 *   insn=0x000000000027E950 string=0x000000000027E954 "\n"
 *   insn=0x000000000027E95C string=0x000000000027EBB0 "?"
 *   insn=0x000000000027E960 string=0x000000000027E964 ")=G"
 *   insn=0x000000000027E964 string=0x000000000027E968 "!"
 *   insn=0x000000000027E96C string=0x000000000027E970 "\t"
 *   insn=0x000000000027E96C string=0x000000000027EBC4 "\t"
 *   insn=0x000000000027E970 string=0x000000000027E974 "*"
 *   insn=0x000000000027E974 string=0x000000000027E978 "\n"
 *   insn=0x000000000027E980 string=0x000000000027EBD0 "?"
 *   insn=0x000000000027E984 string=0x000000000027E988 ")=G"
 *   insn=0x000000000027E988 string=0x000000000027E98C "!"
 *   insn=0x000000000027E990 string=0x000000000027E994 "\t"
 *   insn=0x000000000027E990 string=0x000000000027EBE4 "\t"
 *   insn=0x000000000027E994 string=0x000000000027E998 "*"
 *   insn=0x000000000027E998 string=0x000000000027E99C "\n"
 *   insn=0x000000000027E9A4 string=0x000000000027EBF0 "?"
 *   insn=0x000000000027E9A8 string=0x000000000027E9AC ")=G"
 *   insn=0x000000000027E9AC string=0x000000000027E9B0 "!"
 *   insn=0x000000000027E9B4 string=0x000000000027E9B8 "\t"
 *   insn=0x000000000027E9B4 string=0x000000000027EC04 "\t"
 *   insn=0x000000000027E9B8 string=0x000000000027E9BC "*"
 *   insn=0x000000000027E9BC string=0x000000000027E9C0 "\n"
 *   insn=0x000000000027E9C8 string=0x000000000027EC10 "?"
 *   insn=0x000000000027E9CC string=0x000000000027E9D0 ")=G"
 *   insn=0x000000000027E9D0 string=0x000000000027E9D4 "!"
 *   insn=0x000000000027E9D4 string=0x000000000027E9D8 "i"
 *   insn=0x000000000027E9D8 string=0x000000000027E9DC "\t"
 *   insn=0x000000000027E9D8 string=0x000000000027EC24 "\t"
 *   insn=0x000000000027E9DC string=0x000000000027E9E0 "*"
 *   insn=0x000000000027E9E0 string=0x000000000027E9E4 "\n"
 *   insn=0x000000000027E9EC string=0x000000000027EC30 "?"
 *   insn=0x000000000027E9F0 string=0x000000000027E9F4 ")=G"
 *   insn=0x000000000027E9F4 string=0x000000000027E9F8 "!"
 *   insn=0x000000000027E9F8 string=0x000000000027E9FC "I"
 *   insn=0x000000000027E9FC string=0x000000000027EA00 "\t"
 *   insn=0x000000000027E9FC string=0x000000000027EC44 "\t"
 *   insn=0x000000000027EA00 string=0x000000000027EA04 "*"
 *   insn=0x000000000027EA04 string=0x000000000027EA08 "\n"
 *   insn=0x000000000027EA10 string=0x000000000027EC50 "?"
 *   insn=0x000000000027EA14 string=0x000000000027EA18 ")=G"
 *   insn=0x000000000027EA18 string=0x000000000027EA1C "!"
 *   insn=0x000000000027EA1C string=0x000000000027EA20 ")"
 *   insn=0x000000000027EA20 string=0x000000000027EA24 "\t"
 *   insn=0x000000000027EA20 string=0x000000000027EC64 "\t"
 *   insn=0x000000000027EA24 string=0x000000000027EA28 "*"
 *   insn=0x000000000027EA28 string=0x000000000027EA2C "\n"
 *   insn=0x000000000027EA34 string=0x000000000027EC70 "?"
 *   insn=0x000000000027EA38 string=0x000000000027EA3C ")=G"
 *   insn=0x000000000027EA3C string=0x000000000027EA40 "!"
 *   insn=0x000000000027EA40 string=0x000000000027EA44 "\t"
 *   insn=0x000000000027EA44 string=0x000000000027EA48 "\t"
 *   insn=0x000000000027EA44 string=0x000000000027EC84 "\t"
 *   insn=0x000000000027EA48 string=0x000000000027EA4C "*"
 *   insn=0x000000000027EA4C string=0x000000000027EA50 "\n"
 *   insn=0x000000000027EA58 string=0x000000000027EC90 "?"
 *   insn=0x000000000027EA5C string=0x000000000027EA60 ")=G"
 *   insn=0x000000000027EA60 string=0x000000000027EA64 "!"
 *   insn=0x000000000027EA68 string=0x000000000027EA6C "\t"
 *   insn=0x000000000027EA68 string=0x000000000027ECA4 "\t"
 *   insn=0x000000000027EA6C string=0x000000000027EA70 "*"
 *   insn=0x000000000027EA70 string=0x000000000027EA74 "\n"
 *   insn=0x000000000027EA7C string=0x000000000027ECB0 "?"
 *   insn=0x000000000027EA80 string=0x000000000027EA84 ")=G"
 *   insn=0x000000000027EA84 string=0x000000000027EA88 "!"
 *   insn=0x000000000027EA8C string=0x000000000027EA90 "\t"
 *   insn=0x000000000027EA8C string=0x000000000027ECC4 "\t"
 *   insn=0x000000000027EA90 string=0x000000000027EA94 "*"
 *   insn=0x000000000027EA94 string=0x000000000027EA98 "\n"
 *   insn=0x000000000027EAA0 string=0x000000000027ECD0 "?"
 *   insn=0x000000000027EAA4 string=0x000000000027EAA8 "*"
 *   insn=0x000000000027EAA8 string=0x000000000027EAAC "\n"
 *   insn=0x000000000027EAB8 string=0x000000000027EABC ":"
 *   insn=0x000000000027EAC4 string=0x000000000027EAC8 "*"
 *   insn=0x000000000027EAC8 string=0x000000000027EACC "\n"
 *   insn=0x000000000027EAD0 string=0x000000000027EAD4 "l"
 *   insn=0x000000000027EAD8 string=0x000000000027EADC "2"
 *   insn=0x000000000027EAE4 string=0x000000000027EAE8 "*"
 *   insn=0x000000000027EAE8 string=0x000000000027EAEC "\n"
 *   insn=0x000000000027EAF8 string=0x000000000027EAFC "*"
 *   insn=0x000000000027EAFC string=0x000000000027EB00 "\t"
 *   insn=0x000000000027EB04 string=0x000000000027EB08 "*"
 *   insn=0x000000000027EB08 string=0x000000000027EB0C "\n"
 *   insn=0x000000000027EB18 string=0x000000000027EB1C """
 *   insn=0x000000000027EB24 string=0x000000000027EB28 "*"
 *   insn=0x000000000027EB28 string=0x000000000027EB2C "\n"
 *   insn=0x000000000027EB3C string=0x000000000027EB40 "%"
 *   insn=0x000000000027EB44 string=0x000000000027EB48 "*"
 *   insn=0x000000000027EB48 string=0x000000000027EB4C "\n"
 *   insn=0x000000000027EB5C string=0x000000000027EB60 "!"
 *   insn=0x000000000027EB64 string=0x000000000027EB68 "*"
 *   insn=0x000000000027EB68 string=0x000000000027EB6C "\n"
 *   insn=0x000000000027EB78 string=0x000000000027EB7C "\n"
 *   insn=0x000000000027EB7C string=0x000000000027EB80 "A"
 *   insn=0x000000000027EB84 string=0x000000000027EB88 "*"
 *   insn=0x000000000027EB88 string=0x000000000027EB8C "\n"
 *   insn=0x000000000027EB9C string=0x000000000027EBA0 "="
 *   insn=0x000000000027EBA4 string=0x000000000027EBA8 "*"
 *   insn=0x000000000027EBA8 string=0x000000000027EBAC "\n"
 *   insn=0x000000000027EBBC string=0x000000000027EBC0 "\"
 *   insn=0x000000000027EBC4 string=0x000000000027EBC8 "*"
 *   insn=0x000000000027EBC8 string=0x000000000027EBCC "\n"
 *   insn=0x000000000027EBD0 string=0x000000000027EBD4 "l"
 *   insn=0x000000000027EBDC string=0x000000000027EBE0 "X"
 *   insn=0x000000000027EBE4 string=0x000000000027EBE8 "*"
 *   insn=0x000000000027EBE8 string=0x000000000027EBEC "\n"
 *   insn=0x000000000027EBF0 string=0x000000000027EBF4 "L"
 *   insn=0x000000000027EBFC string=0x000000000027EC00 "w"
 *   insn=0x000000000027EC04 string=0x000000000027EC08 "*"
 *   insn=0x000000000027EC08 string=0x000000000027EC0C "\n"
 *   insn=0x000000000027EC1C string=0x000000000027EC20 "s"
 *   insn=0x000000000027EC24 string=0x000000000027EC28 "*"
 *   insn=0x000000000027EC28 string=0x000000000027EC2C "\n"
 *   insn=0x000000000027EC44 string=0x000000000027EC48 "*"
 *   insn=0x000000000027EC48 string=0x000000000027EC4C "\n"
 *   insn=0x000000000027EC50 string=0x000000000027EC54 ","
 *   insn=0x000000000027EC64 string=0x000000000027EC68 "*"
 *   insn=0x000000000027EC68 string=0x000000000027EC6C "\n"
 *   insn=0x000000000027EC84 string=0x000000000027EC88 "*"
 *   insn=0x000000000027EC88 string=0x000000000027EC8C "\n"
 *   insn=0x000000000027ECA4 string=0x000000000027ECA8 "*"
 *   insn=0x000000000027ECA8 string=0x000000000027ECAC "\n"
 *   insn=0x000000000027ECB0 string=0x000000000027ECB4 "l"
 *   insn=0x000000000027ECC4 string=0x000000000027ECC8 "*"
 *   insn=0x000000000027ECC8 string=0x000000000027ECCC "\n"
 *   insn=0x000000000027ECE4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000027ECEC string=0x000000000027ECF0 "(a"
 *   insn=0x000000000027ECF8 string=0x000000000027ECFC "*#"
 *   insn=0x000000000027ECFC string=0x000000000027ED00 "J=G"
 *   insn=0x000000000027ED00 string=0x000000000027ED04 ")!"
 *   insn=0x000000000027ED08 string=0x000000000027ED0C "*"
 *   insn=0x000000000027ED08 string=0x000000000027ED20 "*"
 *   insn=0x000000000027ED0C string=0x000000000027ED10 "K"
 *   insn=0x000000000027ED10 string=0x000000000027ED14 "+"
 *   insn=0x000000000027ED1C string=0x000000000027ED2C "_"
 *   insn=0x000000000027ED20 string=0x000000000027ED24 "K"
 *   insn=0x000000000027ED24 string=0x000000000027ED28 "+"
 *   insn=0x000000000027ED50 string=0x000000000027ED54 " ("
 *   insn=0x000000000027ED54 string=0x000000000027ED58 ")#"
 *   insn=0x000000000027ED58 string=0x000000000027ED5C ")=G"
 *   insn=0x000000000027ED5C string=0x000000000027ED60 "!"
 *   insn=0x000000000027ED64 string=0x000000000027ED68 "\t"
 *   insn=0x000000000027ED64 string=0x000000000027F260 "\t"
 *   insn=0x000000000027ED68 string=0x000000000027ED6C "*"
 *   insn=0x000000000027ED6C string=0x000000000027ED70 "\n"
 *   insn=0x000000000027ED74 string=0x000000000027ED78 "4"
 *   insn=0x000000000027ED78 string=0x000000000027F248 "?"
 *   insn=0x000000000027ED84 string=0x000000000027ED88 "(a"
 *   insn=0x000000000027ED90 string=0x000000000027ED94 "*#"
 *   insn=0x000000000027ED94 string=0x000000000027ED98 "J=G"
 *   insn=0x000000000027ED98 string=0x000000000027ED9C ")!"
 *   insn=0x000000000027EDA0 string=0x000000000027EDA4 "*"
 *   insn=0x000000000027EDA0 string=0x000000000027EDB8 "*"
 *   insn=0x000000000027EDA4 string=0x000000000027EDA8 "K"
 *   insn=0x000000000027EDA8 string=0x000000000027EDAC "+"
 *   insn=0x000000000027EDB4 string=0x000000000027EDC4 "_"
 *   insn=0x000000000027EDB8 string=0x000000000027EDBC "K"
 *   insn=0x000000000027EDBC string=0x000000000027EDC0 "+"
 *   insn=0x000000000027EDD0 string=0x000000000027EDD4 "t"
 *   insn=0x000000000027EDE8 string=0x000000000027EDEC "`#"
 *   insn=0x000000000027EDEC string=0x000000000027EDF0 ")#"
 *   insn=0x000000000027EDF0 string=0x000000000027EDF4 ")=G"
 *   insn=0x000000000027EDF4 string=0x000000000027EDF8 "!"
 *   insn=0x000000000027EDF8 string=0x000000000027EDFC ")#"
 *   insn=0x000000000027EDFC string=0x000000000027EE00 "\t"
 *   insn=0x000000000027EE00 string=0x000000000027EE04 "*"
 *   insn=0x000000000027EE04 string=0x000000000027EE08 "\n"
 *   insn=0x000000000027EE1C string=0x000000000027EE20 "(a"
 *   insn=0x000000000027EE28 string=0x000000000027EE2C "*#"
 *   insn=0x000000000027EE2C string=0x000000000027EE30 "J=G"
 *   insn=0x000000000027EE30 string=0x000000000027EE34 ")!"
 *   insn=0x000000000027EE38 string=0x000000000027EE3C "*"
 *   insn=0x000000000027EE38 string=0x000000000027EE50 "*"
 *   insn=0x000000000027EE3C string=0x000000000027EE40 "K"
 *   insn=0x000000000027EE40 string=0x000000000027EE44 "+"
 *   insn=0x000000000027EE4C string=0x000000000027EE5C "_"
 *   insn=0x000000000027EE50 string=0x000000000027EE54 "K"
 *   insn=0x000000000027EE54 string=0x000000000027EE58 "+"
 *   insn=0x000000000027EE68 string=0x000000000027EE6C "N"
 *   insn=0x000000000027EE84 string=0x000000000027EE88 ")#"
 *   insn=0x000000000027EE88 string=0x000000000027EE8C ")=G"
 *   insn=0x000000000027EE8C string=0x000000000027EE90 "!"
 *   insn=0x000000000027EE90 string=0x000000000027EE94 "i"
 *   insn=0x000000000027EE94 string=0x000000000027EE98 "\t"
 *   insn=0x000000000027EE98 string=0x000000000027EE9C "*"
 *   insn=0x000000000027EE9C string=0x000000000027EEA0 "\n"
 *   insn=0x000000000027EEB4 string=0x000000000027EEB8 "(a"
 *   insn=0x000000000027EEC0 string=0x000000000027EEC4 "*#"
 *   insn=0x000000000027EEC4 string=0x000000000027EEC8 "J=G"
 *   insn=0x000000000027EEC8 string=0x000000000027EECC ")!"
 *   insn=0x000000000027EED0 string=0x000000000027EED4 "*"
 *   insn=0x000000000027EED0 string=0x000000000027EEE8 "*"
 *   insn=0x000000000027EED4 string=0x000000000027EED8 "K"
 *   insn=0x000000000027EED8 string=0x000000000027EEDC "+"
 *   insn=0x000000000027EEE4 string=0x000000000027EEF4 "_"
 *   insn=0x000000000027EEE8 string=0x000000000027EEEC "K"
 *   insn=0x000000000027EEEC string=0x000000000027EEF0 "+"
 *   insn=0x000000000027EF00 string=0x000000000027EF04 "("
 *   insn=0x000000000027EF1C string=0x000000000027EF20 ")#"
 *   insn=0x000000000027EF20 string=0x000000000027EF24 ")=G"
 *   insn=0x000000000027EF24 string=0x000000000027EF28 "!"
 *   insn=0x000000000027EF2C string=0x000000000027EF30 "\t"
 *   insn=0x000000000027EF30 string=0x000000000027EF34 "*"
 *   insn=0x000000000027EF34 string=0x000000000027EF38 "\n"
 *   insn=0x000000000027EF4C string=0x000000000027EF50 "(a"
 *   insn=0x000000000027EF58 string=0x000000000027EF5C "*#"
 *   insn=0x000000000027EF5C string=0x000000000027EF60 "J=G"
 *   insn=0x000000000027EF60 string=0x000000000027EF64 ")!"
 *   insn=0x000000000027EF68 string=0x000000000027EF6C "*"
 *   insn=0x000000000027EF68 string=0x000000000027EF80 "*"
 *   insn=0x000000000027EF6C string=0x000000000027EF70 "K"
 *   insn=0x000000000027EF70 string=0x000000000027EF74 "+"
 *   insn=0x000000000027EF7C string=0x000000000027EF8C "_"
 *   insn=0x000000000027EF80 string=0x000000000027EF84 "K"
 *   insn=0x000000000027EF84 string=0x000000000027EF88 "+"
 *   insn=0x000000000027EFB0 string=0x000000000027EFB4 " "
 *   insn=0x000000000027EFB4 string=0x000000000027EFB8 ")#"
 *   insn=0x000000000027EFB8 string=0x000000000027EFBC ")=G"
 *   insn=0x000000000027EFBC string=0x000000000027EFC0 "!"
 *   insn=0x000000000027EFC4 string=0x000000000027EFC8 "\t"
 *   insn=0x000000000027EFC8 string=0x000000000027EFCC "*"
 *   insn=0x000000000027EFCC string=0x000000000027EFD0 "\n"
 *   insn=0x000000000027EFE4 string=0x000000000027EFE8 "(a"
 *   insn=0x000000000027EFF0 string=0x000000000027EFF4 "*#"
 *   insn=0x000000000027EFF4 string=0x000000000027EFF8 "J=G"
 *   insn=0x000000000027EFF8 string=0x000000000027EFFC ")!"
 *   insn=0x000000000027F000 string=0x000000000027F004 "*"
 *   insn=0x000000000027F000 string=0x000000000027F018 "*"
 *   insn=0x000000000027F004 string=0x000000000027F008 "K"
 *   insn=0x000000000027F008 string=0x000000000027F00C "+"
 *   insn=0x000000000027F014 string=0x000000000027F024 "_"
 *   insn=0x000000000027F018 string=0x000000000027F01C "K"
 *   insn=0x000000000027F01C string=0x000000000027F020 "+"
 *   insn=0x000000000027F048 string=0x000000000027F04C "`"
 *   insn=0x000000000027F04C string=0x000000000027F050 ")#"
 *   insn=0x000000000027F050 string=0x000000000027F054 ")=G"
 *   insn=0x000000000027F054 string=0x000000000027F058 "!"
 *   insn=0x000000000027F058 string=0x000000000027F05C ")"
 *   insn=0x000000000027F05C string=0x000000000027F060 "\t"
 *   insn=0x000000000027F060 string=0x000000000027F064 "*"
 *   insn=0x000000000027F064 string=0x000000000027F068 "\n"
 *   insn=0x000000000027F06C string=0x000000000027F070 "v"
 *   insn=0x000000000027F07C string=0x000000000027F080 "(a"
 *   insn=0x000000000027F088 string=0x000000000027F08C "*#"
 *   insn=0x000000000027F08C string=0x000000000027F090 "J=G"
 *   insn=0x000000000027F090 string=0x000000000027F094 ")!"
 *   insn=0x000000000027F098 string=0x000000000027F09C "*"
 *   insn=0x000000000027F098 string=0x000000000027F0B0 "*"
 *   insn=0x000000000027F09C string=0x000000000027F0A0 "K"
 *   insn=0x000000000027F0A0 string=0x000000000027F0A4 "+"
 *   insn=0x000000000027F0AC string=0x000000000027F0BC "_"
 *   insn=0x000000000027F0B0 string=0x000000000027F0B4 "K"
 *   insn=0x000000000027F0B4 string=0x000000000027F0B8 "+"
 *   insn=0x000000000027F0E4 string=0x000000000027F0E8 ")#"
 *   insn=0x000000000027F0E8 string=0x000000000027F0EC ")=G"
 *   insn=0x000000000027F0EC string=0x000000000027F0F0 "!"
 *   insn=0x000000000027F0F0 string=0x000000000027F0F4 "i"
 *   insn=0x000000000027F0F4 string=0x000000000027F0F8 "\t"
 *   insn=0x000000000027F0F8 string=0x000000000027F0FC "*"
 *   insn=0x000000000027F0FC string=0x000000000027F100 "\n"
 *   insn=0x000000000027F104 string=0x000000000027F108 "P"
 *   insn=0x000000000027F114 string=0x000000000027F118 "(a"
 *   insn=0x000000000027F120 string=0x000000000027F124 "*#"
 *   insn=0x000000000027F124 string=0x000000000027F128 "J=G"
 *   insn=0x000000000027F128 string=0x000000000027F12C ")!"
 *   insn=0x000000000027F130 string=0x000000000027F134 "*"
 *   insn=0x000000000027F130 string=0x000000000027F148 "*"
 *   insn=0x000000000027F134 string=0x000000000027F138 "K"
 *   insn=0x000000000027F138 string=0x000000000027F13C "+"
 *   insn=0x000000000027F144 string=0x000000000027F154 "_"
 *   insn=0x000000000027F148 string=0x000000000027F14C "K"
 *   insn=0x000000000027F14C string=0x000000000027F150 "+"
 *   insn=0x000000000027F17C string=0x000000000027F180 ")#"
 *   insn=0x000000000027F180 string=0x000000000027F184 ")=G"
 *   insn=0x000000000027F184 string=0x000000000027F188 "!"
 *   insn=0x000000000027F18C string=0x000000000027F190 "\t"
 *   insn=0x000000000027F190 string=0x000000000027F194 "*"
 *   insn=0x000000000027F194 string=0x000000000027F198 "\n"
 *   insn=0x000000000027F19C string=0x000000000027F1A0 "*"
 *   insn=0x000000000027F1A8 string=0x000000000027F1AC "*#"
 *   insn=0x000000000027F1AC string=0x000000000027F1B0 "J"
 *   insn=0x000000000027F1B4 string=0x000000000027F1B8 "(a"
 *   insn=0x000000000027F1C0 string=0x000000000027F1C4 "*#"
 *   insn=0x000000000027F1C4 string=0x000000000027F1C8 "J=G"
 *   insn=0x000000000027F1C8 string=0x000000000027F1CC ")!"
 *   insn=0x000000000027F1D0 string=0x000000000027F1D4 "*"
 *   insn=0x000000000027F1D0 string=0x000000000027F1E8 "*"
 *   insn=0x000000000027F1D4 string=0x000000000027F1D8 "K"
 *   insn=0x000000000027F1D8 string=0x000000000027F1DC "+"
 *   insn=0x000000000027F1E4 string=0x000000000027F1F4 "_"
 *   insn=0x000000000027F1E8 string=0x000000000027F1EC "K"
 *   insn=0x000000000027F1EC string=0x000000000027F1F0 "+"
 *   insn=0x000000000027F200 string=0x000000000027F204 "h"
 *   insn=0x000000000027F210 string=0x000000000027F214 ")#"
 *   insn=0x000000000027F214 string=0x000000000027F218 ")"
 *   insn=0x000000000027F224 string=0x000000000027F228 ")#"
 *   insn=0x000000000027F228 string=0x000000000027F22C ")=G"
 *   insn=0x000000000027F22C string=0x000000000027F230 "!"
 *   insn=0x000000000027F230 string=0x000000000027F234 "i"
 *   insn=0x000000000027F234 string=0x000000000027F238 "\t"
 *   insn=0x000000000027F238 string=0x000000000027F23C "*"
 *   insn=0x000000000027F23C string=0x000000000027F240 "\n"
 *   insn=0x000000000027F248 string=0x000000000027F24C "l"
 *   insn=0x000000000027F250 string=0x000000000027F254 "T"
 *   insn=0x000000000027F260 string=0x000000000027F264 "*"
 *   insn=0x000000000027F264 string=0x000000000027F268 "\n"
 *   insn=0x000000000027F268 string=0x000000000027F26C "?"
 *   insn=0x000000000027F26C string=0x000000000027F270 ""
 *   insn=0x000000000027F280 string=0x00000000001FCD70 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PhysicsObjectComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  sub_566BB8((int)&v66, "physicsEnabled");
  v67 = 0;
  sub_56A528(&v68, &v66);
  v70 = 0;
  v69 = 0x400000001LL;
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
  sub_566BB8((int)&v66, "gravityMagnitude");
  v67 = 1;
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
  sub_566BB8((int)&v66, "gravityDirectionX");
  v67 = 2;
  sub_56A528(&v68, &v66);
  v69 = 0x500000001LL;
  v70 = 4;
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
  sub_566BB8((int)&v66, "gravityDirectionY");
  v67 = 3;
  sub_56A528(&v68, &v66);
  v69 = 0x500000001LL;
  v70 = 4;
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
  sub_566BB8((int)&v66, "groundDeceleration");
  v67 = 4;
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
  sub_566BB8((int)&v66, "airDeceleration");
  v67 = 5;
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
  sub_566BB8((int)&v66, "maxSpeed");
  v67 = 6;
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
  sub_566BB8((int)&v66, "allowsRotation");
  v67 = 7;
  sub_56A528(&v68, &v66);
  v69 = 0x400000001LL;
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
  sub_566BB8((int)&v66, "elasticity");
  v67 = 8;
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


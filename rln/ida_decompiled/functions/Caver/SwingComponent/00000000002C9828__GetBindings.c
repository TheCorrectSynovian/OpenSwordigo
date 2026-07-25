/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C9828
 * Mangled: _ZN5Caver14SwingComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::SwingComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000001F5E40  Caver::SwingComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 9
 *   0x00000000001F5E40  Caver::SwingComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 234
 *   insn=0x00000000002C9840 string=0x00000000002C9844 "W"
 *   insn=0x00000000002C9854 string=0x00000000002C9858 "j"@"
 *   insn=0x00000000002C9854 string=0x00000000001FB3B0 "0'"
 *   insn=0x00000000002C9858 string=0x00000000002C985C "\t"
 *   insn=0x00000000002C9864 string=0x00000000002C9868 ")"
 *   insn=0x00000000002C9868 string=0x00000000002C986C "Ja"
 *   insn=0x00000000002C986C string=0x00000000002C9870 "K"
 *   insn=0x00000000002C9874 string=0x00000000002C9878 "K"
 *   insn=0x00000000002C9874 string=0x00000000002C9884 ""
 *   insn=0x00000000002C9878 string=0x00000000002C987C "k"
 *   insn=0x00000000002C987C string=0x00000000002C9880 "K"
 *   insn=0x00000000002C9888 string=0x00000000002C988C "J"
 *   insn=0x00000000002C9894 string=0x000000000058A240 "swingRightWeapon"
 *   insn=0x00000000002C98C4 string=0x00000000002C98C8 ""
 *   insn=0x00000000002C98D0 string=0x00000000002C98D4 "t"
 *   insn=0x00000000002C98E4 string=0x00000000002C98E8 ""
 *   insn=0x00000000002C98F4 string=0x00000000002C98F8 "\t\t@"
 *   insn=0x00000000002C98FC string=0x00000000002C9900 ""
 *   insn=0x00000000002C9904 string=0x00000000002C9908 "h"
 *   insn=0x00000000002C9908 string=0x00000000002C990C ""
 *   insn=0x00000000002C990C string=0x00000000002C9910 "h"
 *   insn=0x00000000002C9924 string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002C9938 string=0x00000000002C993C "a"
 *   insn=0x00000000002C9950 string=0x000000000058A251 "swingLeftWeapon"
 *   insn=0x00000000002C9984 string=0x00000000002C9988 "t"
 *   insn=0x00000000002C9998 string=0x00000000002C999C ""
 *   insn=0x00000000002C99A4 string=0x00000000002C99A8 "C"
 *   insn=0x00000000002C99A8 string=0x00000000002C99AC "\t\t@"
 *   insn=0x00000000002C99B0 string=0x00000000002C99B4 ""
 *   insn=0x00000000002C99B8 string=0x00000000002C99BC "h"
 *   insn=0x00000000002C99BC string=0x00000000002C99C0 ""
 *   insn=0x00000000002C99C0 string=0x00000000002C99C4 "h"
 *   insn=0x00000000002C99E4 string=0x00000000002C99E8 "A"
 *   insn=0x00000000002C99FC string=0x000000000058A261 "startFrame"
 *   insn=0x00000000002C9A08 string=0x00000000002C9A0C "kt\n"
 *   insn=0x00000000002C9A2C string=0x00000000002C9A30 ""
 *   insn=0x00000000002C9A38 string=0x00000000002C9A3C "t"
 *   insn=0x00000000002C9A4C string=0x00000000002C9A50 ""
 *   insn=0x00000000002C9A58 string=0x00000000002C9A5C "C"
 *   insn=0x00000000002C9A5C string=0x00000000002C9A60 "\t\t@"
 *   insn=0x00000000002C9A64 string=0x00000000002C9A68 ""
 *   insn=0x00000000002C9A6C string=0x00000000002C9A70 "h"
 *   insn=0x00000000002C9A70 string=0x00000000002C9A74 ""
 *   insn=0x00000000002C9A74 string=0x00000000002C9A78 "h"
 *   insn=0x00000000002C9AB0 string=0x000000000058A26C "endFrame"
 *   insn=0x00000000002C9ABC string=0x00000000002C9AC0 ">t\n"
 *   insn=0x00000000002C9AE4 string=0x00000000002C9AE8 "t"
 *   insn=0x00000000002C9AF8 string=0x00000000002C9AFC ""
 *   insn=0x00000000002C9B04 string=0x00000000002C9B08 "C"
 *   insn=0x00000000002C9B08 string=0x00000000002C9B0C "\t\t@"
 *   insn=0x00000000002C9B10 string=0x00000000002C9B14 ""
 *   insn=0x00000000002C9B18 string=0x00000000002C9B1C "h"
 *   insn=0x00000000002C9B1C string=0x00000000002C9B20 ""
 *   insn=0x00000000002C9B20 string=0x00000000002C9B24 "h"
 *   insn=0x00000000002C9B34 string=0x00000000002C9B38 "j"
 *   insn=0x00000000002C9B54 string=0x00000000002C9B58 "a\t"
 *   insn=0x00000000002C9B68 string=0x00000000002C9DA8 "J"
 *   insn=0x00000000002C9B88 string=0x00000000002C9B8C ")=G"
 *   insn=0x00000000002C9B8C string=0x00000000002C9B90 "!"
 *   insn=0x00000000002C9B94 string=0x00000000002C9B98 "\t"
 *   insn=0x00000000002C9B94 string=0x00000000002C9CA8 "\t"
 *   insn=0x00000000002C9B98 string=0x00000000002C9B9C "*"
 *   insn=0x00000000002C9B9C string=0x00000000002C9BA0 "\n"
 *   insn=0x00000000002C9BA4 string=0x00000000002C9BA8 "C"
 *   insn=0x00000000002C9BA8 string=0x00000000002C9CB4 "?"
 *   insn=0x00000000002C9BAC string=0x00000000002C9BB0 ")=G"
 *   insn=0x00000000002C9BB0 string=0x00000000002C9BB4 "!"
 *   insn=0x00000000002C9BB8 string=0x00000000002C9BBC "\t"
 *   insn=0x00000000002C9BB8 string=0x00000000002C9CC8 "\t"
 *   insn=0x00000000002C9BBC string=0x00000000002C9BC0 "*"
 *   insn=0x00000000002C9BC0 string=0x00000000002C9BC4 "\n"
 *   insn=0x00000000002C9BC8 string=0x00000000002C9BCC "B"
 *   insn=0x00000000002C9BCC string=0x00000000002C9CD4 "?"
 *   insn=0x00000000002C9BD0 string=0x00000000002C9BD4 ")=G"
 *   insn=0x00000000002C9BD4 string=0x00000000002C9BD8 "!"
 *   insn=0x00000000002C9BD8 string=0x00000000002C9BDC "i"
 *   insn=0x00000000002C9BDC string=0x00000000002C9BE0 "\t"
 *   insn=0x00000000002C9BDC string=0x00000000002C9CE8 "\t"
 *   insn=0x00000000002C9BE0 string=0x00000000002C9BE4 "*"
 *   insn=0x00000000002C9BE4 string=0x00000000002C9BE8 "\n"
 *   insn=0x00000000002C9BEC string=0x00000000002C9BF0 "A"
 *   insn=0x00000000002C9BF0 string=0x00000000002C9CF4 "?"
 *   insn=0x00000000002C9BF4 string=0x00000000002C9BF8 ")=G"
 *   insn=0x00000000002C9BF8 string=0x00000000002C9BFC "!"
 *   insn=0x00000000002C9BFC string=0x00000000002C9C00 "I"
 *   insn=0x00000000002C9C00 string=0x00000000002C9C04 "\t"
 *   insn=0x00000000002C9C00 string=0x00000000002C9D08 "\t"
 *   insn=0x00000000002C9C04 string=0x00000000002C9C08 "*"
 *   insn=0x00000000002C9C08 string=0x00000000002C9C0C "\n"
 *   insn=0x00000000002C9C10 string=0x00000000002C9C14 "@"
 *   insn=0x00000000002C9C14 string=0x00000000002C9D14 "?"
 *   insn=0x00000000002C9C18 string=0x00000000002C9C1C ")=G"
 *   insn=0x00000000002C9C1C string=0x00000000002C9C20 "!"
 *   insn=0x00000000002C9C20 string=0x00000000002C9C24 ")"
 *   insn=0x00000000002C9C24 string=0x00000000002C9C28 "\t"
 *   insn=0x00000000002C9C24 string=0x00000000002C9D28 "\t"
 *   insn=0x00000000002C9C28 string=0x00000000002C9C2C "*"
 *   insn=0x00000000002C9C2C string=0x00000000002C9C30 "\n"
 *   insn=0x00000000002C9C34 string=0x00000000002C9C38 "?"
 *   insn=0x00000000002C9C38 string=0x00000000002C9D34 "?"
 *   insn=0x00000000002C9C3C string=0x00000000002C9C40 ")=G"
 *   insn=0x00000000002C9C40 string=0x00000000002C9C44 "!"
 *   insn=0x00000000002C9C44 string=0x00000000002C9C48 "\t"
 *   insn=0x00000000002C9C48 string=0x00000000002C9C4C "\t"
 *   insn=0x00000000002C9C48 string=0x00000000002C9D48 "\t"
 *   insn=0x00000000002C9C4C string=0x00000000002C9C50 "*"
 *   insn=0x00000000002C9C50 string=0x00000000002C9C54 "\n"
 *   insn=0x00000000002C9C58 string=0x00000000002C9C5C ">"
 *   insn=0x00000000002C9C5C string=0x00000000002C9D54 "?"
 *   insn=0x00000000002C9C60 string=0x00000000002C9C64 ")=G"
 *   insn=0x00000000002C9C64 string=0x00000000002C9C68 "!"
 *   insn=0x00000000002C9C6C string=0x00000000002C9C70 "\t"
 *   insn=0x00000000002C9C6C string=0x00000000002C9D68 "\t"
 *   insn=0x00000000002C9C70 string=0x00000000002C9C74 "*"
 *   insn=0x00000000002C9C74 string=0x00000000002C9C78 "\n"
 *   insn=0x00000000002C9C7C string=0x00000000002C9C80 "="
 *   insn=0x00000000002C9C80 string=0x00000000002C9D74 "?"
 *   insn=0x00000000002C9C84 string=0x00000000002C9C88 ")=G"
 *   insn=0x00000000002C9C88 string=0x00000000002C9C8C "!"
 *   insn=0x00000000002C9C90 string=0x00000000002C9C94 "\t"
 *   insn=0x00000000002C9C90 string=0x00000000002C9D88 "\t"
 *   insn=0x00000000002C9C94 string=0x00000000002C9C98 "*"
 *   insn=0x00000000002C9C98 string=0x00000000002C9C9C "\n"
 *   insn=0x00000000002C9CA0 string=0x00000000002C9CA4 "<"
 *   insn=0x00000000002C9CA4 string=0x00000000002C9D94 "?"
 *   insn=0x00000000002C9CA8 string=0x00000000002C9CAC "*"
 *   insn=0x00000000002C9CAC string=0x00000000002C9CB0 "\n"
 *   insn=0x00000000002C9CB4 string=0x00000000002C9CB8 "L"
 *   insn=0x00000000002C9CC8 string=0x00000000002C9CCC "*"
 *   insn=0x00000000002C9CCC string=0x00000000002C9CD0 "\n"
 *   insn=0x00000000002C9CE0 string=0x00000000002C9CE4 ""
 *   insn=0x00000000002C9CE8 string=0x00000000002C9CEC "*"
 *   insn=0x00000000002C9CEC string=0x00000000002C9CF0 "\n"
 *   insn=0x00000000002C9D00 string=0x00000000002C9D04 ":"
 *   insn=0x00000000002C9D08 string=0x00000000002C9D0C "*"
 *   insn=0x00000000002C9D0C string=0x00000000002C9D10 "\n"
 *   insn=0x00000000002C9D14 string=0x00000000002C9D18 ","
 *   insn=0x00000000002C9D20 string=0x00000000002C9D24 "6"
 *   insn=0x00000000002C9D28 string=0x00000000002C9D2C "*"
 *   insn=0x00000000002C9D2C string=0x00000000002C9D30 "\n"
 *   insn=0x00000000002C9D34 string=0x00000000002C9D38 "L"
 *   insn=0x00000000002C9D40 string=0x00000000002C9D44 "W"
 *   insn=0x00000000002C9D48 string=0x00000000002C9D4C "*"
 *   insn=0x00000000002C9D4C string=0x00000000002C9D50 "\n"
 *   insn=0x00000000002C9D60 string=0x00000000002C9D64 "S"
 *   insn=0x00000000002C9D68 string=0x00000000002C9D6C "*"
 *   insn=0x00000000002C9D6C string=0x00000000002C9D70 "\n"
 *   insn=0x00000000002C9D80 string=0x00000000002C9D84 "r"
 *   insn=0x00000000002C9D88 string=0x00000000002C9D8C "*"
 *   insn=0x00000000002C9D8C string=0x00000000002C9D90 "\n"
 *   insn=0x00000000002C9D94 string=0x00000000002C9D98 ","
 *   insn=0x00000000002C9DA0 string=0x00000000002C9DA4 "n"
 *   insn=0x00000000002C9DA8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002C9DB0 string=0x00000000002C9DB4 "(a"
 *   insn=0x00000000002C9DC0 string=0x00000000002C9DC4 "J=G"
 *   insn=0x00000000002C9DC4 string=0x00000000002C9DC8 ")!"
 *   insn=0x00000000002C9DCC string=0x00000000002C9DD0 "*"
 *   insn=0x00000000002C9DCC string=0x00000000002C9DE4 "*"
 *   insn=0x00000000002C9DD0 string=0x00000000002C9DD4 "K"
 *   insn=0x00000000002C9DD4 string=0x00000000002C9DD8 "+"
 *   insn=0x00000000002C9DE0 string=0x00000000002C9DF0 "_"
 *   insn=0x00000000002C9DE4 string=0x00000000002C9DE8 "K"
 *   insn=0x00000000002C9DE8 string=0x00000000002C9DEC "+"
 *   insn=0x00000000002C9DFC string=0x00000000002C9E00 "i"
 *   insn=0x00000000002C9E14 string=0x00000000002C9E18 "`"
 *   insn=0x00000000002C9E1C string=0x00000000002C9E20 ")=G"
 *   insn=0x00000000002C9E20 string=0x00000000002C9E24 "!"
 *   insn=0x00000000002C9E24 string=0x00000000002C9E28 ")"
 *   insn=0x00000000002C9E28 string=0x00000000002C9E2C "\t"
 *   insn=0x00000000002C9E28 string=0x00000000002CA02C "\t"
 *   insn=0x00000000002C9E2C string=0x00000000002C9E30 "*"
 *   insn=0x00000000002C9E30 string=0x00000000002C9E34 "\n"
 *   insn=0x00000000002C9E38 string=0x00000000002C9E3C "v"
 *   insn=0x00000000002C9E3C string=0x00000000002CA014 "?"
 *   insn=0x00000000002C9E48 string=0x00000000002C9E4C "(a"
 *   insn=0x00000000002C9E58 string=0x00000000002C9E5C "J=G"
 *   insn=0x00000000002C9E5C string=0x00000000002C9E60 ")!"
 *   insn=0x00000000002C9E64 string=0x00000000002C9E68 "*"
 *   insn=0x00000000002C9E64 string=0x00000000002C9E7C "*"
 *   insn=0x00000000002C9E68 string=0x00000000002C9E6C "K"
 *   insn=0x00000000002C9E6C string=0x00000000002C9E70 "+"
 *   insn=0x00000000002C9E78 string=0x00000000002C9E88 "_"
 *   insn=0x00000000002C9E7C string=0x00000000002C9E80 "K"
 *   insn=0x00000000002C9E80 string=0x00000000002C9E84 "+"
 *   insn=0x00000000002C9E94 string=0x00000000002C9E98 "C"
 *   insn=0x00000000002C9EB4 string=0x00000000002C9EB8 ")=G"
 *   insn=0x00000000002C9EB8 string=0x00000000002C9EBC "!"
 *   insn=0x00000000002C9EBC string=0x00000000002C9EC0 "i"
 *   insn=0x00000000002C9EC0 string=0x00000000002C9EC4 "\t"
 *   insn=0x00000000002C9EC4 string=0x00000000002C9EC8 "*"
 *   insn=0x00000000002C9EC8 string=0x00000000002C9ECC "\n"
 *   insn=0x00000000002C9ED0 string=0x00000000002C9ED4 "P"
 *   insn=0x00000000002C9EE0 string=0x00000000002C9EE4 "(a"
 *   insn=0x00000000002C9EF0 string=0x00000000002C9EF4 "J=G"
 *   insn=0x00000000002C9EF4 string=0x00000000002C9EF8 ")!"
 *   insn=0x00000000002C9EFC string=0x00000000002C9F00 "*"
 *   insn=0x00000000002C9EFC string=0x00000000002C9F14 "*"
 *   insn=0x00000000002C9F00 string=0x00000000002C9F04 "K"
 *   insn=0x00000000002C9F04 string=0x00000000002C9F08 "+"
 *   insn=0x00000000002C9F10 string=0x00000000002C9F20 "_"
 *   insn=0x00000000002C9F14 string=0x00000000002C9F18 "K"
 *   insn=0x00000000002C9F18 string=0x00000000002C9F1C "+"
 *   insn=0x00000000002C9F4C string=0x00000000002C9F50 ")=G"
 *   insn=0x00000000002C9F50 string=0x00000000002C9F54 "!"
 *   insn=0x00000000002C9F58 string=0x00000000002C9F5C "\t"
 *   insn=0x00000000002C9F5C string=0x00000000002C9F60 "*"
 *   insn=0x00000000002C9F60 string=0x00000000002C9F64 "\n"
 *   insn=0x00000000002C9F68 string=0x00000000002C9F6C "*"
 *   insn=0x00000000002C9F78 string=0x00000000002C9F7C "J"
 *   insn=0x00000000002C9F80 string=0x00000000002C9F84 "(a"
 *   insn=0x00000000002C9F90 string=0x00000000002C9F94 "J=G"
 *   insn=0x00000000002C9F94 string=0x00000000002C9F98 ")!"
 *   insn=0x00000000002C9F9C string=0x00000000002C9FA0 "*"
 *   insn=0x00000000002C9F9C string=0x00000000002C9FB4 "*"
 *   insn=0x00000000002C9FA0 string=0x00000000002C9FA4 "K"
 *   insn=0x00000000002C9FA4 string=0x00000000002C9FA8 "+"
 *   insn=0x00000000002C9FB0 string=0x00000000002C9FC0 "_"
 *   insn=0x00000000002C9FB4 string=0x00000000002C9FB8 "K"
 *   insn=0x00000000002C9FB8 string=0x00000000002C9FBC "+"
 *   insn=0x00000000002C9FE0 string=0x00000000002C9FE4 ")"
 *   insn=0x00000000002C9FF4 string=0x00000000002C9FF8 ")=G"
 *   insn=0x00000000002C9FF8 string=0x00000000002C9FFC "!"
 *   insn=0x00000000002C9FFC string=0x00000000002CA000 "i"
 *   insn=0x00000000002CA000 string=0x00000000002CA004 "\t"
 *   insn=0x00000000002CA004 string=0x00000000002CA008 "*"
 *   insn=0x00000000002CA008 string=0x00000000002CA00C "\n"
 *   insn=0x00000000002CA014 string=0x00000000002CA018 "l"
 *   insn=0x00000000002CA024 string=0x00000000002CA028 "'"
 *   insn=0x00000000002CA02C string=0x00000000002CA030 "*"
 *   insn=0x00000000002CA030 string=0x00000000002CA034 "\n"
 *   insn=0x00000000002CA034 string=0x00000000002CA038 "?"
 *   insn=0x00000000002CA038 string=0x00000000002CA03C ""
 *   insn=0x00000000002CA048 string=0x00000000002CA04C "}"
 *   insn=0x00000000002CA04C string=0x00000000001F5E40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SwingComponent::GetBindings(Caver::Component *a1, _QWORD *a2)
{
  __int64 v3; // x8
  __int64 v4; // x9
  unsigned __int64 v5; // x8
  unsigned __int64 v6; // x9
  _DWORD *v7; // x10
  __int64 v8; // x20
  void *v9; // x0
  void *v10; // x0
  __int64 v11; // x20
  void *v12; // x0
  void *v13; // x0
  __int64 v14; // x20
  void *v15; // x0
  void *v16; // x0
  __int64 v17; // x20
  void *v18; // x0
  void *v19; // x0
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
  __int64 v36; // [xsp+8h] [xbp-78h] BYREF
  int v37; // [xsp+18h] [xbp-68h]
  __int64 v38; // [xsp+20h] [xbp-60h] BYREF
  __int64 v39; // [xsp+28h] [xbp-58h]
  int v40; // [xsp+30h] [xbp-50h]
  __int64 v41; // [xsp+38h] [xbp-48h]

  v41 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::GetBindings(a1);
  v3 = a2[1];
  v4 = v3 - *a2;
  if ( v3 != *a2 )
  {
    v5 = 0;
    v6 = v4 >> 5;
    v7 = (_DWORD *)(*a2 + 24LL);
    do
    {
      if ( !*(v7 - 6) )
        *v7 |= 4u;
      ++v5;
      v7 += 8;
    }
    while ( v5 < v6 );
  }
  sub_566BB8((int)&v36, "swingRightWeapon");
  v37 = 2;
  sub_56A528(&v38, &v36);
  v40 = 0;
  v39 = 0x400000001LL;
  v8 = a2[1];
  if ( v8 == a2[2] )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v8 = v37;
    sub_56A528(v8 + 8, &v38);
    *(_DWORD *)(v8 + 24) = v40;
    *(_QWORD *)(v8 + 16) = v39;
    a2[1] += 32LL;
  }
  v9 = (void *)(v38 - 24);
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
      operator delete(v9);
  }
  v10 = (void *)(v36 - 24);
  if ( (__int64 *)(v36 - 24) != &qword_6FD2E0 )
  {
    v22 = (unsigned int *)(v36 - 8);
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
      operator delete(v10);
  }
  sub_566BB8((int)&v36, "swingLeftWeapon");
  v37 = 1;
  sub_56A528(&v38, &v36);
  v39 = 0x400000001LL;
  v40 = 0;
  v11 = a2[1];
  if ( v11 == a2[2] )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v11 = v37;
    sub_56A528(v11 + 8, &v38);
    *(_DWORD *)(v11 + 24) = v40;
    *(_QWORD *)(v11 + 16) = v39;
    a2[1] += 32LL;
  }
  v12 = (void *)(v38 - 24);
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
      operator delete(v12);
  }
  v13 = (void *)(v36 - 24);
  if ( (__int64 *)(v36 - 24) != &qword_6FD2E0 )
  {
    v26 = (unsigned int *)(v36 - 8);
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
      operator delete(v13);
  }
  sub_566BB8((int)&v36, "startFrame");
  v37 = 3;
  sub_56A528(&v38, &v36);
  v40 = 0;
  v39 = 0x500000001LL;
  v14 = a2[1];
  if ( v14 == a2[2] )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v14 = v37;
    sub_56A528(v14 + 8, &v38);
    *(_DWORD *)(v14 + 24) = v40;
    *(_QWORD *)(v14 + 16) = v39;
    a2[1] += 32LL;
  }
  v15 = (void *)(v38 - 24);
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
      operator delete(v15);
  }
  v16 = (void *)(v36 - 24);
  if ( (__int64 *)(v36 - 24) != &qword_6FD2E0 )
  {
    v30 = (unsigned int *)(v36 - 8);
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
      operator delete(v16);
  }
  sub_566BB8((int)&v36, "endFrame");
  v37 = 4;
  sub_56A528(&v38, &v36);
  v39 = 0x500000001LL;
  v40 = 0;
  v17 = a2[1];
  if ( v17 == a2[2] )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v17 = v37;
    sub_56A528(v17 + 8, &v38);
    *(_DWORD *)(v17 + 24) = v40;
    *(_QWORD *)(v17 + 16) = v39;
    a2[1] += 32LL;
  }
  v18 = (void *)(v38 - 24);
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
      operator delete(v18);
  }
  v19 = (void *)(v36 - 24);
  if ( (__int64 *)(v36 - 24) != &qword_6FD2E0 )
  {
    v34 = (unsigned int *)(v36 - 8);
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
      operator delete(v19);
  }
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000280AF8
 * Mangled: _ZN5Caver24PhysicsPlatformComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::PhysicsPlatformComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000001F6BD0  Caver::PhysicsPlatformComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6BD0  Caver::PhysicsPlatformComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 249
 *   insn=0x0000000000280B10 string=0x0000000000280B14 "W"
 *   insn=0x0000000000280B20 string=0x0000000000280B24 "#"
 *   insn=0x0000000000280B24 string=0x0000000000280B28 "A"
 *   insn=0x0000000000280B24 string=0x00000000001FB3B0 "0'"
 *   insn=0x0000000000280B28 string=0x000000000058895C "mass"
 *   insn=0x0000000000280B34 string=0x0000000000280B38 " "
 *   insn=0x0000000000280B4C string=0x0000000000280B50 "v"
 *   insn=0x0000000000280B50 string=0x0000000000280B54 ""
 *   insn=0x0000000000280B54 string=0x0000000000280B58 ""
 *   insn=0x0000000000280B60 string=0x0000000000280B64 "t"
 *   insn=0x0000000000280B74 string=0x0000000000280B78 ""
 *   insn=0x0000000000280B7C string=0x0000000000280B80 "j"
 *   insn=0x0000000000280B84 string=0x0000000000280B88 "\t\t@"
 *   insn=0x0000000000280B8C string=0x0000000000280B90 ""
 *   insn=0x0000000000280B94 string=0x0000000000280B98 "h"
 *   insn=0x0000000000280B98 string=0x0000000000280B9C ""
 *   insn=0x0000000000280B9C string=0x0000000000280BA0 "h"
 *   insn=0x0000000000280BB0 string=0x0000000000280BB4 "K"
 *   insn=0x0000000000280BB4 string=0x00000000001F78E0 "0'"
 *   insn=0x0000000000280BB8 string=0x0000000000280BBC "6#"
 *   insn=0x0000000000280BC8 string=0x0000000000280BCC "!"
 *   insn=0x0000000000280BCC string=0x0000000000280E10 ")#"
 *   insn=0x0000000000280BDC string=0x0000000000280BE0 "A"
 *   insn=0x0000000000280BDC string=0x0000000000280E34 ")#"
 *   insn=0x0000000000280BE0 string=0x0000000000588961 "springForce"
 *   insn=0x0000000000280C08 string=0x0000000000280C0C "G"
 *   insn=0x0000000000280C14 string=0x0000000000280C18 "t"
 *   insn=0x0000000000280C28 string=0x0000000000280C2C ""
 *   insn=0x0000000000280C30 string=0x0000000000280C34 "="
 *   insn=0x0000000000280C34 string=0x0000000000280C38 "C"
 *   insn=0x0000000000280C38 string=0x0000000000280C3C "\t\t@"
 *   insn=0x0000000000280C40 string=0x0000000000280C44 ""
 *   insn=0x0000000000280C48 string=0x0000000000280C4C "h"
 *   insn=0x0000000000280C4C string=0x0000000000280C50 ""
 *   insn=0x0000000000280C50 string=0x0000000000280C54 "h"
 *   insn=0x0000000000280C78 string=0x0000000000280E58 ")#"
 *   insn=0x0000000000280C88 string=0x0000000000280C8C "A"
 *   insn=0x0000000000280C88 string=0x0000000000280E7C ")#"
 *   insn=0x0000000000280C8C string=0x000000000058896D "decelerationForce"
 *   insn=0x0000000000280CC0 string=0x0000000000280CC4 "t"
 *   insn=0x0000000000280CD4 string=0x0000000000280CD8 ""
 *   insn=0x0000000000280CE0 string=0x0000000000280CE4 "C"
 *   insn=0x0000000000280CE4 string=0x0000000000280CE8 "\t\t@"
 *   insn=0x0000000000280CEC string=0x0000000000280CF0 ""
 *   insn=0x0000000000280CF4 string=0x0000000000280CF8 "h"
 *   insn=0x0000000000280CF8 string=0x0000000000280CFC ""
 *   insn=0x0000000000280CFC string=0x0000000000280D00 "h"
 *   insn=0x0000000000280D24 string=0x0000000000280EA0 ")#"
 *   insn=0x0000000000280D34 string=0x0000000000280D38 "A"
 *   insn=0x0000000000280D34 string=0x0000000000280EC4 ")#"
 *   insn=0x0000000000280D38 string=0x000000000058897F "minSpeed"
 *   insn=0x0000000000280D6C string=0x0000000000280D70 "t"
 *   insn=0x0000000000280D80 string=0x0000000000280D84 ""
 *   insn=0x0000000000280D8C string=0x0000000000280D90 "C"
 *   insn=0x0000000000280D90 string=0x0000000000280D94 "\t\t@"
 *   insn=0x0000000000280D98 string=0x0000000000280D9C ""
 *   insn=0x0000000000280DA0 string=0x0000000000280DA4 "h"
 *   insn=0x0000000000280DA4 string=0x0000000000280DA8 ""
 *   insn=0x0000000000280DA8 string=0x0000000000280DAC "h"
 *   insn=0x0000000000280DD0 string=0x0000000000280EE8 ")#"
 *   insn=0x0000000000280DDC string=0x0000000000280DE0 "a\t"
 *   insn=0x0000000000280DE0 string=0x0000000000280F0C ")#"
 *   insn=0x0000000000280E10 string=0x0000000000280E14 ")=G"
 *   insn=0x0000000000280E14 string=0x0000000000280E18 "!"
 *   insn=0x0000000000280E1C string=0x0000000000280E20 "\t"
 *   insn=0x0000000000280E1C string=0x0000000000280F30 "\t"
 *   insn=0x0000000000280E20 string=0x0000000000280E24 "*"
 *   insn=0x0000000000280E24 string=0x0000000000280E28 "\n"
 *   insn=0x0000000000280E2C string=0x0000000000280E30 "C"
 *   insn=0x0000000000280E30 string=0x0000000000280F3C "?"
 *   insn=0x0000000000280E34 string=0x0000000000280E38 ")=G"
 *   insn=0x0000000000280E38 string=0x0000000000280E3C "!"
 *   insn=0x0000000000280E40 string=0x0000000000280E44 "\t"
 *   insn=0x0000000000280E40 string=0x0000000000280F50 "\t"
 *   insn=0x0000000000280E44 string=0x0000000000280E48 "*"
 *   insn=0x0000000000280E48 string=0x0000000000280E4C "\n"
 *   insn=0x0000000000280E50 string=0x0000000000280E54 "B"
 *   insn=0x0000000000280E54 string=0x0000000000280F5C "?"
 *   insn=0x0000000000280E58 string=0x0000000000280E5C ")=G"
 *   insn=0x0000000000280E5C string=0x0000000000280E60 "!"
 *   insn=0x0000000000280E60 string=0x0000000000280E64 "i"
 *   insn=0x0000000000280E64 string=0x0000000000280E68 "\t"
 *   insn=0x0000000000280E64 string=0x0000000000280F70 "\t"
 *   insn=0x0000000000280E68 string=0x0000000000280E6C "*"
 *   insn=0x0000000000280E6C string=0x0000000000280E70 "\n"
 *   insn=0x0000000000280E74 string=0x0000000000280E78 "A"
 *   insn=0x0000000000280E78 string=0x0000000000280F7C "?"
 *   insn=0x0000000000280E7C string=0x0000000000280E80 ")=G"
 *   insn=0x0000000000280E80 string=0x0000000000280E84 "!"
 *   insn=0x0000000000280E84 string=0x0000000000280E88 "I"
 *   insn=0x0000000000280E88 string=0x0000000000280E8C "\t"
 *   insn=0x0000000000280E88 string=0x0000000000280F90 "\t"
 *   insn=0x0000000000280E8C string=0x0000000000280E90 "*"
 *   insn=0x0000000000280E90 string=0x0000000000280E94 "\n"
 *   insn=0x0000000000280E98 string=0x0000000000280E9C "@"
 *   insn=0x0000000000280E9C string=0x0000000000280F9C "?"
 *   insn=0x0000000000280EA0 string=0x0000000000280EA4 ")=G"
 *   insn=0x0000000000280EA4 string=0x0000000000280EA8 "!"
 *   insn=0x0000000000280EA8 string=0x0000000000280EAC ")"
 *   insn=0x0000000000280EAC string=0x0000000000280EB0 "\t"
 *   insn=0x0000000000280EAC string=0x0000000000280FB0 "\t"
 *   insn=0x0000000000280EB0 string=0x0000000000280EB4 "*"
 *   insn=0x0000000000280EB4 string=0x0000000000280EB8 "\n"
 *   insn=0x0000000000280EBC string=0x0000000000280EC0 "?"
 *   insn=0x0000000000280EC0 string=0x0000000000280FBC "?"
 *   insn=0x0000000000280EC4 string=0x0000000000280EC8 ")=G"
 *   insn=0x0000000000280EC8 string=0x0000000000280ECC "!"
 *   insn=0x0000000000280ECC string=0x0000000000280ED0 "\t"
 *   insn=0x0000000000280ED0 string=0x0000000000280ED4 "\t"
 *   insn=0x0000000000280ED0 string=0x0000000000280FD0 "\t"
 *   insn=0x0000000000280ED4 string=0x0000000000280ED8 "*"
 *   insn=0x0000000000280ED8 string=0x0000000000280EDC "\n"
 *   insn=0x0000000000280EE0 string=0x0000000000280EE4 ">"
 *   insn=0x0000000000280EE4 string=0x0000000000280FDC "?"
 *   insn=0x0000000000280EE8 string=0x0000000000280EEC ")=G"
 *   insn=0x0000000000280EEC string=0x0000000000280EF0 "!"
 *   insn=0x0000000000280EF4 string=0x0000000000280EF8 "\t"
 *   insn=0x0000000000280EF4 string=0x0000000000280FF0 "\t"
 *   insn=0x0000000000280EF8 string=0x0000000000280EFC "*"
 *   insn=0x0000000000280EFC string=0x0000000000280F00 "\n"
 *   insn=0x0000000000280F04 string=0x0000000000280F08 "="
 *   insn=0x0000000000280F08 string=0x0000000000280FFC "?"
 *   insn=0x0000000000280F0C string=0x0000000000280F10 ")=G"
 *   insn=0x0000000000280F10 string=0x0000000000280F14 "!"
 *   insn=0x0000000000280F18 string=0x0000000000280F1C "\t"
 *   insn=0x0000000000280F18 string=0x0000000000281010 "\t"
 *   insn=0x0000000000280F1C string=0x0000000000280F20 "*"
 *   insn=0x0000000000280F20 string=0x0000000000280F24 "\n"
 *   insn=0x0000000000280F28 string=0x0000000000280F2C "<"
 *   insn=0x0000000000280F2C string=0x000000000028101C "?"
 *   insn=0x0000000000280F30 string=0x0000000000280F34 "*"
 *   insn=0x0000000000280F34 string=0x0000000000280F38 "\n"
 *   insn=0x0000000000280F48 string=0x0000000000280F4C "!"
 *   insn=0x0000000000280F50 string=0x0000000000280F54 "*"
 *   insn=0x0000000000280F54 string=0x0000000000280F58 "\n"
 *   insn=0x0000000000280F70 string=0x0000000000280F74 "*"
 *   insn=0x0000000000280F74 string=0x0000000000280F78 "\n"
 *   insn=0x0000000000280F84 string=0x0000000000280F88 ""
 *   insn=0x0000000000280F88 string=0x0000000000280F8C "<"
 *   insn=0x0000000000280F90 string=0x0000000000280F94 "*"
 *   insn=0x0000000000280F94 string=0x0000000000280F98 "\n"
 *   insn=0x0000000000280F9C string=0x0000000000280FA0 "l"
 *   insn=0x0000000000280FA8 string=0x0000000000280FAC "8"
 *   insn=0x0000000000280FB0 string=0x0000000000280FB4 "*"
 *   insn=0x0000000000280FB4 string=0x0000000000280FB8 "\n"
 *   insn=0x0000000000280FBC string=0x0000000000280FC0 "L"
 *   insn=0x0000000000280FC8 string=0x0000000000280FCC "W"
 *   insn=0x0000000000280FD0 string=0x0000000000280FD4 "*"
 *   insn=0x0000000000280FD4 string=0x0000000000280FD8 "\n"
 *   insn=0x0000000000280FE8 string=0x0000000000280FEC "S"
 *   insn=0x0000000000280FF0 string=0x0000000000280FF4 "*"
 *   insn=0x0000000000280FF4 string=0x0000000000280FF8 "\n"
 *   insn=0x0000000000281008 string=0x000000000028100C "r"
 *   insn=0x0000000000281010 string=0x0000000000281014 "*"
 *   insn=0x0000000000281014 string=0x0000000000281018 "\n"
 *   insn=0x000000000028101C string=0x0000000000281020 ","
 *   insn=0x0000000000281028 string=0x000000000028102C "n"
 *   insn=0x0000000000281030 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000281038 string=0x000000000028103C "(a"
 *   insn=0x0000000000281044 string=0x0000000000281048 "\n#"
 *   insn=0x0000000000281048 string=0x000000000028104C "J=G"
 *   insn=0x000000000028104C string=0x0000000000281050 ")!"
 *   insn=0x0000000000281054 string=0x0000000000281058 "*"
 *   insn=0x0000000000281054 string=0x000000000028106C "*"
 *   insn=0x0000000000281058 string=0x000000000028105C "K"
 *   insn=0x000000000028105C string=0x0000000000281060 "+"
 *   insn=0x0000000000281068 string=0x0000000000281078 "_"
 *   insn=0x000000000028106C string=0x0000000000281070 "K"
 *   insn=0x0000000000281070 string=0x0000000000281074 "+"
 *   insn=0x000000000028109C string=0x00000000002810A0 "`"
 *   insn=0x00000000002810A0 string=0x00000000002810A4 "\t#"
 *   insn=0x00000000002810A4 string=0x00000000002810A8 ")=G"
 *   insn=0x00000000002810A8 string=0x00000000002810AC "!"
 *   insn=0x00000000002810AC string=0x00000000002810B0 ")"
 *   insn=0x00000000002810B0 string=0x00000000002810B4 "\t"
 *   insn=0x00000000002810B0 string=0x00000000002812B4 "\t"
 *   insn=0x00000000002810B4 string=0x00000000002810B8 "*"
 *   insn=0x00000000002810B8 string=0x00000000002810BC "\n"
 *   insn=0x00000000002810C0 string=0x00000000002810C4 "v"
 *   insn=0x00000000002810C4 string=0x000000000028129C "?"
 *   insn=0x00000000002810D0 string=0x00000000002810D4 "(a"
 *   insn=0x00000000002810DC string=0x00000000002810E0 "\n#"
 *   insn=0x00000000002810E0 string=0x00000000002810E4 "J=G"
 *   insn=0x00000000002810E4 string=0x00000000002810E8 ")!"
 *   insn=0x00000000002810EC string=0x00000000002810F0 "*"
 *   insn=0x00000000002810EC string=0x0000000000281104 "*"
 *   insn=0x00000000002810F0 string=0x00000000002810F4 "K"
 *   insn=0x00000000002810F4 string=0x00000000002810F8 "+"
 *   insn=0x0000000000281100 string=0x0000000000281110 "_"
 *   insn=0x0000000000281104 string=0x0000000000281108 "K"
 *   insn=0x0000000000281108 string=0x000000000028110C "+"
 *   insn=0x0000000000281138 string=0x000000000028113C "\t#"
 *   insn=0x000000000028113C string=0x0000000000281140 ")=G"
 *   insn=0x0000000000281140 string=0x0000000000281144 "!"
 *   insn=0x0000000000281144 string=0x0000000000281148 "i"
 *   insn=0x0000000000281148 string=0x000000000028114C "\t"
 *   insn=0x000000000028114C string=0x0000000000281150 "*"
 *   insn=0x0000000000281150 string=0x0000000000281154 "\n"
 *   insn=0x0000000000281158 string=0x000000000028115C "P"
 *   insn=0x0000000000281168 string=0x000000000028116C "(a"
 *   insn=0x0000000000281174 string=0x0000000000281178 "\n#"
 *   insn=0x0000000000281178 string=0x000000000028117C "J=G"
 *   insn=0x000000000028117C string=0x0000000000281180 ")!"
 *   insn=0x0000000000281184 string=0x0000000000281188 "*"
 *   insn=0x0000000000281184 string=0x000000000028119C "*"
 *   insn=0x0000000000281188 string=0x000000000028118C "K"
 *   insn=0x000000000028118C string=0x0000000000281190 "+"
 *   insn=0x0000000000281198 string=0x00000000002811A8 "_"
 *   insn=0x000000000028119C string=0x00000000002811A0 "K"
 *   insn=0x00000000002811A0 string=0x00000000002811A4 "+"
 *   insn=0x00000000002811B4 string=0x00000000002811B8 "{"
 *   insn=0x00000000002811D0 string=0x00000000002811D4 "\t#"
 *   insn=0x00000000002811D4 string=0x00000000002811D8 ")=G"
 *   insn=0x00000000002811D8 string=0x00000000002811DC "!"
 *   insn=0x00000000002811E0 string=0x00000000002811E4 "\t"
 *   insn=0x00000000002811E4 string=0x00000000002811E8 "*"
 *   insn=0x00000000002811E8 string=0x00000000002811EC "\n"
 *   insn=0x00000000002811F0 string=0x00000000002811F4 "*"
 *   insn=0x00000000002811FC string=0x0000000000281200 "*#"
 *   insn=0x0000000000281200 string=0x0000000000281204 "J"
 *   insn=0x0000000000281208 string=0x000000000028120C "(a"
 *   insn=0x0000000000281214 string=0x0000000000281218 "\n#"
 *   insn=0x0000000000281218 string=0x000000000028121C "J=G"
 *   insn=0x000000000028121C string=0x0000000000281220 ")!"
 *   insn=0x0000000000281224 string=0x0000000000281228 "*"
 *   insn=0x0000000000281224 string=0x000000000028123C "*"
 *   insn=0x0000000000281228 string=0x000000000028122C "K"
 *   insn=0x000000000028122C string=0x0000000000281230 "+"
 *   insn=0x0000000000281238 string=0x0000000000281248 "_"
 *   insn=0x000000000028123C string=0x0000000000281240 "K"
 *   insn=0x0000000000281240 string=0x0000000000281244 "+"
 *   insn=0x0000000000281254 string=0x0000000000281258 "S"
 *   insn=0x0000000000281264 string=0x0000000000281268 ")#"
 *   insn=0x0000000000281268 string=0x000000000028126C ")"
 *   insn=0x0000000000281278 string=0x000000000028127C "\t#"
 *   insn=0x000000000028127C string=0x0000000000281280 ")=G"
 *   insn=0x0000000000281280 string=0x0000000000281284 "!"
 *   insn=0x0000000000281284 string=0x0000000000281288 "i"
 *   insn=0x0000000000281288 string=0x000000000028128C "\t"
 *   insn=0x000000000028128C string=0x0000000000281290 "*"
 *   insn=0x0000000000281290 string=0x0000000000281294 "\n"
 *   insn=0x000000000028129C string=0x00000000002812A0 "l"
 *   insn=0x00000000002812A4 string=0x00000000002812A8 "?"
 *   insn=0x00000000002812B4 string=0x00000000002812B8 "*"
 *   insn=0x00000000002812B8 string=0x00000000002812BC "\n"
 *   insn=0x00000000002812BC string=0x00000000002812C0 "?"
 *   insn=0x00000000002812C0 string=0x00000000002812C4 ""
 *   insn=0x00000000002812D0 string=0x00000000002812D4 "?"
 *   insn=0x00000000002812D4 string=0x00000000001F6BD0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PhysicsPlatformComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  Caver::Component::GetBindings(a1);
  sub_566BB8((int)&v31, "mass");
  v32 = 0;
  sub_56A528(&v33, &v31);
  v35 = 0;
  v34 = 0x500000001LL;
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
  sub_566BB8((int)&v31, "springForce");
  v32 = 1;
  sub_56A528(&v33, &v31);
  v34 = 0x500000001LL;
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
  sub_566BB8((int)&v31, "decelerationForce");
  v32 = 2;
  sub_56A528(&v33, &v31);
  v34 = 0x500000001LL;
  v35 = 0;
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
  sub_566BB8((int)&v31, "minSpeed");
  v32 = 3;
  sub_56A528(&v33, &v31);
  v34 = 0x500000001LL;
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


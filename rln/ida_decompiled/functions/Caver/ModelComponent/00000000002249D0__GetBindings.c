/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002249D0
 * Mangled: _ZN5Caver14ModelComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::ModelComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001F5C30  Caver::ModelComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000002247DC  Caver::ModelComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 8
 *   0x00000000001F5C30  Caver::ModelComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 422
 *   insn=0x00000000002249E8 string=0x00000000002249EC "W"
 *   insn=0x00000000002249F8 string=0x00000000002249FC "a"
 *   insn=0x00000000002249FC string=0x000000000059145F "name"
 *   insn=0x0000000000224A08 string=0x0000000000224A0C "k"
 *   insn=0x0000000000224A24 string=0x0000000000224A28 " "
 *   insn=0x0000000000224A30 string=0x0000000000224A34 "t"
 *   insn=0x0000000000224A44 string=0x0000000000224A48 ""
 *   insn=0x0000000000224A54 string=0x0000000000224A58 "\t\t@"
 *   insn=0x0000000000224A5C string=0x0000000000224A60 ""
 *   insn=0x0000000000224A64 string=0x0000000000224A68 "h"
 *   insn=0x0000000000224A68 string=0x0000000000224A6C ""
 *   insn=0x0000000000224A6C string=0x0000000000224A70 "h"
 *   insn=0x0000000000224A84 string=0x00000000001F78E0 "0'"
 *   insn=0x0000000000224A9C string=0x0000000000224FB0 "\t&"
 *   insn=0x0000000000224AA8 string=0x0000000000224AAC "A)"
 *   insn=0x0000000000224AAC string=0x0000000000224FD4 "\t&"
 *   insn=0x0000000000224AB0 string=0x0000000000584070 "origin"
 *   insn=0x0000000000224ABC string=0x0000000000224AC0 ">"
 *   insn=0x0000000000224AEC string=0x0000000000224AF0 "t"
 *   insn=0x0000000000224B00 string=0x0000000000224B04 ""
 *   insn=0x0000000000224B0C string=0x0000000000224B10 "C"
 *   insn=0x0000000000224B10 string=0x0000000000224B14 "\t\t@"
 *   insn=0x0000000000224B18 string=0x0000000000224B1C ""
 *   insn=0x0000000000224B20 string=0x0000000000224B24 "h"
 *   insn=0x0000000000224B24 string=0x0000000000224B28 ""
 *   insn=0x0000000000224B28 string=0x0000000000224B2C "h"
 *   insn=0x0000000000224B3C string=0x0000000000224B40 "hK"
 *   insn=0x0000000000224B4C string=0x0000000000224B50 "A%"
 *   insn=0x0000000000224B50 string=0x0000000000224FF8 "\t&"
 *   insn=0x0000000000224B64 string=0x0000000000584077 "xRotation"
 *   insn=0x0000000000224B8C string=0x0000000000224B90 "f"
 *   insn=0x0000000000224B94 string=0x0000000000224B98 ""
 *   insn=0x0000000000224BA0 string=0x0000000000224BA4 "t"
 *   insn=0x0000000000224BB4 string=0x0000000000224BB8 ""
 *   insn=0x0000000000224BBC string=0x0000000000224BC0 "Z"
 *   insn=0x0000000000224BC0 string=0x0000000000224BC4 "C"
 *   insn=0x0000000000224BC4 string=0x0000000000224BC8 "\t\t@"
 *   insn=0x0000000000224BCC string=0x0000000000224BD0 ""
 *   insn=0x0000000000224BD4 string=0x0000000000224BD8 "h"
 *   insn=0x0000000000224BD8 string=0x0000000000224BDC ""
 *   insn=0x0000000000224BDC string=0x0000000000224BE0 "h"
 *   insn=0x0000000000224BF0 string=0x0000000000224BF4 ";K"
 *   insn=0x0000000000224C18 string=0x0000000000584081 "yRotation"
 *   insn=0x0000000000224C40 string=0x0000000000224C44 "9"
 *   insn=0x0000000000224C4C string=0x0000000000224C50 "t"
 *   insn=0x0000000000224C60 string=0x0000000000224C64 ""
 *   insn=0x0000000000224C68 string=0x0000000000224C6C "/"
 *   insn=0x0000000000224C6C string=0x0000000000224C70 "C"
 *   insn=0x0000000000224C70 string=0x0000000000224C74 "\t\t@"
 *   insn=0x0000000000224C78 string=0x0000000000224C7C ""
 *   insn=0x0000000000224C80 string=0x0000000000224C84 "h"
 *   insn=0x0000000000224C84 string=0x0000000000224C88 ""
 *   insn=0x0000000000224C88 string=0x0000000000224C8C "h"
 *   insn=0x0000000000224CBC string=0x0000000000224CC0 "a"
 *   insn=0x0000000000224CC4 string=0x000000000058408B "emissionFactor"
 *   insn=0x0000000000224CF8 string=0x0000000000224CFC "t"
 *   insn=0x0000000000224D0C string=0x0000000000224D10 ""
 *   insn=0x0000000000224D18 string=0x0000000000224D1C "C"
 *   insn=0x0000000000224D1C string=0x0000000000224D20 "\t\t@"
 *   insn=0x0000000000224D24 string=0x0000000000224D28 ""
 *   insn=0x0000000000224D2C string=0x0000000000224D30 "h"
 *   insn=0x0000000000224D30 string=0x0000000000224D34 ""
 *   insn=0x0000000000224D34 string=0x0000000000224D38 "h"
 *   insn=0x0000000000224D68 string=0x0000000000224D6C "A"
 *   insn=0x0000000000224D70 string=0x000000000058409A "mainColor"
 *   insn=0x0000000000224DA0 string=0x0000000000224DA4 "yG"
 *   insn=0x0000000000224DAC string=0x0000000000224DB0 "t"
 *   insn=0x0000000000224DC0 string=0x0000000000224DC4 ""
 *   insn=0x0000000000224DCC string=0x0000000000224DD0 "C"
 *   insn=0x0000000000224DD0 string=0x0000000000224DD4 "\t\t@"
 *   insn=0x0000000000224DD8 string=0x0000000000224DDC ""
 *   insn=0x0000000000224DE0 string=0x0000000000224DE4 "h"
 *   insn=0x0000000000224DE4 string=0x0000000000224DE8 ""
 *   insn=0x0000000000224DE8 string=0x0000000000224DEC "h"
 *   insn=0x0000000000224E0C string=0x0000000000224E10 "A"
 *   insn=0x0000000000224E24 string=0x00000000005840A4 "transparent"
 *   insn=0x0000000000224E30 string=0x0000000000224E34 "a"
 *   insn=0x0000000000224E60 string=0x0000000000224E64 "t"
 *   insn=0x0000000000224E74 string=0x0000000000224E78 ""
 *   insn=0x0000000000224E80 string=0x0000000000224E84 "C"
 *   insn=0x0000000000224E84 string=0x0000000000224E88 "\t\t@"
 *   insn=0x0000000000224E8C string=0x0000000000224E90 ""
 *   insn=0x0000000000224E94 string=0x0000000000224E98 "h"
 *   insn=0x0000000000224E98 string=0x0000000000224E9C ""
 *   insn=0x0000000000224E9C string=0x0000000000224EA0 "h"
 *   insn=0x0000000000224ED8 string=0x00000000005840B0 "diffuseColor"
 *   insn=0x0000000000224EE4 string=0x0000000000224EE8 "4"
 *   insn=0x0000000000224F0C string=0x0000000000224F10 "t"
 *   insn=0x0000000000224F20 string=0x0000000000224F24 ""
 *   insn=0x0000000000224F2C string=0x0000000000224F30 "C"
 *   insn=0x0000000000224F30 string=0x0000000000224F34 "\t\t@"
 *   insn=0x0000000000224F38 string=0x0000000000224F3C ""
 *   insn=0x0000000000224F40 string=0x0000000000224F44 "h"
 *   insn=0x0000000000224F44 string=0x0000000000224F48 ""
 *   insn=0x0000000000224F48 string=0x0000000000224F4C "h"
 *   insn=0x0000000000224F5C string=0x0000000000224F60 "`J"
 *   insn=0x0000000000224F7C string=0x0000000000224F80 "a"
 *   insn=0x0000000000224FB0 string=0x0000000000224FB4 ")=G"
 *   insn=0x0000000000224FB4 string=0x0000000000224FB8 "!"
 *   insn=0x0000000000224FBC string=0x0000000000224FC0 "\t"
 *   insn=0x0000000000224FBC string=0x00000000002251F0 "\t"
 *   insn=0x0000000000224FC0 string=0x0000000000224FC4 "*"
 *   insn=0x0000000000224FC4 string=0x0000000000224FC8 "\n"
 *   insn=0x0000000000224FD0 string=0x00000000002251FC "?"
 *   insn=0x0000000000224FD4 string=0x0000000000224FD8 ")=G"
 *   insn=0x0000000000224FD8 string=0x0000000000224FDC "!"
 *   insn=0x0000000000224FE0 string=0x0000000000224FE4 "\t"
 *   insn=0x0000000000224FE0 string=0x0000000000225210 "\t"
 *   insn=0x0000000000224FE4 string=0x0000000000224FE8 "*"
 *   insn=0x0000000000224FE8 string=0x0000000000224FEC "\n"
 *   insn=0x0000000000224FF4 string=0x000000000022521C "?"
 *   insn=0x0000000000224FF8 string=0x0000000000224FFC ")=G"
 *   insn=0x0000000000224FFC string=0x0000000000225000 "!"
 *   insn=0x0000000000225000 string=0x0000000000225004 "i"
 *   insn=0x0000000000225004 string=0x0000000000225008 "\t"
 *   insn=0x0000000000225004 string=0x0000000000225230 "\t"
 *   insn=0x0000000000225008 string=0x000000000022500C "*"
 *   insn=0x000000000022500C string=0x0000000000225010 "\n"
 *   insn=0x0000000000225018 string=0x000000000022523C "?"
 *   insn=0x000000000022501C string=0x0000000000225020 ")=G"
 *   insn=0x0000000000225020 string=0x0000000000225024 "!"
 *   insn=0x0000000000225024 string=0x0000000000225028 "I"
 *   insn=0x0000000000225028 string=0x000000000022502C "\t"
 *   insn=0x0000000000225028 string=0x0000000000225250 "\t"
 *   insn=0x000000000022502C string=0x0000000000225030 "*"
 *   insn=0x0000000000225030 string=0x0000000000225034 "\n"
 *   insn=0x000000000022503C string=0x000000000022525C "?"
 *   insn=0x0000000000225040 string=0x0000000000225044 ")=G"
 *   insn=0x0000000000225044 string=0x0000000000225048 "!"
 *   insn=0x0000000000225048 string=0x000000000022504C ")"
 *   insn=0x000000000022504C string=0x0000000000225050 "\t"
 *   insn=0x000000000022504C string=0x0000000000225270 "\t"
 *   insn=0x0000000000225050 string=0x0000000000225054 "*"
 *   insn=0x0000000000225054 string=0x0000000000225058 "\n"
 *   insn=0x0000000000225060 string=0x000000000022527C "?"
 *   insn=0x0000000000225064 string=0x0000000000225068 ")=G"
 *   insn=0x0000000000225068 string=0x000000000022506C "!"
 *   insn=0x000000000022506C string=0x0000000000225070 "\t"
 *   insn=0x0000000000225070 string=0x0000000000225074 "\t"
 *   insn=0x0000000000225070 string=0x0000000000225290 "\t"
 *   insn=0x0000000000225074 string=0x0000000000225078 "*"
 *   insn=0x0000000000225078 string=0x000000000022507C "\n"
 *   insn=0x0000000000225084 string=0x000000000022529C "?"
 *   insn=0x0000000000225088 string=0x000000000022508C ")=G"
 *   insn=0x000000000022508C string=0x0000000000225090 "!"
 *   insn=0x0000000000225094 string=0x0000000000225098 "\t"
 *   insn=0x0000000000225094 string=0x00000000002252B0 "\t"
 *   insn=0x0000000000225098 string=0x000000000022509C "*"
 *   insn=0x000000000022509C string=0x00000000002250A0 "\n"
 *   insn=0x00000000002250A8 string=0x00000000002252BC "?"
 *   insn=0x00000000002250AC string=0x00000000002250B0 ")=G"
 *   insn=0x00000000002250B0 string=0x00000000002250B4 "!"
 *   insn=0x00000000002250B8 string=0x00000000002250BC "\t"
 *   insn=0x00000000002250B8 string=0x00000000002252D0 "\t"
 *   insn=0x00000000002250BC string=0x00000000002250C0 "*"
 *   insn=0x00000000002250C0 string=0x00000000002250C4 "\n"
 *   insn=0x00000000002250CC string=0x00000000002252DC "?"
 *   insn=0x00000000002250D0 string=0x00000000002250D4 ")=G"
 *   insn=0x00000000002250D4 string=0x00000000002250D8 "!"
 *   insn=0x00000000002250DC string=0x00000000002250E0 "\t"
 *   insn=0x00000000002250DC string=0x00000000002252F0 "\t"
 *   insn=0x00000000002250E0 string=0x00000000002250E4 "*"
 *   insn=0x00000000002250E4 string=0x00000000002250E8 "\n"
 *   insn=0x00000000002250F0 string=0x00000000002252FC "?"
 *   insn=0x00000000002250F4 string=0x00000000002250F8 ")=G"
 *   insn=0x00000000002250F8 string=0x00000000002250FC "!"
 *   insn=0x0000000000225100 string=0x0000000000225104 "\t"
 *   insn=0x0000000000225100 string=0x0000000000225310 "\t"
 *   insn=0x0000000000225104 string=0x0000000000225108 "*"
 *   insn=0x0000000000225108 string=0x000000000022510C "\n"
 *   insn=0x0000000000225114 string=0x000000000022531C "?"
 *   insn=0x0000000000225118 string=0x000000000022511C ")=G"
 *   insn=0x000000000022511C string=0x0000000000225120 "!"
 *   insn=0x0000000000225120 string=0x0000000000225124 "i"
 *   insn=0x0000000000225124 string=0x0000000000225128 "\t"
 *   insn=0x0000000000225124 string=0x0000000000225330 "\t"
 *   insn=0x0000000000225128 string=0x000000000022512C "*"
 *   insn=0x000000000022512C string=0x0000000000225130 "\n"
 *   insn=0x0000000000225138 string=0x000000000022533C "?"
 *   insn=0x000000000022513C string=0x0000000000225140 ")=G"
 *   insn=0x0000000000225140 string=0x0000000000225144 "!"
 *   insn=0x0000000000225144 string=0x0000000000225148 "I"
 *   insn=0x0000000000225148 string=0x000000000022514C "\t"
 *   insn=0x0000000000225148 string=0x0000000000225350 "\t"
 *   insn=0x000000000022514C string=0x0000000000225150 "*"
 *   insn=0x0000000000225150 string=0x0000000000225154 "\n"
 *   insn=0x000000000022515C string=0x000000000022535C "?"
 *   insn=0x0000000000225160 string=0x0000000000225164 ")=G"
 *   insn=0x0000000000225164 string=0x0000000000225168 "!"
 *   insn=0x0000000000225168 string=0x000000000022516C ")"
 *   insn=0x000000000022516C string=0x0000000000225170 "\t"
 *   insn=0x000000000022516C string=0x0000000000225370 "\t"
 *   insn=0x0000000000225170 string=0x0000000000225174 "*"
 *   insn=0x0000000000225174 string=0x0000000000225178 "\n"
 *   insn=0x0000000000225180 string=0x000000000022537C "?"
 *   insn=0x0000000000225184 string=0x0000000000225188 ")=G"
 *   insn=0x0000000000225188 string=0x000000000022518C "!"
 *   insn=0x000000000022518C string=0x0000000000225190 "\t"
 *   insn=0x0000000000225190 string=0x0000000000225194 "\t"
 *   insn=0x0000000000225190 string=0x0000000000225390 "\t"
 *   insn=0x0000000000225194 string=0x0000000000225198 "*"
 *   insn=0x0000000000225198 string=0x000000000022519C "\n"
 *   insn=0x00000000002251A0 string=0x00000000002251A4 "~"
 *   insn=0x00000000002251A4 string=0x000000000022539C "?"
 *   insn=0x00000000002251A8 string=0x00000000002251AC ")=G"
 *   insn=0x00000000002251AC string=0x00000000002251B0 "!"
 *   insn=0x00000000002251B4 string=0x00000000002251B8 "\t"
 *   insn=0x00000000002251B4 string=0x00000000002253B0 "\t"
 *   insn=0x00000000002251B8 string=0x00000000002251BC "*"
 *   insn=0x00000000002251BC string=0x00000000002251C0 "\n"
 *   insn=0x00000000002251C4 string=0x00000000002251C8 "}"
 *   insn=0x00000000002251C8 string=0x00000000002253BC "?"
 *   insn=0x00000000002251CC string=0x00000000002251D0 ")=G"
 *   insn=0x00000000002251D0 string=0x00000000002251D4 "!"
 *   insn=0x00000000002251D8 string=0x00000000002251DC "\t"
 *   insn=0x00000000002251D8 string=0x00000000002253D0 "\t"
 *   insn=0x00000000002251DC string=0x00000000002251E0 "*"
 *   insn=0x00000000002251E0 string=0x00000000002251E4 "\n"
 *   insn=0x00000000002251E8 string=0x00000000002251EC "|"
 *   insn=0x00000000002251EC string=0x00000000002253DC "?"
 *   insn=0x00000000002251F0 string=0x00000000002251F4 "*"
 *   insn=0x00000000002251F4 string=0x00000000002251F8 "\n"
 *   insn=0x0000000000225204 string=0x0000000000225208 "g"
 *   insn=0x0000000000225208 string=0x000000000022520C "%"
 *   insn=0x0000000000225210 string=0x0000000000225214 "*"
 *   insn=0x0000000000225214 string=0x0000000000225218 "\n"
 *   insn=0x0000000000225224 string=0x0000000000225228 "_"
 *   insn=0x0000000000225228 string=0x000000000022522C "!"
 *   insn=0x0000000000225230 string=0x0000000000225234 "*"
 *   insn=0x0000000000225234 string=0x0000000000225238 "\n"
 *   insn=0x0000000000225244 string=0x0000000000225248 "W"
 *   insn=0x0000000000225248 string=0x000000000022524C "B"
 *   insn=0x0000000000225250 string=0x0000000000225254 "*"
 *   insn=0x0000000000225254 string=0x0000000000225258 "\n"
 *   insn=0x000000000022525C string=0x0000000000225260 ","
 *   insn=0x0000000000225264 string=0x0000000000225268 "O"
 *   insn=0x0000000000225268 string=0x000000000022526C ">"
 *   insn=0x0000000000225270 string=0x0000000000225274 "*"
 *   insn=0x0000000000225274 string=0x0000000000225278 "\n"
 *   insn=0x000000000022527C string=0x0000000000225280 "L"
 *   insn=0x0000000000225284 string=0x0000000000225288 "G"
 *   insn=0x0000000000225288 string=0x000000000022528C "_"
 *   insn=0x0000000000225290 string=0x0000000000225294 "*"
 *   insn=0x0000000000225294 string=0x0000000000225298 "\n"
 *   insn=0x00000000002252A4 string=0x00000000002252A8 "?"
 *   insn=0x00000000002252A8 string=0x00000000002252AC "["
 *   insn=0x00000000002252B0 string=0x00000000002252B4 "*"
 *   insn=0x00000000002252B4 string=0x00000000002252B8 "\n"
 *   insn=0x00000000002252C4 string=0x00000000002252C8 "7"
 *   insn=0x00000000002252C8 string=0x00000000002252CC "z"
 *   insn=0x00000000002252D0 string=0x00000000002252D4 "*"
 *   insn=0x00000000002252D4 string=0x00000000002252D8 "\n"
 *   insn=0x00000000002252DC string=0x00000000002252E0 ","
 *   insn=0x00000000002252E4 string=0x00000000002252E8 "/"
 *   insn=0x00000000002252E8 string=0x00000000002252EC "v"
 *   insn=0x00000000002252F0 string=0x00000000002252F4 "*"
 *   insn=0x00000000002252F4 string=0x00000000002252F8 "\n"
 *   insn=0x0000000000225304 string=0x0000000000225308 "'"
 *   insn=0x0000000000225310 string=0x0000000000225314 "*"
 *   insn=0x0000000000225314 string=0x0000000000225318 "\n"
 *   insn=0x0000000000225330 string=0x0000000000225334 "*"
 *   insn=0x0000000000225334 string=0x0000000000225338 "\n"
 *   insn=0x0000000000225350 string=0x0000000000225354 "*"
 *   insn=0x0000000000225354 string=0x0000000000225358 "\n"
 *   insn=0x000000000022535C string=0x0000000000225360 ","
 *   insn=0x0000000000225370 string=0x0000000000225374 "*"
 *   insn=0x0000000000225374 string=0x0000000000225378 "\n"
 *   insn=0x000000000022537C string=0x0000000000225380 "L"
 *   insn=0x0000000000225384 string=0x0000000000225388 ""
 *   insn=0x0000000000225390 string=0x0000000000225394 "*"
 *   insn=0x0000000000225394 string=0x0000000000225398 "\n"
 *   insn=0x00000000002253B0 string=0x00000000002253B4 "*"
 *   insn=0x00000000002253B4 string=0x00000000002253B8 "\n"
 *   insn=0x00000000002253D0 string=0x00000000002253D4 "*"
 *   insn=0x00000000002253D4 string=0x00000000002253D8 "\n"
 *   insn=0x00000000002253DC string=0x00000000002253E0 ","
 *   insn=0x00000000002253F0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002253F8 string=0x00000000002253FC "(a"
 *   insn=0x0000000000225408 string=0x000000000022540C "J=G"
 *   insn=0x000000000022540C string=0x0000000000225410 ")!"
 *   insn=0x0000000000225414 string=0x0000000000225418 "*"
 *   insn=0x0000000000225414 string=0x000000000022542C "*"
 *   insn=0x0000000000225418 string=0x000000000022541C "K"
 *   insn=0x000000000022541C string=0x0000000000225420 "+"
 *   insn=0x0000000000225428 string=0x0000000000225438 "_"
 *   insn=0x000000000022542C string=0x0000000000225430 "K"
 *   insn=0x0000000000225430 string=0x0000000000225434 "+"
 *   insn=0x000000000022545C string=0x0000000000225460 "`#"
 *   insn=0x0000000000225464 string=0x0000000000225468 ")=G"
 *   insn=0x0000000000225468 string=0x000000000022546C "!"
 *   insn=0x000000000022546C string=0x0000000000225470 ")#"
 *   insn=0x0000000000225470 string=0x0000000000225474 "\t"
 *   insn=0x0000000000225470 string=0x00000000002258D4 "\t"
 *   insn=0x0000000000225474 string=0x0000000000225478 "*"
 *   insn=0x0000000000225478 string=0x000000000022547C "\n"
 *   insn=0x0000000000225484 string=0x00000000002258BC "?"
 *   insn=0x0000000000225490 string=0x0000000000225494 "(a"
 *   insn=0x00000000002254A0 string=0x00000000002254A4 "J=G"
 *   insn=0x00000000002254A4 string=0x00000000002254A8 ")!"
 *   insn=0x00000000002254AC string=0x00000000002254B0 "*"
 *   insn=0x00000000002254AC string=0x00000000002254C4 "*"
 *   insn=0x00000000002254B0 string=0x00000000002254B4 "K"
 *   insn=0x00000000002254B4 string=0x00000000002254B8 "+"
 *   insn=0x00000000002254C0 string=0x00000000002254D0 "_"
 *   insn=0x00000000002254C4 string=0x00000000002254C8 "K"
 *   insn=0x00000000002254C8 string=0x00000000002254CC "+"
 *   insn=0x00000000002254FC string=0x0000000000225500 ")=G"
 *   insn=0x0000000000225500 string=0x0000000000225504 "!"
 *   insn=0x0000000000225504 string=0x0000000000225508 "i"
 *   insn=0x0000000000225508 string=0x000000000022550C "\t"
 *   insn=0x000000000022550C string=0x0000000000225510 "*"
 *   insn=0x0000000000225510 string=0x0000000000225514 "\n"
 *   insn=0x0000000000225528 string=0x000000000022552C "(a"
 *   insn=0x0000000000225538 string=0x000000000022553C "J=G"
 *   insn=0x000000000022553C string=0x0000000000225540 ")!"
 *   insn=0x0000000000225544 string=0x0000000000225548 "*"
 *   insn=0x0000000000225544 string=0x000000000022555C "*"
 *   insn=0x0000000000225548 string=0x000000000022554C "K"
 *   insn=0x000000000022554C string=0x0000000000225550 "+"
 *   insn=0x0000000000225558 string=0x0000000000225568 "_"
 *   insn=0x000000000022555C string=0x0000000000225560 "K"
 *   insn=0x0000000000225560 string=0x0000000000225564 "+"
 *   insn=0x0000000000225594 string=0x0000000000225598 ")=G"
 *   insn=0x0000000000225598 string=0x000000000022559C "!"
 *   insn=0x00000000002255A0 string=0x00000000002255A4 "\t"
 *   insn=0x00000000002255A4 string=0x00000000002255A8 "*"
 *   insn=0x00000000002255A8 string=0x00000000002255AC "\n"
 *   insn=0x00000000002255C0 string=0x00000000002255C4 "(a"
 *   insn=0x00000000002255D0 string=0x00000000002255D4 "J=G"
 *   insn=0x00000000002255D4 string=0x00000000002255D8 ")!"
 *   insn=0x00000000002255DC string=0x00000000002255E0 "*"
 *   insn=0x00000000002255DC string=0x00000000002255F4 "*"
 *   insn=0x00000000002255E0 string=0x00000000002255E4 "K"
 *   insn=0x00000000002255E4 string=0x00000000002255E8 "+"
 *   insn=0x00000000002255F0 string=0x0000000000225600 "_"
 *   insn=0x00000000002255F4 string=0x00000000002255F8 "K"
 *   insn=0x00000000002255F8 string=0x00000000002255FC "+"
 *   insn=0x000000000022560C string=0x0000000000225610 "e"
 *   insn=0x0000000000225624 string=0x0000000000225628 " "
 *   insn=0x000000000022562C string=0x0000000000225630 ")=G"
 *   insn=0x0000000000225630 string=0x0000000000225634 "!"
 *   insn=0x0000000000225638 string=0x000000000022563C "\t"
 *   insn=0x000000000022563C string=0x0000000000225640 "*"
 *   insn=0x0000000000225640 string=0x0000000000225644 "\n"
 *   insn=0x0000000000225658 string=0x000000000022565C "(a"
 *   insn=0x0000000000225668 string=0x000000000022566C "J=G"
 *   insn=0x000000000022566C string=0x0000000000225670 ")!"
 *   insn=0x0000000000225674 string=0x0000000000225678 "*"
 *   insn=0x0000000000225674 string=0x000000000022568C "*"
 *   insn=0x0000000000225678 string=0x000000000022567C "K"
 *   insn=0x000000000022567C string=0x0000000000225680 "+"
 *   insn=0x0000000000225688 string=0x0000000000225698 "_"
 *   insn=0x000000000022568C string=0x0000000000225690 "K"
 *   insn=0x0000000000225690 string=0x0000000000225694 "+"
 *   insn=0x00000000002256A4 string=0x00000000002256A8 "?"
 *   insn=0x00000000002256BC string=0x00000000002256C0 "`"
 *   insn=0x00000000002256C4 string=0x00000000002256C8 ")=G"
 *   insn=0x00000000002256C8 string=0x00000000002256CC "!"
 *   insn=0x00000000002256CC string=0x00000000002256D0 ")"
 *   insn=0x00000000002256D0 string=0x00000000002256D4 "\t"
 *   insn=0x00000000002256D4 string=0x00000000002256D8 "*"
 *   insn=0x00000000002256D8 string=0x00000000002256DC "\n"
 *   insn=0x00000000002256E0 string=0x00000000002256E4 "v"
 *   insn=0x00000000002256F0 string=0x00000000002256F4 "(a"
 *   insn=0x0000000000225700 string=0x0000000000225704 "J=G"
 *   insn=0x0000000000225704 string=0x0000000000225708 ")!"
 *   insn=0x000000000022570C string=0x0000000000225710 "*"
 *   insn=0x000000000022570C string=0x0000000000225724 "*"
 *   insn=0x0000000000225710 string=0x0000000000225714 "K"
 *   insn=0x0000000000225714 string=0x0000000000225718 "+"
 *   insn=0x0000000000225720 string=0x0000000000225730 "_"
 *   insn=0x0000000000225724 string=0x0000000000225728 "K"
 *   insn=0x0000000000225728 string=0x000000000022572C "+"
 *   insn=0x000000000022575C string=0x0000000000225760 ")=G"
 *   insn=0x0000000000225760 string=0x0000000000225764 "!"
 *   insn=0x0000000000225764 string=0x0000000000225768 "i"
 *   insn=0x0000000000225768 string=0x000000000022576C "\t"
 *   insn=0x000000000022576C string=0x0000000000225770 "*"
 *   insn=0x0000000000225770 string=0x0000000000225774 "\n"
 *   insn=0x0000000000225778 string=0x000000000022577C "P"
 *   insn=0x0000000000225788 string=0x000000000022578C "(a"
 *   insn=0x0000000000225798 string=0x000000000022579C "J=G"
 *   insn=0x000000000022579C string=0x00000000002257A0 ")!"
 *   insn=0x00000000002257A4 string=0x00000000002257A8 "*"
 *   insn=0x00000000002257A4 string=0x00000000002257BC "*"
 *   insn=0x00000000002257A8 string=0x00000000002257AC "K"
 *   insn=0x00000000002257AC string=0x00000000002257B0 "+"
 *   insn=0x00000000002257B8 string=0x00000000002257C8 "_"
 *   insn=0x00000000002257BC string=0x00000000002257C0 "K"
 *   insn=0x00000000002257C0 string=0x00000000002257C4 "+"
 *   insn=0x00000000002257F4 string=0x00000000002257F8 ")=G"
 *   insn=0x00000000002257F8 string=0x00000000002257FC "!"
 *   insn=0x0000000000225800 string=0x0000000000225804 "\t"
 *   insn=0x0000000000225804 string=0x0000000000225808 "*"
 *   insn=0x0000000000225808 string=0x000000000022580C "\n"
 *   insn=0x0000000000225810 string=0x0000000000225814 "*"
 *   insn=0x000000000022581C string=0x0000000000225820 "\n&"
 *   insn=0x0000000000225820 string=0x0000000000225824 "J"
 *   insn=0x0000000000225828 string=0x000000000022582C "(a"
 *   insn=0x0000000000225838 string=0x000000000022583C "J=G"
 *   insn=0x000000000022583C string=0x0000000000225840 ")!"
 *   insn=0x0000000000225844 string=0x0000000000225848 "*"
 *   insn=0x0000000000225844 string=0x000000000022585C "*"
 *   insn=0x0000000000225848 string=0x000000000022584C "K"
 *   insn=0x000000000022584C string=0x0000000000225850 "+"
 *   insn=0x0000000000225858 string=0x0000000000225868 "_"
 *   insn=0x000000000022585C string=0x0000000000225860 "K"
 *   insn=0x0000000000225860 string=0x0000000000225864 "+"
 *   insn=0x0000000000225884 string=0x0000000000225888 "\t&"
 *   insn=0x0000000000225888 string=0x000000000022588C ")"
 *   insn=0x000000000022589C string=0x00000000002258A0 ")=G"
 *   insn=0x00000000002258A0 string=0x00000000002258A4 "!"
 *   insn=0x00000000002258A4 string=0x00000000002258A8 "i"
 *   insn=0x00000000002258A8 string=0x00000000002258AC "\t"
 *   insn=0x00000000002258AC string=0x00000000002258B0 "*"
 *   insn=0x00000000002258B0 string=0x00000000002258B4 "\n"
 *   insn=0x00000000002258BC string=0x00000000002258C0 "l"
 *   insn=0x00000000002258D4 string=0x00000000002258D8 "*"
 *   insn=0x00000000002258D8 string=0x00000000002258DC "\n"
 *   insn=0x00000000002258DC string=0x00000000002258E0 "?"
 *   insn=0x00000000002258E0 string=0x00000000002258E4 ""
 *   insn=0x00000000002258F0 string=0x00000000001F5C30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ModelComponent::GetBindings(__int64 a1, __int64 a2)
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
  unsigned int *v45; // x8
  int v46; // w9
  unsigned int *v47; // x8
  int v48; // w9
  unsigned int *v49; // x8
  int v50; // w9
  unsigned int *v51; // x8
  int v52; // w9
  unsigned int *v53; // x8
  int v54; // w9
  unsigned int *v55; // x8
  int v56; // w9
  unsigned int *v57; // x8
  int v58; // w9
  __int64 v59; // [xsp+8h] [xbp-78h] BYREF
  int v60; // [xsp+18h] [xbp-68h]
  __int64 v61; // [xsp+20h] [xbp-60h] BYREF
  __int64 v62; // [xsp+28h] [xbp-58h]
  int v63; // [xsp+30h] [xbp-50h]
  __int64 v64; // [xsp+38h] [xbp-48h]

  v64 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)&v59, "name");
  v60 = 0;
  sub_56A528(&v61, &v59);
  v62 = 0x100000001LL;
  v63 = 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v3 = v60;
    sub_56A528(v3 + 8, &v61);
    *(_DWORD *)(v3 + 24) = v63;
    *(_QWORD *)(v3 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v4 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v27 = (unsigned int *)(v61 - 8);
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
      operator delete(v4);
  }
  v5 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v29 = (unsigned int *)(v59 - 8);
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
      operator delete(v5);
  }
  sub_566BB8((int)&v59, "origin");
  v60 = 1;
  sub_56A528(&v61, &v59);
  v63 = 0;
  v62 = 0x900000001LL;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v6 = v60;
    sub_56A528(v6 + 8, &v61);
    *(_DWORD *)(v6 + 24) = v63;
    *(_QWORD *)(v6 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v7 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v31 = (unsigned int *)(v61 - 8);
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
      operator delete(v7);
  }
  v8 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v33 = (unsigned int *)(v59 - 8);
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
      operator delete(v8);
  }
  sub_566BB8((int)&v59, "xRotation");
  v60 = 2;
  sub_56A528(&v61, &v59);
  v63 = 0;
  v62 = 0x500000001LL;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v9 = v60;
    sub_56A528(v9 + 8, &v61);
    *(_DWORD *)(v9 + 24) = v63;
    *(_QWORD *)(v9 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v10 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v35 = (unsigned int *)(v61 - 8);
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
      operator delete(v10);
  }
  v11 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v37 = (unsigned int *)(v59 - 8);
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
      operator delete(v11);
  }
  sub_566BB8((int)&v59, "yRotation");
  v60 = 3;
  sub_56A528(&v61, &v59);
  v62 = 0x500000001LL;
  v63 = 0;
  v12 = *(_QWORD *)(a2 + 8);
  if ( v12 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v12 = v60;
    sub_56A528(v12 + 8, &v61);
    *(_DWORD *)(v12 + 24) = v63;
    *(_QWORD *)(v12 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v13 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v39 = (unsigned int *)(v61 - 8);
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
      operator delete(v13);
  }
  v14 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v41 = (unsigned int *)(v59 - 8);
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
      operator delete(v14);
  }
  sub_566BB8((int)&v59, "emissionFactor");
  v60 = 4;
  sub_56A528(&v61, &v59);
  v62 = 0x500000001LL;
  v63 = 0;
  v15 = *(_QWORD *)(a2 + 8);
  if ( v15 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v15 = v60;
    sub_56A528(v15 + 8, &v61);
    *(_DWORD *)(v15 + 24) = v63;
    *(_QWORD *)(v15 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v16 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v43 = (unsigned int *)(v61 - 8);
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
      operator delete(v16);
  }
  v17 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v45 = (unsigned int *)(v59 - 8);
    if ( &pthread_create )
    {
      do
        v46 = __ldaxr(v45);
      while ( __stlxr(v46 - 1, v45) );
    }
    else
    {
      v46 = (*v45)--;
    }
    if ( v46 <= 0 )
      operator delete(v17);
  }
  sub_566BB8((int)&v59, "mainColor");
  v60 = 5;
  sub_56A528(&v61, &v59);
  v63 = 0;
  v62 = 0x700000001LL;
  v18 = *(_QWORD *)(a2 + 8);
  if ( v18 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v18 = v60;
    sub_56A528(v18 + 8, &v61);
    *(_DWORD *)(v18 + 24) = v63;
    *(_QWORD *)(v18 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v19 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v47 = (unsigned int *)(v61 - 8);
    if ( &pthread_create )
    {
      do
        v48 = __ldaxr(v47);
      while ( __stlxr(v48 - 1, v47) );
    }
    else
    {
      v48 = (*v47)--;
    }
    if ( v48 <= 0 )
      operator delete(v19);
  }
  v20 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v49 = (unsigned int *)(v59 - 8);
    if ( &pthread_create )
    {
      do
        v50 = __ldaxr(v49);
      while ( __stlxr(v50 - 1, v49) );
    }
    else
    {
      v50 = (*v49)--;
    }
    if ( v50 <= 0 )
      operator delete(v20);
  }
  sub_566BB8((int)&v59, "transparent");
  v60 = 6;
  sub_56A528(&v61, &v59);
  v63 = 0;
  v62 = 0x400000001LL;
  v21 = *(_QWORD *)(a2 + 8);
  if ( v21 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v21 = v60;
    sub_56A528(v21 + 8, &v61);
    *(_DWORD *)(v21 + 24) = v63;
    *(_QWORD *)(v21 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v22 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v51 = (unsigned int *)(v61 - 8);
    if ( &pthread_create )
    {
      do
        v52 = __ldaxr(v51);
      while ( __stlxr(v52 - 1, v51) );
    }
    else
    {
      v52 = (*v51)--;
    }
    if ( v52 <= 0 )
      operator delete(v22);
  }
  v23 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v53 = (unsigned int *)(v59 - 8);
    if ( &pthread_create )
    {
      do
        v54 = __ldaxr(v53);
      while ( __stlxr(v54 - 1, v53) );
    }
    else
    {
      v54 = (*v53)--;
    }
    if ( v54 <= 0 )
      operator delete(v23);
  }
  sub_566BB8((int)&v59, "diffuseColor");
  v60 = 7;
  sub_56A528(&v61, &v59);
  v62 = 0x700000001LL;
  v63 = 0;
  v24 = *(_QWORD *)(a2 + 8);
  if ( v24 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v24 = v60;
    sub_56A528(v24 + 8, &v61);
    *(_DWORD *)(v24 + 24) = v63;
    *(_QWORD *)(v24 + 16) = v62;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v25 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v55 = (unsigned int *)(v61 - 8);
    if ( &pthread_create )
    {
      do
        v56 = __ldaxr(v55);
      while ( __stlxr(v56 - 1, v55) );
    }
    else
    {
      v56 = (*v55)--;
    }
    if ( v56 <= 0 )
      operator delete(v25);
  }
  v26 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    v57 = (unsigned int *)(v59 - 8);
    if ( &pthread_create )
    {
      do
        v58 = __ldaxr(v57);
      while ( __stlxr(v58 - 1, v57) );
    }
    else
    {
      v58 = (*v57)--;
    }
    if ( v58 <= 0 )
      operator delete(v26);
  }
}


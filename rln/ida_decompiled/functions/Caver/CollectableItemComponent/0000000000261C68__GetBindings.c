/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000261C68
 * Mangled: _ZN5Caver24CollectableItemComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::CollectableItemComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001FEC70  Caver::CollectableItemComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000261B10  Caver::CollectableItemComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001FEC70  Caver::CollectableItemComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 356
 *   insn=0x0000000000261C80 string=0x0000000000261C84 "W"
 *   insn=0x0000000000261C94 string=0x00000000001FB3B0 "0'"
 *   insn=0x0000000000261C98 string=0x0000000000583F74 "type"
 *   insn=0x0000000000261CC0 string=0x0000000000261CC4 ""
 *   insn=0x0000000000261CC4 string=0x0000000000261CC8 ""
 *   insn=0x0000000000261CD4 string=0x0000000000261CD8 "t"
 *   insn=0x0000000000261CE8 string=0x0000000000261CEC ""
 *   insn=0x0000000000261CF0 string=0x0000000000261CF4 """
 *   insn=0x0000000000261CF8 string=0x0000000000261CFC "\t\t@"
 *   insn=0x0000000000261D00 string=0x0000000000261D04 ""
 *   insn=0x0000000000261D08 string=0x0000000000261D0C "h"
 *   insn=0x0000000000261D0C string=0x0000000000261D10 ""
 *   insn=0x0000000000261D10 string=0x0000000000261D14 "h"
 *   insn=0x0000000000261D28 string=0x00000000001F78E0 "0'"
 *   insn=0x0000000000261D2C string=0x0000000000261D30 "6$"
 *   insn=0x0000000000261D40 string=0x00000000002620F0 "\t$"
 *   insn=0x0000000000261D4C string=0x0000000000261D50 "!"
 *   insn=0x0000000000261D50 string=0x0000000000262114 "\t$"
 *   insn=0x0000000000261D54 string=0x000000000059AD45 "value"
 *   insn=0x0000000000261D88 string=0x0000000000261D8C "t"
 *   insn=0x0000000000261D9C string=0x0000000000261DA0 ""
 *   insn=0x0000000000261DA8 string=0x0000000000261DAC "C"
 *   insn=0x0000000000261DAC string=0x0000000000261DB0 "\t\t@"
 *   insn=0x0000000000261DB4 string=0x0000000000261DB8 ""
 *   insn=0x0000000000261DBC string=0x0000000000261DC0 "h"
 *   insn=0x0000000000261DC0 string=0x0000000000261DC4 ""
 *   insn=0x0000000000261DC4 string=0x0000000000261DC8 "h"
 *   insn=0x0000000000261DE8 string=0x0000000000261DEC "a"
 *   insn=0x0000000000261DEC string=0x0000000000262138 "\t$"
 *   insn=0x0000000000261DFC string=0x0000000000261E00 "!"
 *   insn=0x0000000000261DFC string=0x000000000026215C "\t$"
 *   insn=0x0000000000261E00 string=0x0000000000587D32 "itemName"
 *   insn=0x0000000000261E0C string=0x0000000000261E10 "j"
 *   insn=0x0000000000261E2C string=0x0000000000261E30 "("
 *   insn=0x0000000000261E38 string=0x0000000000261E3C "t"
 *   insn=0x0000000000261E4C string=0x0000000000261E50 ""
 *   insn=0x0000000000261E58 string=0x0000000000261E5C "C"
 *   insn=0x0000000000261E5C string=0x0000000000261E60 "\t\t@"
 *   insn=0x0000000000261E64 string=0x0000000000261E68 ""
 *   insn=0x0000000000261E6C string=0x0000000000261E70 "h"
 *   insn=0x0000000000261E70 string=0x0000000000261E74 ""
 *   insn=0x0000000000261E74 string=0x0000000000261E78 "h"
 *   insn=0x0000000000261E98 string=0x0000000000261E9C "!"
 *   insn=0x0000000000261E9C string=0x0000000000262180 "\t$"
 *   insn=0x0000000000261EAC string=0x0000000000261EB0 "!"
 *   insn=0x0000000000261EAC string=0x00000000002621A4 "\t$"
 *   insn=0x0000000000261EB0 string=0x0000000000587D3B "identifier"
 *   insn=0x0000000000261EBC string=0x0000000000261EC0 ">"
 *   insn=0x0000000000261EE4 string=0x0000000000261EE8 "t"
 *   insn=0x0000000000261EF8 string=0x0000000000261EFC ""
 *   insn=0x0000000000261F04 string=0x0000000000261F08 "C"
 *   insn=0x0000000000261F08 string=0x0000000000261F0C "\t\t@"
 *   insn=0x0000000000261F10 string=0x0000000000261F14 ""
 *   insn=0x0000000000261F18 string=0x0000000000261F1C "h"
 *   insn=0x0000000000261F1C string=0x0000000000261F20 ""
 *   insn=0x0000000000261F20 string=0x0000000000261F24 "h"
 *   insn=0x0000000000261F34 string=0x0000000000261F38 "jV"
 *   insn=0x0000000000261F48 string=0x00000000002621C8 "\t$"
 *   insn=0x0000000000261F58 string=0x0000000000261F5C "!"
 *   insn=0x0000000000261F58 string=0x00000000002621EC "\t$"
 *   insn=0x0000000000261F5C string=0x0000000000587D46 "requiresPickup"
 *   insn=0x0000000000261F84 string=0x0000000000261F88 "h!"
 *   insn=0x0000000000261F88 string=0x0000000000261F8C ""
 *   insn=0x0000000000261F98 string=0x0000000000261F9C "t"
 *   insn=0x0000000000261FAC string=0x0000000000261FB0 ""
 *   insn=0x0000000000261FB4 string=0x0000000000261FB8 "\!"
 *   insn=0x0000000000261FB8 string=0x0000000000261FBC "C"
 *   insn=0x0000000000261FBC string=0x0000000000261FC0 "\t\t@"
 *   insn=0x0000000000261FC4 string=0x0000000000261FC8 ""
 *   insn=0x0000000000261FCC string=0x0000000000261FD0 "h"
 *   insn=0x0000000000261FD0 string=0x0000000000261FD4 ""
 *   insn=0x0000000000261FD4 string=0x0000000000261FD8 "h"
 *   insn=0x0000000000261FE8 string=0x0000000000261FEC "=V"
 *   insn=0x0000000000261FFC string=0x0000000000262210 "\t$"
 *   insn=0x0000000000262008 string=0x000000000026200C "A"
 *   insn=0x000000000026200C string=0x0000000000262010 "!"
 *   insn=0x000000000026200C string=0x0000000000262234 "\t$"
 *   insn=0x0000000000262010 string=0x0000000000587D55 "onCollect"
 *   insn=0x0000000000262038 string=0x000000000026203C ";!"
 *   insn=0x000000000026203C string=0x0000000000262040 ""
 *   insn=0x000000000026204C string=0x0000000000262050 "t"
 *   insn=0x0000000000262060 string=0x0000000000262064 ""
 *   insn=0x0000000000262068 string=0x000000000026206C "/!"
 *   insn=0x000000000026206C string=0x0000000000262070 "C"
 *   insn=0x0000000000262070 string=0x0000000000262074 "\t\t@"
 *   insn=0x0000000000262078 string=0x000000000026207C ""
 *   insn=0x0000000000262080 string=0x0000000000262084 "h"
 *   insn=0x0000000000262084 string=0x0000000000262088 ""
 *   insn=0x0000000000262088 string=0x000000000026208C "h"
 *   insn=0x00000000002620AC string=0x00000000002620B0 "A"
 *   insn=0x00000000002620B0 string=0x0000000000262258 "\t$"
 *   insn=0x00000000002620C0 string=0x000000000026227C "\t$"
 *   insn=0x00000000002620F0 string=0x00000000002620F4 ")=G"
 *   insn=0x00000000002620F4 string=0x00000000002620F8 "!"
 *   insn=0x00000000002620F8 string=0x00000000002620FC ")"
 *   insn=0x00000000002620FC string=0x0000000000262100 "\t"
 *   insn=0x00000000002620FC string=0x00000000002622A0 "\t"
 *   insn=0x0000000000262100 string=0x0000000000262104 "*"
 *   insn=0x0000000000262104 string=0x0000000000262108 "\n"
 *   insn=0x000000000026210C string=0x0000000000262110 "g"
 *   insn=0x0000000000262110 string=0x00000000002622AC "?"
 *   insn=0x0000000000262114 string=0x0000000000262118 ")=G"
 *   insn=0x0000000000262118 string=0x000000000026211C "!"
 *   insn=0x000000000026211C string=0x0000000000262120 "\t"
 *   insn=0x0000000000262120 string=0x0000000000262124 "\t"
 *   insn=0x0000000000262120 string=0x00000000002622C0 "\t"
 *   insn=0x0000000000262124 string=0x0000000000262128 "*"
 *   insn=0x0000000000262128 string=0x000000000026212C "\n"
 *   insn=0x0000000000262130 string=0x0000000000262134 "f"
 *   insn=0x0000000000262134 string=0x00000000002622CC "?"
 *   insn=0x0000000000262138 string=0x000000000026213C ")=G"
 *   insn=0x000000000026213C string=0x0000000000262140 "!"
 *   insn=0x0000000000262144 string=0x0000000000262148 "\t"
 *   insn=0x0000000000262144 string=0x00000000002622E0 "\t"
 *   insn=0x0000000000262148 string=0x000000000026214C "*"
 *   insn=0x000000000026214C string=0x0000000000262150 "\n"
 *   insn=0x0000000000262154 string=0x0000000000262158 "e"
 *   insn=0x0000000000262158 string=0x00000000002622EC "?"
 *   insn=0x000000000026215C string=0x0000000000262160 ")=G"
 *   insn=0x0000000000262160 string=0x0000000000262164 "!"
 *   insn=0x0000000000262168 string=0x000000000026216C "\t"
 *   insn=0x0000000000262168 string=0x0000000000262300 "\t"
 *   insn=0x000000000026216C string=0x0000000000262170 "*"
 *   insn=0x0000000000262170 string=0x0000000000262174 "\n"
 *   insn=0x0000000000262178 string=0x000000000026217C "d"
 *   insn=0x000000000026217C string=0x000000000026230C "?"
 *   insn=0x0000000000262180 string=0x0000000000262184 ")=G"
 *   insn=0x0000000000262184 string=0x0000000000262188 "!"
 *   insn=0x000000000026218C string=0x0000000000262190 "\t"
 *   insn=0x000000000026218C string=0x0000000000262320 "\t"
 *   insn=0x0000000000262190 string=0x0000000000262194 "*"
 *   insn=0x0000000000262194 string=0x0000000000262198 "\n"
 *   insn=0x000000000026219C string=0x00000000002621A0 "c"
 *   insn=0x00000000002621A0 string=0x000000000026232C "?"
 *   insn=0x00000000002621A4 string=0x00000000002621A8 ")=G"
 *   insn=0x00000000002621A8 string=0x00000000002621AC "!"
 *   insn=0x00000000002621B0 string=0x00000000002621B4 "\t"
 *   insn=0x00000000002621B0 string=0x0000000000262340 "\t"
 *   insn=0x00000000002621B4 string=0x00000000002621B8 "*"
 *   insn=0x00000000002621B8 string=0x00000000002621BC "\n"
 *   insn=0x00000000002621C0 string=0x00000000002621C4 "b"
 *   insn=0x00000000002621C4 string=0x000000000026234C "?"
 *   insn=0x00000000002621C8 string=0x00000000002621CC ")=G"
 *   insn=0x00000000002621CC string=0x00000000002621D0 "!"
 *   insn=0x00000000002621D0 string=0x00000000002621D4 "i"
 *   insn=0x00000000002621D4 string=0x00000000002621D8 "\t"
 *   insn=0x00000000002621D4 string=0x0000000000262360 "\t"
 *   insn=0x00000000002621D8 string=0x00000000002621DC "*"
 *   insn=0x00000000002621DC string=0x00000000002621E0 "\n"
 *   insn=0x00000000002621E4 string=0x00000000002621E8 "a"
 *   insn=0x00000000002621E8 string=0x000000000026236C "?"
 *   insn=0x00000000002621EC string=0x00000000002621F0 ")=G"
 *   insn=0x00000000002621F0 string=0x00000000002621F4 "!"
 *   insn=0x00000000002621F4 string=0x00000000002621F8 "I"
 *   insn=0x00000000002621F8 string=0x00000000002621FC "\t"
 *   insn=0x00000000002621F8 string=0x0000000000262380 "\t"
 *   insn=0x00000000002621FC string=0x0000000000262200 "*"
 *   insn=0x0000000000262200 string=0x0000000000262204 "\n"
 *   insn=0x0000000000262208 string=0x000000000026220C "`"
 *   insn=0x000000000026220C string=0x000000000026238C "?"
 *   insn=0x0000000000262210 string=0x0000000000262214 ")=G"
 *   insn=0x0000000000262214 string=0x0000000000262218 "!"
 *   insn=0x0000000000262218 string=0x000000000026221C ")"
 *   insn=0x000000000026221C string=0x0000000000262220 "\t"
 *   insn=0x000000000026221C string=0x00000000002623A0 "\t"
 *   insn=0x0000000000262220 string=0x0000000000262224 "*"
 *   insn=0x0000000000262224 string=0x0000000000262228 "\n"
 *   insn=0x000000000026222C string=0x0000000000262230 "_"
 *   insn=0x0000000000262230 string=0x00000000002623AC "?"
 *   insn=0x0000000000262234 string=0x0000000000262238 ")=G"
 *   insn=0x0000000000262238 string=0x000000000026223C "!"
 *   insn=0x000000000026223C string=0x0000000000262240 "\t"
 *   insn=0x0000000000262240 string=0x0000000000262244 "\t"
 *   insn=0x0000000000262240 string=0x00000000002623C0 "\t"
 *   insn=0x0000000000262244 string=0x0000000000262248 "*"
 *   insn=0x0000000000262248 string=0x000000000026224C "\n"
 *   insn=0x0000000000262250 string=0x0000000000262254 "^"
 *   insn=0x0000000000262254 string=0x00000000002623CC "?"
 *   insn=0x0000000000262258 string=0x000000000026225C ")=G"
 *   insn=0x000000000026225C string=0x0000000000262260 "!"
 *   insn=0x0000000000262264 string=0x0000000000262268 "\t"
 *   insn=0x0000000000262264 string=0x00000000002623E0 "\t"
 *   insn=0x0000000000262268 string=0x000000000026226C "*"
 *   insn=0x000000000026226C string=0x0000000000262270 "\n"
 *   insn=0x0000000000262274 string=0x0000000000262278 "]"
 *   insn=0x0000000000262278 string=0x00000000002623EC "?"
 *   insn=0x000000000026227C string=0x0000000000262280 ")=G"
 *   insn=0x0000000000262280 string=0x0000000000262284 "!"
 *   insn=0x0000000000262288 string=0x000000000026228C "\t"
 *   insn=0x0000000000262288 string=0x0000000000262400 "\t"
 *   insn=0x000000000026228C string=0x0000000000262290 "*"
 *   insn=0x0000000000262290 string=0x0000000000262294 "\n"
 *   insn=0x0000000000262298 string=0x000000000026229C "\"
 *   insn=0x000000000026229C string=0x000000000026240C "?"
 *   insn=0x00000000002622A0 string=0x00000000002622A4 "*"
 *   insn=0x00000000002622A4 string=0x00000000002622A8 "\n"
 *   insn=0x00000000002622B4 string=0x00000000002622B8 "; "
 *   insn=0x00000000002622C0 string=0x00000000002622C4 "*"
 *   insn=0x00000000002622C4 string=0x00000000002622C8 "\n"
 *   insn=0x00000000002622CC string=0x00000000002622D0 ","
 *   insn=0x00000000002622D4 string=0x00000000002622D8 "3 "
 *   insn=0x00000000002622E0 string=0x00000000002622E4 "*"
 *   insn=0x00000000002622E4 string=0x00000000002622E8 "\n"
 *   insn=0x00000000002622F4 string=0x00000000002622F8 "+ "
 *   insn=0x0000000000262300 string=0x0000000000262304 "*"
 *   insn=0x0000000000262304 string=0x0000000000262308 "\n"
 *   insn=0x0000000000262314 string=0x0000000000262318 "# "
 *   insn=0x0000000000262320 string=0x0000000000262324 "*"
 *   insn=0x0000000000262324 string=0x0000000000262328 "\n"
 *   insn=0x0000000000262334 string=0x0000000000262338 " "
 *   insn=0x0000000000262340 string=0x0000000000262344 "*"
 *   insn=0x0000000000262344 string=0x0000000000262348 "\n"
 *   insn=0x0000000000262360 string=0x0000000000262364 "*"
 *   insn=0x0000000000262364 string=0x0000000000262368 "\n"
 *   insn=0x0000000000262374 string=0x0000000000262378 " "
 *   insn=0x0000000000262380 string=0x0000000000262384 "*"
 *   insn=0x0000000000262384 string=0x0000000000262388 "\n"
 *   insn=0x000000000026238C string=0x0000000000262390 "l"
 *   insn=0x00000000002623A0 string=0x00000000002623A4 "*"
 *   insn=0x00000000002623A4 string=0x00000000002623A8 "\n"
 *   insn=0x00000000002623C0 string=0x00000000002623C4 "*"
 *   insn=0x00000000002623C4 string=0x00000000002623C8 "\n"
 *   insn=0x00000000002623D8 string=0x00000000002623DC ""
 *   insn=0x00000000002623E0 string=0x00000000002623E4 "*"
 *   insn=0x00000000002623E4 string=0x00000000002623E8 "\n"
 *   insn=0x00000000002623EC string=0x00000000002623F0 ","
 *   insn=0x00000000002623F8 string=0x00000000002623FC "."
 *   insn=0x0000000000262400 string=0x0000000000262404 "*"
 *   insn=0x0000000000262404 string=0x0000000000262408 "\n"
 *   insn=0x0000000000262418 string=0x000000000026241C "*"
 *   insn=0x0000000000262420 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000262428 string=0x000000000026242C "(a"
 *   insn=0x0000000000262434 string=0x0000000000262438 "\n$"
 *   insn=0x0000000000262438 string=0x000000000026243C "J=G"
 *   insn=0x000000000026243C string=0x0000000000262440 ")!"
 *   insn=0x0000000000262444 string=0x0000000000262448 "*"
 *   insn=0x0000000000262444 string=0x000000000026245C "*"
 *   insn=0x0000000000262448 string=0x000000000026244C "K"
 *   insn=0x000000000026244C string=0x0000000000262450 "+"
 *   insn=0x0000000000262458 string=0x0000000000262468 "_"
 *   insn=0x000000000026245C string=0x0000000000262460 "K"
 *   insn=0x0000000000262460 string=0x0000000000262464 "+"
 *   insn=0x0000000000262490 string=0x0000000000262494 "\t$"
 *   insn=0x0000000000262494 string=0x0000000000262498 ")=G"
 *   insn=0x0000000000262498 string=0x000000000026249C "!"
 *   insn=0x00000000002624A0 string=0x00000000002624A4 "\t"
 *   insn=0x00000000002624A0 string=0x00000000002627D4 "\t"
 *   insn=0x00000000002624A4 string=0x00000000002624A8 "*"
 *   insn=0x00000000002624A8 string=0x00000000002624AC "\n"
 *   insn=0x00000000002624B4 string=0x00000000002627BC "?"
 *   insn=0x00000000002624C0 string=0x00000000002624C4 "(a"
 *   insn=0x00000000002624CC string=0x00000000002624D0 "\n$"
 *   insn=0x00000000002624D0 string=0x00000000002624D4 "J=G"
 *   insn=0x00000000002624D4 string=0x00000000002624D8 ")!"
 *   insn=0x00000000002624DC string=0x00000000002624E0 "*"
 *   insn=0x00000000002624DC string=0x00000000002624F4 "*"
 *   insn=0x00000000002624E0 string=0x00000000002624E4 "K"
 *   insn=0x00000000002624E4 string=0x00000000002624E8 "+"
 *   insn=0x00000000002624F0 string=0x0000000000262500 "_"
 *   insn=0x00000000002624F4 string=0x00000000002624F8 "K"
 *   insn=0x00000000002624F8 string=0x00000000002624FC "+"
 *   insn=0x0000000000262524 string=0x0000000000262528 " "
 *   insn=0x0000000000262528 string=0x000000000026252C "\t$"
 *   insn=0x000000000026252C string=0x0000000000262530 ")=G"
 *   insn=0x0000000000262530 string=0x0000000000262534 "!"
 *   insn=0x0000000000262538 string=0x000000000026253C "\t"
 *   insn=0x000000000026253C string=0x0000000000262540 "*"
 *   insn=0x0000000000262540 string=0x0000000000262544 "\n"
 *   insn=0x0000000000262558 string=0x000000000026255C "(a"
 *   insn=0x0000000000262564 string=0x0000000000262568 "\n$"
 *   insn=0x0000000000262568 string=0x000000000026256C "J=G"
 *   insn=0x000000000026256C string=0x0000000000262570 ")!"
 *   insn=0x0000000000262574 string=0x0000000000262578 "*"
 *   insn=0x0000000000262574 string=0x000000000026258C "*"
 *   insn=0x0000000000262578 string=0x000000000026257C "K"
 *   insn=0x000000000026257C string=0x0000000000262580 "+"
 *   insn=0x0000000000262588 string=0x0000000000262598 "_"
 *   insn=0x000000000026258C string=0x0000000000262590 "K"
 *   insn=0x0000000000262590 string=0x0000000000262594 "+"
 *   insn=0x00000000002625BC string=0x00000000002625C0 "`"
 *   insn=0x00000000002625C0 string=0x00000000002625C4 "\t$"
 *   insn=0x00000000002625C4 string=0x00000000002625C8 ")=G"
 *   insn=0x00000000002625C8 string=0x00000000002625CC "!"
 *   insn=0x00000000002625CC string=0x00000000002625D0 ")"
 *   insn=0x00000000002625D0 string=0x00000000002625D4 "\t"
 *   insn=0x00000000002625D4 string=0x00000000002625D8 "*"
 *   insn=0x00000000002625D8 string=0x00000000002625DC "\n"
 *   insn=0x00000000002625E0 string=0x00000000002625E4 "v"
 *   insn=0x00000000002625F0 string=0x00000000002625F4 "(a"
 *   insn=0x00000000002625FC string=0x0000000000262600 "\n$"
 *   insn=0x0000000000262600 string=0x0000000000262604 "J=G"
 *   insn=0x0000000000262604 string=0x0000000000262608 ")!"
 *   insn=0x000000000026260C string=0x0000000000262610 "*"
 *   insn=0x000000000026260C string=0x0000000000262624 "*"
 *   insn=0x0000000000262610 string=0x0000000000262614 "K"
 *   insn=0x0000000000262614 string=0x0000000000262618 "+"
 *   insn=0x0000000000262620 string=0x0000000000262630 "_"
 *   insn=0x0000000000262624 string=0x0000000000262628 "K"
 *   insn=0x0000000000262628 string=0x000000000026262C "+"
 *   insn=0x000000000026263C string=0x0000000000262640 "Y"
 *   insn=0x0000000000262658 string=0x000000000026265C "\t$"
 *   insn=0x000000000026265C string=0x0000000000262660 ")=G"
 *   insn=0x0000000000262660 string=0x0000000000262664 "!"
 *   insn=0x0000000000262664 string=0x0000000000262668 "i"
 *   insn=0x0000000000262668 string=0x000000000026266C "\t"
 *   insn=0x000000000026266C string=0x0000000000262670 "*"
 *   insn=0x0000000000262670 string=0x0000000000262674 "\n"
 *   insn=0x0000000000262678 string=0x000000000026267C "P"
 *   insn=0x0000000000262688 string=0x000000000026268C "(a"
 *   insn=0x0000000000262694 string=0x0000000000262698 "\n$"
 *   insn=0x0000000000262698 string=0x000000000026269C "J=G"
 *   insn=0x000000000026269C string=0x00000000002626A0 ")!"
 *   insn=0x00000000002626A4 string=0x00000000002626A8 "*"
 *   insn=0x00000000002626A4 string=0x00000000002626BC "*"
 *   insn=0x00000000002626A8 string=0x00000000002626AC "K"
 *   insn=0x00000000002626AC string=0x00000000002626B0 "+"
 *   insn=0x00000000002626B8 string=0x00000000002626C8 "_"
 *   insn=0x00000000002626BC string=0x00000000002626C0 "K"
 *   insn=0x00000000002626C0 string=0x00000000002626C4 "+"
 *   insn=0x00000000002626D4 string=0x00000000002626D8 "3"
 *   insn=0x00000000002626F0 string=0x00000000002626F4 "\t$"
 *   insn=0x00000000002626F4 string=0x00000000002626F8 ")=G"
 *   insn=0x00000000002626F8 string=0x00000000002626FC "!"
 *   insn=0x0000000000262700 string=0x0000000000262704 "\t"
 *   insn=0x0000000000262704 string=0x0000000000262708 "*"
 *   insn=0x0000000000262708 string=0x000000000026270C "\n"
 *   insn=0x0000000000262710 string=0x0000000000262714 "*"
 *   insn=0x000000000026271C string=0x0000000000262720 "\n$"
 *   insn=0x0000000000262720 string=0x0000000000262724 "J"
 *   insn=0x0000000000262728 string=0x000000000026272C "(a"
 *   insn=0x0000000000262734 string=0x0000000000262738 "\n$"
 *   insn=0x0000000000262738 string=0x000000000026273C "J=G"
 *   insn=0x000000000026273C string=0x0000000000262740 ")!"
 *   insn=0x0000000000262744 string=0x0000000000262748 "*"
 *   insn=0x0000000000262744 string=0x000000000026275C "*"
 *   insn=0x0000000000262748 string=0x000000000026274C "K"
 *   insn=0x000000000026274C string=0x0000000000262750 "+"
 *   insn=0x0000000000262758 string=0x0000000000262768 "_"
 *   insn=0x000000000026275C string=0x0000000000262760 "K"
 *   insn=0x0000000000262760 string=0x0000000000262764 "+"
 *   insn=0x0000000000262774 string=0x0000000000262778 ""
 *   insn=0x0000000000262784 string=0x0000000000262788 "\t$"
 *   insn=0x0000000000262788 string=0x000000000026278C ")"
 *   insn=0x0000000000262798 string=0x000000000026279C "\t$"
 *   insn=0x000000000026279C string=0x00000000002627A0 ")=G"
 *   insn=0x00000000002627A0 string=0x00000000002627A4 "!"
 *   insn=0x00000000002627A4 string=0x00000000002627A8 "i"
 *   insn=0x00000000002627A8 string=0x00000000002627AC "\t"
 *   insn=0x00000000002627AC string=0x00000000002627B0 "*"
 *   insn=0x00000000002627B0 string=0x00000000002627B4 "\n"
 *   insn=0x00000000002627BC string=0x00000000002627C0 "l"
 *   insn=0x00000000002627CC string=0x00000000002627D0 "=|"
 *   insn=0x00000000002627D4 string=0x00000000002627D8 "*"
 *   insn=0x00000000002627D8 string=0x00000000002627DC "\n"
 *   insn=0x00000000002627DC string=0x00000000002627E0 "?"
 *   insn=0x00000000002627E0 string=0x00000000002627E4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CollectableItemComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  Caver::Component::GetBindings(a1);
  sub_566BB8((int)&v45, "type");
  v46 = 0;
  sub_56A528(&v47, &v45);
  v49 = 1;
  v48 = 0x200000001LL;
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
  sub_566BB8((int)&v45, "value");
  v46 = 1;
  sub_56A528(&v47, &v45);
  v48 = 0x200000001LL;
  v49 = 0;
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
  sub_566BB8((int)&v45, "itemName");
  v46 = 2;
  sub_56A528(&v47, &v45);
  v48 = 0x100000001LL;
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
  sub_566BB8((int)&v45, "identifier");
  v46 = 3;
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
  sub_566BB8((int)&v45, "requiresPickup");
  v46 = 4;
  sub_56A528(&v47, &v45);
  v49 = 0;
  v48 = 0x400000001LL;
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
  sub_566BB8((int)&v45, "onCollect");
  v46 = 5;
  sub_56A528(&v47, &v45);
  v49 = 0;
  v48 = 0x600000001LL;
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


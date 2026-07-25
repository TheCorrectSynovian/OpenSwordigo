/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025AAD8
 * Mangled: _ZN5Caver23CharControllerComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::CharControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000001F48A0  Caver::CharControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 9
 *   0x00000000001F48A0  Caver::CharControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 305
 *   insn=0x000000000025AAF0 string=0x000000000025AAF4 "W"
 *   insn=0x000000000025AB00 string=0x000000000025AB04 "+"
 *   insn=0x000000000025AB04 string=0x000000000025AB08 "a"
 *   insn=0x000000000025AB04 string=0x00000000001FB3B0 "0'"
 *   insn=0x000000000025AB08 string=0x0000000000587AB6 "jumpSpeed"
 *   insn=0x000000000025AB14 string=0x000000000025AB18 "(0"
 *   insn=0x000000000025AB1C string=0x000000000025AB20 "("
 *   insn=0x000000000025AB30 string=0x000000000025AB34 "}>"
 *   insn=0x000000000025AB34 string=0x000000000025AB38 "H"
 *   insn=0x000000000025AB38 string=0x000000000025AB3C ""
 *   insn=0x000000000025AB44 string=0x000000000025AB48 "t"
 *   insn=0x000000000025AB58 string=0x000000000025AB5C ""
 *   insn=0x000000000025AB60 string=0x000000000025AB64 "q>"
 *   insn=0x000000000025AB68 string=0x000000000025AB6C "\t\t@"
 *   insn=0x000000000025AB70 string=0x000000000025AB74 ""
 *   insn=0x000000000025AB78 string=0x000000000025AB7C "h"
 *   insn=0x000000000025AB7C string=0x000000000025AB80 ""
 *   insn=0x000000000025AB80 string=0x000000000025AB84 "h"
 *   insn=0x000000000025AB94 string=0x000000000025AB98 "Rs"
 *   insn=0x000000000025AB98 string=0x00000000001F78E0 "0'"
 *   insn=0x000000000025AB9C string=0x000000000025ABA0 "V$"
 *   insn=0x000000000025ABB0 string=0x000000000025AEA0 "I$"
 *   insn=0x000000000025ABBC string=0x000000000025ABC0 "!"
 *   insn=0x000000000025ABC0 string=0x000000000025ABC4 "a"
 *   insn=0x000000000025ABC0 string=0x000000000025AEC4 "I$"
 *   insn=0x000000000025ABC4 string=0x0000000000587AC0 "runSpeed"
 *   insn=0x000000000025ABD8 string=0x000000000025ABDC "H"
 *   insn=0x000000000025ABEC string=0x000000000025ABF0 "N>"
 *   insn=0x000000000025ABF8 string=0x000000000025ABFC "t"
 *   insn=0x000000000025AC0C string=0x000000000025AC10 ""
 *   insn=0x000000000025AC14 string=0x000000000025AC18 "D>"
 *   insn=0x000000000025AC18 string=0x000000000025AC1C "C"
 *   insn=0x000000000025AC1C string=0x000000000025AC20 "\t\t@"
 *   insn=0x000000000025AC24 string=0x000000000025AC28 ""
 *   insn=0x000000000025AC2C string=0x000000000025AC30 "h"
 *   insn=0x000000000025AC30 string=0x000000000025AC34 ""
 *   insn=0x000000000025AC34 string=0x000000000025AC38 "h"
 *   insn=0x000000000025AC48 string=0x000000000025AC4C "%s"
 *   insn=0x000000000025AC58 string=0x000000000025AC5C "a"
 *   insn=0x000000000025AC5C string=0x000000000025AEE8 "I$"
 *   insn=0x000000000025AC6C string=0x000000000025AC70 "a"
 *   insn=0x000000000025AC6C string=0x000000000025AF0C "I$"
 *   insn=0x000000000025AC70 string=0x0000000000587AC9 "maxJumpTime"
 *   insn=0x000000000025AC84 string=0x000000000025AC88 "h"
 *   insn=0x000000000025AC98 string=0x000000000025AC9C "#>"
 *   insn=0x000000000025ACA4 string=0x000000000025ACA8 "t"
 *   insn=0x000000000025ACB8 string=0x000000000025ACBC ""
 *   insn=0x000000000025ACC4 string=0x000000000025ACC8 "C"
 *   insn=0x000000000025ACC8 string=0x000000000025ACCC "\t\t@"
 *   insn=0x000000000025ACD0 string=0x000000000025ACD4 ""
 *   insn=0x000000000025ACD8 string=0x000000000025ACDC "h"
 *   insn=0x000000000025ACDC string=0x000000000025ACE0 ""
 *   insn=0x000000000025ACE0 string=0x000000000025ACE4 "h"
 *   insn=0x000000000025AD04 string=0x000000000025AD08 "A"
 *   insn=0x000000000025AD08 string=0x000000000025AF30 "I$"
 *   insn=0x000000000025AD18 string=0x000000000025AD1C "a"
 *   insn=0x000000000025AD18 string=0x000000000025AF54 "I$"
 *   insn=0x000000000025AD1C string=0x0000000000587AD5 "fastRunSpeed"
 *   insn=0x000000000025AD50 string=0x000000000025AD54 "t"
 *   insn=0x000000000025AD64 string=0x000000000025AD68 ""
 *   insn=0x000000000025AD70 string=0x000000000025AD74 "C"
 *   insn=0x000000000025AD74 string=0x000000000025AD78 "\t\t@"
 *   insn=0x000000000025AD7C string=0x000000000025AD80 ""
 *   insn=0x000000000025AD84 string=0x000000000025AD88 "h"
 *   insn=0x000000000025AD88 string=0x000000000025AD8C ""
 *   insn=0x000000000025AD8C string=0x000000000025AD90 "h"
 *   insn=0x000000000025ADB0 string=0x000000000025ADB4 "!"
 *   insn=0x000000000025ADB4 string=0x000000000025AF78 "I$"
 *   insn=0x000000000025ADC4 string=0x000000000025ADC8 "a"
 *   insn=0x000000000025ADC4 string=0x000000000025AF9C "I$"
 *   insn=0x000000000025ADC8 string=0x0000000000587AE2 "fastMaxJumpTime"
 *   insn=0x000000000025ADD4 string=0x000000000025ADD8 "x/"
 *   insn=0x000000000025ADFC string=0x000000000025AE00 "t"
 *   insn=0x000000000025AE10 string=0x000000000025AE14 ""
 *   insn=0x000000000025AE1C string=0x000000000025AE20 "C"
 *   insn=0x000000000025AE20 string=0x000000000025AE24 "\t\t@"
 *   insn=0x000000000025AE28 string=0x000000000025AE2C ""
 *   insn=0x000000000025AE30 string=0x000000000025AE34 "h"
 *   insn=0x000000000025AE34 string=0x000000000025AE38 ""
 *   insn=0x000000000025AE38 string=0x000000000025AE3C "h"
 *   insn=0x000000000025AE60 string=0x000000000025AFC0 "I$"
 *   insn=0x000000000025AE70 string=0x000000000025AFE4 "I$"
 *   insn=0x000000000025AE7C string=0x000000000025AE80 "A"
 *   insn=0x000000000025AE80 string=0x000000000025B148 "bl"
 *   insn=0x000000000025AEA0 string=0x000000000025AEA4 ")=G"
 *   insn=0x000000000025AEA4 string=0x000000000025AEA8 "!"
 *   insn=0x000000000025AEAC string=0x000000000025AEB0 "\t"
 *   insn=0x000000000025AEAC string=0x000000000025B008 "\t"
 *   insn=0x000000000025AEB0 string=0x000000000025AEB4 "*"
 *   insn=0x000000000025AEB4 string=0x000000000025AEB8 "\n"
 *   insn=0x000000000025AEBC string=0x000000000025AEC0 "U"
 *   insn=0x000000000025AEC0 string=0x000000000025B014 "?"
 *   insn=0x000000000025AEC4 string=0x000000000025AEC8 ")=G"
 *   insn=0x000000000025AEC8 string=0x000000000025AECC "!"
 *   insn=0x000000000025AED0 string=0x000000000025AED4 "\t"
 *   insn=0x000000000025AED0 string=0x000000000025B028 "\t"
 *   insn=0x000000000025AED4 string=0x000000000025AED8 "*"
 *   insn=0x000000000025AED8 string=0x000000000025AEDC "\n"
 *   insn=0x000000000025AEE0 string=0x000000000025AEE4 "T"
 *   insn=0x000000000025AEE4 string=0x000000000025B034 "?"
 *   insn=0x000000000025AEE8 string=0x000000000025AEEC ")=G"
 *   insn=0x000000000025AEEC string=0x000000000025AEF0 "!"
 *   insn=0x000000000025AEF4 string=0x000000000025AEF8 "\t"
 *   insn=0x000000000025AEF4 string=0x000000000025B048 "\t"
 *   insn=0x000000000025AEF8 string=0x000000000025AEFC "*"
 *   insn=0x000000000025AEFC string=0x000000000025AF00 "\n"
 *   insn=0x000000000025AF04 string=0x000000000025AF08 "S"
 *   insn=0x000000000025AF08 string=0x000000000025B054 "?"
 *   insn=0x000000000025AF0C string=0x000000000025AF10 ")=G"
 *   insn=0x000000000025AF10 string=0x000000000025AF14 "!"
 *   insn=0x000000000025AF18 string=0x000000000025AF1C "\t"
 *   insn=0x000000000025AF18 string=0x000000000025B068 "\t"
 *   insn=0x000000000025AF1C string=0x000000000025AF20 "*"
 *   insn=0x000000000025AF20 string=0x000000000025AF24 "\n"
 *   insn=0x000000000025AF28 string=0x000000000025AF2C "R"
 *   insn=0x000000000025AF2C string=0x000000000025B074 "?"
 *   insn=0x000000000025AF30 string=0x000000000025AF34 ")=G"
 *   insn=0x000000000025AF34 string=0x000000000025AF38 "!"
 *   insn=0x000000000025AF38 string=0x000000000025AF3C "i\n"
 *   insn=0x000000000025AF3C string=0x000000000025AF40 "\t"
 *   insn=0x000000000025AF3C string=0x000000000025B088 "\t"
 *   insn=0x000000000025AF40 string=0x000000000025AF44 "*"
 *   insn=0x000000000025AF44 string=0x000000000025AF48 "\n"
 *   insn=0x000000000025AF4C string=0x000000000025AF50 "Q"
 *   insn=0x000000000025AF50 string=0x000000000025B094 "?"
 *   insn=0x000000000025AF54 string=0x000000000025AF58 ")=G"
 *   insn=0x000000000025AF58 string=0x000000000025AF5C "!"
 *   insn=0x000000000025AF5C string=0x000000000025AF60 "I\n"
 *   insn=0x000000000025AF60 string=0x000000000025AF64 "\t"
 *   insn=0x000000000025AF60 string=0x000000000025B0A8 "\t"
 *   insn=0x000000000025AF64 string=0x000000000025AF68 "*"
 *   insn=0x000000000025AF68 string=0x000000000025AF6C "\n"
 *   insn=0x000000000025AF70 string=0x000000000025AF74 "P"
 *   insn=0x000000000025AF74 string=0x000000000025B0B4 "?"
 *   insn=0x000000000025AF78 string=0x000000000025AF7C ")=G"
 *   insn=0x000000000025AF7C string=0x000000000025AF80 "!"
 *   insn=0x000000000025AF80 string=0x000000000025AF84 ")\n"
 *   insn=0x000000000025AF84 string=0x000000000025AF88 "\t"
 *   insn=0x000000000025AF84 string=0x000000000025B0C8 "\t"
 *   insn=0x000000000025AF88 string=0x000000000025AF8C "*"
 *   insn=0x000000000025AF8C string=0x000000000025AF90 "\n"
 *   insn=0x000000000025AF94 string=0x000000000025AF98 "O"
 *   insn=0x000000000025AF98 string=0x000000000025B0D4 "?"
 *   insn=0x000000000025AF9C string=0x000000000025AFA0 ")=G"
 *   insn=0x000000000025AFA0 string=0x000000000025AFA4 "!"
 *   insn=0x000000000025AFA4 string=0x000000000025AFA8 "\t\n"
 *   insn=0x000000000025AFA8 string=0x000000000025AFAC "\t"
 *   insn=0x000000000025AFA8 string=0x000000000025B0E8 "\t"
 *   insn=0x000000000025AFAC string=0x000000000025AFB0 "*"
 *   insn=0x000000000025AFB0 string=0x000000000025AFB4 "\n"
 *   insn=0x000000000025AFB8 string=0x000000000025AFBC "N"
 *   insn=0x000000000025AFBC string=0x000000000025B0F4 "?"
 *   insn=0x000000000025AFC0 string=0x000000000025AFC4 ")=G"
 *   insn=0x000000000025AFC4 string=0x000000000025AFC8 "!"
 *   insn=0x000000000025AFCC string=0x000000000025AFD0 "\t"
 *   insn=0x000000000025AFCC string=0x000000000025B108 "\t"
 *   insn=0x000000000025AFD0 string=0x000000000025AFD4 "*"
 *   insn=0x000000000025AFD4 string=0x000000000025AFD8 "\n"
 *   insn=0x000000000025AFDC string=0x000000000025AFE0 "M"
 *   insn=0x000000000025AFE0 string=0x000000000025B114 "?"
 *   insn=0x000000000025AFE4 string=0x000000000025AFE8 ")=G"
 *   insn=0x000000000025AFE8 string=0x000000000025AFEC "!"
 *   insn=0x000000000025AFF0 string=0x000000000025AFF4 "\t"
 *   insn=0x000000000025AFF0 string=0x000000000025B128 "\t"
 *   insn=0x000000000025AFF4 string=0x000000000025AFF8 "*"
 *   insn=0x000000000025AFF8 string=0x000000000025AFFC "\n"
 *   insn=0x000000000025B000 string=0x000000000025B004 "L"
 *   insn=0x000000000025B004 string=0x000000000025B134 "?"
 *   insn=0x000000000025B008 string=0x000000000025B00C "*"
 *   insn=0x000000000025B00C string=0x000000000025B010 "\n"
 *   insn=0x000000000025B028 string=0x000000000025B02C "*"
 *   insn=0x000000000025B02C string=0x000000000025B030 "\n"
 *   insn=0x000000000025B034 string=0x000000000025B038 "l"
 *   insn=0x000000000025B048 string=0x000000000025B04C "*"
 *   insn=0x000000000025B04C string=0x000000000025B050 "\n"
 *   insn=0x000000000025B054 string=0x000000000025B058 "L"
 *   insn=0x000000000025B068 string=0x000000000025B06C "*"
 *   insn=0x000000000025B06C string=0x000000000025B070 "\n"
 *   insn=0x000000000025B088 string=0x000000000025B08C "*"
 *   insn=0x000000000025B08C string=0x000000000025B090 "\n"
 *   insn=0x000000000025B0A8 string=0x000000000025B0AC "*"
 *   insn=0x000000000025B0AC string=0x000000000025B0B0 "\n"
 *   insn=0x000000000025B0B4 string=0x000000000025B0B8 ","
 *   insn=0x000000000025B0C8 string=0x000000000025B0CC "*"
 *   insn=0x000000000025B0CC string=0x000000000025B0D0 "\n"
 *   insn=0x000000000025B0E0 string=0x000000000025B0E4 "5"
 *   insn=0x000000000025B0E8 string=0x000000000025B0EC "*"
 *   insn=0x000000000025B0EC string=0x000000000025B0F0 "\n"
 *   insn=0x000000000025B100 string=0x000000000025B104 "1"
 *   insn=0x000000000025B108 string=0x000000000025B10C "*"
 *   insn=0x000000000025B10C string=0x000000000025B110 "\n"
 *   insn=0x000000000025B114 string=0x000000000025B118 "l"
 *   insn=0x000000000025B120 string=0x000000000025B124 "P"
 *   insn=0x000000000025B128 string=0x000000000025B12C "*"
 *   insn=0x000000000025B12C string=0x000000000025B130 "\n"
 *   insn=0x000000000025B140 string=0x000000000025B144 "L"
 *   insn=0x000000000025B148 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000025B150 string=0x000000000025B154 "(a"
 *   insn=0x000000000025B15C string=0x000000000025B160 "J$"
 *   insn=0x000000000025B160 string=0x000000000025B164 "J=G"
 *   insn=0x000000000025B164 string=0x000000000025B168 ")!"
 *   insn=0x000000000025B16C string=0x000000000025B170 "*"
 *   insn=0x000000000025B16C string=0x000000000025B184 "*"
 *   insn=0x000000000025B170 string=0x000000000025B174 "K"
 *   insn=0x000000000025B174 string=0x000000000025B178 "+"
 *   insn=0x000000000025B180 string=0x000000000025B190 "_"
 *   insn=0x000000000025B184 string=0x000000000025B188 "K"
 *   insn=0x000000000025B188 string=0x000000000025B18C "+"
 *   insn=0x000000000025B1B4 string=0x000000000025B1B8 " "
 *   insn=0x000000000025B1B8 string=0x000000000025B1BC "I$"
 *   insn=0x000000000025B1BC string=0x000000000025B1C0 ")=G"
 *   insn=0x000000000025B1C0 string=0x000000000025B1C4 "!"
 *   insn=0x000000000025B1C8 string=0x000000000025B1CC "\t"
 *   insn=0x000000000025B1C8 string=0x000000000025B464 "\t"
 *   insn=0x000000000025B1CC string=0x000000000025B1D0 "*"
 *   insn=0x000000000025B1D0 string=0x000000000025B1D4 "\n"
 *   insn=0x000000000025B1DC string=0x000000000025B44C "?"
 *   insn=0x000000000025B1E8 string=0x000000000025B1EC "(a"
 *   insn=0x000000000025B1F4 string=0x000000000025B1F8 "J$"
 *   insn=0x000000000025B1F8 string=0x000000000025B1FC "J=G"
 *   insn=0x000000000025B1FC string=0x000000000025B200 ")!"
 *   insn=0x000000000025B204 string=0x000000000025B208 "*"
 *   insn=0x000000000025B204 string=0x000000000025B21C "*"
 *   insn=0x000000000025B208 string=0x000000000025B20C "K"
 *   insn=0x000000000025B20C string=0x000000000025B210 "+"
 *   insn=0x000000000025B218 string=0x000000000025B228 "_"
 *   insn=0x000000000025B21C string=0x000000000025B220 "K"
 *   insn=0x000000000025B220 string=0x000000000025B224 "+"
 *   insn=0x000000000025B234 string=0x000000000025B238 "[<"
 *   insn=0x000000000025B24C string=0x000000000025B250 "`"
 *   insn=0x000000000025B250 string=0x000000000025B254 "I$"
 *   insn=0x000000000025B254 string=0x000000000025B258 ")=G"
 *   insn=0x000000000025B258 string=0x000000000025B25C "!"
 *   insn=0x000000000025B25C string=0x000000000025B260 ")"
 *   insn=0x000000000025B260 string=0x000000000025B264 "\t"
 *   insn=0x000000000025B264 string=0x000000000025B268 "*"
 *   insn=0x000000000025B268 string=0x000000000025B26C "\n"
 *   insn=0x000000000025B270 string=0x000000000025B274 "v"
 *   insn=0x000000000025B280 string=0x000000000025B284 "(a"
 *   insn=0x000000000025B28C string=0x000000000025B290 "J$"
 *   insn=0x000000000025B290 string=0x000000000025B294 "J=G"
 *   insn=0x000000000025B294 string=0x000000000025B298 ")!"
 *   insn=0x000000000025B29C string=0x000000000025B2A0 "*"
 *   insn=0x000000000025B29C string=0x000000000025B2B4 "*"
 *   insn=0x000000000025B2A0 string=0x000000000025B2A4 "K"
 *   insn=0x000000000025B2A4 string=0x000000000025B2A8 "+"
 *   insn=0x000000000025B2B0 string=0x000000000025B2C0 "_"
 *   insn=0x000000000025B2B4 string=0x000000000025B2B8 "K"
 *   insn=0x000000000025B2B8 string=0x000000000025B2BC "+"
 *   insn=0x000000000025B2CC string=0x000000000025B2D0 "5<"
 *   insn=0x000000000025B2E8 string=0x000000000025B2EC "I$"
 *   insn=0x000000000025B2EC string=0x000000000025B2F0 ")=G"
 *   insn=0x000000000025B2F0 string=0x000000000025B2F4 "!"
 *   insn=0x000000000025B2F4 string=0x000000000025B2F8 "i"
 *   insn=0x000000000025B2F8 string=0x000000000025B2FC "\t"
 *   insn=0x000000000025B2FC string=0x000000000025B300 "*"
 *   insn=0x000000000025B300 string=0x000000000025B304 "\n"
 *   insn=0x000000000025B308 string=0x000000000025B30C "P"
 *   insn=0x000000000025B318 string=0x000000000025B31C "(a"
 *   insn=0x000000000025B324 string=0x000000000025B328 "J$"
 *   insn=0x000000000025B328 string=0x000000000025B32C "J=G"
 *   insn=0x000000000025B32C string=0x000000000025B330 ")!"
 *   insn=0x000000000025B334 string=0x000000000025B338 "*"
 *   insn=0x000000000025B334 string=0x000000000025B34C "*"
 *   insn=0x000000000025B338 string=0x000000000025B33C "K"
 *   insn=0x000000000025B33C string=0x000000000025B340 "+"
 *   insn=0x000000000025B348 string=0x000000000025B358 "_"
 *   insn=0x000000000025B34C string=0x000000000025B350 "K"
 *   insn=0x000000000025B350 string=0x000000000025B354 "+"
 *   insn=0x000000000025B380 string=0x000000000025B384 "I$"
 *   insn=0x000000000025B384 string=0x000000000025B388 ")=G"
 *   insn=0x000000000025B388 string=0x000000000025B38C "!"
 *   insn=0x000000000025B390 string=0x000000000025B394 "\t"
 *   insn=0x000000000025B394 string=0x000000000025B398 "*"
 *   insn=0x000000000025B398 string=0x000000000025B39C "\n"
 *   insn=0x000000000025B3A0 string=0x000000000025B3A4 "*"
 *   insn=0x000000000025B3AC string=0x000000000025B3B0 "J$"
 *   insn=0x000000000025B3B0 string=0x000000000025B3B4 "J"
 *   insn=0x000000000025B3B8 string=0x000000000025B3BC "(a"
 *   insn=0x000000000025B3C4 string=0x000000000025B3C8 "J$"
 *   insn=0x000000000025B3C8 string=0x000000000025B3CC "J=G"
 *   insn=0x000000000025B3CC string=0x000000000025B3D0 ")!"
 *   insn=0x000000000025B3D4 string=0x000000000025B3D8 "*"
 *   insn=0x000000000025B3D4 string=0x000000000025B3EC "*"
 *   insn=0x000000000025B3D8 string=0x000000000025B3DC "K"
 *   insn=0x000000000025B3DC string=0x000000000025B3E0 "+"
 *   insn=0x000000000025B3E8 string=0x000000000025B3F8 "_"
 *   insn=0x000000000025B3EC string=0x000000000025B3F0 "K"
 *   insn=0x000000000025B3F0 string=0x000000000025B3F4 "+"
 *   insn=0x000000000025B414 string=0x000000000025B418 "I$"
 *   insn=0x000000000025B418 string=0x000000000025B41C ")"
 *   insn=0x000000000025B428 string=0x000000000025B42C "I$"
 *   insn=0x000000000025B42C string=0x000000000025B430 ")=G"
 *   insn=0x000000000025B430 string=0x000000000025B434 "!"
 *   insn=0x000000000025B434 string=0x000000000025B438 "i"
 *   insn=0x000000000025B438 string=0x000000000025B43C "\t"
 *   insn=0x000000000025B43C string=0x000000000025B440 "*"
 *   insn=0x000000000025B440 string=0x000000000025B444 "\n"
 *   insn=0x000000000025B44C string=0x000000000025B450 "l"
 *   insn=0x000000000025B464 string=0x000000000025B468 "*"
 *   insn=0x000000000025B468 string=0x000000000025B46C "\n"
 *   insn=0x000000000025B46C string=0x000000000025B470 "?"
 *   insn=0x000000000025B470 string=0x000000000025B474 ""
 *   insn=0x000000000025B480 string=0x000000000025B484 "e"
 *   insn=0x000000000025B484 string=0x00000000001F48A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CharControllerComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  sub_566BB8((int)&v38, "jumpSpeed");
  v39 = 17;
  sub_56A528(&v40, &v38);
  v42 = 0;
  v41 = 0x500000001LL;
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
  sub_566BB8((int)&v38, "runSpeed");
  v39 = 18;
  sub_56A528(&v40, &v38);
  v41 = 0x500000001LL;
  v42 = 0;
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
  sub_566BB8((int)&v38, "maxJumpTime");
  v39 = 19;
  sub_56A528(&v40, &v38);
  v41 = 0x500000001LL;
  v42 = 0;
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
  sub_566BB8((int)&v38, "fastRunSpeed");
  v39 = 20;
  sub_56A528(&v40, &v38);
  v41 = 0x500000001LL;
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
  sub_566BB8((int)&v38, "fastMaxJumpTime");
  v39 = 21;
  sub_56A528(&v40, &v38);
  v41 = 0x500000001LL;
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


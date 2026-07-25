/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BF0C8
 * Mangled: _ZN5Caver22GroundPolygonComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::GroundPolygonComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001F44D0  Caver::GroundPolygonComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000002BEF94  Caver::GroundPolygonComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F44D0  Caver::GroundPolygonComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 254
 *   insn=0x00000000002BF0E0 string=0x00000000002BF0E4 "W"
 *   insn=0x00000000002BF0F4 string=0x00000000002BF0F8 "!"
 *   insn=0x00000000002BF0F4 string=0x00000000001FB3B0 "0'"
 *   insn=0x00000000002BF0F8 string=0x0000000000583A27 "collides"
 *   insn=0x00000000002BF120 string=0x00000000002BF124 "("
 *   insn=0x00000000002BF124 string=0x00000000002BF128 ""
 *   insn=0x00000000002BF130 string=0x00000000002BF134 "t"
 *   insn=0x00000000002BF144 string=0x00000000002BF148 ""
 *   insn=0x00000000002BF154 string=0x00000000002BF158 "\t\t@"
 *   insn=0x00000000002BF15C string=0x00000000002BF160 ""
 *   insn=0x00000000002BF164 string=0x00000000002BF168 "h"
 *   insn=0x00000000002BF168 string=0x00000000002BF16C ""
 *   insn=0x00000000002BF16C string=0x00000000002BF170 "h"
 *   insn=0x00000000002BF184 string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002BF188 string=0x00000000002BF18C "6!"
 *   insn=0x00000000002BF19C string=0x00000000002BF3F0 ")!"
 *   insn=0x00000000002BF1A8 string=0x00000000002BF1AC "A"
 *   insn=0x00000000002BF1AC string=0x00000000002BF1B0 "!"
 *   insn=0x00000000002BF1AC string=0x00000000002BF414 ")!"
 *   insn=0x00000000002BF1B0 string=0x0000000000583A5A "friction"
 *   insn=0x00000000002BF1BC string=0x00000000002BF1C0 "~"
 *   insn=0x00000000002BF1DC string=0x00000000002BF1E0 "("
 *   insn=0x00000000002BF1EC string=0x00000000002BF1F0 "t"
 *   insn=0x00000000002BF200 string=0x00000000002BF204 ""
 *   insn=0x00000000002BF20C string=0x00000000002BF210 "C"
 *   insn=0x00000000002BF210 string=0x00000000002BF214 "\t\t@"
 *   insn=0x00000000002BF218 string=0x00000000002BF21C ""
 *   insn=0x00000000002BF220 string=0x00000000002BF224 "h"
 *   insn=0x00000000002BF224 string=0x00000000002BF228 ""
 *   insn=0x00000000002BF228 string=0x00000000002BF22C "h"
 *   insn=0x00000000002BF24C string=0x00000000002BF250 "A"
 *   insn=0x00000000002BF250 string=0x00000000002BF438 ")!"
 *   insn=0x00000000002BF260 string=0x00000000002BF264 "!"
 *   insn=0x00000000002BF260 string=0x00000000002BF45C ")!"
 *   insn=0x00000000002BF264 string=0x0000000000583A63 "unsafeGround"
 *   insn=0x00000000002BF270 string=0x00000000002BF274 "Q"
 *   insn=0x00000000002BF298 string=0x00000000002BF29C "t"
 *   insn=0x00000000002BF2AC string=0x00000000002BF2B0 ""
 *   insn=0x00000000002BF2B8 string=0x00000000002BF2BC "C"
 *   insn=0x00000000002BF2BC string=0x00000000002BF2C0 "\t\t@"
 *   insn=0x00000000002BF2C4 string=0x00000000002BF2C8 ""
 *   insn=0x00000000002BF2CC string=0x00000000002BF2D0 "h"
 *   insn=0x00000000002BF2D0 string=0x00000000002BF2D4 ""
 *   insn=0x00000000002BF2D4 string=0x00000000002BF2D8 "h"
 *   insn=0x00000000002BF2E8 string=0x00000000002BF2EC "}"
 *   insn=0x00000000002BF2F8 string=0x00000000002BF2FC "!"
 *   insn=0x00000000002BF2FC string=0x00000000002BF480 ")!"
 *   insn=0x00000000002BF30C string=0x00000000002BF310 "!"
 *   insn=0x00000000002BF30C string=0x00000000002BF4A4 ")!"
 *   insn=0x00000000002BF310 string=0x0000000000583A70 "onCollide"
 *   insn=0x00000000002BF31C string=0x00000000002BF320 "&"
 *   insn=0x00000000002BF338 string=0x00000000002BF33C "{"
 *   insn=0x00000000002BF33C string=0x00000000002BF340 "("
 *   insn=0x00000000002BF34C string=0x00000000002BF350 "t"
 *   insn=0x00000000002BF360 string=0x00000000002BF364 ""
 *   insn=0x00000000002BF368 string=0x00000000002BF36C "o"
 *   insn=0x00000000002BF36C string=0x00000000002BF370 "C"
 *   insn=0x00000000002BF370 string=0x00000000002BF374 "\t\t@"
 *   insn=0x00000000002BF378 string=0x00000000002BF37C ""
 *   insn=0x00000000002BF380 string=0x00000000002BF384 "h"
 *   insn=0x00000000002BF384 string=0x00000000002BF388 ""
 *   insn=0x00000000002BF388 string=0x00000000002BF38C "h"
 *   insn=0x00000000002BF39C string=0x00000000002BF3A0 "P"
 *   insn=0x00000000002BF3B0 string=0x00000000002BF4C8 ")!"
 *   insn=0x00000000002BF3BC string=0x00000000002BF3C0 "a\t"
 *   insn=0x00000000002BF3C0 string=0x00000000002BF4EC ")!"
 *   insn=0x00000000002BF3D0 string=0x00000000002BF610 "0"
 *   insn=0x00000000002BF3F0 string=0x00000000002BF3F4 ")=G"
 *   insn=0x00000000002BF3F4 string=0x00000000002BF3F8 "!"
 *   insn=0x00000000002BF3FC string=0x00000000002BF400 "\t"
 *   insn=0x00000000002BF3FC string=0x00000000002BF510 "\t"
 *   insn=0x00000000002BF400 string=0x00000000002BF404 "*"
 *   insn=0x00000000002BF404 string=0x00000000002BF408 "\n"
 *   insn=0x00000000002BF40C string=0x00000000002BF410 "C"
 *   insn=0x00000000002BF410 string=0x00000000002BF51C "?"
 *   insn=0x00000000002BF414 string=0x00000000002BF418 ")=G"
 *   insn=0x00000000002BF418 string=0x00000000002BF41C "!"
 *   insn=0x00000000002BF420 string=0x00000000002BF424 "\t"
 *   insn=0x00000000002BF420 string=0x00000000002BF530 "\t"
 *   insn=0x00000000002BF424 string=0x00000000002BF428 "*"
 *   insn=0x00000000002BF428 string=0x00000000002BF42C "\n"
 *   insn=0x00000000002BF430 string=0x00000000002BF434 "B"
 *   insn=0x00000000002BF434 string=0x00000000002BF53C "?"
 *   insn=0x00000000002BF438 string=0x00000000002BF43C ")=G"
 *   insn=0x00000000002BF43C string=0x00000000002BF440 "!"
 *   insn=0x00000000002BF440 string=0x00000000002BF444 "i"
 *   insn=0x00000000002BF444 string=0x00000000002BF448 "\t"
 *   insn=0x00000000002BF444 string=0x00000000002BF550 "\t"
 *   insn=0x00000000002BF448 string=0x00000000002BF44C "*"
 *   insn=0x00000000002BF44C string=0x00000000002BF450 "\n"
 *   insn=0x00000000002BF454 string=0x00000000002BF458 "A"
 *   insn=0x00000000002BF458 string=0x00000000002BF55C "?"
 *   insn=0x00000000002BF45C string=0x00000000002BF460 ")=G"
 *   insn=0x00000000002BF460 string=0x00000000002BF464 "!"
 *   insn=0x00000000002BF464 string=0x00000000002BF468 "I"
 *   insn=0x00000000002BF468 string=0x00000000002BF46C "\t"
 *   insn=0x00000000002BF468 string=0x00000000002BF570 "\t"
 *   insn=0x00000000002BF46C string=0x00000000002BF470 "*"
 *   insn=0x00000000002BF470 string=0x00000000002BF474 "\n"
 *   insn=0x00000000002BF478 string=0x00000000002BF47C "@"
 *   insn=0x00000000002BF47C string=0x00000000002BF57C "?"
 *   insn=0x00000000002BF480 string=0x00000000002BF484 ")=G"
 *   insn=0x00000000002BF484 string=0x00000000002BF488 "!"
 *   insn=0x00000000002BF488 string=0x00000000002BF48C ")"
 *   insn=0x00000000002BF48C string=0x00000000002BF490 "\t"
 *   insn=0x00000000002BF48C string=0x00000000002BF590 "\t"
 *   insn=0x00000000002BF490 string=0x00000000002BF494 "*"
 *   insn=0x00000000002BF494 string=0x00000000002BF498 "\n"
 *   insn=0x00000000002BF49C string=0x00000000002BF4A0 "?"
 *   insn=0x00000000002BF4A0 string=0x00000000002BF59C "?"
 *   insn=0x00000000002BF4A4 string=0x00000000002BF4A8 ")=G"
 *   insn=0x00000000002BF4A8 string=0x00000000002BF4AC "!"
 *   insn=0x00000000002BF4AC string=0x00000000002BF4B0 "\t"
 *   insn=0x00000000002BF4B0 string=0x00000000002BF4B4 "\t"
 *   insn=0x00000000002BF4B0 string=0x00000000002BF5B0 "\t"
 *   insn=0x00000000002BF4B4 string=0x00000000002BF4B8 "*"
 *   insn=0x00000000002BF4B8 string=0x00000000002BF4BC "\n"
 *   insn=0x00000000002BF4C0 string=0x00000000002BF4C4 ">"
 *   insn=0x00000000002BF4C4 string=0x00000000002BF5BC "?"
 *   insn=0x00000000002BF4C8 string=0x00000000002BF4CC ")=G"
 *   insn=0x00000000002BF4CC string=0x00000000002BF4D0 "!"
 *   insn=0x00000000002BF4D4 string=0x00000000002BF4D8 "\t"
 *   insn=0x00000000002BF4D4 string=0x00000000002BF5D0 "\t"
 *   insn=0x00000000002BF4D8 string=0x00000000002BF4DC "*"
 *   insn=0x00000000002BF4DC string=0x00000000002BF4E0 "\n"
 *   insn=0x00000000002BF4E4 string=0x00000000002BF4E8 "="
 *   insn=0x00000000002BF4E8 string=0x00000000002BF5DC "?"
 *   insn=0x00000000002BF4EC string=0x00000000002BF4F0 ")=G"
 *   insn=0x00000000002BF4F0 string=0x00000000002BF4F4 "!"
 *   insn=0x00000000002BF4F8 string=0x00000000002BF4FC "\t"
 *   insn=0x00000000002BF4F8 string=0x00000000002BF5F0 "\t"
 *   insn=0x00000000002BF4FC string=0x00000000002BF500 "*"
 *   insn=0x00000000002BF500 string=0x00000000002BF504 "\n"
 *   insn=0x00000000002BF508 string=0x00000000002BF50C "<"
 *   insn=0x00000000002BF50C string=0x00000000002BF5FC "?"
 *   insn=0x00000000002BF510 string=0x00000000002BF514 "*"
 *   insn=0x00000000002BF514 string=0x00000000002BF518 "\n"
 *   insn=0x00000000002BF530 string=0x00000000002BF534 "*"
 *   insn=0x00000000002BF534 string=0x00000000002BF538 "\n"
 *   insn=0x00000000002BF550 string=0x00000000002BF554 "*"
 *   insn=0x00000000002BF554 string=0x00000000002BF558 "\n"
 *   insn=0x00000000002BF568 string=0x00000000002BF56C ":"
 *   insn=0x00000000002BF570 string=0x00000000002BF574 "*"
 *   insn=0x00000000002BF574 string=0x00000000002BF578 "\n"
 *   insn=0x00000000002BF57C string=0x00000000002BF580 ","
 *   insn=0x00000000002BF588 string=0x00000000002BF58C "6"
 *   insn=0x00000000002BF590 string=0x00000000002BF594 "*"
 *   insn=0x00000000002BF594 string=0x00000000002BF598 "\n"
 *   insn=0x00000000002BF5A8 string=0x00000000002BF5AC "U"
 *   insn=0x00000000002BF5B0 string=0x00000000002BF5B4 "*"
 *   insn=0x00000000002BF5B4 string=0x00000000002BF5B8 "\n"
 *   insn=0x00000000002BF5C4 string=0x00000000002BF5C8 "w"
 *   insn=0x00000000002BF5C8 string=0x00000000002BF5CC "Q"
 *   insn=0x00000000002BF5D0 string=0x00000000002BF5D4 "*"
 *   insn=0x00000000002BF5D4 string=0x00000000002BF5D8 "\n"
 *   insn=0x00000000002BF5E4 string=0x00000000002BF5E8 "o"
 *   insn=0x00000000002BF5E8 string=0x00000000002BF5EC "r"
 *   insn=0x00000000002BF5F0 string=0x00000000002BF5F4 "*"
 *   insn=0x00000000002BF5F4 string=0x00000000002BF5F8 "\n"
 *   insn=0x00000000002BF5FC string=0x00000000002BF600 ","
 *   insn=0x00000000002BF604 string=0x00000000002BF608 "g"
 *   insn=0x00000000002BF608 string=0x00000000002BF60C "n"
 *   insn=0x00000000002BF610 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002BF618 string=0x00000000002BF61C "(a"
 *   insn=0x00000000002BF624 string=0x00000000002BF628 "*!"
 *   insn=0x00000000002BF628 string=0x00000000002BF62C "J=G"
 *   insn=0x00000000002BF62C string=0x00000000002BF630 ")!"
 *   insn=0x00000000002BF634 string=0x00000000002BF638 "*"
 *   insn=0x00000000002BF634 string=0x00000000002BF64C "*"
 *   insn=0x00000000002BF638 string=0x00000000002BF63C "K"
 *   insn=0x00000000002BF63C string=0x00000000002BF640 "+"
 *   insn=0x00000000002BF648 string=0x00000000002BF658 "_"
 *   insn=0x00000000002BF64C string=0x00000000002BF650 "K"
 *   insn=0x00000000002BF650 string=0x00000000002BF654 "+"
 *   insn=0x00000000002BF664 string=0x00000000002BF668 "O"
 *   insn=0x00000000002BF67C string=0x00000000002BF680 "`"
 *   insn=0x00000000002BF680 string=0x00000000002BF684 ")!"
 *   insn=0x00000000002BF684 string=0x00000000002BF688 ")=G"
 *   insn=0x00000000002BF688 string=0x00000000002BF68C "!"
 *   insn=0x00000000002BF68C string=0x00000000002BF690 ")"
 *   insn=0x00000000002BF690 string=0x00000000002BF694 "\t"
 *   insn=0x00000000002BF690 string=0x00000000002BF894 "\t"
 *   insn=0x00000000002BF694 string=0x00000000002BF698 "*"
 *   insn=0x00000000002BF698 string=0x00000000002BF69C "\n"
 *   insn=0x00000000002BF6A0 string=0x00000000002BF6A4 "v"
 *   insn=0x00000000002BF6A4 string=0x00000000002BF87C "?"
 *   insn=0x00000000002BF6B0 string=0x00000000002BF6B4 "(a"
 *   insn=0x00000000002BF6BC string=0x00000000002BF6C0 "*!"
 *   insn=0x00000000002BF6C0 string=0x00000000002BF6C4 "J=G"
 *   insn=0x00000000002BF6C4 string=0x00000000002BF6C8 ")!"
 *   insn=0x00000000002BF6CC string=0x00000000002BF6D0 "*"
 *   insn=0x00000000002BF6CC string=0x00000000002BF6E4 "*"
 *   insn=0x00000000002BF6D0 string=0x00000000002BF6D4 "K"
 *   insn=0x00000000002BF6D4 string=0x00000000002BF6D8 "+"
 *   insn=0x00000000002BF6E0 string=0x00000000002BF6F0 "_"
 *   insn=0x00000000002BF6E4 string=0x00000000002BF6E8 "K"
 *   insn=0x00000000002BF6E8 string=0x00000000002BF6EC "+"
 *   insn=0x00000000002BF6FC string=0x00000000002BF700 ")"
 *   insn=0x00000000002BF718 string=0x00000000002BF71C ")!"
 *   insn=0x00000000002BF71C string=0x00000000002BF720 ")=G"
 *   insn=0x00000000002BF720 string=0x00000000002BF724 "!"
 *   insn=0x00000000002BF724 string=0x00000000002BF728 "i"
 *   insn=0x00000000002BF728 string=0x00000000002BF72C "\t"
 *   insn=0x00000000002BF72C string=0x00000000002BF730 "*"
 *   insn=0x00000000002BF730 string=0x00000000002BF734 "\n"
 *   insn=0x00000000002BF738 string=0x00000000002BF73C "P"
 *   insn=0x00000000002BF748 string=0x00000000002BF74C "(a"
 *   insn=0x00000000002BF754 string=0x00000000002BF758 "*!"
 *   insn=0x00000000002BF758 string=0x00000000002BF75C "J=G"
 *   insn=0x00000000002BF75C string=0x00000000002BF760 ")!"
 *   insn=0x00000000002BF764 string=0x00000000002BF768 "*"
 *   insn=0x00000000002BF764 string=0x00000000002BF77C "*"
 *   insn=0x00000000002BF768 string=0x00000000002BF76C "K"
 *   insn=0x00000000002BF76C string=0x00000000002BF770 "+"
 *   insn=0x00000000002BF778 string=0x00000000002BF788 "_"
 *   insn=0x00000000002BF77C string=0x00000000002BF780 "K"
 *   insn=0x00000000002BF780 string=0x00000000002BF784 "+"
 *   insn=0x00000000002BF7B0 string=0x00000000002BF7B4 ")!"
 *   insn=0x00000000002BF7B4 string=0x00000000002BF7B8 ")=G"
 *   insn=0x00000000002BF7B8 string=0x00000000002BF7BC "!"
 *   insn=0x00000000002BF7C0 string=0x00000000002BF7C4 "\t"
 *   insn=0x00000000002BF7C4 string=0x00000000002BF7C8 "*"
 *   insn=0x00000000002BF7C8 string=0x00000000002BF7CC "\n"
 *   insn=0x00000000002BF7D0 string=0x00000000002BF7D4 "*"
 *   insn=0x00000000002BF7DC string=0x00000000002BF7E0 "*!"
 *   insn=0x00000000002BF7E0 string=0x00000000002BF7E4 "J"
 *   insn=0x00000000002BF7E8 string=0x00000000002BF7EC "(a"
 *   insn=0x00000000002BF7F4 string=0x00000000002BF7F8 "*!"
 *   insn=0x00000000002BF7F8 string=0x00000000002BF7FC "J=G"
 *   insn=0x00000000002BF7FC string=0x00000000002BF800 ")!"
 *   insn=0x00000000002BF804 string=0x00000000002BF808 "*"
 *   insn=0x00000000002BF804 string=0x00000000002BF81C "*"
 *   insn=0x00000000002BF808 string=0x00000000002BF80C "K"
 *   insn=0x00000000002BF80C string=0x00000000002BF810 "+"
 *   insn=0x00000000002BF818 string=0x00000000002BF828 "_"
 *   insn=0x00000000002BF81C string=0x00000000002BF820 "K"
 *   insn=0x00000000002BF820 string=0x00000000002BF824 "+"
 *   insn=0x00000000002BF844 string=0x00000000002BF848 ")!"
 *   insn=0x00000000002BF848 string=0x00000000002BF84C ")"
 *   insn=0x00000000002BF858 string=0x00000000002BF85C ")!"
 *   insn=0x00000000002BF85C string=0x00000000002BF860 ")=G"
 *   insn=0x00000000002BF860 string=0x00000000002BF864 "!"
 *   insn=0x00000000002BF864 string=0x00000000002BF868 "i"
 *   insn=0x00000000002BF868 string=0x00000000002BF86C "\t"
 *   insn=0x00000000002BF86C string=0x00000000002BF870 "*"
 *   insn=0x00000000002BF870 string=0x00000000002BF874 "\n"
 *   insn=0x00000000002BF87C string=0x00000000002BF880 "l"
 *   insn=0x00000000002BF88C string=0x00000000002BF890 ""
 *   insn=0x00000000002BF894 string=0x00000000002BF898 "*"
 *   insn=0x00000000002BF898 string=0x00000000002BF89C "\n"
 *   insn=0x00000000002BF89C string=0x00000000002BF8A0 "?"
 *   insn=0x00000000002BF8A0 string=0x00000000002BF8A4 ""
 *   insn=0x00000000002BF8B0 string=0x00000000002BF8B4 ""
 *   insn=0x00000000002BF8B4 string=0x00000000001F44D0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GroundPolygonComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  sub_566BB8((int)&v31, "collides");
  v32 = 0;
  sub_56A528(&v33, &v31);
  v35 = 0;
  v34 = 0x400000001LL;
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
  sub_566BB8((int)&v31, "friction");
  v32 = 1;
  sub_56A528(&v33, &v31);
  v35 = 0;
  v34 = 0x500000001LL;
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
  sub_566BB8((int)&v31, "unsafeGround");
  v32 = 2;
  sub_56A528(&v33, &v31);
  v34 = 0x400000001LL;
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
  sub_566BB8((int)&v31, "onCollide");
  v32 = 3;
  sub_56A528(&v33, &v31);
  v35 = 0;
  v34 = 0x600000001LL;
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


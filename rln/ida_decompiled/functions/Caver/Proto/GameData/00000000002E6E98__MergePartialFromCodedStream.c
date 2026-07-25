/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E6E98
 * Mangled: _ZN5Caver5Proto8GameData27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::GameData::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F58A0  Caver::Proto::Item::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F5F60  Caver::Proto::EntityClass::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F61E0  Caver::Proto::GuideTarget::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000200430  Caver::Proto::Quest::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000201120  Caver::Proto::Skill::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *
 * Referenced strings: 251
 *   insn=0x00000000002E6EC0 string=0x00000000002E6EC4 "\"
 *   insn=0x00000000002E6EE0 string=0x00000000002E6EE4 " "
 *   insn=0x00000000002E6EE4 string=0x00000000002E6EE8 "\n "
 *   insn=0x00000000002E6EE8 string=0x00000000002E6EEC "}A"
 *   insn=0x00000000002E6EEC string=0x00000000002E6EF0 "JED"
 *   insn=0x00000000002E6EF0 string=0x00000000002E6EF4 ")"
 *   insn=0x00000000002E6EFC string=0x00000000002E6F00 " "
 *   insn=0x00000000002E6F0C string=0x00000000002E6F10 "(1E"
 *   insn=0x00000000002E6F10 string=0x00000000002E6F14 "@"
 *   insn=0x00000000002E6F1C string=0x00000000002E6F20 "k"
 *   insn=0x00000000002E6F34 string=0x00000000002E6F38 ")"
 *   insn=0x00000000002E6F38 string=0x00000000002E6F3C "J"
 *   insn=0x00000000002E6F48 string=0x00000000002E6F4C "C"
 *   insn=0x00000000002E6F50 string=0x00000000002E6F54 "JF"
 *   insn=0x00000000002E6F60 string=0x00000000002E6F64 "E"
 *   insn=0x00000000002E6F64 string=0x00000000002E6F68 "\n "
 *   insn=0x00000000002E6F68 string=0x00000000002E6F6C "J"
 *   insn=0x00000000002E6F74 string=0x00000000002E6F78 "`"
 *   insn=0x00000000002E6F78 string=0x00000000002E6F7C "G"
 *   insn=0x00000000002E6F84 string=0x00000000002E6F88 "JAF"
 *   insn=0x00000000002E6F8C string=0x00000000002E6F90 " "
 *   insn=0x00000000002E6F94 string=0x00000000002E6F98 "k"
 *   insn=0x00000000002E6FBC string=0x00000000002E6FC0 "D"
 *   insn=0x00000000002E6FD4 string=0x00000000002E6FD8 " "
 *   insn=0x00000000002E6FDC string=0x00000000002E6FE0 "8"
 *   insn=0x00000000002E6FE0 string=0x000000000058AB68 " "
 *   insn=0x00000000002E6FF8 string=0x00000000002E6FFC "J"
 *   insn=0x00000000002E7008 string=0x00000000002E700C "\t"
 *   insn=0x00000000002E7010 string=0x00000000002E7014 "(A"
 *   insn=0x00000000002E7014 string=0x00000000002E7018 "vA"
 *   insn=0x00000000002E701C string=0x00000000002E7020 "G"
 *   insn=0x00000000002E7028 string=0x00000000002E702C "h"
 *   insn=0x00000000002E7030 string=0x00000000002E7034 """
 *   insn=0x00000000002E7034 string=0x00000000002E7038 "\t"
 *   insn=0x00000000002E703C string=0x00000000002E7040 "!"
 *   insn=0x00000000002E7040 string=0x00000000002E7044 ""
 *   insn=0x00000000002E7044 string=0x00000000002E7048 "a""
 *   insn=0x00000000002E7048 string=0x00000000002E704C "h"
 *   insn=0x00000000002E7050 string=0x00000000002E706C "(|"
 *   insn=0x00000000002E7058 string=0x00000000002E705C "yB"
 *   insn=0x00000000002E705C string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002E7060 string=0x00000000002E7064 "a""
 *   insn=0x00000000002E7064 string=0x00000000002E7068 "A8"
 *   insn=0x00000000002E706C string=0x00000000002E7070 ""
 *   insn=0x00000000002E7074 string=0x00000000002E7078 "H"
 *   insn=0x00000000002E7078 string=0x00000000002E707C "{"
 *   insn=0x00000000002E7078 string=0x00000000002E7220 "("
 *   insn=0x00000000002E707C string=0x00000000002E7080 ""
 *   insn=0x00000000002E7084 string=0x00000000002E7088 "("
 *   insn=0x00000000002E7084 string=0x00000000002E71E0 "("
 *   insn=0x00000000002E7084 string=0x00000000002E71F0 "("
 *   insn=0x00000000002E7084 string=0x00000000002E7200 "("
 *   insn=0x00000000002E7084 string=0x00000000002E7210 "("
 *   insn=0x00000000002E7090 string=0x00000000002E7094 "d"
 *   insn=0x00000000002E7098 string=0x00000000002E709C "h"
 *   insn=0x00000000002E70AC string=0x00000000002E70B0 "j"
 *   insn=0x00000000002E70B0 string=0x00000000002E70B4 "i"
 *   insn=0x00000000002E70C0 string=0x00000000002E7128 "h"
 *   insn=0x00000000002E70CC string=0x00000000002E70E0 ""
 *   insn=0x00000000002E70D8 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002E70E8 string=0x00000000002E70EC "=9"
 *   insn=0x00000000002E70EC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E70F4 string=0x00000000002E70F8 "W"
 *   insn=0x00000000002E70F8 string=0x00000000002E70FC "H"
 *   insn=0x00000000002E70FC string=0x00000000002E7100 "@"
 *   insn=0x00000000002E7104 string=0x00000000002E7108 "_"
 *   insn=0x00000000002E7108 string=0x00000000002E710C "_"
 *   insn=0x00000000002E710C string=0x00000000002E7110 "_C"
 *   insn=0x00000000002E7110 string=0x00000000002E7114 "@"
 *   insn=0x00000000002E7118 string=0x00000000002E711C "i"
 *   insn=0x00000000002E7130 string=0x00000000002E7134 "\t"
 *   insn=0x00000000002E7138 string=0x00000000002E713C ")"
 *   insn=0x00000000002E713C string=0x00000000002E7140 ""
 *   insn=0x00000000002E7144 string=0x00000000002E7148 "h"
 *   insn=0x00000000002E714C string=0x00000000002E7160 "h&G)\n"
 *   insn=0x00000000002E7158 string=0x00000000002E715C "`0"
 *   insn=0x00000000002E7158 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002E7160 string=0x00000000002E7164 "\n"
 *   insn=0x00000000002E7168 string=0x00000000002E716C "j:"
 *   insn=0x00000000002E718C string=0x00000000001F58A0 "P'"
 *   insn=0x00000000002E7190 string=0x00000000002E7194 "h"
 *   insn=0x00000000002E71A0 string=0x00000000002E71A4 "o"
 *   insn=0x00000000002E71A4 string=0x00000000002E71A8 "h:@"
 *   insn=0x00000000002E71A8 string=0x00000000002E71AC ""
 *   insn=0x00000000002E71AC string=0x00000000002E71B0 "K"
 *   insn=0x00000000002E71B0 string=0x00000000002E71B4 "h:"
 *   insn=0x00000000002E71B0 string=0x00000000002E71B8 "h"
 *   insn=0x00000000002E71BC string=0x00000000002E71C0 "b"
 *   insn=0x00000000002E71C0 string=0x00000000002E71C4 "\t"
 *   insn=0x00000000002E71C4 string=0x00000000002E71C8 "?)"
 *   insn=0x00000000002E71C8 string=0x00000000002E71CC "`"
 *   insn=0x00000000002E71CC string=0x00000000002E71D0 "\t"
 *   insn=0x00000000002E71CC string=0x00000000002E7098 ""
 *   insn=0x00000000002E71D0 string=0x00000000002E71D4 "?I"
 *   insn=0x00000000002E71DC string=0x00000000002E723C ""
 *   insn=0x00000000002E71E8 string=0x00000000002E71EC ""
 *   insn=0x00000000002E71F4 string=0x00000000002E71F8 "a"
 *   insn=0x00000000002E71F8 string=0x00000000002E71FC "c"
 *   insn=0x00000000002E7214 string=0x00000000002E7218 "a"
 *   insn=0x00000000002E7218 string=0x00000000002E721C "\n"
 *   insn=0x00000000002E7224 string=0x00000000002E7228 "@*"
 *   insn=0x00000000002E7230 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002E7234 string=0x00000000002E7238 "L"
 *   insn=0x00000000002E723C string=0x00000000002E7240 "h"
 *   insn=0x00000000002E7250 string=0x00000000002E7254 "j"
 *   insn=0x00000000002E7254 string=0x00000000002E7258 "i"
 *   insn=0x00000000002E7264 string=0x00000000002E72CC "h"
 *   insn=0x00000000002E7270 string=0x00000000002E7284 ""
 *   insn=0x00000000002E729C string=0x00000000002E72A0 "_"
 *   insn=0x00000000002E72A0 string=0x00000000002E72A4 "H"
 *   insn=0x00000000002E72A4 string=0x00000000002E72A8 "@"
 *   insn=0x00000000002E72A8 string=0x00000000002E72AC "_"
 *   insn=0x00000000002E72AC string=0x00000000002E72B0 " "
 *   insn=0x00000000002E72B0 string=0x00000000002E72B4 ""
 *   insn=0x00000000002E72B4 string=0x00000000002E72B8 "i"
 *   insn=0x00000000002E72B8 string=0x00000000002E72BC "H"
 *   insn=0x00000000002E72D4 string=0x00000000002E72D8 "\t"
 *   insn=0x00000000002E72DC string=0x00000000002E72E0 ")"
 *   insn=0x00000000002E72E0 string=0x00000000002E72E4 ""
 *   insn=0x00000000002E72E8 string=0x00000000002E72EC "h"
 *   insn=0x00000000002E72F0 string=0x00000000002E7304 "h&G)\n"
 *   insn=0x00000000002E72F8 string=0x00000000002E72FC "UG"
 *   insn=0x00000000002E72FC string=0x00000000002E7300 "@#"
 *   insn=0x00000000002E7304 string=0x00000000002E7308 "\n"
 *   insn=0x00000000002E730C string=0x00000000002E7310 "j:"
 *   insn=0x00000000002E732C string=0x00000000002E7330 "|g"
 *   insn=0x00000000002E7334 string=0x00000000002E7338 "h"
 *   insn=0x00000000002E7338 string=0x00000000002E733C "h!"
 *   insn=0x00000000002E7348 string=0x00000000002E734C "h:@"
 *   insn=0x00000000002E734C string=0x00000000002E7350 ""
 *   insn=0x00000000002E7350 string=0x00000000002E7354 "K"
 *   insn=0x00000000002E7354 string=0x00000000002E7358 "h:"
 *   insn=0x00000000002E7354 string=0x00000000002E735C "h"
 *   insn=0x00000000002E7360 string=0x00000000002E7364 "B"
 *   insn=0x00000000002E7364 string=0x00000000002E7368 "\t"
 *   insn=0x00000000002E7368 string=0x00000000002E736C "?I"
 *   insn=0x00000000002E736C string=0x00000000002E7370 "`"
 *   insn=0x00000000002E7370 string=0x00000000002E7374 "\t"
 *   insn=0x00000000002E7374 string=0x00000000002E7378 "?i"
 *   insn=0x00000000002E737C string=0x00000000002E7380 ""
 *   insn=0x00000000002E7380 string=0x00000000002E7384 "h"
 *   insn=0x00000000002E7394 string=0x00000000002E7398 "j"
 *   insn=0x00000000002E7398 string=0x00000000002E739C "i"
 *   insn=0x00000000002E73A8 string=0x00000000002E740C "h"
 *   insn=0x00000000002E73B4 string=0x00000000002E73C8 ""
 *   insn=0x00000000002E73BC string=0x00000000002E73C0 "XN"
 *   insn=0x00000000002E73E0 string=0x00000000002E73E4 "_"
 *   insn=0x00000000002E73E4 string=0x00000000002E73E8 "@"
 *   insn=0x00000000002E73EC string=0x00000000002E73F0 "H"
 *   insn=0x00000000002E73F0 string=0x00000000002E73F4 "_3"
 *   insn=0x00000000002E73F4 string=0x00000000002E73F8 "i"
 *   insn=0x00000000002E73F8 string=0x00000000002E73FC "@"
 *   insn=0x00000000002E7414 string=0x00000000002E7418 "\t"
 *   insn=0x00000000002E741C string=0x00000000002E7420 ")"
 *   insn=0x00000000002E7420 string=0x00000000002E7424 ""
 *   insn=0x00000000002E7428 string=0x00000000002E742C "h"
 *   insn=0x00000000002E7430 string=0x00000000002E7444 "h&G)\n"
 *   insn=0x00000000002E743C string=0x00000000002E7440 "@"
 *   insn=0x00000000002E7444 string=0x00000000002E7448 "\n"
 *   insn=0x00000000002E744C string=0x00000000002E7450 "j:"
 *   insn=0x00000000002E745C string=0x00000000002E7460 "Hm"
 *   insn=0x00000000002E7474 string=0x00000000002E7478 "h"
 *   insn=0x00000000002E7478 string=0x00000000002E747C "h"
 *   insn=0x00000000002E7484 string=0x00000000002E7488 "bn"
 *   insn=0x00000000002E7488 string=0x00000000002E748C "h:@"
 *   insn=0x00000000002E748C string=0x00000000002E7490 ""
 *   insn=0x00000000002E7490 string=0x00000000002E7494 "K"
 *   insn=0x00000000002E7494 string=0x00000000002E7498 "h:"
 *   insn=0x00000000002E7494 string=0x00000000002E749C "h"
 *   insn=0x00000000002E74A0 string=0x00000000002E74A4 "B"
 *   insn=0x00000000002E74A4 string=0x00000000002E74A8 "\t"
 *   insn=0x00000000002E74A8 string=0x00000000002E74AC "?i"
 *   insn=0x00000000002E74B0 string=0x00000000002E74B4 "\t"
 *   insn=0x00000000002E74B4 string=0x00000000002E74B8 "?"
 *   insn=0x00000000002E74BC string=0x00000000002E74C0 ""
 *   insn=0x00000000002E74C0 string=0x00000000002E74C4 "h"
 *   insn=0x00000000002E74D4 string=0x00000000002E74D8 "j"
 *   insn=0x00000000002E74D8 string=0x00000000002E74DC "i"
 *   insn=0x00000000002E74E8 string=0x00000000002E754C "h"
 *   insn=0x00000000002E74F4 string=0x00000000002E7508 ""
 *   insn=0x00000000002E74FC string=0x00000000002E7500 "N"
 *   insn=0x00000000002E7510 string=0x00000000002E7514 "38"
 *   insn=0x00000000002E7518 string=0x00000000002E751C " "
 *   insn=0x00000000002E7520 string=0x00000000002E7524 "( "
 *   insn=0x00000000002E7524 string=0x00000000002E7528 "V"
 *   insn=0x00000000002E7528 string=0x00000000002E752C "_"
 *   insn=0x00000000002E752C string=0x00000000002E7530 "@"
 *   insn=0x00000000002E7530 string=0x00000000002E7534 "H"
 *   insn=0x00000000002E7534 string=0x00000000002E7538 "_"
 *   insn=0x00000000002E753C string=0x00000000002E7540 "i"
 *   insn=0x00000000002E7554 string=0x00000000002E7558 "\t"
 *   insn=0x00000000002E755C string=0x00000000002E7560 ")"
 *   insn=0x00000000002E7560 string=0x00000000002E7564 ""
 *   insn=0x00000000002E7568 string=0x00000000002E756C "h"
 *   insn=0x00000000002E7570 string=0x00000000002E7584 "h&G)\n"
 *   insn=0x00000000002E757C string=0x00000000002E7580 "@"
 *   insn=0x00000000002E7584 string=0x00000000002E7588 "\n"
 *   insn=0x00000000002E758C string=0x00000000002E7590 "j:"
 *   insn=0x00000000002E75AC string=0x00000000002E75B0 "l:"
 *   insn=0x00000000002E75B0 string=0x00000000001F5F60 "P'"
 *   insn=0x00000000002E75B4 string=0x00000000002E75B8 "h"
 *   insn=0x00000000002E75B8 string=0x00000000002E75BC "h"
 *   insn=0x00000000002E75C8 string=0x00000000002E75CC "h:@"
 *   insn=0x00000000002E75CC string=0x00000000002E75D0 ""
 *   insn=0x00000000002E75D0 string=0x00000000002E75D4 "K"
 *   insn=0x00000000002E75D4 string=0x00000000002E75D8 "h:"
 *   insn=0x00000000002E75D4 string=0x00000000002E75DC "h"
 *   insn=0x00000000002E75E0 string=0x00000000002E75E4 "B"
 *   insn=0x00000000002E75E4 string=0x00000000002E75E8 "\t"
 *   insn=0x00000000002E75E8 string=0x00000000002E75EC "?"
 *   insn=0x00000000002E75F0 string=0x00000000002E75F4 "\t"
 *   insn=0x00000000002E75F4 string=0x00000000002E75F8 "?"
 *   insn=0x00000000002E75FC string=0x00000000002E7600 ""
 *   insn=0x00000000002E7600 string=0x00000000002E7604 "h"
 *   insn=0x00000000002E7614 string=0x00000000002E7618 "j"
 *   insn=0x00000000002E7618 string=0x00000000002E761C "i"
 *   insn=0x00000000002E7628 string=0x00000000002E76A0 "h"
 *   insn=0x00000000002E7634 string=0x00000000002E7648 ""
 *   insn=0x00000000002E765C string=0x00000000002E7660 "HC"
 *   insn=0x00000000002E7664 string=0x00000000002E7668 "@"
 *   insn=0x00000000002E766C string=0x00000000002E7670 "U"
 *   insn=0x00000000002E7670 string=0x00000000002E7674 "I#"
 *   insn=0x00000000002E7674 string=0x00000000002E7678 "IK"
 *   insn=0x00000000002E7678 string=0x00000000002E767C "I"
 *   insn=0x00000000002E767C string=0x00000000002E7680 "@"
 *   insn=0x00000000002E7680 string=0x00000000002E7684 "_"
 *   insn=0x00000000002E7684 string=0x00000000002E7688 "H"
 *   insn=0x00000000002E7688 string=0x00000000002E768C "_s"
 *   insn=0x00000000002E7690 string=0x00000000002E7694 "i"
 *   insn=0x00000000002E76A8 string=0x00000000002E76AC "\t"
 *   insn=0x00000000002E76B0 string=0x00000000002E76B4 ")"
 *   insn=0x00000000002E76B4 string=0x00000000002E76B8 ""
 *   insn=0x00000000002E76BC string=0x00000000002E76C0 "h"
 *   insn=0x00000000002E76C4 string=0x00000000002E76D8 "h&G)\n"
 *   insn=0x00000000002E76CC string=0x00000000002E76D0 "`F"
 *   insn=0x00000000002E76D8 string=0x00000000002E76DC "\n"
 *   insn=0x00000000002E76E0 string=0x00000000002E76E4 "j:"
 *   insn=0x00000000002E76E4 string=0x00000000002E76E8 "\n"
 *   insn=0x00000000002E7704 string=0x00000000001F61E0 "0'"
 *   insn=0x00000000002E7708 string=0x00000000002E770C "h"
 *   insn=0x00000000002E771C string=0x00000000002E7720 "h:@"
 *   insn=0x00000000002E7720 string=0x00000000002E7724 ""
 *   insn=0x00000000002E7724 string=0x00000000002E7728 "K"
 *   insn=0x00000000002E7728 string=0x00000000002E772C "h:"
 *   insn=0x00000000002E7728 string=0x00000000002E7730 "h"
 *   insn=0x00000000002E7738 string=0x00000000002E773C "\n"
 *   insn=0x00000000002E773C string=0x00000000002E7740 "_"
 *   insn=0x00000000002E774C string=0x00000000002E7750 "h.@"
 *   insn=0x00000000002E775C string=0x00000000002E7760 "`"
 *   insn=0x00000000002E777C string=0x00000000002E7780 "A"
 *   insn=0x00000000002E77A8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GameData::MergePartialFromCodedStream(
        Caver::Proto::GameData *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  __int128 v4; // q0
  __int128 v5; // q1
  __int128 v6; // q3
  __int128 v7; // q4
  __int128 v8; // q5
  __int128 v9; // q6
  __int128 v10; // q7
  __int128 v11; // q2
  google::protobuf::internal::RepeatedPtrFieldBase *v13; // x25
  char *v14; // x8
  unsigned __int64 v15; // x1
  unsigned int TagFallback; // w0
  int v17; // w8
  int v18; // w8
  int v19; // w27
  __int64 v20; // x8
  __int64 v21; // x26
  __int64 v22; // x8
  char *v23; // x8
  int v24; // w8
  int v25; // w9
  int v26; // w27
  int v27; // w8
  bool v28; // vf
  int v29; // w8
  _BYTE *v30; // x8
  int v31; // w8
  int v32; // w27
  __int64 v33; // x8
  __int64 v34; // x26
  __int64 v35; // x8
  char *v36; // x8
  int v37; // w8
  int v38; // w9
  int v39; // w27
  int v40; // w8
  int v41; // w8
  int v42; // w8
  int v43; // w27
  __int64 v44; // x8
  __int64 v45; // x26
  __int64 v46; // x8
  char *v47; // x8
  int v48; // w8
  int v49; // w9
  int v50; // w27
  int v51; // w8
  int v52; // w8
  int v53; // w8
  int v54; // w27
  __int64 v55; // x8
  __int64 v56; // x26
  __int64 v57; // x8
  char *v58; // x8
  int v59; // w8
  int v60; // w9
  int v61; // w27
  int v62; // w8
  int v63; // w8
  int v64; // w8
  int v65; // w27
  __int64 v66; // x8
  __int64 v67; // x26
  __int64 v68; // x8
  char *v69; // x8
  int v70; // w8
  int v71; // w9
  int v72; // w27
  int v73; // w8
  int v74; // w8
  _BYTE *v75; // x9
  __int64 result; // x0
  google::protobuf::internal::RepeatedPtrFieldBase *v77; // [xsp+8h] [xbp-128h]
  google::protobuf::internal::RepeatedPtrFieldBase *v78; // [xsp+10h] [xbp-120h]
  google::protobuf::internal::RepeatedPtrFieldBase *v79; // [xsp+18h] [xbp-118h]
  google::protobuf::internal::RepeatedPtrFieldBase *v80; // [xsp+20h] [xbp-110h]
  __int128 v81; // [xsp+30h] [xbp-100h]
  __int128 v82; // [xsp+50h] [xbp-E0h]
  __int128 v83; // [xsp+60h] [xbp-D0h]
  __int128 v84; // [xsp+70h] [xbp-C0h]
  __int128 v85; // [xsp+80h] [xbp-B0h]
  __int128 v86; // [xsp+90h] [xbp-A0h]
  __int128 v87; // [xsp+A0h] [xbp-90h]
  __int128 v88; // [xsp+B0h] [xbp-80h]
  unsigned int v89; // [xsp+C4h] [xbp-6Ch] BYREF
  __int64 v90; // [xsp+C8h] [xbp-68h]

  v80 = (Caver::Proto::GameData *)((char *)this + 240);
  v79 = (Caver::Proto::GameData *)((char *)this + 184);
  v78 = (Caver::Proto::GameData *)((char *)this + 128);
  v77 = (Caver::Proto::GameData *)((char *)this + 72);
  *(_QWORD *)&v4 = &Caver::Proto::Item::_default_name_;
  *(_QWORD *)&v5 = &Caver::Proto::Item::_default_short_description_;
  *(_QWORD *)&v6 = &Caver::Proto::Quest::_default_name_;
  *(_QWORD *)&v7 = &Caver::Proto::Quest::_default_follow_up_quest_;
  *(_QWORD *)&v8 = &Caver::Proto::EntityClass::_default_name_;
  *(_QWORD *)&v9 = &Caver::Proto::GuideTarget::_default_name_;
  *((_QWORD *)&v4 + 1) = &Caver::Proto::Item::_default_title_;
  *(_QWORD *)&v10 = &Caver::Proto::GuideTarget::_default_object_identifier_;
  v88 = v4;
  *((_QWORD *)&v5 + 1) = &Caver::Proto::Item::_default_description_;
  v87 = v5;
  *(_QWORD *)&v11 = &Caver::Proto::Skill::_default_name_;
  *((_QWORD *)&v11 + 1) = &Caver::Proto::Skill::_default_title_;
  *((_QWORD *)&v6 + 1) = &Caver::Proto::Quest::_default_title_;
  v81 = v11;
  v83 = v6;
  *((_QWORD *)&v7 + 1) = &Caver::Proto::Quest::_default_map_location_;
  v82 = v7;
  *((_QWORD *)&v8 + 1) = &Caver::Proto::EntityClass::_default_title_;
  v84 = v8;
  *((_QWORD *)&v9 + 1) = &Caver::Proto::GuideTarget::_default_level_name_;
  v86 = v9;
  v90 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v13 = (Caver::Proto::GameData *)((char *)this + 16);
  *((_QWORD *)&v10 + 1) = &Caver::Proto::GuideTarget::_default_carry_object_identifier_;
  v85 = v10;
LABEL_2:
  while ( 2 )
  {
    v14 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v14 >= *((_QWORD *)a2 + 2) || *v14 < 0 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v15 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( !TagFallback )
        return 1;
    }
    else
    {
      v15 = (unsigned __int8)*v14;
      *((_DWORD *)a2 + 8) = v15;
      *((_QWORD *)a2 + 1) = v14 + 1;
      if ( !(_DWORD)v15 )
        return 1;
    }
    switch ( (unsigned int)v15 >> 3 )
    {
      case 1u:
        v17 = v15 & 7;
        if ( v17 != 2 )
          goto LABEL_38;
        while ( 1 )
        {
          v19 = *((_DWORD *)this + 6);
          v18 = *((_DWORD *)this + 7);
          if ( v19 >= v18 )
          {
            if ( v18 == *((_DWORD *)this + 8) )
            {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v13, v18 + 1);
              v19 = *((_DWORD *)this + 6);
              v18 = *((_DWORD *)this + 7);
            }
            *((_DWORD *)this + 7) = v18 + 1;
            v21 = operator new(0x48u);
            *(_QWORD *)v21 = off_6C67F0;
            *(_QWORD *)(v21 + 8) = 0x100000000LL;
            *(_OWORD *)(v21 + 16) = v88;
            *(_BYTE *)(v21 + 48) = 0;
            *(_QWORD *)(v21 + 60) = 0;
            *(_QWORD *)(v21 + 52) = 0;
            *(_OWORD *)(v21 + 32) = v87;
            v22 = *((_QWORD *)this + 2);
            *((_DWORD *)this + 6) = v19 + 1;
            *(_QWORD *)(v22 + 8LL * v19) = v21;
          }
          else
          {
            v20 = *((_QWORD *)this + 2);
            *((_DWORD *)this + 6) = v19 + 1;
            v21 = *(_QWORD *)(v20 + 8LL * v19);
          }
          v23 = (char *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v23 >= *((_QWORD *)a2 + 2) || *v23 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v89) & 1) == 0 )
              return 0;
          }
          else
          {
            v89 = (unsigned __int8)*v23;
            *((_QWORD *)a2 + 1) = v23 + 1;
          }
          v24 = *((_DWORD *)a2 + 14);
          v25 = *((_DWORD *)a2 + 15);
          *((_DWORD *)a2 + 14) = v24 + 1;
          if ( v24 >= v25 )
            return 0;
          v26 = google::protobuf::io::CodedInputStream::PushLimit(a2, v89);
          if ( (Caver::Proto::Item::MergePartialFromCodedStream((Caver::Proto::Item *)v21, a2) & 1) == 0
            || !*((_BYTE *)a2 + 36) )
          {
            return 0;
          }
          google::protobuf::io::CodedInputStream::PopLimit(a2, v26);
          v27 = *((_DWORD *)a2 + 14);
          v28 = __OFSUB__(v27, 1);
          v29 = v27 - 1;
          if ( v29 < 0 == v28 )
            *((_DWORD *)a2 + 14) = v29;
          v30 = (_BYTE *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v30 >= *((_QWORD *)a2 + 2) )
            goto LABEL_2;
          if ( *v30 != 10 )
            break;
          *((_QWORD *)a2 + 1) = v30 + 1;
        }
        if ( *v30 != 18 )
          continue;
        goto LABEL_41;
      case 2u:
        v17 = v15 & 7;
        if ( v17 != 2 )
          goto LABEL_38;
        break;
      case 3u:
        v17 = v15 & 7;
        if ( v17 == 2 )
          goto LABEL_60;
        goto LABEL_38;
      case 4u:
        v17 = v15 & 7;
        if ( v17 == 2 )
          goto LABEL_78;
        goto LABEL_38;
      case 5u:
        v17 = v15 & 7;
        if ( v17 == 2 )
          goto LABEL_96;
        goto LABEL_38;
      default:
        v17 = v15 & 7;
LABEL_38:
        if ( v17 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v15,
                a3)
            & 1) == 0 )
          return 0;
        continue;
    }
    break;
  }
  while ( 1 )
  {
    v32 = *((_DWORD *)this + 20);
    v31 = *((_DWORD *)this + 21);
    if ( v32 >= v31 )
    {
      if ( v31 == *((_DWORD *)this + 22) )
      {
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v77, v31 + 1);
        v32 = *((_DWORD *)this + 20);
        v31 = *((_DWORD *)this + 21);
      }
      *((_DWORD *)this + 21) = v31 + 1;
      v34 = operator new(0x38u);
      *(_DWORD *)(v34 + 8) = 0;
      *(_QWORD *)v34 = off_6C6868;
      *(_OWORD *)(v34 + 16) = v81;
      *(_QWORD *)(v34 + 48) = 0;
      *(_QWORD *)(v34 + 32) = &Caver::Proto::Skill::_default_description_;
      *(_QWORD *)(v34 + 40) = 0;
      v35 = *((_QWORD *)this + 9);
      *((_DWORD *)this + 20) = v32 + 1;
      *(_QWORD *)(v35 + 8LL * v32) = v34;
    }
    else
    {
      v33 = *((_QWORD *)this + 9);
      *((_DWORD *)this + 20) = v32 + 1;
      v34 = *(_QWORD *)(v33 + 8LL * v32);
    }
    v36 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v36 >= *((_QWORD *)a2 + 2) || *v36 < 0 )
    {
      if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v89) & 1) == 0 )
        return 0;
    }
    else
    {
      v89 = (unsigned __int8)*v36;
      *((_QWORD *)a2 + 1) = v36 + 1;
    }
    v37 = *((_DWORD *)a2 + 14);
    v38 = *((_DWORD *)a2 + 15);
    *((_DWORD *)a2 + 14) = v37 + 1;
    if ( v37 >= v38 )
      return 0;
    v39 = google::protobuf::io::CodedInputStream::PushLimit(a2, v89);
    if ( (Caver::Proto::Skill::MergePartialFromCodedStream((Caver::Proto::Skill *)v34, a2) & 1) == 0
      || !*((_BYTE *)a2 + 36) )
    {
      return 0;
    }
    google::protobuf::io::CodedInputStream::PopLimit(a2, v39);
    v40 = *((_DWORD *)a2 + 14);
    v28 = __OFSUB__(v40, 1);
    v41 = v40 - 1;
    if ( v41 < 0 == v28 )
      *((_DWORD *)a2 + 14) = v41;
    v30 = (_BYTE *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v30 >= *((_QWORD *)a2 + 2) )
      goto LABEL_2;
    if ( *v30 != 18 )
    {
      if ( *v30 != 26 )
        goto LABEL_2;
      while ( 1 )
      {
        *((_QWORD *)a2 + 1) = v30 + 1;
LABEL_60:
        v43 = *((_DWORD *)this + 34);
        v42 = *((_DWORD *)this + 35);
        if ( v43 >= v42 )
        {
          if ( v42 == *((_DWORD *)this + 36) )
          {
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v78, v42 + 1);
            v43 = *((_DWORD *)this + 34);
            v42 = *((_DWORD *)this + 35);
          }
          *((_DWORD *)this + 35) = v42 + 1;
          v45 = operator new(0x38u);
          *(_DWORD *)(v45 + 8) = 0;
          *(_OWORD *)(v45 + 16) = v83;
          *(_QWORD *)v45 = off_6C68E0;
          *(_DWORD *)(v45 + 48) = 0;
          *(_OWORD *)(v45 + 32) = v82;
          v46 = *((_QWORD *)this + 16);
          *((_DWORD *)this + 34) = v43 + 1;
          *(_QWORD *)(v46 + 8LL * v43) = v45;
        }
        else
        {
          v44 = *((_QWORD *)this + 16);
          *((_DWORD *)this + 34) = v43 + 1;
          v45 = *(_QWORD *)(v44 + 8LL * v43);
        }
        v47 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v47 >= *((_QWORD *)a2 + 2) || *v47 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v89) & 1) == 0 )
            return 0;
        }
        else
        {
          v89 = (unsigned __int8)*v47;
          *((_QWORD *)a2 + 1) = v47 + 1;
        }
        v48 = *((_DWORD *)a2 + 14);
        v49 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v48 + 1;
        if ( v48 >= v49 )
          return 0;
        v50 = google::protobuf::io::CodedInputStream::PushLimit(a2, v89);
        if ( (Caver::Proto::Quest::MergePartialFromCodedStream((Caver::Proto::Quest *)v45, a2) & 1) == 0
          || !*((_BYTE *)a2 + 36) )
        {
          return 0;
        }
        google::protobuf::io::CodedInputStream::PopLimit(a2, v50);
        v51 = *((_DWORD *)a2 + 14);
        v28 = __OFSUB__(v51, 1);
        v52 = v51 - 1;
        if ( v52 < 0 == v28 )
          *((_DWORD *)a2 + 14) = v52;
        v30 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v30 >= *((_QWORD *)a2 + 2) )
          goto LABEL_2;
        if ( *v30 != 26 )
        {
          if ( *v30 != 34 )
            goto LABEL_2;
          while ( 1 )
          {
            *((_QWORD *)a2 + 1) = v30 + 1;
LABEL_78:
            v54 = *((_DWORD *)this + 48);
            v53 = *((_DWORD *)this + 49);
            if ( v54 >= v53 )
            {
              if ( v53 == *((_DWORD *)this + 50) )
              {
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v79, v53 + 1);
                v54 = *((_DWORD *)this + 48);
                v53 = *((_DWORD *)this + 49);
              }
              *((_DWORD *)this + 49) = v53 + 1;
              v56 = operator new(0x30u);
              *(_QWORD *)v56 = off_6C6958;
              *(_DWORD *)(v56 + 8) = 0;
              *(_OWORD *)(v56 + 16) = v84;
              *(_DWORD *)(v56 + 32) = 16843008;
              *(_DWORD *)(v56 + 36) = 0;
              *(_QWORD *)(v56 + 40) = 0;
              v57 = *((_QWORD *)this + 23);
              *((_DWORD *)this + 48) = v54 + 1;
              *(_QWORD *)(v57 + 8LL * v54) = v56;
            }
            else
            {
              v55 = *((_QWORD *)this + 23);
              *((_DWORD *)this + 48) = v54 + 1;
              v56 = *(_QWORD *)(v55 + 8LL * v54);
            }
            v58 = (char *)*((_QWORD *)a2 + 1);
            if ( (unsigned __int64)v58 >= *((_QWORD *)a2 + 2) || *v58 < 0 )
            {
              if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v89) & 1) == 0 )
                return 0;
            }
            else
            {
              v89 = (unsigned __int8)*v58;
              *((_QWORD *)a2 + 1) = v58 + 1;
            }
            v59 = *((_DWORD *)a2 + 14);
            v60 = *((_DWORD *)a2 + 15);
            *((_DWORD *)a2 + 14) = v59 + 1;
            if ( v59 >= v60 )
              return 0;
            v61 = google::protobuf::io::CodedInputStream::PushLimit(a2, v89);
            if ( (Caver::Proto::EntityClass::MergePartialFromCodedStream((Caver::Proto::EntityClass *)v56, a2) & 1) == 0
              || !*((_BYTE *)a2 + 36) )
            {
              return 0;
            }
            google::protobuf::io::CodedInputStream::PopLimit(a2, v61);
            v62 = *((_DWORD *)a2 + 14);
            v28 = __OFSUB__(v62, 1);
            v63 = v62 - 1;
            if ( v63 < 0 == v28 )
              *((_DWORD *)a2 + 14) = v63;
            v30 = (_BYTE *)*((_QWORD *)a2 + 1);
            if ( (unsigned __int64)v30 >= *((_QWORD *)a2 + 2) )
              goto LABEL_2;
            if ( *v30 != 34 )
            {
              if ( *v30 != 42 )
                goto LABEL_2;
              while ( 1 )
              {
                *((_QWORD *)a2 + 1) = v30 + 1;
LABEL_96:
                v65 = *((_DWORD *)this + 62);
                v64 = *((_DWORD *)this + 63);
                if ( v65 >= v64 )
                {
                  if ( v64 == *((_DWORD *)this + 64) )
                  {
                    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v80, v64 + 1);
                    v65 = *((_DWORD *)this + 62);
                    v64 = *((_DWORD *)this + 63);
                  }
                  *((_DWORD *)this + 63) = v64 + 1;
                  v67 = operator new(0x78u);
                  *(_OWORD *)(v67 + 16) = v86;
                  *(_QWORD *)v67 = off_6C6A48;
                  *(_QWORD *)(v67 + 64) = 0;
                  *(_DWORD *)(v67 + 72) = 4;
                  *(_QWORD *)(v67 + 8) = 0;
                  *(_OWORD *)(v67 + 32) = v85;
                  *(_BYTE *)(v67 + 48) = 0;
                  *(_QWORD *)(v67 + 56) = v67 + 80;
                  *(_DWORD *)(v67 + 112) = 0;
                  v68 = *((_QWORD *)this + 30);
                  *((_DWORD *)this + 62) = v65 + 1;
                  *(_QWORD *)(v68 + 8LL * v65) = v67;
                }
                else
                {
                  v66 = *((_QWORD *)this + 30);
                  *((_DWORD *)this + 62) = v65 + 1;
                  v67 = *(_QWORD *)(v66 + 8LL * v65);
                }
                v69 = (char *)*((_QWORD *)a2 + 1);
                if ( (unsigned __int64)v69 >= *((_QWORD *)a2 + 2) || *v69 < 0 )
                {
                  if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v89) & 1) == 0 )
                    return 0;
                }
                else
                {
                  v89 = (unsigned __int8)*v69;
                  *((_QWORD *)a2 + 1) = v69 + 1;
                }
                v70 = *((_DWORD *)a2 + 14);
                v71 = *((_DWORD *)a2 + 15);
                *((_DWORD *)a2 + 14) = v70 + 1;
                if ( v70 >= v71 )
                  return 0;
                v72 = google::protobuf::io::CodedInputStream::PushLimit(a2, v89);
                if ( (Caver::Proto::GuideTarget::MergePartialFromCodedStream((Caver::Proto::GuideTarget *)v67, a2) & 1) == 0
                  || !*((_BYTE *)a2 + 36) )
                {
                  return 0;
                }
                google::protobuf::io::CodedInputStream::PopLimit(a2, v72);
                v73 = *((_DWORD *)a2 + 14);
                v28 = __OFSUB__(v73, 1);
                v74 = v73 - 1;
                if ( v74 < 0 == v28 )
                  *((_DWORD *)a2 + 14) = v74;
                v30 = (_BYTE *)*((_QWORD *)a2 + 1);
                v75 = (_BYTE *)*((_QWORD *)a2 + 2);
                if ( v30 >= v75 || *v30 != 42 )
                {
                  if ( v30 == v75 && *((_DWORD *)a2 + 11) )
                  {
                    result = 1;
                    *((_DWORD *)a2 + 8) = 0;
                    *((_BYTE *)a2 + 36) = 1;
                    return result;
                  }
                  goto LABEL_2;
                }
              }
            }
          }
        }
      }
    }
LABEL_41:
    *((_QWORD *)a2 + 1) = v30 + 1;
  }
}


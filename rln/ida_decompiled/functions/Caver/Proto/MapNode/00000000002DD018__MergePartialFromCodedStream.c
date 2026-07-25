/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DD018
 * Mangled: _ZN5Caver5Proto7MapNode27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::MapNode::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001FD060  Caver::Proto::MapNode::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 15
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5710  Caver::Proto::Vector2::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FBF30  Caver::Proto::MapNode_Portal::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x00000000002DD7F0  Caver::Proto::MapNode::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 242
 *   insn=0x00000000002DD038 string=0x00000000002DD03C "[ "
 *   insn=0x00000000002DD03C string=0x00000000002DD040 "H "
 *   insn=0x00000000002DD040 string=0x00000000002DD044 "X"
 *   insn=0x00000000002DD044 string=0x00000000002DD048 "{"
 *   insn=0x00000000002DD048 string=0x00000000002DD04C "aD"
 *   insn=0x00000000002DD04C string=0x00000000002DD050 "i"
 *   insn=0x00000000002DD050 string=0x00000000002DD054 "\n"
 *   insn=0x00000000002DD054 string=0x00000000002DD058 "("
 *   insn=0x00000000002DD05C string=0x00000000002DD060 "y"
 *   insn=0x00000000002DD060 string=0x000000000058AA78 "8&"
 *   insn=0x00000000002DD068 string=0x00000000002DD06C "9"
 *   insn=0x00000000002DD06C string=0x00000000002DD070 "|c"
 *   insn=0x00000000002DD07C string=0x00000000002DD760 "h"
 *   insn=0x00000000002DD080 string=0x00000000002DD084 "oj"
 *   insn=0x00000000002DD084 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002DD088 string=0x00000000002DD08C "a""
 *   insn=0x00000000002DD090 string=0x00000000002DD094 "(|"
 *   insn=0x00000000002DD094 string=0x00000000002DD098 ""
 *   insn=0x00000000002DD0A0 string=0x00000000002DD0A4 "({"
 *   insn=0x00000000002DD0A0 string=0x00000000002DD4F4 "("
 *   insn=0x00000000002DD0A4 string=0x00000000002DD0A8 ""
 *   insn=0x00000000002DD0AC string=0x00000000002DD0B0 "("
 *   insn=0x00000000002DD0AC string=0x00000000002DD10C "("
 *   insn=0x00000000002DD0AC string=0x00000000002DD13C "("
 *   insn=0x00000000002DD0AC string=0x00000000002DD150 "("
 *   insn=0x00000000002DD0AC string=0x00000000002DD160 "("
 *   insn=0x00000000002DD0AC string=0x00000000002DD23C "("
 *   insn=0x00000000002DD0AC string=0x00000000002DD26C "("
 *   insn=0x00000000002DD0AC string=0x00000000002DD27C "("
 *   insn=0x00000000002DD0AC string=0x00000000002DD2D8 "("
 *   insn=0x00000000002DD0AC string=0x00000000002DD3C0 "("
 *   insn=0x00000000002DD0AC string=0x00000000002DD49C "("
 *   insn=0x00000000002DD0C0 string=0x00000000002DD0C4 ""
 *   insn=0x00000000002DD0CC string=0x00000000002DD0E4 "h"
 *   insn=0x00000000002DD0D0 string=0x00000000002DD0D4 "Ca"
 *   insn=0x00000000002DD0D4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002DD0DC string=0x00000000001F7CD0 "0'"
 *   insn=0x00000000002DD0E8 string=0x00000000002DD0EC ""!"
 *   insn=0x00000000002DD0EC string=0x00000000002DD0F0 "\t"
 *   insn=0x00000000002DD0F4 string=0x00000000002DD0F8 ")"
 *   insn=0x00000000002DD0F8 string=0x00000000002DD0FC ""
 *   insn=0x00000000002DD100 string=0x00000000002DD104 "h"
 *   insn=0x00000000002DD108 string=0x00000000002DD520 "h&G)\n"
 *   insn=0x00000000002DD10C string=0x00000000002DD110 "A"
 *   insn=0x00000000002DD110 string=0x00000000002DD114 "i"
 *   insn=0x00000000002DD114 string=0x00000000002DD118 "?"
 *   insn=0x00000000002DD11C string=0x00000000002DD120 "*"
 *   insn=0x00000000002DD120 string=0x00000000002DD124 "J"
 *   insn=0x00000000002DD124 string=0x00000000002DD128 "J"
 *   insn=0x00000000002DD128 string=0x00000000002DD12C ")"
 *   insn=0x00000000002DD130 string=0x00000000002DD134 "i"
 *   insn=0x00000000002DD134 string=0x00000000002DD138 "+"
 *   insn=0x00000000002DD14C string=0x00000000002DD418 "I "
 *   insn=0x00000000002DD158 string=0x00000000002DD15C "'"
 *   insn=0x00000000002DD164 string=0x00000000002DD168 "h"
 *   insn=0x00000000002DD170 string=0x00000000002DD174 "\t"
 *   insn=0x00000000002DD174 string=0x00000000002DD178 "I."
 *   insn=0x00000000002DD178 string=0x00000000002DD17C ")"
 *   insn=0x00000000002DD17C string=0x00000000002DD180 ""
 *   insn=0x00000000002DD184 string=0x00000000002DD188 "h"
 *   insn=0x00000000002DD188 string=0x00000000002DD18C "?"
 *   insn=0x00000000002DD190 string=0x00000000002DD1A4 "i"
 *   insn=0x00000000002DD198 string=0x00000000002DD19C ""
 *   insn=0x00000000002DD1A4 string=0x00000000002DD1A8 "?"
 *   insn=0x00000000002DD1AC string=0x00000000002DD1B0 "*"
 *   insn=0x00000000002DD1B0 string=0x00000000002DD1B4 "_"
 *   insn=0x00000000002DD1B4 string=0x00000000002DD1B8 "A-"
 *   insn=0x00000000002DD1B8 string=0x00000000002DD1BC ")"
 *   insn=0x00000000002DD1BC string=0x00000000002DD1C0 "i"
 *   insn=0x00000000002DD1C0 string=0x00000000002DD1C4 "?"
 *   insn=0x00000000002DD1D4 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002DD1DC string=0x00000000002DD1E0 "i"
 *   insn=0x00000000002DD1E4 string=0x00000000002DD1E8 "_"
 *   insn=0x00000000002DD1F0 string=0x00000000002DD1F4 "j"
 *   insn=0x00000000002DD1F4 string=0x00000000002DD1F8 "?"
 *   insn=0x00000000002DD200 string=0x00000000002DD204 "*"
 *   insn=0x00000000002DD204 string=0x00000000002DD208 "_"
 *   insn=0x00000000002DD20C string=0x00000000002DD210 ")"
 *   insn=0x00000000002DD210 string=0x00000000002DD214 "i"
 *   insn=0x00000000002DD214 string=0x00000000002DD218 "?"
 *   insn=0x00000000002DD21C string=0x00000000002DD220 "*"
 *   insn=0x00000000002DD220 string=0x00000000002DD224 "j"
 *   insn=0x00000000002DD224 string=0x00000000002DD228 "J"
 *   insn=0x00000000002DD228 string=0x00000000002DD22C ")"
 *   insn=0x00000000002DD230 string=0x00000000002DD234 "i"
 *   insn=0x00000000002DD240 string=0x00000000002DD244 "i"
 *   insn=0x00000000002DD244 string=0x00000000002DD248 "?"
 *   insn=0x00000000002DD248 string=0x00000000002DD24C """
 *   insn=0x00000000002DD24C string=0x00000000002DD250 "*"
 *   insn=0x00000000002DD254 string=0x00000000002DD258 "J"
 *   insn=0x00000000002DD258 string=0x00000000002DD25C ")"
 *   insn=0x00000000002DD260 string=0x00000000002DD264 "i"
 *   insn=0x00000000002DD264 string=0x00000000002DD268 "@"
 *   insn=0x00000000002DD270 string=0x00000000002DD274 "!"
 *   insn=0x00000000002DD278 string=0x00000000002DD598 "I "
 *   insn=0x00000000002DD280 string=0x00000000002DD284 "i"
 *   insn=0x00000000002DD284 string=0x00000000002DD288 "?"
 *   insn=0x00000000002DD294 string=0x00000000002DD298 "no"
 *   insn=0x00000000002DD2A0 string=0x00000000002DD2A4 "i"
 *   insn=0x00000000002DD2AC string=0x00000000002DD2B0 "?"
 *   insn=0x00000000002DD2B0 string=0x00000000002DD2B4 "j"
 *   insn=0x00000000002DD2B8 string=0x00000000002DD2BC ""%"
 *   insn=0x00000000002DD2BC string=0x00000000002DD2C0 "("
 *   insn=0x00000000002DD2C8 string=0x00000000002DD2CC "("
 *   insn=0x00000000002DD2CC string=0x00000000002DD2D0 "h"
 *   insn=0x00000000002DD2D4 string=0x00000000002DD2E8 "I "
 *   insn=0x00000000002DD2EC string=0x00000000002DD2F0 ")"
 *   insn=0x00000000002DD2F0 string=0x00000000002DD2F4 "H"
 *   insn=0x00000000002DD2F8 string=0x00000000002DD2FC "?"
 *   insn=0x00000000002DD30C string=0x00000000002DD310 "hc"
 *   insn=0x00000000002DD310 string=0x00000000002DD314 "("
 *   insn=0x00000000002DD31C string=0x00000000002DD320 ",q"
 *   insn=0x00000000002DD320 string=0x00000000002DD324 "`#"
 *   insn=0x00000000002DD320 string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002DD324 string=0x00000000002DD328 "i"
 *   insn=0x00000000002DD328 string=0x00000000002DD32C "?"
 *   insn=0x00000000002DD330 string=0x00000000002DD334 "*"
 *   insn=0x00000000002DD334 string=0x00000000002DD338 "_"
 *   insn=0x00000000002DD338 string=0x00000000002DD33C "!!"
 *   insn=0x00000000002DD33C string=0x00000000002DD340 ")"
 *   insn=0x00000000002DD340 string=0x00000000002DD344 "i"
 *   insn=0x00000000002DD344 string=0x00000000002DD348 "?"
 *   insn=0x00000000002DD348 string=0x00000000002DD34C "#"
 *   insn=0x00000000002DD354 string=0x00000000002DD358 ">o"
 *   insn=0x00000000002DD360 string=0x00000000002DD364 "i"
 *   insn=0x00000000002DD368 string=0x00000000002DD36C "_"
 *   insn=0x00000000002DD374 string=0x00000000002DD378 "j"
 *   insn=0x00000000002DD378 string=0x00000000002DD37C "?"
 *   insn=0x00000000002DD384 string=0x00000000002DD388 "*"
 *   insn=0x00000000002DD388 string=0x00000000002DD38C "_!"
 *   insn=0x00000000002DD390 string=0x00000000002DD394 ")"
 *   insn=0x00000000002DD394 string=0x00000000002DD398 "i"
 *   insn=0x00000000002DD398 string=0x00000000002DD39C "?"
 *   insn=0x00000000002DD3A0 string=0x00000000002DD3A4 "*"
 *   insn=0x00000000002DD3A4 string=0x00000000002DD3A8 "j"
 *   insn=0x00000000002DD3A8 string=0x00000000002DD3AC "J"
 *   insn=0x00000000002DD3AC string=0x00000000002DD3B0 ")"
 *   insn=0x00000000002DD3B4 string=0x00000000002DD3B8 "i"
 *   insn=0x00000000002DD3C4 string=0x00000000002DD3C8 "i"
 *   insn=0x00000000002DD3C8 string=0x00000000002DD3CC "?"
 *   insn=0x00000000002DD3E4 string=0x00000000002DD3E8 "i"
 *   insn=0x00000000002DD3F0 string=0x00000000002DD3F4 "?"
 *   insn=0x00000000002DD3F4 string=0x00000000002DD3F8 "j"
 *   insn=0x00000000002DD400 string=0x00000000002DD404 "("
 *   insn=0x00000000002DD40C string=0x00000000002DD410 "("
 *   insn=0x00000000002DD410 string=0x00000000002DD414 "h"
 *   insn=0x00000000002DD41C string=0x00000000002DD420 ")"
 *   insn=0x00000000002DD420 string=0x00000000002DD424 "H"
 *   insn=0x00000000002DD428 string=0x00000000002DD42C "?"
 *   insn=0x00000000002DD434 string=0x00000000002DD438 "j`"
 *   insn=0x00000000002DD43C string=0x00000000002DD440 "hc"
 *   insn=0x00000000002DD440 string=0x00000000002DD444 "("
 *   insn=0x00000000002DD454 string=0x00000000002DD458 "i"
 *   insn=0x00000000002DD458 string=0x00000000002DD45C "?"
 *   insn=0x00000000002DD460 string=0x00000000002DD464 "*"
 *   insn=0x00000000002DD464 string=0x00000000002DD468 "_a"
 *   insn=0x00000000002DD46C string=0x00000000002DD470 "*"
 *   insn=0x00000000002DD470 string=0x00000000002DD474 "j"
 *   insn=0x00000000002DD474 string=0x00000000002DD478 "_"
 *   insn=0x00000000002DD47C string=0x00000000002DD480 "I"
 *   insn=0x00000000002DD480 string=0x00000000002DD484 "i"
 *   insn=0x00000000002DD484 string=0x00000000002DD488 ")"
 *   insn=0x00000000002DD488 string=0x00000000002DD48C "J"
 *   insn=0x00000000002DD490 string=0x00000000002DD494 "j"
 *   insn=0x00000000002DD4A0 string=0x00000000002DD4A4 "j"
 *   insn=0x00000000002DD4A4 string=0x00000000002DD4A8 "_"
 *   insn=0x00000000002DD4C0 string=0x00000000002DD4C4 "j"
 *   insn=0x00000000002DD4C8 string=0x00000000002DD4CC "?"
 *   insn=0x00000000002DD4D4 string=0x00000000002DD4D8 "i"
 *   insn=0x00000000002DD4D8 string=0x00000000002DD4DC "_"
 *   insn=0x00000000002DD4E4 string=0x00000000002DD4E8 "h.@"
 *   insn=0x00000000002DD4F8 string=0x00000000002DD4FC "`"
 *   insn=0x00000000002DD504 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002DD520 string=0x00000000002DD524 "\n"
 *   insn=0x00000000002DD528 string=0x00000000002DD52C "j:"
 *   insn=0x00000000002DD52C string=0x00000000002DD530 "\n"
 *   insn=0x00000000002DD548 string=0x00000000002DD54C "q`"
 *   insn=0x00000000002DD54C string=0x00000000001F5710 "P'"
 *   insn=0x00000000002DD550 string=0x00000000002DD554 "h"
 *   insn=0x00000000002DD560 string=0x00000000002DD564 "+"
 *   insn=0x00000000002DD564 string=0x00000000002DD568 "h:@"
 *   insn=0x00000000002DD568 string=0x00000000002DD56C ""
 *   insn=0x00000000002DD56C string=0x00000000002DD570 "K"
 *   insn=0x00000000002DD570 string=0x00000000002DD574 "h:"
 *   insn=0x00000000002DD570 string=0x00000000002DD578 "h"
 *   insn=0x00000000002DD580 string=0x00000000002DD584 "\t"
 *   insn=0x00000000002DD584 string=0x00000000002DD588 "?I"
 *   insn=0x00000000002DD58C string=0x00000000002DD590 ""
 *   insn=0x00000000002DD590 string=0x00000000002DD594 "h"
 *   insn=0x00000000002DD5A0 string=0x00000000002DD5A4 ")=D"
 *   insn=0x00000000002DD5A4 string=0x00000000002DD5A8 ""
 *   insn=0x00000000002DD5AC string=0x00000000002DD5B0 "?"
 *   insn=0x00000000002DD5B8 string=0x00000000002DD5BC "\t`"
 *   insn=0x00000000002DD5C0 string=0x00000000002DD5C4 "<"
 *   insn=0x00000000002DD5D4 string=0x00000000002DD5D8 "h"
 *   insn=0x00000000002DD5E0 string=0x00000000002DD5E4 "\t"
 *   insn=0x00000000002DD5E4 string=0x00000000002DD5E8 "?i"
 *   insn=0x00000000002DD5EC string=0x00000000002DD5F0 ""
 *   insn=0x00000000002DD5F0 string=0x00000000002DD5F4 "h"
 *   insn=0x00000000002DD618 string=0x00000000002DD67C "h"
 *   insn=0x00000000002DD624 string=0x00000000002DD638 ""
 *   insn=0x00000000002DD630 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002DD650 string=0x00000000002DD654 "H "
 *   insn=0x00000000002DD654 string=0x00000000002DD658 ""
 *   insn=0x00000000002DD684 string=0x00000000002DD688 "\t"
 *   insn=0x00000000002DD68C string=0x00000000002DD690 ")"
 *   insn=0x00000000002DD690 string=0x00000000002DD694 ""
 *   insn=0x00000000002DD698 string=0x00000000002DD69C "h"
 *   insn=0x00000000002DD6A0 string=0x00000000002DD6B4 "h&G)\n"
 *   insn=0x00000000002DD6A8 string=0x00000000002DD6AC "in"
 *   insn=0x00000000002DD6B4 string=0x00000000002DD6B8 "\n"
 *   insn=0x00000000002DD6BC string=0x00000000002DD6C0 "j:"
 *   insn=0x00000000002DD6C0 string=0x00000000002DD6C4 "j"
 *   insn=0x00000000002DD6E0 string=0x00000000002DD6E4 "`"
 *   insn=0x00000000002DD6E0 string=0x00000000001FBF30 "0'"
 *   insn=0x00000000002DD6E4 string=0x00000000002DD6E8 "h"
 *   insn=0x00000000002DD6E8 string=0x00000000002DD6EC "("
 *   insn=0x00000000002DD6F8 string=0x00000000002DD6FC "h:@"
 *   insn=0x00000000002DD6FC string=0x00000000002DD700 ""
 *   insn=0x00000000002DD700 string=0x00000000002DD704 "K"
 *   insn=0x00000000002DD704 string=0x00000000002DD708 "h:"
 *   insn=0x00000000002DD704 string=0x00000000002DD70C "h"
 *   insn=0x00000000002DD710 string=0x00000000002DD714 "b"
 *   insn=0x00000000002DD714 string=0x00000000002DD718 "\n"
 *   insn=0x00000000002DD718 string=0x00000000002DD71C "_i"
 *   insn=0x00000000002DD720 string=0x00000000002DD724 "\n"
 *   insn=0x00000000002DD724 string=0x00000000002DD728 "_"
 *   insn=0x00000000002DD72C string=0x00000000002DD730 ""
 *   insn=0x00000000002DD730 string=0x00000000002DD734 "h"
 *   insn=0x00000000002DD744 string=0x00000000002DD748 "Bn"
 *   insn=0x00000000002DD748 string=0x00000000002DD74C " "
 *   insn=0x00000000002DD750 string=0x00000000002DD754 "?"
 *   insn=0x00000000002DD768 string=0x00000000002DD76C "\t"
 *   insn=0x00000000002DD770 string=0x00000000002DD774 "!"
 *   insn=0x00000000002DD774 string=0x00000000002DD778 ""
 *   insn=0x00000000002DD778 string=0x00000000002DD77C "a""
 *   insn=0x00000000002DD77C string=0x00000000002DD780 "h"
 *   insn=0x00000000002DD78C string=0x00000000002DD794 ""
 *   insn=0x00000000002DD7CC string=0x00000000002DD7D0 "`"
 *   insn=0x00000000002DD7D8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002DD7E4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002DD7E8 string=0x00000000002DD7EC "6"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MapNode::MergePartialFromCodedStream(
        Caver::Proto::MapNode *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // x21
  unsigned int TagFallback; // w0
  unsigned __int64 v7; // x1
  int v8; // w8
  Caver::Proto::Vector2 *v9; // x22
  char *v10; // x8
  unsigned __int64 v11; // x8
  unsigned __int8 *v12; // x9
  unsigned int v13; // w10
  _BYTE *v14; // x9
  int v15; // w10
  char *v16; // x8
  unsigned int v17; // w9
  int v18; // w8
  _BYTE *v19; // x9
  int v20; // w11
  char *v21; // x9
  unsigned int v22; // w10
  _BYTE *v23; // x9
  unsigned __int64 v24; // x8
  unsigned __int8 *v25; // x9
  unsigned int v26; // w10
  _BYTE *v27; // x9
  int v28; // w11
  int v29; // w10
  __int64 *v30; // x1
  _QWORD *v31; // x0
  _BYTE *v32; // x9
  int v33; // w11
  char *v34; // x9
  unsigned int v35; // w10
  _BYTE *v36; // x9
  int v37; // w11
  __int64 *v38; // x1
  _QWORD *v39; // x0
  unsigned __int64 v40; // x8
  _BYTE *v41; // x9
  char *v42; // x10
  unsigned int v43; // w9
  unsigned __int8 *v44; // x10
  int v45; // w11
  int v46; // w8
  int v47; // w9
  int v48; // w23
  int v49; // w8
  bool v50; // vf
  int v51; // w8
  _BYTE *v52; // x8
  __int64 *v53; // x1
  _QWORD *v54; // x0
  _BYTE *v55; // x8
  int v56; // w8
  int v57; // w23
  __int64 v58; // x8
  __int64 v59; // x22
  __int64 v60; // x8
  char *v61; // x8
  int v62; // w8
  int v63; // w9
  int v64; // w23
  int v65; // w8
  int v66; // w8
  unsigned __int64 v67; // x9
  unsigned __int8 *v68; // x8
  __int64 result; // x0
  unsigned int v70; // [xsp+4h] [xbp-6Ch] BYREF
  __int64 v71; // [xsp+8h] [xbp-68h]

  v5 = (Caver::Proto::MapNode *)((char *)this + 40);
  v71 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
LABEL_123:
  while ( 1 )
  {
    v68 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v68 < *((_QWORD *)a2 + 2) && ((char)*v68 & 0x80000000) == 0 )
      break;
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
    v7 = TagFallback;
    *((_DWORD *)a2 + 8) = TagFallback;
    if ( !TagFallback )
      return 1;
LABEL_3:
    switch ( (unsigned int)v7 >> 3 )
    {
      case 1u:
        v8 = v7 & 7;
        if ( v8 != 2 )
          goto LABEL_84;
        v9 = (Caver::Proto::Vector2 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 33) |= 1u;
        if ( !v9 )
        {
          v9 = (Caver::Proto::Vector2 *)operator new(0x18u);
          Caver::Proto::Vector2::Vector2(v9);
          *((_QWORD *)this + 2) = v9;
        }
        v10 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v10 >= *((_QWORD *)a2 + 2) || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v70) & 1) == 0 )
            return 0;
        }
        else
        {
          v70 = (unsigned __int8)*v10;
          *((_QWORD *)a2 + 1) = v10 + 1;
        }
        v46 = *((_DWORD *)a2 + 14);
        v47 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v46 + 1;
        if ( v46 >= v47 )
          return 0;
        v48 = google::protobuf::io::CodedInputStream::PushLimit(a2, v70);
        if ( (Caver::Proto::Vector2::MergePartialFromCodedStream(v9, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v48);
        v49 = *((_DWORD *)a2 + 14);
        v50 = __OFSUB__(v49, 1);
        v51 = v49 - 1;
        if ( v51 < 0 == v50 )
          *((_DWORD *)a2 + 14) = v51;
        v52 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v52 >= *((_QWORD *)a2 + 2) || *v52 != 18 )
          continue;
        *((_QWORD *)a2 + 1) = v52 + 1;
        goto LABEL_96;
      case 2u:
        v8 = v7 & 7;
        if ( v8 != 2 )
          goto LABEL_84;
LABEL_96:
        v53 = (__int64 *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 33) |= 2u;
        if ( v53 == &Caver::Proto::MapNode::_default_level_name_ )
        {
          v54 = (_QWORD *)operator new(8u);
          *v54 = &byte_6FD2F8;
          *((_QWORD *)this + 3) = v54;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v55 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v55 >= *((_QWORD *)a2 + 2) || *v55 != 26 )
          continue;
        break;
      case 3u:
        v8 = v7 & 7;
        if ( v8 == 2 )
          goto LABEL_102;
        goto LABEL_84;
      case 4u:
        v8 = v7 & 7;
        if ( (v7 & 7) != 0 )
          goto LABEL_84;
        v16 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v16 < *((_QWORD *)a2 + 2) )
          goto LABEL_20;
        goto LABEL_120;
      case 5u:
        v8 = v7 & 7;
        if ( (v7 & 7) != 0 )
          goto LABEL_84;
        v12 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v12 < v11 )
          goto LABEL_12;
        goto LABEL_26;
      case 6u:
        v8 = v7 & 7;
        if ( (v7 & 7) != 0 )
          goto LABEL_84;
        v21 = (char *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v21 >= v11 )
          goto LABEL_41;
        goto LABEL_31;
      case 7u:
        v8 = v7 & 7;
        if ( v8 != 2 )
          goto LABEL_84;
        v29 = *((_DWORD *)this + 33);
        goto LABEL_48;
      case 8u:
        v8 = v7 & 7;
        if ( (v7 & 7) != 0 )
          goto LABEL_84;
        v25 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
        v24 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v25 < v24 )
          goto LABEL_35;
        goto LABEL_54;
      case 9u:
        v8 = v7 & 7;
        if ( (v7 & 7) != 0 )
          goto LABEL_84;
        v34 = (char *)*((_QWORD *)a2 + 1);
        v24 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v34 >= v24 )
          goto LABEL_63;
        goto LABEL_59;
      case 0xAu:
        v8 = v7 & 7;
        if ( v8 != 2 )
          goto LABEL_84;
        v15 = *((_DWORD *)this + 33);
        goto LABEL_68;
      case 0xBu:
        v8 = v7 & 7;
        if ( (v7 & 7) != 0 )
          goto LABEL_84;
        v42 = (char *)*((_QWORD *)a2 + 1);
        v40 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v42 >= v40 )
          goto LABEL_78;
        goto LABEL_74;
      default:
        v8 = v7 & 7;
LABEL_84:
        if ( v8 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v7,
                a3)
            & 1) == 0 )
          return 0;
        continue;
    }
    do
    {
      *((_QWORD *)a2 + 1) = v55 + 1;
LABEL_102:
      v57 = *((_DWORD *)this + 12);
      v56 = *((_DWORD *)this + 13);
      if ( v57 >= v56 )
      {
        if ( v56 == *((_DWORD *)this + 14) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v5, v56 + 1);
          v57 = *((_DWORD *)this + 12);
          v56 = *((_DWORD *)this + 13);
        }
        *((_DWORD *)this + 13) = v56 + 1;
        v59 = operator new(0x28u);
        *(_QWORD *)v59 = off_6C6610;
        *(_DWORD *)(v59 + 8) = 0;
        *(_QWORD *)(v59 + 24) = 1;
        *(_BYTE *)(v59 + 32) = 0;
        *(_DWORD *)(v59 + 36) = 0;
        *(_QWORD *)(v59 + 16) = &Caver::Proto::MapNode_Portal::_default_destination_name_;
        v60 = *((_QWORD *)this + 5);
        *((_DWORD *)this + 12) = v57 + 1;
        *(_QWORD *)(v60 + 8LL * v57) = v59;
      }
      else
      {
        v58 = *((_QWORD *)this + 5);
        *((_DWORD *)this + 12) = v57 + 1;
        v59 = *(_QWORD *)(v58 + 8LL * v57);
      }
      v61 = (char *)*((_QWORD *)a2 + 1);
      if ( (unsigned __int64)v61 >= *((_QWORD *)a2 + 2) || *v61 < 0 )
      {
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v70) & 1) == 0 )
          return 0;
      }
      else
      {
        v70 = (unsigned __int8)*v61;
        *((_QWORD *)a2 + 1) = v61 + 1;
      }
      v62 = *((_DWORD *)a2 + 14);
      v63 = *((_DWORD *)a2 + 15);
      *((_DWORD *)a2 + 14) = v62 + 1;
      if ( v62 >= v63 )
        return 0;
      v64 = google::protobuf::io::CodedInputStream::PushLimit(a2, v70);
      if ( (Caver::Proto::MapNode_Portal::MergePartialFromCodedStream((Caver::Proto::MapNode_Portal *)v59, a2) & 1) == 0
        || !*((_BYTE *)a2 + 36) )
      {
        return 0;
      }
      google::protobuf::io::CodedInputStream::PopLimit(a2, v64);
      v65 = *((_DWORD *)a2 + 14);
      v50 = __OFSUB__(v65, 1);
      v66 = v65 - 1;
      if ( v66 < 0 == v50 )
        *((_DWORD *)a2 + 14) = v66;
      v55 = (_BYTE *)*((_QWORD *)a2 + 1);
      v67 = *((_QWORD *)a2 + 2);
      if ( (unsigned __int64)v55 >= v67 )
        goto LABEL_123;
    }
    while ( *v55 == 26 );
    if ( *v55 != 32 )
      continue;
    v16 = v55 + 1;
    *((_QWORD *)a2 + 1) = v16;
    if ( (unsigned __int64)v16 < v67 )
    {
LABEL_20:
      if ( (*v16 & 0x80000000) == 0 )
      {
        v17 = (unsigned __int8)*v16;
        v70 = v17;
        *((_QWORD *)a2 + 1) = v16 + 1;
        if ( v17 > 3 )
          goto LABEL_23;
        goto LABEL_22;
      }
    }
LABEL_120:
    if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v70) & 1) == 0 )
      return 0;
    v17 = v70;
    if ( v70 > 3 )
      goto LABEL_23;
LABEL_22:
    v18 = *((_DWORD *)this + 33);
    *((_DWORD *)this + 24) = v17;
    *((_DWORD *)this + 33) = v18 | 0x10;
LABEL_23:
    v19 = (_BYTE *)*((_QWORD *)a2 + 1);
    v11 = *((_QWORD *)a2 + 2);
    if ( (unsigned __int64)v19 < v11 && *v19 == 40 )
    {
      v12 = v19 + 1;
      *((_QWORD *)a2 + 1) = v12;
      if ( (unsigned __int64)v12 >= v11 )
      {
LABEL_26:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v70) & 1) == 0 )
          return 0;
        v13 = v70;
        v14 = (_BYTE *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
        goto LABEL_28;
      }
LABEL_12:
      if ( (char)*v12 < 0 )
        goto LABEL_26;
      v13 = *v12;
      v14 = v12 + 1;
      v70 = v13;
      *((_QWORD *)a2 + 1) = v14;
LABEL_28:
      v20 = *((_DWORD *)this + 33);
      *((_BYTE *)this + 100) = v13 != 0;
      *((_DWORD *)this + 33) = v20 | 0x20;
      if ( (unsigned __int64)v14 < v11 && *v14 == 48 )
      {
        v21 = v14 + 1;
        *((_QWORD *)a2 + 1) = v21;
        if ( (unsigned __int64)v21 < v11 )
        {
LABEL_31:
          if ( (*v21 & 0x80000000) == 0 )
          {
            v22 = (unsigned __int8)*v21;
            v23 = v21 + 1;
            v70 = v22;
            *((_QWORD *)a2 + 1) = v23;
            goto LABEL_43;
          }
        }
LABEL_41:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v70) & 1) == 0 )
          return 0;
        v22 = v70;
        v23 = (_BYTE *)*((_QWORD *)a2 + 1);
        v11 = *((_QWORD *)a2 + 2);
LABEL_43:
        v28 = *((_DWORD *)this + 33);
        *((_DWORD *)this + 26) = v22;
        v29 = v28 | 0x40;
        *((_DWORD *)this + 33) = v28 | 0x40;
        if ( (unsigned __int64)v23 < v11 && *v23 == 58 )
        {
          *((_QWORD *)a2 + 1) = v23 + 1;
LABEL_48:
          v30 = (__int64 *)*((_QWORD *)this + 14);
          *((_DWORD *)this + 33) = v29 | 0x80;
          if ( v30 == &Caver::Proto::MapNode::_default_music_ )
          {
            v31 = (_QWORD *)operator new(8u);
            *v31 = &byte_6FD2F8;
            *((_QWORD *)this + 14) = v31;
          }
          if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
            return 0;
          v32 = (_BYTE *)*((_QWORD *)a2 + 1);
          v24 = *((_QWORD *)a2 + 2);
          if ( (unsigned __int64)v32 < v24 && *v32 == 64 )
          {
            v25 = v32 + 1;
            *((_QWORD *)a2 + 1) = v25;
            if ( (unsigned __int64)v25 >= v24 )
            {
LABEL_54:
              if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v70) & 1) == 0 )
                return 0;
              v26 = v70;
              v27 = (_BYTE *)*((_QWORD *)a2 + 1);
              v24 = *((_QWORD *)a2 + 2);
              goto LABEL_56;
            }
LABEL_35:
            if ( (char)*v25 < 0 )
              goto LABEL_54;
            v26 = *v25;
            v27 = v25 + 1;
            v70 = v26;
            *((_QWORD *)a2 + 1) = v27;
LABEL_56:
            v33 = *((_DWORD *)this + 33);
            *((_BYTE *)this + 120) = v26 != 0;
            *((_DWORD *)this + 33) = v33 | 0x100;
            if ( (unsigned __int64)v27 < v24 && *v27 == 72 )
            {
              v34 = v27 + 1;
              *((_QWORD *)a2 + 1) = v34;
              if ( (unsigned __int64)v34 < v24 )
              {
LABEL_59:
                if ( (*v34 & 0x80000000) == 0 )
                {
                  v35 = (unsigned __int8)*v34;
                  v36 = v34 + 1;
                  v70 = v35;
                  *((_QWORD *)a2 + 1) = v36;
                  goto LABEL_65;
                }
              }
LABEL_63:
              if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v70) & 1) == 0 )
                return 0;
              v35 = v70;
              v36 = (_BYTE *)*((_QWORD *)a2 + 1);
              v24 = *((_QWORD *)a2 + 2);
LABEL_65:
              v37 = *((_DWORD *)this + 33);
              *((_DWORD *)this + 31) = v35;
              v15 = v37 | 0x200;
              *((_DWORD *)this + 33) = v37 | 0x200;
              if ( (unsigned __int64)v36 < v24 && *v36 == 82 )
              {
                *((_QWORD *)a2 + 1) = v36 + 1;
LABEL_68:
                v38 = (__int64 *)*((_QWORD *)this + 4);
                *((_DWORD *)this + 33) = v15 | 4;
                if ( v38 == &Caver::Proto::MapNode::_default_title_ )
                {
                  v39 = (_QWORD *)operator new(8u);
                  *v39 = &byte_6FD2F8;
                  *((_QWORD *)this + 4) = v39;
                }
                if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
                  return 0;
                v41 = (_BYTE *)*((_QWORD *)a2 + 1);
                v40 = *((_QWORD *)a2 + 2);
                if ( (unsigned __int64)v41 < v40 && *v41 == 88 )
                {
                  v42 = v41 + 1;
                  *((_QWORD *)a2 + 1) = v41 + 1;
                  if ( (unsigned __int64)(v41 + 1) < v40 )
                  {
LABEL_74:
                    if ( (*v42 & 0x80000000) == 0 )
                    {
                      v43 = (unsigned __int8)*v42;
                      v44 = (unsigned __int8 *)(v42 + 1);
                      v70 = v43;
                      *((_QWORD *)a2 + 1) = v44;
                      goto LABEL_80;
                    }
                  }
LABEL_78:
                  if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v70) & 1) == 0 )
                    return 0;
                  v43 = v70;
                  v44 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
                  v40 = *((_QWORD *)a2 + 2);
LABEL_80:
                  v45 = *((_DWORD *)this + 33);
                  *((_BYTE *)this + 128) = v43 != 0;
                  *((_DWORD *)this + 33) = v45 | 0x400;
                  if ( v44 == (unsigned __int8 *)v40 && *((_DWORD *)a2 + 11) )
                  {
                    result = 1;
                    *((_DWORD *)a2 + 8) = 0;
                    *((_BYTE *)a2 + 36) = 1;
                    return result;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v7 = *v68;
  *((_DWORD *)a2 + 8) = v7;
  *((_QWORD *)a2 + 1) = v68 + 1;
  if ( (_DWORD)v7 )
    goto LABEL_3;
  return 1;
}


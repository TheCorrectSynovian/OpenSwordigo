/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000312E84
 * Mangled: _ZN5Caver5Proto23CharControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::CharControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000201760  .memcpy
 *   0x0000000000202A10  google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<int> *)
 *
 * Referenced strings: 429
 *   insn=0x0000000000312EA0 string=0x0000000000312EA4 "W"
 *   insn=0x0000000000312EB4 string=0x0000000000312EB8 "x""
 *   insn=0x0000000000312EB4 string=0x000000000058B68C "|x"
 *   insn=0x0000000000312EB8 string=0x0000000000312EBC "yB"
 *   insn=0x0000000000312EC4 string=0x0000000000312EC8 "{3"
 *   insn=0x0000000000312ED4 string=0x0000000000313A30 ""
 *   insn=0x0000000000312EDC string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000312EE0 string=0x0000000000312EE4 "a""
 *   insn=0x0000000000312EE8 string=0x0000000000312EEC "(|"
 *   insn=0x0000000000312EEC string=0x0000000000312EF0 ""
 *   insn=0x0000000000312EF4 string=0x0000000000312EF8 "H"
 *   insn=0x0000000000312EF8 string=0x0000000000312EFC "h{"
 *   insn=0x0000000000312EF8 string=0x0000000000313240 "("
 *   insn=0x0000000000312EFC string=0x0000000000312F00 ""
 *   insn=0x0000000000312F04 string=0x0000000000312F08 "?"
 *   insn=0x0000000000312F04 string=0x0000000000312F3C "("
 *   insn=0x0000000000312F04 string=0x0000000000312F4C "?"
 *   insn=0x0000000000312F04 string=0x0000000000312F80 "?"
 *   insn=0x0000000000312F04 string=0x0000000000312FB4 "("
 *   insn=0x0000000000312F04 string=0x0000000000312FC4 "?"
 *   insn=0x0000000000312F04 string=0x0000000000312FF8 "?"
 *   insn=0x0000000000312F04 string=0x000000000031302C "("
 *   insn=0x0000000000312F04 string=0x000000000031303C "("
 *   insn=0x0000000000312F04 string=0x000000000031304C "("
 *   insn=0x0000000000312F04 string=0x000000000031305C "("
 *   insn=0x0000000000312F04 string=0x0000000000313098 "?"
 *   insn=0x0000000000312F04 string=0x00000000003130CC "?"
 *   insn=0x0000000000312F04 string=0x0000000000313100 "?"
 *   insn=0x0000000000312F04 string=0x0000000000313134 "?"
 *   insn=0x0000000000312F04 string=0x0000000000313168 "?"
 *   insn=0x0000000000312F04 string=0x000000000031319C "?"
 *   insn=0x0000000000312F04 string=0x00000000003131D0 "?"
 *   insn=0x0000000000312F04 string=0x0000000000313204 "?"
 *   insn=0x0000000000312F04 string=0x0000000000313238 "?"
 *   insn=0x0000000000312F0C string=0x0000000000312F10 "\t"
 *   insn=0x0000000000312F10 string=0x0000000000312F14 "("
 *   insn=0x0000000000312F14 string=0x0000000000312F18 "?"
 *   insn=0x0000000000312F1C string=0x0000000000312F20 "*"
 *   insn=0x0000000000312F24 string=0x0000000000312F28 "J"
 *   insn=0x0000000000312F28 string=0x0000000000312F2C ")"
 *   insn=0x0000000000312F30 string=0x0000000000312F34 "\t"
 *   insn=0x0000000000312F50 string=0x0000000000312F54 "\t"
 *   insn=0x0000000000312F54 string=0x0000000000312F58 "("
 *   insn=0x0000000000312F58 string=0x0000000000312F5C "?"
 *   insn=0x0000000000312F5C string=0x0000000000312F60 "B*"
 *   insn=0x0000000000312F60 string=0x0000000000312F64 "*"
 *   insn=0x0000000000312F64 string=0x0000000000312F68 "\n*"
 *   insn=0x0000000000312F68 string=0x0000000000312F6C "J"
 *   insn=0x0000000000312F6C string=0x0000000000312F70 ")"
 *   insn=0x0000000000312F74 string=0x0000000000312F78 "\t"
 *   insn=0x0000000000312F78 string=0x0000000000312F7C "R"
 *   insn=0x0000000000312F84 string=0x0000000000312F88 "\t"
 *   insn=0x0000000000312F88 string=0x0000000000312F8C "("
 *   insn=0x0000000000312F8C string=0x0000000000312F90 "?"
 *   insn=0x0000000000312F90 string=0x0000000000312F94 ""9"
 *   insn=0x0000000000312F94 string=0x0000000000312F98 "*"
 *   insn=0x0000000000312F9C string=0x0000000000312FA0 "J"
 *   insn=0x0000000000312FA0 string=0x0000000000312FA4 ")"
 *   insn=0x0000000000312FA8 string=0x0000000000312FAC "\t"
 *   insn=0x0000000000312FB8 string=0x0000000000312FBC "!"
 *   insn=0x0000000000312FC8 string=0x0000000000312FCC "\t"
 *   insn=0x0000000000312FCC string=0x0000000000312FD0 "("
 *   insn=0x0000000000312FD0 string=0x0000000000312FD4 "?"
 *   insn=0x0000000000312FD8 string=0x0000000000312FDC "*"
 *   insn=0x0000000000312FDC string=0x0000000000312FE0 "J9"
 *   insn=0x0000000000312FE0 string=0x0000000000312FE4 "J"
 *   insn=0x0000000000312FE4 string=0x0000000000312FE8 ")"
 *   insn=0x0000000000312FEC string=0x0000000000312FF0 "\t"
 *   insn=0x0000000000312FF8 string=0x0000000000312FFC "!"
 *   insn=0x0000000000312FFC string=0x0000000000313000 "\t"
 *   insn=0x0000000000313000 string=0x0000000000313004 "("
 *   insn=0x0000000000313004 string=0x0000000000313008 "?"
 *   insn=0x000000000031300C string=0x0000000000313010 "*"
 *   insn=0x0000000000313014 string=0x0000000000313018 "J"
 *   insn=0x0000000000313018 string=0x000000000031301C ")"
 *   insn=0x0000000000313020 string=0x0000000000313024 "\t"
 *   insn=0x0000000000313030 string=0x0000000000313034 "a"
 *   insn=0x0000000000313044 string=0x0000000000313048 "."
 *   insn=0x0000000000313050 string=0x0000000000313054 "a"
 *   insn=0x0000000000313060 string=0x0000000000313064 " "
 *   insn=0x0000000000313068 string=0x000000000031306C "\t"
 *   insn=0x000000000031306C string=0x0000000000313070 "("
 *   insn=0x0000000000313070 string=0x0000000000313074 "?"
 *   insn=0x0000000000313078 string=0x000000000031307C "("
 *   insn=0x0000000000313084 string=0x0000000000313088 "("
 *   insn=0x000000000031308C string=0x0000000000313090 ""
 *   insn=0x0000000000313098 string=0x000000000031309C "!"
 *   insn=0x000000000031309C string=0x00000000003130A0 "\t"
 *   insn=0x00000000003130A0 string=0x00000000003130A4 "("
 *   insn=0x00000000003130A4 string=0x00000000003130A8 "?"
 *   insn=0x00000000003130AC string=0x00000000003130B0 "*"
 *   insn=0x00000000003130B4 string=0x00000000003130B8 "J"
 *   insn=0x00000000003130B8 string=0x00000000003130BC ")"
 *   insn=0x00000000003130C0 string=0x00000000003130C4 "\t"
 *   insn=0x00000000003130D0 string=0x00000000003130D4 "\t"
 *   insn=0x00000000003130D4 string=0x00000000003130D8 "("
 *   insn=0x00000000003130D8 string=0x00000000003130DC "?"
 *   insn=0x00000000003130E0 string=0x00000000003130E4 "*"
 *   insn=0x00000000003130E8 string=0x00000000003130EC "J"
 *   insn=0x00000000003130EC string=0x00000000003130F0 ")"
 *   insn=0x00000000003130F4 string=0x00000000003130F8 "\t"
 *   insn=0x00000000003130F8 string=0x00000000003130FC "6"
 *   insn=0x0000000000313104 string=0x0000000000313108 "\t"
 *   insn=0x0000000000313108 string=0x000000000031310C "("
 *   insn=0x000000000031310C string=0x0000000000313110 "?"
 *   insn=0x0000000000313114 string=0x0000000000313118 "*"
 *   insn=0x000000000031311C string=0x0000000000313120 "J"
 *   insn=0x0000000000313120 string=0x0000000000313124 ")"
 *   insn=0x0000000000313128 string=0x000000000031312C "\t"
 *   insn=0x0000000000313134 string=0x0000000000313138 "A"
 *   insn=0x0000000000313138 string=0x000000000031313C "\t"
 *   insn=0x000000000031313C string=0x0000000000313140 "("
 *   insn=0x0000000000313140 string=0x0000000000313144 "?"
 *   insn=0x0000000000313148 string=0x000000000031314C "*"
 *   insn=0x0000000000313150 string=0x0000000000313154 "J"
 *   insn=0x0000000000313154 string=0x0000000000313158 ")"
 *   insn=0x000000000031315C string=0x0000000000313160 "\t"
 *   insn=0x000000000031316C string=0x0000000000313170 "\t"
 *   insn=0x0000000000313170 string=0x0000000000313174 "("
 *   insn=0x0000000000313174 string=0x0000000000313178 "?"
 *   insn=0x000000000031317C string=0x0000000000313180 "*"
 *   insn=0x0000000000313184 string=0x0000000000313188 "J"
 *   insn=0x0000000000313188 string=0x000000000031318C ")"
 *   insn=0x0000000000313190 string=0x0000000000313194 "\t"
 *   insn=0x0000000000313194 string=0x0000000000313198 "w"
 *   insn=0x00000000003131A0 string=0x00000000003131A4 "\t"
 *   insn=0x00000000003131A4 string=0x00000000003131A8 "("
 *   insn=0x00000000003131A8 string=0x00000000003131AC "?"
 *   insn=0x00000000003131AC string=0x00000000003131B0 "bA"
 *   insn=0x00000000003131B0 string=0x00000000003131B4 "*"
 *   insn=0x00000000003131B4 string=0x00000000003131B8 "*A"
 *   insn=0x00000000003131B8 string=0x00000000003131BC "J"
 *   insn=0x00000000003131BC string=0x00000000003131C0 ")"
 *   insn=0x00000000003131C4 string=0x00000000003131C8 "\t"
 *   insn=0x00000000003131C8 string=0x00000000003131CC ""
 *   insn=0x00000000003131D0 string=0x00000000003131D4 "a"
 *   insn=0x00000000003131D4 string=0x00000000003131D8 "\t"
 *   insn=0x00000000003131D8 string=0x00000000003131DC "("
 *   insn=0x00000000003131DC string=0x00000000003131E0 "?"
 *   insn=0x00000000003131E4 string=0x00000000003131E8 "*"
 *   insn=0x00000000003131EC string=0x00000000003131F0 "J"
 *   insn=0x00000000003131F0 string=0x00000000003131F4 ")"
 *   insn=0x00000000003131F8 string=0x00000000003131FC "\t"
 *   insn=0x0000000000313208 string=0x000000000031320C "\t"
 *   insn=0x000000000031320C string=0x0000000000313210 "("
 *   insn=0x0000000000313210 string=0x0000000000313214 "?"
 *   insn=0x0000000000313218 string=0x000000000031321C "*"
 *   insn=0x0000000000313220 string=0x0000000000313224 "J"
 *   insn=0x0000000000313224 string=0x0000000000313228 ")"
 *   insn=0x000000000031322C string=0x0000000000313230 "\t"
 *   insn=0x000000000031323C string=0x000000000031325C "\t"
 *   insn=0x0000000000313250 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000031325C string=0x0000000000313260 "("
 *   insn=0x0000000000313260 string=0x0000000000313264 "?"
 *   insn=0x0000000000313268 string=0x000000000031326C "*"
 *   insn=0x000000000031326C string=0x0000000000313270 "J "
 *   insn=0x0000000000313270 string=0x0000000000313274 "J"
 *   insn=0x0000000000313274 string=0x0000000000313278 ")"
 *   insn=0x000000000031327C string=0x0000000000313280 "\t"
 *   insn=0x0000000000313294 string=0x0000000000313990 "\t"
 *   insn=0x00000000003132A0 string=0x00000000003132A4 "k"
 *   insn=0x00000000003132A4 string=0x00000000001F9050 "0'"
 *   insn=0x00000000003132AC string=0x00000000003132B0 "\t"
 *   insn=0x00000000003132B0 string=0x00000000003132B4 "("
 *   insn=0x00000000003132BC string=0x00000000003132C0 "?"
 *   insn=0x00000000003132C0 string=0x00000000003132C4 "j"
 *   insn=0x00000000003132C8 string=0x00000000003132CC "";"
 *   insn=0x00000000003132CC string=0x00000000003132D0 "*"
 *   insn=0x00000000003132D0 string=0x00000000003132D4 "_A"
 *   insn=0x00000000003132D8 string=0x00000000003132DC ")"
 *   insn=0x00000000003132DC string=0x00000000003132E0 "\t"
 *   insn=0x00000000003132E0 string=0x00000000003132E4 "?"
 *   insn=0x00000000003132E4 string=0x00000000003132E8 "C"
 *   insn=0x00000000003132F0 string=0x00000000003132F4 "W"
 *   insn=0x00000000003132F4 string=0x00000000003132F8 "`;"
 *   insn=0x00000000003132FC string=0x0000000000313300 "\t"
 *   insn=0x0000000000313300 string=0x0000000000313304 "("
 *   insn=0x000000000031330C string=0x0000000000313310 "?"
 *   insn=0x0000000000313310 string=0x0000000000313314 "j"
 *   insn=0x000000000031331C string=0x0000000000313320 "("
 *   insn=0x0000000000313324 string=0x0000000000313328 "A8"
 *   insn=0x0000000000313328 string=0x000000000031332C "("
 *   insn=0x000000000031332C string=0x0000000000313330 ""
 *   insn=0x000000000031333C string=0x0000000000313340 " 9"
 *   insn=0x000000000031333C string=0x00000000001FA750 "0'"
 *   insn=0x000000000031334C string=0x0000000000313350 "("
 *   insn=0x0000000000313354 string=0x0000000000313358 ""
 *   insn=0x0000000000313358 string=0x000000000031335C ")"
 *   insn=0x0000000000313360 string=0x0000000000313364 "b6"
 *   insn=0x0000000000313364 string=0x0000000000313368 "\t"
 *   insn=0x0000000000313368 string=0x000000000031336C "?"
 *   insn=0x0000000000313370 string=0x0000000000313374 ""
 *   insn=0x0000000000313374 string=0x0000000000313378 ""
 *   insn=0x0000000000313394 string=0x0000000000313398 "("
 *   insn=0x000000000031339C string=0x00000000003133A0 ""
 *   insn=0x00000000003133A0 string=0x00000000003133A4 ")"
 *   insn=0x00000000003133A8 string=0x00000000003133AC ""4"
 *   insn=0x00000000003133AC string=0x00000000003133B0 "\t"
 *   insn=0x00000000003133B0 string=0x00000000003133B4 "?"
 *   insn=0x00000000003133B8 string=0x00000000003133BC ""
 *   insn=0x00000000003133BC string=0x00000000003133C0 ""
 *   insn=0x00000000003133DC string=0x00000000003133E0 "("
 *   insn=0x00000000003133E4 string=0x00000000003133E8 "\t"
 *   insn=0x00000000003133E8 string=0x00000000003133EC "("
 *   insn=0x00000000003133EC string=0x00000000003133F0 "?"
 *   insn=0x00000000003133F4 string=0x00000000003133F8 "*"
 *   insn=0x00000000003133F8 string=0x00000000003133FC "_"
 *   insn=0x0000000000313400 string=0x0000000000313404 ")"
 *   insn=0x0000000000313404 string=0x0000000000313408 "\t"
 *   insn=0x0000000000313408 string=0x000000000031340C "?"
 *   insn=0x000000000031340C string=0x0000000000313410 "C"
 *   insn=0x0000000000313418 string=0x000000000031341C ""
 *   insn=0x000000000031341C string=0x0000000000313420 " 2"
 *   insn=0x0000000000313424 string=0x0000000000313428 "\t"
 *   insn=0x0000000000313428 string=0x000000000031342C "("
 *   insn=0x0000000000313434 string=0x0000000000313438 "?"
 *   insn=0x0000000000313438 string=0x000000000031343C "j"
 *   insn=0x0000000000313440 string=0x0000000000313444 "b/"
 *   insn=0x0000000000313444 string=0x0000000000313448 "*"
 *   insn=0x0000000000313448 string=0x000000000031344C "_"
 *   insn=0x0000000000313450 string=0x0000000000313454 ")"
 *   insn=0x0000000000313454 string=0x0000000000313458 "\t"
 *   insn=0x0000000000313458 string=0x000000000031345C "?"
 *   insn=0x000000000031345C string=0x0000000000313460 "c"
 *   insn=0x0000000000313474 string=0x0000000000313478 "\t"
 *   insn=0x0000000000313478 string=0x000000000031347C "("
 *   insn=0x0000000000313484 string=0x0000000000313488 "?"
 *   insn=0x0000000000313488 string=0x000000000031348C "j"
 *   insn=0x0000000000313494 string=0x0000000000313498 "*"
 *   insn=0x0000000000313498 string=0x000000000031349C "_"
 *   insn=0x00000000003134A0 string=0x00000000003134A4 "B"
 *   insn=0x00000000003134A4 string=0x00000000003139AC ")"
 *   insn=0x00000000003134B8 string=0x00000000003134BC "("
 *   insn=0x00000000003134BC string=0x00000000003134C0 "\t"
 *   insn=0x00000000003134C4 string=0x00000000003134C8 ""
 *   insn=0x00000000003134D0 string=0x00000000003134D4 "j"
 *   insn=0x00000000003134DC string=0x00000000003134E0 "("
 *   insn=0x00000000003134E4 string=0x00000000003134E8 "A*"
 *   insn=0x00000000003134E8 string=0x00000000003134EC "("
 *   insn=0x00000000003134F4 string=0x00000000003134F8 "(\t"
 *   insn=0x00000000003134F8 string=0x00000000003134FC ""
 *   insn=0x0000000000313518 string=0x000000000031351C "("
 *   insn=0x0000000000313520 string=0x0000000000313524 ")"
 *   insn=0x0000000000313524 string=0x0000000000313528 ""
 *   insn=0x0000000000313528 string=0x000000000031352C ")"
 *   insn=0x000000000031352C string=0x0000000000313530 "?\t"
 *   insn=0x0000000000313534 string=0x0000000000313538 "\t"
 *   insn=0x0000000000313538 string=0x000000000031353C "?5"
 *   insn=0x0000000000313540 string=0x0000000000313544 "\t"
 *   insn=0x0000000000313544 string=0x0000000000313548 "?"
 *   insn=0x0000000000313548 string=0x000000000031354C "!'"
 *   insn=0x000000000031354C string=0x0000000000313550 "\t"
 *   insn=0x0000000000313550 string=0x0000000000313554 ""
 *   insn=0x000000000031355C string=0x0000000000313560 "|"
 *   insn=0x0000000000313570 string=0x0000000000313574 "("
 *   insn=0x0000000000313578 string=0x000000000031357C "("
 *   insn=0x000000000031357C string=0x0000000000313580 "\t"
 *   insn=0x0000000000313580 string=0x0000000000313584 "\n"
 *   insn=0x0000000000313584 string=0x0000000000313588 "_\t"
 *   insn=0x0000000000313588 string=0x000000000031358C "+%"
 *   insn=0x000000000031358C string=0x0000000000313590 "*"
 *   insn=0x0000000000313590 string=0x0000000000313594 "_A"
 *   insn=0x0000000000313598 string=0x000000000031359C "*"
 *   insn=0x000000000031359C string=0x00000000003135A0 "_"
 *   insn=0x00000000003135A0 string=0x00000000003135A4 "a$"
 *   insn=0x00000000003135A4 string=0x00000000003135A8 ")\t"
 *   insn=0x00000000003135A8 string=0x00000000003135AC "\t"
 *   insn=0x00000000003135AC string=0x00000000003135B0 "?"
 *   insn=0x00000000003135C8 string=0x00000000003135CC "("
 *   insn=0x00000000003135CC string=0x00000000003135D0 "\t"
 *   insn=0x00000000003135D8 string=0x00000000003135DC "\n"
 *   insn=0x00000000003135DC string=0x00000000003135E0 "_\t"
 *   insn=0x00000000003135E0 string=0x00000000003135E4 "k"
 *   insn=0x00000000003135E8 string=0x00000000003135EC "+""
 *   insn=0x00000000003135EC string=0x00000000003135F0 "*"
 *   insn=0x00000000003135F0 string=0x00000000003135F4 "_a"
 *   insn=0x00000000003135F8 string=0x00000000003135FC "*"
 *   insn=0x00000000003135FC string=0x0000000000313600 "_"
 *   insn=0x0000000000313600 string=0x0000000000313604 "a!"
 *   insn=0x0000000000313604 string=0x0000000000313608 ")\t"
 *   insn=0x0000000000313608 string=0x000000000031360C "\t"
 *   insn=0x000000000031360C string=0x0000000000313610 "?"
 *   insn=0x0000000000313610 string=0x0000000000313614 "C"
 *   insn=0x0000000000313628 string=0x000000000031362C "("
 *   insn=0x000000000031362C string=0x0000000000313630 "\t"
 *   insn=0x0000000000313638 string=0x000000000031363C "\n"
 *   insn=0x000000000031363C string=0x0000000000313640 "_\t"
 *   insn=0x0000000000313640 string=0x0000000000313644 "k"
 *   insn=0x0000000000313648 string=0x000000000031364C "+"
 *   insn=0x000000000031364C string=0x0000000000313650 "*"
 *   insn=0x0000000000313650 string=0x0000000000313654 "_"
 *   insn=0x0000000000313658 string=0x000000000031365C "*"
 *   insn=0x000000000031365C string=0x0000000000313660 "_"
 *   insn=0x0000000000313660 string=0x0000000000313664 "a"
 *   insn=0x0000000000313664 string=0x0000000000313668 ")\t"
 *   insn=0x0000000000313668 string=0x000000000031366C "\t"
 *   insn=0x000000000031366C string=0x0000000000313670 "?"
 *   insn=0x000000000031367C string=0x0000000000313680 "t"
 *   insn=0x0000000000313688 string=0x000000000031368C "\t"
 *   insn=0x000000000031368C string=0x0000000000313690 "("
 *   insn=0x0000000000313698 string=0x000000000031369C "?"
 *   insn=0x000000000031369C string=0x00000000003136A0 "j"
 *   insn=0x00000000003136A4 string=0x00000000003136A8 "A"
 *   insn=0x00000000003136A8 string=0x00000000003136AC "h.@"
 *   insn=0x00000000003136AC string=0x00000000003136B0 ""
 *   insn=0x00000000003136BC string=0x00000000003136C0 "d"
 *   insn=0x00000000003136C8 string=0x00000000003136CC "\t"
 *   insn=0x00000000003136CC string=0x00000000003136D0 "("
 *   insn=0x00000000003136D8 string=0x00000000003136DC "?"
 *   insn=0x00000000003136DC string=0x00000000003136E0 "j"
 *   insn=0x00000000003136E4 string=0x00000000003136E8 "B"
 *   insn=0x00000000003136E8 string=0x00000000003136EC "*"
 *   insn=0x00000000003136EC string=0x00000000003136F0 "_"
 *   insn=0x00000000003136F4 string=0x00000000003136F8 ")"
 *   insn=0x00000000003136F8 string=0x00000000003136FC "\t"
 *   insn=0x00000000003136FC string=0x0000000000313700 "?"
 *   insn=0x000000000031370C string=0x0000000000313710 "P"
 *   insn=0x0000000000313718 string=0x000000000031371C "\t"
 *   insn=0x000000000031371C string=0x0000000000313720 "("
 *   insn=0x0000000000313728 string=0x000000000031372C "?"
 *   insn=0x000000000031372C string=0x0000000000313730 "j"
 *   insn=0x0000000000313738 string=0x000000000031373C "*"
 *   insn=0x000000000031373C string=0x0000000000313740 "_"
 *   insn=0x0000000000313740 string=0x0000000000313744 "a"
 *   insn=0x0000000000313744 string=0x0000000000313748 ")"
 *   insn=0x0000000000313748 string=0x000000000031374C "\t"
 *   insn=0x000000000031374C string=0x0000000000313750 "?"
 *   insn=0x0000000000313750 string=0x0000000000313754 "c"
 *   insn=0x000000000031375C string=0x0000000000313760 "<"
 *   insn=0x0000000000313768 string=0x000000000031376C "\t"
 *   insn=0x000000000031376C string=0x0000000000313770 "("
 *   insn=0x0000000000313778 string=0x000000000031377C "?"
 *   insn=0x000000000031377C string=0x0000000000313780 "j"
 *   insn=0x0000000000313784 string=0x0000000000313788 "B"
 *   insn=0x0000000000313788 string=0x000000000031378C "*"
 *   insn=0x000000000031378C string=0x0000000000313790 "_"
 *   insn=0x0000000000313794 string=0x0000000000313798 ")"
 *   insn=0x0000000000313798 string=0x000000000031379C "\t"
 *   insn=0x000000000031379C string=0x00000000003137A0 "?"
 *   insn=0x00000000003137A4 string=0x00000000003137A8 "@"
 *   insn=0x00000000003137B0 string=0x00000000003137B4 "'"
 *   insn=0x00000000003137B4 string=0x00000000003137B8 "`"
 *   insn=0x00000000003137BC string=0x00000000003137C0 "\t"
 *   insn=0x00000000003137C0 string=0x00000000003137C4 "("
 *   insn=0x00000000003137CC string=0x00000000003137D0 "?"
 *   insn=0x00000000003137D0 string=0x00000000003137D4 "j"
 *   insn=0x00000000003137DC string=0x00000000003137E0 "*"
 *   insn=0x00000000003137E0 string=0x00000000003137E4 "_a"
 *   insn=0x00000000003137E4 string=0x00000000003137E8 "A"
 *   insn=0x00000000003137E8 string=0x00000000003137EC ")"
 *   insn=0x00000000003137EC string=0x00000000003137F0 "\t"
 *   insn=0x00000000003137F0 string=0x00000000003137F4 "?"
 *   insn=0x000000000031380C string=0x0000000000313810 "\t"
 *   insn=0x0000000000313810 string=0x0000000000313814 "("
 *   insn=0x000000000031381C string=0x0000000000313820 "?"
 *   insn=0x0000000000313820 string=0x0000000000313824 "j"
 *   insn=0x0000000000313828 string=0x000000000031382C """
 *   insn=0x000000000031382C string=0x0000000000313830 "*"
 *   insn=0x0000000000313830 string=0x0000000000313834 "_"
 *   insn=0x0000000000313838 string=0x000000000031383C ")"
 *   insn=0x000000000031383C string=0x0000000000313840 "\t"
 *   insn=0x0000000000313840 string=0x0000000000313844 "?"
 *   insn=0x0000000000313858 string=0x000000000031385C "@"
 *   insn=0x0000000000313864 string=0x0000000000313868 "_"
 *   insn=0x000000000031386C string=0x0000000000313870 "H"
 *   insn=0x0000000000313870 string=0x0000000000313874 "I{"
 *   insn=0x0000000000313874 string=0x0000000000313878 "?"
 *   insn=0x0000000000313878 string=0x000000000031387C "("
 *   insn=0x000000000031387C string=0x0000000000313880 "\t}@"
 *   insn=0x0000000000313888 string=0x000000000031388C ")}"
 *   insn=0x0000000000313890 string=0x0000000000313894 "}~"
 *   insn=0x00000000003138A4 string=0x00000000003138A8 "W"
 *   insn=0x00000000003138A8 string=0x00000000003138AC "1"
 *   insn=0x00000000003138AC string=0x00000000001F8570 "0'"
 *   insn=0x00000000003138E4 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000003138EC string=0x00000000003138F0 "I"
 *   insn=0x00000000003138FC string=0x0000000000313900 "K"
 *   insn=0x0000000000313904 string=0x0000000000313908 "K"
 *   insn=0x0000000000313908 string=0x000000000031390C "J"
 *   insn=0x000000000031390C string=0x0000000000313910 "V"
 *   insn=0x0000000000313910 string=0x0000000000313914 "\n"
 *   insn=0x0000000000313914 string=0x0000000000313918 ")"
 *   insn=0x0000000000313918 string=0x000000000031391C "_"
 *   insn=0x0000000000313920 string=0x0000000000313924 "K"
 *   insn=0x0000000000313928 string=0x000000000031392C "!"
 *   insn=0x000000000031392C string=0x0000000000313930 "K"
 *   insn=0x0000000000313934 string=0x0000000000313938 ""
 *   insn=0x000000000031393C string=0x0000000000313940 "i"
 *   insn=0x0000000000313944 string=0x0000000000313948 ")"
 *   insn=0x0000000000313948 string=0x000000000031394C "J\t"
 *   insn=0x0000000000313950 string=0x0000000000313954 "\n"
 *   insn=0x0000000000313954 string=0x0000000000313958 ""
 *   insn=0x000000000031397C string=0x0000000000313980 "K"
 *   insn=0x0000000000313984 string=0x0000000000313988 "\ty*"
 *   insn=0x0000000000313988 string=0x000000000031398C "L"
 *   insn=0x0000000000313990 string=0x0000000000313994 "("
 *   insn=0x0000000000313994 string=0x0000000000313998 "?"
 *   insn=0x000000000031399C string=0x00000000003139A0 "*"
 *   insn=0x00000000003139A0 string=0x00000000003139A4 "_"
 *   insn=0x00000000003139A8 string=0x00000000003139C0 "*"
 *   insn=0x00000000003139AC string=0x00000000003139B0 "\t"
 *   insn=0x00000000003139B0 string=0x00000000003139B4 "?"
 *   insn=0x00000000003139B4 string=0x00000000003139B8 "#"
 *   insn=0x00000000003139C0 string=0x00000000003139C4 "_!"
 *   insn=0x00000000003139C4 string=0x00000000003139C8 "A"
 *   insn=0x00000000003139C8 string=0x00000000003139CC ")"
 *   insn=0x00000000003139CC string=0x00000000003139D0 "\t"
 *   insn=0x00000000003139D0 string=0x00000000003139D4 "?"
 *   insn=0x00000000003139EC string=0x00000000003139F0 "\t"
 *   insn=0x00000000003139F0 string=0x00000000003139F4 "("
 *   insn=0x00000000003139FC string=0x0000000000313A00 "?"
 *   insn=0x0000000000313A00 string=0x0000000000313A04 "j"
 *   insn=0x0000000000313A08 string=0x0000000000313A0C """
 *   insn=0x0000000000313A0C string=0x0000000000313A10 "*"
 *   insn=0x0000000000313A10 string=0x0000000000313A14 "_A"
 *   insn=0x0000000000313A18 string=0x0000000000313A1C ")"
 *   insn=0x0000000000313A1C string=0x0000000000313A20 "\t"
 *   insn=0x0000000000313A20 string=0x0000000000313A24 "?"
 *   insn=0x0000000000313A24 string=0x0000000000313A28 "C"
 *   insn=0x0000000000313A28 string=0x0000000000313A2C "`"
 *   insn=0x0000000000313A30 string=0x0000000000313A34 ")"
 *   insn=0x0000000000313A3C string=0x0000000000313A40 "\t"
 *   insn=0x0000000000313A44 string=0x0000000000313A48 "!"
 *   insn=0x0000000000313A48 string=0x0000000000313A4C ""
 *   insn=0x0000000000313A4C string=0x0000000000313A50 "a""
 *   insn=0x0000000000313A50 string=0x0000000000313A54 "h"
 *   insn=0x0000000000313A74 string=0x0000000000313AA8 "\n"
 *   insn=0x0000000000313A9C string=0x0000000000313AA0 "`"
 *   insn=0x0000000000313AA8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::CharControllerComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  unsigned __int64 *v5; // x24
  unsigned __int64 *v6; // x25
  __int64 *v7; // x21
  unsigned int TagFallback; // w0
  unsigned __int64 v9; // x1
  char *v10; // x9
  unsigned __int64 v11; // x8
  unsigned int v12; // w10
  _BYTE *v13; // x9
  unsigned __int8 *v14; // x9
  unsigned __int64 v15; // x8
  unsigned int v16; // w10
  unsigned __int8 *v17; // x9
  unsigned __int8 *v18; // x9
  unsigned int v19; // w10
  _BYTE *v20; // x9
  unsigned __int8 *v21; // x9
  unsigned int v22; // w10
  _BYTE *v23; // x9
  unsigned __int8 *v24; // x9
  unsigned int v25; // w10
  _BYTE *v26; // x9
  char *v27; // x9
  unsigned int v28; // w28
  char *v29; // x9
  unsigned int v30; // w10
  _BYTE *v31; // x9
  unsigned __int8 *v32; // x9
  unsigned __int64 v33; // x8
  unsigned int v34; // w10
  unsigned __int8 *v35; // x9
  char *v36; // x9
  unsigned int v37; // w10
  _BYTE *v38; // x9
  char *v39; // x9
  unsigned int v40; // w10
  _BYTE *v41; // x9
  unsigned __int8 *v42; // x9
  unsigned int v43; // w10
  _BYTE *v44; // x9
  unsigned __int8 *v45; // x9
  unsigned int v46; // w10
  _BYTE *v47; // x9
  unsigned __int8 *v48; // x9
  unsigned int v49; // w10
  _BYTE *v50; // x9
  unsigned __int8 *v51; // x9
  unsigned int v52; // w10
  unsigned __int8 *v53; // x9
  unsigned __int8 *v54; // x9
  unsigned int v55; // w10
  char *v56; // x9
  int v57; // w11
  int v58; // w11
  int v59; // w9
  _BYTE *v60; // x8
  int v61; // w9
  _BYTE *v62; // x8
  int v63; // w9
  _BYTE *v64; // x9
  int v65; // w11
  int v66; // w11
  int v67; // w11
  int v68; // w9
  unsigned __int8 *v69; // x8
  int v70; // w9
  unsigned __int8 *v71; // x9
  int v72; // w11
  int v73; // w11
  int v74; // w11
  int v75; // w11
  int v76; // w11
  int v77; // w11
  int v78; // w11
  int v79; // w11
  int v80; // w26
  int v81; // w8
  char *v82; // x22
  __int64 v83; // x9
  __int64 v84; // x8
  unsigned __int64 v85; // x0
  void *v86; // x0
  __int64 v87; // x8
  int v88; // w9
  int v89; // w10
  int v90; // w22
  _BYTE *v91; // x10
  unsigned __int64 v92; // x9
  unsigned int v93; // w9
  __int64 v94; // x10
  int v95; // w11
  char *v96; // x8
  __int64 result; // x0
  char *v98; // [xsp+8h] [xbp-68h]
  unsigned int v99; // [xsp+14h] [xbp-5Ch] BYREF
  __int64 v100; // [xsp+18h] [xbp-58h]

  v5 = (unsigned __int64 *)((char *)a2 + 8);
  v6 = (unsigned __int64 *)((char *)a2 + 16);
  v7 = (__int64 *)((char *)this + 72);
  v98 = (char *)this + 88;
  v100 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
LABEL_206:
  while ( 2 )
  {
    v96 = (char *)*v5;
    if ( *v5 >= *v6 || *v96 < 0 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v9 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( !TagFallback )
        return 1;
    }
    else
    {
      v9 = (unsigned __int8)*v96;
      *((_DWORD *)a2 + 8) = v9;
      *((_QWORD *)a2 + 1) = v96 + 1;
      if ( !(_DWORD)v9 )
        return 1;
    }
    switch ( (unsigned int)v9 >> 3 )
    {
      case 1u:
        if ( (v9 & 7) != 0 )
          goto LABEL_72;
        v10 = (char *)*v5;
        v11 = *v6;
        if ( *v5 >= *v6 || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v99) & 1) == 0 )
            return 0;
          v12 = v99;
          v13 = (_BYTE *)*v5;
          v11 = *v6;
        }
        else
        {
          v12 = (unsigned __int8)*v10;
          v13 = v10 + 1;
          v99 = v12;
          *v5 = (unsigned __int64)v13;
        }
        v57 = *((_DWORD *)this + 31);
        *((_DWORD *)this + 4) = v12;
        *((_DWORD *)this + 31) = v57 | 2;
        if ( (unsigned __int64)v13 >= v11 || *v13 != 16 )
          continue;
        v29 = v13 + 1;
        *v5 = (unsigned __int64)v29;
        if ( (unsigned __int64)v29 < v11 )
          goto LABEL_41;
        goto LABEL_85;
      case 2u:
        if ( (v9 & 7) != 0 )
          goto LABEL_72;
        v29 = (char *)*v5;
        v11 = *v6;
        if ( *v5 >= *v6 )
          goto LABEL_85;
LABEL_41:
        if ( *v29 < 0 )
        {
LABEL_85:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v99) & 1) == 0 )
            return 0;
          v30 = v99;
          v31 = (_BYTE *)*v5;
          v11 = *v6;
        }
        else
        {
          v30 = (unsigned __int8)*v29;
          v31 = v29 + 1;
          v99 = v30;
          *v5 = (unsigned __int64)v31;
        }
        v58 = *((_DWORD *)this + 31);
        *((_DWORD *)this + 15) = v30;
        *((_DWORD *)this + 31) = v58 | 0x1000;
        if ( (unsigned __int64)v31 >= v11 || *v31 != 29 )
          continue;
        *v5 = (unsigned __int64)(v31 + 1);
LABEL_90:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v99) & 1) == 0 )
          return 0;
        v59 = *((_DWORD *)this + 31);
        *((_DWORD *)this + 26) = v99;
        *((_DWORD *)this + 31) = v59 | 0x8000;
        v60 = (_BYTE *)*v5;
        if ( *v5 >= *v6 || *v60 != 37 )
          continue;
        *v5 = (unsigned __int64)(v60 + 1);
LABEL_94:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v99) & 1) == 0 )
          return 0;
        v61 = *((_DWORD *)this + 31);
        *((_DWORD *)this + 27) = v99;
        *((_DWORD *)this + 31) = v61 | 0x10000;
        v62 = (_BYTE *)*v5;
        if ( *v5 >= *v6 || *v62 != 45 )
          continue;
        *v5 = (unsigned __int64)(v62 + 1);
LABEL_98:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v99) & 1) == 0 )
          return 0;
        v63 = *((_DWORD *)this + 31);
        *((_DWORD *)this + 28) = v99;
        *((_DWORD *)this + 31) = v63 | 0x20000;
        v64 = (_BYTE *)*v5;
        v15 = *v6;
        if ( *v5 >= *v6 || *v64 != 48 )
          continue;
        v36 = v64 + 1;
        *v5 = (unsigned __int64)v36;
        if ( (unsigned __int64)v36 >= v15 )
          goto LABEL_102;
LABEL_49:
        if ( *v36 < 0 )
        {
LABEL_102:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v99) & 1) == 0 )
            return 0;
          v37 = v99;
          v38 = (_BYTE *)*v5;
          v15 = *v6;
        }
        else
        {
          v37 = (unsigned __int8)*v36;
          v38 = v36 + 1;
          v99 = v37;
          *v5 = (unsigned __int64)v38;
        }
        v65 = *((_DWORD *)this + 31);
        *((_DWORD *)this + 16) = v37;
        *((_DWORD *)this + 31) = v65 | 0x2000;
        if ( (unsigned __int64)v38 >= v15 || *v38 != 56 )
          continue;
        v39 = v38 + 1;
        *v5 = (unsigned __int64)v39;
        if ( (unsigned __int64)v39 >= v15 )
          goto LABEL_107;
LABEL_53:
        if ( *v39 < 0 )
        {
LABEL_107:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v99) & 1) == 0 )
            return 0;
          v40 = v99;
          v41 = (_BYTE *)*v5;
          v15 = *v6;
        }
        else
        {
          v40 = (unsigned __int8)*v39;
          v41 = v39 + 1;
          v99 = v40;
          *v5 = (unsigned __int64)v41;
        }
        v66 = *((_DWORD *)this + 31);
        *((_DWORD *)this + 3) = v40;
        *((_DWORD *)this + 31) = v66 | 1;
        if ( (unsigned __int64)v41 < v15 && *v41 == 64 )
          goto LABEL_196;
        continue;
      case 3u:
        if ( (v9 & 7) == 5 )
          goto LABEL_90;
        goto LABEL_72;
      case 4u:
        if ( (v9 & 7) == 5 )
          goto LABEL_94;
        goto LABEL_72;
      case 5u:
        if ( (v9 & 7) == 5 )
          goto LABEL_98;
        goto LABEL_72;
      case 6u:
        if ( (v9 & 7) != 0 )
          goto LABEL_72;
        v36 = (char *)*v5;
        v15 = *v6;
        if ( *v5 < *v6 )
          goto LABEL_49;
        goto LABEL_102;
      case 7u:
        if ( (v9 & 7) != 0 )
          goto LABEL_72;
        v39 = (char *)*v5;
        v15 = *v6;
        if ( *v5 < *v6 )
          goto LABEL_53;
        goto LABEL_107;
      case 8u:
        if ( (v9 & 7) == 2 )
        {
          if ( (google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(a2)
              & 1) == 0 )
            return 0;
          while ( 1 )
          {
            v41 = (_BYTE *)*v5;
            v15 = *v6;
            if ( *v5 >= *v6 )
              goto LABEL_206;
            if ( *v41 != 64 )
              break;
LABEL_196:
            v27 = v41 + 1;
            *v5 = (unsigned __int64)v27;
            if ( (unsigned __int64)v27 < v15 )
              goto LABEL_37;
LABEL_172:
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v99) & 1) == 0 )
              return 0;
            v28 = v99;
LABEL_174:
            v80 = *((_DWORD *)this + 20);
            if ( v80 == *((_DWORD *)this + 21) )
            {
              if ( 2 * v80 < v80 + 1 )
                v81 = v80 + 1;
              else
                v81 = 2 * v80;
              v82 = (char *)*((_QWORD *)this + 9);
              v83 = ((unsigned __int64)v81 * (unsigned __int128)4uLL) >> 64;
              *((_DWORD *)this + 21) = v81;
              v84 = 4LL * v81;
              if ( v83 )
                v85 = -1;
              else
                v85 = v84;
              v86 = (void *)operator new[](v85);
              *((_QWORD *)this + 9) = v86;
              memcpy(v86, v82, 4LL * v80);
              if ( v82 != v98 && v82 )
              {
                operator delete[](v82);
                v80 = *((_DWORD *)this + 20);
              }
            }
            v87 = *((_QWORD *)this + 9);
            *((_DWORD *)this + 20) = v80 + 1;
            *(_DWORD *)(v87 + 4LL * v80) = v28;
            v88 = *((_DWORD *)this + 20);
            v89 = *((_DWORD *)this + 21);
            if ( v89 - v88 >= 1 )
            {
              v90 = v89 + 1 - v88;
              do
              {
                v91 = (_BYTE *)*v5;
                v92 = *v6;
                if ( *v5 >= *v6 || *v91 != 64 )
                  break;
                *v5 = (unsigned __int64)(v91 + 1);
                if ( (unsigned __int64)(v91 + 1) >= v92 || (char)v91[1] < 0 )
                {
                  if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v99) & 1) == 0 )
                    return 0;
                  v93 = v99;
                  v87 = *v7;
                }
                else
                {
                  v93 = (unsigned __int8)v91[1];
                  v99 = v93;
                  *v5 = (unsigned __int64)(v91 + 2);
                }
                v94 = *((int *)this + 20);
                --v90;
                *((_DWORD *)this + 20) = v94 + 1;
                *(_DWORD *)(v87 + 4 * v94) = v93;
              }
              while ( v90 > 1 );
            }
          }
          if ( *v41 == 72 )
          {
            v45 = v41 + 1;
            *v5 = (unsigned __int64)v45;
            if ( (unsigned __int64)v45 >= v15 )
            {
LABEL_200:
              if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v99) & 1) == 0 )
                return 0;
              v46 = v99;
              v47 = (_BYTE *)*v5;
              v15 = *v6;
              goto LABEL_202;
            }
LABEL_61:
            if ( (char)*v45 < 0 )
              goto LABEL_200;
            v46 = *v45;
            v47 = v45 + 1;
            v99 = v46;
            *v5 = (unsigned __int64)v47;
LABEL_202:
            v95 = *((_DWORD *)this + 31);
            *((_DWORD *)this + 5) = v46;
            *((_DWORD *)this + 31) = v95 | 4;
            if ( (unsigned __int64)v47 < v15 && *v47 == 80 )
            {
              v24 = v47 + 1;
              *v5 = (unsigned __int64)v24;
              if ( (unsigned __int64)v24 >= v15 )
              {
LABEL_161:
                if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v99) & 1) == 0 )
                  return 0;
                v25 = v99;
                v26 = (_BYTE *)*v5;
                v15 = *v6;
                goto LABEL_163;
              }
LABEL_26:
              if ( (char)*v24 < 0 )
                goto LABEL_161;
              v25 = *v24;
              v26 = v24 + 1;
              v99 = v25;
              *v5 = (unsigned __int64)v26;
LABEL_163:
              v78 = *((_DWORD *)this + 31);
              *((_DWORD *)this + 6) = v25;
              *((_DWORD *)this + 31) = v78 | 8;
              if ( (unsigned __int64)v26 < v15 && *v26 == 88 )
              {
                v48 = v26 + 1;
                *v5 = (unsigned __int64)v48;
                if ( (unsigned __int64)v48 >= v15 )
                {
LABEL_166:
                  if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v99) & 1) == 0 )
                    return 0;
                  v49 = v99;
                  v50 = (_BYTE *)*v5;
                  v15 = *v6;
                  goto LABEL_168;
                }
LABEL_65:
                if ( (char)*v48 < 0 )
                  goto LABEL_166;
                v49 = *v48;
                v50 = v48 + 1;
                v99 = v49;
                *v5 = (unsigned __int64)v50;
LABEL_168:
                v79 = *((_DWORD *)this + 31);
                *((_DWORD *)this + 7) = v49;
                *((_DWORD *)this + 31) = v79 | 0x10;
                if ( (unsigned __int64)v50 < v15 && *v50 == 96 )
                {
                  v18 = v50 + 1;
                  *v5 = (unsigned __int64)v18;
                  if ( (unsigned __int64)v18 >= v15 )
                  {
LABEL_145:
                    if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v99) & 1) == 0 )
                      return 0;
                    v19 = v99;
                    v20 = (_BYTE *)*v5;
                    v15 = *v6;
                    goto LABEL_147;
                  }
LABEL_16:
                  if ( (char)*v18 < 0 )
                    goto LABEL_145;
                  v19 = *v18;
                  v20 = v18 + 1;
                  v99 = v19;
                  *v5 = (unsigned __int64)v20;
LABEL_147:
                  v75 = *((_DWORD *)this + 31);
                  *((_DWORD *)this + 8) = v19;
                  *((_DWORD *)this + 31) = v75 | 0x20;
                  if ( (unsigned __int64)v20 < v15 && *v20 == 104 )
                  {
                    v21 = v20 + 1;
                    *v5 = (unsigned __int64)v21;
                    if ( (unsigned __int64)v21 >= v15 )
                    {
LABEL_150:
                      if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v99) & 1) == 0 )
                        return 0;
                      v22 = v99;
                      v23 = (_BYTE *)*v5;
                      v15 = *v6;
                      goto LABEL_152;
                    }
LABEL_22:
                    if ( (char)*v21 < 0 )
                      goto LABEL_150;
                    v22 = *v21;
                    v23 = v21 + 1;
                    v99 = v22;
                    *v5 = (unsigned __int64)v23;
LABEL_152:
                    v76 = *((_DWORD *)this + 31);
                    *((_DWORD *)this + 10) = v22;
                    *((_DWORD *)this + 31) = v76 | 0x80;
                    if ( (unsigned __int64)v23 < v15 && *v23 == 112 )
                    {
                      v42 = v23 + 1;
                      *v5 = (unsigned __int64)v42;
                      if ( (unsigned __int64)v42 >= v15 )
                      {
LABEL_155:
                        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v99) & 1) == 0 )
                          return 0;
                        v43 = v99;
                        v44 = (_BYTE *)*v5;
                        v15 = *v6;
                        goto LABEL_157;
                      }
LABEL_57:
                      if ( (char)*v42 < 0 )
                        goto LABEL_155;
                      v43 = *v42;
                      v44 = v42 + 1;
                      v99 = v43;
                      *v5 = (unsigned __int64)v44;
LABEL_157:
                      v77 = *((_DWORD *)this + 31);
                      *((_DWORD *)this + 11) = v43;
                      *((_DWORD *)this + 31) = v77 | 0x100;
                      if ( (unsigned __int64)v44 < v15 && *v44 == 120 )
                      {
                        v14 = v44 + 1;
                        *v5 = (unsigned __int64)v14;
                        if ( (unsigned __int64)v14 < v15 )
                        {
LABEL_12:
                          if ( ((char)*v14 & 0x80000000) == 0 )
                          {
                            v16 = *v14;
                            v17 = v14 + 1;
                            v99 = v16;
                            *v5 = (unsigned __int64)v17;
                            goto LABEL_114;
                          }
                        }
LABEL_112:
                        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v99) & 1) == 0 )
                          return 0;
                        v16 = v99;
                        v15 = *v6;
                        v17 = (unsigned __int8 *)*v5;
LABEL_114:
                        v67 = *((_DWORD *)this + 31);
                        *((_DWORD *)this + 9) = v16;
                        *((_DWORD *)this + 31) = v67 | 0x40;
                        if ( (int)v15 - (int)v17 >= 2 && *v17 == 133 && v17[1] == 1 )
                        {
                          *v5 = (unsigned __int64)(v17 + 2);
LABEL_118:
                          if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v99) & 1) == 0 )
                            return 0;
                          v68 = *((_DWORD *)this + 31);
                          *((_DWORD *)this + 29) = v99;
                          *((_DWORD *)this + 31) = v68 | 0x40000;
                          v69 = (unsigned __int8 *)*v5;
                          if ( (int)(*(_DWORD *)v6 - *v5) >= 2 && *v69 == 141 && v69[1] == 1 )
                          {
                            *v5 = (unsigned __int64)(v69 + 2);
LABEL_123:
                            if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v99) & 1) == 0 )
                              return 0;
                            v70 = *((_DWORD *)this + 31);
                            *((_DWORD *)this + 30) = v99;
                            *((_DWORD *)this + 31) = v70 | 0x80000;
                            v33 = *v6;
                            v71 = (unsigned __int8 *)*v5;
                            if ( (int)(*v6 - *v5) >= 2 && *v71 == 144 && v71[1] == 1 )
                            {
                              v32 = v71 + 2;
                              *v5 = (unsigned __int64)v32;
                              if ( (unsigned __int64)v32 >= v33 )
                              {
LABEL_128:
                                if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v99) & 1) == 0 )
                                  return 0;
                                v34 = v99;
                                v33 = *v6;
                                v35 = (unsigned __int8 *)*v5;
                                goto LABEL_130;
                              }
LABEL_45:
                              if ( (char)*v32 < 0 )
                                goto LABEL_128;
                              v34 = *v32;
                              v35 = v32 + 1;
                              v99 = v34;
                              *v5 = (unsigned __int64)v35;
LABEL_130:
                              v72 = *((_DWORD *)this + 31);
                              *((_DWORD *)this + 12) = v34;
                              *((_DWORD *)this + 31) = v72 | 0x200;
                              if ( (int)v33 - (int)v35 >= 2 && *v35 == 152 && v35[1] == 1 )
                              {
                                v51 = v35 + 2;
                                *v5 = (unsigned __int64)v51;
                                if ( (unsigned __int64)v51 >= v33 )
                                {
LABEL_134:
                                  if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v99) & 1) == 0 )
                                    return 0;
                                  v52 = v99;
                                  v33 = *v6;
                                  v53 = (unsigned __int8 *)*v5;
                                  goto LABEL_136;
                                }
LABEL_69:
                                if ( (char)*v51 < 0 )
                                  goto LABEL_134;
                                v52 = *v51;
                                v53 = v51 + 1;
                                v99 = v52;
                                *v5 = (unsigned __int64)v53;
LABEL_136:
                                v73 = *((_DWORD *)this + 31);
                                *((_DWORD *)this + 13) = v52;
                                *((_DWORD *)this + 31) = v73 | 0x400;
                                if ( (int)v33 - (int)v53 >= 2 && *v53 == 160 && v53[1] == 1 )
                                {
                                  v54 = v53 + 2;
                                  *v5 = (unsigned __int64)v54;
                                  if ( (unsigned __int64)v54 >= v33 )
                                  {
LABEL_140:
                                    if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v99) & 1) == 0 )
                                      return 0;
                                    v55 = v99;
                                    v56 = (char *)*v5;
                                    v33 = *v6;
                                    goto LABEL_142;
                                  }
LABEL_76:
                                  if ( (char)*v54 < 0 )
                                    goto LABEL_140;
                                  v55 = *v54;
                                  v56 = (char *)(v54 + 1);
                                  v99 = v55;
                                  *v5 = (unsigned __int64)v56;
LABEL_142:
                                  v74 = *((_DWORD *)this + 31);
                                  *((_DWORD *)this + 14) = v55;
                                  *((_DWORD *)this + 31) = v74 | 0x800;
                                  if ( v56 == (char *)v33 && *((_DWORD *)a2 + 11) )
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
                }
              }
            }
          }
          continue;
        }
        if ( (v9 & 7) == 0 )
        {
          v27 = (char *)*v5;
          if ( *v5 >= *v6 )
            goto LABEL_172;
LABEL_37:
          if ( (*v27 & 0x80000000) == 0 )
          {
            v28 = (unsigned __int8)*v27;
            v99 = v28;
            *v5 = (unsigned __int64)(v27 + 1);
            goto LABEL_174;
          }
          goto LABEL_172;
        }
LABEL_72:
        if ( (v9 & 7) == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v9,
                a3)
            & 1) != 0 )
          continue;
        return 0;
      case 9u:
        if ( (v9 & 7) != 0 )
          goto LABEL_72;
        v45 = (unsigned __int8 *)*v5;
        v15 = *v6;
        if ( *v5 < *v6 )
          goto LABEL_61;
        goto LABEL_200;
      case 0xAu:
        if ( (v9 & 7) != 0 )
          goto LABEL_72;
        v24 = (unsigned __int8 *)*v5;
        v15 = *v6;
        if ( *v5 < *v6 )
          goto LABEL_26;
        goto LABEL_161;
      case 0xBu:
        if ( (v9 & 7) != 0 )
          goto LABEL_72;
        v48 = (unsigned __int8 *)*v5;
        v15 = *v6;
        if ( *v5 < *v6 )
          goto LABEL_65;
        goto LABEL_166;
      case 0xCu:
        if ( (v9 & 7) != 0 )
          goto LABEL_72;
        v18 = (unsigned __int8 *)*v5;
        v15 = *v6;
        if ( *v5 < *v6 )
          goto LABEL_16;
        goto LABEL_145;
      case 0xDu:
        if ( (v9 & 7) != 0 )
          goto LABEL_72;
        v21 = (unsigned __int8 *)*v5;
        v15 = *v6;
        if ( *v5 < *v6 )
          goto LABEL_22;
        goto LABEL_150;
      case 0xEu:
        if ( (v9 & 7) != 0 )
          goto LABEL_72;
        v42 = (unsigned __int8 *)*v5;
        v15 = *v6;
        if ( *v5 < *v6 )
          goto LABEL_57;
        goto LABEL_155;
      case 0xFu:
        if ( (v9 & 7) != 0 )
          goto LABEL_72;
        v14 = (unsigned __int8 *)*v5;
        v15 = *v6;
        if ( *v5 < *v6 )
          goto LABEL_12;
        goto LABEL_112;
      case 0x10u:
        if ( (v9 & 7) == 5 )
          goto LABEL_118;
        goto LABEL_72;
      case 0x11u:
        if ( (v9 & 7) == 5 )
          goto LABEL_123;
        goto LABEL_72;
      case 0x12u:
        if ( (v9 & 7) != 0 )
          goto LABEL_72;
        v32 = (unsigned __int8 *)*v5;
        v33 = *v6;
        if ( *v5 < *v6 )
          goto LABEL_45;
        goto LABEL_128;
      case 0x13u:
        if ( (v9 & 7) != 0 )
          goto LABEL_72;
        v51 = (unsigned __int8 *)*v5;
        v33 = *v6;
        if ( *v5 < *v6 )
          goto LABEL_69;
        goto LABEL_134;
      case 0x14u:
        if ( (v9 & 7) != 0 )
          goto LABEL_72;
        v54 = (unsigned __int8 *)*v5;
        v33 = *v6;
        if ( *v5 < *v6 )
          goto LABEL_76;
        goto LABEL_140;
      default:
        goto LABEL_72;
    }
  }
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030BCE0
 * Mangled: _ZN5Caver5Proto23CollisionShapeComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::CollisionShapeComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F8D20  Caver::Proto::Program::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x000000000030C5B0  Caver::Proto::CollisionShapeComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 294
 *   insn=0x000000000030BCF8 string=0x000000000030BCFC "W"
 *   insn=0x000000000030BD08 string=0x000000000058B5EC "h"
 *   insn=0x000000000030BD0C string=0x000000000030BD10 "x""
 *   insn=0x000000000030BD10 string=0x000000000030BD14 "yB"
 *   insn=0x000000000030BD14 string=0x000000000030BD18 "Z"
 *   insn=0x000000000030BD20 string=0x000000000030C51C ""
 *   insn=0x000000000030BD24 string=0x000000000030BD28 "F"
 *   insn=0x000000000030BD28 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000030BD2C string=0x000000000030BD30 "a""
 *   insn=0x000000000030BD34 string=0x000000000030BD38 "(|"
 *   insn=0x000000000030BD38 string=0x000000000030BD3C "\t"
 *   insn=0x000000000030BD40 string=0x000000000030BD44 "H"
 *   insn=0x000000000030BD44 string=0x000000000030BD48 "H{"
 *   insn=0x000000000030BD44 string=0x000000000030BECC "("
 *   insn=0x000000000030BD48 string=0x000000000030BD4C ""
 *   insn=0x000000000030BD50 string=0x000000000030BD54 "("
 *   insn=0x000000000030BD50 string=0x000000000030BD88 "("
 *   insn=0x000000000030BD50 string=0x000000000030BD98 "("
 *   insn=0x000000000030BD50 string=0x000000000030BDA8 "("
 *   insn=0x000000000030BD50 string=0x000000000030BDDC "("
 *   insn=0x000000000030BD50 string=0x000000000030BE10 "("
 *   insn=0x000000000030BD50 string=0x000000000030BE44 "("
 *   insn=0x000000000030BD50 string=0x000000000030BE78 "("
 *   insn=0x000000000030BD50 string=0x000000000030BE88 "("
 *   insn=0x000000000030BD50 string=0x000000000030BEBC "("
 *   insn=0x000000000030BD50 string=0x000000000030BEDC "("
 *   insn=0x000000000030BD50 string=0x000000000030BF9C "("
 *   insn=0x000000000030BD50 string=0x000000000030BFB0 "("
 *   insn=0x000000000030BD54 string=0x000000000030BD58 "!"
 *   insn=0x000000000030BD58 string=0x000000000030BD5C "\t"
 *   insn=0x000000000030BD5C string=0x000000000030BD60 "("
 *   insn=0x000000000030BD60 string=0x000000000030BD64 "?"
 *   insn=0x000000000030BD64 string=0x000000000030BD68 ""-"
 *   insn=0x000000000030BD68 string=0x000000000030BD6C "*"
 *   insn=0x000000000030BD70 string=0x000000000030BD74 "J"
 *   insn=0x000000000030BD74 string=0x000000000030BD78 ")"
 *   insn=0x000000000030BD7C string=0x000000000030BD80 "\t"
 *   insn=0x000000000030BD80 string=0x000000000030BD84 "i"
 *   insn=0x000000000030BD8C string=0x000000000030BD90 "a"
 *   insn=0x000000000030BD90 string=0x000000000030BD94 "8"
 *   insn=0x000000000030BDAC string=0x000000000030BDB0 "\n"
 *   insn=0x000000000030BDB0 string=0x000000000030BDB4 "("
 *   insn=0x000000000030BDB4 string=0x000000000030BDB8 "_"
 *   insn=0x000000000030BDB8 string=0x000000000030BDBC "B("
 *   insn=0x000000000030BDBC string=0x000000000030BDC0 "I"
 *   insn=0x000000000030BDC0 string=0x000000000030BDC4 "\t("
 *   insn=0x000000000030BDC4 string=0x000000000030BDC8 ")"
 *   insn=0x000000000030BDC8 string=0x000000000030BDCC "J"
 *   insn=0x000000000030BDD0 string=0x000000000030BDD4 "\n"
 *   insn=0x000000000030BDD4 string=0x000000000030BDD8 "B"
 *   insn=0x000000000030BDE0 string=0x000000000030BDE4 "\t"
 *   insn=0x000000000030BDE4 string=0x000000000030BDE8 "("
 *   insn=0x000000000030BDE8 string=0x000000000030BDEC "?"
 *   insn=0x000000000030BDF0 string=0x000000000030BDF4 "*"
 *   insn=0x000000000030BDF8 string=0x000000000030BDFC "J"
 *   insn=0x000000000030BDFC string=0x000000000030BE00 ")"
 *   insn=0x000000000030BE04 string=0x000000000030BE08 "\t"
 *   insn=0x000000000030BE10 string=0x000000000030BE14 "A"
 *   insn=0x000000000030BE14 string=0x000000000030BE18 "\t"
 *   insn=0x000000000030BE18 string=0x000000000030BE1C "("
 *   insn=0x000000000030BE1C string=0x000000000030BE20 "?"
 *   insn=0x000000000030BE24 string=0x000000000030BE28 "*"
 *   insn=0x000000000030BE2C string=0x000000000030BE30 "J"
 *   insn=0x000000000030BE30 string=0x000000000030BE34 ")"
 *   insn=0x000000000030BE38 string=0x000000000030BE3C "\t"
 *   insn=0x000000000030BE3C string=0x000000000030BE40 "f"
 *   insn=0x000000000030BE48 string=0x000000000030BE4C "\t"
 *   insn=0x000000000030BE4C string=0x000000000030BE50 "("
 *   insn=0x000000000030BE50 string=0x000000000030BE54 "?"
 *   insn=0x000000000030BE58 string=0x000000000030BE5C "*"
 *   insn=0x000000000030BE60 string=0x000000000030BE64 "J"
 *   insn=0x000000000030BE64 string=0x000000000030BE68 ")"
 *   insn=0x000000000030BE6C string=0x000000000030BE70 "\t"
 *   insn=0x000000000030BE70 string=0x000000000030BE74 "o"
 *   insn=0x000000000030BE80 string=0x000000000030BE84 "1"
 *   insn=0x000000000030BE8C string=0x000000000030BE90 "\t"
 *   insn=0x000000000030BE90 string=0x000000000030BE94 "("
 *   insn=0x000000000030BE94 string=0x000000000030BE98 "?"
 *   insn=0x000000000030BE98 string=0x000000000030BE9C "B&"
 *   insn=0x000000000030BE9C string=0x000000000030BEA0 "*"
 *   insn=0x000000000030BEA0 string=0x000000000030BEA4 "\n&"
 *   insn=0x000000000030BEA4 string=0x000000000030BEA8 "J"
 *   insn=0x000000000030BEA8 string=0x000000000030BEAC ")"
 *   insn=0x000000000030BEB0 string=0x000000000030BEB4 "\t"
 *   insn=0x000000000030BEB4 string=0x000000000030BEB8 "2"
 *   insn=0x000000000030BEC4 string=0x000000000030BEC8 "y"
 *   insn=0x000000000030BEE0 string=0x000000000030BEE4 ""
 *   insn=0x000000000030BEE4 string=0x000000000030BEE8 ")"
 *   insn=0x000000000030BEEC string=0x000000000030BEF0 "b0"
 *   insn=0x000000000030BEF0 string=0x000000000030BEF4 "\t"
 *   insn=0x000000000030BEF4 string=0x000000000030BEF8 ")0"
 *   insn=0x000000000030BEF8 string=0x000000000030BEFC ")"
 *   insn=0x000000000030BEFC string=0x000000000030BF00 ""
 *   insn=0x000000000030BF04 string=0x000000000030BF08 ""
 *   insn=0x000000000030BF08 string=0x000000000030BF0C "?"
 *   insn=0x000000000030BF10 string=0x000000000030BF24 ""
 *   insn=0x000000000030BF18 string=0x000000000030BF1C ""
 *   insn=0x000000000030BF24 string=0x000000000030BF28 ")"
 *   insn=0x000000000030BF2C string=0x000000000030BF30 "b/"
 *   insn=0x000000000030BF30 string=0x000000000030BF34 "\t"
 *   insn=0x000000000030BF34 string=0x000000000030BF38 "?)"
 *   insn=0x000000000030BF3C string=0x000000000030BF40 ""
 *   insn=0x000000000030BF40 string=0x000000000030BF44 ""
 *   insn=0x000000000030BF4C string=0x000000000030BF50 ""
 *   insn=0x000000000030BF58 string=0x000000000030BF70 ""
 *   insn=0x000000000030BF60 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030BF64 string=0x000000000030BF68 "&"
 *   insn=0x000000000030BF68 string=0x00000000001F5000 "P'"
 *   insn=0x000000000030BF70 string=0x000000000030BF74 ")"
 *   insn=0x000000000030BF7C string=0x000000000030BF80 "\t"
 *   insn=0x000000000030BF84 string=0x000000000030BF88 ")"
 *   insn=0x000000000030BF88 string=0x000000000030BF8C ""
 *   insn=0x000000000030BF90 string=0x000000000030BF94 ""
 *   insn=0x000000000030BF98 string=0x000000000030BFE4 "h&G)\n"
 *   insn=0x000000000030BFA8 string=0x000000000030BFAC "{"
 *   insn=0x000000000030BFB4 string=0x000000000030BFB8 "@"
 *   insn=0x000000000030BFBC string=0x000000000030BFC0 "@,"
 *   insn=0x000000000030BFC4 string=0x000000000030BFC8 "B"
 *   insn=0x000000000030BFC8 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000030BFCC string=0x000000000030BFD0 "`"
 *   insn=0x000000000030BFDC string=0x00000000001F9050 "0'"
 *   insn=0x000000000030BFE4 string=0x000000000030BFE8 "\n"
 *   insn=0x000000000030BFEC string=0x000000000030BFF0 "j:"
 *   insn=0x000000000030BFFC string=0x000000000030C000 "`"
 *   insn=0x000000000030C00C string=0x000000000030C010 "D"
 *   insn=0x000000000030C010 string=0x00000000001F8D20 "0'"
 *   insn=0x000000000030C014 string=0x000000000030C018 "h"
 *   insn=0x000000000030C024 string=0x000000000030C028 "z"
 *   insn=0x000000000030C028 string=0x000000000030C02C "h:@"
 *   insn=0x000000000030C02C string=0x000000000030C030 ""
 *   insn=0x000000000030C030 string=0x000000000030C034 "K"
 *   insn=0x000000000030C034 string=0x000000000030C038 "h:"
 *   insn=0x000000000030C034 string=0x000000000030C03C ""
 *   insn=0x000000000030C03C string=0x000000000030C040 ")"
 *   insn=0x000000000030C048 string=0x000000000030C04C "\t"
 *   insn=0x000000000030C04C string=0x000000000030C050 "?I"
 *   insn=0x000000000030C050 string=0x000000000030C054 "A&"
 *   insn=0x000000000030C054 string=0x000000000030C058 ""
 *   insn=0x000000000030C058 string=0x000000000030C05C ""
 *   insn=0x000000000030C064 string=0x000000000030C068 ""
 *   insn=0x000000000030C070 string=0x000000000030C088 ""
 *   insn=0x000000000030C074 string=0x000000000030C078 "Z"
 *   insn=0x000000000030C088 string=0x000000000030C08C ")"
 *   insn=0x000000000030C094 string=0x000000000030C098 "\t"
 *   insn=0x000000000030C09C string=0x000000000030C0A0 ")"
 *   insn=0x000000000030C0A0 string=0x000000000030C0A4 ""
 *   insn=0x000000000030C0A8 string=0x000000000030C0AC ""
 *   insn=0x000000000030C0B0 string=0x000000000030C0C4 "h&G)\n"
 *   insn=0x000000000030C0C4 string=0x000000000030C0C8 "\n"
 *   insn=0x000000000030C0CC string=0x000000000030C0D0 "j:"
 *   insn=0x000000000030C0DC string=0x000000000030C0E0 "("
 *   insn=0x000000000030C0F4 string=0x000000000030C0F8 "h"
 *   insn=0x000000000030C104 string=0x000000000030C108 "B"
 *   insn=0x000000000030C108 string=0x000000000030C10C "h:@"
 *   insn=0x000000000030C10C string=0x000000000030C110 ""
 *   insn=0x000000000030C110 string=0x000000000030C114 "K"
 *   insn=0x000000000030C114 string=0x000000000030C118 "h:"
 *   insn=0x000000000030C114 string=0x000000000030C11C "\t"
 *   insn=0x000000000030C11C string=0x000000000030C120 "("
 *   insn=0x000000000030C120 string=0x000000000030C124 "?"
 *   insn=0x000000000030C128 string=0x000000000030C12C "*"
 *   insn=0x000000000030C12C string=0x000000000030C130 "_a"
 *   insn=0x000000000030C130 string=0x000000000030C134 "A"
 *   insn=0x000000000030C134 string=0x000000000030C138 ")"
 *   insn=0x000000000030C138 string=0x000000000030C13C "\t"
 *   insn=0x000000000030C13C string=0x000000000030C140 "?"
 *   insn=0x000000000030C158 string=0x000000000030C15C "\t"
 *   insn=0x000000000030C15C string=0x000000000030C160 "("
 *   insn=0x000000000030C164 string=0x000000000030C168 "_"
 *   insn=0x000000000030C170 string=0x000000000030C174 "j"
 *   insn=0x000000000030C174 string=0x000000000030C178 "?"
 *   insn=0x000000000030C180 string=0x000000000030C184 "("
 *   insn=0x000000000030C18C string=0x000000000030C190 "("
 *   insn=0x000000000030C190 string=0x000000000030C194 ""
 *   insn=0x000000000030C198 string=0x000000000030C19C "H"
 *   insn=0x000000000030C1A4 string=0x000000000030C1BC ""
 *   insn=0x000000000030C1A8 string=0x000000000030C1AC ""
 *   insn=0x000000000030C1BC string=0x000000000030C1C0 ")"
 *   insn=0x000000000030C1C8 string=0x000000000030C1CC "\t"
 *   insn=0x000000000030C1D0 string=0x000000000030C1D4 ")"
 *   insn=0x000000000030C1D4 string=0x000000000030C1D8 ""
 *   insn=0x000000000030C1DC string=0x000000000030C1E0 ""
 *   insn=0x000000000030C1E4 string=0x000000000030C1F8 "h&G)\n"
 *   insn=0x000000000030C1F8 string=0x000000000030C1FC "\n"
 *   insn=0x000000000030C200 string=0x000000000030C204 "j:"
 *   insn=0x000000000030C204 string=0x000000000030C208 "J"
 *   insn=0x000000000030C224 string=0x000000000030C228 "@"
 *   insn=0x000000000030C228 string=0x000000000030C22C "h"
 *   insn=0x000000000030C22C string=0x000000000030C230 ""
 *   insn=0x000000000030C23C string=0x000000000030C240 "h:@"
 *   insn=0x000000000030C240 string=0x000000000030C244 ""
 *   insn=0x000000000030C244 string=0x000000000030C248 "K"
 *   insn=0x000000000030C248 string=0x000000000030C24C "h:"
 *   insn=0x000000000030C248 string=0x000000000030C250 ""
 *   insn=0x000000000030C250 string=0x000000000030C254 ")"
 *   insn=0x000000000030C25C string=0x000000000030C260 "\t"
 *   insn=0x000000000030C260 string=0x000000000030C264 "?"
 *   insn=0x000000000030C268 string=0x000000000030C26C ""
 *   insn=0x000000000030C26C string=0x000000000030C270 ""
 *   insn=0x000000000030C278 string=0x000000000030C27C "5"
 *   insn=0x000000000030C27C string=0x00000000001FA750 "0'"
 *   insn=0x000000000030C28C string=0x000000000030C290 "("
 *   insn=0x000000000030C294 string=0x000000000030C298 "\t"
 *   insn=0x000000000030C298 string=0x000000000030C29C "("
 *   insn=0x000000000030C29C string=0x000000000030C2A0 "?"
 *   insn=0x000000000030C2A4 string=0x000000000030C2A8 "*"
 *   insn=0x000000000030C2A8 string=0x000000000030C2AC "_"
 *   insn=0x000000000030C2AC string=0x000000000030C2B0 "a"
 *   insn=0x000000000030C2B0 string=0x000000000030C2B4 "*"
 *   insn=0x000000000030C2B4 string=0x000000000030C2B8 "\n"
 *   insn=0x000000000030C2B8 string=0x000000000030C2BC "_"
 *   insn=0x000000000030C2C8 string=0x000000000030C2CC "a"
 *   insn=0x000000000030C2D4 string=0x000000000030C2D8 "\n"
 *   insn=0x000000000030C2D8 string=0x000000000030C2DC "("
 *   insn=0x000000000030C2E0 string=0x000000000030C2E4 "?"
 *   insn=0x000000000030C2EC string=0x000000000030C2F0 "i"
 *   insn=0x000000000030C2F0 string=0x000000000030C2F4 "_"
 *   insn=0x000000000030C2FC string=0x000000000030C300 "h.@"
 *   insn=0x000000000030C310 string=0x000000000030C314 "O"
 *   insn=0x000000000030C31C string=0x000000000030C320 "\t"
 *   insn=0x000000000030C320 string=0x000000000030C324 "("
 *   insn=0x000000000030C328 string=0x000000000030C32C "_"
 *   insn=0x000000000030C334 string=0x000000000030C338 "j"
 *   insn=0x000000000030C338 string=0x000000000030C33C "?"
 *   insn=0x000000000030C344 string=0x000000000030C348 "*"
 *   insn=0x000000000030C348 string=0x000000000030C34C "_a"
 *   insn=0x000000000030C34C string=0x000000000030C350 "a"
 *   insn=0x000000000030C350 string=0x000000000030C354 ")"
 *   insn=0x000000000030C354 string=0x000000000030C358 "\t"
 *   insn=0x000000000030C358 string=0x000000000030C35C "?"
 *   insn=0x000000000030C368 string=0x000000000030C36C "9"
 *   insn=0x000000000030C374 string=0x000000000030C378 "\t"
 *   insn=0x000000000030C378 string=0x000000000030C37C "("
 *   insn=0x000000000030C380 string=0x000000000030C384 "_"
 *   insn=0x000000000030C38C string=0x000000000030C390 "j"
 *   insn=0x000000000030C390 string=0x000000000030C394 "?"
 *   insn=0x000000000030C39C string=0x000000000030C3A0 "*"
 *   insn=0x000000000030C3A0 string=0x000000000030C3A4 "_"
 *   insn=0x000000000030C3A8 string=0x000000000030C3AC ")"
 *   insn=0x000000000030C3AC string=0x000000000030C3B0 "\t"
 *   insn=0x000000000030C3B0 string=0x000000000030C3B4 "?"
 *   insn=0x000000000030C3C0 string=0x000000000030C3C4 "#"
 *   insn=0x000000000030C3C4 string=0x000000000030C3C8 "@"
 *   insn=0x000000000030C3CC string=0x000000000030C3D0 "\t"
 *   insn=0x000000000030C3D0 string=0x000000000030C3D4 "("
 *   insn=0x000000000030C3D8 string=0x000000000030C3DC "_"
 *   insn=0x000000000030C3E4 string=0x000000000030C3E8 "j"
 *   insn=0x000000000030C3E8 string=0x000000000030C3EC "?"
 *   insn=0x000000000030C3F0 string=0x000000000030C3F4 "B\t"
 *   insn=0x000000000030C3F4 string=0x000000000030C3F8 "*"
 *   insn=0x000000000030C3F8 string=0x000000000030C3FC "_"
 *   insn=0x000000000030C400 string=0x000000000030C404 ")"
 *   insn=0x000000000030C404 string=0x000000000030C408 "\t"
 *   insn=0x000000000030C408 string=0x000000000030C40C "?"
 *   insn=0x000000000030C40C string=0x000000000030C410 "c"
 *   insn=0x000000000030C418 string=0x000000000030C41C ""
 *   insn=0x000000000030C424 string=0x000000000030C428 "\t"
 *   insn=0x000000000030C428 string=0x000000000030C42C "("
 *   insn=0x000000000030C430 string=0x000000000030C434 "_"
 *   insn=0x000000000030C43C string=0x000000000030C440 "j"
 *   insn=0x000000000030C440 string=0x000000000030C444 "?"
 *   insn=0x000000000030C44C string=0x000000000030C450 "("
 *   insn=0x000000000030C454 string=0x000000000030C458 "!"
 *   insn=0x000000000030C458 string=0x000000000030C45C "("
 *   insn=0x000000000030C45C string=0x000000000030C460 ""
 *   insn=0x000000000030C47C string=0x000000000030C480 "("
 *   insn=0x000000000030C484 string=0x000000000030C488 ""
 *   insn=0x000000000030C488 string=0x000000000030C48C ")"
 *   insn=0x000000000030C490 string=0x000000000030C494 "B"
 *   insn=0x000000000030C494 string=0x000000000030C498 "\t"
 *   insn=0x000000000030C498 string=0x000000000030C49C "?"
 *   insn=0x000000000030C4A0 string=0x000000000030C4A4 ""
 *   insn=0x000000000030C4A4 string=0x000000000030C4A8 ""
 *   insn=0x000000000030C4C4 string=0x000000000030C4C8 "("
 *   insn=0x000000000030C4CC string=0x000000000030C4D0 ""
 *   insn=0x000000000030C4D0 string=0x000000000030C4D4 ")"
 *   insn=0x000000000030C4DC string=0x000000000030C4E0 "\n"
 *   insn=0x000000000030C4E0 string=0x000000000030C4E4 "_"
 *   insn=0x000000000030C4E8 string=0x000000000030C4EC ""
 *   insn=0x000000000030C4EC string=0x000000000030C4F0 ""
 *   insn=0x000000000030C504 string=0x000000000030C508 "@"
 *   insn=0x000000000030C50C string=0x000000000030C510 "?"
 *   insn=0x000000000030C510 string=0x000000000030C514 "\t"
 *   insn=0x000000000030C51C string=0x000000000030C520 ")"
 *   insn=0x000000000030C528 string=0x000000000030C52C "\t"
 *   insn=0x000000000030C530 string=0x000000000030C534 "!"
 *   insn=0x000000000030C534 string=0x000000000030C538 ""
 *   insn=0x000000000030C538 string=0x000000000030C53C "a""
 *   insn=0x000000000030C53C string=0x000000000030C540 "h"
 *   insn=0x000000000030C560 string=0x000000000030C590 "P"
 *   insn=0x000000000030C584 string=0x000000000030C588 "`"
 *   insn=0x000000000030C590 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000030C5A0 string=0x000000000030C5A4 "C"
 *   insn=0x000000000030C5A4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CollisionShapeComponent::MergePartialFromCodedStream(
        Caver::Proto::CollisionShapeComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  unsigned __int64 *v5; // x24
  unsigned __int64 *v6; // x25
  unsigned int TagFallback; // w0
  unsigned __int64 v8; // x1
  int v9; // w8
  char *v10; // x9
  unsigned __int64 v11; // x8
  unsigned int v12; // w10
  _BYTE *v13; // x9
  unsigned __int8 *v14; // x10
  unsigned __int64 v15; // x8
  unsigned int v16; // w9
  char *v17; // x10
  char *v18; // x9
  unsigned __int64 v19; // x8
  unsigned int v20; // w10
  _BYTE *v21; // x9
  char *v22; // x9
  unsigned int v23; // w10
  _BYTE *v24; // x9
  char *v25; // x9
  unsigned int v26; // w10
  _BYTE *v27; // x9
  char *v28; // x9
  unsigned int v29; // w10
  _BYTE *v30; // x9
  char *v31; // x8
  unsigned int v32; // w9
  int v33; // w8
  _BYTE *v34; // x8
  Caver::Proto::Program *v35; // x21
  char *v36; // x8
  int v37; // w10
  int v38; // w8
  int v39; // w9
  int v40; // w22
  int v41; // w8
  bool v42; // vf
  int v43; // w8
  _BYTE *v44; // x8
  Caver::Proto::Program *v45; // x21
  char *v46; // x8
  int v47; // w8
  int v48; // w9
  int v49; // w22
  int v50; // w8
  int v51; // w8
  _BYTE *v52; // x9
  int v53; // w11
  Caver::Proto::Program *v54; // x21
  char *v55; // x8
  int v56; // w8
  int v57; // w9
  int v58; // w22
  int v59; // w8
  int v60; // w8
  _BYTE *v61; // x8
  int v62; // w9
  _BYTE *v63; // x9
  int v64; // w11
  int v65; // w11
  int v66; // w11
  int v67; // w11
  int v68; // w11
  int v69; // w9
  _BYTE *v70; // x8
  int v71; // w9
  _BYTE *v72; // x8
  unsigned __int64 v73; // x9
  char *v74; // x8
  __int64 result; // x0
  unsigned int v76; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v77; // [xsp+8h] [xbp-48h]

  v5 = (unsigned __int64 *)((char *)a2 + 8);
  v6 = (unsigned __int64 *)((char *)a2 + 16);
  v77 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 2 )
  {
    v74 = (char *)*v5;
    if ( *v5 >= *v6 || *v74 < 0 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v8 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( !TagFallback )
        return 1;
    }
    else
    {
      v8 = (unsigned __int8)*v74;
      *((_DWORD *)a2 + 8) = v8;
      *((_QWORD *)a2 + 1) = v74 + 1;
      if ( !(_DWORD)v8 )
        return 1;
    }
    switch ( (unsigned int)v8 >> 3 )
    {
      case 2u:
        v9 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_54;
        v10 = (char *)*v5;
        v11 = *v6;
        if ( *v5 >= *v6 || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v76) & 1) == 0 )
            return 0;
          v12 = v76;
          v13 = (_BYTE *)*v5;
          v11 = *v6;
        }
        else
        {
          v12 = (unsigned __int8)*v10;
          v13 = v10 + 1;
          v76 = v12;
          *v5 = (unsigned __int64)v13;
        }
        v65 = *((_DWORD *)this + 16);
        *((_BYTE *)this + 13) = v12 != 0;
        *((_DWORD *)this + 16) = v65 | 2;
        if ( (unsigned __int64)v13 >= v11 || *v13 != 24 )
          continue;
        v28 = v13 + 1;
        *v5 = (unsigned __int64)v28;
        if ( (unsigned __int64)v28 < v11 )
          goto LABEL_32;
        goto LABEL_113;
      case 3u:
        v9 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_54;
        v28 = (char *)*v5;
        v11 = *v6;
        if ( *v5 >= *v6 )
          goto LABEL_113;
LABEL_32:
        if ( *v28 < 0 )
        {
LABEL_113:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v76) & 1) == 0 )
            return 0;
          v29 = v76;
          v30 = (_BYTE *)*v5;
          v11 = *v6;
        }
        else
        {
          v29 = (unsigned __int8)*v28;
          v30 = v28 + 1;
          v76 = v29;
          *v5 = (unsigned __int64)v30;
        }
        v66 = *((_DWORD *)this + 16);
        *((_BYTE *)this + 14) = v29 != 0;
        *((_DWORD *)this + 16) = v66 | 4;
        if ( (unsigned __int64)v30 >= v11 || *v30 != 32 )
          continue;
        v22 = v30 + 1;
        *v5 = (unsigned __int64)v22;
        if ( (unsigned __int64)v22 >= v11 )
          goto LABEL_118;
LABEL_22:
        if ( *v22 < 0 )
        {
LABEL_118:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v76) & 1) == 0 )
            return 0;
          v23 = v76;
          v24 = (_BYTE *)*v5;
          v11 = *v6;
        }
        else
        {
          v23 = (unsigned __int8)*v22;
          v24 = v22 + 1;
          v76 = v23;
          *v5 = (unsigned __int64)v24;
        }
        v67 = *((_DWORD *)this + 16);
        *((_BYTE *)this + 15) = v23 != 0;
        *((_DWORD *)this + 16) = v67 | 8;
        if ( (unsigned __int64)v24 >= v11 || *v24 != 40 )
          continue;
        v25 = v24 + 1;
        *v5 = (unsigned __int64)v25;
        if ( (unsigned __int64)v25 >= v11 )
          goto LABEL_123;
LABEL_26:
        if ( *v25 < 0 )
        {
LABEL_123:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v76) & 1) == 0 )
            return 0;
          v26 = v76;
          v27 = (_BYTE *)*v5;
          v11 = *v6;
        }
        else
        {
          v26 = (unsigned __int8)*v25;
          v27 = v25 + 1;
          v76 = v26;
          *v5 = (unsigned __int64)v27;
        }
        v68 = *((_DWORD *)this + 16);
        *((_BYTE *)this + 16) = v26 != 0;
        *((_DWORD *)this + 16) = v68 | 0x10;
        if ( (unsigned __int64)v27 >= v11 || *v27 != 53 )
          continue;
        *v5 = (unsigned __int64)(v27 + 1);
LABEL_128:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v76) & 1) == 0 )
          return 0;
        v69 = *((_DWORD *)this + 16);
        *((_DWORD *)this + 5) = v76;
        *((_DWORD *)this + 16) = v69 | 0x20;
        v70 = (_BYTE *)*v5;
        if ( *v5 >= *v6 || *v70 != 61 )
          continue;
        *v5 = (unsigned __int64)(v70 + 1);
LABEL_132:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v76) & 1) == 0 )
          return 0;
        v71 = *((_DWORD *)this + 16);
        *((_DWORD *)this + 6) = v76;
        *((_DWORD *)this + 16) = v71 | 0x40;
        v72 = (_BYTE *)*v5;
        v73 = *v6;
        if ( *v5 >= *v6 || *v72 != 64 )
          continue;
        v31 = v72 + 1;
        *v5 = (unsigned __int64)v31;
        if ( (unsigned __int64)v31 >= v73 )
          goto LABEL_136;
LABEL_40:
        if ( (*v31 & 0x80000000) == 0 )
        {
          v32 = (unsigned __int8)*v31;
          v76 = v32;
          *v5 = (unsigned __int64)(v31 + 1);
          if ( v32 > 7 )
            goto LABEL_43;
LABEL_42:
          v33 = *((_DWORD *)this + 16);
          *((_DWORD *)this + 7) = v32;
          *((_DWORD *)this + 16) = v33 | 0x80;
          goto LABEL_43;
        }
LABEL_136:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v76) & 1) == 0 )
          return 0;
        v32 = v76;
        if ( v76 <= 7 )
          goto LABEL_42;
LABEL_43:
        v34 = (_BYTE *)*v5;
        if ( *v5 >= *v6 || *v34 != 74 )
          continue;
        *v5 = (unsigned __int64)(v34 + 1);
LABEL_46:
        v35 = (Caver::Proto::Program *)*((_QWORD *)this + 5);
        *((_DWORD *)this + 16) |= 0x400u;
        if ( !v35 )
        {
          v35 = (Caver::Proto::Program *)operator new(0x30u);
          Caver::Proto::Program::Program(v35);
          *((_QWORD *)this + 5) = v35;
        }
        v36 = (char *)*v5;
        if ( *v5 >= *v6 || *v36 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v76) & 1) == 0 )
            return 0;
        }
        else
        {
          v76 = (unsigned __int8)*v36;
          *v5 = (unsigned __int64)(v36 + 1);
        }
        v38 = *((_DWORD *)a2 + 14);
        v39 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v38 + 1;
        if ( v38 >= v39 )
          return 0;
        v40 = google::protobuf::io::CodedInputStream::PushLimit(a2, v76);
        if ( (Caver::Proto::Program::MergePartialFromCodedStream(v35, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v40);
        v41 = *((_DWORD *)a2 + 14);
        v42 = __OFSUB__(v41, 1);
        v43 = v41 - 1;
        if ( v43 < 0 == v42 )
          *((_DWORD *)a2 + 14) = v43;
        v44 = (_BYTE *)*v5;
        if ( *v5 >= *v6 || *v44 != 82 )
          continue;
        *v5 = (unsigned __int64)(v44 + 1);
LABEL_66:
        v45 = (Caver::Proto::Program *)*((_QWORD *)this + 6);
        *((_DWORD *)this + 16) |= 0x800u;
        if ( !v45 )
        {
          v45 = (Caver::Proto::Program *)operator new(0x30u);
          Caver::Proto::Program::Program(v45);
          *((_QWORD *)this + 6) = v45;
        }
        v46 = (char *)*v5;
        if ( *v5 >= *v6 || *v46 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v76) & 1) == 0 )
            return 0;
        }
        else
        {
          v76 = (unsigned __int8)*v46;
          *v5 = (unsigned __int64)(v46 + 1);
        }
        v47 = *((_DWORD *)a2 + 14);
        v48 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v47 + 1;
        if ( v47 >= v48 )
          return 0;
        v49 = google::protobuf::io::CodedInputStream::PushLimit(a2, v76);
        if ( (Caver::Proto::Program::MergePartialFromCodedStream(v45, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v49);
        v50 = *((_DWORD *)a2 + 14);
        v42 = __OFSUB__(v50, 1);
        v51 = v50 - 1;
        if ( v51 < 0 == v42 )
          *((_DWORD *)a2 + 14) = v51;
        v52 = (_BYTE *)*v5;
        v19 = *v6;
        if ( *v5 >= *v6 || *v52 != 88 )
          continue;
        v18 = v52 + 1;
        *v5 = (unsigned __int64)v18;
        if ( (unsigned __int64)v18 >= v19 )
          goto LABEL_80;
LABEL_18:
        if ( *v18 < 0 )
        {
LABEL_80:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v76) & 1) == 0 )
            return 0;
          v20 = v76;
          v21 = (_BYTE *)*v5;
          v19 = *v6;
        }
        else
        {
          v20 = (unsigned __int8)*v18;
          v21 = v18 + 1;
          v76 = v20;
          *v5 = (unsigned __int64)v21;
        }
        v53 = *((_DWORD *)this + 16);
        *((_BYTE *)this + 12) = v20 != 0;
        v37 = v53 | 1;
        *((_DWORD *)this + 16) = v53 | 1;
        if ( (unsigned __int64)v21 >= v19 || *v21 != 98 )
          continue;
        *v5 = (unsigned __int64)(v21 + 1);
LABEL_85:
        v54 = (Caver::Proto::Program *)*((_QWORD *)this + 7);
        *((_DWORD *)this + 16) = v37 | 0x1000;
        if ( !v54 )
        {
          v54 = (Caver::Proto::Program *)operator new(0x30u);
          Caver::Proto::Program::Program(v54);
          *((_QWORD *)this + 7) = v54;
        }
        v55 = (char *)*v5;
        if ( *v5 >= *v6 || *v55 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v76) & 1) == 0 )
            return 0;
        }
        else
        {
          v76 = (unsigned __int8)*v55;
          *v5 = (unsigned __int64)(v55 + 1);
        }
        v56 = *((_DWORD *)a2 + 14);
        v57 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v56 + 1;
        if ( v56 < v57 )
        {
          v58 = google::protobuf::io::CodedInputStream::PushLimit(a2, v76);
          if ( (Caver::Proto::Program::MergePartialFromCodedStream(v54, a2) & 1) != 0 )
          {
            if ( *((_BYTE *)a2 + 36) )
            {
              google::protobuf::io::CodedInputStream::PopLimit(a2, v58);
              v59 = *((_DWORD *)a2 + 14);
              v42 = __OFSUB__(v59, 1);
              v60 = v59 - 1;
              if ( v60 < 0 == v42 )
                *((_DWORD *)a2 + 14) = v60;
              v61 = (_BYTE *)*v5;
              if ( *v5 < *v6 && *v61 == 109 )
              {
                *v5 = (unsigned __int64)(v61 + 1);
LABEL_99:
                if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v76) & 1) == 0 )
                  return 0;
                v62 = *((_DWORD *)this + 16);
                *((_DWORD *)this + 8) = v76;
                *((_DWORD *)this + 16) = v62 | 0x100;
                v63 = (_BYTE *)*v5;
                v15 = *v6;
                if ( *v5 < *v6 && *v63 == 112 )
                {
                  v14 = v63 + 1;
                  *v5 = (unsigned __int64)(v63 + 1);
                  if ( (unsigned __int64)(v63 + 1) >= v15 )
                  {
LABEL_103:
                    if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v76) & 1) == 0 )
                      return 0;
                    v16 = v76;
                    v17 = (char *)*v5;
                    v15 = *v6;
                    goto LABEL_105;
                  }
LABEL_14:
                  if ( (char)*v14 < 0 )
                    goto LABEL_103;
                  v16 = *v14;
                  v17 = (char *)(v14 + 1);
                  v76 = v16;
                  *v5 = (unsigned __int64)v17;
LABEL_105:
                  v64 = *((_DWORD *)this + 16);
                  *((_BYTE *)this + 36) = v16 != 0;
                  *((_DWORD *)this + 16) = v64 | 0x200;
                  if ( v17 == (char *)v15 && *((_DWORD *)a2 + 11) )
                  {
                    result = 1;
                    *((_DWORD *)a2 + 8) = 0;
                    *((_BYTE *)a2 + 36) = 1;
                    return result;
                  }
                }
              }
              continue;
            }
          }
        }
        return 0;
      case 4u:
        v9 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_54;
        v22 = (char *)*v5;
        v11 = *v6;
        if ( *v5 < *v6 )
          goto LABEL_22;
        goto LABEL_118;
      case 5u:
        v9 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_54;
        v25 = (char *)*v5;
        v11 = *v6;
        if ( *v5 < *v6 )
          goto LABEL_26;
        goto LABEL_123;
      case 6u:
        v9 = v8 & 7;
        if ( v9 == 5 )
          goto LABEL_128;
        goto LABEL_54;
      case 7u:
        v9 = v8 & 7;
        if ( v9 == 5 )
          goto LABEL_132;
        goto LABEL_54;
      case 8u:
        v9 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_54;
        v31 = (char *)*v5;
        if ( *v5 < *v6 )
          goto LABEL_40;
        goto LABEL_136;
      case 9u:
        v9 = v8 & 7;
        if ( v9 == 2 )
          goto LABEL_46;
        goto LABEL_54;
      case 0xAu:
        v9 = v8 & 7;
        if ( v9 != 2 )
          goto LABEL_54;
        goto LABEL_66;
      case 0xBu:
        v9 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_54;
        v18 = (char *)*v5;
        v19 = *v6;
        if ( *v5 < *v6 )
          goto LABEL_18;
        goto LABEL_80;
      case 0xCu:
        v9 = v8 & 7;
        if ( v9 != 2 )
          goto LABEL_54;
        v37 = *((_DWORD *)this + 16);
        goto LABEL_85;
      case 0xDu:
        v9 = v8 & 7;
        if ( v9 == 5 )
          goto LABEL_99;
        goto LABEL_54;
      case 0xEu:
        v9 = v8 & 7;
        if ( (v8 & 7) != 0 )
        {
LABEL_54:
          if ( v9 == 4 )
            return 1;
LABEL_55:
          if ( (google::protobuf::internal::WireFormatLite::SkipField(
                  a2,
                  (google::protobuf::io::CodedInputStream *)v8,
                  a3)
              & 1) == 0 )
            return 0;
          continue;
        }
        v14 = (unsigned __int8 *)*v5;
        v15 = *v6;
        if ( *v5 >= *v6 )
          goto LABEL_103;
        goto LABEL_14;
      default:
        if ( (v8 & 7) == 4 )
          return 1;
        goto LABEL_55;
    }
  }
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000329BD0
 * Mangled: _ZN5Caver5Proto24SwingableWeaponComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::SwingableWeaponComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000002028F0  Caver::Proto::FloatColor::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x000000000032A350  Caver::Proto::SwingableWeaponComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 267
 *   insn=0x0000000000329BE8 string=0x0000000000329BEC "W"
 *   insn=0x0000000000329BFC string=0x0000000000329C00 "x""
 *   insn=0x0000000000329C00 string=0x0000000000329C04 "yB"
 *   insn=0x0000000000329C04 string=0x0000000000329C08 "Z"
 *   insn=0x0000000000329C0C string=0x0000000000329C10 ""
 *   insn=0x0000000000329C10 string=0x0000000000329C14 ")"
 *   insn=0x0000000000329C18 string=0x0000000000329C1C """
 *   insn=0x0000000000329C1C string=0x0000000000329C20 "\t"
 *   insn=0x0000000000329C24 string=0x0000000000329C28 "!"
 *   insn=0x0000000000329C28 string=0x0000000000329C2C ""
 *   insn=0x0000000000329C2C string=0x0000000000329C30 "a""
 *   insn=0x0000000000329C30 string=0x0000000000329C34 "h"
 *   insn=0x0000000000329C38 string=0x0000000000329C54 "(|"
 *   insn=0x0000000000329C44 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000329C48 string=0x0000000000329C4C "a""
 *   insn=0x0000000000329C54 string=0x0000000000329C58 ""
 *   insn=0x0000000000329C60 string=0x0000000000329C64 "H{"
 *   insn=0x0000000000329C60 string=0x0000000000329D74 "("
 *   insn=0x0000000000329C64 string=0x0000000000329C68 ""
 *   insn=0x0000000000329C6C string=0x0000000000329C70 "("
 *   insn=0x0000000000329C6C string=0x0000000000329CA4 "("
 *   insn=0x0000000000329C6C string=0x0000000000329CB4 "("
 *   insn=0x0000000000329C6C string=0x0000000000329CE8 "("
 *   insn=0x0000000000329C6C string=0x0000000000329CFC "("
 *   insn=0x0000000000329C6C string=0x0000000000329D30 "("
 *   insn=0x0000000000329C6C string=0x0000000000329D40 "("
 *   insn=0x0000000000329C6C string=0x0000000000329D84 "("
 *   insn=0x0000000000329C6C string=0x0000000000329DB8 "("
 *   insn=0x0000000000329C6C string=0x0000000000329DEC "("
 *   insn=0x0000000000329C6C string=0x0000000000329E20 "("
 *   insn=0x0000000000329C6C string=0x0000000000329E54 "("
 *   insn=0x0000000000329C6C string=0x0000000000329E64 "("
 *   insn=0x0000000000329C74 string=0x0000000000329C78 "\t"
 *   insn=0x0000000000329C78 string=0x0000000000329C7C "("
 *   insn=0x0000000000329C7C string=0x0000000000329C80 "?"
 *   insn=0x0000000000329C80 string=0x0000000000329C84 """
 *   insn=0x0000000000329C84 string=0x0000000000329C88 "*"
 *   insn=0x0000000000329C8C string=0x0000000000329C90 "J"
 *   insn=0x0000000000329C90 string=0x0000000000329C94 ")"
 *   insn=0x0000000000329C98 string=0x0000000000329C9C "\t"
 *   insn=0x0000000000329CA8 string=0x0000000000329CAC "!"
 *   insn=0x0000000000329CAC string=0x0000000000329CB0 "8"
 *   insn=0x0000000000329CB8 string=0x0000000000329CBC "\t"
 *   insn=0x0000000000329CBC string=0x0000000000329CC0 "("
 *   insn=0x0000000000329CC0 string=0x0000000000329CC4 "?"
 *   insn=0x0000000000329CC8 string=0x0000000000329CCC "*"
 *   insn=0x0000000000329CD0 string=0x0000000000329CD4 "J"
 *   insn=0x0000000000329CD4 string=0x0000000000329CD8 ")"
 *   insn=0x0000000000329CDC string=0x0000000000329CE0 "\t"
 *   insn=0x0000000000329CF4 string=0x0000000000329CF8 "J"
 *   insn=0x0000000000329D00 string=0x0000000000329D04 "\t"
 *   insn=0x0000000000329D04 string=0x0000000000329D08 "("
 *   insn=0x0000000000329D08 string=0x0000000000329D0C "?"
 *   insn=0x0000000000329D0C string=0x0000000000329D10 "B"
 *   insn=0x0000000000329D10 string=0x0000000000329D14 "*"
 *   insn=0x0000000000329D14 string=0x0000000000329D18 "\n"
 *   insn=0x0000000000329D18 string=0x0000000000329D1C "J"
 *   insn=0x0000000000329D1C string=0x0000000000329D20 ")"
 *   insn=0x0000000000329D24 string=0x0000000000329D28 "\t"
 *   insn=0x0000000000329D38 string=0x0000000000329D3C "'"
 *   insn=0x0000000000329D40 string=0x0000000000329D44 "a\t"
 *   insn=0x0000000000329D44 string=0x0000000000329D48 "\t"
 *   insn=0x0000000000329D48 string=0x0000000000329D4C "("
 *   insn=0x0000000000329D4C string=0x0000000000329D50 "?"
 *   insn=0x0000000000329D50 string=0x0000000000329D54 """
 *   insn=0x0000000000329D54 string=0x0000000000329D58 "*"
 *   insn=0x0000000000329D5C string=0x0000000000329D60 "J"
 *   insn=0x0000000000329D60 string=0x0000000000329D64 ")"
 *   insn=0x0000000000329D68 string=0x0000000000329D6C "\t"
 *   insn=0x0000000000329D7C string=0x0000000000329D80 "`"
 *   insn=0x0000000000329D84 string=0x0000000000329D88 "A"
 *   insn=0x0000000000329D88 string=0x0000000000329D8C "\t"
 *   insn=0x0000000000329D8C string=0x0000000000329D90 "("
 *   insn=0x0000000000329D90 string=0x0000000000329D94 "?"
 *   insn=0x0000000000329D98 string=0x0000000000329D9C "*"
 *   insn=0x0000000000329DA0 string=0x0000000000329DA4 "J"
 *   insn=0x0000000000329DA4 string=0x0000000000329DA8 ")"
 *   insn=0x0000000000329DAC string=0x0000000000329DB0 "\t"
 *   insn=0x0000000000329DB0 string=0x0000000000329DB4 "P"
 *   insn=0x0000000000329DBC string=0x0000000000329DC0 "\t"
 *   insn=0x0000000000329DC0 string=0x0000000000329DC4 "("
 *   insn=0x0000000000329DC4 string=0x0000000000329DC8 "?"
 *   insn=0x0000000000329DCC string=0x0000000000329DD0 "*"
 *   insn=0x0000000000329DD4 string=0x0000000000329DD8 "J"
 *   insn=0x0000000000329DD8 string=0x0000000000329DDC ")"
 *   insn=0x0000000000329DE0 string=0x0000000000329DE4 "\t"
 *   insn=0x0000000000329DE4 string=0x0000000000329DE8 "W"
 *   insn=0x0000000000329DF0 string=0x0000000000329DF4 "\t"
 *   insn=0x0000000000329DF4 string=0x0000000000329DF8 "("
 *   insn=0x0000000000329DF8 string=0x0000000000329DFC "?"
 *   insn=0x0000000000329DFC string=0x0000000000329E00 "B"
 *   insn=0x0000000000329E00 string=0x0000000000329E04 "*"
 *   insn=0x0000000000329E04 string=0x0000000000329E08 "\n"
 *   insn=0x0000000000329E08 string=0x0000000000329E0C "J"
 *   insn=0x0000000000329E0C string=0x0000000000329E10 ")"
 *   insn=0x0000000000329E14 string=0x0000000000329E18 "\t"
 *   insn=0x0000000000329E20 string=0x0000000000329E24 "a"
 *   insn=0x0000000000329E24 string=0x0000000000329E28 "\t"
 *   insn=0x0000000000329E28 string=0x0000000000329E2C "("
 *   insn=0x0000000000329E2C string=0x0000000000329E30 "?"
 *   insn=0x0000000000329E30 string=0x0000000000329E34 """
 *   insn=0x0000000000329E34 string=0x0000000000329E38 "*"
 *   insn=0x0000000000329E3C string=0x0000000000329E40 "J"
 *   insn=0x0000000000329E40 string=0x0000000000329E44 ")"
 *   insn=0x0000000000329E48 string=0x0000000000329E4C "\t"
 *   insn=0x0000000000329E70 string=0x0000000000329E74 "`$"
 *   insn=0x0000000000329E7C string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000329E80 string=0x0000000000329E84 "!"
 *   insn=0x0000000000329E8C string=0x0000000000329E90 "p<"
 *   insn=0x0000000000329E90 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000329E98 string=0x0000000000329E9C "\t"
 *   insn=0x0000000000329E9C string=0x0000000000329EA0 "("
 *   insn=0x0000000000329EA8 string=0x0000000000329EAC "?"
 *   insn=0x0000000000329EAC string=0x0000000000329EB0 "j"
 *   insn=0x0000000000329EB8 string=0x0000000000329EBC "*"
 *   insn=0x0000000000329EBC string=0x0000000000329EC0 "_A"
 *   insn=0x0000000000329EC0 string=0x0000000000329EC4 "a"
 *   insn=0x0000000000329EC4 string=0x0000000000329EC8 ")"
 *   insn=0x0000000000329EC8 string=0x0000000000329ECC "\t"
 *   insn=0x0000000000329ECC string=0x0000000000329ED0 "?"
 *   insn=0x0000000000329ED0 string=0x0000000000329ED4 "C"
 *   insn=0x0000000000329EDC string=0x0000000000329EE0 "\<"
 *   insn=0x0000000000329EE0 string=0x0000000000329EE4 " !"
 *   insn=0x0000000000329EE8 string=0x0000000000329EEC "\t"
 *   insn=0x0000000000329EEC string=0x0000000000329EF0 "("
 *   insn=0x0000000000329EF8 string=0x0000000000329EFC "?"
 *   insn=0x0000000000329EFC string=0x0000000000329F00 "j"
 *   insn=0x0000000000329F04 string=0x0000000000329F08 "B"
 *   insn=0x0000000000329F08 string=0x0000000000329F0C "*"
 *   insn=0x0000000000329F0C string=0x0000000000329F10 "_"
 *   insn=0x0000000000329F14 string=0x0000000000329F18 ")"
 *   insn=0x0000000000329F18 string=0x0000000000329F1C "\t"
 *   insn=0x0000000000329F1C string=0x0000000000329F20 "?"
 *   insn=0x0000000000329F20 string=0x0000000000329F24 "c"
 *   insn=0x0000000000329F2C string=0x0000000000329F30 "H<"
 *   insn=0x0000000000329F38 string=0x0000000000329F3C "\t"
 *   insn=0x0000000000329F3C string=0x0000000000329F40 "("
 *   insn=0x0000000000329F48 string=0x0000000000329F4C "?"
 *   insn=0x0000000000329F4C string=0x0000000000329F50 "j"
 *   insn=0x0000000000329F58 string=0x0000000000329F5C "*"
 *   insn=0x0000000000329F5C string=0x0000000000329F60 "_"
 *   insn=0x0000000000329F60 string=0x0000000000329F64 "a"
 *   insn=0x0000000000329F64 string=0x0000000000329F68 ")"
 *   insn=0x0000000000329F68 string=0x0000000000329F6C "\t"
 *   insn=0x0000000000329F6C string=0x0000000000329F70 "?"
 *   insn=0x0000000000329F70 string=0x0000000000329F74 "#"
 *   insn=0x0000000000329F7C string=0x0000000000329F80 "4<"
 *   insn=0x0000000000329F80 string=0x0000000000329F84 " "
 *   insn=0x0000000000329F88 string=0x0000000000329F8C "\t"
 *   insn=0x0000000000329F8C string=0x0000000000329F90 "("
 *   insn=0x0000000000329F98 string=0x0000000000329F9C "?"
 *   insn=0x0000000000329F9C string=0x0000000000329FA0 "j"
 *   insn=0x0000000000329FA4 string=0x0000000000329FA8 "B"
 *   insn=0x0000000000329FA8 string=0x0000000000329FAC "*"
 *   insn=0x0000000000329FAC string=0x0000000000329FB0 "_"
 *   insn=0x0000000000329FB4 string=0x0000000000329FB8 ")"
 *   insn=0x0000000000329FB8 string=0x0000000000329FBC "\t"
 *   insn=0x0000000000329FBC string=0x0000000000329FC0 "?"
 *   insn=0x0000000000329FC0 string=0x0000000000329FC4 "C"
 *   insn=0x0000000000329FCC string=0x0000000000329FD0 " <"
 *   insn=0x0000000000329FD8 string=0x0000000000329FDC "\t"
 *   insn=0x0000000000329FDC string=0x0000000000329FE0 "("
 *   insn=0x0000000000329FE8 string=0x0000000000329FEC "?"
 *   insn=0x0000000000329FEC string=0x0000000000329FF0 "j"
 *   insn=0x0000000000329FF8 string=0x0000000000329FFC "*"
 *   insn=0x0000000000329FFC string=0x000000000032A000 "_"
 *   insn=0x000000000032A000 string=0x000000000032A004 "a"
 *   insn=0x000000000032A004 string=0x000000000032A008 ")"
 *   insn=0x000000000032A008 string=0x000000000032A00C "\t"
 *   insn=0x000000000032A00C string=0x000000000032A010 "?"
 *   insn=0x000000000032A020 string=0x000000000032A024 " "
 *   insn=0x000000000032A028 string=0x000000000032A02C "\t"
 *   insn=0x000000000032A02C string=0x000000000032A030 "("
 *   insn=0x000000000032A038 string=0x000000000032A03C "?"
 *   insn=0x000000000032A03C string=0x000000000032A040 "j"
 *   insn=0x000000000032A044 string=0x000000000032A048 "B"
 *   insn=0x000000000032A048 string=0x000000000032A04C "*"
 *   insn=0x000000000032A04C string=0x000000000032A050 "_"
 *   insn=0x000000000032A054 string=0x000000000032A058 ")"
 *   insn=0x000000000032A058 string=0x000000000032A05C "\t"
 *   insn=0x000000000032A05C string=0x000000000032A060 "?"
 *   insn=0x000000000032A078 string=0x000000000032A07C "\t"
 *   insn=0x000000000032A07C string=0x000000000032A080 "("
 *   insn=0x000000000032A088 string=0x000000000032A08C "?"
 *   insn=0x000000000032A08C string=0x000000000032A090 "j"
 *   insn=0x000000000032A098 string=0x000000000032A09C "*"
 *   insn=0x000000000032A09C string=0x000000000032A0A0 "_!"
 *   insn=0x000000000032A0A0 string=0x000000000032A0A4 "a"
 *   insn=0x000000000032A0A4 string=0x000000000032A0A8 ")"
 *   insn=0x000000000032A0A8 string=0x000000000032A0AC "\t"
 *   insn=0x000000000032A0AC string=0x000000000032A0B0 "?"
 *   insn=0x000000000032A0B0 string=0x000000000032A0B4 "#"
 *   insn=0x000000000032A0C0 string=0x000000000032A0C4 " "
 *   insn=0x000000000032A0C8 string=0x000000000032A0CC "\t"
 *   insn=0x000000000032A0CC string=0x000000000032A0D0 "("
 *   insn=0x000000000032A0D8 string=0x000000000032A0DC "?"
 *   insn=0x000000000032A0DC string=0x000000000032A0E0 "j"
 *   insn=0x000000000032A0E4 string=0x000000000032A0E8 "B"
 *   insn=0x000000000032A0E8 string=0x000000000032A0EC "("
 *   insn=0x000000000032A0F4 string=0x000000000032A0F8 "("
 *   insn=0x000000000032A0F8 string=0x000000000032A0FC ""
 *   insn=0x000000000032A108 string=0x00000000001FA750 "0'"
 *   insn=0x000000000032A118 string=0x000000000032A11C "("
 *   insn=0x000000000032A120 string=0x000000000032A124 ""
 *   insn=0x000000000032A124 string=0x000000000032A128 ")"
 *   insn=0x000000000032A130 string=0x000000000032A134 "\t"
 *   insn=0x000000000032A134 string=0x000000000032A138 "?u"
 *   insn=0x000000000032A13C string=0x000000000032A140 ""
 *   insn=0x000000000032A140 string=0x000000000032A144 ""
 *   insn=0x000000000032A160 string=0x000000000032A164 "("
 *   insn=0x000000000032A168 string=0x000000000032A16C ""
 *   insn=0x000000000032A16C string=0x000000000032A170 ")"
 *   insn=0x000000000032A178 string=0x000000000032A17C "\t"
 *   insn=0x000000000032A17C string=0x000000000032A180 "?"
 *   insn=0x000000000032A180 string=0x000000000032A184 "a"
 *   insn=0x000000000032A184 string=0x000000000032A188 ""
 *   insn=0x000000000032A188 string=0x000000000032A18C ""
 *   insn=0x000000000032A194 string=0x000000000032A198 "nA"
 *   insn=0x000000000032A198 string=0x000000000032A19C "`"
 *   insn=0x000000000032A1A8 string=0x000000000032A1AC "("
 *   insn=0x000000000032A1B0 string=0x000000000032A1B4 ""
 *   insn=0x000000000032A1B4 string=0x000000000032A1B8 ")"
 *   insn=0x000000000032A1C0 string=0x000000000032A1C4 "\t"
 *   insn=0x000000000032A1C4 string=0x000000000032A1C8 "?"
 *   insn=0x000000000032A1C8 string=0x000000000032A1CC "!"
 *   insn=0x000000000032A1CC string=0x000000000032A1D0 ""
 *   insn=0x000000000032A1D0 string=0x000000000032A1D4 ""
 *   insn=0x000000000032A1DC string=0x000000000032A1E0 "\A"
 *   insn=0x000000000032A1E0 string=0x000000000032A1E4 " \t"
 *   insn=0x000000000032A1F0 string=0x000000000032A1F4 "("
 *   insn=0x000000000032A1F8 string=0x000000000032A1FC "\t"
 *   insn=0x000000000032A1FC string=0x000000000032A200 "*"
 *   insn=0x000000000032A200 string=0x000000000032A204 "?"
 *   insn=0x000000000032A204 string=0x000000000032A208 "B"
 *   insn=0x000000000032A208 string=0x000000000032A20C "*"
 *   insn=0x000000000032A20C string=0x000000000032A210 "_"
 *   insn=0x000000000032A214 string=0x000000000032A218 ")"
 *   insn=0x000000000032A218 string=0x000000000032A21C "\t"
 *   insn=0x000000000032A220 string=0x000000000032A224 ""
 *   insn=0x000000000032A22C string=0x000000000032A244 ""
 *   insn=0x000000000032A234 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032A238 string=0x000000000032A23C "9'"
 *   insn=0x000000000032A23C string=0x00000000001F3F20 "P'"
 *   insn=0x000000000032A244 string=0x000000000032A248 ")"
 *   insn=0x000000000032A250 string=0x000000000032A254 "\t"
 *   insn=0x000000000032A258 string=0x000000000032A25C ")"
 *   insn=0x000000000032A25C string=0x000000000032A260 ""
 *   insn=0x000000000032A264 string=0x000000000032A268 ""
 *   insn=0x000000000032A26C string=0x000000000032A280 "h&G)\n"
 *   insn=0x000000000032A274 string=0x000000000032A278 "v;"
 *   insn=0x000000000032A278 string=0x000000000032A27C "`"
 *   insn=0x000000000032A280 string=0x000000000032A284 "\n"
 *   insn=0x000000000032A288 string=0x000000000032A28C "j:"
 *   insn=0x000000000032A2B0 string=0x000000000032A2B4 "h"
 *   insn=0x000000000032A2C4 string=0x000000000032A2C8 "h:@"
 *   insn=0x000000000032A2C8 string=0x000000000032A2CC ""
 *   insn=0x000000000032A2CC string=0x000000000032A2D0 "K"
 *   insn=0x000000000032A2D0 string=0x000000000032A2D4 "h:"
 *   insn=0x000000000032A2D0 string=0x000000000032A2D8 ""
 *   insn=0x000000000032A2D8 string=0x000000000032A2DC ")"
 *   insn=0x000000000032A2E0 string=0x000000000032A2E4 "a"
 *   insn=0x000000000032A2E4 string=0x000000000032A2E8 "h.@"
 *   insn=0x000000000032A2E8 string=0x000000000032A2EC "("
 *   insn=0x000000000032A2F4 string=0x000000000032A2F8 "`"
 *   insn=0x000000000032A338 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032A344 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032A348 string=0x000000000032A34C "^]\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SwingableWeaponComponent::MergePartialFromCodedStream(
        Caver::Proto::SwingableWeaponComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  unsigned __int64 *v5; // x24
  unsigned __int64 *v6; // x25
  char *v7; // x8
  unsigned __int64 v8; // x1
  unsigned int TagFallback; // w0
  int v10; // w8
  char *v11; // x9
  unsigned __int8 *v12; // x8
  unsigned int v13; // w10
  unsigned __int8 *v14; // x9
  char *v15; // x9
  unsigned int v16; // w10
  unsigned __int8 *v17; // x9
  int v18; // w8
  char *v19; // x9
  unsigned int v20; // w10
  unsigned __int8 *v21; // x9
  char *v22; // x9
  unsigned int v23; // w10
  unsigned __int8 *v24; // x9
  char *v25; // x9
  unsigned int v26; // w10
  unsigned __int8 *v27; // x9
  char *v28; // x9
  unsigned int v29; // w10
  unsigned __int8 *v30; // x9
  char *v31; // x9
  unsigned int v32; // w10
  unsigned __int8 *v33; // x9
  char *v34; // x9
  unsigned int v35; // w10
  unsigned __int8 *v36; // x9
  int v37; // w11
  int v38; // w11
  int v39; // w11
  int v40; // w11
  int v41; // w11
  int v42; // w11
  int v43; // w11
  int v44; // w11
  int v45; // w9
  _BYTE *v46; // x8
  int v47; // w9
  _BYTE *v48; // x8
  int v49; // w9
  _BYTE *v50; // x8
  int v51; // w9
  _BYTE *v52; // x9
  Caver::Proto::FloatColor *v53; // x21
  char *v54; // x8
  int v55; // w8
  int v56; // w9
  int v57; // w22
  int v58; // w8
  bool v59; // vf
  int v60; // w8
  __int64 result; // x0
  unsigned int v62; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v63; // [xsp+8h] [xbp-48h]

  v5 = (unsigned __int64 *)((char *)a2 + 8);
  v6 = (unsigned __int64 *)((char *)a2 + 16);
  v63 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 2 )
  {
    v7 = (char *)*v5;
    if ( *v5 >= *v6 || *v7 < 0 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v8 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( !TagFallback )
        return 1;
    }
    else
    {
      v8 = (unsigned __int8)*v7;
      *((_DWORD *)a2 + 8) = v8;
      *((_QWORD *)a2 + 1) = v7 + 1;
      if ( !(_DWORD)v8 )
        return 1;
    }
    switch ( (unsigned int)v8 >> 3 )
    {
      case 1u:
        v10 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_51;
        v11 = (char *)*v5;
        v12 = (unsigned __int8 *)*v6;
        if ( *v5 >= *v6 || *v11 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v62) & 1) == 0 )
            return 0;
          v13 = v62;
          v14 = (unsigned __int8 *)*v5;
          v12 = (unsigned __int8 *)*v6;
        }
        else
        {
          v13 = (unsigned __int8)*v11;
          v14 = (unsigned __int8 *)(v11 + 1);
          v62 = v13;
          *v5 = (unsigned __int64)v14;
        }
        v37 = *((_DWORD *)this + 17);
        *((_DWORD *)this + 3) = v13;
        *((_DWORD *)this + 17) = v37 | 1;
        if ( v14 >= v12 || *v14 != 16 )
          continue;
        v25 = (char *)(v14 + 1);
        *v5 = (unsigned __int64)v25;
        if ( v25 < (char *)v12 )
          goto LABEL_34;
        goto LABEL_59;
      case 2u:
        v10 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_51;
        v25 = (char *)*v5;
        v12 = (unsigned __int8 *)*v6;
        if ( *v5 >= *v6 )
          goto LABEL_59;
LABEL_34:
        if ( *v25 < 0 )
        {
LABEL_59:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v62) & 1) == 0 )
            return 0;
          v26 = v62;
          v27 = (unsigned __int8 *)*v5;
          v12 = (unsigned __int8 *)*v6;
        }
        else
        {
          v26 = (unsigned __int8)*v25;
          v27 = (unsigned __int8 *)(v25 + 1);
          v62 = v26;
          *v5 = (unsigned __int64)v27;
        }
        v38 = *((_DWORD *)this + 17);
        *((_DWORD *)this + 11) = v26;
        *((_DWORD *)this + 17) = v38 | 0x80;
        if ( v27 >= v12 || *v27 != 32 )
          continue;
        v28 = (char *)(v27 + 1);
        *v5 = (unsigned __int64)v28;
        if ( v28 >= (char *)v12 )
          goto LABEL_64;
LABEL_38:
        if ( *v28 < 0 )
        {
LABEL_64:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v62) & 1) == 0 )
            return 0;
          v29 = v62;
          v30 = (unsigned __int8 *)*v5;
          v12 = (unsigned __int8 *)*v6;
        }
        else
        {
          v29 = (unsigned __int8)*v28;
          v30 = (unsigned __int8 *)(v28 + 1);
          v62 = v29;
          *v5 = (unsigned __int64)v30;
        }
        v39 = *((_DWORD *)this + 17);
        *((_DWORD *)this + 14) = v29;
        *((_DWORD *)this + 17) = v39 | 0x400;
        if ( v30 >= v12 || *v30 != 40 )
          continue;
        v22 = (char *)(v30 + 1);
        *v5 = (unsigned __int64)v22;
        if ( v22 >= (char *)v12 )
          goto LABEL_69;
LABEL_28:
        if ( *v22 < 0 )
        {
LABEL_69:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v62) & 1) == 0 )
            return 0;
          v23 = v62;
          v24 = (unsigned __int8 *)*v5;
          v12 = (unsigned __int8 *)*v6;
        }
        else
        {
          v23 = (unsigned __int8)*v22;
          v24 = (unsigned __int8 *)(v22 + 1);
          v62 = v23;
          *v5 = (unsigned __int64)v24;
        }
        v40 = *((_DWORD *)this + 17);
        *((_DWORD *)this + 15) = v23;
        *((_DWORD *)this + 17) = v40 | 0x800;
        if ( v24 >= v12 || *v24 != 48 )
          continue;
        v15 = (char *)(v24 + 1);
        *v5 = (unsigned __int64)v15;
        if ( v15 >= (char *)v12 )
          goto LABEL_74;
LABEL_16:
        if ( *v15 < 0 )
        {
LABEL_74:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v62) & 1) == 0 )
            return 0;
          v16 = v62;
          v17 = (unsigned __int8 *)*v5;
          v12 = (unsigned __int8 *)*v6;
        }
        else
        {
          v16 = (unsigned __int8)*v15;
          v17 = (unsigned __int8 *)(v15 + 1);
          v62 = v16;
          *v5 = (unsigned __int64)v17;
        }
        v41 = *((_DWORD *)this + 17);
        *((_DWORD *)this + 16) = v16;
        *((_DWORD *)this + 17) = v41 | 0x1000;
        if ( v17 >= v12 || *v17 != 56 )
          continue;
        v19 = (char *)(v17 + 1);
        *v5 = (unsigned __int64)v19;
        if ( v19 >= (char *)v12 )
          goto LABEL_79;
LABEL_22:
        if ( *v19 < 0 )
        {
LABEL_79:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v62) & 1) == 0 )
            return 0;
          v20 = v62;
          v21 = (unsigned __int8 *)*v5;
          v12 = (unsigned __int8 *)*v6;
        }
        else
        {
          v20 = (unsigned __int8)*v19;
          v21 = (unsigned __int8 *)(v19 + 1);
          v62 = v20;
          *v5 = (unsigned __int64)v21;
        }
        v42 = *((_DWORD *)this + 17);
        *((_DWORD *)this + 12) = v20;
        *((_DWORD *)this + 17) = v42 | 0x100;
        if ( v21 >= v12 || *v21 != 64 )
          continue;
        v31 = (char *)(v21 + 1);
        *v5 = (unsigned __int64)v31;
        if ( v31 >= (char *)v12 )
          goto LABEL_84;
LABEL_42:
        if ( *v31 < 0 )
        {
LABEL_84:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v62) & 1) == 0 )
            return 0;
          v32 = v62;
          v33 = (unsigned __int8 *)*v5;
          v12 = (unsigned __int8 *)*v6;
        }
        else
        {
          v32 = (unsigned __int8)*v31;
          v33 = (unsigned __int8 *)(v31 + 1);
          v62 = v32;
          *v5 = (unsigned __int64)v33;
        }
        v43 = *((_DWORD *)this + 17);
        *((_DWORD *)this + 4) = v32;
        *((_DWORD *)this + 17) = v43 | 2;
        if ( v33 >= v12 || *v33 != 72 )
          continue;
        v34 = (char *)(v33 + 1);
        *v5 = (unsigned __int64)v34;
        if ( v34 >= (char *)v12 )
          goto LABEL_89;
LABEL_46:
        if ( *v34 < 0 )
        {
LABEL_89:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v62) & 1) == 0 )
            return 0;
          v35 = v62;
          v36 = (unsigned __int8 *)*v5;
          v12 = (unsigned __int8 *)*v6;
        }
        else
        {
          v35 = (unsigned __int8)*v34;
          v36 = (unsigned __int8 *)(v34 + 1);
          v62 = v35;
          *v5 = (unsigned __int64)v36;
        }
        v44 = *((_DWORD *)this + 17);
        *((_DWORD *)this + 13) = v35;
        *((_DWORD *)this + 17) = v44 | 0x200;
        if ( v36 >= v12 || *v36 != 85 )
          continue;
        *v5 = (unsigned __int64)(v36 + 1);
LABEL_94:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v62) & 1) == 0 )
          return 0;
        v45 = *((_DWORD *)this + 17);
        *((_DWORD *)this + 5) = v62;
        *((_DWORD *)this + 17) = v45 | 4;
        v46 = (_BYTE *)*v5;
        if ( *v5 >= *v6 || *v46 != 93 )
          continue;
        *v5 = (unsigned __int64)(v46 + 1);
LABEL_98:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v62) & 1) == 0 )
          return 0;
        v47 = *((_DWORD *)this + 17);
        *((_DWORD *)this + 6) = v62;
        *((_DWORD *)this + 17) = v47 | 8;
        v48 = (_BYTE *)*v5;
        if ( *v5 >= *v6 || *v48 != 101 )
          continue;
        *v5 = (unsigned __int64)(v48 + 1);
LABEL_102:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v62) & 1) == 0 )
          return 0;
        v49 = *((_DWORD *)this + 17);
        *((_DWORD *)this + 7) = v62;
        *((_DWORD *)this + 17) = v49 | 0x10;
        v50 = (_BYTE *)*v5;
        if ( *v5 >= *v6 || *v50 != 109 )
          continue;
        *v5 = (unsigned __int64)(v50 + 1);
LABEL_106:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v62) & 1) == 0 )
          return 0;
        v51 = *((_DWORD *)this + 17);
        *((_DWORD *)this + 10) = v62;
        v18 = v51 | 0x40;
        *((_DWORD *)this + 17) = v51 | 0x40;
        v52 = (_BYTE *)*v5;
        if ( *v5 >= *v6 || *v52 != 114 )
          continue;
        *v5 = (unsigned __int64)(v52 + 1);
        goto LABEL_110;
      case 4u:
        v10 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_51;
        v28 = (char *)*v5;
        v12 = (unsigned __int8 *)*v6;
        if ( *v5 < *v6 )
          goto LABEL_38;
        goto LABEL_64;
      case 5u:
        v10 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_51;
        v22 = (char *)*v5;
        v12 = (unsigned __int8 *)*v6;
        if ( *v5 < *v6 )
          goto LABEL_28;
        goto LABEL_69;
      case 6u:
        v10 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_51;
        v15 = (char *)*v5;
        v12 = (unsigned __int8 *)*v6;
        if ( *v5 < *v6 )
          goto LABEL_16;
        goto LABEL_74;
      case 7u:
        v10 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_51;
        v19 = (char *)*v5;
        v12 = (unsigned __int8 *)*v6;
        if ( *v5 < *v6 )
          goto LABEL_22;
        goto LABEL_79;
      case 8u:
        v10 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_51;
        v31 = (char *)*v5;
        v12 = (unsigned __int8 *)*v6;
        if ( *v5 < *v6 )
          goto LABEL_42;
        goto LABEL_84;
      case 9u:
        v10 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_51;
        v34 = (char *)*v5;
        v12 = (unsigned __int8 *)*v6;
        if ( *v5 < *v6 )
          goto LABEL_46;
        goto LABEL_89;
      case 0xAu:
        v10 = v8 & 7;
        if ( v10 != 5 )
          goto LABEL_51;
        goto LABEL_94;
      case 0xBu:
        v10 = v8 & 7;
        if ( v10 == 5 )
          goto LABEL_98;
        goto LABEL_51;
      case 0xCu:
        v10 = v8 & 7;
        if ( v10 == 5 )
          goto LABEL_102;
        goto LABEL_51;
      case 0xDu:
        v10 = v8 & 7;
        if ( v10 == 5 )
          goto LABEL_106;
        goto LABEL_51;
      case 0xEu:
        v10 = v8 & 7;
        if ( v10 != 2 )
        {
LABEL_51:
          if ( v10 == 4 )
            return 1;
LABEL_52:
          if ( (google::protobuf::internal::WireFormatLite::SkipField(
                  a2,
                  (google::protobuf::io::CodedInputStream *)v8,
                  a3)
              & 1) == 0 )
            return 0;
          continue;
        }
        v18 = *((_DWORD *)this + 17);
LABEL_110:
        v53 = (Caver::Proto::FloatColor *)*((_QWORD *)this + 4);
        *((_DWORD *)this + 17) = v18 | 0x20;
        if ( !v53 )
        {
          v53 = (Caver::Proto::FloatColor *)operator new(0x20u);
          Caver::Proto::FloatColor::FloatColor(v53);
          *((_QWORD *)this + 4) = v53;
        }
        v54 = (char *)*v5;
        if ( *v5 >= *v6 || *v54 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v62) & 1) == 0 )
            return 0;
        }
        else
        {
          v62 = (unsigned __int8)*v54;
          *v5 = (unsigned __int64)(v54 + 1);
        }
        v55 = *((_DWORD *)a2 + 14);
        v56 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v55 + 1;
        if ( v55 < v56 )
        {
          v57 = google::protobuf::io::CodedInputStream::PushLimit(a2, v62);
          if ( (Caver::Proto::FloatColor::MergePartialFromCodedStream(v53, a2) & 1) != 0 )
          {
            if ( *((_BYTE *)a2 + 36) )
            {
              google::protobuf::io::CodedInputStream::PopLimit(a2, v57);
              v58 = *((_DWORD *)a2 + 14);
              v59 = __OFSUB__(v58, 1);
              v60 = v58 - 1;
              if ( v60 < 0 == v59 )
                *((_DWORD *)a2 + 14) = v60;
              if ( *v5 == *v6 && *((_DWORD *)a2 + 11) )
              {
                result = 1;
                *((_DWORD *)a2 + 8) = 0;
                *((_BYTE *)a2 + 36) = 1;
                return result;
              }
              continue;
            }
          }
        }
        return 0;
      default:
        if ( (v8 & 7) == 4 )
          return 1;
        goto LABEL_52;
    }
  }
}


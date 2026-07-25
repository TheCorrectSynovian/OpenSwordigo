/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E5908
 * Mangled: _ZN5Caver5Proto11GameOptions27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::GameOptions::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 16
 *   0x00000000001F4E40  Caver::Proto::GUIViewLayout::GUIViewLayout(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6240  Caver::Proto::MusicPlaylist::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F9410  Caver::Proto::MusicPlaylist::MusicPlaylist(void)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FB460  Caver::Proto::GUIViewLayout::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x00000000002E6070  Caver::Proto::GameOptions::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 245
 *   insn=0x00000000002E5920 string=0x00000000002E5924 "X"
 *   insn=0x00000000002E5924 string=0x00000000002E5928 ""
 *   insn=0x00000000002E592C string=0x00000000002E5930 "9"
 *   insn=0x00000000002E5930 string=0x000000000058AB40 "`"
 *   insn=0x00000000002E5938 string=0x00000000002E593C "9"
 *   insn=0x00000000002E5940 string=0x00000000002E5944 "h"
 *   insn=0x00000000002E5948 string=0x00000000002E594C """
 *   insn=0x00000000002E594C string=0x00000000002E5950 "\t"
 *   insn=0x00000000002E5954 string=0x00000000002E5958 "!"
 *   insn=0x00000000002E5958 string=0x00000000002E595C ""
 *   insn=0x00000000002E595C string=0x00000000002E5960 "a""
 *   insn=0x00000000002E5960 string=0x00000000002E5964 "h"
 *   insn=0x00000000002E5968 string=0x00000000002E5984 "(|"
 *   insn=0x00000000002E5970 string=0x00000000002E5974 "3H"
 *   insn=0x00000000002E5974 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002E5978 string=0x00000000002E597C "a""
 *   insn=0x00000000002E5984 string=0x00000000002E5988 ""
 *   insn=0x00000000002E5990 string=0x00000000002E5994 "({"
 *   insn=0x00000000002E5990 string=0x00000000002E5D60 "("
 *   insn=0x00000000002E5994 string=0x00000000002E5998 ""
 *   insn=0x00000000002E599C string=0x00000000002E59A0 "("
 *   insn=0x00000000002E599C string=0x00000000002E5B04 "("
 *   insn=0x00000000002E599C string=0x00000000002E5B14 "("
 *   insn=0x00000000002E599C string=0x00000000002E5B44 "("
 *   insn=0x00000000002E599C string=0x00000000002E5B74 "("
 *   insn=0x00000000002E599C string=0x00000000002E5B84 "("
 *   insn=0x00000000002E599C string=0x00000000002E5BB4 "("
 *   insn=0x00000000002E599C string=0x00000000002E5CF4 "("
 *   insn=0x00000000002E599C string=0x00000000002E5D50 "("
 *   insn=0x00000000002E599C string=0x00000000002E5D70 "("
 *   insn=0x00000000002E59B0 string=0x00000000002E59B4 "h"
 *   insn=0x00000000002E59B8 string=0x00000000002E59BC ")}@"
 *   insn=0x00000000002E59BC string=0x00000000002E59C0 "?"
 *   insn=0x00000000002E59C8 string=0x00000000002E59CC "*"
 *   insn=0x00000000002E59D8 string=0x00000000002E5A24 "h"
 *   insn=0x00000000002E59E4 string=0x00000000002E59F8 ""
 *   insn=0x00000000002E59F0 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002E5A04 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E5A0C string=0x00000000001F9410 "0'"
 *   insn=0x00000000002E5A14 string=0x00000000002E5A18 "\n"
 *   insn=0x00000000002E5A1C string=0x00000000002E5A20 "6y("
 *   insn=0x00000000002E5A2C string=0x00000000002E5A30 "\t"
 *   insn=0x00000000002E5A34 string=0x00000000002E5A38 ")"
 *   insn=0x00000000002E5A38 string=0x00000000002E5A3C ""
 *   insn=0x00000000002E5A40 string=0x00000000002E5A44 "h"
 *   insn=0x00000000002E5A48 string=0x00000000002E5A5C "h&G)\n"
 *   insn=0x00000000002E5A54 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002E5A5C string=0x00000000002E5A60 "\n"
 *   insn=0x00000000002E5A64 string=0x00000000002E5A68 "j:"
 *   insn=0x00000000002E5A68 string=0x00000000002E5A6C "j-"
 *   insn=0x00000000002E5A88 string=0x00000000002E5A8C "`,"
 *   insn=0x00000000002E5A88 string=0x00000000001F6240 "0'"
 *   insn=0x00000000002E5A8C string=0x00000000002E5A90 "h"
 *   insn=0x00000000002E5A90 string=0x00000000002E5A94 "(,"
 *   insn=0x00000000002E5AA0 string=0x00000000002E5AA4 "h:@"
 *   insn=0x00000000002E5AA4 string=0x00000000002E5AA8 ""
 *   insn=0x00000000002E5AA8 string=0x00000000002E5AAC "K"
 *   insn=0x00000000002E5AAC string=0x00000000002E5AB0 "h:"
 *   insn=0x00000000002E5AAC string=0x00000000002E5AB4 "i"
 *   insn=0x00000000002E5AB4 string=0x00000000002E5AB8 "?"
 *   insn=0x00000000002E5AB8 string=0x00000000002E5ABC "B"
 *   insn=0x00000000002E5ABC string=0x00000000002E5AC0 "*"
 *   insn=0x00000000002E5AC0 string=0x00000000002E5AC4 "_)"
 *   insn=0x00000000002E5AC4 string=0x00000000002E5AC8 "@"
 *   insn=0x00000000002E5AC8 string=0x00000000002E5ACC "*"
 *   insn=0x00000000002E5AC8 string=0x00000000002E59B0 "("
 *   insn=0x00000000002E5ACC string=0x00000000002E5AD0 "_A"
 *   insn=0x00000000002E5AD4 string=0x00000000002E5AD8 ")"
 *   insn=0x00000000002E5AD8 string=0x00000000002E5ADC "i"
 *   insn=0x00000000002E5ADC string=0x00000000002E5AE0 "?"
 *   insn=0x00000000002E5AE0 string=0x00000000002E5AE4 """
 *   insn=0x00000000002E5AE4 string=0x00000000002E5AE8 "*"
 *   insn=0x00000000002E5AEC string=0x00000000002E5AF0 "J"
 *   insn=0x00000000002E5AF0 string=0x00000000002E5AF4 ")"
 *   insn=0x00000000002E5AF8 string=0x00000000002E5AFC "i"
 *   insn=0x00000000002E5AFC string=0x00000000002E5B00 "8"
 *   insn=0x00000000002E5B08 string=0x00000000002E5B0C "a"
 *   insn=0x00000000002E5B0C string=0x00000000002E5B10 "g"
 *   insn=0x00000000002E5B18 string=0x00000000002E5B1C "j"
 *   insn=0x00000000002E5B1C string=0x00000000002E5B20 "_"
 *   insn=0x00000000002E5B20 string=0x00000000002E5B24 ""%"
 *   insn=0x00000000002E5B24 string=0x00000000002E5B28 "I"
 *   insn=0x00000000002E5B2C string=0x00000000002E5B30 ")"
 *   insn=0x00000000002E5B30 string=0x00000000002E5B34 "J"
 *   insn=0x00000000002E5B38 string=0x00000000002E5B3C "j"
 *   insn=0x00000000002E5B3C string=0x00000000002E5B40 "("
 *   insn=0x00000000002E5B48 string=0x00000000002E5B4C "i"
 *   insn=0x00000000002E5B4C string=0x00000000002E5B50 "?"
 *   insn=0x00000000002E5B50 string=0x00000000002E5B54 "B"
 *   insn=0x00000000002E5B54 string=0x00000000002E5B58 "*"
 *   insn=0x00000000002E5B58 string=0x00000000002E5B5C "\n"
 *   insn=0x00000000002E5B5C string=0x00000000002E5B60 "J"
 *   insn=0x00000000002E5B60 string=0x00000000002E5B64 ")"
 *   insn=0x00000000002E5B68 string=0x00000000002E5B6C "i"
 *   insn=0x00000000002E5B6C string=0x00000000002E5B70 "1"
 *   insn=0x00000000002E5B7C string=0x00000000002E5B80 ":"
 *   insn=0x00000000002E5B88 string=0x00000000002E5B8C "i"
 *   insn=0x00000000002E5B8C string=0x00000000002E5B90 "?"
 *   insn=0x00000000002E5B90 string=0x00000000002E5B94 "b"
 *   insn=0x00000000002E5B94 string=0x00000000002E5B98 "*"
 *   insn=0x00000000002E5B98 string=0x00000000002E5B9C "*"
 *   insn=0x00000000002E5B9C string=0x00000000002E5BA0 "J"
 *   insn=0x00000000002E5BA0 string=0x00000000002E5BA4 ")"
 *   insn=0x00000000002E5BA8 string=0x00000000002E5BAC "i"
 *   insn=0x00000000002E5BB8 string=0x00000000002E5BBC "i"
 *   insn=0x00000000002E5BBC string=0x00000000002E5BC0 "?"
 *   insn=0x00000000002E5BC0 string=0x00000000002E5BC4 "#"
 *   insn=0x00000000002E5BCC string=0x00000000002E5BD0 " M"
 *   insn=0x00000000002E5BD0 string=0x00000000002E5BD4 " ""
 *   insn=0x00000000002E5BD8 string=0x00000000002E5BDC "i"
 *   insn=0x00000000002E5BE0 string=0x00000000002E5BE4 "_"
 *   insn=0x00000000002E5BEC string=0x00000000002E5BF0 "j"
 *   insn=0x00000000002E5BF0 string=0x00000000002E5BF4 "?"
 *   insn=0x00000000002E5BF8 string=0x00000000002E5BFC "B"
 *   insn=0x00000000002E5BFC string=0x00000000002E5C00 "*"
 *   insn=0x00000000002E5C00 string=0x00000000002E5C04 "_a"
 *   insn=0x00000000002E5C08 string=0x00000000002E5C0C ")"
 *   insn=0x00000000002E5C0C string=0x00000000002E5C10 "i"
 *   insn=0x00000000002E5C10 string=0x00000000002E5C14 "?"
 *   insn=0x00000000002E5C20 string=0x00000000002E5C24 "M"
 *   insn=0x00000000002E5C2C string=0x00000000002E5C30 "i"
 *   insn=0x00000000002E5C34 string=0x00000000002E5C38 "_"
 *   insn=0x00000000002E5C40 string=0x00000000002E5C44 "j"
 *   insn=0x00000000002E5C44 string=0x00000000002E5C48 "?"
 *   insn=0x00000000002E5C50 string=0x00000000002E5C54 "("
 *   insn=0x00000000002E5C58 string=0x00000000002E5C5C "A"
 *   insn=0x00000000002E5C5C string=0x00000000002E5C60 "("
 *   insn=0x00000000002E5C60 string=0x00000000002E5C64 "h"
 *   insn=0x00000000002E5C70 string=0x00000000002E5C74 " "
 *   insn=0x00000000002E5C70 string=0x00000000001FA750 "0'"
 *   insn=0x00000000002E5C80 string=0x00000000002E5C84 "("
 *   insn=0x00000000002E5C88 string=0x00000000002E5C8C "h"
 *   insn=0x00000000002E5C94 string=0x00000000002E5C98 "\t"
 *   insn=0x00000000002E5C98 string=0x00000000002E5C9C "?"
 *   insn=0x00000000002E5C9C string=0x00000000002E5CA0 "!"
 *   insn=0x00000000002E5CA0 string=0x00000000002E5CA4 ""
 *   insn=0x00000000002E5CA4 string=0x00000000002E5CA8 "h"
 *   insn=0x00000000002E5CC4 string=0x00000000002E5CC8 "("
 *   insn=0x00000000002E5CCC string=0x00000000002E5CD0 "i"
 *   insn=0x00000000002E5CD0 string=0x00000000002E5CD4 "?"
 *   insn=0x00000000002E5CD4 string=0x00000000002E5CD8 "b"
 *   insn=0x00000000002E5CD8 string=0x00000000002E5CDC "*"
 *   insn=0x00000000002E5CDC string=0x00000000002E5CE0 "_"
 *   insn=0x00000000002E5CE4 string=0x00000000002E5CE8 ")"
 *   insn=0x00000000002E5CE8 string=0x00000000002E5CEC "i"
 *   insn=0x00000000002E5D04 string=0x00000000002E5D08 ""
 *   insn=0x00000000002E5D10 string=0x00000000002E5D28 "h"
 *   insn=0x00000000002E5D14 string=0x00000000002E5D18 "2>"
 *   insn=0x00000000002E5D1C string=0x00000000002E5D20 "H<"
 *   insn=0x00000000002E5D20 string=0x00000000001F4E40 "P'"
 *   insn=0x00000000002E5D2C string=0x00000000002E5D30 "B"
 *   insn=0x00000000002E5D30 string=0x00000000002E5D34 "\t"
 *   insn=0x00000000002E5D34 string=0x00000000002E5D38 "\t"
 *   insn=0x00000000002E5D38 string=0x00000000002E5D3C ")"
 *   insn=0x00000000002E5D3C string=0x00000000002E5D40 ""
 *   insn=0x00000000002E5D44 string=0x00000000002E5D48 "h"
 *   insn=0x00000000002E5D4C string=0x00000000002E5DC8 "h&G)\n"
 *   insn=0x00000000002E5D58 string=0x00000000002E5D5C "9"
 *   insn=0x00000000002E5D74 string=0x00000000002E5D90 "i"
 *   insn=0x00000000002E5D78 string=0x00000000002E5D7C " "
 *   insn=0x00000000002E5D84 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002E5D90 string=0x00000000002E5D94 "?"
 *   insn=0x00000000002E5D98 string=0x00000000002E5D9C "*"
 *   insn=0x00000000002E5DA0 string=0x00000000002E5DA4 "J"
 *   insn=0x00000000002E5DA4 string=0x00000000002E5DA8 ")"
 *   insn=0x00000000002E5DAC string=0x00000000002E5DB0 "i"
 *   insn=0x00000000002E5DB0 string=0x00000000002E5DB4 "v"
 *   insn=0x00000000002E5DC8 string=0x00000000002E5DCC "\n"
 *   insn=0x00000000002E5DD0 string=0x00000000002E5DD4 "j:"
 *   insn=0x00000000002E5DD4 string=0x00000000002E5DD8 "\n"
 *   insn=0x00000000002E5DF4 string=0x00000000001FB460 "0'"
 *   insn=0x00000000002E5DF8 string=0x00000000002E5DFC "h"
 *   insn=0x00000000002E5E0C string=0x00000000002E5E10 "h:@"
 *   insn=0x00000000002E5E10 string=0x00000000002E5E14 ""
 *   insn=0x00000000002E5E14 string=0x00000000002E5E18 "K"
 *   insn=0x00000000002E5E18 string=0x00000000002E5E1C "h:"
 *   insn=0x00000000002E5E18 string=0x00000000002E5E20 "h"
 *   insn=0x00000000002E5E28 string=0x00000000002E5E2C "\t"
 *   insn=0x00000000002E5E2C string=0x00000000002E5E30 "?"
 *   insn=0x00000000002E5E34 string=0x00000000002E5E38 ""
 *   insn=0x00000000002E5E38 string=0x00000000002E5E3C "h"
 *   insn=0x00000000002E5E44 string=0x00000000002E5E48 ""
 *   insn=0x00000000002E5E50 string=0x00000000002E5E68 "h"
 *   insn=0x00000000002E5E70 string=0x00000000002E5E74 "\t"
 *   insn=0x00000000002E5E78 string=0x00000000002E5E7C ")"
 *   insn=0x00000000002E5E7C string=0x00000000002E5E80 ""
 *   insn=0x00000000002E5E84 string=0x00000000002E5E88 "h"
 *   insn=0x00000000002E5E8C string=0x00000000002E5EA0 "h&G)\n"
 *   insn=0x00000000002E5E94 string=0x00000000002E5E98 "nL"
 *   insn=0x00000000002E5EA0 string=0x00000000002E5EA4 "\n"
 *   insn=0x00000000002E5EA8 string=0x00000000002E5EAC "j:"
 *   insn=0x00000000002E5EAC string=0x00000000002E5EB0 "J"
 *   insn=0x00000000002E5EC8 string=0x00000000002E5ECC "eU"
 *   insn=0x00000000002E5ECC string=0x00000000002E5ED0 "@\n"
 *   insn=0x00000000002E5ED0 string=0x00000000002E5ED4 "h"
 *   insn=0x00000000002E5ED4 string=0x00000000002E5ED8 "\n"
 *   insn=0x00000000002E5EE4 string=0x00000000002E5EE8 "h:@"
 *   insn=0x00000000002E5EE8 string=0x00000000002E5EEC ""
 *   insn=0x00000000002E5EEC string=0x00000000002E5EF0 "K"
 *   insn=0x00000000002E5EF0 string=0x00000000002E5EF4 "h:"
 *   insn=0x00000000002E5EF0 string=0x00000000002E5EF8 "i"
 *   insn=0x00000000002E5EF8 string=0x00000000002E5EFC "?"
 *   insn=0x00000000002E5EFC string=0x00000000002E5F00 """
 *   insn=0x00000000002E5F00 string=0x00000000002E5F04 "*"
 *   insn=0x00000000002E5F04 string=0x00000000002E5F08 "_"
 *   insn=0x00000000002E5F0C string=0x00000000002E5F10 ")"
 *   insn=0x00000000002E5F10 string=0x00000000002E5F14 "i"
 *   insn=0x00000000002E5F14 string=0x00000000002E5F18 "?"
 *   insn=0x00000000002E5F24 string=0x00000000002E5F28 "JL"
 *   insn=0x00000000002E5F28 string=0x00000000002E5F2C "`"
 *   insn=0x00000000002E5F30 string=0x00000000002E5F34 "i"
 *   insn=0x00000000002E5F38 string=0x00000000002E5F3C "_"
 *   insn=0x00000000002E5F44 string=0x00000000002E5F48 "j"
 *   insn=0x00000000002E5F48 string=0x00000000002E5F4C "?"
 *   insn=0x00000000002E5F54 string=0x00000000002E5F58 "*"
 *   insn=0x00000000002E5F58 string=0x00000000002E5F5C "_!"
 *   insn=0x00000000002E5F5C string=0x00000000002E5F60 "!"
 *   insn=0x00000000002E5F60 string=0x00000000002E5F64 ")"
 *   insn=0x00000000002E5F64 string=0x00000000002E5F68 "i"
 *   insn=0x00000000002E5F68 string=0x00000000002E5F6C "?"
 *   insn=0x00000000002E5F6C string=0x00000000002E5F70 "c"
 *   insn=0x00000000002E5F78 string=0x00000000002E5F7C "5L"
 *   insn=0x00000000002E5F84 string=0x00000000002E5F88 "i"
 *   insn=0x00000000002E5F8C string=0x00000000002E5F90 "_"
 *   insn=0x00000000002E5F98 string=0x00000000002E5F9C "j"
 *   insn=0x00000000002E5F9C string=0x00000000002E5FA0 "?"
 *   insn=0x00000000002E5FA8 string=0x00000000002E5FAC "*"
 *   insn=0x00000000002E5FAC string=0x00000000002E5FB0 "_A"
 *   insn=0x00000000002E5FB4 string=0x00000000002E5FB8 "*"
 *   insn=0x00000000002E5FB8 string=0x00000000002E5FBC "j"
 *   insn=0x00000000002E5FBC string=0x00000000002E5FC0 "_"
 *   insn=0x00000000002E5FC0 string=0x00000000002E5FC4 "#"
 *   insn=0x00000000002E5FCC string=0x00000000002E5FD0 " L"
 *   insn=0x00000000002E5FD0 string=0x00000000002E5FD4 " "
 *   insn=0x00000000002E5FD8 string=0x00000000002E5FDC "j"
 *   insn=0x00000000002E5FE0 string=0x00000000002E5FE4 "?"
 *   insn=0x00000000002E5FEC string=0x00000000002E5FF0 "i"
 *   insn=0x00000000002E5FF0 string=0x00000000002E5FF4 "_"
 *   insn=0x00000000002E5FF8 string=0x00000000002E5FFC "A"
 *   insn=0x00000000002E5FFC string=0x00000000002E6000 "h.@"
 *   insn=0x00000000002E6000 string=0x00000000002E6004 ""
 *   insn=0x00000000002E600C string=0x00000000002E6010 "`"
 *   insn=0x00000000002E6014 string=0x00000000002E6024 ""
 *   insn=0x00000000002E6050 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002E6064 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GameOptions::MergePartialFromCodedStream(
        Caver::Proto::GameOptions *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // x21
  char *v6; // x8
  unsigned __int64 v7; // x1
  unsigned int TagFallback; // w0
  int v9; // w8
  int v10; // w8
  __int64 v11; // x9
  __int64 v12; // x8
  Caver::Proto::MusicPlaylist *v13; // x22
  __int64 v14; // x8
  __int64 v15; // x9
  char *v16; // x8
  int v17; // w8
  int v18; // w9
  int v19; // w23
  int v20; // w8
  bool v21; // vf
  int v22; // w8
  unsigned __int64 v23; // x8
  _BYTE *v24; // x9
  char *v25; // x9
  unsigned int v26; // w10
  _BYTE *v27; // x9
  unsigned __int64 v28; // x8
  char *v29; // x10
  unsigned int v30; // w9
  unsigned __int8 *v31; // x10
  char *v32; // x9
  unsigned int v33; // w10
  _BYTE *v34; // x9
  char *v35; // x9
  unsigned int v36; // w10
  _BYTE *v37; // x9
  int v38; // w11
  int v39; // w11
  int v40; // w9
  _BYTE *v41; // x8
  int v42; // w9
  int v43; // w8
  _BYTE *v44; // x9
  Caver::Proto::GUIViewLayout *v45; // x22
  char *v46; // x8
  char *v47; // x9
  unsigned int v48; // w10
  _BYTE *v49; // x9
  int v50; // w8
  int v51; // w9
  int v52; // w23
  int v53; // w8
  int v54; // w8
  _BYTE *v55; // x8
  Caver::Proto::GUIViewLayout *v56; // x22
  char *v57; // x8
  int v58; // w8
  int v59; // w9
  int v60; // w23
  int v61; // w8
  int v62; // w8
  _BYTE *v63; // x9
  int v64; // w11
  int v65; // w11
  int v66; // w11
  __int64 result; // x0
  unsigned int v68; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v69; // [xsp+8h] [xbp-48h]

  v5 = (Caver::Proto::GameOptions *)((char *)this + 16);
  v69 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
LABEL_2:
  while ( 2 )
  {
    v6 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v6 >= *((_QWORD *)a2 + 2) || *v6 < 0 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v7 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( !TagFallback )
        return 1;
    }
    else
    {
      v7 = (unsigned __int8)*v6;
      *((_DWORD *)a2 + 8) = v7;
      *((_QWORD *)a2 + 1) = v6 + 1;
      if ( !(_DWORD)v7 )
        return 1;
    }
    switch ( (unsigned int)v7 >> 3 )
    {
      case 1u:
        v9 = v7 & 7;
        if ( v9 != 2 )
          goto LABEL_79;
        while ( 1 )
        {
          v10 = *((_DWORD *)this + 7);
          v11 = *((int *)this + 6);
          if ( (int)v11 >= v10 )
          {
            if ( v10 == *((_DWORD *)this + 8) )
            {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v5, v10 + 1);
              v10 = *((_DWORD *)this + 7);
            }
            *((_DWORD *)this + 7) = v10 + 1;
            v13 = (Caver::Proto::MusicPlaylist *)operator new(0x58u);
            Caver::Proto::MusicPlaylist::MusicPlaylist(v13);
            v14 = *((int *)this + 6);
            v15 = *((_QWORD *)this + 2);
            *((_DWORD *)this + 6) = v14 + 1;
            *(_QWORD *)(v15 + 8 * v14) = v13;
          }
          else
          {
            v12 = *((_QWORD *)this + 2);
            *((_DWORD *)this + 6) = v11 + 1;
            v13 = *(Caver::Proto::MusicPlaylist **)(v12 + 8 * v11);
          }
          v16 = (char *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v16 >= *((_QWORD *)a2 + 2) || *v16 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v68) & 1) == 0 )
              return 0;
          }
          else
          {
            v68 = (unsigned __int8)*v16;
            *((_QWORD *)a2 + 1) = v16 + 1;
          }
          v17 = *((_DWORD *)a2 + 14);
          v18 = *((_DWORD *)a2 + 15);
          *((_DWORD *)a2 + 14) = v17 + 1;
          if ( v17 >= v18 )
            return 0;
          v19 = google::protobuf::io::CodedInputStream::PushLimit(a2, v68);
          if ( (Caver::Proto::MusicPlaylist::MergePartialFromCodedStream(v13, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
            return 0;
          google::protobuf::io::CodedInputStream::PopLimit(a2, v19);
          v20 = *((_DWORD *)a2 + 14);
          v21 = __OFSUB__(v20, 1);
          v22 = v20 - 1;
          if ( v22 < 0 == v21 )
            *((_DWORD *)a2 + 14) = v22;
          v24 = (_BYTE *)*((_QWORD *)a2 + 1);
          v23 = *((_QWORD *)a2 + 2);
          if ( (unsigned __int64)v24 >= v23 )
            goto LABEL_2;
          if ( *v24 != 10 )
            break;
          *((_QWORD *)a2 + 1) = v24 + 1;
        }
        if ( *v24 != 16 )
          continue;
        v25 = v24 + 1;
        *((_QWORD *)a2 + 1) = v25;
        if ( (unsigned __int64)v25 >= v23 )
          goto LABEL_49;
        goto LABEL_29;
      case 2u:
        v9 = v7 & 7;
        if ( (v7 & 7) != 0 )
          goto LABEL_79;
        v25 = (char *)*((_QWORD *)a2 + 1);
        v23 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v25 >= v23 )
          goto LABEL_49;
LABEL_29:
        if ( *v25 < 0 )
        {
LABEL_49:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v68) & 1) == 0 )
            return 0;
          v26 = v68;
          v27 = (_BYTE *)*((_QWORD *)a2 + 1);
          v23 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v26 = (unsigned __int8)*v25;
          v27 = v25 + 1;
          v68 = v26;
          *((_QWORD *)a2 + 1) = v27;
        }
        v38 = *((_DWORD *)this + 27);
        *((_BYTE *)this + 72) = v26 != 0;
        *((_DWORD *)this + 27) = v38 | 2;
        if ( (unsigned __int64)v27 >= v23 || *v27 != 24 )
          continue;
        v32 = v27 + 1;
        *((_QWORD *)a2 + 1) = v32;
        if ( (unsigned __int64)v32 >= v23 )
          goto LABEL_54;
LABEL_39:
        if ( *v32 < 0 )
        {
LABEL_54:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v68) & 1) == 0 )
            return 0;
          v33 = v68;
          v34 = (_BYTE *)*((_QWORD *)a2 + 1);
          v23 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v33 = (unsigned __int8)*v32;
          v34 = v32 + 1;
          v68 = v33;
          *((_QWORD *)a2 + 1) = v34;
        }
        v39 = *((_DWORD *)this + 27);
        *((_BYTE *)this + 73) = v33 != 0;
        *((_DWORD *)this + 27) = v39 | 4;
        if ( (unsigned __int64)v34 >= v23 || *v34 != 37 )
          continue;
        *((_QWORD *)a2 + 1) = v34 + 1;
LABEL_59:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v68) & 1) == 0 )
          return 0;
        v40 = *((_DWORD *)this + 27);
        *((_DWORD *)this + 19) = v68;
        *((_DWORD *)this + 27) = v40 | 8;
        v41 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v41 >= *((_QWORD *)a2 + 2) || *v41 != 45 )
          continue;
        *((_QWORD *)a2 + 1) = v41 + 1;
LABEL_63:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v68) & 1) == 0 )
          return 0;
        v42 = *((_DWORD *)this + 27);
        *((_DWORD *)this + 20) = v68;
        v43 = v42 | 0x10;
        *((_DWORD *)this + 27) = v42 | 0x10;
        v44 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v44 >= *((_QWORD *)a2 + 2) || *v44 != 50 )
          continue;
        *((_QWORD *)a2 + 1) = v44 + 1;
LABEL_69:
        v45 = (Caver::Proto::GUIViewLayout *)*((_QWORD *)this + 11);
        *((_DWORD *)this + 27) = v43 | 0x20;
        if ( !v45 )
        {
          v45 = (Caver::Proto::GUIViewLayout *)operator new(0x60u);
          Caver::Proto::GUIViewLayout::GUIViewLayout(v45);
          *((_QWORD *)this + 11) = v45;
        }
        v46 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v46 >= *((_QWORD *)a2 + 2) || *v46 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v68) & 1) == 0 )
            return 0;
        }
        else
        {
          v68 = (unsigned __int8)*v46;
          *((_QWORD *)a2 + 1) = v46 + 1;
        }
        v50 = *((_DWORD *)a2 + 14);
        v51 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v50 + 1;
        if ( v50 >= v51 )
          return 0;
        v52 = google::protobuf::io::CodedInputStream::PushLimit(a2, v68);
        if ( (Caver::Proto::GUIViewLayout::MergePartialFromCodedStream(v45, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v52);
        v53 = *((_DWORD *)a2 + 14);
        v21 = __OFSUB__(v53, 1);
        v54 = v53 - 1;
        if ( v54 < 0 == v21 )
          *((_DWORD *)a2 + 14) = v54;
        v55 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v55 >= *((_QWORD *)a2 + 2) || *v55 != 58 )
          continue;
        *((_QWORD *)a2 + 1) = v55 + 1;
LABEL_94:
        v56 = (Caver::Proto::GUIViewLayout *)*((_QWORD *)this + 12);
        *((_DWORD *)this + 27) |= 0x40u;
        if ( !v56 )
        {
          v56 = (Caver::Proto::GUIViewLayout *)operator new(0x60u);
          Caver::Proto::GUIViewLayout::GUIViewLayout(v56);
          *((_QWORD *)this + 12) = v56;
        }
        v57 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v57 >= *((_QWORD *)a2 + 2) || *v57 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v68) & 1) == 0 )
            return 0;
        }
        else
        {
          v68 = (unsigned __int8)*v57;
          *((_QWORD *)a2 + 1) = v57 + 1;
        }
        v58 = *((_DWORD *)a2 + 14);
        v59 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v58 + 1;
        if ( v58 >= v59 )
          return 0;
        v60 = google::protobuf::io::CodedInputStream::PushLimit(a2, v68);
        if ( (Caver::Proto::GUIViewLayout::MergePartialFromCodedStream(v56, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v60);
        v61 = *((_DWORD *)a2 + 14);
        v21 = __OFSUB__(v61, 1);
        v62 = v61 - 1;
        if ( v62 < 0 == v21 )
          *((_DWORD *)a2 + 14) = v62;
        v63 = (_BYTE *)*((_QWORD *)a2 + 1);
        v28 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v63 >= v28 || *v63 != 64 )
          continue;
        v35 = v63 + 1;
        *((_QWORD *)a2 + 1) = v35;
        if ( (unsigned __int64)v35 >= v28 )
          goto LABEL_108;
LABEL_45:
        if ( *v35 < 0 )
        {
LABEL_108:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v68) & 1) == 0 )
            return 0;
          v36 = v68;
          v37 = (_BYTE *)*((_QWORD *)a2 + 1);
          v28 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v36 = (unsigned __int8)*v35;
          v37 = v35 + 1;
          v68 = v36;
          *((_QWORD *)a2 + 1) = v37;
        }
        v64 = *((_DWORD *)this + 27);
        *((_BYTE *)this + 104) = v36 != 0;
        *((_DWORD *)this + 27) = v64 | 0x80;
        if ( (unsigned __int64)v37 >= v28 || *v37 != 72 )
          continue;
        v47 = v37 + 1;
        *((_QWORD *)a2 + 1) = v47;
        if ( (unsigned __int64)v47 >= v28 )
          goto LABEL_113;
LABEL_83:
        if ( *v47 < 0 )
        {
LABEL_113:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v68) & 1) == 0 )
            return 0;
          v48 = v68;
          v49 = (_BYTE *)*((_QWORD *)a2 + 1);
          v28 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v48 = (unsigned __int8)*v47;
          v49 = v47 + 1;
          v68 = v48;
          *((_QWORD *)a2 + 1) = v49;
        }
        v65 = *((_DWORD *)this + 27);
        *((_BYTE *)this + 105) = v48 != 0;
        *((_DWORD *)this + 27) = v65 | 0x100;
        if ( (unsigned __int64)v49 >= v28 || *v49 != 80 )
          continue;
        v29 = v49 + 1;
        *((_QWORD *)a2 + 1) = v49 + 1;
        if ( (unsigned __int64)(v49 + 1) >= v28 )
          goto LABEL_118;
        goto LABEL_35;
      case 3u:
        v9 = v7 & 7;
        if ( (v7 & 7) != 0 )
          goto LABEL_79;
        v32 = (char *)*((_QWORD *)a2 + 1);
        v23 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v32 < v23 )
          goto LABEL_39;
        goto LABEL_54;
      case 4u:
        v9 = v7 & 7;
        if ( v9 == 5 )
          goto LABEL_59;
        goto LABEL_79;
      case 5u:
        v9 = v7 & 7;
        if ( v9 == 5 )
          goto LABEL_63;
        goto LABEL_79;
      case 6u:
        v9 = v7 & 7;
        if ( v9 != 2 )
          goto LABEL_79;
        v43 = *((_DWORD *)this + 27);
        goto LABEL_69;
      case 7u:
        v9 = v7 & 7;
        if ( v9 == 2 )
          goto LABEL_94;
        goto LABEL_79;
      case 8u:
        v9 = v7 & 7;
        if ( (v7 & 7) != 0 )
          goto LABEL_79;
        v35 = (char *)*((_QWORD *)a2 + 1);
        v28 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v35 < v28 )
          goto LABEL_45;
        goto LABEL_108;
      case 9u:
        v9 = v7 & 7;
        if ( (v7 & 7) != 0 )
          goto LABEL_79;
        v47 = (char *)*((_QWORD *)a2 + 1);
        v28 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v47 < v28 )
          goto LABEL_83;
        goto LABEL_113;
      case 0xAu:
        v9 = v7 & 7;
        if ( (v7 & 7) == 0 )
        {
          v29 = (char *)*((_QWORD *)a2 + 1);
          v28 = *((_QWORD *)a2 + 2);
          if ( (unsigned __int64)v29 < v28 )
          {
LABEL_35:
            if ( (*v29 & 0x80000000) == 0 )
            {
              v30 = (unsigned __int8)*v29;
              v31 = (unsigned __int8 *)(v29 + 1);
              v68 = v30;
              *((_QWORD *)a2 + 1) = v31;
              goto LABEL_120;
            }
          }
LABEL_118:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v68) & 1) == 0 )
            return 0;
          v30 = v68;
          v31 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
          v28 = *((_QWORD *)a2 + 2);
LABEL_120:
          v66 = *((_DWORD *)this + 27);
          *((_BYTE *)this + 106) = v30 != 0;
          *((_DWORD *)this + 27) = v66 | 0x200;
          if ( v31 == (unsigned __int8 *)v28 && *((_DWORD *)a2 + 11) )
          {
            result = 1;
            *((_DWORD *)a2 + 8) = 0;
            *((_BYTE *)a2 + 36) = 1;
            return result;
          }
          continue;
        }
LABEL_79:
        if ( v9 != 4 )
        {
LABEL_80:
          if ( (google::protobuf::internal::WireFormatLite::SkipField(
                  a2,
                  (google::protobuf::io::CodedInputStream *)v7,
                  a3)
              & 1) == 0 )
            return 0;
          continue;
        }
        return 1;
      default:
        if ( (v7 & 7) == 4 )
          return 1;
        goto LABEL_80;
    }
  }
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003078F0
 * Mangled: _ZN5Caver5Proto19GroundMeshComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::GroundMeshComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 17
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F9330  Caver::Proto::Mesh::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F9860  Caver::Proto::Rectangle::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FB070  Caver::Proto::Rectangle::Rectangle(void)
 *   0x00000000001FC6E0  google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000002028F0  Caver::Proto::FloatColor::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x0000000000308204  Caver::Proto::GroundMeshComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 258
 *   insn=0x0000000000307918 string=0x000000000030791C "Z"
 *   insn=0x0000000000307934 string=0x0000000000307938 "k"
 *   insn=0x000000000030793C string=0x0000000000307940 "qE"
 *   insn=0x0000000000307944 string=0x0000000000307948 ")%F"
 *   insn=0x0000000000307948 string=0x000000000030794C "J"
 *   insn=0x000000000030794C string=0x0000000000307950 ";"
 *   insn=0x0000000000307950 string=0x000000000058B590 "<"
 *   insn=0x0000000000307964 string=0x0000000000307968 "{C"
 *   insn=0x0000000000307968 string=0x000000000030796C ""
 *   insn=0x0000000000307970 string=0x0000000000307974 "ka"
 *   insn=0x0000000000307978 string=0x000000000030797C """
 *   insn=0x000000000030797C string=0x0000000000307980 " "
 *   insn=0x0000000000307980 string=0x0000000000307984 "!"
 *   insn=0x0000000000307998 string=0x0000000000308170 "h"
 *   insn=0x000000000030799C string=0x00000000003079A0 "("
 *   insn=0x00000000003079A0 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000003079A4 string=0x00000000003079A8 "a""
 *   insn=0x00000000003079A8 string=0x00000000003079AC "a?"
 *   insn=0x00000000003079AC string=0x00000000003079B0 "(|"
 *   insn=0x00000000003079B0 string=0x00000000003079B4 ""
 *   insn=0x00000000003079BC string=0x00000000003079C0 "h{"
 *   insn=0x00000000003079BC string=0x0000000000307B34 "("
 *   insn=0x00000000003079C0 string=0x00000000003079C4 ""
 *   insn=0x00000000003079C8 string=0x00000000003079CC "("
 *   insn=0x00000000003079C8 string=0x0000000000307A40 "("
 *   insn=0x00000000003079C8 string=0x0000000000307A50 "("
 *   insn=0x00000000003079C8 string=0x0000000000307A60 "("
 *   insn=0x00000000003079C8 string=0x0000000000307A70 "("
 *   insn=0x00000000003079C8 string=0x0000000000307AA0 "("
 *   insn=0x00000000003079C8 string=0x0000000000307B14 "("
 *   insn=0x00000000003079C8 string=0x0000000000307B24 "("
 *   insn=0x00000000003079D0 string=0x00000000003079D4 "!"
 *   insn=0x00000000003079E0 string=0x00000000003079E4 ")!G"
 *   insn=0x00000000003079E4 string=0x00000000003079E8 ""
 *   insn=0x00000000003079EC string=0x00000000003079F0 "?"
 *   insn=0x00000000003079FC string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000307A04 string=0x0000000000307A08 "("
 *   insn=0x0000000000307A10 string=0x0000000000307A14 "3"
 *   insn=0x0000000000307A14 string=0x0000000000307A18 "@<"
 *   insn=0x0000000000307A14 string=0x00000000001FC6E0 "0'"
 *   insn=0x0000000000307A18 string=0x0000000000307A1C "h"
 *   insn=0x0000000000307A20 string=0x0000000000307A24 "b:"
 *   insn=0x0000000000307A24 string=0x0000000000307A28 "\t"
 *   insn=0x0000000000307A28 string=0x0000000000307A2C "?"
 *   insn=0x0000000000307A30 string=0x0000000000307A34 ""
 *   insn=0x0000000000307A34 string=0x0000000000307A38 "h"
 *   insn=0x0000000000307A58 string=0x0000000000307A5C "="
 *   insn=0x0000000000307A70 string=0x0000000000307A74 "!"
 *   insn=0x0000000000307A74 string=0x0000000000307A78 "j"
 *   insn=0x0000000000307A78 string=0x0000000000307A7C "_"
 *   insn=0x0000000000307A7C string=0x0000000000307A80 "B"
 *   insn=0x0000000000307A80 string=0x0000000000307A84 "I"
 *   insn=0x0000000000307A84 string=0x0000000000307A88 "\t"
 *   insn=0x0000000000307A88 string=0x0000000000307A8C ")"
 *   insn=0x0000000000307A8C string=0x0000000000307A90 "J"
 *   insn=0x0000000000307A94 string=0x0000000000307A98 "j"
 *   insn=0x0000000000307AB4 string=0x0000000000307AB8 ")"
 *   insn=0x0000000000307AB8 string=0x0000000000307ABC ""
 *   insn=0x0000000000307AC0 string=0x0000000000307AC4 "?"
 *   insn=0x0000000000307AC4 string=0x0000000000307AC8 "!"
 *   insn=0x0000000000307AD4 string=0x0000000000307AD8 ""
 *   insn=0x0000000000307ADC string=0x0000000000307AE0 "a"
 *   insn=0x0000000000307AE0 string=0x0000000000307AE4 "("
 *   insn=0x0000000000307AF0 string=0x0000000000307AF4 "`5"
 *   insn=0x0000000000307AF4 string=0x0000000000307AF8 "h"
 *   insn=0x0000000000307B00 string=0x0000000000307B04 "\t"
 *   insn=0x0000000000307B04 string=0x0000000000307B08 "?"
 *   insn=0x0000000000307B08 string=0x0000000000307B0C "!3"
 *   insn=0x0000000000307B0C string=0x0000000000307B10 "a"
 *   insn=0x0000000000307B10 string=0x0000000000307C94 ""
 *   insn=0x0000000000307B28 string=0x0000000000307B2C "a"
 *   insn=0x0000000000307B2C string=0x0000000000307B30 "W"
 *   insn=0x0000000000307B40 string=0x0000000000307B44 "c"
 *   insn=0x0000000000307B44 string=0x0000000000307B48 "@1"
 *   insn=0x0000000000307B44 string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000307B50 string=0x0000000000307B54 "?"
 *   insn=0x0000000000307B5C string=0x0000000000307B60 "*"
 *   insn=0x0000000000307B60 string=0x0000000000307B64 ")"
 *   insn=0x0000000000307B70 string=0x0000000000307BEC "h"
 *   insn=0x0000000000307B7C string=0x0000000000307B90 ""
 *   insn=0x0000000000307B84 string=0x0000000000307B88 "f"
 *   insn=0x0000000000307B88 string=0x00000000001FAD20 "0'"
 *   insn=0x0000000000307BA4 string=0x0000000000307BA8 "#"
 *   insn=0x0000000000307BAC string=0x0000000000307BB0 ""
 *   insn=0x0000000000307BB4 string=0x0000000000307BB8 ""
 *   insn=0x0000000000307BDC string=0x0000000000307BE0 ")"
 *   insn=0x0000000000307BF4 string=0x0000000000307BF8 "\t"
 *   insn=0x0000000000307BFC string=0x0000000000307C00 ")"
 *   insn=0x0000000000307C00 string=0x0000000000307C04 ""
 *   insn=0x0000000000307C08 string=0x0000000000307C0C "h"
 *   insn=0x0000000000307C10 string=0x0000000000307C24 "h&G)\n"
 *   insn=0x0000000000307C18 string=0x0000000000307C1C ""
 *   insn=0x0000000000307C1C string=0x00000000001F9050 "0'"
 *   insn=0x0000000000307C24 string=0x0000000000307C28 "\n"
 *   insn=0x0000000000307C2C string=0x0000000000307C30 "j:"
 *   insn=0x0000000000307C30 string=0x0000000000307C34 "j+"
 *   insn=0x0000000000307C3C string=0x0000000000307C40 "P"
 *   insn=0x0000000000307C50 string=0x0000000000307C54 "`*"
 *   insn=0x0000000000307C50 string=0x00000000001F9330 "0'"
 *   insn=0x0000000000307C54 string=0x0000000000307C58 "h"
 *   insn=0x0000000000307C58 string=0x0000000000307C5C "(*"
 *   insn=0x0000000000307C64 string=0x0000000000307C68 "j"
 *   insn=0x0000000000307C68 string=0x0000000000307C6C "h:@"
 *   insn=0x0000000000307C6C string=0x0000000000307C70 ""
 *   insn=0x0000000000307C70 string=0x0000000000307C74 "K"
 *   insn=0x0000000000307C74 string=0x0000000000307C78 "h:"
 *   insn=0x0000000000307C74 string=0x0000000000307C7C "h"
 *   insn=0x0000000000307C80 string=0x0000000000307C84 "b'"
 *   insn=0x0000000000307C84 string=0x0000000000307C88 "\t"
 *   insn=0x0000000000307C88 string=0x0000000000307C8C "?"
 *   insn=0x0000000000307C90 string=0x0000000000307CA0 "\t"
 *   insn=0x0000000000307C94 string=0x0000000000307C98 "h"
 *   insn=0x0000000000307CA0 string=0x0000000000307CA4 "?"
 *   insn=0x0000000000307CA4 string=0x0000000000307CA8 "A&"
 *   insn=0x0000000000307CA8 string=0x0000000000307CAC ""
 *   insn=0x0000000000307CAC string=0x0000000000307CB0 "h"
 *   insn=0x0000000000307CB8 string=0x0000000000307CBC ""
 *   insn=0x0000000000307CC4 string=0x0000000000307CDC "h"
 *   insn=0x0000000000307CC8 string=0x0000000000307CCC "E"
 *   insn=0x0000000000307CD4 string=0x00000000001FB070 "0'"
 *   insn=0x0000000000307CE4 string=0x0000000000307CE8 "\t"
 *   insn=0x0000000000307CEC string=0x0000000000307CF0 ")"
 *   insn=0x0000000000307CF0 string=0x0000000000307CF4 ""
 *   insn=0x0000000000307CF8 string=0x0000000000307CFC "h"
 *   insn=0x0000000000307D00 string=0x0000000000307D14 "h&G)\n"
 *   insn=0x0000000000307D14 string=0x0000000000307D18 "\n"
 *   insn=0x0000000000307D1C string=0x0000000000307D20 "j:"
 *   insn=0x0000000000307D40 string=0x00000000001F9860 "0'"
 *   insn=0x0000000000307D44 string=0x0000000000307D48 "h"
 *   insn=0x0000000000307D54 string=0x0000000000307D58 "."
 *   insn=0x0000000000307D58 string=0x0000000000307D5C "h:@"
 *   insn=0x0000000000307D5C string=0x0000000000307D60 ""
 *   insn=0x0000000000307D60 string=0x0000000000307D64 "K"
 *   insn=0x0000000000307D64 string=0x0000000000307D68 "h:"
 *   insn=0x0000000000307D64 string=0x0000000000307D6C "h"
 *   insn=0x0000000000307D74 string=0x0000000000307D78 "\t"
 *   insn=0x0000000000307D78 string=0x0000000000307D7C "?\t"
 *   insn=0x0000000000307D84 string=0x0000000000307DCC ""
 *   insn=0x0000000000307D90 string=0x0000000000307D94 "` "
 *   insn=0x0000000000307D98 string=0x0000000000307D9C "j"
 *   insn=0x0000000000307DA0 string=0x0000000000307DA4 "?"
 *   insn=0x0000000000307DAC string=0x0000000000307DB0 "i"
 *   insn=0x0000000000307DB0 string=0x0000000000307DB4 "_"
 *   insn=0x0000000000307DBC string=0x0000000000307DC0 "h.@"
 *   insn=0x0000000000307DC0 string=0x0000000000307DC4 "h"
 *   insn=0x0000000000307DCC string=0x0000000000307DD0 "h"
 *   insn=0x0000000000307DD4 string=0x0000000000307DD8 "?"
 *   insn=0x0000000000307DE0 string=0x0000000000307DE4 "*"
 *   insn=0x0000000000307DE4 string=0x0000000000307DE8 ")"
 *   insn=0x0000000000307DF0 string=0x0000000000307DF4 " "
 *   insn=0x0000000000307DF4 string=0x0000000000307E74 "h"
 *   insn=0x0000000000307E00 string=0x0000000000307E14 ""
 *   insn=0x0000000000307E2C string=0x0000000000307E30 "\t#"
 *   insn=0x0000000000307E30 string=0x0000000000307E34 ""
 *   insn=0x0000000000307E38 string=0x0000000000307E3C ""
 *   insn=0x0000000000307E54 string=0x0000000000307E58 ""
 *   insn=0x0000000000307E64 string=0x0000000000307E68 ")"
 *   insn=0x0000000000307E7C string=0x0000000000307E80 "\t"
 *   insn=0x0000000000307E84 string=0x0000000000307E88 ")"
 *   insn=0x0000000000307E88 string=0x0000000000307E8C ""
 *   insn=0x0000000000307E90 string=0x0000000000307E94 "h"
 *   insn=0x0000000000307E98 string=0x0000000000307EAC "h&G)\n"
 *   insn=0x0000000000307EA0 string=0x0000000000307EA4 "k"
 *   insn=0x0000000000307EAC string=0x0000000000307EB0 "\n"
 *   insn=0x0000000000307EB4 string=0x0000000000307EB8 "j:"
 *   insn=0x0000000000307EB8 string=0x0000000000307EBC "*"
 *   insn=0x0000000000307ED8 string=0x0000000000307EDC " "
 *   insn=0x0000000000307EDC string=0x0000000000307EE0 "h"
 *   insn=0x0000000000307EF0 string=0x0000000000307EF4 "h:@"
 *   insn=0x0000000000307EF4 string=0x0000000000307EF8 ""
 *   insn=0x0000000000307EF8 string=0x0000000000307EFC "K"
 *   insn=0x0000000000307EFC string=0x0000000000307F00 "h:"
 *   insn=0x0000000000307EFC string=0x0000000000307F04 "h"
 *   insn=0x0000000000307F08 string=0x0000000000307F0C """
 *   insn=0x0000000000307F0C string=0x0000000000307F10 "\t"
 *   insn=0x0000000000307F10 string=0x0000000000307F14 "?\t"
 *   insn=0x0000000000307F18 string=0x0000000000307F1C "\t"
 *   insn=0x0000000000307F1C string=0x0000000000307F20 "?)"
 *   insn=0x0000000000307F20 string=0x0000000000307F24 "a"
 *   insn=0x0000000000307F24 string=0x0000000000307F28 ""
 *   insn=0x0000000000307F28 string=0x0000000000307F2C "h"
 *   insn=0x0000000000307F30 string=0x0000000000307F34 "?"
 *   insn=0x0000000000307F3C string=0x0000000000307F40 "*"
 *   insn=0x0000000000307F40 string=0x0000000000307F44 ")"
 *   insn=0x0000000000307F4C string=0x0000000000307F50 " "
 *   insn=0x0000000000307F50 string=0x0000000000307FD0 "h"
 *   insn=0x0000000000307F5C string=0x0000000000307F70 ""
 *   insn=0x0000000000307F64 string=0x0000000000307F68 "n"
 *   insn=0x0000000000307F88 string=0x0000000000307F8C "\t#"
 *   insn=0x0000000000307F8C string=0x0000000000307F90 ""
 *   insn=0x0000000000307F94 string=0x0000000000307F98 ""
 *   insn=0x0000000000307FB0 string=0x0000000000307FB4 ""
 *   insn=0x0000000000307FC0 string=0x0000000000307FC4 ")"
 *   insn=0x0000000000307FD8 string=0x0000000000307FDC "\t"
 *   insn=0x0000000000307FE0 string=0x0000000000307FE4 ")"
 *   insn=0x0000000000307FE4 string=0x0000000000307FE8 ""
 *   insn=0x0000000000307FEC string=0x0000000000307FF0 "h"
 *   insn=0x0000000000307FF4 string=0x0000000000308008 "h&G)\n"
 *   insn=0x0000000000308008 string=0x000000000030800C "\n"
 *   insn=0x0000000000308010 string=0x0000000000308014 "j:"
 *   insn=0x0000000000308014 string=0x0000000000308018 "J"
 *   insn=0x0000000000308020 string=0x0000000000308024 "W"
 *   insn=0x0000000000308034 string=0x0000000000308038 "@"
 *   insn=0x0000000000308038 string=0x000000000030803C "h"
 *   insn=0x000000000030803C string=0x0000000000308040 ""
 *   insn=0x0000000000308048 string=0x000000000030804C "q"
 *   insn=0x000000000030804C string=0x0000000000308050 "h:@"
 *   insn=0x0000000000308050 string=0x0000000000308054 ""
 *   insn=0x0000000000308054 string=0x0000000000308058 "K"
 *   insn=0x0000000000308058 string=0x000000000030805C "h:"
 *   insn=0x0000000000308058 string=0x0000000000308060 "h"
 *   insn=0x0000000000308064 string=0x0000000000308068 "B"
 *   insn=0x0000000000308068 string=0x000000000030806C "\t"
 *   insn=0x000000000030806C string=0x0000000000308070 "?)"
 *   insn=0x0000000000308074 string=0x0000000000308078 "\t"
 *   insn=0x0000000000308078 string=0x000000000030807C "?I"
 *   insn=0x0000000000308080 string=0x0000000000308084 ""
 *   insn=0x0000000000308084 string=0x0000000000308088 "h"
 *   insn=0x0000000000308090 string=0x0000000000308094 ""
 *   insn=0x000000000030809C string=0x00000000003080B4 "h"
 *   insn=0x00000000003080A0 string=0x00000000003080A4 "O"
 *   insn=0x00000000003080AC string=0x00000000001F3F20 "P'"
 *   insn=0x00000000003080BC string=0x00000000003080C0 "\t"
 *   insn=0x00000000003080C4 string=0x00000000003080C8 ")"
 *   insn=0x00000000003080C8 string=0x00000000003080CC ""
 *   insn=0x00000000003080D0 string=0x00000000003080D4 "h"
 *   insn=0x00000000003080D8 string=0x00000000003080EC "h&G)\n"
 *   insn=0x00000000003080EC string=0x00000000003080F0 "\n"
 *   insn=0x00000000003080F4 string=0x00000000003080F8 "j:"
 *   insn=0x00000000003080F8 string=0x00000000003080FC "*"
 *   insn=0x0000000000308118 string=0x000000000030811C " "
 *   insn=0x000000000030811C string=0x0000000000308120 "h"
 *   insn=0x000000000030812C string=0x0000000000308130 "8"
 *   insn=0x0000000000308130 string=0x0000000000308134 "h:@"
 *   insn=0x0000000000308134 string=0x0000000000308138 ""
 *   insn=0x0000000000308138 string=0x000000000030813C "K"
 *   insn=0x000000000030813C string=0x0000000000308140 "h:"
 *   insn=0x000000000030813C string=0x0000000000308144 "i"
 *   insn=0x0000000000308144 string=0x0000000000308148 "?"
 *   insn=0x0000000000308148 string=0x000000000030814C """
 *   insn=0x000000000030814C string=0x0000000000308150 "*"
 *   insn=0x0000000000308150 string=0x0000000000308154 "_a"
 *   insn=0x0000000000308158 string=0x000000000030815C "*"
 *   insn=0x000000000030815C string=0x0000000000308160 "j"
 *   insn=0x0000000000308160 string=0x0000000000308164 "_"
 *   insn=0x0000000000308168 string=0x000000000030816C ""
 *   insn=0x0000000000308174 string=0x0000000000308178 """
 *   insn=0x0000000000308178 string=0x000000000030817C "\t"
 *   insn=0x0000000000308180 string=0x0000000000308184 "!"
 *   insn=0x0000000000308184 string=0x0000000000308188 ""
 *   insn=0x0000000000308188 string=0x000000000030818C "a""
 *   insn=0x000000000030818C string=0x0000000000308190 "h"
 *   insn=0x000000000030819C string=0x00000000003081A4 "H"
 *   insn=0x00000000003081B0 string=0x00000000003081E8 ":"
 *   insn=0x00000000003081DC string=0x00000000003081E0 "`"
 *   insn=0x00000000003081E8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003081F4 string=0x00000000003081F8 "."
 *   insn=0x00000000003081F8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GroundMeshComponent::MergePartialFromCodedStream(
        Caver::Proto::GroundMeshComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  __int128 v4; // q0
  __int128 v5; // q1
  __int128 v6; // q2
  google::protobuf::internal::RepeatedPtrFieldBase *v8; // x22
  unsigned int TagFallback; // w0
  unsigned __int64 v10; // x1
  int v11; // w8
  __int64 *v12; // x1
  _QWORD *v13; // x0
  _BYTE *v14; // x8
  unsigned __int64 v15; // x8
  unsigned __int8 *v16; // x10
  unsigned int v17; // w9
  char *v18; // x10
  __int64 *v19; // x1
  _QWORD *v20; // x0
  _BYTE *v21; // x8
  int v22; // w8
  int v23; // w25
  __int64 v24; // x8
  __int64 v25; // x24
  __int64 v26; // x8
  char *v27; // x8
  int v28; // w8
  int v29; // w9
  int v30; // w25
  int v31; // w8
  bool v32; // vf
  int v33; // w8
  Caver::Proto::Rectangle *v34; // x24
  char *v35; // x8
  int v36; // w8
  int v37; // w9
  int v38; // w25
  int v39; // w8
  int v40; // w8
  _BYTE *v41; // x8
  int v42; // w11
  int v43; // w8
  int v44; // w25
  __int64 v45; // x8
  __int64 v46; // x24
  __int64 v47; // x8
  char *v48; // x8
  int v49; // w8
  int v50; // w9
  int v51; // w25
  int v52; // w8
  int v53; // w8
  int v54; // w8
  int v55; // w25
  __int64 v56; // x8
  __int64 v57; // x24
  __int64 v58; // x8
  char *v59; // x8
  int v60; // w8
  int v61; // w9
  int v62; // w25
  int v63; // w8
  int v64; // w8
  Caver::Proto::FloatColor *v65; // x24
  char *v66; // x8
  int v67; // w8
  int v68; // w9
  int v69; // w25
  int v70; // w8
  int v71; // w8
  _BYTE *v72; // x9
  char *v73; // x8
  __int64 result; // x0
  google::protobuf::internal::RepeatedPtrFieldBase *v75; // [xsp+10h] [xbp-B0h]
  google::protobuf::internal::RepeatedPtrFieldBase *v76; // [xsp+18h] [xbp-A8h]
  __int128 v77; // [xsp+20h] [xbp-A0h]
  __int128 v78; // [xsp+30h] [xbp-90h]
  __int128 v79; // [xsp+40h] [xbp-80h]
  unsigned int v80; // [xsp+54h] [xbp-6Ch] BYREF
  __int64 v81; // [xsp+58h] [xbp-68h]

  v75 = (Caver::Proto::GroundMeshComponent *)((char *)this + 152);
  v76 = (Caver::Proto::GroundMeshComponent *)((char *)this + 32);
  *(_QWORD *)&v4 = &Caver::Proto::Mesh::_default_vertex_data_;
  *(_QWORD *)&v5 = &Caver::Proto::Mesh::_default_vertex_data_;
  *(_QWORD *)&v6 = &Caver::Proto::Mesh::_default_vertex_data_;
  v8 = (Caver::Proto::GroundMeshComponent *)((char *)this + 96);
  *((_QWORD *)&v6 + 1) = &Caver::Proto::Mesh::_default_index_data_;
  *((_QWORD *)&v4 + 1) = &Caver::Proto::Mesh::_default_index_data_;
  *((_QWORD *)&v5 + 1) = &Caver::Proto::Mesh::_default_index_data_;
  v78 = v6;
  v79 = v4;
  v81 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v77 = v5;
  while ( 1 )
  {
LABEL_126:
    v73 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v73 >= *((_QWORD *)a2 + 2) || *v73 < 0 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v10 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( !TagFallback )
        return 1;
    }
    else
    {
      v10 = (unsigned __int8)*v73;
      *((_DWORD *)a2 + 8) = v10;
      *((_QWORD *)a2 + 1) = v73 + 1;
      if ( !(_DWORD)v10 )
        return 1;
    }
    switch ( (unsigned int)v10 >> 3 )
    {
      case 4u:
        v11 = v10 & 7;
        if ( v11 != 2 )
          goto LABEL_33;
        v12 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 55) |= 1u;
        if ( v12 == &Caver::Proto::GroundMeshComponent::_default_vertex_data_ )
        {
          v13 = (_QWORD *)operator new(8u);
          *v13 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v13;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadBytes(a2) & 1) == 0 )
          return 0;
        v14 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v14 >= *((_QWORD *)a2 + 2) || *v14 != 42 )
          continue;
        *((_QWORD *)a2 + 1) = v14 + 1;
        goto LABEL_22;
      case 5u:
        v11 = v10 & 7;
        if ( v11 != 2 )
          goto LABEL_33;
LABEL_22:
        v19 = (__int64 *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 55) |= 2u;
        if ( v19 == &Caver::Proto::GroundMeshComponent::_default_indices_ )
        {
          v20 = (_QWORD *)operator new(8u);
          *v20 = &byte_6FD2F8;
          *((_QWORD *)this + 3) = v20;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadBytes(a2) & 1) == 0 )
          return 0;
        v21 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v21 >= *((_QWORD *)a2 + 2) || *v21 != 50 )
          continue;
        break;
      case 6u:
        v11 = v10 & 7;
        if ( v11 == 2 )
          goto LABEL_36;
        goto LABEL_33;
      case 7u:
        v11 = v10 & 7;
        if ( v11 == 2 )
          goto LABEL_55;
        goto LABEL_33;
      case 8u:
        v11 = v10 & 7;
        if ( v11 == 2 )
          goto LABEL_75;
        goto LABEL_33;
      case 9u:
        v11 = v10 & 7;
        if ( v11 == 2 )
          goto LABEL_93;
        goto LABEL_33;
      case 0xAu:
        v11 = v10 & 7;
        if ( v11 == 2 )
          goto LABEL_111;
        goto LABEL_33;
      case 0xBu:
        v11 = v10 & 7;
        if ( (v10 & 7) != 0 )
          goto LABEL_33;
        v16 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
        v15 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v16 < v15 )
          goto LABEL_19;
        goto LABEL_69;
      default:
        v11 = v10 & 7;
LABEL_33:
        if ( v11 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v10,
                a3)
            & 1) == 0 )
          return 0;
        continue;
    }
    do
    {
      *((_QWORD *)a2 + 1) = v21 + 1;
LABEL_36:
      v23 = *((_DWORD *)this + 10);
      v22 = *((_DWORD *)this + 11);
      if ( v23 >= v22 )
      {
        if ( v22 == *((_DWORD *)this + 12) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v76, v22 + 1);
          v23 = *((_DWORD *)this + 10);
          v22 = *((_DWORD *)this + 11);
        }
        *((_DWORD *)this + 11) = v22 + 1;
        v25 = operator new(0xA8u);
        *(_QWORD *)v25 = off_6C9D38;
        *(_QWORD *)(v25 + 56) = 0;
        *(_DWORD *)(v25 + 64) = 4;
        *(_QWORD *)(v25 + 8) = 0;
        *(_DWORD *)(v25 + 16) = 0;
        *(_QWORD *)(v25 + 24) = 0;
        *(_QWORD *)(v25 + 32) = 0;
        *(_QWORD *)(v25 + 128) = 0;
        *(_QWORD *)(v25 + 136) = 0;
        *(_QWORD *)(v25 + 112) = 0;
        *(_QWORD *)(v25 + 120) = 0;
        *(_QWORD *)(v25 + 104) = 0;
        *(_OWORD *)(v25 + 144) = v78;
        *(_QWORD *)(v25 + 40) = 0;
        *(_QWORD *)(v25 + 48) = v25 + 72;
        *(_DWORD *)(v25 + 160) = 0;
        v26 = *((_QWORD *)this + 4);
        *((_DWORD *)this + 10) = v23 + 1;
        *(_QWORD *)(v26 + 8LL * v23) = v25;
      }
      else
      {
        v24 = *((_QWORD *)this + 4);
        *((_DWORD *)this + 10) = v23 + 1;
        v25 = *(_QWORD *)(v24 + 8LL * v23);
      }
      v27 = (char *)*((_QWORD *)a2 + 1);
      if ( (unsigned __int64)v27 >= *((_QWORD *)a2 + 2) || *v27 < 0 )
      {
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v80) & 1) == 0 )
          return 0;
      }
      else
      {
        v80 = (unsigned __int8)*v27;
        *((_QWORD *)a2 + 1) = v27 + 1;
      }
      v28 = *((_DWORD *)a2 + 14);
      v29 = *((_DWORD *)a2 + 15);
      *((_DWORD *)a2 + 14) = v28 + 1;
      if ( v28 >= v29 )
        return 0;
      v30 = google::protobuf::io::CodedInputStream::PushLimit(a2, v80);
      if ( (Caver::Proto::Mesh::MergePartialFromCodedStream((Caver::Proto::Mesh *)v25, a2) & 1) == 0
        || !*((_BYTE *)a2 + 36) )
      {
        return 0;
      }
      google::protobuf::io::CodedInputStream::PopLimit(a2, v30);
      v31 = *((_DWORD *)a2 + 14);
      v32 = __OFSUB__(v31, 1);
      v33 = v31 - 1;
      if ( v33 < 0 == v32 )
        *((_DWORD *)a2 + 14) = v33;
      v21 = (_BYTE *)*((_QWORD *)a2 + 1);
      if ( (unsigned __int64)v21 >= *((_QWORD *)a2 + 2) )
        goto LABEL_126;
    }
    while ( *v21 == 50 );
    if ( *v21 == 58 )
    {
      *((_QWORD *)a2 + 1) = v21 + 1;
LABEL_55:
      v34 = (Caver::Proto::Rectangle *)*((_QWORD *)this + 11);
      *((_DWORD *)this + 55) |= 8u;
      if ( !v34 )
      {
        v34 = (Caver::Proto::Rectangle *)operator new(0x20u);
        Caver::Proto::Rectangle::Rectangle(v34);
        *((_QWORD *)this + 11) = v34;
      }
      v35 = (char *)*((_QWORD *)a2 + 1);
      if ( (unsigned __int64)v35 >= *((_QWORD *)a2 + 2) || *v35 < 0 )
      {
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v80) & 1) == 0 )
          return 0;
      }
      else
      {
        v80 = (unsigned __int8)*v35;
        *((_QWORD *)a2 + 1) = v35 + 1;
      }
      v36 = *((_DWORD *)a2 + 14);
      v37 = *((_DWORD *)a2 + 15);
      *((_DWORD *)a2 + 14) = v36 + 1;
      if ( v36 >= v37 )
        return 0;
      v38 = google::protobuf::io::CodedInputStream::PushLimit(a2, v80);
      if ( (Caver::Proto::Rectangle::MergePartialFromCodedStream(v34, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
        return 0;
      google::protobuf::io::CodedInputStream::PopLimit(a2, v38);
      v39 = *((_DWORD *)a2 + 14);
      v32 = __OFSUB__(v39, 1);
      v40 = v39 - 1;
      if ( v40 < 0 == v32 )
        *((_DWORD *)a2 + 14) = v40;
      v41 = (_BYTE *)*((_QWORD *)a2 + 1);
      if ( (unsigned __int64)v41 < *((_QWORD *)a2 + 2) && *v41 == 66 )
      {
        do
        {
          *((_QWORD *)a2 + 1) = v41 + 1;
LABEL_75:
          v44 = *((_DWORD *)this + 26);
          v43 = *((_DWORD *)this + 27);
          if ( v44 >= v43 )
          {
            if ( v43 == *((_DWORD *)this + 28) )
            {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v8, v43 + 1);
              v44 = *((_DWORD *)this + 26);
              v43 = *((_DWORD *)this + 27);
            }
            *((_DWORD *)this + 27) = v43 + 1;
            v46 = operator new(0xA8u);
            *(_QWORD *)(v46 + 56) = 0;
            *(_DWORD *)(v46 + 64) = 4;
            *(_QWORD *)(v46 + 8) = 0;
            *(_DWORD *)(v46 + 16) = 0;
            *(_QWORD *)(v46 + 24) = 0;
            *(_QWORD *)(v46 + 32) = 0;
            *(_QWORD *)(v46 + 128) = 0;
            *(_QWORD *)(v46 + 136) = 0;
            *(_QWORD *)(v46 + 112) = 0;
            *(_QWORD *)(v46 + 120) = 0;
            *(_QWORD *)(v46 + 104) = 0;
            *(_OWORD *)(v46 + 144) = v79;
            *(_QWORD *)v46 = off_6C9D38;
            *(_QWORD *)(v46 + 40) = 0;
            *(_QWORD *)(v46 + 48) = v46 + 72;
            *(_DWORD *)(v46 + 160) = 0;
            v47 = *((_QWORD *)this + 12);
            *((_DWORD *)this + 26) = v44 + 1;
            *(_QWORD *)(v47 + 8LL * v44) = v46;
          }
          else
          {
            v45 = *((_QWORD *)this + 12);
            *((_DWORD *)this + 26) = v44 + 1;
            v46 = *(_QWORD *)(v45 + 8LL * v44);
          }
          v48 = (char *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v48 >= *((_QWORD *)a2 + 2) || *v48 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v80) & 1) == 0 )
              return 0;
          }
          else
          {
            v80 = (unsigned __int8)*v48;
            *((_QWORD *)a2 + 1) = v48 + 1;
          }
          v49 = *((_DWORD *)a2 + 14);
          v50 = *((_DWORD *)a2 + 15);
          *((_DWORD *)a2 + 14) = v49 + 1;
          if ( v49 >= v50 )
            return 0;
          v51 = google::protobuf::io::CodedInputStream::PushLimit(a2, v80);
          if ( (Caver::Proto::Mesh::MergePartialFromCodedStream((Caver::Proto::Mesh *)v46, a2) & 1) == 0
            || !*((_BYTE *)a2 + 36) )
          {
            return 0;
          }
          google::protobuf::io::CodedInputStream::PopLimit(a2, v51);
          v52 = *((_DWORD *)a2 + 14);
          v32 = __OFSUB__(v52, 1);
          v53 = v52 - 1;
          if ( v53 < 0 == v32 )
            *((_DWORD *)a2 + 14) = v53;
          v41 = (_BYTE *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v41 >= *((_QWORD *)a2 + 2) )
            goto LABEL_126;
        }
        while ( *v41 == 66 );
        if ( *v41 == 74 )
          break;
      }
    }
  }
  do
  {
    *((_QWORD *)a2 + 1) = v41 + 1;
LABEL_93:
    v55 = *((_DWORD *)this + 40);
    v54 = *((_DWORD *)this + 41);
    if ( v55 >= v54 )
    {
      if ( v54 == *((_DWORD *)this + 42) )
      {
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v75, v54 + 1);
        v55 = *((_DWORD *)this + 40);
        v54 = *((_DWORD *)this + 41);
      }
      *((_DWORD *)this + 41) = v54 + 1;
      v57 = operator new(0xA8u);
      *(_QWORD *)(v57 + 56) = 0;
      *(_DWORD *)(v57 + 64) = 4;
      *(_QWORD *)(v57 + 8) = 0;
      *(_DWORD *)(v57 + 16) = 0;
      *(_QWORD *)(v57 + 24) = 0;
      *(_QWORD *)(v57 + 32) = 0;
      *(_QWORD *)(v57 + 128) = 0;
      *(_QWORD *)(v57 + 136) = 0;
      *(_QWORD *)(v57 + 112) = 0;
      *(_QWORD *)(v57 + 120) = 0;
      *(_QWORD *)(v57 + 104) = 0;
      *(_OWORD *)(v57 + 144) = v77;
      *(_QWORD *)v57 = off_6C9D38;
      *(_QWORD *)(v57 + 40) = 0;
      *(_QWORD *)(v57 + 48) = v57 + 72;
      *(_DWORD *)(v57 + 160) = 0;
      v58 = *((_QWORD *)this + 19);
      *((_DWORD *)this + 40) = v55 + 1;
      *(_QWORD *)(v58 + 8LL * v55) = v57;
    }
    else
    {
      v56 = *((_QWORD *)this + 19);
      *((_DWORD *)this + 40) = v55 + 1;
      v57 = *(_QWORD *)(v56 + 8LL * v55);
    }
    v59 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v59 >= *((_QWORD *)a2 + 2) || *v59 < 0 )
    {
      if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v80) & 1) == 0 )
        return 0;
    }
    else
    {
      v80 = (unsigned __int8)*v59;
      *((_QWORD *)a2 + 1) = v59 + 1;
    }
    v60 = *((_DWORD *)a2 + 14);
    v61 = *((_DWORD *)a2 + 15);
    *((_DWORD *)a2 + 14) = v60 + 1;
    if ( v60 >= v61 )
      return 0;
    v62 = google::protobuf::io::CodedInputStream::PushLimit(a2, v80);
    if ( (Caver::Proto::Mesh::MergePartialFromCodedStream((Caver::Proto::Mesh *)v57, a2) & 1) == 0
      || !*((_BYTE *)a2 + 36) )
    {
      return 0;
    }
    google::protobuf::io::CodedInputStream::PopLimit(a2, v62);
    v63 = *((_DWORD *)a2 + 14);
    v32 = __OFSUB__(v63, 1);
    v64 = v63 - 1;
    if ( v64 < 0 == v32 )
      *((_DWORD *)a2 + 14) = v64;
    v41 = (_BYTE *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v41 >= *((_QWORD *)a2 + 2) )
      goto LABEL_126;
  }
  while ( *v41 == 74 );
  if ( *v41 != 82 )
    goto LABEL_126;
  *((_QWORD *)a2 + 1) = v41 + 1;
LABEL_111:
  v65 = (Caver::Proto::FloatColor *)*((_QWORD *)this + 26);
  *((_DWORD *)this + 55) |= 0x40u;
  if ( !v65 )
  {
    v65 = (Caver::Proto::FloatColor *)operator new(0x20u);
    Caver::Proto::FloatColor::FloatColor(v65);
    *((_QWORD *)this + 26) = v65;
  }
  v66 = (char *)*((_QWORD *)a2 + 1);
  if ( (unsigned __int64)v66 >= *((_QWORD *)a2 + 2) || *v66 < 0 )
  {
    if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v80) & 1) == 0 )
      return 0;
  }
  else
  {
    v80 = (unsigned __int8)*v66;
    *((_QWORD *)a2 + 1) = v66 + 1;
  }
  v67 = *((_DWORD *)a2 + 14);
  v68 = *((_DWORD *)a2 + 15);
  *((_DWORD *)a2 + 14) = v67 + 1;
  if ( v67 < v68 )
  {
    v69 = google::protobuf::io::CodedInputStream::PushLimit(a2, v80);
    if ( (Caver::Proto::FloatColor::MergePartialFromCodedStream(v65, a2) & 1) != 0 )
    {
      if ( *((_BYTE *)a2 + 36) )
      {
        google::protobuf::io::CodedInputStream::PopLimit(a2, v69);
        v70 = *((_DWORD *)a2 + 14);
        v32 = __OFSUB__(v70, 1);
        v71 = v70 - 1;
        if ( v71 < 0 == v32 )
          *((_DWORD *)a2 + 14) = v71;
        v72 = (_BYTE *)*((_QWORD *)a2 + 1);
        v15 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v72 >= v15 || *v72 != 88 )
          goto LABEL_126;
        v16 = v72 + 1;
        *((_QWORD *)a2 + 1) = v72 + 1;
        if ( (unsigned __int64)(v72 + 1) < v15 )
        {
LABEL_19:
          if ( (char)*v16 < 0 )
            goto LABEL_69;
          v17 = *v16;
          v18 = (char *)(v16 + 1);
          v80 = v17;
          *((_QWORD *)a2 + 1) = v18;
        }
        else
        {
LABEL_69:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v80) & 1) == 0 )
            return 0;
          v17 = v80;
          v18 = (char *)*((_QWORD *)a2 + 1);
          v15 = *((_QWORD *)a2 + 2);
        }
        v42 = *((_DWORD *)this + 55);
        *((_BYTE *)this + 216) = v17 != 0;
        *((_DWORD *)this + 55) = v42 | 0x80;
        if ( v18 == (char *)v15 && *((_DWORD *)a2 + 11) )
        {
          result = 1;
          *((_DWORD *)a2 + 8) = 0;
          *((_BYTE *)a2 + 36) = 1;
          return result;
        }
        goto LABEL_126;
      }
    }
  }
  return 0;
}


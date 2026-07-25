/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F37F8
 * Mangled: _ZN5Caver5Proto14CharacterState27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::CharacterState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F60C0  Caver::Proto::CharacterState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 11
 *   0x00000000001F4A00  google::protobuf::internal::StringTypeHandlerBase::New(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001F98C0  Caver::Proto::CharacterState_ItemState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *
 * Referenced strings: 356
 *   insn=0x00000000002F3820 string=0x00000000002F3824 "Y"
 *   insn=0x00000000002F3838 string=0x00000000002F383C ""
 *   insn=0x00000000002F3844 string=0x00000000002F3848 "*"
 *   insn=0x00000000002F3848 string=0x00000000002F384C "("
 *   insn=0x00000000002F3854 string=0x00000000002F3858 "z""
 *   insn=0x00000000002F3854 string=0x000000000058B0A8 ","
 *   insn=0x00000000002F3858 string=0x00000000002F385C "{B"
 *   insn=0x00000000002F3870 string=0x00000000002F3874 "H"
 *   insn=0x00000000002F3874 string=0x00000000002F3878 "i"
 *   insn=0x00000000002F387C string=0x00000000002F3880 """
 *   insn=0x00000000002F3880 string=0x00000000002F3884 "\t"
 *   insn=0x00000000002F3888 string=0x00000000002F388C "!"
 *   insn=0x00000000002F388C string=0x00000000002F3890 ""
 *   insn=0x00000000002F3890 string=0x00000000002F3894 "a""
 *   insn=0x00000000002F3894 string=0x00000000002F3898 "h"
 *   insn=0x00000000002F389C string=0x00000000002F38A0 "m"
 *   insn=0x00000000002F389C string=0x00000000002F38B8 "(|"
 *   insn=0x00000000002F38A4 string=0x00000000002F38A8 "f"
 *   insn=0x00000000002F38A8 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002F38AC string=0x00000000002F38B0 "a""
 *   insn=0x00000000002F38B8 string=0x00000000002F38BC "\t"
 *   insn=0x00000000002F38C4 string=0x00000000002F3AF4 "("
 *   insn=0x00000000002F38C8 string=0x00000000002F38CC ""
 *   insn=0x00000000002F38D0 string=0x00000000002F38D4 "("
 *   insn=0x00000000002F38D0 string=0x00000000002F3908 "("
 *   insn=0x00000000002F38D0 string=0x00000000002F393C "("
 *   insn=0x00000000002F38D0 string=0x00000000002F394C "("
 *   insn=0x00000000002F38D0 string=0x00000000002F395C "("
 *   insn=0x00000000002F38D0 string=0x00000000002F3990 "("
 *   insn=0x00000000002F38D0 string=0x00000000002F39A0 "("
 *   insn=0x00000000002F38D0 string=0x00000000002F39B0 "("
 *   insn=0x00000000002F38D0 string=0x00000000002F39E4 "("
 *   insn=0x00000000002F38D0 string=0x00000000002F39F4 "("
 *   insn=0x00000000002F38D0 string=0x00000000002F3A04 "("
 *   insn=0x00000000002F38D0 string=0x00000000002F3A38 "("
 *   insn=0x00000000002F38D0 string=0x00000000002F3A6C "("
 *   insn=0x00000000002F38D0 string=0x00000000002F3AA0 "("
 *   insn=0x00000000002F38D0 string=0x00000000002F3AD4 "("
 *   insn=0x00000000002F38D0 string=0x00000000002F3AE4 "("
 *   insn=0x00000000002F38D8 string=0x00000000002F38DC "I"
 *   insn=0x00000000002F38DC string=0x00000000002F38E0 "h"
 *   insn=0x00000000002F38E0 string=0x00000000002F38E4 "?"
 *   insn=0x00000000002F38E4 string=0x00000000002F38E8 "B"
 *   insn=0x00000000002F38E8 string=0x00000000002F38EC "*"
 *   insn=0x00000000002F38EC string=0x00000000002F38F0 "\n"
 *   insn=0x00000000002F38F0 string=0x00000000002F38F4 "J"
 *   insn=0x00000000002F38F4 string=0x00000000002F38F8 ")"
 *   insn=0x00000000002F38FC string=0x00000000002F3900 "I"
 *   insn=0x00000000002F3908 string=0x00000000002F390C "a"
 *   insn=0x00000000002F390C string=0x00000000002F3910 "I"
 *   insn=0x00000000002F3910 string=0x00000000002F3914 "h"
 *   insn=0x00000000002F3914 string=0x00000000002F3918 "?"
 *   insn=0x00000000002F3918 string=0x00000000002F391C "bA"
 *   insn=0x00000000002F391C string=0x00000000002F3920 "*"
 *   insn=0x00000000002F3920 string=0x00000000002F3924 "*A"
 *   insn=0x00000000002F3924 string=0x00000000002F3928 "J"
 *   insn=0x00000000002F3928 string=0x00000000002F392C ")"
 *   insn=0x00000000002F3930 string=0x00000000002F3934 "I"
 *   insn=0x00000000002F3934 string=0x00000000002F3938 ""
 *   insn=0x00000000002F3950 string=0x00000000002F3954 "!"
 *   insn=0x00000000002F3960 string=0x00000000002F3964 "I"
 *   insn=0x00000000002F3964 string=0x00000000002F3968 "h"
 *   insn=0x00000000002F3968 string=0x00000000002F396C "?"
 *   insn=0x00000000002F3970 string=0x00000000002F3974 "*"
 *   insn=0x00000000002F3978 string=0x00000000002F397C "J"
 *   insn=0x00000000002F397C string=0x00000000002F3980 ")"
 *   insn=0x00000000002F3984 string=0x00000000002F3988 "I"
 *   insn=0x00000000002F39B0 string=0x00000000002F39B4 "!\n"
 *   insn=0x00000000002F39B4 string=0x00000000002F39B8 "I"
 *   insn=0x00000000002F39B8 string=0x00000000002F39BC "h"
 *   insn=0x00000000002F39BC string=0x00000000002F39C0 "?"
 *   insn=0x00000000002F39C4 string=0x00000000002F39C8 "*"
 *   insn=0x00000000002F39CC string=0x00000000002F39D0 "J"
 *   insn=0x00000000002F39D0 string=0x00000000002F39D4 ")"
 *   insn=0x00000000002F39D8 string=0x00000000002F39DC "I"
 *   insn=0x00000000002F39DC string=0x00000000002F39E0 "g"
 *   insn=0x00000000002F39E8 string=0x00000000002F39EC "a"
 *   insn=0x00000000002F3A08 string=0x00000000002F3A0C "I"
 *   insn=0x00000000002F3A0C string=0x00000000002F3A10 "h"
 *   insn=0x00000000002F3A10 string=0x00000000002F3A14 "?"
 *   insn=0x00000000002F3A18 string=0x00000000002F3A1C "*"
 *   insn=0x00000000002F3A1C string=0x00000000002F3A20 "J<"
 *   insn=0x00000000002F3A20 string=0x00000000002F3A24 "J"
 *   insn=0x00000000002F3A24 string=0x00000000002F3A28 ")"
 *   insn=0x00000000002F3A2C string=0x00000000002F3A30 "I"
 *   insn=0x00000000002F3A3C string=0x00000000002F3A40 "I"
 *   insn=0x00000000002F3A40 string=0x00000000002F3A44 "h"
 *   insn=0x00000000002F3A44 string=0x00000000002F3A48 "?"
 *   insn=0x00000000002F3A4C string=0x00000000002F3A50 "*"
 *   insn=0x00000000002F3A54 string=0x00000000002F3A58 "J"
 *   insn=0x00000000002F3A58 string=0x00000000002F3A5C ")"
 *   insn=0x00000000002F3A60 string=0x00000000002F3A64 "I"
 *   insn=0x00000000002F3A6C string=0x00000000002F3A70 "A"
 *   insn=0x00000000002F3A70 string=0x00000000002F3A74 "I"
 *   insn=0x00000000002F3A74 string=0x00000000002F3A78 "h"
 *   insn=0x00000000002F3A78 string=0x00000000002F3A7C "?"
 *   insn=0x00000000002F3A80 string=0x00000000002F3A84 "*"
 *   insn=0x00000000002F3A88 string=0x00000000002F3A8C "J"
 *   insn=0x00000000002F3A8C string=0x00000000002F3A90 ")"
 *   insn=0x00000000002F3A94 string=0x00000000002F3A98 "I"
 *   insn=0x00000000002F3A98 string=0x00000000002F3A9C "`"
 *   insn=0x00000000002F3AA4 string=0x00000000002F3AA8 "I"
 *   insn=0x00000000002F3AA8 string=0x00000000002F3AAC "h"
 *   insn=0x00000000002F3AAC string=0x00000000002F3AB0 "?"
 *   insn=0x00000000002F3AB4 string=0x00000000002F3AB8 "*"
 *   insn=0x00000000002F3ABC string=0x00000000002F3AC0 "J"
 *   insn=0x00000000002F3AC0 string=0x00000000002F3AC4 ")"
 *   insn=0x00000000002F3AC8 string=0x00000000002F3ACC "I"
 *   insn=0x00000000002F3ACC string=0x00000000002F3AD0 "g"
 *   insn=0x00000000002F3ADC string=0x00000000002F3AE0 " "
 *   insn=0x00000000002F3AE8 string=0x00000000002F3AEC "a"
 *   insn=0x00000000002F3B00 string=0x00000000002F3B04 "s'"
 *   insn=0x00000000002F3B04 string=0x00000000002F3B08 "`"
 *   insn=0x00000000002F3B04 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002F3B14 string=0x00000000002F3B18 "N"
 *   insn=0x00000000002F3B18 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002F3B20 string=0x00000000002F3B24 "I"
 *   insn=0x00000000002F3B24 string=0x00000000002F3B28 "h"
 *   insn=0x00000000002F3B30 string=0x00000000002F3B34 "?"
 *   insn=0x00000000002F3B34 string=0x00000000002F3B38 "j"
 *   insn=0x00000000002F3B40 string=0x00000000002F3B44 "*"
 *   insn=0x00000000002F3B44 string=0x00000000002F3B48 "_"
 *   insn=0x00000000002F3B48 string=0x00000000002F3B4C "A"
 *   insn=0x00000000002F3B4C string=0x00000000002F3B50 ")"
 *   insn=0x00000000002F3B50 string=0x00000000002F3B54 "I"
 *   insn=0x00000000002F3B54 string=0x00000000002F3B58 "?"
 *   insn=0x00000000002F3B58 string=0x00000000002F3B5C "c"
 *   insn=0x00000000002F3B64 string=0x00000000002F3B68 ":"
 *   insn=0x00000000002F3B70 string=0x00000000002F3B74 "I"
 *   insn=0x00000000002F3B74 string=0x00000000002F3B78 "h"
 *   insn=0x00000000002F3B80 string=0x00000000002F3B84 "?"
 *   insn=0x00000000002F3B84 string=0x00000000002F3B88 "j"
 *   insn=0x00000000002F3B8C string=0x00000000002F3B90 """
 *   insn=0x00000000002F3B90 string=0x00000000002F3B94 "*"
 *   insn=0x00000000002F3B94 string=0x00000000002F3B98 "_"
 *   insn=0x00000000002F3B9C string=0x00000000002F3BA0 ")"
 *   insn=0x00000000002F3BA0 string=0x00000000002F3BA4 "I"
 *   insn=0x00000000002F3BA4 string=0x00000000002F3BA8 "?"
 *   insn=0x00000000002F3BA8 string=0x00000000002F3BAC "C"
 *   insn=0x00000000002F3BB4 string=0x00000000002F3BB8 "&"
 *   insn=0x00000000002F3BC0 string=0x00000000002F3BC4 "I"
 *   insn=0x00000000002F3BC4 string=0x00000000002F3BC8 "h"
 *   insn=0x00000000002F3BD0 string=0x00000000002F3BD4 "?"
 *   insn=0x00000000002F3BD4 string=0x00000000002F3BD8 "j"
 *   insn=0x00000000002F3BE0 string=0x00000000002F3BE4 "*"
 *   insn=0x00000000002F3BE4 string=0x00000000002F3BE8 "_"
 *   insn=0x00000000002F3BE8 string=0x00000000002F3BEC "A"
 *   insn=0x00000000002F3BEC string=0x00000000002F3BF0 ")"
 *   insn=0x00000000002F3BF0 string=0x00000000002F3BF4 "I"
 *   insn=0x00000000002F3BF4 string=0x00000000002F3BF8 "?"
 *   insn=0x00000000002F3BF8 string=0x00000000002F3BFC "C"
 *   insn=0x00000000002F3C10 string=0x00000000002F3C14 "I"
 *   insn=0x00000000002F3C14 string=0x00000000002F3C18 "h"
 *   insn=0x00000000002F3C20 string=0x00000000002F3C24 "?"
 *   insn=0x00000000002F3C24 string=0x00000000002F3C28 "j"
 *   insn=0x00000000002F3C2C string=0x00000000002F3C30 """
 *   insn=0x00000000002F3C30 string=0x00000000002F3C34 "*"
 *   insn=0x00000000002F3C34 string=0x00000000002F3C38 "_"
 *   insn=0x00000000002F3C3C string=0x00000000002F3C40 ")"
 *   insn=0x00000000002F3C40 string=0x00000000002F3C44 "I"
 *   insn=0x00000000002F3C44 string=0x00000000002F3C48 "?"
 *   insn=0x00000000002F3C48 string=0x00000000002F3C4C "c"
 *   insn=0x00000000002F3C60 string=0x00000000002F3C64 "I"
 *   insn=0x00000000002F3C64 string=0x00000000002F3C68 "h"
 *   insn=0x00000000002F3C70 string=0x00000000002F3C74 "?"
 *   insn=0x00000000002F3C74 string=0x00000000002F3C78 "j"
 *   insn=0x00000000002F3C80 string=0x00000000002F3C84 "("
 *   insn=0x00000000002F3C88 string=0x00000000002F3C8C "A"
 *   insn=0x00000000002F3C8C string=0x00000000002F3C90 "("
 *   insn=0x00000000002F3C90 string=0x00000000002F3C94 "H"
 *   insn=0x00000000002F3CA4 string=0x00000000002F3CA8 "\n"
 *   insn=0x00000000002F3CA8 string=0x00000000002F3CAC "\t"
 *   insn=0x00000000002F3CB8 string=0x00000000002F3D14 "H"
 *   insn=0x00000000002F3CC4 string=0x00000000002F3CD8 ""
 *   insn=0x00000000002F3CD0 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002F3CE0 string=0x00000000002F3CE4 "?"
 *   insn=0x00000000002F3CE4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002F3CF4 string=0x00000000002F3CF8 ")G"
 *   insn=0x00000000002F3CFC string=0x00000000002F3D00 "\t"
 *   insn=0x00000000002F3D14 string=0x00000000002F3D18 "i"
 *   insn=0x00000000002F3D20 string=0x00000000002F3D24 "\t"
 *   insn=0x00000000002F3D28 string=0x00000000002F3D2C ")"
 *   insn=0x00000000002F3D2C string=0x00000000002F3D30 ""
 *   insn=0x00000000002F3D34 string=0x00000000002F3D38 "H"
 *   insn=0x00000000002F3D3C string=0x00000000002F3D50 "h&G)\n"
 *   insn=0x00000000002F3D50 string=0x00000000002F3D54 "\n"
 *   insn=0x00000000002F3D58 string=0x00000000002F3D5C "j:"
 *   insn=0x00000000002F3D7C string=0x00000000001F98C0 "0'"
 *   insn=0x00000000002F3D80 string=0x00000000002F3D84 "h"
 *   insn=0x00000000002F3D94 string=0x00000000002F3D98 "h:@"
 *   insn=0x00000000002F3D98 string=0x00000000002F3D9C ""
 *   insn=0x00000000002F3D9C string=0x00000000002F3DA0 "K"
 *   insn=0x00000000002F3DA0 string=0x00000000002F3DA4 "h:"
 *   insn=0x00000000002F3DA0 string=0x00000000002F3DA8 "I"
 *   insn=0x00000000002F3DA8 string=0x00000000002F3DAC "h"
 *   insn=0x00000000002F3DAC string=0x00000000002F3DB0 "?"
 *   insn=0x00000000002F3DB4 string=0x00000000002F3DB8 "("
 *   insn=0x00000000002F3DC0 string=0x00000000002F3DC4 "("
 *   insn=0x00000000002F3DC8 string=0x00000000002F3DCC "A"
 *   insn=0x00000000002F3DCC string=0x00000000002F3DD0 "("
 *   insn=0x00000000002F3DD0 string=0x00000000002F3DD4 "H"
 *   insn=0x00000000002F3DE0 string=0x00000000002F3DE4 ")yC"
 *   insn=0x00000000002F3DE4 string=0x00000000002F3DE8 ""
 *   insn=0x00000000002F3DEC string=0x00000000002F3DF0 "?"
 *   insn=0x00000000002F3E04 string=0x00000000002F3E08 "("
 *   insn=0x00000000002F3E10 string=0x00000000002F3E14 "o"
 *   insn=0x00000000002F3E14 string=0x00000000002F3E18 " ""
 *   insn=0x00000000002F3E14 string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002F3E18 string=0x00000000002F3E1C "H"
 *   insn=0x00000000002F3E1C string=0x00000000002F3E20 "i"
 *   insn=0x00000000002F3E24 string=0x00000000002F3E28 "b"
 *   insn=0x00000000002F3E28 string=0x00000000002F3E2C "\t"
 *   insn=0x00000000002F3E2C string=0x00000000002F3E30 "?"
 *   insn=0x00000000002F3E34 string=0x00000000002F3E38 ""
 *   insn=0x00000000002F3E38 string=0x00000000002F3E3C "H"
 *   insn=0x00000000002F3E48 string=0x00000000002F3E4C ")"
 *   insn=0x00000000002F3E4C string=0x00000000002F3E50 ""
 *   insn=0x00000000002F3E54 string=0x00000000002F3E58 "?"
 *   insn=0x00000000002F3E6C string=0x00000000002F3E70 "("
 *   insn=0x00000000002F3E78 string=0x00000000002F3E7C "U"
 *   insn=0x00000000002F3E80 string=0x00000000002F3E84 "H"
 *   insn=0x00000000002F3E84 string=0x00000000002F3E88 "i"
 *   insn=0x00000000002F3E8C string=0x00000000002F3E90 """
 *   insn=0x00000000002F3E90 string=0x00000000002F3E94 "\t"
 *   insn=0x00000000002F3E94 string=0x00000000002F3E98 "?"
 *   insn=0x00000000002F3E9C string=0x00000000002F3EA0 ""
 *   insn=0x00000000002F3EA0 string=0x00000000002F3EA4 "H"
 *   insn=0x00000000002F3EA8 string=0x00000000002F3EAC ")}@"
 *   insn=0x00000000002F3EAC string=0x00000000002F3EB0 "?"
 *   insn=0x00000000002F3EB8 string=0x00000000002F3EBC "*"
 *   insn=0x00000000002F3ED4 string=0x00000000002F3EE8 ""
 *   insn=0x00000000002F3EF0 string=0x00000000001F4A00 "P'"
 *   insn=0x00000000002F3EFC string=0x00000000002F3F00 "\n"
 *   insn=0x00000000002F3F04 string=0x00000000002F3F08 "!y("
 *   insn=0x00000000002F3F0C string=0x00000000002F3F10 "0"
 *   insn=0x00000000002F3F10 string=0x00000000002F3F14 "@"
 *   insn=0x00000000002F3F14 string=0x00000000002F3F18 "H"
 *   insn=0x00000000002F3F18 string=0x00000000002F3F1C "i"
 *   insn=0x00000000002F3F24 string=0x00000000002F3F28 "\n"
 *   insn=0x00000000002F3F24 string=0x00000000002F3F34 ")"
 *   insn=0x00000000002F3F28 string=0x00000000002F3F2C "_"
 *   insn=0x00000000002F3F34 string=0x00000000002F3F38 "?\t"
 *   insn=0x00000000002F3F3C string=0x00000000002F3F40 "\t"
 *   insn=0x00000000002F3F40 string=0x00000000002F3F44 "?\t"
 *   insn=0x00000000002F3F44 string=0x00000000002F3F48 "a"
 *   insn=0x00000000002F3F48 string=0x00000000002F3F4C "\t"
 *   insn=0x00000000002F3F4C string=0x00000000002F3F50 "?"
 *   insn=0x00000000002F3F54 string=0x00000000002F3F58 "\t"
 *   insn=0x00000000002F3F58 string=0x00000000002F3F5C "H"
 *   insn=0x00000000002F3F68 string=0x00000000002F3F6C ")u@"
 *   insn=0x00000000002F3F6C string=0x00000000002F3F70 ""
 *   insn=0x00000000002F3F74 string=0x00000000002F3F78 "?"
 *   insn=0x00000000002F3F8C string=0x00000000002F3F90 "("
 *   insn=0x00000000002F3F98 string=0x00000000002F3F9C ""
 *   insn=0x00000000002F3FA0 string=0x00000000002F3FA4 "i"
 *   insn=0x00000000002F3FA4 string=0x00000000002F3FA8 "H"
 *   insn=0x00000000002F3FA8 string=0x00000000002F3FAC ")"
 *   insn=0x00000000002F3FAC string=0x00000000002F3FB0 "?\t"
 *   insn=0x00000000002F3FB0 string=0x00000000002F3FB4 ""
 *   insn=0x00000000002F3FB4 string=0x00000000002F3FB8 "\t"
 *   insn=0x00000000002F3FB8 string=0x00000000002F3FBC "?)"
 *   insn=0x00000000002F3FC0 string=0x00000000002F3FC4 "\t"
 *   insn=0x00000000002F3FC4 string=0x00000000002F3FC8 "?"
 *   insn=0x00000000002F3FC8 string=0x00000000002F3FCC "A"
 *   insn=0x00000000002F3FCC string=0x00000000002F3FD0 "\t"
 *   insn=0x00000000002F3FD0 string=0x00000000002F3FD4 "H"
 *   insn=0x00000000002F3FE0 string=0x00000000002F3FE4 ")"
 *   insn=0x00000000002F3FE4 string=0x00000000002F3FE8 ""
 *   insn=0x00000000002F3FEC string=0x00000000002F3FF0 "?"
 *   insn=0x00000000002F3FF8 string=0x00000000002F3FFC "y"
 *   insn=0x00000000002F4004 string=0x00000000002F4008 "("
 *   insn=0x00000000002F4014 string=0x00000000002F4018 " "
 *   insn=0x00000000002F4018 string=0x00000000002F401C "i"
 *   insn=0x00000000002F401C string=0x00000000002F4020 "H"
 *   insn=0x00000000002F4020 string=0x00000000002F4024 ")"
 *   insn=0x00000000002F4024 string=0x00000000002F4028 "?\t"
 *   insn=0x00000000002F4028 string=0x00000000002F402C "K"
 *   insn=0x00000000002F402C string=0x00000000002F4030 "\t"
 *   insn=0x00000000002F4030 string=0x00000000002F4034 "?I"
 *   insn=0x00000000002F4038 string=0x00000000002F403C "\t"
 *   insn=0x00000000002F403C string=0x00000000002F4040 "?"
 *   insn=0x00000000002F4044 string=0x00000000002F4048 "\t"
 *   insn=0x00000000002F4048 string=0x00000000002F404C "H"
 *   insn=0x00000000002F4058 string=0x00000000002F405C ")"
 *   insn=0x00000000002F405C string=0x00000000002F4060 ""
 *   insn=0x00000000002F4064 string=0x00000000002F4068 "?"
 *   insn=0x00000000002F4070 string=0x00000000002F4074 "["
 *   insn=0x00000000002F407C string=0x00000000002F4080 "("
 *   insn=0x00000000002F408C string=0x00000000002F4090 "`"
 *   insn=0x00000000002F4090 string=0x00000000002F4094 "i"
 *   insn=0x00000000002F4094 string=0x00000000002F4098 "H"
 *   insn=0x00000000002F4098 string=0x00000000002F409C ")"
 *   insn=0x00000000002F409C string=0x00000000002F40A0 "?\t"
 *   insn=0x00000000002F40A4 string=0x00000000002F40A8 "\t"
 *   insn=0x00000000002F40A8 string=0x00000000002F40AC "?i"
 *   insn=0x00000000002F40AC string=0x00000000002F40B0 "!"
 *   insn=0x00000000002F40B0 string=0x00000000002F40B4 "\t"
 *   insn=0x00000000002F40B4 string=0x00000000002F40B8 "?"
 *   insn=0x00000000002F40BC string=0x00000000002F40C0 "\t"
 *   insn=0x00000000002F40C0 string=0x00000000002F40C4 "H"
 *   insn=0x00000000002F40D0 string=0x00000000002F40D4 ")"
 *   insn=0x00000000002F40D4 string=0x00000000002F40D8 ""
 *   insn=0x00000000002F40DC string=0x00000000002F40E0 "?"
 *   insn=0x00000000002F40E8 string=0x00000000002F40EC "="
 *   insn=0x00000000002F40F4 string=0x00000000002F40F8 "("
 *   insn=0x00000000002F4108 string=0x00000000002F410C "h"
 *   insn=0x00000000002F410C string=0x00000000002F4110 "I"
 *   insn=0x00000000002F4110 string=0x00000000002F4114 "\n"
 *   insn=0x00000000002F4114 string=0x00000000002F4118 "_\t"
 *   insn=0x00000000002F411C string=0x00000000002F4120 "*"
 *   insn=0x00000000002F4120 string=0x00000000002F4124 "_"
 *   insn=0x00000000002F4124 string=0x00000000002F4128 "a"
 *   insn=0x00000000002F4128 string=0x00000000002F412C "*"
 *   insn=0x00000000002F412C string=0x00000000002F4130 "_"
 *   insn=0x00000000002F4134 string=0x00000000002F4138 ")\t"
 *   insn=0x00000000002F4138 string=0x00000000002F413C "I"
 *   insn=0x00000000002F413C string=0x00000000002F4140 "?"
 *   insn=0x00000000002F4150 string=0x00000000002F4154 "@"
 *   insn=0x00000000002F4158 string=0x00000000002F415C "h"
 *   insn=0x00000000002F415C string=0x00000000002F4160 "I"
 *   insn=0x00000000002F4168 string=0x00000000002F416C "\n"
 *   insn=0x00000000002F416C string=0x00000000002F4170 "_\t"
 *   insn=0x00000000002F4170 string=0x00000000002F4174 "k"
 *   insn=0x00000000002F417C string=0x00000000002F4180 "*"
 *   insn=0x00000000002F4180 string=0x00000000002F4184 "_"
 *   insn=0x00000000002F4184 string=0x00000000002F4188 "a"
 *   insn=0x00000000002F4188 string=0x00000000002F418C "*"
 *   insn=0x00000000002F418C string=0x00000000002F4190 "_"
 *   insn=0x00000000002F4194 string=0x00000000002F4198 ")\t"
 *   insn=0x00000000002F4198 string=0x00000000002F419C "I"
 *   insn=0x00000000002F419C string=0x00000000002F41A0 "?"
 *   insn=0x00000000002F41B0 string=0x00000000002F41B4 "@"
 *   insn=0x00000000002F41B8 string=0x00000000002F41BC "h"
 *   insn=0x00000000002F41BC string=0x00000000002F41C0 "I"
 *   insn=0x00000000002F41C8 string=0x00000000002F41CC "\n"
 *   insn=0x00000000002F41CC string=0x00000000002F41D0 "_\t"
 *   insn=0x00000000002F41D0 string=0x00000000002F41D4 "k"
 *   insn=0x00000000002F41DC string=0x00000000002F41E0 "*"
 *   insn=0x00000000002F41E0 string=0x00000000002F41E4 "_"
 *   insn=0x00000000002F41E4 string=0x00000000002F41E8 "a"
 *   insn=0x00000000002F41E8 string=0x00000000002F41EC "*"
 *   insn=0x00000000002F41EC string=0x00000000002F41F0 "_"
 *   insn=0x00000000002F41F4 string=0x00000000002F41F8 ")\t"
 *   insn=0x00000000002F41F8 string=0x00000000002F41FC "I"
 *   insn=0x00000000002F41FC string=0x00000000002F4200 "?"
 *   insn=0x00000000002F4200 string=0x00000000002F4204 "c"
 *   insn=0x00000000002F4210 string=0x00000000002F4214 "@"
 *   insn=0x00000000002F4218 string=0x00000000002F421C "I"
 *   insn=0x00000000002F421C string=0x00000000002F4220 "h"
 *   insn=0x00000000002F4228 string=0x00000000002F422C "?"
 *   insn=0x00000000002F422C string=0x00000000002F4230 "j"
 *   insn=0x00000000002F4238 string=0x00000000002F423C "h.@"
 *   insn=0x00000000002F4248 string=0x00000000002F424C "`"
 *   insn=0x00000000002F4250 string=0x00000000002F4260 "("
 *   insn=0x00000000002F4268 string=0x00000000002F426C "A"
 *   insn=0x00000000002F4294 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharacterState::MergePartialFromCodedStream(
        Caver::Proto::CharacterState *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  Caver::Proto::CharacterState *v3; // x20
  unsigned __int64 *v5; // x26
  unsigned __int64 *v6; // x27
  char *v7; // x8
  unsigned __int64 v8; // x1
  int v9; // w8
  char *v10; // x9
  unsigned __int64 v11; // x8
  unsigned int v12; // w10
  _BYTE *v13; // x9
  unsigned __int8 *v14; // x9
  unsigned __int64 v15; // x8
  unsigned int v16; // w10
  unsigned __int8 *v17; // x9
  char *v18; // x9
  unsigned int v19; // w10
  _BYTE *v20; // x9
  char *v21; // x9
  unsigned int v22; // w10
  _BYTE *v23; // x9
  unsigned __int8 *v24; // x9
  unsigned int v25; // w10
  unsigned __int8 *v26; // x9
  char *v27; // x9
  unsigned int v28; // w10
  unsigned __int8 *v29; // x9
  char *v30; // x9
  unsigned int v31; // w10
  _BYTE *v32; // x9
  char *v33; // x9
  unsigned int v34; // w10
  _BYTE *v35; // x9
  int v36; // w11
  int v37; // w11
  int v38; // w11
  int v39; // w11
  int v40; // w11
  int v41; // w8
  int v42; // w24
  __int64 v43; // x8
  __int64 v44; // x23
  __int64 v45; // x8
  char *v46; // x8
  int v47; // w8
  int v48; // w9
  int v49; // w24
  int v50; // w8
  bool v51; // vf
  int v52; // w8
  __int64 *v53; // x1
  _QWORD *v54; // x0
  _BYTE *v55; // x8
  __int64 *v56; // x1
  _QWORD *v57; // x0
  unsigned __int8 *v58; // x8
  int v59; // w8
  int v60; // w9
  __int64 v61; // x0
  __int64 v62; // x8
  __int64 v63; // x9
  __int64 *v64; // x1
  _QWORD *v65; // x0
  unsigned __int8 *v66; // x8
  __int64 *v67; // x1
  _QWORD *v68; // x0
  unsigned __int8 *v69; // x8
  __int64 *v70; // x1
  _QWORD *v71; // x0
  unsigned __int8 *v72; // x8
  __int64 *v73; // x1
  _QWORD *v74; // x0
  unsigned __int8 *v75; // x9
  int v76; // w11
  int v77; // w11
  int v78; // w11
  __int64 result; // x0
  google::protobuf::internal::RepeatedPtrFieldBase *v80; // [xsp+10h] [xbp-80h]
  google::protobuf::internal::RepeatedPtrFieldBase *v81; // [xsp+18h] [xbp-78h]
  unsigned int v82; // [xsp+24h] [xbp-6Ch] BYREF
  __int64 v83; // [xsp+28h] [xbp-68h]

  v3 = this;
  v81 = (Caver::Proto::CharacterState *)((char *)this + 104);
  v80 = (Caver::Proto::CharacterState *)((char *)this + 32);
  v5 = (unsigned __int64 *)((char *)a2 + 8);
  v6 = (unsigned __int64 *)((char *)a2 + 16);
  v83 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
LABEL_2:
  while ( 2 )
  {
    v7 = (char *)*v5;
    if ( *v5 >= *v6 || *v7 < 0 )
    {
      this = (Caver::Proto::CharacterState *)google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v8 = (unsigned int)this;
      *((_DWORD *)a2 + 8) = (_DWORD)this;
      if ( !(_DWORD)this )
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
      case 2u:
        v9 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_57;
        v10 = (char *)*v5;
        v11 = *v6;
        if ( *v5 >= *v6 || *v10 < 0 )
        {
          this = (Caver::Proto::CharacterState *)google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v82);
          if ( ((unsigned __int8)this & 1) == 0 )
            return 0;
          v12 = v82;
          v13 = (_BYTE *)*v5;
          v11 = *v6;
        }
        else
        {
          v12 = (unsigned __int8)*v10;
          v13 = v10 + 1;
          v82 = v12;
          *v5 = (unsigned __int64)v13;
        }
        v36 = *((_DWORD *)v3 + 51);
        *((_DWORD *)v3 + 3) = v12;
        *((_DWORD *)v3 + 51) = v36 | 1;
        if ( (unsigned __int64)v13 >= v11 || *v13 != 32 )
          continue;
        v21 = v13 + 1;
        *v5 = (unsigned __int64)v21;
        if ( (unsigned __int64)v21 < v11 )
          goto LABEL_30;
        goto LABEL_65;
      case 4u:
        v9 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_57;
        v21 = (char *)*v5;
        v11 = *v6;
        if ( *v5 >= *v6 )
          goto LABEL_65;
LABEL_30:
        if ( *v21 < 0 )
        {
LABEL_65:
          this = (Caver::Proto::CharacterState *)google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v82);
          if ( ((unsigned __int8)this & 1) == 0 )
            return 0;
          v22 = v82;
          v23 = (_BYTE *)*v5;
          v11 = *v6;
        }
        else
        {
          v22 = (unsigned __int8)*v21;
          v23 = v21 + 1;
          v82 = v22;
          *v5 = (unsigned __int64)v23;
        }
        v37 = *((_DWORD *)v3 + 51);
        *((_DWORD *)v3 + 4) = v22;
        *((_DWORD *)v3 + 51) = v37 | 2;
        if ( (unsigned __int64)v23 >= v11 || *v23 != 40 )
          continue;
        v18 = v23 + 1;
        *v5 = (unsigned __int64)v18;
        if ( (unsigned __int64)v18 >= v11 )
          goto LABEL_70;
LABEL_22:
        if ( *v18 < 0 )
        {
LABEL_70:
          this = (Caver::Proto::CharacterState *)google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v82);
          if ( ((unsigned __int8)this & 1) == 0 )
            return 0;
          v19 = v82;
          v20 = (_BYTE *)*v5;
          v11 = *v6;
        }
        else
        {
          v19 = (unsigned __int8)*v18;
          v20 = v18 + 1;
          v82 = v19;
          *v5 = (unsigned __int64)v20;
        }
        v38 = *((_DWORD *)v3 + 51);
        *((_DWORD *)v3 + 5) = v19;
        *((_DWORD *)v3 + 51) = v38 | 4;
        if ( (unsigned __int64)v20 >= v11 || *v20 != 48 )
          continue;
        v30 = v20 + 1;
        *v5 = (unsigned __int64)v30;
        if ( (unsigned __int64)v30 >= v11 )
          goto LABEL_75;
LABEL_46:
        if ( *v30 < 0 )
        {
LABEL_75:
          this = (Caver::Proto::CharacterState *)google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v82);
          if ( ((unsigned __int8)this & 1) == 0 )
            return 0;
          v31 = v82;
          v32 = (_BYTE *)*v5;
          v11 = *v6;
        }
        else
        {
          v31 = (unsigned __int8)*v30;
          v32 = v30 + 1;
          v82 = v31;
          *v5 = (unsigned __int64)v32;
        }
        v39 = *((_DWORD *)v3 + 51);
        *((_DWORD *)v3 + 6) = v31;
        *((_DWORD *)v3 + 51) = v39 | 8;
        if ( (unsigned __int64)v32 >= v11 || *v32 != 56 )
          continue;
        v33 = v32 + 1;
        *v5 = (unsigned __int64)v33;
        if ( (unsigned __int64)v33 >= v11 )
          goto LABEL_80;
LABEL_50:
        if ( *v33 < 0 )
        {
LABEL_80:
          this = (Caver::Proto::CharacterState *)google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v82);
          if ( ((unsigned __int8)this & 1) == 0 )
            return 0;
          v34 = v82;
          v35 = (_BYTE *)*v5;
          v11 = *v6;
        }
        else
        {
          v34 = (unsigned __int8)*v33;
          v35 = v33 + 1;
          v82 = v34;
          *v5 = (unsigned __int64)v35;
        }
        v40 = *((_DWORD *)v3 + 51);
        *((_DWORD *)v3 + 7) = v34;
        *((_DWORD *)v3 + 51) = v40 | 0x10;
        if ( (unsigned __int64)v35 >= v11 || *v35 != 90 )
          continue;
        do
        {
          *v5 = (unsigned __int64)(v35 + 1);
LABEL_85:
          v42 = *((_DWORD *)v3 + 10);
          v41 = *((_DWORD *)v3 + 11);
          if ( v42 >= v41 )
          {
            if ( v41 == *((_DWORD *)v3 + 12) )
            {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v80, v41 + 1);
              v42 = *((_DWORD *)v3 + 10);
              v41 = *((_DWORD *)v3 + 11);
            }
            *((_DWORD *)v3 + 11) = v41 + 1;
            v44 = operator new(0x20u);
            *(_QWORD *)v44 = off_6C7078;
            *(_DWORD *)(v44 + 8) = 0;
            *(_QWORD *)(v44 + 24) = 1;
            *(_QWORD *)(v44 + 16) = &Caver::Proto::CharacterState_ItemState::_default_name_;
            v45 = *((_QWORD *)v3 + 4);
            *((_DWORD *)v3 + 10) = v42 + 1;
            *(_QWORD *)(v45 + 8LL * v42) = v44;
          }
          else
          {
            v43 = *((_QWORD *)v3 + 4);
            *((_DWORD *)v3 + 10) = v42 + 1;
            v44 = *(_QWORD *)(v43 + 8LL * v42);
          }
          v46 = (char *)*v5;
          if ( *v5 >= *v6 || *v46 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v82) & 1) == 0 )
              return 0;
          }
          else
          {
            v82 = (unsigned __int8)*v46;
            *v5 = (unsigned __int64)(v46 + 1);
          }
          v47 = *((_DWORD *)a2 + 14);
          v48 = *((_DWORD *)a2 + 15);
          *((_DWORD *)a2 + 14) = v47 + 1;
          if ( v47 >= v48 )
            return 0;
          v49 = google::protobuf::io::CodedInputStream::PushLimit(a2, v82);
          if ( (Caver::Proto::CharacterState_ItemState::MergePartialFromCodedStream(
                  (Caver::Proto::CharacterState_ItemState *)v44,
                  a2)
              & 1) == 0
            || !*((_BYTE *)a2 + 36) )
          {
            return 0;
          }
          this = (Caver::Proto::CharacterState *)google::protobuf::io::CodedInputStream::PopLimit(a2, v49);
          v50 = *((_DWORD *)a2 + 14);
          v51 = __OFSUB__(v50, 1);
          v52 = v50 - 1;
          if ( v52 < 0 == v51 )
            *((_DWORD *)a2 + 14) = v52;
          v35 = (_BYTE *)*v5;
          if ( *v5 >= *v6 )
            goto LABEL_2;
        }
        while ( *v35 == 90 );
        if ( *v35 != 98 )
          continue;
        *v5 = (unsigned __int64)(v35 + 1);
LABEL_103:
        v53 = (__int64 *)*((_QWORD *)v3 + 11);
        *((_DWORD *)v3 + 51) |= 0x40u;
        if ( v53 == &Caver::Proto::CharacterState::_default_equipped_weapon_ )
        {
          v54 = (_QWORD *)operator new(8u);
          *v54 = &byte_6FD2F8;
          *((_QWORD *)v3 + 11) = v54;
        }
        this = (Caver::Proto::CharacterState *)google::protobuf::internal::WireFormatLite::ReadString(a2);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0;
        v55 = (_BYTE *)*v5;
        if ( *v5 >= *v6 || *v55 != 106 )
          continue;
        *v5 = (unsigned __int64)(v55 + 1);
LABEL_109:
        v56 = (__int64 *)*((_QWORD *)v3 + 12);
        *((_DWORD *)v3 + 51) |= 0x80u;
        if ( v56 == &Caver::Proto::CharacterState::_default_equipped_armor_ )
        {
          v57 = (_QWORD *)operator new(8u);
          *v57 = &byte_6FD2F8;
          *((_QWORD *)v3 + 12) = v57;
        }
        this = (Caver::Proto::CharacterState *)google::protobuf::internal::WireFormatLite::ReadString(a2);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0;
        v58 = (unsigned __int8 *)*v5;
        if ( *v5 >= *v6 || *v58 != 122 )
          continue;
        do
        {
          *v5 = (unsigned __int64)(v58 + 1);
LABEL_115:
          v59 = *((_DWORD *)v3 + 29);
          v60 = *((_DWORD *)v3 + 28);
          if ( v60 >= v59 )
          {
            if ( v59 == *((_DWORD *)v3 + 30) )
            {
              this = (Caver::Proto::CharacterState *)google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                                                       v81,
                                                       v59 + 1);
              v59 = *((_DWORD *)v3 + 29);
            }
            *((_DWORD *)v3 + 29) = v59 + 1;
            v61 = google::protobuf::internal::StringTypeHandlerBase::New(this);
            v62 = *((int *)v3 + 28);
            v63 = *((_QWORD *)v3 + 13);
            *((_DWORD *)v3 + 28) = v62 + 1;
            *(_QWORD *)(v63 + 8 * v62) = v61;
          }
          else
          {
            *((_DWORD *)v3 + 28) = v60 + 1;
          }
          this = (Caver::Proto::CharacterState *)google::protobuf::internal::WireFormatLite::ReadString(a2);
          if ( ((unsigned __int8)this & 1) == 0 )
            return 0;
          v58 = (unsigned __int8 *)*v5;
        }
        while ( *v5 < *v6 && *v58 == 122 );
        if ( (int)(*v6 - (_DWORD)v58) < 2 || *v58 != 130 || v58[1] != 1 )
          continue;
        *v5 = (unsigned __int64)(v58 + 2);
LABEL_127:
        v64 = (__int64 *)*((_QWORD *)v3 + 20);
        *((_DWORD *)v3 + 51) |= 0x200u;
        if ( v64 == &Caver::Proto::CharacterState::_default_current_skill_ )
        {
          v65 = (_QWORD *)operator new(8u);
          *v65 = &byte_6FD2F8;
          *((_QWORD *)v3 + 20) = v65;
        }
        this = (Caver::Proto::CharacterState *)google::protobuf::internal::WireFormatLite::ReadString(a2);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0;
        v66 = (unsigned __int8 *)*v5;
        if ( (int)(*(_DWORD *)v6 - *v5) < 2 || *v66 != 138 || v66[1] != 1 )
          continue;
        *v5 = (unsigned __int64)(v66 + 2);
LABEL_134:
        v67 = (__int64 *)*((_QWORD *)v3 + 21);
        *((_DWORD *)v3 + 51) |= 0x400u;
        if ( v67 == &Caver::Proto::CharacterState::_default_weapon_trinket_ )
        {
          v68 = (_QWORD *)operator new(8u);
          *v68 = &byte_6FD2F8;
          *((_QWORD *)v3 + 21) = v68;
        }
        this = (Caver::Proto::CharacterState *)google::protobuf::internal::WireFormatLite::ReadString(a2);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0;
        v69 = (unsigned __int8 *)*v5;
        if ( (int)(*(_DWORD *)v6 - *v5) < 2 || *v69 != 146 || v69[1] != 1 )
          continue;
        *v5 = (unsigned __int64)(v69 + 2);
LABEL_141:
        v70 = (__int64 *)*((_QWORD *)v3 + 22);
        *((_DWORD *)v3 + 51) |= 0x800u;
        if ( v70 == &Caver::Proto::CharacterState::_default_armor_trinket_ )
        {
          v71 = (_QWORD *)operator new(8u);
          *v71 = &byte_6FD2F8;
          *((_QWORD *)v3 + 22) = v71;
        }
        this = (Caver::Proto::CharacterState *)google::protobuf::internal::WireFormatLite::ReadString(a2);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0;
        v72 = (unsigned __int8 *)*v5;
        if ( (int)(*(_DWORD *)v6 - *v5) < 2 || *v72 != 154 || v72[1] != 1 )
          continue;
        *v5 = (unsigned __int64)(v72 + 2);
LABEL_148:
        v73 = (__int64 *)*((_QWORD *)v3 + 23);
        *((_DWORD *)v3 + 51) |= 0x1000u;
        if ( v73 == &Caver::Proto::CharacterState::_default_skill_trinket_ )
        {
          v74 = (_QWORD *)operator new(8u);
          *v74 = &byte_6FD2F8;
          *((_QWORD *)v3 + 23) = v74;
        }
        this = (Caver::Proto::CharacterState *)google::protobuf::internal::WireFormatLite::ReadString(a2);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0;
        v15 = *v6;
        v75 = (unsigned __int8 *)*v5;
        if ( (int)(*v6 - *v5) < 2 || *v75 != 160 || v75[1] != 1 )
          continue;
        v14 = v75 + 2;
        *v5 = (unsigned __int64)v14;
        if ( (unsigned __int64)v14 >= v15 )
          goto LABEL_155;
LABEL_14:
        if ( (char)*v14 < 0 )
        {
LABEL_155:
          this = (Caver::Proto::CharacterState *)google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v82);
          if ( ((unsigned __int8)this & 1) == 0 )
            return 0;
          v16 = v82;
          v15 = *v6;
          v17 = (unsigned __int8 *)*v5;
        }
        else
        {
          v16 = *v14;
          v17 = v14 + 1;
          v82 = v16;
          *v5 = (unsigned __int64)v17;
        }
        v76 = *((_DWORD *)v3 + 51);
        *((_DWORD *)v3 + 48) = v16;
        *((_DWORD *)v3 + 51) = v76 | 0x2000;
        if ( (int)v15 - (int)v17 < 2 || *v17 != 168 || v17[1] != 1 )
          continue;
        v24 = v17 + 2;
        *v5 = (unsigned __int64)v24;
        if ( (unsigned __int64)v24 >= v15 )
          goto LABEL_161;
LABEL_38:
        if ( (char)*v24 < 0 )
        {
LABEL_161:
          this = (Caver::Proto::CharacterState *)google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v82);
          if ( ((unsigned __int8)this & 1) == 0 )
            return 0;
          v25 = v82;
          v15 = *v6;
          v26 = (unsigned __int8 *)*v5;
        }
        else
        {
          v25 = *v24;
          v26 = v24 + 1;
          v82 = v25;
          *v5 = (unsigned __int64)v26;
        }
        v77 = *((_DWORD *)v3 + 51);
        *((_DWORD *)v3 + 49) = v25;
        *((_DWORD *)v3 + 51) = v77 | 0x4000;
        if ( (int)v15 - (int)v26 < 2 || *v26 != 176 || v26[1] != 1 )
          continue;
        v27 = (char *)(v26 + 2);
        *v5 = (unsigned __int64)v27;
        if ( (unsigned __int64)v27 >= v15 )
          goto LABEL_167;
LABEL_42:
        if ( (*v27 & 0x80000000) == 0 )
        {
          v28 = (unsigned __int8)*v27;
          v29 = (unsigned __int8 *)(v27 + 1);
          v82 = v28;
          *v5 = (unsigned __int64)v29;
          goto LABEL_169;
        }
LABEL_167:
        this = (Caver::Proto::CharacterState *)google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v82);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v28 = v82;
          v29 = (unsigned __int8 *)*v5;
          v15 = *v6;
LABEL_169:
          v78 = *((_DWORD *)v3 + 51);
          *((_DWORD *)v3 + 50) = v28;
          *((_DWORD *)v3 + 51) = v78 | 0x8000;
          if ( v29 == (unsigned __int8 *)v15 && *((_DWORD *)a2 + 11) )
          {
            result = 1;
            *((_DWORD *)a2 + 8) = 0;
            *((_BYTE *)a2 + 36) = 1;
            return result;
          }
          continue;
        }
        return 0;
      case 5u:
        v9 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_57;
        v18 = (char *)*v5;
        v11 = *v6;
        if ( *v5 < *v6 )
          goto LABEL_22;
        goto LABEL_70;
      case 6u:
        v9 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_57;
        v30 = (char *)*v5;
        v11 = *v6;
        if ( *v5 < *v6 )
          goto LABEL_46;
        goto LABEL_75;
      case 7u:
        v9 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_57;
        v33 = (char *)*v5;
        v11 = *v6;
        if ( *v5 < *v6 )
          goto LABEL_50;
        goto LABEL_80;
      case 0xBu:
        v9 = v8 & 7;
        if ( v9 == 2 )
          goto LABEL_85;
        goto LABEL_57;
      case 0xCu:
        v9 = v8 & 7;
        if ( v9 == 2 )
          goto LABEL_103;
        goto LABEL_57;
      case 0xDu:
        v9 = v8 & 7;
        if ( v9 == 2 )
          goto LABEL_109;
        goto LABEL_57;
      case 0xFu:
        v9 = v8 & 7;
        if ( v9 == 2 )
          goto LABEL_115;
        goto LABEL_57;
      case 0x10u:
        v9 = v8 & 7;
        if ( v9 == 2 )
          goto LABEL_127;
        goto LABEL_57;
      case 0x11u:
        v9 = v8 & 7;
        if ( v9 == 2 )
          goto LABEL_134;
        goto LABEL_57;
      case 0x12u:
        v9 = v8 & 7;
        if ( v9 == 2 )
          goto LABEL_141;
        goto LABEL_57;
      case 0x13u:
        v9 = v8 & 7;
        if ( v9 == 2 )
          goto LABEL_148;
        goto LABEL_57;
      case 0x14u:
        v9 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_57;
        v14 = (unsigned __int8 *)*v5;
        v15 = *v6;
        if ( *v5 < *v6 )
          goto LABEL_14;
        goto LABEL_155;
      case 0x15u:
        v9 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_57;
        v24 = (unsigned __int8 *)*v5;
        v15 = *v6;
        if ( *v5 < *v6 )
          goto LABEL_38;
        goto LABEL_161;
      case 0x16u:
        v9 = v8 & 7;
        if ( (v8 & 7) != 0 )
          goto LABEL_57;
        v27 = (char *)*v5;
        v15 = *v6;
        if ( *v5 < *v6 )
          goto LABEL_42;
        goto LABEL_167;
      default:
        v9 = v8 & 7;
LABEL_57:
        if ( v9 == 4 )
          return 1;
        this = (Caver::Proto::CharacterState *)google::protobuf::internal::WireFormatLite::SkipField(
                                                 a2,
                                                 (google::protobuf::io::CodedInputStream *)v8,
                                                 a3);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 0;
        continue;
    }
  }
}


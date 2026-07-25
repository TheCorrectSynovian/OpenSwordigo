/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DEC50
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet9Extension29SerializeFieldWithCachedSizesEiPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000001FBE90  google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 32
 *   0x00000000001F4260  google::protobuf::internal::WireFormatLite::WriteDouble(int,double,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F6D10  google::protobuf::io::CodedOutputStream::WriteVarint64(ulong)
 *   0x00000000001F7400  google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7C80  google::protobuf::internal::WireFormatLite::WriteFixed32(int,uint,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F8D50  google::protobuf::internal::WireFormatLite::WriteGroup(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9290  google::protobuf::io::CodedOutputStream::WriteLittleEndian32(uint)
 *   0x00000000001F9540  google::protobuf::internal::WireFormatLite::WriteSInt64(int,long,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9B50  google::protobuf::internal::WireFormatLite::WriteFixed64(int,ulong,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA490  google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FA660  google::protobuf::internal::WireFormatLite::WriteSFixed32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FA8E0  google::protobuf::internal::WireFormatLite::WriteSInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FBE90  google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FCC40  google::protobuf::internal::WireFormatLite::WriteUInt64(int,ulong,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FD700  google::protobuf::internal::WireFormatLite::WriteBytes(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FD950  google::protobuf::internal::WireFormatLite::WriteInt64(int,long,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FDE40  google::protobuf::io::CodedOutputStream::WriteVarint32(uint)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FEF00  google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FFB00  google::protobuf::io::CodedOutputStream::WriteLittleEndian64(ulong)
 *   0x0000000000201C90  google::protobuf::internal::WireFormatLite::WriteSFixed64(int,long,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 242
 *   insn=0x00000000004DEC64 string=0x00000000004DEC68 "V"
 *   insn=0x00000000004DEC90 string=0x00000000004DEC94 "h"
 *   insn=0x00000000004DECA0 string=0x00000000004DECA4 "g|"
 *   insn=0x00000000004DECA4 string=0x00000000001FDE40 "0'"
 *   insn=0x00000000004DECAC string=0x00000000004DECB0 "d|"
 *   insn=0x00000000004DECB4 string=0x00000000004DECB8 ""
 *   insn=0x00000000004DECBC string=0x00000000004DECC0 ""
 *   insn=0x00000000004DECC4 string=0x00000000004DECCC "(y"
 *   insn=0x00000000004DECCC string=0x00000000004DECD0 ""
 *   insn=0x00000000004DECD8 string=0x0000000000598A0C "./../../../../Dependencies/protobuf/src/google/protobuf/extension_set.cc"
 *   insn=0x00000000004DECE4 string=0x00000000004DECE8 "c"
 *   insn=0x00000000004DECEC string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004DECF0 string=0x0000000000598BDC "Non-primitive types can't be packed."
 *   insn=0x00000000004DECF8 string=0x00000000004DECFC "Eu"
 *   insn=0x00000000004DECFC string=0x00000000001FC210 "0'"
 *   insn=0x00000000004DED08 string=0x00000000001FA500 "0'"
 *   insn=0x00000000004DED0C string=0x00000000004DED10 "8m"
 *   insn=0x00000000004DED10 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004DED28 string=0x00000000004DED2C "!N"
 *   insn=0x00000000004DED48 string=0x00000000004DED4C ""
 *   insn=0x00000000004DED50 string=0x00000000004DED54 "h"
 *   insn=0x00000000004DED58 string=0x00000000004DED60 "(y"
 *   insn=0x00000000004DED60 string=0x00000000004DED64 ""
 *   insn=0x00000000004DED6C string=0x00000000004DED70 "\t\t@"
 *   insn=0x00000000004DED70 string=0x00000000004DED74 "?"
 *   insn=0x00000000004DED74 string=0x00000000004DED78 "K"
 *   insn=0x00000000004DED7C string=0x00000000004DED80 ""
 *   insn=0x00000000004DED8C string=0x00000000004DED90 "4U"
 *   insn=0x00000000004DED90 string=0x00000000001F4260 "P'"
 *   insn=0x00000000004DED98 string=0x00000000004DED9C "\t\t"
 *   insn=0x00000000004DEDAC string=0x00000000004DEDB0 ""
 *   insn=0x00000000004DEDB4 string=0x00000000004DEDB8 "H"
 *   insn=0x00000000004DEDBC string=0x00000000004DEDC4 "(y"
 *   insn=0x00000000004DEDC4 string=0x00000000004DEDC8 ""
 *   insn=0x00000000004DEDD8 string=0x00000000004DEDDC "!U"
 *   insn=0x00000000004DEDE4 string=0x00000000004DEDE8 "\t\t@"
 *   insn=0x00000000004DEDE8 string=0x00000000004DEDEC "?"
 *   insn=0x00000000004DEDF4 string=0x00000000004DEDF8 ""
 *   insn=0x00000000004DEDFC string=0x00000000004DEE00 "yu"
 *   insn=0x00000000004DEE00 string=0x00000000004DEE04 "\ty"
 *   insn=0x00000000004DEE04 string=0x00000000004DEE08 "!}"
 *   insn=0x00000000004DEE08 string=0x00000000004DEE0C "|"
 *   insn=0x00000000004DEE14 string=0x00000000004DEE18 "\t\t"
 *   insn=0x00000000004DEE28 string=0x00000000004DEE2C "\t\t@"
 *   insn=0x00000000004DEE2C string=0x00000000004DEE30 "?"
 *   insn=0x00000000004DEE30 string=0x00000000004DEE34 "k"
 *   insn=0x00000000004DEE38 string=0x00000000004DEE3C ""
 *   insn=0x00000000004DEE48 string=0x00000000001F9290 "0'"
 *   insn=0x00000000004DEE50 string=0x00000000004DEE54 "\t\t"
 *   insn=0x00000000004DEE58 string=0x00000000004DEE5C ""
 *   insn=0x00000000004DEE64 string=0x00000000004DEE68 "\t\t@"
 *   insn=0x00000000004DEE68 string=0x00000000004DEE6C "?"
 *   insn=0x00000000004DEE74 string=0x00000000004DEE78 ""
 *   insn=0x00000000004DEE94 string=0x00000000001F6D10 "0'"
 *   insn=0x00000000004DEE9C string=0x00000000004DEEA0 "\t\t"
 *   insn=0x00000000004DEEB0 string=0x00000000004DEEB4 "\t\t@"
 *   insn=0x00000000004DEEB4 string=0x00000000004DEEB8 "?"
 *   insn=0x00000000004DEEB8 string=0x00000000004DEEBC "+"
 *   insn=0x00000000004DEEC0 string=0x00000000004DEEC4 ""
 *   insn=0x00000000004DEED8 string=0x00000000004DEEDC "\t\t"
 *   insn=0x00000000004DEEE0 string=0x00000000004DEEE4 ""
 *   insn=0x00000000004DEEEC string=0x00000000004DEEF0 "\t\t@"
 *   insn=0x00000000004DEEF0 string=0x00000000004DEEF4 "?"
 *   insn=0x00000000004DEEF4 string=0x00000000004DEEF8 "K"
 *   insn=0x00000000004DEEFC string=0x00000000004DEF00 ""
 *   insn=0x00000000004DEF14 string=0x00000000004DEF18 "\t\t"
 *   insn=0x00000000004DEF1C string=0x00000000004DEF20 ""
 *   insn=0x00000000004DEF28 string=0x00000000004DEF2C "\t\t@"
 *   insn=0x00000000004DEF2C string=0x00000000004DEF30 "?"
 *   insn=0x00000000004DEF30 string=0x00000000004DEF34 "k"
 *   insn=0x00000000004DEF38 string=0x00000000004DEF3C ""
 *   insn=0x00000000004DEF50 string=0x00000000004DEF54 "\t\t"
 *   insn=0x00000000004DEF58 string=0x00000000004DEF5C ""
 *   insn=0x00000000004DEF5C string=0x00000000004DEF60 "p"
 *   insn=0x00000000004DEF64 string=0x00000000004DEF68 "\t\t@"
 *   insn=0x00000000004DEF68 string=0x00000000004DEF6C "?"
 *   insn=0x00000000004DEF74 string=0x00000000004DEF78 ""
 *   insn=0x00000000004DEF80 string=0x00000000004DEF84 "c_"
 *   insn=0x00000000004DEF8C string=0x00000000004DEF90 "\t\t"
 *   insn=0x00000000004DEF94 string=0x00000000004DEF98 ""
 *   insn=0x00000000004DEF98 string=0x00000000004DEF9C "a"
 *   insn=0x00000000004DEFA0 string=0x00000000004DEFA4 "\t\t@"
 *   insn=0x00000000004DEFA4 string=0x00000000004DEFA8 "?"
 *   insn=0x00000000004DEFB0 string=0x00000000004DEFB4 ""
 *   insn=0x00000000004DEFC8 string=0x00000000004DEFCC "\t\t"
 *   insn=0x00000000004DEFD0 string=0x00000000004DEFD4 ""
 *   insn=0x00000000004DEFD4 string=0x00000000004DEFD8 "R"
 *   insn=0x00000000004DEFDC string=0x00000000004DEFE0 "\t\t@"
 *   insn=0x00000000004DEFE0 string=0x00000000004DEFE4 "?"
 *   insn=0x00000000004DEFEC string=0x00000000004DEFF0 ""
 *   insn=0x00000000004DF004 string=0x00000000004DF008 "\t\t"
 *   insn=0x00000000004DF00C string=0x00000000004DF010 ""
 *   insn=0x00000000004DF010 string=0x00000000004DF014 "C"
 *   insn=0x00000000004DF018 string=0x00000000004DF01C "\t\t@"
 *   insn=0x00000000004DF01C string=0x00000000004DF020 "?"
 *   insn=0x00000000004DF028 string=0x00000000004DF02C ""
 *   insn=0x00000000004DF040 string=0x00000000004DF044 "\t\t"
 *   insn=0x00000000004DF048 string=0x00000000004DF04C ""
 *   insn=0x00000000004DF04C string=0x00000000004DF050 "4"
 *   insn=0x00000000004DF054 string=0x00000000004DF058 "\t\t@"
 *   insn=0x00000000004DF058 string=0x00000000004DF05C "?"
 *   insn=0x00000000004DF05C string=0x00000000004DF060 ""
 *   insn=0x00000000004DF064 string=0x00000000004DF068 ""
 *   insn=0x00000000004DF06C string=0x00000000004DF070 "yu"
 *   insn=0x00000000004DF070 string=0x00000000004DF074 "\t"
 *   insn=0x00000000004DF074 string=0x00000000004DF078 "!"
 *   insn=0x00000000004DF078 string=0x00000000004DF07C "%_"
 *   insn=0x00000000004DF084 string=0x00000000004DF088 "\t\t"
 *   insn=0x00000000004DF090 string=0x00000000004DF094 "#"
 *   insn=0x00000000004DF098 string=0x00000000004DF09C "\t\t@"
 *   insn=0x00000000004DF09C string=0x00000000004DF0A0 "?"
 *   insn=0x00000000004DF0A8 string=0x00000000004DF0AC ""
 *   insn=0x00000000004DF0B8 string=0x00000000004DF0BC "a{"
 *   insn=0x00000000004DF0D0 string=0x00000000004DF0D4 "\t\t"
 *   insn=0x00000000004DF0E4 string=0x00000000004DF0E8 "\t\t@"
 *   insn=0x00000000004DF0E8 string=0x00000000004DF0EC "?"
 *   insn=0x00000000004DF0F4 string=0x00000000004DF0F8 ""
 *   insn=0x00000000004DF10C string=0x00000000004DF110 "\t\t"
 *   insn=0x00000000004DF114 string=0x00000000004DF118 ""
 *   insn=0x00000000004DF120 string=0x00000000004DF124 "\t\t@"
 *   insn=0x00000000004DF124 string=0x00000000004DF128 "?"
 *   insn=0x00000000004DF130 string=0x00000000004DF134 ""
 *   insn=0x00000000004DF13C string=0x00000000004DF140 "Th"
 *   insn=0x00000000004DF148 string=0x00000000004DF14C "\t\t"
 *   insn=0x00000000004DF150 string=0x00000000004DF154 ""
 *   insn=0x00000000004DF15C string=0x00000000004DF160 "\t\t@"
 *   insn=0x00000000004DF160 string=0x00000000004DF164 "?"
 *   insn=0x00000000004DF16C string=0x00000000004DF170 ""
 *   insn=0x00000000004DF180 string=0x00000000001FA8E0 "0'"
 *   insn=0x00000000004DF188 string=0x00000000004DF18C "\t\t"
 *   insn=0x00000000004DF19C string=0x00000000004DF1A0 "\t\t@"
 *   insn=0x00000000004DF1A0 string=0x00000000004DF1A4 "?"
 *   insn=0x00000000004DF1AC string=0x00000000004DF1B0 ""
 *   insn=0x00000000004DF1BC string=0x00000000004DF1C0 "(m"
 *   insn=0x00000000004DF1C0 string=0x00000000001FA660 "0'"
 *   insn=0x00000000004DF1C8 string=0x00000000004DF1CC "\t\t"
 *   insn=0x00000000004DF1DC string=0x00000000004DF1E0 "\t\t@"
 *   insn=0x00000000004DF1E0 string=0x00000000004DF1E4 "?"
 *   insn=0x00000000004DF1EC string=0x00000000004DF1F0 ""
 *   insn=0x00000000004DF1FC string=0x00000000004DF200 "@y"
 *   insn=0x00000000004DF200 string=0x00000000001FD700 "0'"
 *   insn=0x00000000004DF208 string=0x00000000004DF20C "\t\t"
 *   insn=0x00000000004DF21C string=0x00000000004DF220 "\t\t@"
 *   insn=0x00000000004DF220 string=0x00000000004DF224 "?"
 *   insn=0x00000000004DF22C string=0x00000000004DF230 ""
 *   insn=0x00000000004DF23C string=0x00000000004DF240 "$Y"
 *   insn=0x00000000004DF240 string=0x00000000001F56D0 "P'"
 *   insn=0x00000000004DF248 string=0x00000000004DF24C "\t\t"
 *   insn=0x00000000004DF25C string=0x00000000004DF260 "\t\t@"
 *   insn=0x00000000004DF260 string=0x00000000004DF264 "?"
 *   insn=0x00000000004DF26C string=0x00000000004DF270 ""
 *   insn=0x00000000004DF280 string=0x00000000001FA490 "0'"
 *   insn=0x00000000004DF288 string=0x00000000004DF28C "\t\t"
 *   insn=0x00000000004DF29C string=0x00000000004DF2A0 "\t\t@"
 *   insn=0x00000000004DF2A0 string=0x00000000004DF2A4 "?"
 *   insn=0x00000000004DF2AC string=0x00000000004DF2B0 ""
 *   insn=0x00000000004DF2C0 string=0x00000000001F8D50 "0'"
 *   insn=0x00000000004DF2C8 string=0x00000000004DF2CC "\t\t"
 *   insn=0x00000000004DF2DC string=0x00000000004DF2E0 "\t\t@"
 *   insn=0x00000000004DF2E0 string=0x00000000004DF2E4 "?"
 *   insn=0x00000000004DF2EC string=0x00000000004DF2F0 ""
 *   insn=0x00000000004DF300 string=0x00000000001FD950 "0'"
 *   insn=0x00000000004DF308 string=0x00000000004DF30C "\t\t"
 *   insn=0x00000000004DF31C string=0x00000000004DF320 "\t\t@"
 *   insn=0x00000000004DF320 string=0x00000000004DF324 "?"
 *   insn=0x00000000004DF32C string=0x00000000004DF330 ""
 *   insn=0x00000000004DF33C string=0x00000000004DF340 "T"
 *   insn=0x00000000004DF348 string=0x00000000004DF34C "\t\t"
 *   insn=0x00000000004DF354 string=0x00000000004DF358 "r"
 *   insn=0x00000000004DF35C string=0x00000000004DF360 "\t\t@"
 *   insn=0x00000000004DF360 string=0x00000000004DF364 "?"
 *   insn=0x00000000004DF36C string=0x00000000004DF370 ""
 *   insn=0x00000000004DF37C string=0x00000000004DF380 "0v"
 *   insn=0x00000000004DF380 string=0x00000000001FCC40 "0'"
 *   insn=0x00000000004DF388 string=0x00000000004DF38C "\t\t"
 *   insn=0x00000000004DF394 string=0x00000000004DF398 "b"
 *   insn=0x00000000004DF39C string=0x00000000004DF3A0 "\t\t@"
 *   insn=0x00000000004DF3A0 string=0x00000000004DF3A4 "?"
 *   insn=0x00000000004DF3AC string=0x00000000004DF3B0 ""
 *   insn=0x00000000004DF3BC string=0x00000000004DF3C0 "<"
 *   insn=0x00000000004DF3C8 string=0x00000000004DF3CC "\t\t"
 *   insn=0x00000000004DF3D4 string=0x00000000004DF3D8 "R"
 *   insn=0x00000000004DF3DC string=0x00000000004DF3E0 "\t\t@"
 *   insn=0x00000000004DF3E0 string=0x00000000004DF3E4 "?"
 *   insn=0x00000000004DF3EC string=0x00000000004DF3F0 ""
 *   insn=0x00000000004DF408 string=0x00000000004DF40C "\t\t"
 *   insn=0x00000000004DF414 string=0x00000000004DF418 "B"
 *   insn=0x00000000004DF41C string=0x00000000004DF420 "\t\t@"
 *   insn=0x00000000004DF420 string=0x00000000004DF424 "?"
 *   insn=0x00000000004DF42C string=0x00000000004DF430 ""
 *   insn=0x00000000004DF43C string=0x00000000004DF440 "@h"
 *   insn=0x00000000004DF440 string=0x00000000001F9540 "0'"
 *   insn=0x00000000004DF448 string=0x00000000004DF44C "\t\t"
 *   insn=0x00000000004DF454 string=0x00000000004DF458 "2"
 *   insn=0x00000000004DF45C string=0x00000000004DF460 "\t\t@"
 *   insn=0x00000000004DF460 string=0x00000000004DF464 "?"
 *   insn=0x00000000004DF46C string=0x00000000004DF470 ""
 *   insn=0x00000000004DF480 string=0x00000000001F9B50 "0'"
 *   insn=0x00000000004DF488 string=0x00000000004DF48C "\t\t"
 *   insn=0x00000000004DF494 string=0x00000000004DF498 """
 *   insn=0x00000000004DF49C string=0x00000000004DF4A0 "\t\t@"
 *   insn=0x00000000004DF4A0 string=0x00000000004DF4A4 "?"
 *   insn=0x00000000004DF4AC string=0x00000000004DF4B0 ""
 *   insn=0x00000000004DF4C0 string=0x00000000001F7400 "0'"
 *   insn=0x00000000004DF4C8 string=0x00000000004DF4CC "\t\t"
 *   insn=0x00000000004DF4DC string=0x00000000004DF4E0 "\t\t@"
 *   insn=0x00000000004DF4E0 string=0x00000000004DF4E4 "?"
 *   insn=0x00000000004DF4EC string=0x00000000004DF4F0 ""
 *   insn=0x00000000004DF500 string=0x00000000001F7C80 "0'"
 *   insn=0x00000000004DF508 string=0x00000000004DF50C "\t\t"
 *   insn=0x00000000004DF51C string=0x00000000004DF520 "\t\t@"
 *   insn=0x00000000004DF520 string=0x00000000004DF524 "?"
 *   insn=0x00000000004DF52C string=0x00000000004DF530 ""
 *   insn=0x00000000004DF540 string=0x00000000001F9950 "0'"
 *   insn=0x00000000004DF548 string=0x00000000004DF54C "\t\t"
 *   insn=0x00000000004DF55C string=0x00000000004DF560 "\t\t@"
 *   insn=0x00000000004DF560 string=0x00000000004DF564 "?"
 *   insn=0x00000000004DF56C string=0x00000000004DF570 ""
 *   insn=0x00000000004DF57C string=0x00000000004DF580 "t`"
 *   insn=0x00000000004DF580 string=0x00000000001F7750 "0'"
 *   insn=0x00000000004DF588 string=0x00000000004DF58C "\t\t"
 *   insn=0x00000000004DF5B8 string=0x00000000004DF5BC ")l"
 *   insn=0x00000000004DF5CC string=0x00000000004DF5D0 "Lx"
 *   insn=0x00000000004DF5E0 string=0x00000000004DF5E4 ";X"
 *   insn=0x00000000004DF644 string=0x00000000004DF648 "~u"
 *   insn=0x00000000004DF66C string=0x00000000004DF670 "t|"
 *   insn=0x00000000004DF694 string=0x00000000004DF698 ".i"
 *   insn=0x00000000004DF6A8 string=0x00000000004DF6AC "U_"
 *   insn=0x00000000004DF6BC string=0x00000000004DF6C0 "pa"
 *   insn=0x00000000004DF6F0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004DF700 string=0x00000000004DF704 "p"
 *   insn=0x00000000004DF72C string=0x00000000004DF730 "a"
 *   insn=0x00000000004DF730 string=0x00000000004DF734 """
 *   insn=0x00000000004DF738 string=0x00000000004DF73C "h"
 *   insn=0x00000000004DF73C string=0x00000000004DF740 "a"
 *   insn=0x00000000004DF74C string=0x0000000000000002 "LF"
 *   insn=0x00000000004DF754 string=0x00000000004DF758 "Nk"
 *   insn=0x00000000004DF760 string=0x0000000000000003 "F"
 *   insn=0x00000000004DF788 string=0x00000000004DF78C "a"
 *   insn=0x00000000004DF790 string=0x00000000004DF794 "("
 *   insn=0x00000000004DF7A4 string=0x00000000001FBE90 "0'"
 *   insn=0x00000000004DF7B4 string=0x00000000004DF7B8 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(
        google::protobuf::internal::ExtensionSet::Extension *this,
        google::protobuf::internal::WireFormatLite *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  unsigned int v6; // w21
  _QWORD *v7; // x8
  __int64 v8; // x23
  _QWORD *v9; // x8
  __int64 v10; // x21
  _QWORD *v11; // x8
  __int64 v12; // x21
  _QWORD *v13; // x8
  __int64 v14; // x21
  unsigned __int64 v15; // x1
  _QWORD *v16; // x8
  __int64 v17; // x21
  _QWORD *v18; // x8
  __int64 v19; // x21
  _QWORD *v20; // x8
  __int64 v21; // x21
  _QWORD *v22; // x8
  __int64 v23; // x21
  _QWORD *v24; // x8
  __int64 v25; // x21
  _QWORD *v26; // x8
  __int64 v27; // x21
  _QWORD *v28; // x8
  __int64 v29; // x21
  _QWORD *v30; // x8
  __int64 v31; // x21
  _QWORD *v32; // x8
  __int64 v33; // x21
  unsigned __int64 v34; // x1
  _QWORD *v35; // x8
  __int64 v36; // x21
  _QWORD *v37; // x8
  __int64 v38; // x21
  _QWORD *v39; // x8
  __int64 v40; // x23
  _QWORD *v41; // x8
  __int64 v42; // x23
  _QWORD *v43; // x8
  __int64 v44; // x23
  _QWORD *v45; // x8
  __int64 v46; // x23
  _QWORD *v47; // x8
  __int64 v48; // x23
  _QWORD *v49; // x8
  __int64 v50; // x23
  _QWORD *v51; // x8
  __int64 v52; // x23
  _QWORD *v53; // x8
  __int64 v54; // x23
  _QWORD *v55; // x8
  __int64 v56; // x23
  _QWORD *v57; // x8
  __int64 v58; // x23
  _QWORD *v59; // x8
  __int64 v60; // x23
  _QWORD *v61; // x8
  __int64 v62; // x23
  _QWORD *v63; // x8
  __int64 v64; // x23
  _QWORD *v65; // x8
  __int64 v66; // x23
  _QWORD *v67; // x8
  __int64 v68; // x23
  _QWORD *v69; // x8
  __int64 v70; // x23
  _QWORD *v71; // x8
  __int64 v72; // x23
  _BYTE v73[32]; // [xsp+48h] [xbp-58h] BYREF
  __int64 v74; // [xsp+68h] [xbp-38h]

  v6 = (unsigned int)a2;
  v74 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_BYTE *)this + 9) )
  {
    if ( *((_BYTE *)this + 11) )
    {
      if ( *((_DWORD *)this + 6) )
      {
        google::protobuf::io::CodedOutputStream::WriteVarint32(a3, (8 * (_DWORD)a2) | 2);
        google::protobuf::io::CodedOutputStream::WriteVarint32(a3, *((_DWORD *)this + 6));
        switch ( *((_BYTE *)this + 8) )
        {
          case 1:
            v26 = *(_QWORD **)this;
            if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
            {
              v27 = 0;
              do
              {
                google::protobuf::io::CodedOutputStream::WriteLittleEndian64(a3, *(_QWORD *)(*v26 + 8 * v27));
                v26 = *(_QWORD **)this;
                ++v27;
              }
              while ( v27 < *(int *)(*(_QWORD *)this + 8LL) );
            }
            break;
          case 2:
            v28 = *(_QWORD **)this;
            if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
            {
              v29 = 0;
              do
              {
                google::protobuf::io::CodedOutputStream::WriteLittleEndian32(a3, *(_DWORD *)(*v28 + 4 * v29));
                v28 = *(_QWORD **)this;
                ++v29;
              }
              while ( v29 < *(int *)(*(_QWORD *)this + 8LL) );
            }
            break;
          case 3:
            v18 = *(_QWORD **)this;
            if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
            {
              v19 = 0;
              do
              {
                google::protobuf::io::CodedOutputStream::WriteVarint64(a3, *(_QWORD *)(*v18 + 8 * v19));
                v18 = *(_QWORD **)this;
                ++v19;
              }
              while ( v19 < *(int *)(*(_QWORD *)this + 8LL) );
            }
            break;
          case 4:
            v22 = *(_QWORD **)this;
            if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
            {
              v23 = 0;
              do
              {
                google::protobuf::io::CodedOutputStream::WriteVarint64(a3, *(_QWORD *)(*v22 + 8 * v23));
                v22 = *(_QWORD **)this;
                ++v23;
              }
              while ( v23 < *(int *)(*(_QWORD *)this + 8LL) );
            }
            break;
          case 5:
            v13 = *(_QWORD **)this;
            if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
            {
              v14 = 0;
              do
              {
                v15 = *(int *)(*v13 + 4 * v14);
                if ( (v15 & 0x80000000) != 0 )
                  google::protobuf::io::CodedOutputStream::WriteVarint64(a3, v15);
                else
                  google::protobuf::io::CodedOutputStream::WriteVarint32(a3, v15);
                v13 = *(_QWORD **)this;
                ++v14;
              }
              while ( v14 < *(int *)(*(_QWORD *)this + 8LL) );
            }
            break;
          case 6:
            v35 = *(_QWORD **)this;
            if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
            {
              v36 = 0;
              do
              {
                google::protobuf::io::CodedOutputStream::WriteLittleEndian64(a3, *(_QWORD *)(*v35 + 8 * v36));
                v35 = *(_QWORD **)this;
                ++v36;
              }
              while ( v36 < *(int *)(*(_QWORD *)this + 8LL) );
            }
            break;
          case 7:
            v37 = *(_QWORD **)this;
            if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
            {
              v38 = 0;
              do
              {
                google::protobuf::io::CodedOutputStream::WriteLittleEndian32(a3, *(_DWORD *)(*v37 + 4 * v38));
                v37 = *(_QWORD **)this;
                ++v38;
              }
              while ( v38 < *(int *)(*(_QWORD *)this + 8LL) );
            }
            break;
          case 8:
            v24 = *(_QWORD **)this;
            if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
            {
              v25 = 0;
              do
              {
                google::protobuf::io::CodedOutputStream::WriteVarint32(a3, *(unsigned __int8 *)(*v24 + v25));
                v24 = *(_QWORD **)this;
                ++v25;
              }
              while ( v25 < *(int *)(*(_QWORD *)this + 8LL) );
            }
            break;
          case 9:
          case 0xA:
          case 0xB:
          case 0xC:
            google::protobuf::internal::LogMessage::LogMessage();
            google::protobuf::internal::LogMessage::operator<<((int)v73, "Non-primitive types can't be packed.");
            google::protobuf::internal::LogFinisher::operator=();
            google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v73);
            break;
          case 0xD:
            v16 = *(_QWORD **)this;
            if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
            {
              v17 = 0;
              do
              {
                google::protobuf::io::CodedOutputStream::WriteVarint32(a3, *(_DWORD *)(*v16 + 4 * v17));
                v16 = *(_QWORD **)this;
                ++v17;
              }
              while ( v17 < *(int *)(*(_QWORD *)this + 8LL) );
            }
            break;
          case 0xE:
            v32 = *(_QWORD **)this;
            if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
            {
              v33 = 0;
              do
              {
                v34 = *(int *)(*v32 + 4 * v33);
                if ( (v34 & 0x80000000) != 0 )
                  google::protobuf::io::CodedOutputStream::WriteVarint64(a3, v34);
                else
                  google::protobuf::io::CodedOutputStream::WriteVarint32(a3, v34);
                v32 = *(_QWORD **)this;
                ++v33;
              }
              while ( v33 < *(int *)(*(_QWORD *)this + 8LL) );
            }
            break;
          case 0xF:
            v11 = *(_QWORD **)this;
            if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
            {
              v12 = 0;
              do
              {
                google::protobuf::io::CodedOutputStream::WriteLittleEndian32(a3, *(_DWORD *)(*v11 + 4 * v12));
                v11 = *(_QWORD **)this;
                ++v12;
              }
              while ( v12 < *(int *)(*(_QWORD *)this + 8LL) );
            }
            break;
          case 0x10:
            v20 = *(_QWORD **)this;
            if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
            {
              v21 = 0;
              do
              {
                google::protobuf::io::CodedOutputStream::WriteLittleEndian64(a3, *(_QWORD *)(*v20 + 8 * v21));
                v20 = *(_QWORD **)this;
                ++v21;
              }
              while ( v21 < *(int *)(*(_QWORD *)this + 8LL) );
            }
            break;
          case 0x11:
            v9 = *(_QWORD **)this;
            if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
            {
              v10 = 0;
              do
              {
                google::protobuf::io::CodedOutputStream::WriteVarint32(
                  a3,
                  (2 * *(_DWORD *)(*v9 + 4 * v10)) ^ (*(int *)(*v9 + 4 * v10) >> 31));
                v9 = *(_QWORD **)this;
                ++v10;
              }
              while ( v10 < *(int *)(*(_QWORD *)this + 8LL) );
            }
            break;
          case 0x12:
            v30 = *(_QWORD **)this;
            if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
            {
              v31 = 0;
              do
              {
                google::protobuf::io::CodedOutputStream::WriteVarint64(
                  a3,
                  (2LL * *(_QWORD *)(*v30 + 8 * v31)) ^ (*(__int64 *)(*v30 + 8 * v31) >> 63));
                v30 = *(_QWORD **)this;
                ++v31;
              }
              while ( v31 < *(int *)(*(_QWORD *)this + 8LL) );
            }
            break;
          default:
            return;
        }
      }
    }
    else
    {
      switch ( *((_BYTE *)this + 8) )
      {
        case 1:
          v7 = *(_QWORD **)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
          {
            v8 = 0;
            do
            {
              google::protobuf::internal::WireFormatLite::WriteDouble(
                (google::protobuf::internal::WireFormatLite *)v6,
                a3,
                *(double *)(*v7 + 8 * v8),
                a3);
              v7 = *(_QWORD **)this;
              ++v8;
            }
            while ( v8 < *(int *)(*(_QWORD *)this + 8LL) );
          }
          break;
        case 2:
          v59 = *(_QWORD **)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
          {
            v60 = 0;
            do
            {
              google::protobuf::internal::WireFormatLite::WriteFloat(
                (google::protobuf::internal::WireFormatLite *)v6,
                a3,
                *(float *)(*v59 + 4 * v60),
                a3);
              v59 = *(_QWORD **)this;
              ++v60;
            }
            while ( v60 < *(int *)(*(_QWORD *)this + 8LL) );
          }
          break;
        case 3:
          v51 = *(_QWORD **)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
          {
            v52 = 0;
            do
            {
              google::protobuf::internal::WireFormatLite::WriteInt64(
                (google::protobuf::internal::WireFormatLite *)v6,
                *(_QWORD *)(*v51 + 8 * v52),
                a3,
                a4);
              v51 = *(_QWORD **)this;
              ++v52;
            }
            while ( v52 < *(int *)(*(_QWORD *)this + 8LL) );
          }
          break;
        case 4:
          v55 = *(_QWORD **)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
          {
            v56 = 0;
            do
            {
              google::protobuf::internal::WireFormatLite::WriteUInt64(
                (google::protobuf::internal::WireFormatLite *)v6,
                *(_QWORD *)(*v55 + 8 * v56),
                a3,
                a4);
              v55 = *(_QWORD **)this;
              ++v56;
            }
            while ( v56 < *(int *)(*(_QWORD *)this + 8LL) );
          }
          break;
        case 5:
          v45 = *(_QWORD **)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
          {
            v46 = 0;
            do
            {
              google::protobuf::internal::WireFormatLite::WriteInt32(
                (google::protobuf::internal::WireFormatLite *)v6,
                *(_DWORD *)(*v45 + 4 * v46),
                a3,
                a4);
              v45 = *(_QWORD **)this;
              ++v46;
            }
            while ( v46 < *(int *)(*(_QWORD *)this + 8LL) );
          }
          break;
        case 6:
          v63 = *(_QWORD **)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
          {
            v64 = 0;
            do
            {
              google::protobuf::internal::WireFormatLite::WriteFixed64(
                (google::protobuf::internal::WireFormatLite *)v6,
                *(_QWORD *)(*v63 + 8 * v64),
                a3,
                a4);
              v63 = *(_QWORD **)this;
              ++v64;
            }
            while ( v64 < *(int *)(*(_QWORD *)this + 8LL) );
          }
          break;
        case 7:
          v67 = *(_QWORD **)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
          {
            v68 = 0;
            do
            {
              google::protobuf::internal::WireFormatLite::WriteFixed32(
                (google::protobuf::internal::WireFormatLite *)v6,
                *(_DWORD *)(*v67 + 4 * v68),
                a3,
                a4);
              v67 = *(_QWORD **)this;
              ++v68;
            }
            while ( v68 < *(int *)(*(_QWORD *)this + 8LL) );
          }
          break;
        case 8:
          v57 = *(_QWORD **)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
          {
            v58 = 0;
            do
            {
              google::protobuf::internal::WireFormatLite::WriteBool(
                (google::protobuf::internal::WireFormatLite *)v6,
                *(unsigned __int8 *)(*v57 + v58),
                a3,
                a4);
              v57 = *(_QWORD **)this;
              ++v58;
            }
            while ( v58 < *(int *)(*(_QWORD *)this + 8LL) );
          }
          break;
        case 9:
          v71 = *(_QWORD **)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
          {
            v72 = 0;
            do
            {
              google::protobuf::internal::WireFormatLite::WriteString(v6, *(_QWORD *)(*v71 + 8 * v72), a3);
              v71 = *(_QWORD **)this;
              ++v72;
            }
            while ( v72 < *(int *)(*(_QWORD *)this + 8LL) );
          }
          break;
        case 0xA:
          v49 = *(_QWORD **)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
          {
            v50 = 0;
            do
            {
              google::protobuf::internal::WireFormatLite::WriteGroup(
                (google::protobuf::internal::WireFormatLite *)v6,
                *(_QWORD *)(*v49 + 8 * v50),
                a3,
                a4);
              v49 = *(_QWORD **)this;
              ++v50;
            }
            while ( v50 < *(int *)(*(_QWORD *)this + 8LL) );
          }
          break;
        case 0xB:
          v69 = *(_QWORD **)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
          {
            v70 = 0;
            do
            {
              google::protobuf::internal::WireFormatLite::WriteMessage(
                (google::protobuf::internal::WireFormatLite *)v6,
                *(_QWORD *)(*v69 + 8 * v70),
                a3,
                a4);
              v69 = *(_QWORD **)this;
              ++v70;
            }
            while ( v70 < *(int *)(*(_QWORD *)this + 8LL) );
          }
          break;
        case 0xC:
          v43 = *(_QWORD **)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
          {
            v44 = 0;
            do
            {
              google::protobuf::internal::WireFormatLite::WriteBytes(v6, *(_QWORD *)(*v43 + 8 * v44), a3);
              v43 = *(_QWORD **)this;
              ++v44;
            }
            while ( v44 < *(int *)(*(_QWORD *)this + 8LL) );
          }
          break;
        case 0xD:
          v47 = *(_QWORD **)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
          {
            v48 = 0;
            do
            {
              google::protobuf::internal::WireFormatLite::WriteUInt32(
                (google::protobuf::internal::WireFormatLite *)v6,
                *(_DWORD *)(*v47 + 4 * v48),
                a3,
                a4);
              v47 = *(_QWORD **)this;
              ++v48;
            }
            while ( v48 < *(int *)(*(_QWORD *)this + 8LL) );
          }
          break;
        case 0xE:
          v65 = *(_QWORD **)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
          {
            v66 = 0;
            do
            {
              google::protobuf::internal::WireFormatLite::WriteEnum(
                (google::protobuf::internal::WireFormatLite *)v6,
                *(_DWORD *)(*v65 + 4 * v66),
                a3,
                a4);
              v65 = *(_QWORD **)this;
              ++v66;
            }
            while ( v66 < *(int *)(*(_QWORD *)this + 8LL) );
          }
          break;
        case 0xF:
          v41 = *(_QWORD **)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
          {
            v42 = 0;
            do
            {
              google::protobuf::internal::WireFormatLite::WriteSFixed32(
                (google::protobuf::internal::WireFormatLite *)v6,
                *(_DWORD *)(*v41 + 4 * v42),
                a3,
                a4);
              v41 = *(_QWORD **)this;
              ++v42;
            }
            while ( v42 < *(int *)(*(_QWORD *)this + 8LL) );
          }
          break;
        case 0x10:
          v53 = *(_QWORD **)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
          {
            v54 = 0;
            do
            {
              google::protobuf::internal::WireFormatLite::WriteSFixed64(
                (google::protobuf::internal::WireFormatLite *)v6,
                *(_QWORD *)(*v53 + 8 * v54),
                a3,
                a4);
              v53 = *(_QWORD **)this;
              ++v54;
            }
            while ( v54 < *(int *)(*(_QWORD *)this + 8LL) );
          }
          break;
        case 0x11:
          v39 = *(_QWORD **)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
          {
            v40 = 0;
            do
            {
              google::protobuf::internal::WireFormatLite::WriteSInt32(
                (google::protobuf::internal::WireFormatLite *)v6,
                *(_DWORD *)(*v39 + 4 * v40),
                a3,
                a4);
              v39 = *(_QWORD **)this;
              ++v40;
            }
            while ( v40 < *(int *)(*(_QWORD *)this + 8LL) );
          }
          break;
        case 0x12:
          v61 = *(_QWORD **)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) >= 1 )
          {
            v62 = 0;
            do
            {
              google::protobuf::internal::WireFormatLite::WriteSInt64(
                (google::protobuf::internal::WireFormatLite *)v6,
                *(_QWORD *)(*v61 + 8 * v62),
                a3,
                a4);
              v61 = *(_QWORD **)this;
              ++v62;
            }
            while ( v62 < *(int *)(*(_QWORD *)this + 8LL) );
          }
          break;
        default:
          return;
      }
    }
  }
  else if ( !*((_BYTE *)this + 10) )
  {
    switch ( *((_BYTE *)this + 8) )
    {
      case 1:
        google::protobuf::internal::WireFormatLite::WriteDouble(
          (google::protobuf::internal::WireFormatLite *)(unsigned int)a2,
          a3,
          *(double *)this,
          a3);
        break;
      case 2:
        google::protobuf::internal::WireFormatLite::WriteFloat(
          (google::protobuf::internal::WireFormatLite *)(unsigned int)a2,
          a3,
          *(float *)this,
          a3);
        break;
      case 3:
        google::protobuf::internal::WireFormatLite::WriteInt64(
          (google::protobuf::internal::WireFormatLite *)(unsigned int)a2,
          *(_QWORD *)this,
          a3,
          a4);
        break;
      case 4:
        google::protobuf::internal::WireFormatLite::WriteUInt64(
          (google::protobuf::internal::WireFormatLite *)(unsigned int)a2,
          *(_QWORD *)this,
          a3,
          a4);
        break;
      case 5:
        google::protobuf::internal::WireFormatLite::WriteInt32(
          (google::protobuf::internal::WireFormatLite *)(unsigned int)a2,
          *(_DWORD *)this,
          a3,
          a4);
        break;
      case 6:
        google::protobuf::internal::WireFormatLite::WriteFixed64(
          (google::protobuf::internal::WireFormatLite *)(unsigned int)a2,
          *(_QWORD *)this,
          a3,
          a4);
        break;
      case 7:
        google::protobuf::internal::WireFormatLite::WriteFixed32(
          (google::protobuf::internal::WireFormatLite *)(unsigned int)a2,
          *(_DWORD *)this,
          a3,
          a4);
        break;
      case 8:
        google::protobuf::internal::WireFormatLite::WriteBool(
          (google::protobuf::internal::WireFormatLite *)(unsigned int)a2,
          *(unsigned __int8 *)this,
          a3,
          a4);
        break;
      case 9:
        google::protobuf::internal::WireFormatLite::WriteString((int)a2, *(_QWORD *)this, a3);
        break;
      case 0xA:
        google::protobuf::internal::WireFormatLite::WriteGroup(
          (google::protobuf::internal::WireFormatLite *)(unsigned int)a2,
          *(_QWORD *)this,
          a3,
          a4);
        break;
      case 0xB:
        google::protobuf::internal::WireFormatLite::WriteMessage(
          (google::protobuf::internal::WireFormatLite *)(unsigned int)a2,
          *(_QWORD *)this,
          a3,
          a4);
        break;
      case 0xC:
        google::protobuf::internal::WireFormatLite::WriteBytes((int)a2, *(_QWORD *)this, a3);
        break;
      case 0xD:
        google::protobuf::internal::WireFormatLite::WriteUInt32(
          (google::protobuf::internal::WireFormatLite *)(unsigned int)a2,
          *(_DWORD *)this,
          a3,
          a4);
        break;
      case 0xE:
        google::protobuf::internal::WireFormatLite::WriteEnum(
          (google::protobuf::internal::WireFormatLite *)(unsigned int)a2,
          *(_DWORD *)this,
          a3,
          a4);
        break;
      case 0xF:
        google::protobuf::internal::WireFormatLite::WriteSFixed32(
          (google::protobuf::internal::WireFormatLite *)(unsigned int)a2,
          *(_DWORD *)this,
          a3,
          a4);
        break;
      case 0x10:
        google::protobuf::internal::WireFormatLite::WriteSFixed64(
          (google::protobuf::internal::WireFormatLite *)(unsigned int)a2,
          *(_QWORD *)this,
          a3,
          a4);
        break;
      case 0x11:
        google::protobuf::internal::WireFormatLite::WriteSInt32(
          (google::protobuf::internal::WireFormatLite *)(unsigned int)a2,
          *(_DWORD *)this,
          a3,
          a4);
        break;
      case 0x12:
        google::protobuf::internal::WireFormatLite::WriteSInt64(
          (google::protobuf::internal::WireFormatLite *)(unsigned int)a2,
          *(_QWORD *)this,
          a3,
          a4);
        break;
      default:
        return;
    }
  }
}


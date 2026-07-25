/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DD72C
 * Mangled: _ZN6google8protobuf8internal12ExtensionSet10ParseFieldEjPNS0_2io16CodedInputStreamEPNS1_15ExtensionFinderEPNS1_12FieldSkipperE
 * Demangled: google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Callers: 1
 *   0x0000000000200E40  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Callees: 37
 *   0x00000000001F3E40  google::protobuf::internal::ExtensionSet::SetFloat(int,uchar,float,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F4B60  google::protobuf::internal::ExtensionSet::AddUInt64(int,uchar,bool,ulong,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F5330  google::protobuf::internal::ExtensionSet::SetDouble(int,uchar,double,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F67E0  google::protobuf::io::CodedInputStream::BytesUntilLimit(void)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F7CA0  google::protobuf::internal::ExtensionSet::AddUInt32(int,uchar,bool,uint,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F8370  google::protobuf::internal::ExtensionSet::AddMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F9260  google::protobuf::internal::ExtensionSet::SetUInt32(int,uchar,uint,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001F9A80  google::protobuf::internal::ExtensionSet::AddEnum(int,uchar,bool,int,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F9DA0  google::protobuf::internal::ExtensionSet::MutableString(int,uchar,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FAB00  google::protobuf::internal::ExtensionSet::SetBool(int,uchar,bool,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FB370  google::protobuf::internal::ExtensionSet::SetInt64(int,uchar,long,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FC6E0  google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FC720  google::protobuf::internal::ExtensionSet::AddString(int,uchar,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FCB80  google::protobuf::internal::ExtensionSet::AddInt64(int,uchar,bool,long,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FD8B0  google::protobuf::internal::ExtensionSet::AddDouble(int,uchar,bool,double,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FDBF0  google::protobuf::internal::ExtensionSet::SetInt32(int,uchar,int,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FE9C0  google::protobuf::internal::ExtensionSet::AddInt32(int,uchar,bool,int,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FEFE0  google::protobuf::internal::ExtensionSet::AddBool(int,uchar,bool,bool,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FF400  google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(ulong *)
 *   0x00000000001FFCE0  google::protobuf::internal::ExtensionSet::SetUInt64(int,uchar,ulong,google::protobuf::FieldDescriptor const*)
 *   0x0000000000200E40  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202DE0  google::protobuf::internal::ExtensionSet::SetEnum(int,uchar,int,google::protobuf::FieldDescriptor const*)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x0000000000203580  google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *)
 *   0x0000000000203920  google::protobuf::internal::ExtensionSet::AddFloat(int,uchar,bool,float,google::protobuf::FieldDescriptor const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 252
 *   insn=0x00000000004DD740 string=0x00000000004DD744 "X"
 *   insn=0x00000000004DD744 string=0x00000000004DD748 ""
 *   insn=0x00000000004DD758 string=0x00000000004DD75C "h"
 *   insn=0x00000000004DD768 string=0x00000000004DD76C "\t@"
 *   insn=0x00000000004DD788 string=0x00000000004DD7C4 "K"
 *   insn=0x00000000004DD78C string=0x00000000004DD790 "?"
 *   insn=0x00000000004DD790 string=0x00000000004DD794 "A"
 *   insn=0x00000000004DD794 string=0x00000000004DD798 "H"
 *   insn=0x00000000004DD7A4 string=0x00000000004DD7A8 "\t"
 *   insn=0x00000000004DD7AC string=0x00000000004DD7B0 "!"
 *   insn=0x00000000004DD7B0 string=0x00000000004DD7B4 ""
 *   insn=0x00000000004DD7BC string=0x00000000004DD7C0 "4"
 *   insn=0x00000000004DD7C8 string=0x00000000004DD7CC "k"
 *   insn=0x00000000004DD7CC string=0x00000000004DD7D0 "jyj"
 *   insn=0x00000000004DD7D0 string=0x00000000004DD7D4 "?"
 *   insn=0x00000000004DD7E8 string=0x00000000004DD7EC "\t@"
 *   insn=0x00000000004DD7F4 string=0x00000000004DD7F8 ""
 *   insn=0x00000000004DD800 string=0x00000000004DD804 "ai"
 *   insn=0x00000000004DD804 string=0x00000000004DE530 "h_"
 *   insn=0x00000000004DD820 string=0x00000000004DD824 ""
 *   insn=0x00000000004DD828 string=0x00000000004DD82C "H"
 *   insn=0x00000000004DD830 string=0x00000000004DD838 "(y"
 *   insn=0x00000000004DD838 string=0x00000000004DD83C ""
 *   insn=0x00000000004DD874 string=0x00000000001FD8B0 "0'"
 *   insn=0x00000000004DD884 string=0x00000000001F9050 "0'"
 *   insn=0x00000000004DD890 string=0x00000000004DD894 ";"
 *   insn=0x00000000004DD89C string=0x00000000004DD8A0 ""
 *   insn=0x00000000004DD8AC string=0x00000000004DD8B4 "(y"
 *   insn=0x00000000004DD8AC string=0x0000000000598750 "@U"
 *   insn=0x00000000004DD8B4 string=0x00000000004DD8B8 ""
 *   insn=0x00000000004DD8C0 string=0x0000000000598A0C "./../../../../Dependencies/protobuf/src/google/protobuf/extension_set.cc"
 *   insn=0x00000000004DD8D4 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004DD8D8 string=0x0000000000598BDC "Non-primitive types can't be packed."
 *   insn=0x00000000004DD8E0 string=0x00000000004DD8E4 "Kz"
 *   insn=0x00000000004DD8E4 string=0x00000000001FC210 "0'"
 *   insn=0x00000000004DD8F0 string=0x00000000001FA500 "0'"
 *   insn=0x00000000004DD8F4 string=0x00000000004DD8F8 ">r"
 *   insn=0x00000000004DD8F8 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004DD900 string=0x00000000004DD904 "C"
 *   insn=0x00000000004DD910 string=0x00000000001F67E0 "0'"
 *   insn=0x00000000004DD914 string=0x00000000004DD918 "+"
 *   insn=0x00000000004DD91C string=0x00000000004DD920 "?"
 *   insn=0x00000000004DD924 string=0x00000000004DD928 "("
 *   insn=0x00000000004DD92C string=0x00000000004DD930 ""
 *   insn=0x00000000004DD930 string=0x00000000004DD934 ")"
 *   insn=0x00000000004DD958 string=0x00000000004DD95C "\t"
 *   insn=0x00000000004DD960 string=0x00000000004DD964 "$"
 *   insn=0x00000000004DD964 string=0x00000000004DD968 """
 *   insn=0x00000000004DD998 string=0x00000000004DD99C ""
 *   insn=0x00000000004DD9A4 string=0x00000000004DD9A8 "js"
 *   insn=0x00000000004DD9A8 string=0x00000000001FA750 "0'"
 *   insn=0x00000000004DD9D4 string=0x00000000004DD9D8 "L"
 *   insn=0x00000000004DD9F8 string=0x00000000004DD9FC "\t"
 *   insn=0x00000000004DDA00 string=0x00000000004DDA04 "$"
 *   insn=0x00000000004DDA04 string=0x00000000004DDA08 ""
 *   insn=0x00000000004DDA44 string=0x00000000004DDA48 "fc"
 *   insn=0x00000000004DDA58 string=0x00000000004DDA5C "ac"
 *   insn=0x00000000004DDA70 string=0x00000000004DDA74 "\t"
 *   insn=0x00000000004DDA78 string=0x00000000004DDA7C "$"
 *   insn=0x00000000004DDA7C string=0x00000000004DDA80 ""
 *   insn=0x00000000004DDA94 string=0x00000000004DDA98 "nm"
 *   insn=0x00000000004DDA98 string=0x00000000004DDA9C "@R"
 *   insn=0x00000000004DDAB4 string=0x00000000004DDAB8 "zh"
 *   insn=0x00000000004DDAB8 string=0x00000000001F7CA0 "0'"
 *   insn=0x00000000004DDABC string=0x00000000004DDAC0 "Hc"
 *   insn=0x00000000004DDAD0 string=0x00000000004DDAD4 "Cc"
 *   insn=0x00000000004DDAD8 string=0x00000000004DDADC ""
 *   insn=0x00000000004DDAE8 string=0x00000000004DDAEC "\t"
 *   insn=0x00000000004DDAF0 string=0x00000000004DDAF4 "$"
 *   insn=0x00000000004DDAF4 string=0x00000000004DDAF8 ""
 *   insn=0x00000000004DDB30 string=0x00000000001FCB80 "0'"
 *   insn=0x00000000004DDB34 string=0x00000000004DDB38 "*c"
 *   insn=0x00000000004DDB40 string=0x00000000004DDB44 "n"
 *   insn=0x00000000004DDB48 string=0x00000000004DDB4C "%c"
 *   insn=0x00000000004DDB50 string=0x00000000004DDB54 "K"
 *   insn=0x00000000004DDB5C string=0x00000000004DDB60 "("
 *   insn=0x00000000004DDB8C string=0x00000000004DDB90 "L"
 *   insn=0x00000000004DDB90 string=0x00000000004DDB94 "Z"
 *   insn=0x00000000004DDBB0 string=0x00000000004DDBB4 "\t"
 *   insn=0x00000000004DDBB8 string=0x00000000004DDBBC "$"
 *   insn=0x00000000004DDBBC string=0x00000000004DDBC0 ""
 *   insn=0x00000000004DDBD4 string=0x00000000004DDBD8 "j"
 *   insn=0x00000000004DDBD8 string=0x00000000004DDBDC "@H"
 *   insn=0x00000000004DDBF8 string=0x00000000001F4B60 "P'"
 *   insn=0x00000000004DDC08 string=0x00000000004DDC0C "<"
 *   insn=0x00000000004DDC18 string=0x00000000004DDC1C ""
 *   insn=0x00000000004DDC20 string=0x00000000004DDC24 "?"
 *   insn=0x00000000004DDC28 string=0x00000000004DDC2C "("
 *   insn=0x00000000004DDC30 string=0x00000000004DDC34 ""
 *   insn=0x00000000004DDC34 string=0x00000000004DDC38 ")"
 *   insn=0x00000000004DDC78 string=0x00000000001FEFE0 "0'"
 *   insn=0x00000000004DDC98 string=0x00000000004DDC9C ""
 *   insn=0x00000000004DDCD4 string=0x00000000004DDCD8 "L"
 *   insn=0x00000000004DDCD8 string=0x00000000004DDCDC ""
 *   insn=0x00000000004DDCF8 string=0x00000000004DDCFC "@?"
 *   insn=0x00000000004DDD24 string=0x00000000004DDD28 "L"
 *   insn=0x00000000004DDD38 string=0x00000000004DDD3C ""
 *   insn=0x00000000004DDD40 string=0x00000000004DDD44 "?"
 *   insn=0x00000000004DDD48 string=0x00000000004DDD4C "("
 *   insn=0x00000000004DDD50 string=0x00000000004DDD54 ""
 *   insn=0x00000000004DDD54 string=0x00000000004DDD58 ")"
 *   insn=0x00000000004DDD7C string=0x00000000004DDD80 "\t"
 *   insn=0x00000000004DDD84 string=0x00000000004DDD88 "$"
 *   insn=0x00000000004DDD88 string=0x00000000004DDD8C "B"
 *   insn=0x00000000004DDD98 string=0x00000000004DDD9C "y{"
 *   insn=0x00000000004DDDCC string=0x00000000004DDDD0 "\t"
 *   insn=0x00000000004DDDD4 string=0x00000000004DDDD8 "7"
 *   insn=0x00000000004DDDD8 string=0x00000000004DDDDC ""
 *   insn=0x00000000004DDDF4 string=0x00000000004DDDF8 "`7"
 *   insn=0x00000000004DDE28 string=0x00000000001F9A80 "0'"
 *   insn=0x00000000004DDE2C string=0x00000000004DDE30 "lb"
 *   insn=0x00000000004DDE34 string=0x00000000004DDE38 "l"
 *   insn=0x00000000004DDE40 string=0x00000000004DDE44 "gb"
 *   insn=0x00000000004DDE54 string=0x00000000004DDE58 "j"
 *   insn=0x00000000004DDE58 string=0x00000000004DDE5C "@4"
 *   insn=0x00000000004DDE74 string=0x00000000004DDE78 ":["
 *   insn=0x00000000004DDE7C string=0x00000000004DDE80 "Xb"
 *   insn=0x00000000004DDE84 string=0x00000000004DDE88 "L"
 *   insn=0x00000000004DDE90 string=0x00000000004DDE94 "Sb"
 *   insn=0x00000000004DDE98 string=0x00000000004DDE9C ""
 *   insn=0x00000000004DDEA4 string=0x00000000004DDEA8 "*r"
 *   insn=0x00000000004DDEC4 string=0x00000000004DDEC8 "vg"
 *   insn=0x00000000004DDECC string=0x00000000004DDED0 "Db"
 *   insn=0x00000000004DDED4 string=0x00000000004DDED8 "L"
 *   insn=0x00000000004DDEE0 string=0x00000000004DDEE4 "?"
 *   insn=0x00000000004DDEE8 string=0x00000000004DDEEC "("
 *   insn=0x00000000004DDEF0 string=0x00000000004DDEF4 ""
 *   insn=0x00000000004DDEF4 string=0x00000000004DDEF8 ")"
 *   insn=0x00000000004DDF34 string=0x00000000004DDF38 """
 *   insn=0x00000000004DDF44 string=0x00000000004DE3C0 "xn"
 *   insn=0x00000000004DDF48 string=0x00000000001FC720 "0'"
 *   insn=0x00000000004DDF58 string=0x00000000004DDF5C "\t"
 *   insn=0x00000000004DDF5C string=0x00000000004DDF60 "i"
 *   insn=0x00000000004DDF60 string=0x00000000004DDF64 "$"
 *   insn=0x00000000004DDF64 string=0x00000000004DDF68 ""
 *   insn=0x00000000004DDF7C string=0x00000000004DDF80 "B"
 *   insn=0x00000000004DDF80 string=0x00000000004DDF84 "\t"
 *   insn=0x00000000004DDF84 string=0x00000000004DDF88 "\t"
 *   insn=0x00000000004DDF88 string=0x00000000004DDF8C "$"
 *   insn=0x00000000004DDF8C string=0x00000000004DDF90 ""
 *   insn=0x00000000004DDFA8 string=0x00000000004DDFAC "B"
 *   insn=0x00000000004DDFB4 string=0x00000000004DDFB8 "!"
 *   insn=0x00000000004DDFB8 string=0x00000000004DE3D8 "fd"
 *   insn=0x00000000004DDFBC string=0x00000000004DDFC0 ""
 *   insn=0x00000000004DDFBC string=0x00000000001F8370 "0'"
 *   insn=0x00000000004DDFCC string=0x00000000004DDFD0 "\t"
 *   insn=0x00000000004DDFD0 string=0x00000000004DDFD4 "i"
 *   insn=0x00000000004DDFD4 string=0x00000000004DDFD8 "$"
 *   insn=0x00000000004DDFD8 string=0x00000000004DDFDC ""
 *   insn=0x00000000004DDFF4 string=0x00000000004DDFF8 "`'"
 *   insn=0x00000000004DE01C string=0x00000000004DE020 "\t"
 *   insn=0x00000000004DE024 string=0x00000000004DE028 "$"
 *   insn=0x00000000004DE028 string=0x00000000004DE02C ""
 *   insn=0x00000000004DE03C string=0x00000000004DE040 "?"
 *   insn=0x00000000004DE040 string=0x00000000004DE044 "b"
 *   insn=0x00000000004DE044 string=0x00000000004DE048 "("
 *   insn=0x00000000004DE048 string=0x00000000004DE04C "("
 *   insn=0x00000000004DE04C string=0x00000000004DE050 ""
 *   insn=0x00000000004DE050 string=0x00000000004DE054 ")"
 *   insn=0x00000000004DE088 string=0x00000000004DE08C "H$"
 *   insn=0x00000000004DE090 string=0x00000000004DE094 "#"
 *   insn=0x00000000004DE09C string=0x00000000004DE0A0 "?"
 *   insn=0x00000000004DE0A0 string=0x00000000004DE0A4 "b"
 *   insn=0x00000000004DE0A4 string=0x00000000004DE0A8 "("
 *   insn=0x00000000004DE0A8 string=0x00000000004DE0AC "("
 *   insn=0x00000000004DE0AC string=0x00000000004DE0B0 ""
 *   insn=0x00000000004DE0B0 string=0x00000000004DE0B4 ")"
 *   insn=0x00000000004DE108 string=0x00000000004DE10C "\t"
 *   insn=0x00000000004DE10C string=0x00000000004DE110 "I"
 *   insn=0x00000000004DE110 string=0x00000000004DE114 "6"
 *   insn=0x00000000004DE114 string=0x00000000004DE118 ""
 *   insn=0x00000000004DE144 string=0x00000000004DE148 "("
 *   insn=0x00000000004DE158 string=0x00000000004DE15C "Al"
 *   insn=0x00000000004DE15C string=0x00000000001F9260 "0'"
 *   insn=0x00000000004DE16C string=0x00000000004DE170 "b"
 *   insn=0x00000000004DE17C string=0x00000000004DE180 "|h"
 *   insn=0x00000000004DE17C string=0x00000000004DE42C "Qd"
 *   insn=0x00000000004DE18C string=0x00000000004DE190 """
 *   insn=0x00000000004DE19C string=0x00000000004DE1A0 "`y"
 *   insn=0x00000000004DE19C string=0x00000000004DE4D0 "4n"
 *   insn=0x00000000004DE1C0 string=0x00000000004DE1C4 "\n"
 *   insn=0x00000000004DE1C8 string=0x00000000004DE1CC "D"
 *   insn=0x00000000004DE1CC string=0x00000000004DE1D0 """
 *   insn=0x00000000004DE1F4 string=0x00000000004DE1F8 "`"
 *   insn=0x00000000004DE208 string=0x00000000004DE20C "h"
 *   insn=0x00000000004DE21C string=0x00000000004DE220 "t~"
 *   insn=0x00000000004DE220 string=0x00000000004DE224 "t"
 *   insn=0x00000000004DE220 string=0x00000000001FDBF0 "0'"
 *   insn=0x00000000004DE244 string=0x00000000004DE248 "("
 *   insn=0x00000000004DE258 string=0x00000000004DE25C "f"
 *   insn=0x00000000004DE27C string=0x00000000004DE280 ""
 *   insn=0x00000000004DE28C string=0x00000000004DE290 "<z"
 *   insn=0x00000000004DE290 string=0x00000000004DE294 "X"
 *   insn=0x00000000004DE2C4 string=0x00000000004DE2C8 "&Z"
 *   insn=0x00000000004DE2C8 string=0x00000000004DE2CC "J"
 *   insn=0x00000000004DE2D4 string=0x00000000004DE2D8 "^k"
 *   insn=0x00000000004DE2D8 string=0x00000000004DE2DC "@"
 *   insn=0x00000000004DE304 string=0x00000000004DE308 "6"
 *   insn=0x00000000004DE308 string=0x00000000004DE30C ":"
 *   insn=0x00000000004DE318 string=0x00000000004DE31C "@"
 *   insn=0x00000000004DE328 string=0x00000000004DE32C "\n"
 *   insn=0x00000000004DE330 string=0x00000000004DE334 "D"
 *   insn=0x00000000004DE334 string=0x00000000004DE338 "B"
 *   insn=0x00000000004DE338 string=0x00000000004DE33C "I"
 *   insn=0x00000000004DE34C string=0x00000000004DE350 "t"
 *   insn=0x00000000004DE350 string=0x00000000004DE354 "("
 *   insn=0x00000000004DE350 string=0x00000000001FB370 "0'"
 *   insn=0x00000000004DE35C string=0x00000000004DE360 "<k"
 *   insn=0x00000000004DE374 string=0x00000000004DE378 "`"
 *   insn=0x00000000004DE3B0 string=0x00000000004DE3B4 ""
 *   insn=0x00000000004DE3C0 string=0x00000000001F9DA0 "0'"
 *   insn=0x00000000004DE3CC string=0x00000000004DE3D0 " "
 *   insn=0x00000000004DE3CC string=0x00000000001FC6E0 "0'"
 *   insn=0x00000000004DE3D0 string=0x00000000004DE3D4 "D"
 *   insn=0x00000000004DE3D8 string=0x00000000001F7570 "0'"
 *   insn=0x00000000004DE3DC string=0x00000000004DE3E0 "\n"
 *   insn=0x00000000004DE3EC string=0x00000000004DE3F0 ""
 *   insn=0x00000000004DE3F4 string=0x00000000004DE3F8 "!@"
 *   insn=0x00000000004DE3FC string=0x00000000004DE400 " "
 *   insn=0x00000000004DE404 string=0x00000000004DE408 ""
 *   insn=0x00000000004DE408 string=0x00000000004DE40C "K"
 *   insn=0x00000000004DE418 string=0x00000000004DE41C ")"
 *   insn=0x00000000004DE424 string=0x00000000004DE428 "/"
 *   insn=0x00000000004DE43C string=0x00000000004DE440 "\t"
 *   insn=0x00000000004DE444 string=0x00000000004DE448 ")"
 *   insn=0x00000000004DE448 string=0x00000000004DE44C ""
 *   insn=0x00000000004DE46C string=0x00000000004DE470 "\n"
 *   insn=0x00000000004DE478 string=0x00000000004DE47C "J"
 *   insn=0x00000000004DE484 string=0x00000000004DE488 ">"
 *   insn=0x00000000004DE488 string=0x00000000004DE48C "h"
 *   insn=0x00000000004DE498 string=0x00000000004DE49C "!@"
 *   insn=0x00000000004DE4B4 string=0x00000000004DE4B8 "V"
 *   insn=0x00000000004DE4BC string=0x00000000004DE4C0 ""
 *   insn=0x00000000004DE4DC string=0x00000000001F97D0 "0'"
 *   insn=0x00000000004DE500 string=0x00000000001FAB00 "0'"
 *   insn=0x00000000004DE50C string=0x00000000001F5330 "P'"
 *   insn=0x00000000004DE514 string=0x00000000004DE518 "JV"
 *   insn=0x00000000004DE518 string=0x00000000001F3E40 "P'"
 *   insn=0x00000000004DE524 string=0x00000000004DE528 "."
 *   insn=0x00000000004DE530 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004DE538 string=0x00000000004DE53C "-o"
 *   insn=0x00000000004DE558 string=0x00000000004DE55C "S"
 *   insn=0x00000000004DE55C string=0x00000000004DE560 "("
 *   insn=0x00000000004DE560 string=0x00000000004DE564 "J"
 *   insn=0x00000000004DE564 string=0x00000000004DE568 "uA"
 *   insn=0x00000000004DE568 string=0x00000000004DE56C "i"
 *   insn=0x00000000004DE56C string=0x00000000004DE570 "J"
 *   insn=0x00000000004DE570 string=0x00000000004DE574 "A"
 *   insn=0x00000000004DE578 string=0x00000000004DE57C "JA"
 *   insn=0x00000000004DE58C string=0x00000000004DE590 ","
 *   insn=0x00000000004DE590 string=0x00000000004DE594 "h"
 *   insn=0x00000000004DE5A0 string=0x00000000004DE5B8 "F_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall google::protobuf::internal::ExtensionSet::ParseField(
        google::protobuf::internal::ExtensionSet *this,
        unsigned int a2,
        google::protobuf::io::CodedInputStream *a3,
        google::protobuf::internal::ExtensionFinder *a4,
        google::protobuf::internal::FieldSkipper *a5)
{
  unsigned int v6; // w19
  int v9; // w9
  char *v10; // x8
  unsigned int v11; // w1
  int v13; // w22
  char *v14; // x9
  char *v15; // x8
  char *v16; // x8
  char *v17; // x8
  char *v18; // x8
  char *v19; // x9
  char *v20; // x9
  char *v21; // x8
  unsigned int v22; // w23
  char *v23; // x9
  char *v24; // x8
  char *v25; // x8
  __int64 v26; // x0
  char *v27; // x8
  char *v28; // x8
  char *v29; // x9
  char *v30; // x9
  char *v31; // x8
  unsigned int v32; // w22
  __int64 v33; // x0
  int v34; // w8
  int v35; // w9
  int v36; // w8
  bool v37; // vf
  int v38; // w8
  char *v39; // x8
  __int64 v40; // x19
  int v41; // w8
  int v42; // w9
  int v43; // w20
  int v44; // w8
  int v45; // w8
  _BYTE v46[36]; // [xsp+48h] [xbp-88h] BYREF
  unsigned int v47; // [xsp+6Ch] [xbp-64h] BYREF
  unsigned __int8 v48; // [xsp+70h] [xbp-60h] BYREF
  char v49; // [xsp+71h] [xbp-5Fh]
  char v50; // [xsp+72h] [xbp-5Eh]
  __int64 (__fastcall *v51)(__int64, _QWORD); // [xsp+78h] [xbp-58h]
  __int64 v52; // [xsp+80h] [xbp-50h]
  unsigned int v53[2]; // [xsp+90h] [xbp-40h] BYREF
  __int64 v54; // [xsp+98h] [xbp-38h]

  v6 = a2 >> 3;
  v54 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( ((*(__int64 (__fastcall **)(google::protobuf::internal::ExtensionFinder *, _QWORD, unsigned __int8 *))(*(_QWORD *)a4 + 16LL))(
          a4,
          a2 >> 3,
          &v48)
      & 1) == 0 )
    goto LABEL_9;
  v9 = a2 & 7;
  if ( v50 )
  {
    if ( v9 == 2 )
      goto LABEL_4;
LABEL_9:
    (*(void (__fastcall **)(google::protobuf::internal::FieldSkipper *, google::protobuf::io::CodedInputStream *, _QWORD))(*(_QWORD *)a5 + 16LL))(
      a5,
      a3,
      a2);
    return 1;
  }
  if ( v9 != google::protobuf::internal::WireFormatLite::kWireTypeForFieldType[v48] )
    goto LABEL_9;
LABEL_4:
  if ( !v50 )
  {
    switch ( v48 )
    {
      case 1u:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(a3, (unsigned __int64 *)v53) & 1) == 0 )
          return 0;
        if ( v49 )
          google::protobuf::internal::ExtensionSet::AddDouble();
        else
          google::protobuf::internal::ExtensionSet::SetDouble();
        return 1;
      case 2u:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a3, v53) & 1) == 0 )
          return 0;
        if ( v49 )
          google::protobuf::internal::ExtensionSet::AddFloat();
        else
          google::protobuf::internal::ExtensionSet::SetFloat();
        return 1;
      case 3u:
        v27 = (char *)*((_QWORD *)a3 + 1);
        if ( (unsigned __int64)v27 >= *((_QWORD *)a3 + 2) || *v27 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a3, (unsigned __int64 *)v53) & 1) == 0 )
            return 0;
        }
        else
        {
          *(_QWORD *)v53 = (unsigned __int8)*v27;
          *((_QWORD *)a3 + 1) = v27 + 1;
        }
        if ( v49 )
          goto LABEL_161;
        goto LABEL_170;
      case 4u:
        v28 = (char *)*((_QWORD *)a3 + 1);
        if ( (unsigned __int64)v28 >= *((_QWORD *)a3 + 2) || *v28 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a3, (unsigned __int64 *)v53) & 1) == 0 )
            return 0;
        }
        else
        {
          *(_QWORD *)v53 = (unsigned __int8)*v28;
          *((_QWORD *)a3 + 1) = v28 + 1;
        }
        if ( v49 )
LABEL_164:
          google::protobuf::internal::ExtensionSet::AddUInt64();
        else
LABEL_139:
          google::protobuf::internal::ExtensionSet::SetUInt64();
        return 1;
      case 5u:
        v24 = (char *)*((_QWORD *)a3 + 1);
        if ( (unsigned __int64)v24 >= *((_QWORD *)a3 + 2) || *v24 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a3, v53) & 1) == 0 )
            return 0;
        }
        else
        {
          v53[0] = (unsigned __int8)*v24;
          *((_QWORD *)a3 + 1) = v24 + 1;
        }
        if ( !v49 )
          goto LABEL_155;
        goto LABEL_152;
      case 6u:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(a3, (unsigned __int64 *)v53) & 1) == 0 )
          return 0;
        if ( !v49 )
          goto LABEL_139;
        goto LABEL_164;
      case 7u:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a3, v53) & 1) == 0 )
          return 0;
        if ( !v49 )
          goto LABEL_145;
        goto LABEL_158;
      case 8u:
        v29 = (char *)*((_QWORD *)a3 + 1);
        if ( (unsigned __int64)v29 >= *((_QWORD *)a3 + 2) || *v29 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a3, v53) & 1) == 0 )
            return 0;
        }
        else
        {
          v53[0] = (unsigned __int8)*v29;
          *((_QWORD *)a3 + 1) = v29 + 1;
        }
        if ( v49 )
          google::protobuf::internal::ExtensionSet::AddBool();
        else
          google::protobuf::internal::ExtensionSet::SetBool();
        return 1;
      case 9u:
        if ( v49 )
          google::protobuf::internal::ExtensionSet::AddString();
        else
          google::protobuf::internal::ExtensionSet::MutableString();
        return (google::protobuf::internal::WireFormatLite::ReadString(a3) & 1) != 0;
      case 0xAu:
        if ( v49 )
          google::protobuf::internal::ExtensionSet::AddMessage();
        else
          v26 = google::protobuf::internal::ExtensionSet::MutableMessage();
        v34 = *((_DWORD *)a3 + 14);
        v35 = *((_DWORD *)a3 + 15);
        *((_DWORD *)a3 + 14) = v34 + 1;
        if ( v34 >= v35
          || ((*(__int64 (__fastcall **)(__int64, google::protobuf::io::CodedInputStream *))(*(_QWORD *)v26 + 64LL))(
                v26,
                a3)
            & 1) == 0 )
        {
          return 0;
        }
        v36 = *((_DWORD *)a3 + 14);
        v37 = __OFSUB__(v36, 1);
        v38 = v36 - 1;
        if ( v38 < 0 == v37 )
          *((_DWORD *)a3 + 14) = v38;
        return *((_DWORD *)a3 + 8) == (a2 & 0xFFFFFFF8 | 4);
      case 0xBu:
        if ( v49 )
          google::protobuf::internal::ExtensionSet::AddMessage();
        else
          v33 = google::protobuf::internal::ExtensionSet::MutableMessage();
        v39 = (char *)*((_QWORD *)a3 + 1);
        v40 = v33;
        if ( (unsigned __int64)v39 >= *((_QWORD *)a3 + 2) || *v39 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a3, v53) & 1) == 0 )
            return 0;
        }
        else
        {
          v53[0] = (unsigned __int8)*v39;
          *((_QWORD *)a3 + 1) = v39 + 1;
        }
        v41 = *((_DWORD *)a3 + 14);
        v42 = *((_DWORD *)a3 + 15);
        *((_DWORD *)a3 + 14) = v41 + 1;
        if ( v41 >= v42 )
          return 0;
        v43 = google::protobuf::io::CodedInputStream::PushLimit(a3, v53[0]);
        if ( ((*(__int64 (__fastcall **)(__int64, google::protobuf::io::CodedInputStream *))(*(_QWORD *)v40 + 64LL))(
                v40,
                a3)
            & 1) == 0
          || !*((_BYTE *)a3 + 36) )
        {
          return 0;
        }
        google::protobuf::io::CodedInputStream::PopLimit(a3, v43);
        v44 = *((_DWORD *)a3 + 14);
        v37 = __OFSUB__(v44, 1);
        v45 = v44 - 1;
        if ( v45 < 0 == v37 )
          *((_DWORD *)a3 + 14) = v45;
        return 1;
      case 0xCu:
        if ( v49 )
          google::protobuf::internal::ExtensionSet::AddString();
        else
          google::protobuf::internal::ExtensionSet::MutableString();
        return (google::protobuf::internal::WireFormatLite::ReadBytes(a3) & 1) != 0;
      case 0xDu:
        v25 = (char *)*((_QWORD *)a3 + 1);
        if ( (unsigned __int64)v25 >= *((_QWORD *)a3 + 2) || *v25 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a3, v53) & 1) == 0 )
            return 0;
        }
        else
        {
          v53[0] = (unsigned __int8)*v25;
          *((_QWORD *)a3 + 1) = v25 + 1;
        }
        if ( v49 )
LABEL_158:
          google::protobuf::internal::ExtensionSet::AddUInt32();
        else
LABEL_145:
          google::protobuf::internal::ExtensionSet::SetUInt32();
        return 1;
      case 0xEu:
        v31 = (char *)*((_QWORD *)a3 + 1);
        if ( (unsigned __int64)v31 >= *((_QWORD *)a3 + 2) || *v31 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a3, v53) & 1) == 0 )
            return 0;
          v32 = v53[0];
        }
        else
        {
          v32 = (unsigned __int8)*v31;
          v53[0] = v32;
          *((_QWORD *)a3 + 1) = v31 + 1;
        }
        if ( (v51(v52, v32) & 1) != 0 )
        {
          if ( v49 )
            google::protobuf::internal::ExtensionSet::AddEnum();
          else
            google::protobuf::internal::ExtensionSet::SetEnum();
        }
        else
        {
          (*(void (__fastcall **)(google::protobuf::internal::FieldSkipper *, _QWORD, _QWORD))(*(_QWORD *)a5 + 32LL))(
            a5,
            v6,
            v32);
        }
        return 1;
      case 0xFu:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a3, v53) & 1) == 0 )
          return 0;
        if ( !v49 )
          goto LABEL_155;
        goto LABEL_152;
      case 0x10u:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(a3, (unsigned __int64 *)v53) & 1) == 0 )
          return 0;
        if ( !v49 )
          goto LABEL_170;
        goto LABEL_161;
      case 0x11u:
        v23 = (char *)*((_QWORD *)a3 + 1);
        if ( (unsigned __int64)v23 >= *((_QWORD *)a3 + 2) || *v23 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a3, v53) & 1) == 0 )
            return 0;
        }
        else
        {
          v53[0] = (unsigned __int8)*v23;
          *((_QWORD *)a3 + 1) = v23 + 1;
        }
        if ( v49 )
LABEL_152:
          google::protobuf::internal::ExtensionSet::AddInt32();
        else
LABEL_155:
          google::protobuf::internal::ExtensionSet::SetInt32();
        return 1;
      case 0x12u:
        v30 = (char *)*((_QWORD *)a3 + 1);
        if ( (unsigned __int64)v30 >= *((_QWORD *)a3 + 2) || *v30 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a3, (unsigned __int64 *)v53) & 1) == 0 )
            return 0;
        }
        else
        {
          *(_QWORD *)v53 = (unsigned __int8)*v30;
          *((_QWORD *)a3 + 1) = v30 + 1;
        }
        if ( v49 )
LABEL_161:
          google::protobuf::internal::ExtensionSet::AddInt64();
        else
LABEL_170:
          google::protobuf::internal::ExtensionSet::SetInt64();
        break;
      default:
        return 1;
    }
    return 1;
  }
  v10 = (char *)*((_QWORD *)a3 + 1);
  if ( (unsigned __int64)v10 < *((_QWORD *)a3 + 2) && (*v10 & 0x80000000) == 0 )
  {
    v11 = (unsigned __int8)*v10;
    v47 = v11;
    *((_QWORD *)a3 + 1) = v10 + 1;
LABEL_17:
    v13 = google::protobuf::io::CodedInputStream::PushLimit(a3, v11);
    switch ( v48 )
    {
      case 1u:
        if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) < 1 )
          goto LABEL_19;
        do
        {
          if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(a3, (unsigned __int64 *)v53) & 1) == 0 )
            return 0;
          google::protobuf::internal::ExtensionSet::AddDouble();
        }
        while ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) > 0 );
        goto LABEL_19;
      case 2u:
        if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) < 1 )
          goto LABEL_19;
        while ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a3, v53) & 1) != 0 )
        {
          google::protobuf::internal::ExtensionSet::AddFloat();
          if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) <= 0 )
            goto LABEL_19;
        }
        return 0;
      case 3u:
        if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) < 1 )
          goto LABEL_19;
        do
        {
          v17 = (char *)*((_QWORD *)a3 + 1);
          if ( (unsigned __int64)v17 >= *((_QWORD *)a3 + 2) || *v17 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a3, (unsigned __int64 *)v53) & 1) == 0 )
              return 0;
          }
          else
          {
            *(_QWORD *)v53 = (unsigned __int8)*v17;
            *((_QWORD *)a3 + 1) = v17 + 1;
          }
          google::protobuf::internal::ExtensionSet::AddInt64();
        }
        while ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) > 0 );
        goto LABEL_19;
      case 4u:
        if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) < 1 )
          goto LABEL_19;
        do
        {
          v18 = (char *)*((_QWORD *)a3 + 1);
          if ( (unsigned __int64)v18 >= *((_QWORD *)a3 + 2) || *v18 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a3, (unsigned __int64 *)v53) & 1) == 0 )
              return 0;
          }
          else
          {
            *(_QWORD *)v53 = (unsigned __int8)*v18;
            *((_QWORD *)a3 + 1) = v18 + 1;
          }
          google::protobuf::internal::ExtensionSet::AddUInt64();
        }
        while ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) > 0 );
        goto LABEL_19;
      case 5u:
        if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) < 1 )
          goto LABEL_19;
        do
        {
          v15 = (char *)*((_QWORD *)a3 + 1);
          if ( (unsigned __int64)v15 >= *((_QWORD *)a3 + 2) || *v15 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a3, v53) & 1) == 0 )
              return 0;
          }
          else
          {
            v53[0] = (unsigned __int8)*v15;
            *((_QWORD *)a3 + 1) = v15 + 1;
          }
          google::protobuf::internal::ExtensionSet::AddInt32();
        }
        while ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) > 0 );
        goto LABEL_19;
      case 6u:
        if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) < 1 )
          goto LABEL_19;
        while ( (google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(a3, (unsigned __int64 *)v53) & 1) != 0 )
        {
          google::protobuf::internal::ExtensionSet::AddUInt64();
          if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) <= 0 )
            goto LABEL_19;
        }
        return 0;
      case 7u:
        if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) < 1 )
          goto LABEL_19;
        while ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a3, v53) & 1) != 0 )
        {
          google::protobuf::internal::ExtensionSet::AddUInt32();
          if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) <= 0 )
            goto LABEL_19;
        }
        return 0;
      case 8u:
        if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) < 1 )
          goto LABEL_19;
        do
        {
          v19 = (char *)*((_QWORD *)a3 + 1);
          if ( (unsigned __int64)v19 >= *((_QWORD *)a3 + 2) || *v19 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a3, v53) & 1) == 0 )
              return 0;
          }
          else
          {
            v53[0] = (unsigned __int8)*v19;
            *((_QWORD *)a3 + 1) = v19 + 1;
          }
          google::protobuf::internal::ExtensionSet::AddBool();
        }
        while ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) > 0 );
        goto LABEL_19;
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
        google::protobuf::internal::LogMessage::LogMessage();
        google::protobuf::internal::LogMessage::operator<<((int)v46, "Non-primitive types can't be packed.");
        google::protobuf::internal::LogFinisher::operator=();
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v46);
        goto LABEL_19;
      case 0xDu:
        if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) < 1 )
          goto LABEL_19;
        do
        {
          v16 = (char *)*((_QWORD *)a3 + 1);
          if ( (unsigned __int64)v16 >= *((_QWORD *)a3 + 2) || *v16 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a3, v53) & 1) == 0 )
              return 0;
          }
          else
          {
            v53[0] = (unsigned __int8)*v16;
            *((_QWORD *)a3 + 1) = v16 + 1;
          }
          google::protobuf::internal::ExtensionSet::AddUInt32();
        }
        while ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) > 0 );
        goto LABEL_19;
      case 0xEu:
        if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) < 1 )
          goto LABEL_19;
        do
        {
          v21 = (char *)*((_QWORD *)a3 + 1);
          if ( (unsigned __int64)v21 >= *((_QWORD *)a3 + 2) || *v21 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a3, v53) & 1) == 0 )
              return 0;
            v22 = v53[0];
          }
          else
          {
            v22 = (unsigned __int8)*v21;
            v53[0] = v22;
            *((_QWORD *)a3 + 1) = v21 + 1;
          }
          if ( (v51(v52, v22) & 1) != 0 )
            google::protobuf::internal::ExtensionSet::AddEnum();
        }
        while ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) > 0 );
        goto LABEL_19;
      case 0xFu:
        if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) < 1 )
          goto LABEL_19;
        while ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a3, v53) & 1) != 0 )
        {
          google::protobuf::internal::ExtensionSet::AddInt32();
          if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) <= 0 )
            goto LABEL_19;
        }
        return 0;
      case 0x10u:
        if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) < 1 )
          goto LABEL_19;
        while ( (google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(a3, (unsigned __int64 *)v53) & 1) != 0 )
        {
          google::protobuf::internal::ExtensionSet::AddInt64();
          if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) <= 0 )
            goto LABEL_19;
        }
        return 0;
      case 0x11u:
        if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) < 1 )
          goto LABEL_19;
        do
        {
          v14 = (char *)*((_QWORD *)a3 + 1);
          if ( (unsigned __int64)v14 >= *((_QWORD *)a3 + 2) || *v14 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a3, v53) & 1) == 0 )
              return 0;
          }
          else
          {
            v53[0] = (unsigned __int8)*v14;
            *((_QWORD *)a3 + 1) = v14 + 1;
          }
          google::protobuf::internal::ExtensionSet::AddInt32();
        }
        while ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) > 0 );
        goto LABEL_19;
      case 0x12u:
        if ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) < 1 )
          goto LABEL_19;
        break;
      default:
        goto LABEL_19;
    }
    do
    {
      v20 = (char *)*((_QWORD *)a3 + 1);
      if ( (unsigned __int64)v20 >= *((_QWORD *)a3 + 2) || *v20 < 0 )
      {
        if ( (google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a3, (unsigned __int64 *)v53) & 1) == 0 )
          return 0;
      }
      else
      {
        *(_QWORD *)v53 = (unsigned __int8)*v20;
        *((_QWORD *)a3 + 1) = v20 + 1;
      }
      google::protobuf::internal::ExtensionSet::AddInt64();
    }
    while ( (int)google::protobuf::io::CodedInputStream::BytesUntilLimit(a3) > 0 );
LABEL_19:
    google::protobuf::io::CodedInputStream::PopLimit(a3, v13);
    return 1;
  }
  if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a3, &v47) & 1) != 0 )
  {
    v11 = v47;
    goto LABEL_17;
  }
  return 0;
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EA650
 * Mangled: _ZN5Caver5Proto13PlayerProfile27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::PlayerProfile::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 18
 *   0x00000000001F3F60  Caver::Proto::GameState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F5270  Caver::Proto::DateTime::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F7B50  Caver::Proto::PlayerProfile_Counter::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000001FF400  google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(ulong *)
 *   0x0000000000201340  Caver::Proto::DateTime::DateTime(void)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x00000000002EB050  Caver::Proto::PlayerProfile::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 284
 *   insn=0x00000000002EA684 string=0x00000000002EA688 "X"
 *   insn=0x00000000002EA688 string=0x00000000002EA68C "{"
 *   insn=0x00000000002EA68C string=0x00000000002EA690 "MD"
 *   insn=0x00000000002EA690 string=0x00000000002EA694 ")"
 *   insn=0x00000000002EA694 string=0x00000000002EA698 "J9C"
 *   insn=0x00000000002EA698 string=0x00000000002EA69C "k"
 *   insn=0x00000000002EA6A8 string=0x00000000002EA6AC " "
 *   insn=0x00000000002EA6AC string=0x00000000002EA6B0 "a"
 *   insn=0x00000000002EA6BC string=0x00000000002EA6C0 "@"
 *   insn=0x00000000002EA6C8 string=0x00000000002EA6CC ")"
 *   insn=0x00000000002EA6D0 string=0x00000000002EA6D4 "\n"
 *   insn=0x00000000002EA6DC string=0x000000000058B008 "<"
 *   insn=0x00000000002EA6E8 string=0x00000000002EA6EC "9#"
 *   insn=0x00000000002EA6EC string=0x00000000002EA6F0 ""
 *   insn=0x00000000002EA6F4 string=0x00000000002EA6F8 "kc"
 *   insn=0x00000000002EA6FC string=0x00000000002EA700 "<A"
 *   insn=0x00000000002EA70C string=0x00000000002EA710 ","
 *   insn=0x00000000002EA710 string=0x00000000002EAFC0 "h"
 *   insn=0x00000000002EA718 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002EA71C string=0x00000000002EA720 "a""
 *   insn=0x00000000002EA720 string=0x00000000002EA724 "!F"
 *   insn=0x00000000002EA724 string=0x00000000002EA728 "(|"
 *   insn=0x00000000002EA728 string=0x00000000002EA72C ""
 *   insn=0x00000000002EA734 string=0x00000000002EA738 "({"
 *   insn=0x00000000002EA734 string=0x00000000002EAA24 "("
 *   insn=0x00000000002EA738 string=0x00000000002EA73C ""
 *   insn=0x00000000002EA740 string=0x00000000002EA744 "("
 *   insn=0x00000000002EA740 string=0x00000000002EA7D8 "("
 *   insn=0x00000000002EA740 string=0x00000000002EA7E8 "("
 *   insn=0x00000000002EA740 string=0x00000000002EA7F8 "("
 *   insn=0x00000000002EA740 string=0x00000000002EA828 "("
 *   insn=0x00000000002EA740 string=0x00000000002EA838 "("
 *   insn=0x00000000002EA740 string=0x00000000002EA848 "("
 *   insn=0x00000000002EA740 string=0x00000000002EA85C "("
 *   insn=0x00000000002EA740 string=0x00000000002EA86C "("
 *   insn=0x00000000002EA740 string=0x00000000002EA9D0 "("
 *   insn=0x00000000002EA740 string=0x00000000002EA9E0 "("
 *   insn=0x00000000002EA740 string=0x00000000002EA9F4 "("
 *   insn=0x00000000002EA740 string=0x00000000002EAA04 "("
 *   insn=0x00000000002EA740 string=0x00000000002EAA14 "("
 *   insn=0x00000000002EA758 string=0x00000000002EA75C ")"
 *   insn=0x00000000002EA75C string=0x00000000002EA760 ""
 *   insn=0x00000000002EA764 string=0x00000000002EA768 "?"
 *   insn=0x00000000002EA774 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002EA77C string=0x00000000002EA780 "("
 *   insn=0x00000000002EA78C string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002EA790 string=0x00000000002EA794 "i"
 *   insn=0x00000000002EA794 string=0x00000000002EA798 "?"
 *   insn=0x00000000002EA798 string=0x00000000002EA79C ""A"
 *   insn=0x00000000002EA79C string=0x00000000002EA7A0 "*"
 *   insn=0x00000000002EA7A0 string=0x00000000002EA7A4 "_A"
 *   insn=0x00000000002EA7A8 string=0x00000000002EA7AC ")"
 *   insn=0x00000000002EA7AC string=0x00000000002EA7B0 "i"
 *   insn=0x00000000002EA7B0 string=0x00000000002EA7B4 "?"
 *   insn=0x00000000002EA7B4 string=0x00000000002EA7B8 "B"
 *   insn=0x00000000002EA7B8 string=0x00000000002EA7BC "*"
 *   insn=0x00000000002EA7BC string=0x00000000002EA7C0 "\n"
 *   insn=0x00000000002EA7C0 string=0x00000000002EA7C4 "J"
 *   insn=0x00000000002EA7C4 string=0x00000000002EA7C8 ")"
 *   insn=0x00000000002EA7CC string=0x00000000002EA7D0 "i"
 *   insn=0x00000000002EA7D0 string=0x00000000002EA7D4 "1"
 *   insn=0x00000000002EA7DC string=0x00000000002EA7E0 "A"
 *   insn=0x00000000002EA7F8 string=0x00000000002EA7FC "a"
 *   insn=0x00000000002EA7FC string=0x00000000002EA800 "i"
 *   insn=0x00000000002EA800 string=0x00000000002EA804 "?"
 *   insn=0x00000000002EA804 string=0x00000000002EA808 "b."
 *   insn=0x00000000002EA808 string=0x00000000002EA80C "*"
 *   insn=0x00000000002EA80C string=0x00000000002EA810 "*."
 *   insn=0x00000000002EA810 string=0x00000000002EA814 "J"
 *   insn=0x00000000002EA814 string=0x00000000002EA818 ")"
 *   insn=0x00000000002EA81C string=0x00000000002EA820 "i"
 *   insn=0x00000000002EA820 string=0x00000000002EA824 "r"
 *   insn=0x00000000002EA830 string=0x00000000002EA834 """
 *   insn=0x00000000002EA83C string=0x00000000002EA840 "A"
 *   insn=0x00000000002EA840 string=0x00000000002EA844 " "
 *   insn=0x00000000002EA854 string=0x00000000002EA858 ","
 *   insn=0x00000000002EA860 string=0x00000000002EA864 "!"
 *   insn=0x00000000002EA870 string=0x00000000002EA874 "i"
 *   insn=0x00000000002EA874 string=0x00000000002EA878 "?"
 *   insn=0x00000000002EA888 string=0x00000000002EA88C " ;"
 *   insn=0x00000000002EA888 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002EA890 string=0x00000000002EA894 "i"
 *   insn=0x00000000002EA89C string=0x00000000002EA8A0 "?"
 *   insn=0x00000000002EA8A0 string=0x00000000002EA8A4 "j"
 *   insn=0x00000000002EA8AC string=0x00000000002EA8B0 "("
 *   insn=0x00000000002EA8B4 string=0x00000000002EA8B8 "A8"
 *   insn=0x00000000002EA8B8 string=0x00000000002EA8BC "("
 *   insn=0x00000000002EA8BC string=0x00000000002EA8C0 "h"
 *   insn=0x00000000002EA8DC string=0x00000000002EA8E0 "("
 *   insn=0x00000000002EA8E4 string=0x00000000002EA8E8 "i"
 *   insn=0x00000000002EA8E8 string=0x00000000002EA8EC "?"
 *   insn=0x00000000002EA8F0 string=0x00000000002EA8F4 "*"
 *   insn=0x00000000002EA8F4 string=0x00000000002EA8F8 "_"
 *   insn=0x00000000002EA8F8 string=0x00000000002EA8FC "!6"
 *   insn=0x00000000002EA8FC string=0x00000000002EA900 ")"
 *   insn=0x00000000002EA900 string=0x00000000002EA904 "i"
 *   insn=0x00000000002EA908 string=0x00000000002EA90C ""
 *   insn=0x00000000002EA914 string=0x00000000002EA9A8 "h"
 *   insn=0x00000000002EA918 string=0x00000000002EA91C "1+"
 *   insn=0x00000000002EA944 string=0x00000000002EA948 "J"
 *   insn=0x00000000002EA960 string=0x00000000002EA964 ")"
 *   insn=0x00000000002EA984 string=0x00000000002EA988 ")aG"
 *   insn=0x00000000002EA9B0 string=0x00000000002EA9B4 "\t"
 *   insn=0x00000000002EA9B4 string=0x00000000002EA9B8 "I"
 *   insn=0x00000000002EA9B8 string=0x00000000002EA9BC ")"
 *   insn=0x00000000002EA9BC string=0x00000000002EA9C0 ""
 *   insn=0x00000000002EA9C4 string=0x00000000002EA9C8 "h"
 *   insn=0x00000000002EA9C8 string=0x00000000002EA9CC "!"
 *   insn=0x00000000002EA9CC string=0x00000000002EAA50 "h&G)\n"
 *   insn=0x00000000002EA9D8 string=0x00000000002EA9DC "T"
 *   insn=0x00000000002EA9F8 string=0x00000000002EA9FC "a"
 *   insn=0x00000000002EA9FC string=0x00000000002EAA00 "d"
 *   insn=0x00000000002EAA18 string=0x00000000002EAA1C "a"
 *   insn=0x00000000002EAA34 string=0x00000000002EAA38 "@,"
 *   insn=0x00000000002EAA34 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002EAA38 string=0x00000000002EAA3C "m"
 *   insn=0x00000000002EAA48 string=0x00000000002EAA4C " -"
 *   insn=0x00000000002EAA50 string=0x00000000002EAA54 "\n"
 *   insn=0x00000000002EAA58 string=0x00000000002EAA5C "j:"
 *   insn=0x00000000002EAA78 string=0x00000000002EAA7C "9%"
 *   insn=0x00000000002EAA7C string=0x00000000001F3F60 "P'"
 *   insn=0x00000000002EAA80 string=0x00000000002EAA84 "h"
 *   insn=0x00000000002EAA84 string=0x00000000002EAA88 "H+"
 *   insn=0x00000000002EAA94 string=0x00000000002EAA98 "h:@"
 *   insn=0x00000000002EAA98 string=0x00000000002EAA9C ""
 *   insn=0x00000000002EAA9C string=0x00000000002EAAA0 "K"
 *   insn=0x00000000002EAAA0 string=0x00000000002EAAA4 "h:"
 *   insn=0x00000000002EAAA0 string=0x00000000002EAAA8 "h"
 *   insn=0x00000000002EAAB0 string=0x00000000002EAAB4 "\t"
 *   insn=0x00000000002EAAB4 string=0x00000000002EAAB8 "?"
 *   insn=0x00000000002EAAB8 string=0x00000000002EAABC "!("
 *   insn=0x00000000002EAABC string=0x00000000002EAAC0 ""
 *   insn=0x00000000002EAAC0 string=0x00000000002EAAC4 "h"
 *   insn=0x00000000002EAAD0 string=0x00000000002EAAD4 ")"
 *   insn=0x00000000002EAAD4 string=0x00000000002EAAD8 ""
 *   insn=0x00000000002EAADC string=0x00000000002EAAE0 "?"
 *   insn=0x00000000002EAAF0 string=0x00000000002EAAF4 "hc"
 *   insn=0x00000000002EAAF4 string=0x00000000002EAAF8 "("
 *   insn=0x00000000002EAB00 string=0x00000000002EAB04 "3;"
 *   insn=0x00000000002EAB04 string=0x00000000002EAB08 "@'"
 *   insn=0x00000000002EAB08 string=0x00000000002EAB0C "h"
 *   insn=0x00000000002EAB10 string=0x00000000002EAB14 "b%"
 *   insn=0x00000000002EAB14 string=0x00000000002EAB18 "\t"
 *   insn=0x00000000002EAB18 string=0x00000000002EAB1C "?"
 *   insn=0x00000000002EAB20 string=0x00000000002EAB24 ""
 *   insn=0x00000000002EAB24 string=0x00000000002EAB28 "h"
 *   insn=0x00000000002EAB34 string=0x00000000002EAB38 ")QG"
 *   insn=0x00000000002EAB38 string=0x00000000002EAB3C ""
 *   insn=0x00000000002EAB40 string=0x00000000002EAB44 "?"
 *   insn=0x00000000002EAB54 string=0x00000000002EAB58 "hc"
 *   insn=0x00000000002EAB58 string=0x00000000002EAB5C "("
 *   insn=0x00000000002EAB68 string=0x00000000002EAB6C " $"
 *   insn=0x00000000002EAB6C string=0x00000000002EAB70 "h"
 *   insn=0x00000000002EAB74 string=0x00000000002EAB78 "B""
 *   insn=0x00000000002EAB78 string=0x00000000002EAB7C "\t"
 *   insn=0x00000000002EAB7C string=0x00000000002EAB80 "?"
 *   insn=0x00000000002EAB84 string=0x00000000002EAB88 ""
 *   insn=0x00000000002EAB88 string=0x00000000002EAB8C "h"
 *   insn=0x00000000002EAB98 string=0x00000000002EAB9C ")"
 *   insn=0x00000000002EAB9C string=0x00000000002EABA0 ""
 *   insn=0x00000000002EABA4 string=0x00000000002EABA8 "?"
 *   insn=0x00000000002EABB8 string=0x00000000002EABBC "hc"
 *   insn=0x00000000002EABBC string=0x00000000002EABC0 "("
 *   insn=0x00000000002EABD0 string=0x00000000002EABD4 "h"
 *   insn=0x00000000002EABD8 string=0x00000000002EABDC """
 *   insn=0x00000000002EABDC string=0x00000000002EABE0 "\t"
 *   insn=0x00000000002EABE0 string=0x00000000002EABE4 "?\t"
 *   insn=0x00000000002EABE8 string=0x00000000002EABEC ""
 *   insn=0x00000000002EABEC string=0x00000000002EABF0 "h"
 *   insn=0x00000000002EABFC string=0x00000000002EAC00 ")"
 *   insn=0x00000000002EAC00 string=0x00000000002EAC04 ""
 *   insn=0x00000000002EAC08 string=0x00000000002EAC0C "?"
 *   insn=0x00000000002EAC14 string=0x00000000002EAC18 "r*"
 *   insn=0x00000000002EAC1C string=0x00000000002EAC20 "hc"
 *   insn=0x00000000002EAC20 string=0x00000000002EAC24 "("
 *   insn=0x00000000002EAC34 string=0x00000000002EAC38 "h"
 *   insn=0x00000000002EAC40 string=0x00000000002EAC44 "\t"
 *   insn=0x00000000002EAC44 string=0x00000000002EAC48 "?)"
 *   insn=0x00000000002EAC4C string=0x00000000002EAC50 ""
 *   insn=0x00000000002EAC50 string=0x00000000002EAC54 "h"
 *   insn=0x00000000002EAC60 string=0x00000000002EAC64 ")Q@"
 *   insn=0x00000000002EAC64 string=0x00000000002EAC68 ""
 *   insn=0x00000000002EAC6C string=0x00000000002EAC70 "?"
 *   insn=0x00000000002EAC78 string=0x00000000002EAC7C "Y*"
 *   insn=0x00000000002EAC80 string=0x00000000002EAC84 "hc"
 *   insn=0x00000000002EAC84 string=0x00000000002EAC88 "("
 *   insn=0x00000000002EAC98 string=0x00000000002EAC9C "h"
 *   insn=0x00000000002EACA4 string=0x00000000002EACA8 "\t"
 *   insn=0x00000000002EACA8 string=0x00000000002EACAC "?I"
 *   insn=0x00000000002EACB0 string=0x00000000002EACB4 ""
 *   insn=0x00000000002EACB4 string=0x00000000002EACB8 "h"
 *   insn=0x00000000002EACC0 string=0x00000000002EACC4 ""
 *   insn=0x00000000002EACCC string=0x00000000002EACE4 "h"
 *   insn=0x00000000002EACD0 string=0x00000000002EACD4 "C*"
 *   insn=0x00000000002EACEC string=0x00000000002EACF0 "\t"
 *   insn=0x00000000002EACF4 string=0x00000000002EACF8 ")"
 *   insn=0x00000000002EACF8 string=0x00000000002EACFC ""
 *   insn=0x00000000002EAD00 string=0x00000000002EAD04 "h"
 *   insn=0x00000000002EAD08 string=0x00000000002EAD1C "h&G)\n"
 *   insn=0x00000000002EAD1C string=0x00000000002EAD20 "\n"
 *   insn=0x00000000002EAD24 string=0x00000000002EAD28 "j:"
 *   insn=0x00000000002EAD28 string=0x00000000002EAD2C "*"
 *   insn=0x00000000002EAD44 string=0x00000000002EAD48 "J)"
 *   insn=0x00000000002EAD48 string=0x00000000002EAD4C " "
 *   insn=0x00000000002EAD48 string=0x00000000001F5270 "P'"
 *   insn=0x00000000002EAD4C string=0x00000000002EAD50 "h"
 *   insn=0x00000000002EAD5C string=0x00000000002EAD60 ",`"
 *   insn=0x00000000002EAD60 string=0x00000000002EAD64 "h:@"
 *   insn=0x00000000002EAD64 string=0x00000000002EAD68 ""
 *   insn=0x00000000002EAD68 string=0x00000000002EAD6C "K"
 *   insn=0x00000000002EAD6C string=0x00000000002EAD70 "h:"
 *   insn=0x00000000002EAD6C string=0x00000000002EAD74 "h"
 *   insn=0x00000000002EAD78 string=0x00000000002EAD7C """
 *   insn=0x00000000002EAD7C string=0x00000000002EAD80 "\t"
 *   insn=0x00000000002EAD80 string=0x00000000002EAD84 "?u"
 *   insn=0x00000000002EAD88 string=0x00000000002EAD8C ""
 *   insn=0x00000000002EAD8C string=0x00000000002EAD90 "h"
 *   insn=0x00000000002EAD98 string=0x00000000002EAD9C "m>"
 *   insn=0x00000000002EAD9C string=0x00000000001FA750 "0'"
 *   insn=0x00000000002EADAC string=0x00000000002EADB0 "("
 *   insn=0x00000000002EADB4 string=0x00000000002EADB8 "i"
 *   insn=0x00000000002EADB8 string=0x00000000002EADBC "?"
 *   insn=0x00000000002EADC0 string=0x00000000002EADC4 "("
 *   insn=0x00000000002EADCC string=0x00000000002EADD0 "*"
 *   insn=0x00000000002EADD0 string=0x00000000002EAE78 "("
 *   insn=0x00000000002EADE4 string=0x00000000002EADE8 "i"
 *   insn=0x00000000002EADEC string=0x00000000002EADF0 "_"
 *   insn=0x00000000002EADF8 string=0x00000000002EADFC "j"
 *   insn=0x00000000002EADFC string=0x00000000002EAE00 "?"
 *   insn=0x00000000002EAE08 string=0x00000000002EAE0C "("
 *   insn=0x00000000002EAE10 string=0x00000000002EAE14 "a"
 *   insn=0x00000000002EAE14 string=0x00000000002EAE18 "("
 *   insn=0x00000000002EAE18 string=0x00000000002EAE1C "h"
 *   insn=0x00000000002EAE24 string=0x00000000002EAE28 ")uF"
 *   insn=0x00000000002EAE28 string=0x00000000002EAE2C "H"
 *   insn=0x00000000002EAE30 string=0x00000000002EAE34 "?"
 *   insn=0x00000000002EAE44 string=0x00000000002EAE48 "hc"
 *   insn=0x00000000002EAE48 string=0x00000000002EAE4C "("
 *   insn=0x00000000002EAE54 string=0x00000000002EAE58 "^:"
 *   insn=0x00000000002EAE5C string=0x00000000002EAE60 "h"
 *   insn=0x00000000002EAE68 string=0x00000000002EAE6C "h.@"
 *   insn=0x00000000002EAE70 string=0x00000000002EAE74 "m"
 *   insn=0x00000000002EAE78 string=0x00000000002EAE7C "h"
 *   insn=0x00000000002EAEA0 string=0x00000000002EAEF8 "h"
 *   insn=0x00000000002EAEAC string=0x00000000002EAEC0 ""
 *   insn=0x00000000002EAEB8 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002EAEDC string=0x00000000002EAEE0 ""
 *   insn=0x00000000002EAF00 string=0x00000000002EAF04 "\t"
 *   insn=0x00000000002EAF08 string=0x00000000002EAF0C ")"
 *   insn=0x00000000002EAF0C string=0x00000000002EAF10 ""
 *   insn=0x00000000002EAF14 string=0x00000000002EAF18 "h"
 *   insn=0x00000000002EAF1C string=0x00000000002EAF30 "h&G)\n"
 *   insn=0x00000000002EAF24 string=0x00000000002EAF28 "J8"
 *   insn=0x00000000002EAF28 string=0x00000000002EAF2C " "
 *   insn=0x00000000002EAF30 string=0x00000000002EAF34 "\n"
 *   insn=0x00000000002EAF38 string=0x00000000002EAF3C "j:"
 *   insn=0x00000000002EAF5C string=0x00000000001F7B50 "0'"
 *   insn=0x00000000002EAF60 string=0x00000000002EAF64 "h"
 *   insn=0x00000000002EAF64 string=0x00000000002EAF68 "H"
 *   insn=0x00000000002EAF74 string=0x00000000002EAF78 "h:@"
 *   insn=0x00000000002EAF78 string=0x00000000002EAF7C ""
 *   insn=0x00000000002EAF7C string=0x00000000002EAF80 "K"
 *   insn=0x00000000002EAF80 string=0x00000000002EAF84 "h:"
 *   insn=0x00000000002EAF80 string=0x00000000002EAF88 "i"
 *   insn=0x00000000002EAF88 string=0x00000000002EAF8C "?"
 *   insn=0x00000000002EAF90 string=0x00000000002EAF94 "*"
 *   insn=0x00000000002EAF94 string=0x00000000002EAF98 "_"
 *   insn=0x00000000002EAF9C string=0x00000000002EAFA0 "*"
 *   insn=0x00000000002EAFA0 string=0x00000000002EAFA4 "_"
 *   insn=0x00000000002EAFA8 string=0x00000000002EAFAC ")"
 *   insn=0x00000000002EAFAC string=0x00000000002EAFB0 "i"
 *   insn=0x00000000002EAFB0 string=0x00000000002EAFB4 "?"
 *   insn=0x00000000002EAFC4 string=0x00000000002EAFC8 "b"
 *   insn=0x00000000002EAFC8 string=0x00000000002EAFCC "\t"
 *   insn=0x00000000002EAFCC string=0x00000000002EAFD0 ")"
 *   insn=0x00000000002EAFD0 string=0x00000000002EAFD4 "!"
 *   insn=0x00000000002EAFD4 string=0x00000000002EAFD8 ""
 *   insn=0x00000000002EAFD8 string=0x00000000002EAFDC "a""
 *   insn=0x00000000002EAFDC string=0x00000000002EAFE0 "h"
 *   insn=0x00000000002EAFE0 string=0x00000000002EAFE4 "!"
 *   insn=0x00000000002EAFEC string=0x00000000002EAFF4 ""
 *   insn=0x00000000002EB02C string=0x00000000002EB030 "`"
 *   insn=0x00000000002EB038 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002EB044 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PlayerProfile::MergePartialFromCodedStream(
        Caver::Proto::PlayerProfile *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  __int128 v3; // q0
  __int128 v4; // q1
  __int128 v6; // q2
  google::protobuf::internal::RepeatedPtrFieldBase *v8; // x21
  unsigned int TagFallback; // w0
  unsigned __int64 v10; // x1
  int v11; // w8
  __int64 *v12; // x1
  _QWORD *v13; // x0
  unsigned __int64 v14; // x8
  _BYTE *v15; // x9
  char *v16; // x9
  unsigned int v17; // w10
  _BYTE *v18; // x9
  unsigned __int64 v19; // x8
  char *v20; // x9
  unsigned int v21; // w10
  _BYTE *v22; // x9
  int v23; // w8
  int v24; // w11
  int v25; // w9
  _BYTE *v26; // x9
  __int64 v27; // x22
  char *v28; // x8
  int v29; // w10
  int v30; // w8
  int v31; // w9
  int v32; // w23
  int v33; // w8
  bool v34; // vf
  int v35; // w8
  _BYTE *v36; // x8
  __int64 *v37; // x1
  _QWORD *v38; // x0
  _BYTE *v39; // x8
  __int64 *v40; // x1
  _QWORD *v41; // x0
  _BYTE *v42; // x8
  __int64 *v43; // x1
  _QWORD *v44; // x0
  _BYTE *v45; // x8
  __int64 *v46; // x1
  _QWORD *v47; // x0
  _BYTE *v48; // x8
  __int64 *v49; // x1
  _QWORD *v50; // x0
  _BYTE *v51; // x8
  Caver::Proto::DateTime *v52; // x22
  char *v53; // x8
  int v54; // w8
  int v55; // w9
  int v56; // w23
  int v57; // w8
  int v58; // w8
  _BYTE *v59; // x8
  int v60; // w9
  _BYTE *v61; // x9
  int v62; // w11
  __int64 *v63; // x1
  _QWORD *v64; // x0
  int v65; // w8
  int v66; // w23
  __int64 v67; // x8
  __int64 v68; // x22
  __int64 v69; // x8
  char *v70; // x8
  int v71; // w8
  int v72; // w9
  int v73; // w23
  int v74; // w8
  int v75; // w8
  char *v76; // x8
  __int64 result; // x0
  __int128 v78; // [xsp+10h] [xbp-A0h]
  __int128 v79; // [xsp+20h] [xbp-90h]
  __int128 v80; // [xsp+30h] [xbp-80h]
  unsigned int v81[2]; // [xsp+40h] [xbp-70h] BYREF
  __int64 v82; // [xsp+48h] [xbp-68h]

  *(_QWORD *)&v3 = &Caver::Proto::GameState::_default_current_spawn_point_;
  *(_QWORD *)&v4 = &Caver::Proto::GameState::_default_current_map_node_name_;
  *((_QWORD *)&v3 + 1) = &Caver::Proto::GameState::_default_previous_portal_level_;
  *((_QWORD *)&v4 + 1) = &Caver::Proto::GameState::_default_carried_object_template_;
  v79 = v4;
  v80 = v3;
  *(_QWORD *)&v6 = &Caver::Proto::GameState::_default_flashing_item_name_;
  v8 = (Caver::Proto::PlayerProfile *)((char *)this + 96);
  *((_QWORD *)&v6 + 1) = &Caver::Proto::GameState::_default_flashing_skill_name_;
  v78 = v6;
  v82 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
LABEL_147:
  while ( 2 )
  {
    v76 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v76 >= *((_QWORD *)a2 + 2) || *v76 < 0 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v10 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( !TagFallback )
        return 1;
    }
    else
    {
      v10 = (unsigned __int8)*v76;
      *((_DWORD *)a2 + 8) = v10;
      *((_QWORD *)a2 + 1) = v76 + 1;
      if ( !(_DWORD)v10 )
        return 1;
    }
    switch ( (unsigned int)v10 >> 3 )
    {
      case 1u:
        v11 = v10 & 7;
        if ( v11 != 2 )
          goto LABEL_56;
        v12 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 42) |= 1u;
        if ( v12 == &Caver::Proto::PlayerProfile::_default_name_ )
        {
          v13 = (_QWORD *)operator new(8u);
          *v13 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v13;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v15 = (_BYTE *)*((_QWORD *)a2 + 1);
        v14 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v15 >= v14 || *v15 != 16 )
          continue;
        v16 = v15 + 1;
        *((_QWORD *)a2 + 1) = v16;
        if ( (unsigned __int64)v16 >= v14 )
          goto LABEL_31;
        goto LABEL_11;
      case 2u:
        v11 = v10 & 7;
        if ( (v10 & 7) != 0 )
          goto LABEL_56;
        v16 = (char *)*((_QWORD *)a2 + 1);
        v14 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v16 >= v14 )
          goto LABEL_31;
LABEL_11:
        if ( *v16 < 0 )
        {
LABEL_31:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v81) & 1) == 0 )
            return 0;
          v17 = v81[0];
          v18 = (_BYTE *)*((_QWORD *)a2 + 1);
          v14 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v17 = (unsigned __int8)*v16;
          v18 = v16 + 1;
          v81[0] = v17;
          *((_QWORD *)a2 + 1) = v18;
        }
        v24 = *((_DWORD *)this + 42);
        *((_DWORD *)this + 10) = v17;
        *((_DWORD *)this + 42) = v24 | 8;
        if ( (unsigned __int64)v18 >= v14 || *v18 != 25 )
          continue;
        *((_QWORD *)a2 + 1) = v18 + 1;
LABEL_36:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(a2, (unsigned __int64 *)v81) & 1) == 0 )
          return 0;
        v25 = *((_DWORD *)this + 42);
        *((_QWORD *)this + 6) = *(_QWORD *)v81;
        v23 = v25 | 0x20;
        *((_DWORD *)this + 42) = v25 | 0x20;
        v26 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v26 >= *((_QWORD *)a2 + 2) || *v26 != 34 )
          continue;
        *((_QWORD *)a2 + 1) = v26 + 1;
LABEL_40:
        v27 = *((_QWORD *)this + 7);
        *((_DWORD *)this + 42) = v23 | 0x40;
        if ( !v27 )
        {
          v27 = operator new(0x120u);
          *(_QWORD *)v27 = off_6C6F88;
          *(_QWORD *)(v27 + 32) = 0;
          *(_DWORD *)(v27 + 40) = 4;
          *(_QWORD *)(v27 + 16) = 0;
          *(_QWORD *)(v27 + 24) = v27 + 48;
          *(_QWORD *)(v27 + 136) = 0;
          *(_DWORD *)(v27 + 144) = 4;
          *(_QWORD *)(v27 + 232) = 0;
          *(_DWORD *)(v27 + 240) = 4;
          *(_QWORD *)(v27 + 120) = &Caver::Proto::GameState::_default_carried_object_identifier_;
          *(_QWORD *)(v27 + 128) = v27 + 152;
          *(_DWORD *)(v27 + 8) = 0;
          *(_QWORD *)(v27 + 184) = 0;
          *(_QWORD *)(v27 + 80) = &Caver::Proto::GameState::_default_current_level_;
          *(_OWORD *)(v27 + 88) = v80;
          *(_OWORD *)(v27 + 104) = v79;
          *(_WORD *)(v27 + 200) = 0;
          *(_QWORD *)(v27 + 280) = 0;
          *(_QWORD *)(v27 + 192) = &Caver::Proto::GameState::_default_selected_menu_tab_;
          *(_OWORD *)(v27 + 208) = v78;
          *(_QWORD *)(v27 + 224) = v27 + 248;
          *((_QWORD *)this + 7) = v27;
        }
        v28 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v28 >= *((_QWORD *)a2 + 2) || *v28 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v81) & 1) == 0 )
            return 0;
        }
        else
        {
          v81[0] = (unsigned __int8)*v28;
          *((_QWORD *)a2 + 1) = v28 + 1;
        }
        v30 = *((_DWORD *)a2 + 14);
        v31 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v30 + 1;
        if ( v30 >= v31 )
          return 0;
        v32 = google::protobuf::io::CodedInputStream::PushLimit(a2, v81[0]);
        if ( (Caver::Proto::GameState::MergePartialFromCodedStream((Caver::Proto::GameState *)v27, a2) & 1) == 0
          || !*((_BYTE *)a2 + 36) )
        {
          return 0;
        }
        google::protobuf::io::CodedInputStream::PopLimit(a2, v32);
        v33 = *((_DWORD *)a2 + 14);
        v34 = __OFSUB__(v33, 1);
        v35 = v33 - 1;
        if ( v35 < 0 == v34 )
          *((_DWORD *)a2 + 14) = v35;
        v36 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v36 >= *((_QWORD *)a2 + 2) || *v36 != 42 )
          continue;
        *((_QWORD *)a2 + 1) = v36 + 1;
LABEL_68:
        v37 = (__int64 *)*((_QWORD *)this + 8);
        *((_DWORD *)this + 42) |= 0x80u;
        if ( v37 == &Caver::Proto::PlayerProfile::_default_equipped_weapon_name_ )
        {
          v38 = (_QWORD *)operator new(8u);
          *v38 = &byte_6FD2F8;
          *((_QWORD *)this + 8) = v38;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v39 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v39 >= *((_QWORD *)a2 + 2) || *v39 != 50 )
          continue;
        *((_QWORD *)a2 + 1) = v39 + 1;
LABEL_74:
        v40 = (__int64 *)*((_QWORD *)this + 9);
        *((_DWORD *)this + 42) |= 0x100u;
        if ( v40 == &Caver::Proto::PlayerProfile::_default_equipped_armor_name_ )
        {
          v41 = (_QWORD *)operator new(8u);
          *v41 = &byte_6FD2F8;
          *((_QWORD *)this + 9) = v41;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v42 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v42 >= *((_QWORD *)a2 + 2) || *v42 != 58 )
          continue;
        *((_QWORD *)a2 + 1) = v42 + 1;
LABEL_80:
        v43 = (__int64 *)*((_QWORD *)this + 10);
        *((_DWORD *)this + 42) |= 0x200u;
        if ( v43 == &Caver::Proto::PlayerProfile::_default_weapon_trinket_name_ )
        {
          v44 = (_QWORD *)operator new(8u);
          *v44 = &byte_6FD2F8;
          *((_QWORD *)this + 10) = v44;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v45 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v45 >= *((_QWORD *)a2 + 2) || *v45 != 66 )
          continue;
        *((_QWORD *)a2 + 1) = v45 + 1;
LABEL_86:
        v46 = (__int64 *)*((_QWORD *)this + 11);
        *((_DWORD *)this + 42) |= 0x400u;
        if ( v46 == &Caver::Proto::PlayerProfile::_default_armor_trinket_name_ )
        {
          v47 = (_QWORD *)operator new(8u);
          *v47 = &byte_6FD2F8;
          *((_QWORD *)this + 11) = v47;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v48 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v48 >= *((_QWORD *)a2 + 2) || *v48 != 74 )
          continue;
        *((_QWORD *)a2 + 1) = v48 + 1;
LABEL_92:
        v49 = (__int64 *)*((_QWORD *)this + 4);
        *((_DWORD *)this + 42) |= 4u;
        if ( v49 == &Caver::Proto::PlayerProfile::_default_current_level_title_ )
        {
          v50 = (_QWORD *)operator new(8u);
          *v50 = &byte_6FD2F8;
          *((_QWORD *)this + 4) = v50;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v51 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v51 >= *((_QWORD *)a2 + 2) || *v51 != 82 )
          continue;
        *((_QWORD *)a2 + 1) = v51 + 1;
LABEL_98:
        v52 = (Caver::Proto::DateTime *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 42) |= 2u;
        if ( !v52 )
        {
          v52 = (Caver::Proto::DateTime *)operator new(0x20u);
          Caver::Proto::DateTime::DateTime(v52);
          *((_QWORD *)this + 3) = v52;
        }
        v53 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v53 >= *((_QWORD *)a2 + 2) || *v53 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v81) & 1) == 0 )
            return 0;
        }
        else
        {
          v81[0] = (unsigned __int8)*v53;
          *((_QWORD *)a2 + 1) = v53 + 1;
        }
        v54 = *((_DWORD *)a2 + 14);
        v55 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v54 + 1;
        if ( v54 >= v55 )
          return 0;
        v56 = google::protobuf::io::CodedInputStream::PushLimit(a2, v81[0]);
        if ( (Caver::Proto::DateTime::MergePartialFromCodedStream(v52, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v56);
        v57 = *((_DWORD *)a2 + 14);
        v34 = __OFSUB__(v57, 1);
        v58 = v57 - 1;
        if ( v58 < 0 == v34 )
          *((_DWORD *)a2 + 14) = v58;
        v59 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v59 >= *((_QWORD *)a2 + 2) || *v59 != 93 )
          continue;
        *((_QWORD *)a2 + 1) = v59 + 1;
LABEL_112:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, v81) & 1) == 0 )
          return 0;
        v60 = *((_DWORD *)this + 42);
        *((_DWORD *)this + 11) = v81[0];
        *((_DWORD *)this + 42) = v60 | 0x10;
        v61 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v61 >= *((_QWORD *)a2 + 2) || *v61 != 98 )
          continue;
        do
        {
          *((_QWORD *)a2 + 1) = v61 + 1;
LABEL_128:
          v66 = *((_DWORD *)this + 26);
          v65 = *((_DWORD *)this + 27);
          if ( v66 >= v65 )
          {
            if ( v65 == *((_DWORD *)this + 28) )
            {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v8, v65 + 1);
              v66 = *((_DWORD *)this + 26);
              v65 = *((_DWORD *)this + 27);
            }
            *((_DWORD *)this + 27) = v65 + 1;
            v68 = operator new(0x20u);
            *(_QWORD *)v68 = off_6C6D30;
            *(_DWORD *)(v68 + 8) = 0;
            *(_QWORD *)(v68 + 16) = &Caver::Proto::PlayerProfile_Counter::_default_name_;
            *(_QWORD *)(v68 + 24) = 0;
            v69 = *((_QWORD *)this + 12);
            *((_DWORD *)this + 26) = v66 + 1;
            *(_QWORD *)(v69 + 8LL * v66) = v68;
          }
          else
          {
            v67 = *((_QWORD *)this + 12);
            *((_DWORD *)this + 26) = v66 + 1;
            v68 = *(_QWORD *)(v67 + 8LL * v66);
          }
          v70 = (char *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v70 >= *((_QWORD *)a2 + 2) || *v70 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v81) & 1) == 0 )
              return 0;
          }
          else
          {
            v81[0] = (unsigned __int8)*v70;
            *((_QWORD *)a2 + 1) = v70 + 1;
          }
          v71 = *((_DWORD *)a2 + 14);
          v72 = *((_DWORD *)a2 + 15);
          *((_DWORD *)a2 + 14) = v71 + 1;
          if ( v71 >= v72 )
            return 0;
          v73 = google::protobuf::io::CodedInputStream::PushLimit(a2, v81[0]);
          if ( (Caver::Proto::PlayerProfile_Counter::MergePartialFromCodedStream(
                  (Caver::Proto::PlayerProfile_Counter *)v68,
                  a2)
              & 1) == 0
            || !*((_BYTE *)a2 + 36) )
          {
            return 0;
          }
          google::protobuf::io::CodedInputStream::PopLimit(a2, v73);
          v74 = *((_DWORD *)a2 + 14);
          v34 = __OFSUB__(v74, 1);
          v75 = v74 - 1;
          if ( v75 < 0 == v34 )
            *((_DWORD *)a2 + 14) = v75;
          v61 = (_BYTE *)*((_QWORD *)a2 + 1);
          v19 = *((_QWORD *)a2 + 2);
          if ( (unsigned __int64)v61 >= v19 )
            goto LABEL_147;
        }
        while ( *v61 == 98 );
        if ( *v61 != 104 )
          continue;
        v20 = v61 + 1;
        *((_QWORD *)a2 + 1) = v20;
        if ( (unsigned __int64)v20 >= v19 )
          goto LABEL_116;
LABEL_19:
        if ( *v20 < 0 )
        {
LABEL_116:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v81) & 1) == 0 )
            return 0;
          v21 = v81[0];
          v22 = (_BYTE *)*((_QWORD *)a2 + 1);
          v19 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v21 = (unsigned __int8)*v20;
          v22 = v20 + 1;
          v81[0] = v21;
          *((_QWORD *)a2 + 1) = v22;
        }
        v62 = *((_DWORD *)this + 42);
        *((_BYTE *)this + 152) = v21 != 0;
        v29 = v62 | 0x1000;
        *((_DWORD *)this + 42) = v62 | 0x1000;
        if ( (unsigned __int64)v22 >= v19 || *v22 != 114 )
          continue;
        *((_QWORD *)a2 + 1) = v22 + 1;
LABEL_121:
        v63 = (__int64 *)*((_QWORD *)this + 20);
        *((_DWORD *)this + 42) = v29 | 0x2000;
        if ( v63 == &Caver::Proto::PlayerProfile::_default_identifier_ )
        {
          v64 = (_QWORD *)operator new(8u);
          *v64 = &byte_6FD2F8;
          *((_QWORD *)this + 20) = v64;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) != 0 )
        {
          if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
          {
            result = 1;
            *((_DWORD *)a2 + 8) = 0;
            *((_BYTE *)a2 + 36) = 1;
            return result;
          }
          continue;
        }
        return 0;
      case 3u:
        v11 = v10 & 7;
        if ( v11 == 1 )
          goto LABEL_36;
        goto LABEL_56;
      case 4u:
        v11 = v10 & 7;
        if ( v11 != 2 )
          goto LABEL_56;
        v23 = *((_DWORD *)this + 42);
        goto LABEL_40;
      case 5u:
        v11 = v10 & 7;
        if ( v11 == 2 )
          goto LABEL_68;
        goto LABEL_56;
      case 6u:
        v11 = v10 & 7;
        if ( v11 == 2 )
          goto LABEL_74;
        goto LABEL_56;
      case 7u:
        v11 = v10 & 7;
        if ( v11 == 2 )
          goto LABEL_80;
        goto LABEL_56;
      case 8u:
        v11 = v10 & 7;
        if ( v11 == 2 )
          goto LABEL_86;
        goto LABEL_56;
      case 9u:
        v11 = v10 & 7;
        if ( v11 == 2 )
          goto LABEL_92;
        goto LABEL_56;
      case 0xAu:
        v11 = v10 & 7;
        if ( v11 == 2 )
          goto LABEL_98;
        goto LABEL_56;
      case 0xBu:
        v11 = v10 & 7;
        if ( v11 == 5 )
          goto LABEL_112;
        goto LABEL_56;
      case 0xCu:
        v11 = v10 & 7;
        if ( v11 == 2 )
          goto LABEL_128;
        goto LABEL_56;
      case 0xDu:
        v11 = v10 & 7;
        if ( (v10 & 7) != 0 )
          goto LABEL_56;
        v20 = (char *)*((_QWORD *)a2 + 1);
        v19 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v20 < v19 )
          goto LABEL_19;
        goto LABEL_116;
      case 0xEu:
        v11 = v10 & 7;
        if ( v11 != 2 )
          goto LABEL_56;
        v29 = *((_DWORD *)this + 42);
        goto LABEL_121;
      default:
        v11 = v10 & 7;
LABEL_56:
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
  }
}


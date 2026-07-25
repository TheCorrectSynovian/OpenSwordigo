/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FE598
 * Mangled: _ZN5Caver5Proto11SceneObject27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::SceneObject::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F33F0  Caver::Proto::SceneObject::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 20
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5710  Caver::Proto::Vector2::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001F8D20  Caver::Proto::Program::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001F9860  Caver::Proto::Rectangle::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FB070  Caver::Proto::Rectangle::Rectangle(void)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000001FDEF0  google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>(void)
 *   0x00000000002017E0  Caver::Proto::Component::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x00000000002FECC0  Caver::Proto::SceneObject::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 225
 *   insn=0x00000000002FE5B4 string=0x00000000002FE5B8 "X"
 *   insn=0x00000000002FE5B8 string=0x00000000002FE5BC ""
 *   insn=0x00000000002FE5BC string=0x00000000002FE5C0 ";"
 *   insn=0x00000000002FE5C0 string=0x00000000002FE5C4 "{"
 *   insn=0x00000000002FE5C4 string=0x00000000002FE5C8 ":"
 *   insn=0x00000000002FE5CC string=0x00000000002FE5D0 "Z"
 *   insn=0x00000000002FE5D4 string=0x00000000002FE5D8 "y"
 *   insn=0x00000000002FE5E0 string=0x00000000002FE5E4 "9"
 *   insn=0x00000000002FE5E4 string=0x00000000002FE5E8 "|c"
 *   insn=0x00000000002FE5E8 string=0x00000000002FE5EC "h"
 *   insn=0x00000000002FE5F0 string=0x00000000002FE5F4 """
 *   insn=0x00000000002FE5F4 string=0x00000000002FE5F8 "\t"
 *   insn=0x00000000002FE5FC string=0x00000000002FE600 "!"
 *   insn=0x00000000002FE600 string=0x00000000002FE604 ""
 *   insn=0x00000000002FE604 string=0x00000000002FE608 "a""
 *   insn=0x00000000002FE608 string=0x00000000002FE60C "h"
 *   insn=0x00000000002FE610 string=0x00000000002FE62C "(|"
 *   insn=0x00000000002FE618 string=0x00000000002FE61C "\t"
 *   insn=0x00000000002FE61C string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002FE620 string=0x00000000002FE624 "a""
 *   insn=0x00000000002FE624 string=0x00000000002FE628 "!2"
 *   insn=0x00000000002FE62C string=0x00000000002FE630 ""
 *   insn=0x00000000002FE638 string=0x00000000002FE63C "({"
 *   insn=0x00000000002FE638 string=0x00000000002FE794 "("
 *   insn=0x00000000002FE63C string=0x00000000002FE640 ""
 *   insn=0x00000000002FE644 string=0x00000000002FE648 "("
 *   insn=0x00000000002FE644 string=0x00000000002FE6B8 "("
 *   insn=0x00000000002FE644 string=0x00000000002FE6C8 "("
 *   insn=0x00000000002FE644 string=0x00000000002FE6DC "("
 *   insn=0x00000000002FE644 string=0x00000000002FE6EC "("
 *   insn=0x00000000002FE644 string=0x00000000002FE6FC "("
 *   insn=0x00000000002FE644 string=0x00000000002FE710 "("
 *   insn=0x00000000002FE644 string=0x00000000002FE774 "("
 *   insn=0x00000000002FE644 string=0x00000000002FE784 "("
 *   insn=0x00000000002FE644 string=0x00000000002FE7A4 "("
 *   insn=0x00000000002FE650 string=0x00000000002FE654 ")"
 *   insn=0x00000000002FE65C string=0x00000000002FE660 ")9@"
 *   insn=0x00000000002FE660 string=0x00000000002FE664 ""
 *   insn=0x00000000002FE668 string=0x00000000002FE66C "?"
 *   insn=0x00000000002FE678 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002FE67C string=0x00000000002FE680 "<"
 *   insn=0x00000000002FE688 string=0x00000000002FE68C "Q"
 *   insn=0x00000000002FE68C string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002FE690 string=0x00000000002FE694 "h"
 *   insn=0x00000000002FE69C string=0x00000000002FE6A0 "\t"
 *   insn=0x00000000002FE6A0 string=0x00000000002FE6A4 "?I"
 *   insn=0x00000000002FE6A4 string=0x00000000002FE6A8 "!"
 *   insn=0x00000000002FE6A8 string=0x00000000002FE6AC ""
 *   insn=0x00000000002FE6AC string=0x00000000002FE6B0 "h"
 *   insn=0x00000000002FE6BC string=0x00000000002FE6C0 "a"
 *   insn=0x00000000002FE6D4 string=0x00000000002FE6D8 "-"
 *   insn=0x00000000002FE6E0 string=0x00000000002FE6E4 "A"
 *   insn=0x00000000002FE6E4 string=0x00000000002FE6E8 "A"
 *   insn=0x00000000002FE6F4 string=0x00000000002FE6F8 "r"
 *   insn=0x00000000002FE700 string=0x00000000002FE704 "A"
 *   insn=0x00000000002FE720 string=0x00000000002FE724 ""
 *   insn=0x00000000002FE724 string=0x00000000002FE728 "?"
 *   insn=0x00000000002FE73C string=0x00000000002FE740 "hc"
 *   insn=0x00000000002FE740 string=0x00000000002FE744 "("
 *   insn=0x00000000002FE74C string=0x00000000002FE750 " "
 *   insn=0x00000000002FE754 string=0x00000000002FE758 "h"
 *   insn=0x00000000002FE75C string=0x00000000002FE760 "b"
 *   insn=0x00000000002FE760 string=0x00000000002FE764 "\t"
 *   insn=0x00000000002FE764 string=0x00000000002FE768 "?i"
 *   insn=0x00000000002FE76C string=0x00000000002FE770 "L"
 *   insn=0x00000000002FE770 string=0x00000000002FE8A0 ""
 *   insn=0x00000000002FE79C string=0x00000000002FE7A0 "3"
 *   insn=0x00000000002FE7A8 string=0x00000000002FE7C4 "i"
 *   insn=0x00000000002FE7B4 string=0x00000000002FE7B8 "F"
 *   insn=0x00000000002FE7B8 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002FE7BC string=0x00000000002FE7C0 ")"
 *   insn=0x00000000002FE7C4 string=0x00000000002FE7C8 "?"
 *   insn=0x00000000002FE7CC string=0x00000000002FE7D0 "*"
 *   insn=0x00000000002FE7D0 string=0x00000000002FE7D4 "j"
 *   insn=0x00000000002FE7D4 string=0x00000000002FE7D8 "J"
 *   insn=0x00000000002FE7D8 string=0x00000000002FE7DC ")"
 *   insn=0x00000000002FE7E0 string=0x00000000002FE7E4 "i"
 *   insn=0x00000000002FE7F0 string=0x00000000002FE7F4 "h"
 *   insn=0x00000000002FE7F0 string=0x00000000001FDEF0 "0'"
 *   insn=0x00000000002FE800 string=0x00000000002FE804 "\t"
 *   insn=0x00000000002FE808 string=0x00000000002FE80C ")"
 *   insn=0x00000000002FE80C string=0x00000000002FE810 ""
 *   insn=0x00000000002FE814 string=0x00000000002FE818 "h"
 *   insn=0x00000000002FE81C string=0x00000000002FE830 "h&G)\n"
 *   insn=0x00000000002FE824 string=0x00000000002FE828 "\n"
 *   insn=0x00000000002FE828 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002FE830 string=0x00000000002FE834 "\n"
 *   insn=0x00000000002FE838 string=0x00000000002FE83C "j:"
 *   insn=0x00000000002FE83C string=0x00000000002FE840 "*!"
 *   insn=0x00000000002FE848 string=0x00000000002FE84C "M"
 *   insn=0x00000000002FE85C string=0x00000000002FE860 "  "
 *   insn=0x00000000002FE860 string=0x00000000002FE864 "h"
 *   insn=0x00000000002FE870 string=0x00000000002FE874 "g"
 *   insn=0x00000000002FE874 string=0x00000000002FE878 "h:@"
 *   insn=0x00000000002FE878 string=0x00000000002FE87C ""
 *   insn=0x00000000002FE87C string=0x00000000002FE880 "K"
 *   insn=0x00000000002FE880 string=0x00000000002FE884 "h:"
 *   insn=0x00000000002FE880 string=0x00000000002FE888 "h"
 *   insn=0x00000000002FE890 string=0x00000000002FE894 "\t"
 *   insn=0x00000000002FE894 string=0x00000000002FE898 "?i"
 *   insn=0x00000000002FE89C string=0x00000000002FE8AC "\t"
 *   insn=0x00000000002FE8A0 string=0x00000000002FE8A4 "h"
 *   insn=0x00000000002FE8AC string=0x00000000002FE8B0 "?"
 *   insn=0x00000000002FE8B4 string=0x00000000002FE8B8 ""
 *   insn=0x00000000002FE8B8 string=0x00000000002FE8BC "h"
 *   insn=0x00000000002FE8C4 string=0x00000000002FE8C8 ""
 *   insn=0x00000000002FE8D0 string=0x00000000002FE8E8 "h"
 *   insn=0x00000000002FE8D4 string=0x00000000002FE8D8 "B"
 *   insn=0x00000000002FE8E0 string=0x00000000001F7CD0 "0'"
 *   insn=0x00000000002FE8F0 string=0x00000000002FE8F4 "\t"
 *   insn=0x00000000002FE8F8 string=0x00000000002FE8FC ")"
 *   insn=0x00000000002FE8FC string=0x00000000002FE900 ""
 *   insn=0x00000000002FE904 string=0x00000000002FE908 "h"
 *   insn=0x00000000002FE90C string=0x00000000002FE920 "h&G)\n"
 *   insn=0x00000000002FE918 string=0x00000000002FE91C "@"
 *   insn=0x00000000002FE920 string=0x00000000002FE924 "\n"
 *   insn=0x00000000002FE928 string=0x00000000002FE92C "j:"
 *   insn=0x00000000002FE948 string=0x00000000002FE94C "q"
 *   insn=0x00000000002FE94C string=0x00000000001F5710 "P'"
 *   insn=0x00000000002FE950 string=0x00000000002FE954 "h"
 *   insn=0x00000000002FE954 string=0x00000000002FE958 "h"
 *   insn=0x00000000002FE960 string=0x00000000002FE964 "+"
 *   insn=0x00000000002FE964 string=0x00000000002FE968 "h:@"
 *   insn=0x00000000002FE968 string=0x00000000002FE96C ""
 *   insn=0x00000000002FE96C string=0x00000000002FE970 "K"
 *   insn=0x00000000002FE970 string=0x00000000002FE974 "h:"
 *   insn=0x00000000002FE970 string=0x00000000002FE978 "h"
 *   insn=0x00000000002FE97C string=0x00000000002FE980 "b"
 *   insn=0x00000000002FE980 string=0x00000000002FE984 "\t"
 *   insn=0x00000000002FE984 string=0x00000000002FE988 "?"
 *   insn=0x00000000002FE98C string=0x00000000002FE990 ""
 *   insn=0x00000000002FE990 string=0x00000000002FE994 "h"
 *   insn=0x00000000002FE99C string=0x00000000002FE9A0 "l"
 *   insn=0x00000000002FE9A0 string=0x00000000001FA750 "0'"
 *   insn=0x00000000002FE9B0 string=0x00000000002FE9B4 "("
 *   insn=0x00000000002FE9B8 string=0x00000000002FE9BC "h"
 *   insn=0x00000000002FE9C0 string=0x00000000002FE9C4 "B"
 *   insn=0x00000000002FE9C4 string=0x00000000002FE9C8 "\t"
 *   insn=0x00000000002FE9C8 string=0x00000000002FE9CC "?"
 *   insn=0x00000000002FE9D0 string=0x00000000002FE9D4 ""
 *   insn=0x00000000002FE9D4 string=0x00000000002FE9D8 "h"
 *   insn=0x00000000002FE9E0 string=0x00000000002FE9E4 "["
 *   insn=0x00000000002FE9F4 string=0x00000000002FE9F8 "("
 *   insn=0x00000000002FE9FC string=0x00000000002FEA00 "h"
 *   insn=0x00000000002FEA04 string=0x00000000002FEA08 """
 *   insn=0x00000000002FEA08 string=0x00000000002FEA0C "\t"
 *   insn=0x00000000002FEA0C string=0x00000000002FEA10 "?"
 *   insn=0x00000000002FEA14 string=0x00000000002FEA18 ""
 *   insn=0x00000000002FEA18 string=0x00000000002FEA1C "h"
 *   insn=0x00000000002FEA24 string=0x00000000002FEA28 "J"
 *   insn=0x00000000002FEA38 string=0x00000000002FEA3C "("
 *   insn=0x00000000002FEA40 string=0x00000000002FEA44 "i"
 *   insn=0x00000000002FEA44 string=0x00000000002FEA48 "?"
 *   insn=0x00000000002FEA4C string=0x00000000002FEA50 "*"
 *   insn=0x00000000002FEA50 string=0x00000000002FEA54 "_\t"
 *   insn=0x00000000002FEA58 string=0x00000000002FEA5C ")"
 *   insn=0x00000000002FEA5C string=0x00000000002FEA60 "i"
 *   insn=0x00000000002FEA64 string=0x00000000002FEA68 ""
 *   insn=0x00000000002FEA70 string=0x00000000002FEA88 "h"
 *   insn=0x00000000002FEA7C string=0x00000000002FEA80 "|"
 *   insn=0x00000000002FEA80 string=0x00000000001FB070 "0'"
 *   insn=0x00000000002FEA90 string=0x00000000002FEA94 "\t"
 *   insn=0x00000000002FEA98 string=0x00000000002FEA9C ")"
 *   insn=0x00000000002FEA9C string=0x00000000002FEAA0 ""
 *   insn=0x00000000002FEAA4 string=0x00000000002FEAA8 "h"
 *   insn=0x00000000002FEAAC string=0x00000000002FEAC0 "h&G)\n"
 *   insn=0x00000000002FEAB4 string=0x00000000002FEAB8 "f"
 *   insn=0x00000000002FEAB8 string=0x00000000002FEABC "@"
 *   insn=0x00000000002FEAC0 string=0x00000000002FEAC4 "\n"
 *   insn=0x00000000002FEAC8 string=0x00000000002FEACC "j:"
 *   insn=0x00000000002FEAE8 string=0x00000000002FEAEC "]"
 *   insn=0x00000000002FEAEC string=0x00000000001F9860 "0'"
 *   insn=0x00000000002FEAF0 string=0x00000000002FEAF4 "h"
 *   insn=0x00000000002FEAF4 string=0x00000000002FEAF8 "h"
 *   insn=0x00000000002FEB04 string=0x00000000002FEB08 "h:@"
 *   insn=0x00000000002FEB08 string=0x00000000002FEB0C ""
 *   insn=0x00000000002FEB0C string=0x00000000002FEB10 "K"
 *   insn=0x00000000002FEB10 string=0x00000000002FEB14 "h:"
 *   insn=0x00000000002FEB10 string=0x00000000002FEB18 "i"
 *   insn=0x00000000002FEB18 string=0x00000000002FEB1C "?"
 *   insn=0x00000000002FEB1C string=0x00000000002FEB20 "b"
 *   insn=0x00000000002FEB20 string=0x00000000002FEB24 "*"
 *   insn=0x00000000002FEB24 string=0x00000000002FEB28 "_!"
 *   insn=0x00000000002FEB2C string=0x00000000002FEB30 ")"
 *   insn=0x00000000002FEB30 string=0x00000000002FEB34 "i"
 *   insn=0x00000000002FEB34 string=0x00000000002FEB38 "?"
 *   insn=0x00000000002FEB44 string=0x00000000002FEB48 "B"
 *   insn=0x00000000002FEB50 string=0x00000000002FEB54 "i"
 *   insn=0x00000000002FEB58 string=0x00000000002FEB5C "_"
 *   insn=0x00000000002FEB64 string=0x00000000002FEB68 "j"
 *   insn=0x00000000002FEB68 string=0x00000000002FEB6C "?"
 *   insn=0x00000000002FEB74 string=0x00000000002FEB78 "("
 *   insn=0x00000000002FEB7C string=0x00000000002FEB80 "a"
 *   insn=0x00000000002FEB80 string=0x00000000002FEB84 "("
 *   insn=0x00000000002FEB84 string=0x00000000002FEB88 "h"
 *   insn=0x00000000002FEB8C string=0x00000000002FEB90 "H"
 *   insn=0x00000000002FEB98 string=0x00000000002FEBB0 "h"
 *   insn=0x00000000002FEBA8 string=0x00000000001F5000 "P'"
 *   insn=0x00000000002FEBB8 string=0x00000000002FEBBC "\t"
 *   insn=0x00000000002FEBC0 string=0x00000000002FEBC4 ")"
 *   insn=0x00000000002FEBC4 string=0x00000000002FEBC8 ""
 *   insn=0x00000000002FEBCC string=0x00000000002FEBD0 "h"
 *   insn=0x00000000002FEBD4 string=0x00000000002FEBE8 "h&G)\n"
 *   insn=0x00000000002FEBE8 string=0x00000000002FEBEC "\n"
 *   insn=0x00000000002FEBF0 string=0x00000000002FEBF4 "j:"
 *   insn=0x00000000002FEBF4 string=0x00000000002FEBF8 "j"
 *   insn=0x00000000002FEC00 string=0x00000000002FEC04 "_"
 *   insn=0x00000000002FEC10 string=0x00000000002FEC14 "C"
 *   insn=0x00000000002FEC14 string=0x00000000002FEC18 "`"
 *   insn=0x00000000002FEC14 string=0x00000000001F8D20 "0'"
 *   insn=0x00000000002FEC18 string=0x00000000002FEC1C "h"
 *   insn=0x00000000002FEC1C string=0x00000000002FEC20 "("
 *   insn=0x00000000002FEC28 string=0x00000000002FEC2C "y"
 *   insn=0x00000000002FEC2C string=0x00000000002FEC30 "h:@"
 *   insn=0x00000000002FEC30 string=0x00000000002FEC34 ""
 *   insn=0x00000000002FEC34 string=0x00000000002FEC38 "K"
 *   insn=0x00000000002FEC38 string=0x00000000002FEC3C "h:"
 *   insn=0x00000000002FEC38 string=0x00000000002FEC40 "h"
 *   insn=0x00000000002FEC44 string=0x00000000002FEC48 "!"
 *   insn=0x00000000002FEC48 string=0x00000000002FEC4C "h.@"
 *   insn=0x00000000002FEC58 string=0x00000000002FEC5C "`"
 *   insn=0x00000000002FEC60 string=0x00000000002FEC70 ""
 *   insn=0x00000000002FEC78 string=0x00000000002FEC7C "!"
 *   insn=0x00000000002FECA0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002FECB4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SceneObject::MergePartialFromCodedStream(
        Caver::Proto::SceneObject *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // x21
  char *v6; // x8
  unsigned __int64 v7; // x1
  unsigned int TagFallback; // w0
  int v9; // w8
  __int64 *v10; // x1
  _QWORD *v11; // x0
  _BYTE *v12; // x8
  int v13; // w10
  int v14; // w8
  __int64 *v15; // x1
  _QWORD *v16; // x0
  _BYTE *v17; // x8
  unsigned __int64 v18; // x8
  char *v19; // x9
  unsigned int v20; // w10
  _BYTE *v21; // x9
  __int64 v22; // x0
  char *v23; // x8
  Caver::Proto::Component *v24; // x22
  int v25; // w8
  int v26; // w9
  int v27; // w23
  int v28; // w8
  bool v29; // vf
  int v30; // w8
  Caver::Proto::Vector2 *v31; // x22
  char *v32; // x8
  int v33; // w8
  int v34; // w9
  int v35; // w23
  int v36; // w8
  int v37; // w8
  _BYTE *v38; // x8
  int v39; // w9
  _BYTE *v40; // x8
  int v41; // w9
  _BYTE *v42; // x8
  int v43; // w9
  _BYTE *v44; // x9
  Caver::Proto::Rectangle *v45; // x22
  char *v46; // x8
  int v47; // w8
  int v48; // w9
  int v49; // w23
  int v50; // w8
  int v51; // w8
  _BYTE *v52; // x9
  int v53; // w11
  Caver::Proto::Program *v54; // x22
  char *v55; // x8
  int v56; // w8
  int v57; // w9
  int v58; // w23
  int v59; // w8
  int v60; // w8
  __int64 result; // x0
  unsigned int v62; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v63; // [xsp+8h] [xbp-58h]

  v63 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = (Caver::Proto::SceneObject *)((char *)this + 32);
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
          goto LABEL_39;
        v10 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 34) |= 1u;
        if ( v10 == &Caver::Proto::SceneObject::_default_template_name_ )
        {
          v11 = (_QWORD *)operator new(8u);
          *v11 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v11;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v12 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v12 >= *((_QWORD *)a2 + 2) || *v12 != 18 )
          continue;
        *((_QWORD *)a2 + 1) = v12 + 1;
        goto LABEL_26;
      case 2u:
        v9 = v7 & 7;
        if ( v9 != 2 )
          goto LABEL_39;
LABEL_26:
        v15 = (__int64 *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 34) |= 2u;
        if ( v15 == &Caver::Proto::SceneObject::_default_identifier_ )
        {
          v16 = (_QWORD *)operator new(8u);
          *v16 = &byte_6FD2F8;
          *((_QWORD *)this + 3) = v16;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v17 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v17 >= *((_QWORD *)a2 + 2) || *v17 != 26 )
          continue;
        do
        {
          *((_QWORD *)a2 + 1) = v17 + 1;
LABEL_45:
          v22 = google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>(v5);
          v23 = (char *)*((_QWORD *)a2 + 1);
          v24 = (Caver::Proto::Component *)v22;
          if ( (unsigned __int64)v23 >= *((_QWORD *)a2 + 2) || *v23 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v62) & 1) == 0 )
              return 0;
          }
          else
          {
            v62 = (unsigned __int8)*v23;
            *((_QWORD *)a2 + 1) = v23 + 1;
          }
          v25 = *((_DWORD *)a2 + 14);
          v26 = *((_DWORD *)a2 + 15);
          *((_DWORD *)a2 + 14) = v25 + 1;
          if ( v25 >= v26 )
            return 0;
          v27 = google::protobuf::io::CodedInputStream::PushLimit(a2, v62);
          if ( (Caver::Proto::Component::MergePartialFromCodedStream(v24, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
            return 0;
          google::protobuf::io::CodedInputStream::PopLimit(a2, v27);
          v28 = *((_DWORD *)a2 + 14);
          v29 = __OFSUB__(v28, 1);
          v30 = v28 - 1;
          if ( v30 < 0 == v29 )
            *((_DWORD *)a2 + 14) = v30;
          v17 = (_BYTE *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v17 >= *((_QWORD *)a2 + 2) )
            goto LABEL_2;
        }
        while ( *v17 == 26 );
        if ( *v17 != 34 )
          continue;
        *((_QWORD *)a2 + 1) = v17 + 1;
LABEL_59:
        v31 = (Caver::Proto::Vector2 *)*((_QWORD *)this + 11);
        *((_DWORD *)this + 34) |= 8u;
        if ( !v31 )
        {
          v31 = (Caver::Proto::Vector2 *)operator new(0x18u);
          Caver::Proto::Vector2::Vector2(v31);
          *((_QWORD *)this + 11) = v31;
        }
        v32 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v32 >= *((_QWORD *)a2 + 2) || *v32 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v62) & 1) == 0 )
            return 0;
        }
        else
        {
          v62 = (unsigned __int8)*v32;
          *((_QWORD *)a2 + 1) = v32 + 1;
        }
        v33 = *((_DWORD *)a2 + 14);
        v34 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v33 + 1;
        if ( v33 >= v34 )
          return 0;
        v35 = google::protobuf::io::CodedInputStream::PushLimit(a2, v62);
        if ( (Caver::Proto::Vector2::MergePartialFromCodedStream(v31, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v35);
        v36 = *((_DWORD *)a2 + 14);
        v29 = __OFSUB__(v36, 1);
        v37 = v36 - 1;
        if ( v37 < 0 == v29 )
          *((_DWORD *)a2 + 14) = v37;
        v38 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v38 >= *((_QWORD *)a2 + 2) || *v38 != 45 )
          continue;
        *((_QWORD *)a2 + 1) = v38 + 1;
LABEL_73:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v62) & 1) == 0 )
          return 0;
        v39 = *((_DWORD *)this + 34);
        *((_DWORD *)this + 24) = v62;
        *((_DWORD *)this + 34) = v39 | 0x10;
        v40 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v40 >= *((_QWORD *)a2 + 2) || *v40 != 53 )
          continue;
        *((_QWORD *)a2 + 1) = v40 + 1;
LABEL_77:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v62) & 1) == 0 )
          return 0;
        v41 = *((_DWORD *)this + 34);
        *((_DWORD *)this + 25) = v62;
        *((_DWORD *)this + 34) = v41 | 0x20;
        v42 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v42 >= *((_QWORD *)a2 + 2) || *v42 != 61 )
          continue;
        *((_QWORD *)a2 + 1) = v42 + 1;
LABEL_81:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v62) & 1) == 0 )
          return 0;
        v43 = *((_DWORD *)this + 34);
        *((_DWORD *)this + 26) = v62;
        v14 = v43 | 0x40;
        *((_DWORD *)this + 34) = v43 | 0x40;
        v44 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v44 >= *((_QWORD *)a2 + 2) || *v44 != 66 )
          continue;
        *((_QWORD *)a2 + 1) = v44 + 1;
LABEL_85:
        v45 = (Caver::Proto::Rectangle *)*((_QWORD *)this + 14);
        *((_DWORD *)this + 34) = v14 | 0x80;
        if ( !v45 )
        {
          v45 = (Caver::Proto::Rectangle *)operator new(0x20u);
          Caver::Proto::Rectangle::Rectangle(v45);
          *((_QWORD *)this + 14) = v45;
        }
        v46 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v46 >= *((_QWORD *)a2 + 2) || *v46 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v62) & 1) == 0 )
            return 0;
        }
        else
        {
          v62 = (unsigned __int8)*v46;
          *((_QWORD *)a2 + 1) = v46 + 1;
        }
        v47 = *((_DWORD *)a2 + 14);
        v48 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v47 + 1;
        if ( v47 >= v48 )
          return 0;
        v49 = google::protobuf::io::CodedInputStream::PushLimit(a2, v62);
        if ( (Caver::Proto::Rectangle::MergePartialFromCodedStream(v45, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v49);
        v50 = *((_DWORD *)a2 + 14);
        v29 = __OFSUB__(v50, 1);
        v51 = v50 - 1;
        if ( v51 < 0 == v29 )
          *((_DWORD *)a2 + 14) = v51;
        v52 = (_BYTE *)*((_QWORD *)a2 + 1);
        v18 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v52 >= v18 || *v52 != 72 )
          continue;
        v19 = v52 + 1;
        *((_QWORD *)a2 + 1) = v19;
        if ( (unsigned __int64)v19 >= v18 )
          goto LABEL_99;
LABEL_43:
        if ( *v19 < 0 )
        {
LABEL_99:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v62) & 1) == 0 )
            return 0;
          v20 = v62;
          v21 = (_BYTE *)*((_QWORD *)a2 + 1);
          v18 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v20 = (unsigned __int8)*v19;
          v21 = v19 + 1;
          v62 = v20;
          *((_QWORD *)a2 + 1) = v21;
        }
        v53 = *((_DWORD *)this + 34);
        *((_BYTE *)this + 120) = v20 != 0;
        v13 = v53 | 0x100;
        *((_DWORD *)this + 34) = v53 | 0x100;
        if ( (unsigned __int64)v21 >= v18 || *v21 != 82 )
          continue;
        *((_QWORD *)a2 + 1) = v21 + 1;
        goto LABEL_104;
      case 3u:
        v9 = v7 & 7;
        if ( v9 == 2 )
          goto LABEL_45;
        goto LABEL_39;
      case 4u:
        v9 = v7 & 7;
        if ( v9 == 2 )
          goto LABEL_59;
        goto LABEL_39;
      case 5u:
        v9 = v7 & 7;
        if ( v9 == 5 )
          goto LABEL_73;
        goto LABEL_39;
      case 6u:
        v9 = v7 & 7;
        if ( v9 == 5 )
          goto LABEL_77;
        goto LABEL_39;
      case 7u:
        v9 = v7 & 7;
        if ( v9 == 5 )
          goto LABEL_81;
        goto LABEL_39;
      case 8u:
        v9 = v7 & 7;
        if ( v9 != 2 )
          goto LABEL_39;
        v14 = *((_DWORD *)this + 34);
        goto LABEL_85;
      case 9u:
        v9 = v7 & 7;
        if ( (v7 & 7) != 0 )
          goto LABEL_39;
        v19 = (char *)*((_QWORD *)a2 + 1);
        v18 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v19 < v18 )
          goto LABEL_43;
        goto LABEL_99;
      case 0xAu:
        v9 = v7 & 7;
        if ( v9 == 2 )
        {
          v13 = *((_DWORD *)this + 34);
LABEL_104:
          v54 = (Caver::Proto::Program *)*((_QWORD *)this + 16);
          *((_DWORD *)this + 34) = v13 | 0x200;
          if ( !v54 )
          {
            v54 = (Caver::Proto::Program *)operator new(0x30u);
            Caver::Proto::Program::Program(v54);
            *((_QWORD *)this + 16) = v54;
          }
          v55 = (char *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v55 >= *((_QWORD *)a2 + 2) || *v55 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v62) & 1) == 0 )
              return 0;
          }
          else
          {
            v62 = (unsigned __int8)*v55;
            *((_QWORD *)a2 + 1) = v55 + 1;
          }
          v56 = *((_DWORD *)a2 + 14);
          v57 = *((_DWORD *)a2 + 15);
          *((_DWORD *)a2 + 14) = v56 + 1;
          if ( v56 >= v57 )
            return 0;
          v58 = google::protobuf::io::CodedInputStream::PushLimit(a2, v62);
          if ( (Caver::Proto::Program::MergePartialFromCodedStream(v54, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
            return 0;
          google::protobuf::io::CodedInputStream::PopLimit(a2, v58);
          v59 = *((_DWORD *)a2 + 14);
          v29 = __OFSUB__(v59, 1);
          v60 = v59 - 1;
          if ( v60 < 0 == v29 )
            *((_DWORD *)a2 + 14) = v60;
          if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
          {
            result = 1;
            *((_DWORD *)a2 + 8) = 0;
            *((_BYTE *)a2 + 36) = 1;
            return result;
          }
          continue;
        }
LABEL_39:
        if ( v9 != 4 )
        {
LABEL_40:
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
        goto LABEL_40;
    }
  }
}


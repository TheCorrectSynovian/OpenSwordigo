/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EF658
 * Mangled: _ZN5Caver5Proto9GameState27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::GameState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F3F60  Caver::Proto::GameState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 14
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F60C0  Caver::Proto::CharacterState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7050  Caver::Proto::LevelState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F70A0  Caver::Proto::StateProperties::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F8880  Caver::Proto::QuestState::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FC6A0  Caver::Proto::QuestText::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *
 * Referenced strings: 463
 *   insn=0x00000000002EF680 string=0x00000000002EF684 "Z"
 *   insn=0x00000000002EF6A8 string=0x00000000002EF6AC ""
 *   insn=0x00000000002EF6AC string=0x00000000002EF6B0 ")yC"
 *   insn=0x00000000002EF6B0 string=0x00000000002EF6B4 "J"
 *   insn=0x00000000002EF6B4 string=0x00000000002EF6B8 "ku@"
 *   insn=0x00000000002EF6E4 string=0x00000000002EF6E8 " "
 *   insn=0x00000000002EF6E8 string=0x00000000002EF6EC "a"
 *   insn=0x00000000002EF6F8 string=0x00000000002EF6FC "@"
 *   insn=0x00000000002EF700 string=0x00000000002EF704 "1JA"
 *   insn=0x00000000002EF704 string=0x00000000002EF708 ")"
 *   insn=0x00000000002EF70C string=0x00000000002EF710 "A"
 *   insn=0x00000000002EF710 string=0x00000000002EF714 "J"
 *   insn=0x00000000002EF728 string=0x00000000002EF72C "B"
 *   insn=0x00000000002EF734 string=0x000000000058B040 "hG"
 *   insn=0x00000000002EF73C string=0x00000000002EF740 "(B"
 *   insn=0x00000000002EF740 string=0x00000000002EF744 "{""
 *   insn=0x00000000002EF744 string=0x00000000002EF748 "|B"
 *   insn=0x00000000002EF74C string=0x00000000002EF750 ""
 *   insn=0x00000000002EF760 string=0x00000000002EF764 "(A"
 *   insn=0x00000000002EF774 string=0x00000000002F060C "h"
 *   insn=0x00000000002EF77C string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002EF780 string=0x00000000002EF784 "a""
 *   insn=0x00000000002EF788 string=0x00000000002EF78C "(|"
 *   insn=0x00000000002EF78C string=0x00000000002EF790 ""
 *   insn=0x00000000002EF794 string=0x00000000002EF798 "h"
 *   insn=0x00000000002EF798 string=0x00000000002EF964 "("
 *   insn=0x00000000002EF79C string=0x00000000002EF7A0 ""
 *   insn=0x00000000002EF7A4 string=0x00000000002EF7A8 "("
 *   insn=0x00000000002EF7A4 string=0x00000000002EF854 "("
 *   insn=0x00000000002EF7A4 string=0x00000000002EF888 "("
 *   insn=0x00000000002EF7A4 string=0x00000000002EF8BC "("
 *   insn=0x00000000002EF7A4 string=0x00000000002EF8CC "("
 *   insn=0x00000000002EF7A4 string=0x00000000002EF900 "("
 *   insn=0x00000000002EF7A4 string=0x00000000002EF934 "("
 *   insn=0x00000000002EF7A4 string=0x00000000002EF944 "("
 *   insn=0x00000000002EF7A4 string=0x00000000002EF954 "("
 *   insn=0x00000000002EF7A4 string=0x00000000002EF974 "("
 *   insn=0x00000000002EF7A4 string=0x00000000002EF984 "("
 *   insn=0x00000000002EF7A4 string=0x00000000002EF994 "("
 *   insn=0x00000000002EF7A4 string=0x00000000002EF9A4 "("
 *   insn=0x00000000002EF7A4 string=0x00000000002EF9B8 "("
 *   insn=0x00000000002EF7A4 string=0x00000000002EF9C8 "("
 *   insn=0x00000000002EF7A4 string=0x00000000002EF9D8 "("
 *   insn=0x00000000002EF7A4 string=0x00000000002EF9E8 "("
 *   insn=0x00000000002EF7A4 string=0x00000000002EF9F8 "("
 *   insn=0x00000000002EF7A4 string=0x00000000002EFA08 "("
 *   insn=0x00000000002EF7A4 string=0x00000000002EFA3C "("
 *   insn=0x00000000002EF7B8 string=0x00000000002EF7BC ""
 *   insn=0x00000000002EF7C0 string=0x00000000002EF7C4 "8"
 *   insn=0x00000000002EF7C4 string=0x00000000002EF828 "h"
 *   insn=0x00000000002EF7CC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002EF7D8 string=0x00000000002EF7DC "\t3"
 *   insn=0x00000000002EF7E4 string=0x00000000002EF7E8 "\t{"
 *   insn=0x00000000002EF7EC string=0x00000000002EF7F0 ""
 *   insn=0x00000000002EF7FC string=0x00000000002EF800 ""
 *   insn=0x00000000002EF804 string=0x00000000002EF808 ""
 *   insn=0x00000000002EF808 string=0x00000000002EF80C ";"
 *   insn=0x00000000002EF80C string=0x00000000002EF810 "\t"
 *   insn=0x00000000002EF81C string=0x00000000002EF820 "7"
 *   insn=0x00000000002EF834 string=0x00000000002EF838 "\t"
 *   insn=0x00000000002EF838 string=0x00000000002EF83C "i"
 *   insn=0x00000000002EF83C string=0x00000000002EF840 ")"
 *   insn=0x00000000002EF840 string=0x00000000002EF844 ""
 *   insn=0x00000000002EF848 string=0x00000000002EF84C "h"
 *   insn=0x00000000002EF850 string=0x00000000002EFA98 "h&G)\n"
 *   insn=0x00000000002EF854 string=0x00000000002EF858 "a"
 *   insn=0x00000000002EF858 string=0x00000000002EF85C "i"
 *   insn=0x00000000002EF860 string=0x00000000002EF864 "?"
 *   insn=0x00000000002EF864 string=0x00000000002EF868 "b&"
 *   insn=0x00000000002EF868 string=0x00000000002EF86C "*"
 *   insn=0x00000000002EF86C string=0x00000000002EF870 "*&"
 *   insn=0x00000000002EF870 string=0x00000000002EF874 "J"
 *   insn=0x00000000002EF874 string=0x00000000002EF878 ")"
 *   insn=0x00000000002EF87C string=0x00000000002EF880 "i"
 *   insn=0x00000000002EF880 string=0x00000000002EF884 "3"
 *   insn=0x00000000002EF884 string=0x00000000002EFD50 "_"
 *   insn=0x00000000002EF88C string=0x00000000002EF890 "i"
 *   insn=0x00000000002EF894 string=0x00000000002EF898 "?"
 *   insn=0x00000000002EF89C string=0x00000000002EF8A0 "*"
 *   insn=0x00000000002EF8A0 string=0x00000000002EF8A4 "j"
 *   insn=0x00000000002EF8A4 string=0x00000000002EF8A8 "J"
 *   insn=0x00000000002EF8A8 string=0x00000000002EF8AC ")"
 *   insn=0x00000000002EF8B0 string=0x00000000002EF8B4 "i"
 *   insn=0x00000000002EF8B8 string=0x00000000002EFB2C "_"
 *   insn=0x00000000002EF8D0 string=0x00000000002EF8D4 "i"
 *   insn=0x00000000002EF8D8 string=0x00000000002EF8DC "?"
 *   insn=0x00000000002EF8DC string=0x00000000002EF8E0 ""("
 *   insn=0x00000000002EF8E0 string=0x00000000002EF8E4 "*"
 *   insn=0x00000000002EF8E8 string=0x00000000002EF8EC "J"
 *   insn=0x00000000002EF8EC string=0x00000000002EF8F0 ")"
 *   insn=0x00000000002EF8F4 string=0x00000000002EF8F8 "i"
 *   insn=0x00000000002EF8F8 string=0x00000000002EF8FC "A"
 *   insn=0x00000000002EF904 string=0x00000000002EF908 "j"
 *   insn=0x00000000002EF90C string=0x00000000002EF910 "_"
 *   insn=0x00000000002EF910 string=0x00000000002EF914 "B$"
 *   insn=0x00000000002EF914 string=0x00000000002EF918 "I"
 *   insn=0x00000000002EF918 string=0x00000000002EF91C "\t$"
 *   insn=0x00000000002EF91C string=0x00000000002EF920 ")"
 *   insn=0x00000000002EF920 string=0x00000000002EF924 "J"
 *   insn=0x00000000002EF928 string=0x00000000002EF92C "j"
 *   insn=0x00000000002EF92C string=0x00000000002EF930 """
 *   insn=0x00000000002EF938 string=0x00000000002EF93C "A"
 *   insn=0x00000000002EF958 string=0x00000000002EF95C "A"
 *   insn=0x00000000002EF96C string=0x00000000002EF970 "2"
 *   insn=0x00000000002EF978 string=0x00000000002EF97C "A"
 *   insn=0x00000000002EF97C string=0x00000000002EF980 "2"
 *   insn=0x00000000002EF98C string=0x00000000002EF990 """
 *   insn=0x00000000002EF998 string=0x00000000002EF99C "A"
 *   insn=0x00000000002EF99C string=0x00000000002EF9A0 "\"
 *   insn=0x00000000002EF9B0 string=0x00000000002EF9B4 "o"
 *   insn=0x00000000002EF9BC string=0x00000000002EF9C0 "!"
 *   insn=0x00000000002EF9DC string=0x00000000002EF9E0 "!"
 *   insn=0x00000000002EF9F0 string=0x00000000002EF9F4 "{"
 *   insn=0x00000000002EF9FC string=0x00000000002EFA00 "!"
 *   insn=0x00000000002EFA00 string=0x00000000002EFA04 "]"
 *   insn=0x00000000002EFA0C string=0x00000000002EFA10 "i"
 *   insn=0x00000000002EFA14 string=0x00000000002EFA18 "?"
 *   insn=0x00000000002EFA1C string=0x00000000002EFA20 "*"
 *   insn=0x00000000002EFA20 string=0x00000000002EFA24 "J"
 *   insn=0x00000000002EFA24 string=0x00000000002EFA28 "J"
 *   insn=0x00000000002EFA28 string=0x00000000002EFA2C ")"
 *   insn=0x00000000002EFA30 string=0x00000000002EFA34 "i"
 *   insn=0x00000000002EFA38 string=0x00000000002EFCE8 "_"
 *   insn=0x00000000002EFA40 string=0x00000000002EFA5C "i"
 *   insn=0x00000000002EFA50 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002EFA60 string=0x00000000002EFA64 "?"
 *   insn=0x00000000002EFA68 string=0x00000000002EFA6C "*"
 *   insn=0x00000000002EFA70 string=0x00000000002EFA74 "J"
 *   insn=0x00000000002EFA74 string=0x00000000002EFA78 ")"
 *   insn=0x00000000002EFA7C string=0x00000000002EFA80 "i"
 *   insn=0x00000000002EFA84 string=0x00000000002EFC80 "_"
 *   insn=0x00000000002EFA8C string=0x00000000002EFA90 "p%"
 *   insn=0x00000000002EFA90 string=0x00000000002EFA94 "`]"
 *   insn=0x00000000002EFA90 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002EFA98 string=0x00000000002EFA9C "\n"
 *   insn=0x00000000002EFAA0 string=0x00000000002EFAA4 "j:"
 *   insn=0x00000000002EFAC4 string=0x00000000001F60C0 "0'"
 *   insn=0x00000000002EFAC8 string=0x00000000002EFACC "h"
 *   insn=0x00000000002EFADC string=0x00000000002EFAE0 "h:@"
 *   insn=0x00000000002EFAE0 string=0x00000000002EFAE4 ""
 *   insn=0x00000000002EFAE4 string=0x00000000002EFAE8 "K"
 *   insn=0x00000000002EFAE8 string=0x00000000002EFAEC "h:"
 *   insn=0x00000000002EFAE8 string=0x00000000002EFAF0 "h"
 *   insn=0x00000000002EFAFC string=0x00000000002EFB00 "\t"
 *   insn=0x00000000002EFB00 string=0x00000000002EFB04 "?I"
 *   insn=0x00000000002EFB04 string=0x00000000002EFB08 "!X"
 *   insn=0x00000000002EFB0C string=0x00000000002EFE40 ""
 *   insn=0x00000000002EFB14 string=0x00000000002EFB18 "N%"
 *   insn=0x00000000002EFB18 string=0x00000000002EFB1C " Y"
 *   insn=0x00000000002EFB24 string=0x00000000002EFB28 "i"
 *   insn=0x00000000002EFB30 string=0x00000000002EFB34 ""
 *   insn=0x00000000002EFB3C string=0x00000000002EFB40 "H"
 *   insn=0x00000000002EFB48 string=0x00000000002EFB4C "V"
 *   insn=0x00000000002EFB4C string=0x00000000002EFB50 "*"
 *   insn=0x00000000002EFB50 string=0x00000000002EFB54 "_\t"
 *   insn=0x00000000002EFB58 string=0x00000000002EFB5C "*"
 *   insn=0x00000000002EFB5C string=0x00000000002EFB60 "_"
 *   insn=0x00000000002EFB60 string=0x00000000002EFB64 "AU"
 *   insn=0x00000000002EFB64 string=0x00000000002EFB68 ")\t"
 *   insn=0x00000000002EFB68 string=0x00000000002EFB6C "i"
 *   insn=0x00000000002EFB74 string=0x00000000002EFB78 ")"
 *   insn=0x00000000002EFB78 string=0x00000000002EFB7C ""
 *   insn=0x00000000002EFB80 string=0x00000000002EFB84 "?"
 *   insn=0x00000000002EFB98 string=0x00000000002EFB9C "("
 *   insn=0x00000000002EFBA4 string=0x00000000002EFBA8 "\n'"
 *   insn=0x00000000002EFBA8 string=0x00000000001F97D0 "0'"
 *   insn=0x00000000002EFBB0 string=0x00000000002EFBB4 "h"
 *   insn=0x00000000002EFBB4 string=0x00000000002EFBB8 ")"
 *   insn=0x00000000002EFBB8 string=0x00000000002EFBBC "?\t"
 *   insn=0x00000000002EFBBC string=0x00000000002EFBC0 "kR"
 *   insn=0x00000000002EFBC0 string=0x00000000002EFBC4 "\t"
 *   insn=0x00000000002EFBC4 string=0x00000000002EFBC8 "?)"
 *   insn=0x00000000002EFBCC string=0x00000000002EFBD0 "\t"
 *   insn=0x00000000002EFBD0 string=0x00000000002EFBD4 "?"
 *   insn=0x00000000002EFBD8 string=0x00000000002EFBDC "\t"
 *   insn=0x00000000002EFBDC string=0x00000000002EFBE0 "h"
 *   insn=0x00000000002EFBEC string=0x00000000002EFBF0 ")"
 *   insn=0x00000000002EFBF0 string=0x00000000002EFBF4 ""
 *   insn=0x00000000002EFBF8 string=0x00000000002EFBFC "?"
 *   insn=0x00000000002EFC04 string=0x00000000002EFC08 "v"
 *   insn=0x00000000002EFC10 string=0x00000000002EFC14 "("
 *   insn=0x00000000002EFC28 string=0x00000000002EFC2C "i"
 *   insn=0x00000000002EFC2C string=0x00000000002EFC30 "\n"
 *   insn=0x00000000002EFC30 string=0x00000000002EFC34 "_\t"
 *   insn=0x00000000002EFC38 string=0x00000000002EFC3C "*"
 *   insn=0x00000000002EFC3C string=0x00000000002EFC40 "_A"
 *   insn=0x00000000002EFC40 string=0x00000000002EFC44 "AN"
 *   insn=0x00000000002EFC44 string=0x00000000002EFC48 "*"
 *   insn=0x00000000002EFC48 string=0x00000000002EFC4C "_"
 *   insn=0x00000000002EFC50 string=0x00000000002EFC54 ")\t"
 *   insn=0x00000000002EFC54 string=0x00000000002EFC58 "i"
 *   insn=0x00000000002EFC58 string=0x00000000002EFC5C "?"
 *   insn=0x00000000002EFC5C string=0x00000000002EFC60 "c"
 *   insn=0x00000000002EFC78 string=0x00000000002EFC7C "i"
 *   insn=0x00000000002EFC84 string=0x00000000002EFC88 ""
 *   insn=0x00000000002EFC90 string=0x00000000002EFC94 "J"
 *   insn=0x00000000002EFC9C string=0x00000000002EFCA0 "kK"
 *   insn=0x00000000002EFCA0 string=0x00000000002EFCA4 "*"
 *   insn=0x00000000002EFCA4 string=0x00000000002EFCA8 "_a"
 *   insn=0x00000000002EFCAC string=0x00000000002EFCB0 "*"
 *   insn=0x00000000002EFCB0 string=0x00000000002EFCB4 "_"
 *   insn=0x00000000002EFCB8 string=0x00000000002EFCBC ")\t"
 *   insn=0x00000000002EFCBC string=0x00000000002EFCC0 "i"
 *   insn=0x00000000002EFCC0 string=0x00000000002EFCC4 "?"
 *   insn=0x00000000002EFCD4 string=0x00000000002EFCD8 "@K"
 *   insn=0x00000000002EFCE0 string=0x00000000002EFCE4 "i"
 *   insn=0x00000000002EFCEC string=0x00000000002EFCF0 ""
 *   insn=0x00000000002EFCF8 string=0x00000000002EFCFC "J"
 *   insn=0x00000000002EFD04 string=0x00000000002EFD08 "+H"
 *   insn=0x00000000002EFD08 string=0x00000000002EFD0C "*"
 *   insn=0x00000000002EFD0C string=0x00000000002EFD10 "_"
 *   insn=0x00000000002EFD14 string=0x00000000002EFD18 "*"
 *   insn=0x00000000002EFD18 string=0x00000000002EFD1C "_"
 *   insn=0x00000000002EFD1C string=0x00000000002EFD20 "aG"
 *   insn=0x00000000002EFD20 string=0x00000000002EFD24 ")\t"
 *   insn=0x00000000002EFD24 string=0x00000000002EFD28 "i"
 *   insn=0x00000000002EFD28 string=0x00000000002EFD2C "?"
 *   insn=0x00000000002EFD48 string=0x00000000002EFD4C "i"
 *   insn=0x00000000002EFD54 string=0x00000000002EFD58 ""
 *   insn=0x00000000002EFD60 string=0x00000000002EFD64 "J"
 *   insn=0x00000000002EFD70 string=0x00000000002EFD74 "*"
 *   insn=0x00000000002EFD74 string=0x00000000002EFD78 "_"
 *   insn=0x00000000002EFD7C string=0x00000000002EFD80 "*"
 *   insn=0x00000000002EFD80 string=0x00000000002EFD84 "_"
 *   insn=0x00000000002EFD84 string=0x00000000002EFD88 "!D"
 *   insn=0x00000000002EFD88 string=0x00000000002EFD8C "*\t"
 *   insn=0x00000000002EFD8C string=0x00000000002EFD90 "j"
 *   insn=0x00000000002EFD90 string=0x00000000002EFD94 "_"
 *   insn=0x00000000002EFDAC string=0x00000000002EFDB0 "j"
 *   insn=0x00000000002EFDB8 string=0x00000000002EFDBC "?"
 *   insn=0x00000000002EFDC4 string=0x00000000002EFDC8 "i"
 *   insn=0x00000000002EFDC8 string=0x00000000002EFDCC "_"
 *   insn=0x00000000002EFDD4 string=0x00000000002EFDD8 "h.@"
 *   insn=0x00000000002EFDDC string=0x00000000002EFDE0 "&"
 *   insn=0x00000000002EFDF4 string=0x00000000002EFDF8 "i"
 *   insn=0x00000000002EFE00 string=0x00000000002EFE04 "_"
 *   insn=0x00000000002EFE0C string=0x00000000002EFE10 "j"
 *   insn=0x00000000002EFE10 string=0x00000000002EFE14 "?"
 *   insn=0x00000000002EFE1C string=0x00000000002EFE20 "*"
 *   insn=0x00000000002EFE20 string=0x00000000002EFE24 "_"
 *   insn=0x00000000002EFE24 string=0x00000000002EFE28 "!?"
 *   insn=0x00000000002EFE28 string=0x00000000002EFE2C ")"
 *   insn=0x00000000002EFE2C string=0x00000000002EFE30 "i"
 *   insn=0x00000000002EFE30 string=0x00000000002EFE34 "?"
 *   insn=0x00000000002EFE34 string=0x00000000002EFE38 "C"
 *   insn=0x00000000002EFE38 string=0x00000000002EFE3C "5"
 *   insn=0x00000000002EFE40 string=0x00000000002EFE44 "h"
 *   insn=0x00000000002EFE48 string=0x00000000002EFE4C "?"
 *   insn=0x00000000002EFE54 string=0x00000000002EFE58 "*"
 *   insn=0x00000000002EFE58 string=0x00000000002EFE5C ")"
 *   insn=0x00000000002EFE64 string=0x00000000002EFE68 ""
 *   insn=0x00000000002EFE68 string=0x00000000002EFED4 "h"
 *   insn=0x00000000002EFE74 string=0x00000000002EFE88 ""
 *   insn=0x00000000002EFE80 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002EFEA0 string=0x00000000002EFEA4 ")"
 *   insn=0x00000000002EFEA4 string=0x00000000002EFEA8 ""
 *   insn=0x00000000002EFEAC string=0x00000000002EFEB0 "M@"
 *   insn=0x00000000002EFEB8 string=0x00000000002EFEBC "\t"
 *   insn=0x00000000002EFEBC string=0x00000000002EFEC0 ""
 *   insn=0x00000000002EFEE0 string=0x00000000002EFEE4 "\t"
 *   insn=0x00000000002EFEE8 string=0x00000000002EFEEC ")"
 *   insn=0x00000000002EFEEC string=0x00000000002EFEF0 ""
 *   insn=0x00000000002EFEF4 string=0x00000000002EFEF8 "h"
 *   insn=0x00000000002EFEFC string=0x00000000002EFF10 "h&G)\n"
 *   insn=0x00000000002EFF04 string=0x00000000002EFF08 "R$"
 *   insn=0x00000000002EFF10 string=0x00000000002EFF14 "\n"
 *   insn=0x00000000002EFF18 string=0x00000000002EFF1C "j:"
 *   insn=0x00000000002EFF1C string=0x00000000002EFF20 "\n9"
 *   insn=0x00000000002EFF38 string=0x00000000002EFF3C "E"
 *   insn=0x00000000002EFF3C string=0x00000000001F7050 "0'"
 *   insn=0x00000000002EFF40 string=0x00000000002EFF44 "h"
 *   insn=0x00000000002EFF54 string=0x00000000002EFF58 "h:@"
 *   insn=0x00000000002EFF58 string=0x00000000002EFF5C ""
 *   insn=0x00000000002EFF5C string=0x00000000002EFF60 "K"
 *   insn=0x00000000002EFF60 string=0x00000000002EFF64 "h:"
 *   insn=0x00000000002EFF60 string=0x00000000002EFF68 "h"
 *   insn=0x00000000002EFF74 string=0x00000000002EFF78 "\t"
 *   insn=0x00000000002EFF78 string=0x00000000002EFF7C "?I"
 *   insn=0x00000000002EFF80 string=0x00000000002EFF84 "\t"
 *   insn=0x00000000002EFF84 string=0x00000000002EFF88 "?i"
 *   insn=0x00000000002EFF8C string=0x00000000002EFF90 ""
 *   insn=0x00000000002EFF90 string=0x00000000002EFF94 "h"
 *   insn=0x00000000002EFFA0 string=0x00000000002EFFA4 ")"
 *   insn=0x00000000002EFFA4 string=0x00000000002EFFA8 ""
 *   insn=0x00000000002EFFAC string=0x00000000002EFFB0 "?"
 *   insn=0x00000000002EFFC4 string=0x00000000002EFFC8 "("
 *   insn=0x00000000002EFFD4 string=0x00000000002EFFD8 "@3"
 *   insn=0x00000000002EFFD8 string=0x00000000002EFFDC "h"
 *   insn=0x00000000002EFFE4 string=0x00000000002EFFE8 ""1"
 *   insn=0x00000000002EFFE8 string=0x00000000002EFFEC "\t"
 *   insn=0x00000000002EFFEC string=0x00000000002EFFF0 "?"
 *   insn=0x00000000002EFFF4 string=0x00000000002EFFF8 ""
 *   insn=0x00000000002EFFF8 string=0x00000000002EFFFC "h"
 *   insn=0x00000000002F0008 string=0x00000000002F000C ")"
 *   insn=0x00000000002F000C string=0x00000000002F0010 ""
 *   insn=0x00000000002F0014 string=0x00000000002F0018 "?"
 *   insn=0x00000000002F0020 string=0x00000000002F0024 "o"
 *   insn=0x00000000002F002C string=0x00000000002F0030 "("
 *   insn=0x00000000002F0040 string=0x00000000002F0044 "h"
 *   insn=0x00000000002F0050 string=0x00000000002F0054 "\t"
 *   insn=0x00000000002F0054 string=0x00000000002F0058 "?"
 *   insn=0x00000000002F005C string=0x00000000002F0060 ""
 *   insn=0x00000000002F0060 string=0x00000000002F0064 "h"
 *   insn=0x00000000002F0070 string=0x00000000002F0074 ")"
 *   insn=0x00000000002F0074 string=0x00000000002F0078 ""
 *   insn=0x00000000002F007C string=0x00000000002F0080 "?"
 *   insn=0x00000000002F0088 string=0x00000000002F008C "U"
 *   insn=0x00000000002F0094 string=0x00000000002F0098 "("
 *   insn=0x00000000002F00A8 string=0x00000000002F00AC "h"
 *   insn=0x00000000002F00B8 string=0x00000000002F00BC "\t"
 *   insn=0x00000000002F00BC string=0x00000000002F00C0 "?"
 *   insn=0x00000000002F00C0 string=0x00000000002F00C4 "A*"
 *   insn=0x00000000002F00C4 string=0x00000000002F00C8 ""
 *   insn=0x00000000002F00C8 string=0x00000000002F00CC "h"
 *   insn=0x00000000002F00D0 string=0x00000000002F00D4 "?"
 *   insn=0x00000000002F00DC string=0x00000000002F00E0 "*"
 *   insn=0x00000000002F00E0 string=0x00000000002F00E4 ")"
 *   insn=0x00000000002F00F0 string=0x00000000002F0154 "h"
 *   insn=0x00000000002F00FC string=0x00000000002F0110 ""
 *   insn=0x00000000002F0118 string=0x00000000002F011C "1"
 *   insn=0x00000000002F0128 string=0x00000000002F012C ")"
 *   insn=0x00000000002F012C string=0x00000000002F0130 ""
 *   insn=0x00000000002F0134 string=0x00000000002F0138 ""
 *   insn=0x00000000002F0140 string=0x00000000002F0144 ""
 *   insn=0x00000000002F0160 string=0x00000000002F0164 "\t"
 *   insn=0x00000000002F0168 string=0x00000000002F016C ")"
 *   insn=0x00000000002F016C string=0x00000000002F0170 ""
 *   insn=0x00000000002F0174 string=0x00000000002F0178 "h"
 *   insn=0x00000000002F017C string=0x00000000002F0190 "h&G)\n"
 *   insn=0x00000000002F0190 string=0x00000000002F0194 "\n"
 *   insn=0x00000000002F0198 string=0x00000000002F019C "j:"
 *   insn=0x00000000002F019C string=0x00000000002F01A0 "\n%"
 *   insn=0x00000000002F01BC string=0x00000000001F8880 "0'"
 *   insn=0x00000000002F01C0 string=0x00000000002F01C4 "h"
 *   insn=0x00000000002F01D4 string=0x00000000002F01D8 "h:@"
 *   insn=0x00000000002F01D8 string=0x00000000002F01DC ""
 *   insn=0x00000000002F01DC string=0x00000000002F01E0 "K"
 *   insn=0x00000000002F01E0 string=0x00000000002F01E4 "h:"
 *   insn=0x00000000002F01E0 string=0x00000000002F01E8 "h"
 *   insn=0x00000000002F01F4 string=0x00000000002F01F8 "\t"
 *   insn=0x00000000002F01F8 string=0x00000000002F01FC "?"
 *   insn=0x00000000002F01FC string=0x00000000002F0200 "@"
 *   insn=0x00000000002F0200 string=0x00000000002F0204 "\t"
 *   insn=0x00000000002F0204 string=0x00000000002F0208 "?\t"
 *   insn=0x00000000002F020C string=0x00000000002F0210 ""
 *   insn=0x00000000002F0210 string=0x00000000002F0214 "h"
 *   insn=0x00000000002F021C string=0x00000000002F0220 ""
 *   insn=0x00000000002F0228 string=0x00000000002F0258 "h"
 *   insn=0x00000000002F0240 string=0x00000000002F0244 ""
 *   insn=0x00000000002F0244 string=0x00000000002F0248 ""
 *   insn=0x00000000002F0248 string=0x00000000002F024C ""
 *   insn=0x00000000002F0264 string=0x00000000002F0268 "\t"
 *   insn=0x00000000002F026C string=0x00000000002F0270 ")"
 *   insn=0x00000000002F0270 string=0x00000000002F0274 ""
 *   insn=0x00000000002F0278 string=0x00000000002F027C "h"
 *   insn=0x00000000002F0280 string=0x00000000002F0294 "h&G)\n"
 *   insn=0x00000000002F0288 string=0x00000000002F028C "q#"
 *   insn=0x00000000002F0294 string=0x00000000002F0298 "\n"
 *   insn=0x00000000002F029C string=0x00000000002F02A0 "j:"
 *   insn=0x00000000002F02BC string=0x00000000002F02C0 "x"
 *   insn=0x00000000002F02C0 string=0x00000000001F70A0 "0'"
 *   insn=0x00000000002F02C4 string=0x00000000002F02C8 "h"
 *   insn=0x00000000002F02D8 string=0x00000000002F02DC "h:@"
 *   insn=0x00000000002F02DC string=0x00000000002F02E0 ""
 *   insn=0x00000000002F02E0 string=0x00000000002F02E4 "K"
 *   insn=0x00000000002F02E4 string=0x00000000002F02E8 "h:"
 *   insn=0x00000000002F02E4 string=0x00000000002F02EC "h"
 *   insn=0x00000000002F02F8 string=0x00000000002F02FC "\t"
 *   insn=0x00000000002F02FC string=0x00000000002F0300 "?)"
 *   insn=0x00000000002F0300 string=0x00000000002F0304 "A"
 *   insn=0x00000000002F0304 string=0x00000000002F0308 ""
 *   insn=0x00000000002F0308 string=0x00000000002F030C "h"
 *   insn=0x00000000002F0318 string=0x00000000002F031C ")aG"
 *   insn=0x00000000002F031C string=0x00000000002F0320 ""
 *   insn=0x00000000002F0324 string=0x00000000002F0328 "?"
 *   insn=0x00000000002F033C string=0x00000000002F0340 "("
 *   insn=0x00000000002F0348 string=0x00000000002F034C "!%"
 *   insn=0x00000000002F0350 string=0x00000000002F0354 "h"
 *   insn=0x00000000002F035C string=0x00000000002F0360 "b"
 *   insn=0x00000000002F0360 string=0x00000000002F0364 "\t"
 *   insn=0x00000000002F0364 string=0x00000000002F0368 "?I"
 *   insn=0x00000000002F036C string=0x00000000002F0370 ""
 *   insn=0x00000000002F0370 string=0x00000000002F0374 "h"
 *   insn=0x00000000002F0380 string=0x00000000002F0384 ")UC"
 *   insn=0x00000000002F0384 string=0x00000000002F0388 ""
 *   insn=0x00000000002F038C string=0x00000000002F0390 "?"
 *   insn=0x00000000002F03A4 string=0x00000000002F03A8 "("
 *   insn=0x00000000002F03B0 string=0x00000000002F03B4 "%"
 *   insn=0x00000000002F03B4 string=0x00000000002F03B8 "@"
 *   insn=0x00000000002F03B8 string=0x00000000002F03BC "h"
 *   insn=0x00000000002F03C4 string=0x00000000002F03C8 """
 *   insn=0x00000000002F03C8 string=0x00000000002F03CC "\t"
 *   insn=0x00000000002F03CC string=0x00000000002F03D0 "?i"
 *   insn=0x00000000002F03D4 string=0x00000000002F03D8 ""
 *   insn=0x00000000002F03D8 string=0x00000000002F03DC "h"
 *   insn=0x00000000002F03E8 string=0x00000000002F03EC ")"
 *   insn=0x00000000002F03EC string=0x00000000002F03F0 ""
 *   insn=0x00000000002F03F4 string=0x00000000002F03F8 "?"
 *   insn=0x00000000002F0400 string=0x00000000002F0404 "w"
 *   insn=0x00000000002F040C string=0x00000000002F0410 "("
 *   insn=0x00000000002F0420 string=0x00000000002F0424 "h"
 *   insn=0x00000000002F0430 string=0x00000000002F0434 "\t"
 *   insn=0x00000000002F0434 string=0x00000000002F0438 "?"
 *   insn=0x00000000002F043C string=0x00000000002F0440 ""
 *   insn=0x00000000002F0440 string=0x00000000002F0444 "h"
 *   insn=0x00000000002F0448 string=0x00000000002F044C "?"
 *   insn=0x00000000002F0454 string=0x00000000002F0458 "*"
 *   insn=0x00000000002F0458 string=0x00000000002F045C ")"
 *   insn=0x00000000002F0464 string=0x00000000002F0468 ""
 *   insn=0x00000000002F0468 string=0x00000000002F04D4 "h"
 *   insn=0x00000000002F0474 string=0x00000000002F0488 ""
 *   insn=0x00000000002F047C string=0x00000000002F0480 "(*"
 *   insn=0x00000000002F0490 string=0x00000000002F0494 "S"
 *   insn=0x00000000002F04A4 string=0x00000000002F04A8 ""
 *   insn=0x00000000002F04B0 string=0x00000000002F04B4 ")"
 *   insn=0x00000000002F04B4 string=0x00000000002F04B8 ""
 *   insn=0x00000000002F04BC string=0x00000000002F04C0 "\t#"
 *   insn=0x00000000002F04C4 string=0x00000000002F04C8 ")"
 *   insn=0x00000000002F04E0 string=0x00000000002F04E4 "\t"
 *   insn=0x00000000002F04E8 string=0x00000000002F04EC ")"
 *   insn=0x00000000002F04EC string=0x00000000002F04F0 ""
 *   insn=0x00000000002F04F4 string=0x00000000002F04F8 "h"
 *   insn=0x00000000002F04FC string=0x00000000002F0510 "h&G)\n"
 *   insn=0x00000000002F0510 string=0x00000000002F0514 "\n"
 *   insn=0x00000000002F0518 string=0x00000000002F051C "j:"
 *   insn=0x00000000002F051C string=0x00000000002F0520 "\n\t"
 *   insn=0x00000000002F0538 string=0x00000000002F053C "Y0"
 *   insn=0x00000000002F053C string=0x00000000001FC6A0 "0'"
 *   insn=0x00000000002F0540 string=0x00000000002F0544 "h"
 *   insn=0x00000000002F0550 string=0x00000000002F0554 "/J"
 *   insn=0x00000000002F0554 string=0x00000000002F0558 "h:@"
 *   insn=0x00000000002F0558 string=0x00000000002F055C ""
 *   insn=0x00000000002F055C string=0x00000000002F0560 "K"
 *   insn=0x00000000002F0560 string=0x00000000002F0564 "h:"
 *   insn=0x00000000002F0560 string=0x00000000002F0568 "h"
 *   insn=0x00000000002F0574 string=0x00000000002F0578 "\t"
 *   insn=0x00000000002F0578 string=0x00000000002F057C "?"
 *   insn=0x00000000002F0580 string=0x00000000002F0584 "\t"
 *   insn=0x00000000002F0584 string=0x00000000002F0588 "?"
 *   insn=0x00000000002F058C string=0x00000000002F0590 ""
 *   insn=0x00000000002F0590 string=0x00000000002F0594 "h"
 *   insn=0x00000000002F05A0 string=0x00000000002F05A4 ")9C"
 *   insn=0x00000000002F05A4 string=0x00000000002F05A8 ""
 *   insn=0x00000000002F05AC string=0x00000000002F05B0 "?"
 *   insn=0x00000000002F05B8 string=0x00000000002F05BC "\t"
 *   insn=0x00000000002F05C4 string=0x00000000002F05C8 "("
 *   insn=0x00000000002F05D4 string=0x00000000002F05D8 "@"
 *   insn=0x00000000002F05D8 string=0x00000000002F05DC "i"
 *   insn=0x00000000002F05E0 string=0x00000000002F05E4 "?"
 *   insn=0x00000000002F05E4 string=0x00000000002F05E8 """
 *   insn=0x00000000002F05E8 string=0x00000000002F05EC "*"
 *   insn=0x00000000002F05EC string=0x00000000002F05F0 "_"
 *   insn=0x00000000002F05F4 string=0x00000000002F05F8 ")"
 *   insn=0x00000000002F05F8 string=0x00000000002F05FC "i"
 *   insn=0x00000000002F05FC string=0x00000000002F0600 "?"
 *   insn=0x00000000002F0618 string=0x00000000002F061C "\t"
 *   insn=0x00000000002F0620 string=0x00000000002F0624 "!"
 *   insn=0x00000000002F0624 string=0x00000000002F0628 ""
 *   insn=0x00000000002F0628 string=0x00000000002F062C "a""
 *   insn=0x00000000002F062C string=0x00000000002F0630 "h"
 *   insn=0x00000000002F063C string=0x00000000002F0644 "H"
 *   insn=0x00000000002F067C string=0x00000000002F0680 "`"
 *   insn=0x00000000002F0688 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GameState::MergePartialFromCodedStream(
        Caver::Proto::GameState *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  __int128 v4; // q0
  __int128 v5; // q1
  __int128 v7; // q2
  unsigned __int64 *v8; // x27
  unsigned __int64 *v9; // x28
  unsigned int TagFallback; // w0
  unsigned __int64 v11; // x1
  int v12; // w8
  __int64 v13; // x24
  char *v14; // x8
  unsigned __int8 *v15; // x9
  unsigned __int64 v16; // x8
  unsigned int v17; // w10
  unsigned __int8 *v18; // x9
  unsigned __int8 *v19; // x9
  unsigned __int64 v20; // x8
  unsigned int v21; // w10
  unsigned __int8 *v22; // x9
  char *v23; // x9
  unsigned int v24; // w10
  _BYTE *v25; // x9
  unsigned __int8 *v26; // x10
  unsigned int v27; // w9
  char *v28; // x10
  int v29; // w8
  unsigned __int8 *v30; // x9
  unsigned int v31; // w10
  unsigned __int8 *v32; // x9
  unsigned __int8 *v33; // x9
  unsigned int v34; // w10
  unsigned __int8 *v35; // x9
  int v36; // w8
  int v37; // w9
  int v38; // w25
  int v39; // w8
  bool v40; // vf
  int v41; // w8
  _BYTE *v42; // x8
  bool v43; // zf
  int v44; // w10
  int v45; // w11
  char v46; // w8
  __int64 *v47; // x1
  _QWORD *v48; // x0
  unsigned __int8 *v49; // x8
  __int64 *v50; // x1
  _QWORD *v51; // x0
  unsigned __int8 *v52; // x9
  int v53; // w10
  char v54; // w12
  int v55; // w10
  char v56; // w12
  int v57; // w10
  char v58; // w12
  int v59; // w11
  int v60; // w11
  int v61; // w8
  int v62; // w25
  __int64 v63; // x8
  __int64 v64; // x24
  __int64 v65; // x8
  char *v66; // x8
  int v67; // w8
  int v68; // w9
  int v69; // w25
  int v70; // w8
  int v71; // w8
  __int64 *v72; // x1
  _QWORD *v73; // x0
  _BYTE *v74; // x8
  __int64 *v75; // x1
  _QWORD *v76; // x0
  _BYTE *v77; // x8
  __int64 *v78; // x1
  _QWORD *v79; // x0
  _BYTE *v80; // x8
  int v81; // w8
  int v82; // w25
  __int64 v83; // x8
  __int64 v84; // x24
  __int64 v85; // x8
  char *v86; // x8
  int v87; // w8
  int v88; // w9
  int v89; // w25
  int v90; // w8
  int v91; // w8
  __int64 v92; // x24
  char *v93; // x8
  int v94; // w8
  int v95; // w9
  int v96; // w25
  int v97; // w8
  int v98; // w8
  _BYTE *v99; // x8
  __int64 *v100; // x1
  _QWORD *v101; // x0
  _BYTE *v102; // x8
  __int64 *v103; // x1
  _QWORD *v104; // x0
  _BYTE *v105; // x8
  __int64 *v106; // x1
  _QWORD *v107; // x0
  _BYTE *v108; // x8
  int v109; // w8
  int v110; // w25
  __int64 v111; // x8
  __int64 v112; // x24
  __int64 v113; // x8
  char *v114; // x8
  int v115; // w8
  int v116; // w9
  int v117; // w25
  int v118; // w8
  int v119; // w8
  __int64 *v120; // x1
  _QWORD *v121; // x0
  _BYTE *v122; // x9
  char *v123; // x8
  __int64 result; // x0
  __int128 v125; // [xsp+10h] [xbp-E0h]
  __int128 v126; // [xsp+20h] [xbp-D0h]
  __int128 v127; // [xsp+30h] [xbp-C0h]
  google::protobuf::internal::RepeatedPtrFieldBase *v128; // [xsp+48h] [xbp-A8h]
  google::protobuf::internal::RepeatedPtrFieldBase *v129; // [xsp+58h] [xbp-98h]
  google::protobuf::internal::RepeatedPtrFieldBase *v130; // [xsp+60h] [xbp-90h]
  unsigned int v131; // [xsp+84h] [xbp-6Ch] BYREF
  __int64 v132; // [xsp+88h] [xbp-68h]

  v130 = (Caver::Proto::GameState *)((char *)this + 224);
  v129 = (Caver::Proto::GameState *)((char *)this + 128);
  v128 = (Caver::Proto::GameState *)((char *)this + 24);
  *(_QWORD *)&v4 = &Caver::Proto::CharacterState::_default_equipped_weapon_;
  *(_QWORD *)&v5 = &Caver::Proto::CharacterState::_default_current_skill_;
  *((_QWORD *)&v4 + 1) = &Caver::Proto::CharacterState::_default_equipped_armor_;
  *((_QWORD *)&v5 + 1) = &Caver::Proto::CharacterState::_default_weapon_trinket_;
  v126 = v5;
  v127 = v4;
  *(_QWORD *)&v7 = &Caver::Proto::CharacterState::_default_armor_trinket_;
  v8 = (unsigned __int64 *)((char *)a2 + 8);
  v9 = (unsigned __int64 *)((char *)a2 + 16);
  *((_QWORD *)&v7 + 1) = &Caver::Proto::CharacterState::_default_skill_trinket_;
  v125 = v7;
  v132 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
LABEL_247:
  while ( 2 )
  {
    v123 = (char *)*v8;
    if ( *v8 >= *v9 || *v123 < 0 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v11 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( !TagFallback )
        return 1;
    }
    else
    {
      v11 = (unsigned __int8)*v123;
      *((_DWORD *)a2 + 8) = v11;
      *((_QWORD *)a2 + 1) = v123 + 1;
      if ( !(_DWORD)v11 )
        return 1;
    }
    switch ( (unsigned int)v11 >> 3 )
    {
      case 1u:
        v12 = v11 & 7;
        if ( v12 != 2 )
          goto LABEL_59;
        v13 = *((_QWORD *)this + 2);
        *((_DWORD *)this + 71) |= 1u;
        if ( !v13 )
        {
          v13 = operator new(0xD0u);
          *(_DWORD *)(v13 + 48) = 4;
          *(_OWORD *)(v13 + 88) = v127;
          *(_DWORD *)(v13 + 120) = 4;
          *(_OWORD *)(v13 + 160) = v126;
          *(_QWORD *)(v13 + 24) = 0;
          *(_QWORD *)(v13 + 32) = v13 + 56;
          *(_QWORD *)(v13 + 40) = 0;
          *(_QWORD *)(v13 + 112) = 0;
          *(_QWORD *)v13 = off_6C70F0;
          *(_QWORD *)(v13 + 8) = 0;
          *(_QWORD *)(v13 + 16) = 0;
          *(_OWORD *)(v13 + 176) = v125;
          *(_QWORD *)(v13 + 192) = 0;
          *(_QWORD *)(v13 + 200) = 0;
          *(_QWORD *)(v13 + 104) = v13 + 128;
          *((_QWORD *)this + 2) = v13;
        }
        v14 = (char *)*v8;
        if ( *v8 >= *v9 || *v14 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v131) & 1) == 0 )
            return 0;
        }
        else
        {
          v131 = (unsigned __int8)*v14;
          *v8 = (unsigned __int64)(v14 + 1);
        }
        v36 = *((_DWORD *)a2 + 14);
        v37 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v36 + 1;
        if ( v36 >= v37 )
          return 0;
        v38 = google::protobuf::io::CodedInputStream::PushLimit(a2, v131);
        if ( (Caver::Proto::CharacterState::MergePartialFromCodedStream((Caver::Proto::CharacterState *)v13, a2) & 1) == 0
          || !*((_BYTE *)a2 + 36) )
        {
          return 0;
        }
        google::protobuf::io::CodedInputStream::PopLimit(a2, v38);
        v39 = *((_DWORD *)a2 + 14);
        v40 = __OFSUB__(v39, 1);
        v41 = v39 - 1;
        if ( v41 < 0 == v40 )
          *((_DWORD *)a2 + 14) = v41;
        v42 = (_BYTE *)*v8;
        if ( *v8 >= *v9 || *v42 != 18 )
          continue;
        goto LABEL_135;
      case 2u:
        v12 = v11 & 7;
        if ( v12 != 2 )
          goto LABEL_59;
LABEL_136:
        v62 = *((_DWORD *)this + 8);
        v61 = *((_DWORD *)this + 9);
        if ( v62 >= v61 )
        {
          if ( v61 == *((_DWORD *)this + 10) )
          {
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v128, v61 + 1);
            v62 = *((_DWORD *)this + 8);
            v61 = *((_DWORD *)this + 9);
          }
          *((_DWORD *)this + 9) = v61 + 1;
          v64 = operator new(0x38u);
          *(_DWORD *)(v64 + 8) = 0;
          *(_QWORD *)v64 = off_6C7000;
          *(_BYTE *)(v64 + 24) = 0;
          *(_QWORD *)(v64 + 32) = 0;
          *(_QWORD *)(v64 + 40) = 0xFFFFFFFFLL;
          *(_QWORD *)(v64 + 16) = &Caver::Proto::LevelState::_default_level_name_;
          *(_DWORD *)(v64 + 48) = 0;
          v65 = *((_QWORD *)this + 3);
          *((_DWORD *)this + 8) = v62 + 1;
          *(_QWORD *)(v65 + 8LL * v62) = v64;
        }
        else
        {
          v63 = *((_QWORD *)this + 3);
          *((_DWORD *)this + 8) = v62 + 1;
          v64 = *(_QWORD *)(v63 + 8LL * v62);
        }
        v66 = (char *)*v8;
        if ( *v8 >= *v9 || *v66 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v131) & 1) == 0 )
            return 0;
        }
        else
        {
          v131 = (unsigned __int8)*v66;
          *v8 = (unsigned __int64)(v66 + 1);
        }
        v67 = *((_DWORD *)a2 + 14);
        v68 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v67 + 1;
        if ( v67 >= v68 )
          return 0;
        v69 = google::protobuf::io::CodedInputStream::PushLimit(a2, v131);
        if ( (Caver::Proto::LevelState::MergePartialFromCodedStream((Caver::Proto::LevelState *)v64, a2) & 1) == 0
          || !*((_BYTE *)a2 + 36) )
        {
          return 0;
        }
        google::protobuf::io::CodedInputStream::PopLimit(a2, v69);
        v70 = *((_DWORD *)a2 + 14);
        v40 = __OFSUB__(v70, 1);
        v71 = v70 - 1;
        if ( v71 < 0 == v40 )
          *((_DWORD *)a2 + 14) = v71;
        v42 = (_BYTE *)*v8;
        if ( *v8 >= *v9 )
          continue;
        if ( *v42 == 18 )
        {
LABEL_135:
          *v8 = (unsigned __int64)(v42 + 1);
          goto LABEL_136;
        }
        if ( *v42 != 26 )
          continue;
        *v8 = (unsigned __int64)(v42 + 1);
LABEL_154:
        v72 = (__int64 *)*((_QWORD *)this + 10);
        *((_DWORD *)this + 71) |= 4u;
        if ( v72 == &Caver::Proto::GameState::_default_current_level_ )
        {
          v73 = (_QWORD *)operator new(8u);
          *v73 = &byte_6FD2F8;
          *((_QWORD *)this + 10) = v73;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v74 = (_BYTE *)*v8;
        if ( *v8 >= *v9 || *v74 != 34 )
          continue;
        *v8 = (unsigned __int64)(v74 + 1);
LABEL_160:
        v75 = (__int64 *)*((_QWORD *)this + 11);
        *((_DWORD *)this + 71) |= 8u;
        if ( v75 == &Caver::Proto::GameState::_default_current_spawn_point_ )
        {
          v76 = (_QWORD *)operator new(8u);
          *v76 = &byte_6FD2F8;
          *((_QWORD *)this + 11) = v76;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v77 = (_BYTE *)*v8;
        if ( *v8 >= *v9 || *v77 != 42 )
          continue;
        *v8 = (unsigned __int64)(v77 + 1);
LABEL_166:
        v78 = (__int64 *)*((_QWORD *)this + 13);
        *((_DWORD *)this + 71) |= 0x20u;
        if ( v78 == &Caver::Proto::GameState::_default_current_map_node_name_ )
        {
          v79 = (_QWORD *)operator new(8u);
          *v79 = &byte_6FD2F8;
          *((_QWORD *)this + 13) = v79;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v80 = (_BYTE *)*v8;
        if ( *v8 >= *v9 || *v80 != 58 )
          continue;
        do
        {
          *v8 = (unsigned __int64)(v80 + 1);
LABEL_172:
          v82 = *((_DWORD *)this + 34);
          v81 = *((_DWORD *)this + 35);
          if ( v82 >= v81 )
          {
            if ( v81 == *((_DWORD *)this + 36) )
            {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v129, v81 + 1);
              v82 = *((_DWORD *)this + 34);
              v81 = *((_DWORD *)this + 35);
            }
            *((_DWORD *)this + 35) = v81 + 1;
            v84 = operator new(0x20u);
            *(_DWORD *)(v84 + 8) = 0;
            *(_QWORD *)v84 = off_6C6E98;
            *(_BYTE *)(v84 + 24) = 0;
            *(_DWORD *)(v84 + 28) = 0;
            *(_QWORD *)(v84 + 16) = &Caver::Proto::QuestState::_default_quest_name_;
            v85 = *((_QWORD *)this + 16);
            *((_DWORD *)this + 34) = v82 + 1;
            *(_QWORD *)(v85 + 8LL * v82) = v84;
          }
          else
          {
            v83 = *((_QWORD *)this + 16);
            *((_DWORD *)this + 34) = v82 + 1;
            v84 = *(_QWORD *)(v83 + 8LL * v82);
          }
          v86 = (char *)*v8;
          if ( *v8 >= *v9 || *v86 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v131) & 1) == 0 )
              return 0;
          }
          else
          {
            v131 = (unsigned __int8)*v86;
            *v8 = (unsigned __int64)(v86 + 1);
          }
          v87 = *((_DWORD *)a2 + 14);
          v88 = *((_DWORD *)a2 + 15);
          *((_DWORD *)a2 + 14) = v87 + 1;
          if ( v87 >= v88 )
            return 0;
          v89 = google::protobuf::io::CodedInputStream::PushLimit(a2, v131);
          if ( (Caver::Proto::QuestState::MergePartialFromCodedStream((Caver::Proto::QuestState *)v84, a2) & 1) == 0
            || !*((_BYTE *)a2 + 36) )
          {
            return 0;
          }
          google::protobuf::io::CodedInputStream::PopLimit(a2, v89);
          v90 = *((_DWORD *)a2 + 14);
          v40 = __OFSUB__(v90, 1);
          v91 = v90 - 1;
          if ( v91 < 0 == v40 )
            *((_DWORD *)a2 + 14) = v91;
          v80 = (_BYTE *)*v8;
          if ( *v8 >= *v9 )
            goto LABEL_247;
        }
        while ( *v80 == 58 );
        if ( *v80 != 66 )
          continue;
        *v8 = (unsigned __int64)(v80 + 1);
LABEL_190:
        v92 = *((_QWORD *)this + 23);
        *((_DWORD *)this + 71) |= 0x200u;
        if ( !v92 )
        {
          v92 = operator new(0x50u);
          *(_DWORD *)(v92 + 32) = 4;
          *(_DWORD *)(v92 + 8) = 0;
          *(_QWORD *)v92 = off_6C6E20;
          *(_QWORD *)(v92 + 16) = v92 + 40;
          *(_QWORD *)(v92 + 24) = 0;
          *(_DWORD *)(v92 + 72) = 0;
          *((_QWORD *)this + 23) = v92;
        }
        v93 = (char *)*v8;
        if ( *v8 >= *v9 || *v93 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v131) & 1) == 0 )
            return 0;
        }
        else
        {
          v131 = (unsigned __int8)*v93;
          *v8 = (unsigned __int64)(v93 + 1);
        }
        v94 = *((_DWORD *)a2 + 14);
        v95 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v94 + 1;
        if ( v94 >= v95 )
          return 0;
        v96 = google::protobuf::io::CodedInputStream::PushLimit(a2, v131);
        if ( (Caver::Proto::StateProperties::MergePartialFromCodedStream((Caver::Proto::StateProperties *)v92, a2) & 1) == 0
          || !*((_BYTE *)a2 + 36) )
        {
          return 0;
        }
        google::protobuf::io::CodedInputStream::PopLimit(a2, v96);
        v97 = *((_DWORD *)a2 + 14);
        v40 = __OFSUB__(v97, 1);
        v98 = v97 - 1;
        if ( v98 < 0 == v40 )
          *((_DWORD *)a2 + 14) = v98;
        v99 = (_BYTE *)*v8;
        if ( *v8 >= *v9 || *v99 != 74 )
          continue;
        *v8 = (unsigned __int64)(v99 + 1);
LABEL_204:
        v100 = (__int64 *)*((_QWORD *)this + 24);
        *((_DWORD *)this + 71) |= 0x400u;
        if ( v100 == &Caver::Proto::GameState::_default_selected_menu_tab_ )
        {
          v101 = (_QWORD *)operator new(8u);
          *v101 = &byte_6FD2F8;
          *((_QWORD *)this + 24) = v101;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v102 = (_BYTE *)*v8;
        if ( *v8 >= *v9 || *v102 != 82 )
          continue;
        *v8 = (unsigned __int64)(v102 + 1);
LABEL_210:
        v103 = (__int64 *)*((_QWORD *)this + 14);
        *((_DWORD *)this + 71) |= 0x40u;
        if ( v103 == &Caver::Proto::GameState::_default_carried_object_template_ )
        {
          v104 = (_QWORD *)operator new(8u);
          *v104 = &byte_6FD2F8;
          *((_QWORD *)this + 14) = v104;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v105 = (_BYTE *)*v8;
        if ( *v8 >= *v9 || *v105 != 90 )
          continue;
        *v8 = (unsigned __int64)(v105 + 1);
LABEL_216:
        v106 = (__int64 *)*((_QWORD *)this + 15);
        *((_DWORD *)this + 71) |= 0x80u;
        if ( v106 == &Caver::Proto::GameState::_default_carried_object_identifier_ )
        {
          v107 = (_QWORD *)operator new(8u);
          *v107 = &byte_6FD2F8;
          *((_QWORD *)this + 15) = v107;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v108 = (_BYTE *)*v8;
        if ( *v8 >= *v9 || *v108 != 98 )
          continue;
        do
        {
          *v8 = (unsigned __int64)(v108 + 1);
LABEL_222:
          v110 = *((_DWORD *)this + 58);
          v109 = *((_DWORD *)this + 59);
          if ( v110 >= v109 )
          {
            if ( v109 == *((_DWORD *)this + 60) )
            {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v130, v109 + 1);
              v110 = *((_DWORD *)this + 58);
              v109 = *((_DWORD *)this + 59);
            }
            *((_DWORD *)this + 59) = v109 + 1;
            v112 = operator new(0x58u);
            *(_QWORD *)(v112 + 32) = 0;
            *(_DWORD *)(v112 + 40) = 4;
            *(_QWORD *)v112 = off_6C6F10;
            *(_DWORD *)(v112 + 8) = 0;
            *(_DWORD *)(v112 + 80) = 0;
            *(_QWORD *)(v112 + 16) = &Caver::Proto::QuestText::_default_quest_name_;
            *(_QWORD *)(v112 + 24) = v112 + 48;
            v113 = *((_QWORD *)this + 28);
            *((_DWORD *)this + 58) = v110 + 1;
            *(_QWORD *)(v113 + 8LL * v110) = v112;
          }
          else
          {
            v111 = *((_QWORD *)this + 28);
            *((_DWORD *)this + 58) = v110 + 1;
            v112 = *(_QWORD *)(v111 + 8LL * v110);
          }
          v114 = (char *)*v8;
          if ( *v8 >= *v9 || *v114 < 0 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v131) & 1) == 0 )
              return 0;
          }
          else
          {
            v131 = (unsigned __int8)*v114;
            *v8 = (unsigned __int64)(v114 + 1);
          }
          v115 = *((_DWORD *)a2 + 14);
          v116 = *((_DWORD *)a2 + 15);
          *((_DWORD *)a2 + 14) = v115 + 1;
          if ( v115 >= v116 )
            return 0;
          v117 = google::protobuf::io::CodedInputStream::PushLimit(a2, v131);
          if ( (Caver::Proto::QuestText::MergePartialFromCodedStream((Caver::Proto::QuestText *)v112, a2) & 1) == 0
            || !*((_BYTE *)a2 + 36) )
          {
            return 0;
          }
          google::protobuf::io::CodedInputStream::PopLimit(a2, v117);
          v118 = *((_DWORD *)a2 + 14);
          v40 = __OFSUB__(v118, 1);
          v119 = v118 - 1;
          if ( v119 < 0 == v40 )
            *((_DWORD *)a2 + 14) = v119;
          v108 = (_BYTE *)*v8;
          if ( *v8 >= *v9 )
            goto LABEL_247;
        }
        while ( *v108 == 98 );
        if ( *v108 != 106 )
          continue;
        *v8 = (unsigned __int64)(v108 + 1);
LABEL_240:
        v120 = (__int64 *)*((_QWORD *)this + 12);
        *((_DWORD *)this + 71) |= 0x10u;
        if ( v120 == &Caver::Proto::GameState::_default_previous_portal_level_ )
        {
          v121 = (_QWORD *)operator new(8u);
          *v121 = &byte_6FD2F8;
          *((_QWORD *)this + 12) = v121;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v122 = (_BYTE *)*v8;
        v20 = *v9;
        if ( *v8 >= *v9 || *v122 != 112 )
          continue;
        v23 = v122 + 1;
        *v8 = (unsigned __int64)v23;
        if ( (unsigned __int64)v23 >= v20 )
          goto LABEL_129;
LABEL_22:
        if ( *v23 < 0 )
        {
LABEL_129:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v131) & 1) == 0 )
            return 0;
          v24 = v131;
          v25 = (_BYTE *)*v8;
          v20 = *v9;
        }
        else
        {
          v24 = (unsigned __int8)*v23;
          v25 = v23 + 1;
          v131 = v24;
          *v8 = (unsigned __int64)v25;
        }
        v60 = *((_DWORD *)this + 71);
        *((_BYTE *)this + 200) = v24 != 0;
        *((_DWORD *)this + 71) = v60 | 0x800;
        if ( (unsigned __int64)v25 >= v20 || *v25 != 120 )
          continue;
        v19 = v25 + 1;
        *v8 = (unsigned __int64)v19;
        if ( (unsigned __int64)v19 >= v20 )
          goto LABEL_74;
LABEL_16:
        if ( (char)*v19 < 0 )
        {
LABEL_74:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v131) & 1) == 0 )
            return 0;
          v21 = v131;
          v20 = *v9;
          v22 = (unsigned __int8 *)*v8;
        }
        else
        {
          v21 = *v19;
          v22 = v19 + 1;
          v131 = v21;
          *v8 = (unsigned __int64)v22;
        }
        v43 = v21 == 0;
        v44 = *((_DWORD *)this + 71);
        v45 = v20 - (_DWORD)v22;
        v46 = !v43;
        *((_BYTE *)this + 201) = v46;
        v29 = v44 | 0x1000;
        *((_DWORD *)this + 71) = v44 | 0x1000;
        if ( v45 < 2 || *v22 != 130 || v22[1] != 1 )
          continue;
        *v8 = (unsigned __int64)(v22 + 2);
LABEL_83:
        v47 = (__int64 *)*((_QWORD *)this + 26);
        *((_DWORD *)this + 71) = v29 | 0x2000;
        if ( v47 == &Caver::Proto::GameState::_default_flashing_item_name_ )
        {
          v48 = (_QWORD *)operator new(8u);
          *v48 = &byte_6FD2F8;
          *((_QWORD *)this + 26) = v48;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v49 = (unsigned __int8 *)*v8;
        if ( (int)(*(_DWORD *)v9 - *v8) < 2 || *v49 != 138 || v49[1] != 1 )
          continue;
        *v8 = (unsigned __int64)(v49 + 2);
LABEL_90:
        v50 = (__int64 *)*((_QWORD *)this + 27);
        *((_DWORD *)this + 71) |= 0x4000u;
        if ( v50 == &Caver::Proto::GameState::_default_flashing_skill_name_ )
        {
          v51 = (_QWORD *)operator new(8u);
          *v51 = &byte_6FD2F8;
          *((_QWORD *)this + 27) = v51;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v16 = *v9;
        v52 = (unsigned __int8 *)*v8;
        if ( (int)(*v9 - *v8) < 2 || *v52 != 144 || v52[1] != 1 )
          continue;
        v33 = v52 + 2;
        *v8 = (unsigned __int64)v33;
        if ( (unsigned __int64)v33 >= v16 )
          goto LABEL_97;
LABEL_63:
        if ( (char)*v33 < 0 )
        {
LABEL_97:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v131) & 1) == 0 )
            return 0;
          v34 = v131;
          v16 = *v9;
          v35 = (unsigned __int8 *)*v8;
        }
        else
        {
          v34 = *v33;
          v35 = v33 + 1;
          v131 = v34;
          *v8 = (unsigned __int64)v35;
        }
        v43 = v34 == 0;
        v53 = *((_DWORD *)this + 71);
        v54 = !v43;
        *((_BYTE *)this + 280) = v54;
        *((_DWORD *)this + 71) = v53 | 0x10000;
        if ( (int)v16 - (int)v35 < 2 || *v35 != 152 || v35[1] != 1 )
          continue;
        v30 = v35 + 2;
        *v8 = (unsigned __int64)v30;
        if ( (unsigned __int64)v30 >= v16 )
          goto LABEL_106;
LABEL_56:
        if ( (char)*v30 < 0 )
        {
LABEL_106:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v131) & 1) == 0 )
            return 0;
          v31 = v131;
          v16 = *v9;
          v32 = (unsigned __int8 *)*v8;
        }
        else
        {
          v31 = *v30;
          v32 = v30 + 1;
          v131 = v31;
          *v8 = (unsigned __int64)v32;
        }
        v43 = v31 == 0;
        v55 = *((_DWORD *)this + 71);
        v56 = !v43;
        *((_BYTE *)this + 281) = v56;
        *((_DWORD *)this + 71) = v55 | 0x20000;
        if ( (int)v16 - (int)v32 < 2 || *v32 != 160 || v32[1] != 1 )
          continue;
        v15 = v32 + 2;
        *v8 = (unsigned __int64)v15;
        if ( (unsigned __int64)v15 >= v16 )
          goto LABEL_115;
LABEL_12:
        if ( (char)*v15 < 0 )
        {
LABEL_115:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v131) & 1) == 0 )
            return 0;
          v17 = v131;
          v16 = *v9;
          v18 = (unsigned __int8 *)*v8;
        }
        else
        {
          v17 = *v15;
          v18 = v15 + 1;
          v131 = v17;
          *v8 = (unsigned __int64)v18;
        }
        v43 = v17 == 0;
        v57 = *((_DWORD *)this + 71);
        v58 = !v43;
        *((_BYTE *)this + 282) = v58;
        *((_DWORD *)this + 71) = v57 | 0x40000;
        if ( (int)v16 - (int)v18 < 2 || *v18 != 168 || v18[1] != 1 )
          continue;
        v26 = v18 + 2;
        *v8 = (unsigned __int64)(v18 + 2);
        if ( (unsigned __int64)(v18 + 2) >= v16 )
          goto LABEL_124;
        goto LABEL_26;
      case 3u:
        v12 = v11 & 7;
        if ( v12 == 2 )
          goto LABEL_154;
        goto LABEL_59;
      case 4u:
        v12 = v11 & 7;
        if ( v12 == 2 )
          goto LABEL_160;
        goto LABEL_59;
      case 5u:
        v12 = v11 & 7;
        if ( v12 == 2 )
          goto LABEL_166;
        goto LABEL_59;
      case 7u:
        v12 = v11 & 7;
        if ( v12 == 2 )
          goto LABEL_172;
        goto LABEL_59;
      case 8u:
        v12 = v11 & 7;
        if ( v12 == 2 )
          goto LABEL_190;
        goto LABEL_59;
      case 9u:
        v12 = v11 & 7;
        if ( v12 == 2 )
          goto LABEL_204;
        goto LABEL_59;
      case 0xAu:
        v12 = v11 & 7;
        if ( v12 == 2 )
          goto LABEL_210;
        goto LABEL_59;
      case 0xBu:
        v12 = v11 & 7;
        if ( v12 == 2 )
          goto LABEL_216;
        goto LABEL_59;
      case 0xCu:
        v12 = v11 & 7;
        if ( v12 == 2 )
          goto LABEL_222;
        goto LABEL_59;
      case 0xDu:
        v12 = v11 & 7;
        if ( v12 == 2 )
          goto LABEL_240;
        goto LABEL_59;
      case 0xEu:
        v12 = v11 & 7;
        if ( (v11 & 7) != 0 )
          goto LABEL_59;
        v23 = (char *)*v8;
        v20 = *v9;
        if ( *v8 < *v9 )
          goto LABEL_22;
        goto LABEL_129;
      case 0xFu:
        v12 = v11 & 7;
        if ( (v11 & 7) != 0 )
          goto LABEL_59;
        v19 = (unsigned __int8 *)*v8;
        v20 = *v9;
        if ( *v8 < *v9 )
          goto LABEL_16;
        goto LABEL_74;
      case 0x10u:
        v12 = v11 & 7;
        if ( v12 != 2 )
          goto LABEL_59;
        v29 = *((_DWORD *)this + 71);
        goto LABEL_83;
      case 0x11u:
        v12 = v11 & 7;
        if ( v12 == 2 )
          goto LABEL_90;
        goto LABEL_59;
      case 0x12u:
        v12 = v11 & 7;
        if ( (v11 & 7) != 0 )
          goto LABEL_59;
        v33 = (unsigned __int8 *)*v8;
        v16 = *v9;
        if ( *v8 < *v9 )
          goto LABEL_63;
        goto LABEL_97;
      case 0x13u:
        v12 = v11 & 7;
        if ( (v11 & 7) != 0 )
          goto LABEL_59;
        v30 = (unsigned __int8 *)*v8;
        v16 = *v9;
        if ( *v8 < *v9 )
          goto LABEL_56;
        goto LABEL_106;
      case 0x14u:
        v12 = v11 & 7;
        if ( (v11 & 7) != 0 )
          goto LABEL_59;
        v15 = (unsigned __int8 *)*v8;
        v16 = *v9;
        if ( *v8 < *v9 )
          goto LABEL_12;
        goto LABEL_115;
      case 0x15u:
        v12 = v11 & 7;
        if ( (v11 & 7) == 0 )
        {
          v26 = (unsigned __int8 *)*v8;
          v16 = *v9;
          if ( *v8 >= *v9 )
            goto LABEL_124;
LABEL_26:
          if ( (char)*v26 < 0 )
          {
LABEL_124:
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v131) & 1) == 0 )
              return 0;
            v27 = v131;
            v28 = (char *)*v8;
            v16 = *v9;
            goto LABEL_126;
          }
          v27 = *v26;
          v28 = (char *)(v26 + 1);
          v131 = v27;
          *v8 = (unsigned __int64)v28;
LABEL_126:
          v59 = *((_DWORD *)this + 71);
          *((_BYTE *)this + 283) = v27 != 0;
          *((_DWORD *)this + 71) = v59 | 0x80000;
          if ( v28 == (char *)v16 && *((_DWORD *)a2 + 11) )
          {
            result = 1;
            *((_DWORD *)a2 + 8) = 0;
            *((_BYTE *)a2 + 36) = 1;
            return result;
          }
          continue;
        }
LABEL_59:
        if ( v12 == 4 )
          return 1;
LABEL_60:
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v11,
                a3)
            & 1) != 0 )
          continue;
        return 0;
      default:
        if ( (v11 & 7) == 4 )
          return 1;
        goto LABEL_60;
    }
  }
}


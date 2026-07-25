/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DF8DC
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet9Extension8ByteSizeEi
 * Demangled: google::protobuf::internal::ExtensionSet::Extension::ByteSize(int)
 *
 * Callers: 1
 *   0x00000000001FFDB0  google::protobuf::internal::ExtensionSet::Extension::ByteSize(int)
 *
 * Callees: 11
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F8C90  google::protobuf::io::CodedOutputStream::VarintSize64(ulong)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FFDB0  google::protobuf::internal::ExtensionSet::Extension::ByteSize(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 248
 *   insn=0x00000000004DF8F0 string=0x00000000004DF8F4 "V"
 *   insn=0x00000000004DF918 string=0x00000000004DF91C "h"
 *   insn=0x00000000004DF928 string=0x00000000004DF930 "(y"
 *   insn=0x00000000004DF928 string=0x0000000000598934 " q"
 *   insn=0x00000000004DF930 string=0x00000000004DF934 ""
 *   insn=0x00000000004DF93C string=0x0000000000598A0C "./../../../../Dependencies/protobuf/src/google/protobuf/extension_set.cc"
 *   insn=0x00000000004DF948 string=0x00000000004DF94C "#"
 *   insn=0x00000000004DF950 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004DF954 string=0x0000000000598BDC "Non-primitive types can't be packed."
 *   insn=0x00000000004DF95C string=0x00000000004DF960 ",r"
 *   insn=0x00000000004DF960 string=0x00000000001FC210 "0'"
 *   insn=0x00000000004DF96C string=0x00000000001FA500 "0'"
 *   insn=0x00000000004DF974 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004DF984 string=0x00000000004DF988 "("
 *   insn=0x00000000004DF998 string=0x00000000004DF99C "b"
 *   insn=0x00000000004DF9A4 string=0x00000000004DF9A8 "\n"
 *   insn=0x00000000004DF9C8 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000004DF9D0 string=0x00000000004DF9D4 "\t"
 *   insn=0x00000000004DF9D8 string=0x00000000004DF9DC "?E"
 *   insn=0x00000000004DF9DC string=0x00000000004DF9E0 "h"
 *   insn=0x00000000004DF9E4 string=0x00000000004DF9EC "Iy"
 *   insn=0x00000000004DF9EC string=0x00000000004DF9F0 " "
 *   insn=0x00000000004DF9F0 string=0x00000000004DF9F4 ")"
 *   insn=0x00000000004DF9F4 string=0x00000000004DF9F8 " "
 *   insn=0x00000000004DF9FC string=0x00000000004DFA00 "!"
 *   insn=0x00000000004DFA04 string=0x00000000004DFE80 ")\t@"
 *   insn=0x00000000004DFA10 string=0x00000000004DFA14 ""
 *   insn=0x00000000004DFA28 string=0x00000000004DFA30 "(y"
 *   insn=0x00000000004DFA28 string=0x00000000005989C4 "xp"
 *   insn=0x00000000004DFA30 string=0x00000000004DFA34 ""
 *   insn=0x00000000004DFA38 string=0x00000000004DFA3C "s""
 *   insn=0x00000000004DFA38 string=0x00000000004DFA70 "s"
 *   insn=0x00000000004DFA38 string=0x00000000004E015C "s"
 *   insn=0x00000000004DFA44 string=0x00000000004DFA48 "\t@"
 *   insn=0x00000000004DFA54 string=0x00000000004DFA58 "\t@"
 *   insn=0x00000000004DFA64 string=0x00000000004DFA68 ""
 *   insn=0x00000000004DFA78 string=0x00000000004DFA7C "\t\t@"
 *   insn=0x00000000004DFA7C string=0x00000000004DFA80 "?"
 *   insn=0x00000000004DFA8C string=0x00000000004DFA90 "\t"
 *   insn=0x00000000004DFA90 string=0x00000000004DFA94 ")yw"
 *   insn=0x00000000004DFA94 string=0x00000000004DFA98 "*y"
 *   insn=0x00000000004DFA98 string=0x00000000004DFA9C "@}"
 *   insn=0x00000000004DFAA0 string=0x00000000004DFAA4 "b"
 *   insn=0x00000000004DFAAC string=0x00000000004DFAB8 "\t\t"
 *   insn=0x00000000004DFAC4 string=0x00000000004DFAC8 "K"
 *   insn=0x00000000004DFAC8 string=0x00000000004DFACC "w"
 *   insn=0x00000000004DFAD0 string=0x00000000004DFAD4 "\t\t@"
 *   insn=0x00000000004DFAD4 string=0x00000000004DFAD8 "?"
 *   insn=0x00000000004DFAE4 string=0x00000000004DFAE8 "\t"
 *   insn=0x00000000004DFAE8 string=0x00000000004DFAEC " yw"
 *   insn=0x00000000004DFAF0 string=0x00000000004DFAF4 "b"
 *   insn=0x00000000004DFAFC string=0x00000000004DFB08 "\t\t"
 *   insn=0x00000000004DFB18 string=0x00000000004DFB1C "c"
 *   insn=0x00000000004DFB24 string=0x00000000004DFB28 "`"
 *   insn=0x00000000004DFB2C string=0x00000000004DFB30 "\t\t@"
 *   insn=0x00000000004DFB30 string=0x00000000004DFB34 "?"
 *   insn=0x00000000004DFB34 string=0x00000000004DFB38 ""
 *   insn=0x00000000004DFB40 string=0x00000000004DFB44 "\t"
 *   insn=0x00000000004DFB44 string=0x00000000004DFB48 " yw"
 *   insn=0x00000000004DFB4C string=0x00000000004DFB60 "@"
 *   insn=0x00000000004DFB5C string=0x00000000004DFB70 "\t\t"
 *   insn=0x00000000004DFB7C string=0x00000000004DFB80 "+"
 *   insn=0x00000000004DFB80 string=0x00000000004DFB84 "I"
 *   insn=0x00000000004DFB88 string=0x00000000004DFB8C "\t\t@"
 *   insn=0x00000000004DFB8C string=0x00000000004DFB90 "?"
 *   insn=0x00000000004DFB90 string=0x00000000004DFB94 "+"
 *   insn=0x00000000004DFB9C string=0x00000000004DFBA0 "\t"
 *   insn=0x00000000004DFBA0 string=0x00000000004DFBA4 " yw"
 *   insn=0x00000000004DFBA8 string=0x00000000004DFBBC "@"
 *   insn=0x00000000004DFBB8 string=0x00000000004DFBCC "\t\t"
 *   insn=0x00000000004DFBD8 string=0x00000000004DFBDC "+"
 *   insn=0x00000000004DFBDC string=0x00000000004DFBE0 "2"
 *   insn=0x00000000004DFBE4 string=0x00000000004DFBE8 "\t\t@"
 *   insn=0x00000000004DFBE8 string=0x00000000004DFBEC "?"
 *   insn=0x00000000004DFBEC string=0x00000000004DFBF0 "K"
 *   insn=0x00000000004DFBF8 string=0x00000000004DFBFC ""
 *   insn=0x00000000004DFBFC string=0x00000000004DFC00 "yw"
 *   insn=0x00000000004DFC00 string=0x00000000004DFC04 "\t"
 *   insn=0x00000000004DFC04 string=0x00000000004DFC08 " "
 *   insn=0x00000000004DFC08 string=0x00000000004DFC0C "!d"
 *   insn=0x00000000004DFC0C string=0x00000000001F8C90 "0'"
 *   insn=0x00000000004DFC18 string=0x00000000004DFC1C "\t\t"
 *   insn=0x00000000004DFC24 string=0x00000000004DFC28 " "
 *   insn=0x00000000004DFC2C string=0x00000000004DFC30 "\t\t@"
 *   insn=0x00000000004DFC30 string=0x00000000004DFC34 "?"
 *   insn=0x00000000004DFC34 string=0x00000000004DFC38 ""
 *   insn=0x00000000004DFC40 string=0x00000000004DFC44 ""
 *   insn=0x00000000004DFC58 string=0x00000000004DFC5C "\t\t"
 *   insn=0x00000000004DFC60 string=0x00000000004DFC64 ""
 *   insn=0x00000000004DFC6C string=0x00000000004DFC70 "\t\t@"
 *   insn=0x00000000004DFC70 string=0x00000000004DFC74 "?"
 *   insn=0x00000000004DFC74 string=0x00000000004DFC78 ""
 *   insn=0x00000000004DFC80 string=0x00000000004DFC84 ""
 *   insn=0x00000000004DFC98 string=0x00000000004DFC9C "\t\t"
 *   insn=0x00000000004DFCA0 string=0x00000000004DFCA4 ""
 *   insn=0x00000000004DFCAC string=0x00000000004DFCB0 "K&"
 *   insn=0x00000000004DFCB4 string=0x00000000004DFCB8 "b"
 *   insn=0x00000000004DFCC4 string=0x00000000004DFCC8 "BY"
 *   insn=0x00000000004DFCE0 string=0x00000000004DFCE4 "s"
 *   insn=0x00000000004DFCE4 string=0x00000000004DFCE8 "$"
 *   insn=0x00000000004DFCEC string=0x00000000004DFCF0 "8Y"
 *   insn=0x00000000004DFCF0 string=0x00000000004DFCF4 "s"
 *   insn=0x00000000004DFCF4 string=0x00000000004DFCF8 " "
 *   insn=0x00000000004DFD00 string=0x00000000004DFD04 ""
 *   insn=0x00000000004DFD14 string=0x00000000004E0150 "("
 *   insn=0x00000000004DFD20 string=0x00000000004DFD24 "*\t@"
 *   insn=0x00000000004DFD24 string=0x00000000004DFD28 "_"
 *   insn=0x00000000004DFD28 string=0x00000000004DFD2C "S}K""
 *   insn=0x00000000004DFD2C string=0x00000000004DFD30 "K""
 *   insn=0x00000000004DFD34 string=0x00000000004DFD38 "("
 *   insn=0x00000000004DFD38 string=0x00000000004DFD3C "yu"
 *   insn=0x00000000004DFD3C string=0x00000000004DFD40 "\ny"
 *   insn=0x00000000004DFD40 string=0x00000000004DFD44 "@}"
 *   insn=0x00000000004DFD48 string=0x00000000004DFD4C "b"
 *   insn=0x00000000004DFD54 string=0x00000000004DFD60 "(\t"
 *   insn=0x00000000004DFD6C string=0x00000000004DFD70 "K"
 *   insn=0x00000000004DFD78 string=0x00000000004DFD7C "*\t@"
 *   insn=0x00000000004DFD7C string=0x00000000004DFD80 "_"
 *   insn=0x00000000004DFD80 string=0x00000000004DFD84 "S}"
 *   insn=0x00000000004DFD8C string=0x00000000004DFD90 "("
 *   insn=0x00000000004DFD98 string=0x00000000004DFD9C "b"
 *   insn=0x00000000004DFD9C string=0x00000000004DFDA8 "\nY"
 *   insn=0x00000000004DFDA4 string=0x00000000004DFDB0 "(\t"
 *   insn=0x00000000004DFDC8 string=0x00000000004DFDCC "*\t@"
 *   insn=0x00000000004DFDCC string=0x00000000004DFDD0 "_"
 *   insn=0x00000000004DFDD0 string=0x00000000004DFDD4 "S}"
 *   insn=0x00000000004DFDD4 string=0x00000000004DFDD8 ""
 *   insn=0x00000000004DFDDC string=0x00000000004DFDE0 "("
 *   insn=0x00000000004DFDE4 string=0x00000000004DFDE8 ""
 *   insn=0x00000000004DFDE8 string=0x00000000004DFDEC "%@"
 *   insn=0x00000000004DFDFC string=0x00000000004DFE00 "(\t"
 *   insn=0x00000000004DFE10 string=0x00000000004DFE14 "*\t@"
 *   insn=0x00000000004DFE14 string=0x00000000004DFE18 "_"
 *   insn=0x00000000004DFE18 string=0x00000000004DFE1C "S}"
 *   insn=0x00000000004DFE24 string=0x00000000004DFE28 "("
 *   insn=0x00000000004DFE2C string=0x00000000004DFE30 ""
 *   insn=0x00000000004DFE30 string=0x00000000004DFE34 "%@"
 *   insn=0x00000000004DFE40 string=0x00000000004DFE44 "b"
 *   insn=0x00000000004DFE60 string=0x00000000004DFE64 "S"
 *   insn=0x00000000004DFE64 string=0x00000000004DFE68 "(\t"
 *   insn=0x00000000004DFE78 string=0x00000000004DFE7C ""
 *   insn=0x00000000004DFE80 string=0x00000000004DFE84 "3}"
 *   insn=0x00000000004DFE8C string=0x00000000004DFE90 "*\t@"
 *   insn=0x00000000004DFE90 string=0x00000000004DFE94 "_"
 *   insn=0x00000000004DFE94 string=0x00000000004DFE98 "S}"
 *   insn=0x00000000004DFEA0 string=0x00000000004DFEA4 "("
 *   insn=0x00000000004DFEAC string=0x00000000004DFEC0 "@"
 *   insn=0x00000000004DFEBC string=0x00000000004DFED0 "(\t"
 *   insn=0x00000000004DFEDC string=0x00000000004DFEE0 "+"
 *   insn=0x00000000004DFEE8 string=0x00000000004DFEEC "*\t@"
 *   insn=0x00000000004DFEEC string=0x00000000004DFEF0 "_"
 *   insn=0x00000000004DFEF0 string=0x00000000004DFEF4 "S}"
 *   insn=0x00000000004DFEF4 string=0x00000000004DFEF8 ""
 *   insn=0x00000000004DFEFC string=0x00000000004DFF00 "("
 *   insn=0x00000000004DFF08 string=0x00000000004DFF1C "@"
 *   insn=0x00000000004DFF18 string=0x00000000004DFF2C "(\t"
 *   insn=0x00000000004DFF38 string=0x00000000004DFF3C "+"
 *   insn=0x00000000004DFF44 string=0x00000000004DFF48 "*\t@"
 *   insn=0x00000000004DFF48 string=0x00000000004DFF4C "_"
 *   insn=0x00000000004DFF4C string=0x00000000004DFF50 "S}+"
 *   insn=0x00000000004DFF50 string=0x00000000004DFF54 "+"
 *   insn=0x00000000004DFF58 string=0x00000000004DFF5C "("
 *   insn=0x00000000004DFF5C string=0x00000000004DFF60 "yu"
 *   insn=0x00000000004DFF60 string=0x00000000004DFF64 "\t"
 *   insn=0x00000000004DFF64 string=0x00000000004DFF68 " "
 *   insn=0x00000000004DFF68 string=0x00000000004DFF6C "Ic"
 *   insn=0x00000000004DFF78 string=0x00000000004DFF7C "(\t"
 *   insn=0x00000000004DFF84 string=0x00000000004DFF88 "|"
 *   insn=0x00000000004DFF8C string=0x00000000004DFF90 "*\t@"
 *   insn=0x00000000004DFF90 string=0x00000000004DFF94 "_"
 *   insn=0x00000000004DFF94 string=0x00000000004DFF98 "S}"
 *   insn=0x00000000004DFFA0 string=0x00000000004DFFA4 "("
 *   insn=0x00000000004DFFA8 string=0x00000000004DFFAC "9c"
 *   insn=0x00000000004DFFB8 string=0x00000000004DFFBC "(\t"
 *   insn=0x00000000004DFFC0 string=0x00000000004DFFC4 ""
 *   insn=0x00000000004DFFC4 string=0x00000000004DFFC8 "l"
 *   insn=0x00000000004DFFCC string=0x00000000004DFFD0 "*\t@"
 *   insn=0x00000000004DFFD0 string=0x00000000004DFFD4 "_"
 *   insn=0x00000000004DFFD4 string=0x00000000004DFFD8 "S}"
 *   insn=0x00000000004DFFE0 string=0x00000000004DFFE4 "("
 *   insn=0x00000000004DFFE8 string=0x00000000004DFFEC ")c"
 *   insn=0x00000000004DFFF8 string=0x00000000004DFFFC "(\t"
 *   insn=0x00000000004E0000 string=0x00000000004E0004 ""
 *   insn=0x00000000004E0004 string=0x00000000004E0008 "\"
 *   insn=0x00000000004E000C string=0x00000000004E0010 "*\t@"
 *   insn=0x00000000004E0010 string=0x00000000004E0014 "_"
 *   insn=0x00000000004E0014 string=0x00000000004E0018 "S}"
 *   insn=0x00000000004E0020 string=0x00000000004E0024 "("
 *   insn=0x00000000004E002C string=0x00000000004E0030 ""
 *   insn=0x00000000004E0034 string=0x00000000004E0038 "b"
 *   insn=0x00000000004E003C string=0x00000000004E0040 ""
 *   insn=0x00000000004E0040 string=0x00000000004E005C "+\t"
 *   insn=0x00000000004E0044 string=0x00000000004E0048 "bX"
 *   insn=0x00000000004E0054 string=0x00000000004E0058 ""
 *   insn=0x00000000004E005C string=0x00000000004E0060 "H"
 *   insn=0x00000000004E0064 string=0x00000000004E0068 "s"
 *   insn=0x00000000004E0070 string=0x00000000004E0074 "A"
 *   insn=0x00000000004E0078 string=0x00000000004E007C "*\t@"
 *   insn=0x00000000004E007C string=0x00000000004E0080 "_"
 *   insn=0x00000000004E0080 string=0x00000000004E0084 "S}"
 *   insn=0x00000000004E008C string=0x00000000004E0090 "("
 *   insn=0x00000000004E0098 string=0x00000000004E009C ""
 *   insn=0x00000000004E00A0 string=0x00000000004E00A4 "b"
 *   insn=0x00000000004E00A8 string=0x00000000004E00AC ""
 *   insn=0x00000000004E00AC string=0x00000000004E00C8 "+\t"
 *   insn=0x00000000004E00B0 string=0x00000000004E00B4 "GX"
 *   insn=0x00000000004E00C0 string=0x00000000004E00C4 ""
 *   insn=0x00000000004E00C8 string=0x00000000004E00CC "H"
 *   insn=0x00000000004E00D0 string=0x00000000004E00D4 "s"
 *   insn=0x00000000004E00DC string=0x00000000004E00E0 "&"
 *   insn=0x00000000004E00E4 string=0x00000000004E00E8 "\ty"
 *   insn=0x00000000004E00E8 string=0x00000000004E00EC " }"
 *   insn=0x00000000004E00F0 string=0x00000000004E00F4 "b"
 *   insn=0x00000000004E00F4 string=0x00000000004E0120 ",X"
 *   insn=0x00000000004E0104 string=0x00000000004E01DC "@"
 *   insn=0x00000000004E0128 string=0x00000000004E012C ""
 *   insn=0x00000000004E012C string=0x00000000004E0130 "%@"
 *   insn=0x00000000004E013C string=0x00000000004E0140 "$X"
 *   insn=0x00000000004E0148 string=0x00000000004E014C ""
 *   insn=0x00000000004E0150 string=0x00000000004E0154 "s"
 *   insn=0x00000000004E0154 string=0x00000000004E0158 ""
 *   insn=0x00000000004E0164 string=0x00000000004E0168 "\t"
 *   insn=0x00000000004E0168 string=0x00000000004E016C " "
 *   insn=0x00000000004E0184 string=0x00000000004E01F8 "6X"
 *   insn=0x00000000004E01AC string=0x00000000004E01B0 "C"
 *   insn=0x00000000004E01B8 string=0x00000000004E01BC ""
 *   insn=0x00000000004E01BC string=0x00000000004E01C0 "%@"
 *   insn=0x00000000004E01F8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004E020C string=0x00000000004E0210 "O"
 *   insn=0x00000000004E0234 string=0x00000000004E0238 "("
 *   insn=0x00000000004E0238 string=0x00000000004E023C ""
 *   insn=0x00000000004E0244 string=0x00000000004E0248 ""
 *   insn=0x00000000004E0248 string=0x00000000004E02B4 "h"
 *   insn=0x00000000004E024C string=0x00000000004E0250 "h"
 *   insn=0x00000000004E0250 string=0x00000000004E025C "?"
 *   insn=0x00000000004E0254 string=0x00000000004E0258 " "
 *   insn=0x00000000004E025C string=0x00000000004E0260 "b"
 *   insn=0x00000000004E0278 string=0x00000000004E027C "\t"
 *   insn=0x00000000004E0280 string=0x00000000004E0284 ")%@"
 *   insn=0x00000000004E0284 string=0x00000000004E0288 " "
 *   insn=0x00000000004E0290 string=0x00000000004E0294 "b"
 *   insn=0x00000000004E029C string=0x00000000004E02A8 ""
 *   insn=0x00000000004E02AC string=0x00000000004E02B0 "\n"
 *   insn=0x00000000004E02B4 string=0x00000000004E02B8 "a"@"
 *   insn=0x00000000004E02B8 string=0x00000000004E02BC "u"
 *   insn=0x00000000004E02C0 string=0x00000000004E02C4 "a"
 *   insn=0x00000000004E02C8 string=0x00000000004E02CC ""
 *   insn=0x00000000004E02E8 string=0x00000000004E02EC "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::Extension::ByteSize(
        google::protobuf::internal::ExtensionSet::Extension *this,
        unsigned __int64 a2)
{
  int v3; // w21
  int v4; // w19
  unsigned int v5; // w19
  google::protobuf::io::CodedOutputStream *v6; // x0
  int v7; // w0
  int v8; // w8
  int v9; // w19
  google::protobuf::io::CodedOutputStream *v10; // x0
  int v11; // w0
  int v12; // w8
  int v13; // w9
  int v14; // w8
  __int64 v15; // x9
  int v16; // w8
  __int64 v17; // x8
  __int64 v18; // x23
  google::protobuf::io::CodedOutputStream *v19; // x0
  int v20; // w0
  __int64 v21; // x8
  __int64 v22; // x23
  google::protobuf::io::CodedOutputStream *v23; // x0
  int v24; // w0
  __int64 v25; // x8
  __int64 v26; // x23
  google::protobuf::io::CodedOutputStream *v27; // x0
  int v28; // w0
  __int64 v29; // x8
  __int64 v30; // x23
  google::protobuf::io::CodedOutputStream *v31; // x0
  int v32; // w0
  _QWORD *v33; // x8
  __int64 v34; // x23
  int v35; // w0
  _QWORD *v36; // x8
  __int64 v37; // x23
  int v38; // w0
  _QWORD *v39; // x8
  __int64 v40; // x23
  int v41; // w0
  int v42; // w0
  unsigned int v43; // w8
  unsigned int v44; // w19
  _QWORD *v45; // x20
  __int64 v46; // x8
  int v47; // w9
  google::protobuf::io::CodedOutputStream *v48; // x0
  __int64 v49; // x9
  int v50; // w10
  __int64 v51; // x21
  google::protobuf::io::CodedOutputStream *v52; // x0
  int v53; // w0
  __int64 v54; // x9
  int v55; // w10
  __int64 v56; // x21
  google::protobuf::io::CodedOutputStream *v57; // x0
  int v58; // w0
  _QWORD *v59; // x9
  int v60; // w10
  __int64 v61; // x21
  int v62; // w0
  _QWORD *v63; // x9
  int v64; // w10
  __int64 v65; // x23
  unsigned int v66; // w1
  unsigned int v67; // w21
  int v68; // w0
  __int64 v69; // x9
  int v70; // w10
  __int64 v71; // x21
  google::protobuf::io::CodedOutputStream *v72; // x0
  int v73; // w0
  __int64 v74; // x9
  int v75; // w10
  __int64 v76; // x21
  google::protobuf::io::CodedOutputStream *v77; // x0
  int v78; // w0
  _QWORD *v79; // x9
  int v80; // w10
  __int64 v81; // x21
  int v82; // w0
  _QWORD *v83; // x9
  int v84; // w10
  __int64 v85; // x21
  int v86; // w0
  _QWORD *v87; // x9
  int v88; // w10
  __int64 v89; // x21
  int v90; // w0
  __int64 v91; // x9
  int v92; // w10
  __int64 v93; // x21
  _QWORD *v94; // x23
  __int64 v95; // x8
  int v96; // w10
  int v97; // w0
  __int64 v98; // x9
  int v99; // w10
  __int64 v100; // x21
  _QWORD *v101; // x23
  __int64 v102; // x8
  int v103; // w10
  int v104; // w0
  google::protobuf::io::CodedOutputStream *v105; // x0
  int v106; // w0
  unsigned int v108; // w1
  unsigned int v109; // w20
  int v110; // w0
  _BYTE v111[32]; // [xsp+48h] [xbp-58h] BYREF
  __int64 v112; // [xsp+68h] [xbp-38h]

  v3 = a2;
  v112 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_BYTE *)this + 9) )
  {
    v4 = *((unsigned __int8 *)this + 8);
    if ( *((_BYTE *)this + 11) )
    {
      switch ( *((_BYTE *)this + 8) )
      {
        case 1:
        case 6:
        case 0x10:
          v5 = 8 * *(_DWORD *)(*(_QWORD *)this + 8LL);
          goto LABEL_66;
        case 2:
        case 7:
        case 0xF:
          v5 = 4 * *(_DWORD *)(*(_QWORD *)this + 8LL);
          goto LABEL_66;
        case 3:
          v36 = *(_QWORD **)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) < 1 )
            goto LABEL_5;
          v37 = 0;
          v5 = 0;
          do
          {
            v38 = google::protobuf::io::CodedOutputStream::VarintSize64(
                    *(google::protobuf::io::CodedOutputStream **)(*v36 + 8 * v37),
                    a2);
            v36 = *(_QWORD **)this;
            ++v37;
            v5 += v38;
          }
          while ( v37 < *(int *)(*(_QWORD *)this + 8LL) );
          goto LABEL_66;
        case 4:
          v39 = *(_QWORD **)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) < 1 )
            goto LABEL_5;
          v40 = 0;
          v5 = 0;
          do
          {
            v41 = google::protobuf::io::CodedOutputStream::VarintSize64(
                    *(google::protobuf::io::CodedOutputStream **)(*v39 + 8 * v40),
                    a2);
            v39 = *(_QWORD **)this;
            ++v40;
            v5 += v41;
          }
          while ( v40 < *(int *)(*(_QWORD *)this + 8LL) );
          goto LABEL_66;
        case 5:
          v29 = *(_QWORD *)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) < 1 )
            goto LABEL_5;
          v30 = 0;
          v5 = 0;
          do
          {
            v31 = (google::protobuf::io::CodedOutputStream *)*(unsigned int *)(*(_QWORD *)v29 + 4 * v30);
            if ( ((unsigned int)v31 & 0x80000000) != 0 )
            {
              v32 = 10;
            }
            else if ( (unsigned int)v31 >= 0x80 )
            {
              v32 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v31, a2);
              v29 = *(_QWORD *)this;
            }
            else
            {
              v32 = 1;
            }
            ++v30;
            v5 += v32;
          }
          while ( v30 < *(int *)(v29 + 8) );
          goto LABEL_66;
        case 8:
          v5 = *(_DWORD *)(*(_QWORD *)this + 8LL);
          goto LABEL_66;
        case 9:
        case 0xA:
        case 0xB:
        case 0xC:
          google::protobuf::internal::LogMessage::LogMessage();
          google::protobuf::internal::LogMessage::operator<<((int)v111, "Non-primitive types can't be packed.");
          google::protobuf::internal::LogFinisher::operator=();
          google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v111);
          goto LABEL_5;
        case 0xD:
          v21 = *(_QWORD *)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) < 1 )
            goto LABEL_5;
          v22 = 0;
          v5 = 0;
          do
          {
            v23 = (google::protobuf::io::CodedOutputStream *)*(unsigned int *)(*(_QWORD *)v21 + 4 * v22);
            if ( (unsigned int)v23 >= 0x80 )
            {
              v24 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v23, a2);
              v21 = *(_QWORD *)this;
            }
            else
            {
              v24 = 1;
            }
            ++v22;
            v5 += v24;
          }
          while ( v22 < *(int *)(v21 + 8) );
          goto LABEL_66;
        case 0xE:
          v25 = *(_QWORD *)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) < 1 )
            goto LABEL_5;
          v26 = 0;
          v5 = 0;
          do
          {
            v27 = (google::protobuf::io::CodedOutputStream *)*(unsigned int *)(*(_QWORD *)v25 + 4 * v26);
            if ( ((unsigned int)v27 & 0x80000000) != 0 )
            {
              v28 = 10;
            }
            else if ( (unsigned int)v27 >= 0x80 )
            {
              v28 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v27, a2);
              v25 = *(_QWORD *)this;
            }
            else
            {
              v28 = 1;
            }
            ++v26;
            v5 += v28;
          }
          while ( v26 < *(int *)(v25 + 8) );
          goto LABEL_66;
        case 0x11:
          v17 = *(_QWORD *)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) < 1 )
            goto LABEL_5;
          v18 = 0;
          v5 = 0;
          do
          {
            v19 = (google::protobuf::io::CodedOutputStream *)((2 * *(_DWORD *)(*(_QWORD *)v17 + 4 * v18))
                                                            ^ (unsigned int)(*(int *)(*(_QWORD *)v17 + 4 * v18) >> 31));
            if ( (unsigned int)v19 >= 0x80 )
            {
              v20 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v19, a2);
              v17 = *(_QWORD *)this;
            }
            else
            {
              v20 = 1;
            }
            ++v18;
            v5 += v20;
          }
          while ( v18 < *(int *)(v17 + 8) );
          goto LABEL_66;
        case 0x12:
          v33 = *(_QWORD **)this;
          if ( *(int *)(*(_QWORD *)this + 8LL) < 1 )
            goto LABEL_5;
          v34 = 0;
          v5 = 0;
          do
          {
            v35 = google::protobuf::io::CodedOutputStream::VarintSize64(
                    (google::protobuf::io::CodedOutputStream *)((2LL * *(_QWORD *)(*v33 + 8 * v34))
                                                              ^ (*(__int64 *)(*v33 + 8 * v34) >> 63)),
                    a2);
            v33 = *(_QWORD **)this;
            ++v34;
            v5 += v35;
          }
          while ( v34 < *(int *)(*(_QWORD *)this + 8LL) );
LABEL_66:
          *((_DWORD *)this + 6) = v5;
          if ( (int)v5 >= 1 )
          {
            if ( v5 >= 0x80 )
              v42 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                      (google::protobuf::io::CodedOutputStream *)v5,
                      a2);
            else
              v42 = 1;
            v43 = (8 * v3) | 2;
            v44 = v42 + v5;
            if ( v43 >= 0x80 )
              v5 = v44
                 + google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                     (google::protobuf::io::CodedOutputStream *)v43,
                     a2);
            else
              v5 = v44 + 1;
          }
          break;
        default:
LABEL_5:
          v5 = 0;
          *((_DWORD *)this + 6) = 0;
          break;
      }
    }
    else
    {
      v6 = (google::protobuf::io::CodedOutputStream *)(unsigned int)(8 * a2);
      if ( (unsigned int)v6 >= 0x80 )
      {
        v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, a2);
        v8 = *((unsigned __int8 *)this + 8);
      }
      else
      {
        v7 = 1;
        v8 = v4;
      }
      v13 = v8 - 1;
      v14 = v7 << (v4 == 10);
      switch ( v13 )
      {
        case 0:
        case 5:
        case 15:
          v15 = *(_QWORD *)this;
          v16 = v14 + 8;
          goto LABEL_102;
        case 1:
        case 6:
        case 14:
          v15 = *(_QWORD *)this;
          v16 = v14 + 4;
          goto LABEL_102;
        case 2:
          v83 = *(_QWORD **)this;
          v84 = *(_DWORD *)(*(_QWORD *)this + 8LL);
          v5 = v84 * v14;
          if ( v84 >= 1 )
          {
            v85 = 0;
            do
            {
              v86 = google::protobuf::io::CodedOutputStream::VarintSize64(
                      *(google::protobuf::io::CodedOutputStream **)(*v83 + 8 * v85),
                      a2);
              v83 = *(_QWORD **)this;
              ++v85;
              v5 += v86;
            }
            while ( v85 < *(int *)(*(_QWORD *)this + 8LL) );
          }
          return v5;
        case 3:
          v87 = *(_QWORD **)this;
          v88 = *(_DWORD *)(*(_QWORD *)this + 8LL);
          v5 = v88 * v14;
          if ( v88 >= 1 )
          {
            v89 = 0;
            do
            {
              v90 = google::protobuf::io::CodedOutputStream::VarintSize64(
                      *(google::protobuf::io::CodedOutputStream **)(*v87 + 8 * v89),
                      a2);
              v87 = *(_QWORD **)this;
              ++v89;
              v5 += v90;
            }
            while ( v89 < *(int *)(*(_QWORD *)this + 8LL) );
          }
          return v5;
        case 4:
          v74 = *(_QWORD *)this;
          v75 = *(_DWORD *)(*(_QWORD *)this + 8LL);
          v5 = v75 * v14;
          if ( v75 >= 1 )
          {
            v76 = 0;
            do
            {
              v77 = (google::protobuf::io::CodedOutputStream *)*(unsigned int *)(*(_QWORD *)v74 + 4 * v76);
              if ( ((unsigned int)v77 & 0x80000000) != 0 )
              {
                v78 = 10;
              }
              else if ( (unsigned int)v77 >= 0x80 )
              {
                v78 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v77, a2);
                v74 = *(_QWORD *)this;
              }
              else
              {
                v78 = 1;
              }
              ++v76;
              v5 += v78;
            }
            while ( v76 < *(int *)(v74 + 8) );
          }
          return v5;
        case 7:
          v15 = *(_QWORD *)this;
          v16 = v14 + 1;
LABEL_102:
          v5 = *(_DWORD *)(v15 + 8) * v16;
          break;
        case 8:
          v98 = *(_QWORD *)this;
          v99 = *(_DWORD *)(*(_QWORD *)this + 8LL);
          v5 = v99 * v14;
          if ( v99 >= 1 )
          {
            v100 = 0;
            do
            {
              v101 = *(_QWORD **)(*(_QWORD *)v98 + 8 * v100);
              v102 = *(_QWORD *)(*v101 - 24LL);
              if ( (unsigned int)v102 >= 0x80 )
              {
                v104 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                         (google::protobuf::io::CodedOutputStream *)(unsigned int)v102,
                         a2);
                v98 = *(_QWORD *)this;
                v103 = v104;
                v102 = *(_QWORD *)(*v101 - 24LL);
              }
              else
              {
                v103 = 1;
              }
              ++v100;
              v5 += v103 + v102;
            }
            while ( v100 < *(int *)(v98 + 8) );
          }
          break;
        case 9:
          v59 = *(_QWORD **)this;
          v60 = *(_DWORD *)(*(_QWORD *)this + 8LL);
          v5 = v60 * v14;
          if ( v60 >= 1 )
          {
            v61 = 0;
            do
            {
              v62 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*v59 + 8 * v61) + 72LL))(*(_QWORD *)(*v59 + 8 * v61));
              v59 = *(_QWORD **)this;
              ++v61;
              v5 += v62;
            }
            while ( v61 < *(int *)(*(_QWORD *)this + 8LL) );
          }
          break;
        case 10:
          v63 = *(_QWORD **)this;
          v64 = *(_DWORD *)(*(_QWORD *)this + 8LL);
          v5 = v64 * v14;
          if ( v64 >= 1 )
          {
            v65 = 0;
            do
            {
              v67 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*v63 + 8 * v65) + 72LL))(*(_QWORD *)(*v63 + 8 * v65));
              if ( v67 >= 0x80 )
                v68 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                        (google::protobuf::io::CodedOutputStream *)v67,
                        v66);
              else
                v68 = 1;
              v63 = *(_QWORD **)this;
              ++v65;
              v5 += v67 + v68;
            }
            while ( v65 < *(int *)(*(_QWORD *)this + 8LL) );
          }
          break;
        case 11:
          v91 = *(_QWORD *)this;
          v92 = *(_DWORD *)(*(_QWORD *)this + 8LL);
          v5 = v92 * v14;
          if ( v92 >= 1 )
          {
            v93 = 0;
            do
            {
              v94 = *(_QWORD **)(*(_QWORD *)v91 + 8 * v93);
              v95 = *(_QWORD *)(*v94 - 24LL);
              if ( (unsigned int)v95 >= 0x80 )
              {
                v97 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                        (google::protobuf::io::CodedOutputStream *)(unsigned int)v95,
                        a2);
                v91 = *(_QWORD *)this;
                v96 = v97;
                v95 = *(_QWORD *)(*v94 - 24LL);
              }
              else
              {
                v96 = 1;
              }
              ++v93;
              v5 += v96 + v95;
            }
            while ( v93 < *(int *)(v91 + 8) );
          }
          break;
        case 12:
          v54 = *(_QWORD *)this;
          v55 = *(_DWORD *)(*(_QWORD *)this + 8LL);
          v5 = v55 * v14;
          if ( v55 >= 1 )
          {
            v56 = 0;
            do
            {
              v57 = (google::protobuf::io::CodedOutputStream *)*(unsigned int *)(*(_QWORD *)v54 + 4 * v56);
              if ( (unsigned int)v57 >= 0x80 )
              {
                v58 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v57, a2);
                v54 = *(_QWORD *)this;
              }
              else
              {
                v58 = 1;
              }
              ++v56;
              v5 += v58;
            }
            while ( v56 < *(int *)(v54 + 8) );
          }
          break;
        case 13:
          v69 = *(_QWORD *)this;
          v70 = *(_DWORD *)(*(_QWORD *)this + 8LL);
          v5 = v70 * v14;
          if ( v70 >= 1 )
          {
            v71 = 0;
            do
            {
              v72 = (google::protobuf::io::CodedOutputStream *)*(unsigned int *)(*(_QWORD *)v69 + 4 * v71);
              if ( ((unsigned int)v72 & 0x80000000) != 0 )
              {
                v73 = 10;
              }
              else if ( (unsigned int)v72 >= 0x80 )
              {
                v73 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v72, a2);
                v69 = *(_QWORD *)this;
              }
              else
              {
                v73 = 1;
              }
              ++v71;
              v5 += v73;
            }
            while ( v71 < *(int *)(v69 + 8) );
          }
          break;
        case 16:
          v49 = *(_QWORD *)this;
          v50 = *(_DWORD *)(*(_QWORD *)this + 8LL);
          v5 = v50 * v14;
          if ( v50 >= 1 )
          {
            v51 = 0;
            do
            {
              v52 = (google::protobuf::io::CodedOutputStream *)((2 * *(_DWORD *)(*(_QWORD *)v49 + 4 * v51))
                                                              ^ (unsigned int)(*(int *)(*(_QWORD *)v49 + 4 * v51) >> 31));
              if ( (unsigned int)v52 >= 0x80 )
              {
                v53 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v52, a2);
                v49 = *(_QWORD *)this;
              }
              else
              {
                v53 = 1;
              }
              ++v51;
              v5 += v53;
            }
            while ( v51 < *(int *)(v49 + 8) );
          }
          break;
        case 17:
          v79 = *(_QWORD **)this;
          v80 = *(_DWORD *)(*(_QWORD *)this + 8LL);
          v5 = v80 * v14;
          if ( v80 >= 1 )
          {
            v81 = 0;
            do
            {
              v82 = google::protobuf::io::CodedOutputStream::VarintSize64(
                      (google::protobuf::io::CodedOutputStream *)((2LL * *(_QWORD *)(*v79 + 8 * v81))
                                                                ^ (*(__int64 *)(*v79 + 8 * v81) >> 63)),
                      a2);
              v79 = *(_QWORD **)this;
              ++v81;
              v5 += v82;
            }
            while ( v81 < *(int *)(*(_QWORD *)this + 8LL) );
          }
          break;
        default:
          return 0;
      }
    }
  }
  else if ( *((_BYTE *)this + 10) )
  {
    return 0;
  }
  else
  {
    v9 = *((unsigned __int8 *)this + 8);
    v10 = (google::protobuf::io::CodedOutputStream *)(unsigned int)(8 * a2);
    if ( (unsigned int)v10 >= 0x80 )
    {
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, a2);
      v12 = *((unsigned __int8 *)this + 8);
    }
    else
    {
      v11 = 1;
      v12 = v9;
    }
    v5 = v11 << (v9 == 10);
    switch ( v12 )
    {
      case 1:
      case 6:
      case 16:
        v5 += 8;
        return v5;
      case 2:
      case 7:
      case 15:
        v5 += 4;
        return v5;
      case 3:
      case 4:
        v48 = *(google::protobuf::io::CodedOutputStream **)this;
        goto LABEL_159;
      case 5:
        v105 = (google::protobuf::io::CodedOutputStream *)*(unsigned int *)this;
        if ( ((unsigned int)v105 & 0x80000000) != 0 )
          goto LABEL_167;
        if ( (unsigned int)v105 < 0x80 )
          goto LABEL_148;
        goto LABEL_153;
      case 8:
        return ++v5;
      case 9:
      case 12:
        v45 = *(_QWORD **)this;
        v46 = *(_QWORD *)(*v45 - 24LL);
        if ( (unsigned int)v46 >= 0x80 )
        {
          v47 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                  (google::protobuf::io::CodedOutputStream *)(unsigned int)v46,
                  a2);
          v46 = *(_QWORD *)(*v45 - 24LL);
        }
        else
        {
          v47 = 1;
        }
        v5 += v47 + v46;
        return v5;
      case 10:
        v106 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 72LL))(*(_QWORD *)this);
        goto LABEL_160;
      case 11:
        v109 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 72LL))(*(_QWORD *)this);
        if ( v109 >= 0x80 )
          v110 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                   (google::protobuf::io::CodedOutputStream *)v109,
                   v108);
        else
          v110 = 1;
        v5 += v109 + v110;
        return v5;
      case 13:
        v105 = (google::protobuf::io::CodedOutputStream *)*(unsigned int *)this;
        if ( (unsigned int)v105 >= 0x80 )
          goto LABEL_153;
        goto LABEL_148;
      case 14:
        v105 = (google::protobuf::io::CodedOutputStream *)*(unsigned int *)this;
        if ( ((unsigned int)v105 & 0x80000000) != 0 )
        {
LABEL_167:
          v106 = 10;
        }
        else if ( (unsigned int)v105 < 0x80 )
        {
LABEL_148:
          v106 = 1;
        }
        else
        {
LABEL_153:
          v106 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v105, a2);
        }
LABEL_160:
        v5 += v106;
        break;
      case 17:
        v105 = (google::protobuf::io::CodedOutputStream *)((2 * *(_DWORD *)this) ^ (unsigned int)(*(int *)this >> 31));
        if ( (unsigned int)v105 < 0x80 )
          goto LABEL_148;
        goto LABEL_153;
      case 18:
        v48 = (google::protobuf::io::CodedOutputStream *)((2LL * *(_QWORD *)this) ^ (*(__int64 *)this >> 63));
LABEL_159:
        v106 = google::protobuf::io::CodedOutputStream::VarintSize64(v48, a2);
        goto LABEL_160;
      default:
        return v5;
    }
  }
  return v5;
}


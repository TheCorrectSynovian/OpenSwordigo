/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CF91C
 * Mangled: _ZN5Caver8DateTime30FormattedTimeIntervalSinceDateERKS0_
 * Demangled: Caver::DateTime::FormattedTimeIntervalSinceDate(Caver::DateTime const&)
 *
 * Callers: 1
 *   0x00000000002007C0  Caver::DateTime::FormattedTimeIntervalSinceDate(Caver::DateTime const&)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200F70  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *   0x00000000005677D4  sub_5677D4
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 509
 *   insn=0x00000000004CF930 string=0x00000000004CF934 "V"
 *   insn=0x00000000004CF948 string=0x00000000004CF94C """
 *   insn=0x00000000004CF94C string=0x00000000004CF950 ""
 *   insn=0x00000000004CF958 string=0x00000000004CF95C "!8b"
 *   insn=0x00000000004CF95C string=0x00000000004CF960 "!"
 *   insn=0x00000000004CF964 string=0x00000000004CF968 "  `"
 *   insn=0x00000000004CF968 string=0x00000000004CF96C "h"
 *   insn=0x00000000004CF970 string=0x00000000004CF974 " @b"
 *   insn=0x00000000004CF970 string=0x00000000004CFA68 " "
 *   insn=0x00000000004CF980 string=0x00000000004CF984 "4Q"
 *   insn=0x00000000004CF990 string=0x00000000004CF994 "w"
 *   insn=0x00000000004CF9AC string=0x00000000004CF9B0 "i"
 *   insn=0x00000000004CF9C0 string=0x00000000005923A5 " "
 *   insn=0x00000000004CF9DC string=0x00000000004CF9E0 "H"
 *   insn=0x00000000004CF9E0 string=0x00000000004CF9E4 "I"
 *   insn=0x00000000004CF9E0 string=0x0000000000597FF7 "minutes"
 *   insn=0x00000000004CF9E4 string=0x00000000004CF9E8 ""
 *   insn=0x00000000004CF9E4 string=0x0000000000597FF0 "minute"
 *   insn=0x00000000004CF9E8 string=0x00000000004CF9EC ")"
 *   insn=0x00000000004CF9F4 string=0x00000000004CF9F8 "!"
 *   insn=0x00000000004CF9F8 string=0x00000000004CF9FC "B"
 *   insn=0x00000000004CFA00 string=0x00000000004CFA04 "t_"
 *   insn=0x00000000004CFA0C string=0x00000000004CFA10 "&k"
 *   insn=0x00000000004CFA44 string=0x00000000004CFA48 ")=G"
 *   insn=0x00000000004CFA48 string=0x00000000004CFA4C "!"
 *   insn=0x00000000004CFA50 string=0x00000000004CFA54 "\t"
 *   insn=0x00000000004CFA50 string=0x00000000004D008C "\t"
 *   insn=0x00000000004CFA54 string=0x00000000004CFA58 "*"
 *   insn=0x00000000004CFA58 string=0x00000000004CFA5C "\n"
 *   insn=0x00000000004CFA64 string=0x00000000004D0098 "?"
 *   insn=0x00000000004CFA98 string=0x00000000004CFA9C "5"
 *   insn=0x00000000004CFAD4 string=0x00000000004CFAD8 "?_"
 *   insn=0x00000000004CFAE4 string=0x00000000004CFAE8 "H"
 *   insn=0x00000000004CFAE8 string=0x00000000004CFAEC "I"
 *   insn=0x00000000004CFAE8 string=0x0000000000598004 "hours"
 *   insn=0x00000000004CFAEC string=0x00000000004CFAF0 ""
 *   insn=0x00000000004CFAEC string=0x0000000000597FFF "hour"
 *   insn=0x00000000004CFAF0 string=0x00000000004CFAF4 ")"
 *   insn=0x00000000004CFAFC string=0x00000000004CFB00 "!"
 *   insn=0x00000000004CFB00 string=0x00000000004CFB04 "B"
 *   insn=0x00000000004CFB08 string=0x00000000004CFB0C "2_"
 *   insn=0x00000000004CFB4C string=0x00000000004CFB50 ")=G"
 *   insn=0x00000000004CFB50 string=0x00000000004CFB54 "!"
 *   insn=0x00000000004CFB58 string=0x00000000004CFB5C "\t"
 *   insn=0x00000000004CFB5C string=0x00000000004CFB60 "*"
 *   insn=0x00000000004CFB60 string=0x00000000004CFB64 "\n"
 *   insn=0x00000000004CFB68 string=0x00000000004CFB6C "K"
 *   insn=0x00000000004CFBC8 string=0x00000000004CFBCC "Wj"
 *   insn=0x00000000004CFBE8 string=0x00000000004CFBEC "Oj"
 *   insn=0x00000000004CFBEC string=0x00000000004CFBF0 "H"
 *   insn=0x00000000004CFBF0 string=0x00000000004CFBF4 "I"
 *   insn=0x00000000004CFBF0 string=0x000000000059800E "days"
 *   insn=0x00000000004CFBF4 string=0x00000000004CFBF8 "9"
 *   insn=0x00000000004CFBF4 string=0x000000000059800A "day"
 *   insn=0x00000000004CFBF8 string=0x00000000004CFBFC "))"
 *   insn=0x00000000004CFC04 string=0x00000000004CFC08 "!"
 *   insn=0x00000000004CFC08 string=0x00000000004CFC0C "B"
 *   insn=0x00000000004CFC4C string=0x00000000004CFC50 "@"
 *   insn=0x00000000004CFC54 string=0x00000000004CFC58 ")=G"
 *   insn=0x00000000004CFC58 string=0x00000000004CFC5C "!"
 *   insn=0x00000000004CFC5C string=0x00000000004CFC60 "i!"
 *   insn=0x00000000004CFC60 string=0x00000000004CFC64 "\t"
 *   insn=0x00000000004CFC64 string=0x00000000004CFC68 "*"
 *   insn=0x00000000004CFC68 string=0x00000000004CFC6C "\n"
 *   insn=0x00000000004CFC70 string=0x00000000004CFC74 "\t"
 *   insn=0x00000000004CFCC4 string=0x00000000004CFCC8 "Uh"
 *   insn=0x00000000004CFCF0 string=0x00000000004CFCF4 "j"
 *   insn=0x00000000004CFCF4 string=0x00000000004CFCF8 "H"
 *   insn=0x00000000004CFCF8 string=0x00000000004CFCFC "I"
 *   insn=0x00000000004CFCF8 string=0x0000000000598019 "months"
 *   insn=0x00000000004CFCFC string=0x00000000004CFD00 "e"
 *   insn=0x00000000004CFCFC string=0x0000000000598013 "month"
 *   insn=0x00000000004CFD00 string=0x00000000004CFD04 ")M"
 *   insn=0x00000000004CFD0C string=0x00000000004CFD10 "!"
 *   insn=0x00000000004CFD10 string=0x00000000004CFD14 "B"
 *   insn=0x00000000004CFD24 string=0x00000000004CFD28 "`j"
 *   insn=0x00000000004CFD5C string=0x00000000004CFD60 ")=G"
 *   insn=0x00000000004CFD60 string=0x00000000004CFD64 "!"
 *   insn=0x00000000004CFD64 string=0x00000000004CFD68 ")"
 *   insn=0x00000000004CFD68 string=0x00000000004CFD6C "\t"
 *   insn=0x00000000004CFD6C string=0x00000000004CFD70 "*"
 *   insn=0x00000000004CFD70 string=0x00000000004CFD74 "\n"
 *   insn=0x00000000004CFDA4 string=0x00000000004CFDA8 "r"
 *   insn=0x00000000004CFDE0 string=0x00000000004CFDE4 "|^"
 *   insn=0x00000000004CFDF0 string=0x00000000004CFDF4 "H"
 *   insn=0x00000000004CFDF4 string=0x00000000004CFDF8 "I"
 *   insn=0x00000000004CFDF4 string=0x0000000000598020 "years"
 *   insn=0x00000000004CFDF8 string=0x00000000004CFDFC ""
 *   insn=0x00000000004CFDF8 string=0x000000000059747A "year"
 *   insn=0x00000000004CFDFC string=0x00000000004CFE00 ")"
 *   insn=0x00000000004CFE08 string=0x00000000004CFE0C "!"
 *   insn=0x00000000004CFE0C string=0x00000000004CFE10 "B"
 *   insn=0x00000000004CFE14 string=0x00000000004CFE18 "o^"
 *   insn=0x00000000004CFE20 string=0x00000000004CFE24 "!j"
 *   insn=0x00000000004CFE30 string=0x00000000004CFE34 "a"
 *   insn=0x00000000004CFE60 string=0x00000000004CFE64 "A"
 *   insn=0x00000000004CFE64 string=0x00000000004D016C "Y"
 *   insn=0x00000000004CFE80 string=0x00000000004CFE84 ")=G"
 *   insn=0x00000000004CFE84 string=0x00000000004CFE88 "!"
 *   insn=0x00000000004CFE88 string=0x00000000004CFE8C ")"
 *   insn=0x00000000004CFE8C string=0x00000000004CFE90 "\t"
 *   insn=0x00000000004CFE8C string=0x00000000004CFF10 "\t"
 *   insn=0x00000000004CFE90 string=0x00000000004CFE94 "*"
 *   insn=0x00000000004CFE94 string=0x00000000004CFE98 "\n"
 *   insn=0x00000000004CFEA0 string=0x00000000004CFF1C "?"
 *   insn=0x00000000004CFEA4 string=0x00000000004CFEA8 ")=G"
 *   insn=0x00000000004CFEA8 string=0x00000000004CFEAC "!"
 *   insn=0x00000000004CFEAC string=0x00000000004CFEB0 "\t"
 *   insn=0x00000000004CFEB0 string=0x00000000004CFEB4 "\t"
 *   insn=0x00000000004CFEB0 string=0x00000000004CFF30 "\t"
 *   insn=0x00000000004CFEB4 string=0x00000000004CFEB8 "*"
 *   insn=0x00000000004CFEB8 string=0x00000000004CFEBC "\n"
 *   insn=0x00000000004CFEC4 string=0x00000000004CFF3C "?"
 *   insn=0x00000000004CFEC8 string=0x00000000004CFECC ")=G"
 *   insn=0x00000000004CFECC string=0x00000000004CFED0 "!"
 *   insn=0x00000000004CFED0 string=0x00000000004CFED4 ")"
 *   insn=0x00000000004CFED4 string=0x00000000004CFED8 "\t"
 *   insn=0x00000000004CFED4 string=0x00000000004CFF98 "\t"
 *   insn=0x00000000004CFED8 string=0x00000000004CFEDC "*"
 *   insn=0x00000000004CFEDC string=0x00000000004CFEE0 "\n"
 *   insn=0x00000000004CFEE4 string=0x00000000004CFEE8 "/"
 *   insn=0x00000000004CFEE8 string=0x00000000004CFFA4 "?"
 *   insn=0x00000000004CFEEC string=0x00000000004CFEF0 ")=G"
 *   insn=0x00000000004CFEF0 string=0x00000000004CFEF4 "!"
 *   insn=0x00000000004CFEF4 string=0x00000000004CFEF8 "\t"
 *   insn=0x00000000004CFEF8 string=0x00000000004CFEFC "\t"
 *   insn=0x00000000004CFEF8 string=0x00000000004CFFB8 "\t"
 *   insn=0x00000000004CFEFC string=0x00000000004CFF00 "*"
 *   insn=0x00000000004CFF00 string=0x00000000004CFF04 "\n"
 *   insn=0x00000000004CFF08 string=0x00000000004CFF0C "."
 *   insn=0x00000000004CFF0C string=0x00000000004CFFC4 "?"
 *   insn=0x00000000004CFF10 string=0x00000000004CFF14 "*"
 *   insn=0x00000000004CFF14 string=0x00000000004CFF18 "\n"
 *   insn=0x00000000004CFF1C string=0x00000000004CFF20 ","
 *   insn=0x00000000004CFF30 string=0x00000000004CFF34 "*"
 *   insn=0x00000000004CFF34 string=0x00000000004CFF38 "\n"
 *   insn=0x00000000004CFF50 string=0x00000000004CFF54 ")=G"
 *   insn=0x00000000004CFF54 string=0x00000000004CFF58 "!"
 *   insn=0x00000000004CFF5C string=0x00000000004CFF60 "\t"
 *   insn=0x00000000004CFF5C string=0x00000000004D00AC "\t"
 *   insn=0x00000000004CFF60 string=0x00000000004CFF64 "*"
 *   insn=0x00000000004CFF64 string=0x00000000004CFF68 "\n"
 *   insn=0x00000000004CFF6C string=0x00000000004CFF70 "R"
 *   insn=0x00000000004CFF70 string=0x00000000004D00B8 "?"
 *   insn=0x00000000004CFF74 string=0x00000000004CFF78 ")=G"
 *   insn=0x00000000004CFF78 string=0x00000000004CFF7C "!"
 *   insn=0x00000000004CFF7C string=0x00000000004CFF80 "i\n"
 *   insn=0x00000000004CFF80 string=0x00000000004CFF84 "\t"
 *   insn=0x00000000004CFF80 string=0x00000000004D00CC "\t"
 *   insn=0x00000000004CFF84 string=0x00000000004CFF88 "*"
 *   insn=0x00000000004CFF88 string=0x00000000004CFF8C "\n"
 *   insn=0x00000000004CFF90 string=0x00000000004CFF94 "Q"
 *   insn=0x00000000004CFF94 string=0x00000000004D00D8 "?"
 *   insn=0x00000000004CFF98 string=0x00000000004CFF9C "*"
 *   insn=0x00000000004CFF9C string=0x00000000004CFFA0 "\n"
 *   insn=0x00000000004CFFA4 string=0x00000000004CFFA8 ","
 *   insn=0x00000000004CFFB8 string=0x00000000004CFFBC "*"
 *   insn=0x00000000004CFFBC string=0x00000000004CFFC0 "\n"
 *   insn=0x00000000004CFFD8 string=0x00000000004CFFDC ")=G"
 *   insn=0x00000000004CFFDC string=0x00000000004CFFE0 "!"
 *   insn=0x00000000004CFFE0 string=0x00000000004CFFE4 "I"
 *   insn=0x00000000004CFFE4 string=0x00000000004CFFE8 "\t"
 *   insn=0x00000000004CFFE4 string=0x00000000004D00EC "\t"
 *   insn=0x00000000004CFFE8 string=0x00000000004CFFEC "*"
 *   insn=0x00000000004CFFEC string=0x00000000004CFFF0 "\n"
 *   insn=0x00000000004CFFF4 string=0x00000000004CFFF8 "@"
 *   insn=0x00000000004CFFF8 string=0x00000000004D00F8 "?"
 *   insn=0x00000000004CFFFC string=0x00000000004D0000 ")=G"
 *   insn=0x00000000004D0000 string=0x00000000004D0004 "!"
 *   insn=0x00000000004D0004 string=0x00000000004D0008 ")"
 *   insn=0x00000000004D0008 string=0x00000000004D000C "\t"
 *   insn=0x00000000004D0008 string=0x00000000004D010C "\t"
 *   insn=0x00000000004D000C string=0x00000000004D0010 "*"
 *   insn=0x00000000004D0010 string=0x00000000004D0014 "\n"
 *   insn=0x00000000004D0018 string=0x00000000004D001C "?"
 *   insn=0x00000000004D001C string=0x00000000004D0118 "?"
 *   insn=0x00000000004D0020 string=0x00000000004D0024 ")=G"
 *   insn=0x00000000004D0024 string=0x00000000004D0028 "!"
 *   insn=0x00000000004D0028 string=0x00000000004D002C "\t"
 *   insn=0x00000000004D002C string=0x00000000004D0030 "\t"
 *   insn=0x00000000004D002C string=0x00000000004D012C "\t"
 *   insn=0x00000000004D0030 string=0x00000000004D0034 "*"
 *   insn=0x00000000004D0034 string=0x00000000004D0038 "\n"
 *   insn=0x00000000004D003C string=0x00000000004D0040 ">"
 *   insn=0x00000000004D0040 string=0x00000000004D0138 "?"
 *   insn=0x00000000004D0044 string=0x00000000004D0048 ")=G"
 *   insn=0x00000000004D0048 string=0x00000000004D004C "!"
 *   insn=0x00000000004D0050 string=0x00000000004D0054 "\t"
 *   insn=0x00000000004D0050 string=0x00000000004D014C "\t"
 *   insn=0x00000000004D0054 string=0x00000000004D0058 "*"
 *   insn=0x00000000004D0058 string=0x00000000004D005C "\n"
 *   insn=0x00000000004D0060 string=0x00000000004D0064 "="
 *   insn=0x00000000004D0064 string=0x00000000004D0158 "?"
 *   insn=0x00000000004D0068 string=0x00000000004D006C ")=G"
 *   insn=0x00000000004D006C string=0x00000000004D0070 "!"
 *   insn=0x00000000004D0074 string=0x00000000004D0078 "\t"
 *   insn=0x00000000004D0078 string=0x00000000004D007C "*"
 *   insn=0x00000000004D007C string=0x00000000004D0080 "\n"
 *   insn=0x00000000004D008C string=0x00000000004D0090 "*"
 *   insn=0x00000000004D0090 string=0x00000000004D0094 "\n"
 *   insn=0x00000000004D00A4 string=0x00000000004D00A8 "l"
 *   insn=0x00000000004D00AC string=0x00000000004D00B0 "*"
 *   insn=0x00000000004D00B0 string=0x00000000004D00B4 "\n"
 *   insn=0x00000000004D00CC string=0x00000000004D00D0 "*"
 *   insn=0x00000000004D00D0 string=0x00000000004D00D4 "\n"
 *   insn=0x00000000004D00D8 string=0x00000000004D00DC "L"
 *   insn=0x00000000004D00EC string=0x00000000004D00F0 "*"
 *   insn=0x00000000004D00F0 string=0x00000000004D00F4 "\n"
 *   insn=0x00000000004D0104 string=0x00000000004D0108 ""
 *   insn=0x00000000004D010C string=0x00000000004D0110 "*"
 *   insn=0x00000000004D0110 string=0x00000000004D0114 "\n"
 *   insn=0x00000000004D0124 string=0x00000000004D0128 "\t"
 *   insn=0x00000000004D012C string=0x00000000004D0130 "*"
 *   insn=0x00000000004D0130 string=0x00000000004D0134 "\n"
 *   insn=0x00000000004D0144 string=0x00000000004D0148 "<"
 *   insn=0x00000000004D014C string=0x00000000004D0150 "*"
 *   insn=0x00000000004D0150 string=0x00000000004D0154 "\n"
 *   insn=0x00000000004D0158 string=0x00000000004D015C "l"
 *   insn=0x00000000004D0164 string=0x00000000004D0168 "8"
 *   insn=0x00000000004D016C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D0174 string=0x00000000004D0178 "(a"
 *   insn=0x00000000004D0184 string=0x00000000004D0188 "J=G"
 *   insn=0x00000000004D0188 string=0x00000000004D018C ")!"
 *   insn=0x00000000004D018C string=0x00000000004D0190 "J"
 *   insn=0x00000000004D0190 string=0x00000000004D0194 "*"
 *   insn=0x00000000004D0190 string=0x00000000004D0218 "*"
 *   insn=0x00000000004D0194 string=0x00000000004D0198 "K"
 *   insn=0x00000000004D0198 string=0x00000000004D019C "+"
 *   insn=0x00000000004D01A0 string=0x00000000004D01A4 " "
 *   insn=0x00000000004D01A4 string=0x00000000004D0224 "_"
 *   insn=0x00000000004D01AC string=0x00000000004D01B0 "(a"
 *   insn=0x00000000004D01BC string=0x00000000004D01C0 "J=G"
 *   insn=0x00000000004D01C0 string=0x00000000004D01C4 ")!"
 *   insn=0x00000000004D01C4 string=0x00000000004D01C8 "j"
 *   insn=0x00000000004D01C8 string=0x00000000004D01CC "*"
 *   insn=0x00000000004D01C8 string=0x00000000004D0274 "*"
 *   insn=0x00000000004D01CC string=0x00000000004D01D0 "K"
 *   insn=0x00000000004D01D0 string=0x00000000004D01D4 "+"
 *   insn=0x00000000004D01D8 string=0x00000000004D01DC ")"
 *   insn=0x00000000004D01DC string=0x00000000004D0280 "_"
 *   insn=0x00000000004D01E4 string=0x00000000004D01E8 "(a"
 *   insn=0x00000000004D01EC string=0x00000000004D01F0 "`"
 *   insn=0x00000000004D01F4 string=0x00000000004D01F8 "J=G"
 *   insn=0x00000000004D01F8 string=0x00000000004D01FC ")!"
 *   insn=0x00000000004D0200 string=0x00000000004D0204 "*"
 *   insn=0x00000000004D0204 string=0x00000000004D0208 "K"
 *   insn=0x00000000004D0208 string=0x00000000004D020C "+"
 *   insn=0x00000000004D0218 string=0x00000000004D021C "K"
 *   insn=0x00000000004D021C string=0x00000000004D0220 "+"
 *   insn=0x00000000004D0230 string=0x00000000004D0234 "\h"
 *   insn=0x00000000004D0240 string=0x00000000004D0244 "(a"
 *   insn=0x00000000004D0248 string=0x00000000004D024C " "
 *   insn=0x00000000004D0250 string=0x00000000004D0254 "J=G"
 *   insn=0x00000000004D0254 string=0x00000000004D0258 ")!"
 *   insn=0x00000000004D025C string=0x00000000004D0260 "*"
 *   insn=0x00000000004D0260 string=0x00000000004D0264 "K"
 *   insn=0x00000000004D0264 string=0x00000000004D0268 "+"
 *   insn=0x00000000004D0274 string=0x00000000004D0278 "K"
 *   insn=0x00000000004D0278 string=0x00000000004D027C "+"
 *   insn=0x00000000004D0280 string=0x00000000004D0284 "l"
 *   insn=0x00000000004D028C string=0x00000000004D0290 "Eh"
 *   insn=0x00000000004D02AC string=0x00000000004D02B0 ")=G"
 *   insn=0x00000000004D02B0 string=0x00000000004D02B4 "!"
 *   insn=0x00000000004D02B8 string=0x00000000004D02BC "\t"
 *   insn=0x00000000004D02B8 string=0x00000000004D02D0 "\t"
 *   insn=0x00000000004D02BC string=0x00000000004D02C0 "*"
 *   insn=0x00000000004D02C0 string=0x00000000004D02C4 "\n"
 *   insn=0x00000000004D02CC string=0x00000000004D02DC "?"
 *   insn=0x00000000004D02D0 string=0x00000000004D02D4 "*"
 *   insn=0x00000000004D02D4 string=0x00000000004D02D8 "\n"
 *   insn=0x00000000004D02E4 string=0x00000000004D02E8 "+"
 *   insn=0x00000000004D0300 string=0x00000000004D0304 ")=G"
 *   insn=0x00000000004D0304 string=0x00000000004D0308 "!"
 *   insn=0x00000000004D030C string=0x00000000004D0310 "\t"
 *   insn=0x00000000004D030C string=0x00000000004D0324 "\t"
 *   insn=0x00000000004D0310 string=0x00000000004D0314 "*"
 *   insn=0x00000000004D0314 string=0x00000000004D0318 "\n"
 *   insn=0x00000000004D0320 string=0x00000000004D0330 "?"
 *   insn=0x00000000004D0324 string=0x00000000004D0328 "*"
 *   insn=0x00000000004D0328 string=0x00000000004D032C "\n"
 *   insn=0x00000000004D0338 string=0x00000000004D033C "-"
 *   insn=0x00000000004D0344 string=0x00000000004D0348 "(a"
 *   insn=0x00000000004D034C string=0x00000000004D0350 "`"
 *   insn=0x00000000004D0354 string=0x00000000004D0358 "J=G"
 *   insn=0x00000000004D0358 string=0x00000000004D035C ")!"
 *   insn=0x00000000004D0360 string=0x00000000004D0364 "*"
 *   insn=0x00000000004D0360 string=0x00000000004D0378 "*"
 *   insn=0x00000000004D0364 string=0x00000000004D0368 "K"
 *   insn=0x00000000004D0368 string=0x00000000004D036C "+"
 *   insn=0x00000000004D0374 string=0x00000000004D0384 "_"
 *   insn=0x00000000004D0378 string=0x00000000004D037C "K"
 *   insn=0x00000000004D037C string=0x00000000004D0380 "+"
 *   insn=0x00000000004D03A0 string=0x00000000004D03A4 "(a"
 *   insn=0x00000000004D03A8 string=0x00000000004D03AC "@"
 *   insn=0x00000000004D03B0 string=0x00000000004D03B4 "J=G"
 *   insn=0x00000000004D03B4 string=0x00000000004D03B8 ")!"
 *   insn=0x00000000004D03BC string=0x00000000004D03C0 "*"
 *   insn=0x00000000004D03BC string=0x00000000004D03D4 "*"
 *   insn=0x00000000004D03C0 string=0x00000000004D03C4 "K"
 *   insn=0x00000000004D03C4 string=0x00000000004D03C8 "+"
 *   insn=0x00000000004D03D0 string=0x00000000004D03E0 "_"
 *   insn=0x00000000004D03D4 string=0x00000000004D03D8 "K"
 *   insn=0x00000000004D03D8 string=0x00000000004D03DC "+"
 *   insn=0x00000000004D0404 string=0x00000000004D0408 " /"
 *   insn=0x00000000004D0408 string=0x00000000004D09EC "h"
 *   insn=0x00000000004D040C string=0x00000000004D0410 ")=G"
 *   insn=0x00000000004D0410 string=0x00000000004D0414 "!"
 *   insn=0x00000000004D0414 string=0x00000000004D0418 "i+"
 *   insn=0x00000000004D0418 string=0x00000000004D041C "\t"
 *   insn=0x00000000004D0418 string=0x00000000004D0984 "\t"
 *   insn=0x00000000004D041C string=0x00000000004D0420 "*"
 *   insn=0x00000000004D0420 string=0x00000000004D0424 "\n"
 *   insn=0x00000000004D0428 string=0x00000000004D042C "Y"
 *   insn=0x00000000004D042C string=0x00000000004D0990 "?"
 *   insn=0x00000000004D043C string=0x00000000004D0440 "`-"
 *   insn=0x00000000004D0444 string=0x00000000004D0448 ")=G"
 *   insn=0x00000000004D0448 string=0x00000000004D044C "!"
 *   insn=0x00000000004D0450 string=0x00000000004D0454 "\t"
 *   insn=0x00000000004D0454 string=0x00000000004D0458 "*"
 *   insn=0x00000000004D0458 string=0x00000000004D045C "\n"
 *   insn=0x00000000004D0460 string=0x00000000004D0464 "K"
 *   insn=0x00000000004D046C string=0x00000000004D0470 "(a"
 *   insn=0x00000000004D0474 string=0x00000000004D0478 "@"
 *   insn=0x00000000004D047C string=0x00000000004D0480 "J=G"
 *   insn=0x00000000004D0480 string=0x00000000004D0484 ")!"
 *   insn=0x00000000004D0488 string=0x00000000004D048C "*"
 *   insn=0x00000000004D0488 string=0x00000000004D04D8 "*"
 *   insn=0x00000000004D048C string=0x00000000004D0490 "K"
 *   insn=0x00000000004D0490 string=0x00000000004D0494 "+"
 *   insn=0x00000000004D049C string=0x00000000004D04E4 "_"
 *   insn=0x00000000004D04A4 string=0x00000000004D04A8 "(a"
 *   insn=0x00000000004D04B4 string=0x00000000004D04B8 "J=G"
 *   insn=0x00000000004D04B8 string=0x00000000004D04BC ")!"
 *   insn=0x00000000004D04C0 string=0x00000000004D04C4 "*"
 *   insn=0x00000000004D04C4 string=0x00000000004D04C8 "K"
 *   insn=0x00000000004D04C8 string=0x00000000004D04CC "+"
 *   insn=0x00000000004D04D8 string=0x00000000004D04DC "K"
 *   insn=0x00000000004D04DC string=0x00000000004D04E0 "+"
 *   insn=0x00000000004D0508 string=0x00000000004D050C " "
 *   insn=0x00000000004D0510 string=0x00000000004D0514 ")=G"
 *   insn=0x00000000004D0514 string=0x00000000004D0518 "!"
 *   insn=0x00000000004D051C string=0x00000000004D0520 "\t"
 *   insn=0x00000000004D051C string=0x00000000004D0534 "\t"
 *   insn=0x00000000004D0520 string=0x00000000004D0524 "*"
 *   insn=0x00000000004D0524 string=0x00000000004D0528 "\n"
 *   insn=0x00000000004D0530 string=0x00000000004D0540 "?"
 *   insn=0x00000000004D0534 string=0x00000000004D0538 "*"
 *   insn=0x00000000004D0538 string=0x00000000004D053C "\n"
 *   insn=0x00000000004D0540 string=0x00000000004D0544 "l"
 *   insn=0x00000000004D0554 string=0x00000000004D0558 "(a"
 *   insn=0x00000000004D0564 string=0x00000000004D0568 "J=G"
 *   insn=0x00000000004D0568 string=0x00000000004D056C ")!"
 *   insn=0x00000000004D0570 string=0x00000000004D0574 "*"
 *   insn=0x00000000004D0570 string=0x00000000004D0588 "*"
 *   insn=0x00000000004D0574 string=0x00000000004D0578 "K"
 *   insn=0x00000000004D0578 string=0x00000000004D057C "+"
 *   insn=0x00000000004D0584 string=0x00000000004D0594 "_"
 *   insn=0x00000000004D0588 string=0x00000000004D058C "K"
 *   insn=0x00000000004D058C string=0x00000000004D0590 "+"
 *   insn=0x00000000004D05C0 string=0x00000000004D05C4 ")=G"
 *   insn=0x00000000004D05C4 string=0x00000000004D05C8 "!"
 *   insn=0x00000000004D05CC string=0x00000000004D05D0 "\t"
 *   insn=0x00000000004D05D0 string=0x00000000004D05D4 "*"
 *   insn=0x00000000004D05D4 string=0x00000000004D05D8 "\n"
 *   insn=0x00000000004D05E8 string=0x00000000004D05EC "(a"
 *   insn=0x00000000004D05F8 string=0x00000000004D05FC "J=G"
 *   insn=0x00000000004D05FC string=0x00000000004D0600 ")!"
 *   insn=0x00000000004D0604 string=0x00000000004D0608 "*"
 *   insn=0x00000000004D0604 string=0x00000000004D0A58 "*"
 *   insn=0x00000000004D0608 string=0x00000000004D060C "K"
 *   insn=0x00000000004D060C string=0x00000000004D0610 "+"
 *   insn=0x00000000004D0618 string=0x00000000004D0A64 "_"
 *   insn=0x00000000004D0620 string=0x00000000004D0624 "(a"
 *   insn=0x00000000004D0630 string=0x00000000004D0634 "J=G"
 *   insn=0x00000000004D0634 string=0x00000000004D0638 ")!"
 *   insn=0x00000000004D063C string=0x00000000004D0640 "*"
 *   insn=0x00000000004D0640 string=0x00000000004D0644 "K"
 *   insn=0x00000000004D0644 string=0x00000000004D0648 "+"
 *   insn=0x00000000004D0658 string=0x00000000004D065C "(a"
 *   insn=0x00000000004D0660 string=0x00000000004D0664 "@"
 *   insn=0x00000000004D0668 string=0x00000000004D066C "J=G"
 *   insn=0x00000000004D066C string=0x00000000004D0670 ")!"
 *   insn=0x00000000004D0674 string=0x00000000004D0678 "*"
 *   insn=0x00000000004D0674 string=0x00000000004D06C4 "*"
 *   insn=0x00000000004D0678 string=0x00000000004D067C "K"
 *   insn=0x00000000004D067C string=0x00000000004D0680 "+"
 *   insn=0x00000000004D0688 string=0x00000000004D06D0 "_"
 *   insn=0x00000000004D0690 string=0x00000000004D0694 "(a"
 *   insn=0x00000000004D06A0 string=0x00000000004D06A4 "J=G"
 *   insn=0x00000000004D06A4 string=0x00000000004D06A8 ")!"
 *   insn=0x00000000004D06AC string=0x00000000004D06B0 "*"
 *   insn=0x00000000004D06B0 string=0x00000000004D06B4 "K"
 *   insn=0x00000000004D06B4 string=0x00000000004D06B8 "+"
 *   insn=0x00000000004D06C4 string=0x00000000004D06C8 "K"
 *   insn=0x00000000004D06C8 string=0x00000000004D06CC "+"
 *   insn=0x00000000004D06DC string=0x00000000004D06E0 "1g"
 *   insn=0x00000000004D06F4 string=0x00000000004D06F8 " "
 *   insn=0x00000000004D06FC string=0x00000000004D0700 ")=G"
 *   insn=0x00000000004D0700 string=0x00000000004D0704 "!"
 *   insn=0x00000000004D0708 string=0x00000000004D070C "\t"
 *   insn=0x00000000004D0708 string=0x00000000004D0720 "\t"
 *   insn=0x00000000004D070C string=0x00000000004D0710 "*"
 *   insn=0x00000000004D0710 string=0x00000000004D0714 "\n"
 *   insn=0x00000000004D071C string=0x00000000004D072C "?"
 *   insn=0x00000000004D0720 string=0x00000000004D0724 "*"
 *   insn=0x00000000004D0724 string=0x00000000004D0728 "\n"
 *   insn=0x00000000004D072C string=0x00000000004D0730 "l"
 *   insn=0x00000000004D0740 string=0x00000000004D0744 "(a"
 *   insn=0x00000000004D0750 string=0x00000000004D0754 "J=G"
 *   insn=0x00000000004D0754 string=0x00000000004D0758 ")!"
 *   insn=0x00000000004D075C string=0x00000000004D0760 "*"
 *   insn=0x00000000004D075C string=0x00000000004D0774 "*"
 *   insn=0x00000000004D0760 string=0x00000000004D0764 "K"
 *   insn=0x00000000004D0764 string=0x00000000004D0768 "+"
 *   insn=0x00000000004D0770 string=0x00000000004D0780 "_"
 *   insn=0x00000000004D0774 string=0x00000000004D0778 "K"
 *   insn=0x00000000004D0778 string=0x00000000004D077C "+"
 *   insn=0x00000000004D07A4 string=0x00000000004D07A8 " "
 *   insn=0x00000000004D07AC string=0x00000000004D07B0 ")=G"
 *   insn=0x00000000004D07B0 string=0x00000000004D07B4 "!"
 *   insn=0x00000000004D07B4 string=0x00000000004D07B8 "i"
 *   insn=0x00000000004D07B8 string=0x00000000004D07BC "\t"
 *   insn=0x00000000004D07BC string=0x00000000004D07C0 "*"
 *   insn=0x00000000004D07C0 string=0x00000000004D07C4 "\n"
 *   insn=0x00000000004D07C8 string=0x00000000004D07CC "q"
 *   insn=0x00000000004D07D4 string=0x00000000004D07D8 "(a"
 *   insn=0x00000000004D07DC string=0x00000000004D07E0 "`"
 *   insn=0x00000000004D07E4 string=0x00000000004D07E8 "J=G"
 *   insn=0x00000000004D07E8 string=0x00000000004D07EC ")!"
 *   insn=0x00000000004D07EC string=0x00000000004D07F0 "J"
 *   insn=0x00000000004D07F0 string=0x00000000004D07F4 "*"
 *   insn=0x00000000004D07F4 string=0x00000000004D07F8 "K"
 *   insn=0x00000000004D07F8 string=0x00000000004D07FC "+"
 *   insn=0x00000000004D080C string=0x00000000004D0810 "(a"
 *   insn=0x00000000004D0814 string=0x00000000004D0818 "@"
 *   insn=0x00000000004D081C string=0x00000000004D0820 "J=G"
 *   insn=0x00000000004D0820 string=0x00000000004D0824 ")!"
 *   insn=0x00000000004D0828 string=0x00000000004D082C "*"
 *   insn=0x00000000004D0828 string=0x00000000004D0878 "*"
 *   insn=0x00000000004D082C string=0x00000000004D0830 "K"
 *   insn=0x00000000004D0830 string=0x00000000004D0834 "+"
 *   insn=0x00000000004D083C string=0x00000000004D0884 "_"
 *   insn=0x00000000004D0844 string=0x00000000004D0848 "(a"
 *   insn=0x00000000004D0854 string=0x00000000004D0858 "J=G"
 *   insn=0x00000000004D0858 string=0x00000000004D085C ")!"
 *   insn=0x00000000004D0860 string=0x00000000004D0864 "*"
 *   insn=0x00000000004D0864 string=0x00000000004D0868 "K"
 *   insn=0x00000000004D0868 string=0x00000000004D086C "+"
 *   insn=0x00000000004D0878 string=0x00000000004D087C "K"
 *   insn=0x00000000004D087C string=0x00000000004D0880 "+"
 *   insn=0x00000000004D08A8 string=0x00000000004D08AC " "
 *   insn=0x00000000004D08B0 string=0x00000000004D08B4 ")=G"
 *   insn=0x00000000004D08B4 string=0x00000000004D08B8 "!"
 *   insn=0x00000000004D08BC string=0x00000000004D08C0 "\t"
 *   insn=0x00000000004D08BC string=0x00000000004D08D4 "\t"
 *   insn=0x00000000004D08C0 string=0x00000000004D08C4 "*"
 *   insn=0x00000000004D08C4 string=0x00000000004D08C8 "\n"
 *   insn=0x00000000004D08D0 string=0x00000000004D08E0 "?"
 *   insn=0x00000000004D08D4 string=0x00000000004D08D8 "*"
 *   insn=0x00000000004D08D8 string=0x00000000004D08DC "\n"
 *   insn=0x00000000004D08E0 string=0x00000000004D08E4 "l"
 *   insn=0x00000000004D08F4 string=0x00000000004D08F8 "(a"
 *   insn=0x00000000004D0904 string=0x00000000004D0908 "J=G"
 *   insn=0x00000000004D0908 string=0x00000000004D090C ")!"
 *   insn=0x00000000004D0910 string=0x00000000004D0914 "*"
 *   insn=0x00000000004D0910 string=0x00000000004D0928 "*"
 *   insn=0x00000000004D0914 string=0x00000000004D0918 "K"
 *   insn=0x00000000004D0918 string=0x00000000004D091C "+"
 *   insn=0x00000000004D0924 string=0x00000000004D0934 "_"
 *   insn=0x00000000004D0928 string=0x00000000004D092C "K"
 *   insn=0x00000000004D092C string=0x00000000004D0930 "+"
 *   insn=0x00000000004D0960 string=0x00000000004D0964 ")=G"
 *   insn=0x00000000004D0964 string=0x00000000004D0968 "!"
 *   insn=0x00000000004D096C string=0x00000000004D0970 "\t"
 *   insn=0x00000000004D0970 string=0x00000000004D0974 "*"
 *   insn=0x00000000004D0974 string=0x00000000004D0978 "\n"
 *   insn=0x00000000004D0984 string=0x00000000004D0988 "*"
 *   insn=0x00000000004D0988 string=0x00000000004D098C "\n"
 *   insn=0x00000000004D0998 string=0x00000000004D099C "6"
 *   insn=0x00000000004D099C string=0x00000000004D0A74 "Lf"
 *   insn=0x00000000004D09A4 string=0x00000000004D09A8 "(a"
 *   insn=0x00000000004D09B4 string=0x00000000004D09B8 "J=G"
 *   insn=0x00000000004D09B8 string=0x00000000004D09BC ")!"
 *   insn=0x00000000004D09C0 string=0x00000000004D09C4 "*"
 *   insn=0x00000000004D09C4 string=0x00000000004D09C8 "K"
 *   insn=0x00000000004D09C8 string=0x00000000004D09CC "+"
 *   insn=0x00000000004D09D0 string=0x00000000004D09D4 "$"
 *   insn=0x00000000004D09DC string=0x00000000004D09E0 "(a"
 *   insn=0x00000000004D09E4 string=0x00000000004D09E8 "a"
 *   insn=0x00000000004D09FC string=0x00000000004D0A00 ")=G"
 *   insn=0x00000000004D0A00 string=0x00000000004D0A04 "!"
 *   insn=0x00000000004D0A08 string=0x00000000004D0A0C "\t"
 *   insn=0x00000000004D0A08 string=0x00000000004D0A7C "\t"
 *   insn=0x00000000004D0A0C string=0x00000000004D0A10 "*"
 *   insn=0x00000000004D0A10 string=0x00000000004D0A14 "\n"
 *   insn=0x00000000004D0A18 string=0x00000000004D0A1C "?"
 *   insn=0x00000000004D0A1C string=0x00000000004D0A20 "l"
 *   insn=0x00000000004D0A24 string=0x00000000004D0A28 "_f"
 *   insn=0x00000000004D0A34 string=0x00000000004D0A38 "J=G"
 *   insn=0x00000000004D0A38 string=0x00000000004D0A3C ")!"
 *   insn=0x00000000004D0A40 string=0x00000000004D0A44 "*"
 *   insn=0x00000000004D0A44 string=0x00000000004D0A48 "K"
 *   insn=0x00000000004D0A48 string=0x00000000004D0A4C "+"
 *   insn=0x00000000004D0A58 string=0x00000000004D0A5C "K"
 *   insn=0x00000000004D0A5C string=0x00000000004D0A60 "+"
 *   insn=0x00000000004D0A64 string=0x00000000004D0A68 ","
 *   insn=0x00000000004D0A7C string=0x00000000004D0A80 "*"
 *   insn=0x00000000004D0A80 string=0x00000000004D0A84 "\n"
 *   insn=0x00000000004D0A84 string=0x00000000004D0A88 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::DateTime::FormattedTimeIntervalSinceDate(
        Caver::DateTime *this@<X0>,
        const Caver::DateTime *a2@<X1>,
        _QWORD *a3@<X8>)
{
  double v4; // d1
  float v5; // s0
  int v6; // w23
  __int64 v7; // x0
  const char *v8; // x1
  __int64 v9; // x2
  void *v10; // x0
  void *v11; // x0
  char *v12; // x0
  unsigned int *v13; // x8
  int v14; // w9
  double v15; // d0
  float v16; // s0
  int v17; // w23
  __int64 v18; // x0
  const char *v19; // x1
  __int64 v20; // x2
  void *v21; // x0
  void *v22; // x0
  double v23; // d0
  float v24; // s0
  int v25; // w23
  __int64 v26; // x0
  const char *v27; // x1
  __int64 v28; // x2
  void *v29; // x0
  void *v30; // x0
  double v31; // d0
  float v32; // s0
  int v33; // w23
  __int64 v34; // x0
  const char *v35; // x1
  __int64 v36; // x2
  void *v37; // x0
  void *v38; // x0
  float v39; // s0
  int v40; // w23
  __int64 v41; // x0
  const char *v42; // x1
  __int64 v43; // x2
  void *v44; // x0
  void *v45; // x0
  unsigned int *v46; // x8
  int v47; // w9
  unsigned int *v48; // x8
  int v49; // w9
  unsigned int *v50; // x8
  int v51; // w9
  unsigned int *v52; // x8
  int v53; // w9
  unsigned int *v54; // x8
  int v55; // w9
  unsigned int *v56; // x8
  int v57; // w9
  unsigned int *v58; // x8
  int v59; // w9
  unsigned int *v60; // x8
  int v61; // w9
  unsigned int *v62; // x8
  int v63; // w9
  unsigned int *v64; // x8
  int v65; // w9
  char *v66; // [xsp+0h] [xbp-70h] BYREF
  __int64 v67; // [xsp+8h] [xbp-68h] BYREF
  __int64 v68; // [xsp+10h] [xbp-60h] BYREF
  _BYTE v69[12]; // [xsp+34h] [xbp-3Ch] BYREF

  *(_QWORD *)&v69[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (*(double *)this - *(double *)a2) / 60.0;
  *a3 = &byte_6FD2F8;
  if ( v4 >= 60.0 )
  {
    v15 = v4 / 60.0;
    if ( v4 / 60.0 >= 24.0 )
    {
      v23 = v15 / 24.0;
      if ( v23 >= 30.0 )
      {
        v31 = v23 / 30.0;
        if ( v31 >= 12.0 )
        {
          v39 = v31 / 12.0;
          v40 = vcvtms_s32_f32(v39);
          v66 = &byte_6FD2F8;
          v41 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
          sub_569E1C(&v66, 0, qword_6FD2E0, v41, &v69[-v41]);
          sub_56A528(&v67, &v66);
          sub_5677D4(&v67, " ", 1);
          sub_56A528(&v68, &v67);
          if ( v40 >= 2 )
            v42 = "years";
          else
            v42 = "year";
          if ( v40 < 2 )
            v43 = 4;
          else
            v43 = 5;
          sub_5677D4(&v68, v42, v43);
          sub_56A6A8(a3);
          v44 = (void *)(v68 - 24);
          if ( (__int64 *)(v68 - 24) != &qword_6FD2E0 )
          {
            v62 = (unsigned int *)(v68 - 8);
            if ( &pthread_create )
            {
              do
                v63 = __ldaxr(v62);
              while ( __stlxr(v63 - 1, v62) );
            }
            else
            {
              v63 = (*v62)--;
            }
            if ( v63 <= 0 )
              operator delete(v44);
          }
          v45 = (void *)(v67 - 24);
          if ( (__int64 *)(v67 - 24) != &qword_6FD2E0 )
          {
            v64 = (unsigned int *)(v67 - 8);
            if ( &pthread_create )
            {
              do
                v65 = __ldaxr(v64);
              while ( __stlxr(v65 - 1, v64) );
            }
            else
            {
              v65 = (*v64)--;
            }
            if ( v65 <= 0 )
              operator delete(v45);
          }
          v12 = v66 - 24;
          if ( v66 - 24 != (char *)&qword_6FD2E0 )
          {
            v13 = (unsigned int *)(v66 - 8);
            if ( &pthread_create )
            {
              do
                v14 = __ldaxr(v13);
              while ( __stlxr(v14 - 1, v13) );
              goto LABEL_109;
            }
            goto LABEL_108;
          }
        }
        else
        {
          v32 = v31;
          v33 = vcvtms_s32_f32(v32);
          v66 = &byte_6FD2F8;
          v34 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
          sub_569E1C(&v66, 0, qword_6FD2E0, v34, &v69[-v34]);
          sub_56A528(&v67, &v66);
          sub_5677D4(&v67, " ", 1);
          sub_56A528(&v68, &v67);
          if ( v33 >= 2 )
            v35 = "months";
          else
            v35 = "month";
          if ( v33 < 2 )
            v36 = 5;
          else
            v36 = 6;
          sub_5677D4(&v68, v35, v36);
          sub_56A6A8(a3);
          v37 = (void *)(v68 - 24);
          if ( (__int64 *)(v68 - 24) != &qword_6FD2E0 )
          {
            v58 = (unsigned int *)(v68 - 8);
            if ( &pthread_create )
            {
              do
                v59 = __ldaxr(v58);
              while ( __stlxr(v59 - 1, v58) );
            }
            else
            {
              v59 = (*v58)--;
            }
            if ( v59 <= 0 )
              operator delete(v37);
          }
          v38 = (void *)(v67 - 24);
          if ( (__int64 *)(v67 - 24) != &qword_6FD2E0 )
          {
            v60 = (unsigned int *)(v67 - 8);
            if ( &pthread_create )
            {
              do
                v61 = __ldaxr(v60);
              while ( __stlxr(v61 - 1, v60) );
            }
            else
            {
              v61 = (*v60)--;
            }
            if ( v61 <= 0 )
              operator delete(v38);
          }
          v12 = v66 - 24;
          if ( v66 - 24 != (char *)&qword_6FD2E0 )
          {
            v13 = (unsigned int *)(v66 - 8);
            if ( &pthread_create )
            {
              do
                v14 = __ldaxr(v13);
              while ( __stlxr(v14 - 1, v13) );
              goto LABEL_109;
            }
            goto LABEL_108;
          }
        }
      }
      else
      {
        v24 = v23;
        v25 = vcvtms_s32_f32(v24);
        v66 = &byte_6FD2F8;
        v26 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
        sub_569E1C(&v66, 0, qword_6FD2E0, v26, &v69[-v26]);
        sub_56A528(&v67, &v66);
        sub_5677D4(&v67, " ", 1);
        sub_56A528(&v68, &v67);
        if ( v25 >= 2 )
          v27 = "days";
        else
          v27 = "day";
        if ( v25 < 2 )
          v28 = 3;
        else
          v28 = 4;
        sub_5677D4(&v68, v27, v28);
        sub_56A6A8(a3);
        v29 = (void *)(v68 - 24);
        if ( (__int64 *)(v68 - 24) != &qword_6FD2E0 )
        {
          v54 = (unsigned int *)(v68 - 8);
          if ( &pthread_create )
          {
            do
              v55 = __ldaxr(v54);
            while ( __stlxr(v55 - 1, v54) );
          }
          else
          {
            v55 = (*v54)--;
          }
          if ( v55 <= 0 )
            operator delete(v29);
        }
        v30 = (void *)(v67 - 24);
        if ( (__int64 *)(v67 - 24) != &qword_6FD2E0 )
        {
          v56 = (unsigned int *)(v67 - 8);
          if ( &pthread_create )
          {
            do
              v57 = __ldaxr(v56);
            while ( __stlxr(v57 - 1, v56) );
          }
          else
          {
            v57 = (*v56)--;
          }
          if ( v57 <= 0 )
            operator delete(v30);
        }
        v12 = v66 - 24;
        if ( v66 - 24 != (char *)&qword_6FD2E0 )
        {
          v13 = (unsigned int *)(v66 - 8);
          if ( &pthread_create )
          {
            do
              v14 = __ldaxr(v13);
            while ( __stlxr(v14 - 1, v13) );
            goto LABEL_109;
          }
          goto LABEL_108;
        }
      }
    }
    else
    {
      v16 = v15;
      v17 = vcvtms_s32_f32(v16);
      v66 = &byte_6FD2F8;
      v18 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
      sub_569E1C(&v66, 0, qword_6FD2E0, v18, &v69[-v18]);
      sub_56A528(&v67, &v66);
      sub_5677D4(&v67, " ", 1);
      sub_56A528(&v68, &v67);
      if ( v17 >= 2 )
        v19 = "hours";
      else
        v19 = "hour";
      if ( v17 < 2 )
        v20 = 4;
      else
        v20 = 5;
      sub_5677D4(&v68, v19, v20);
      sub_56A6A8(a3);
      v21 = (void *)(v68 - 24);
      if ( (__int64 *)(v68 - 24) != &qword_6FD2E0 )
      {
        v50 = (unsigned int *)(v68 - 8);
        if ( &pthread_create )
        {
          do
            v51 = __ldaxr(v50);
          while ( __stlxr(v51 - 1, v50) );
        }
        else
        {
          v51 = (*v50)--;
        }
        if ( v51 <= 0 )
          operator delete(v21);
      }
      v22 = (void *)(v67 - 24);
      if ( (__int64 *)(v67 - 24) != &qword_6FD2E0 )
      {
        v52 = (unsigned int *)(v67 - 8);
        if ( &pthread_create )
        {
          do
            v53 = __ldaxr(v52);
          while ( __stlxr(v53 - 1, v52) );
        }
        else
        {
          v53 = (*v52)--;
        }
        if ( v53 <= 0 )
          operator delete(v22);
      }
      v12 = v66 - 24;
      if ( v66 - 24 != (char *)&qword_6FD2E0 )
      {
        v13 = (unsigned int *)(v66 - 8);
        if ( &pthread_create )
        {
          do
            v14 = __ldaxr(v13);
          while ( __stlxr(v14 - 1, v13) );
          goto LABEL_109;
        }
        goto LABEL_108;
      }
    }
  }
  else
  {
    v5 = v4;
    v6 = vcvtms_s32_f32(v5);
    v66 = &byte_6FD2F8;
    v7 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
    sub_569E1C(&v66, 0, qword_6FD2E0, v7, &v69[-v7]);
    sub_56A528(&v67, &v66);
    sub_5677D4(&v67, " ", 1);
    sub_56A528(&v68, &v67);
    if ( v6 >= 2 )
      v8 = "minutes";
    else
      v8 = "minute";
    if ( v6 < 2 )
      v9 = 6;
    else
      v9 = 7;
    sub_5677D4(&v68, v8, v9);
    sub_56A6A8(a3);
    v10 = (void *)(v68 - 24);
    if ( (__int64 *)(v68 - 24) != &qword_6FD2E0 )
    {
      v46 = (unsigned int *)(v68 - 8);
      if ( &pthread_create )
      {
        do
          v47 = __ldaxr(v46);
        while ( __stlxr(v47 - 1, v46) );
      }
      else
      {
        v47 = (*v46)--;
      }
      if ( v47 <= 0 )
        operator delete(v10);
    }
    v11 = (void *)(v67 - 24);
    if ( (__int64 *)(v67 - 24) != &qword_6FD2E0 )
    {
      v48 = (unsigned int *)(v67 - 8);
      if ( &pthread_create )
      {
        do
          v49 = __ldaxr(v48);
        while ( __stlxr(v49 - 1, v48) );
      }
      else
      {
        v49 = (*v48)--;
      }
      if ( v49 <= 0 )
        operator delete(v11);
    }
    v12 = v66 - 24;
    if ( v66 - 24 != (char *)&qword_6FD2E0 )
    {
      v13 = (unsigned int *)(v66 - 8);
      if ( &pthread_create )
      {
        do
          v14 = __ldaxr(v13);
        while ( __stlxr(v14 - 1, v13) );
        goto LABEL_109;
      }
LABEL_108:
      v14 = (*v13)--;
LABEL_109:
      if ( v14 <= 0 )
        operator delete(v12);
    }
  }
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000489464
 * Mangled: _ZN5Caver20SaveByteBufferToFileEPKhjRKSs
 * Demangled: Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *
 * Callers: 2
 *   0x0000000000202230  Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *   0x00000000004893DC  Caver::SaveProtobufMessageToFile(google::protobuf::MessageLite const&,std::string const&)
 *
 * Callees: 22
 *   0x00000000001F3900  .remove
 *   0x00000000001F47F0  Caver::LastPathComponent(std::string const&)
 *   0x00000000001F5F00  .rename
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6550  .fwrite
 *   0x00000000001F76D0  Caver::StringByAppendingPathExtension(std::string const&,std::string const&)
 *   0x00000000001FB210  Caver::StringByRemovingPathExtension(std::string const&)
 *   0x00000000001FBDF0  Caver::StringByAppendingPathComponent(std::string const&,std::string const&)
 *   0x00000000001FDDC0  .fclose
 *   0x00000000001FDDD0  Caver::FileExistsAtPath(std::string const&)
 *   0x00000000001FEF80  Caver::TemporaryDirectoryPath(void)
 *   0x00000000001FF950  Caver::PathExtension(std::string const&)
 *   0x0000000000200F70  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *   0x0000000000201180  .fopen
 *   0x0000000000567614  sub_567614
 *   0x00000000005677D4  sub_5677D4
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 268
 *   insn=0x000000000048947C string=0x0000000000489480 "Y"
 *   insn=0x0000000000489480 string=0x0000000000489484 "("
 *   insn=0x00000000004894A8 string=0x00000000001F47F0 "P'"
 *   insn=0x00000000004894B4 string=0x00000000004894B8 "N"
 *   insn=0x00000000004894B8 string=0x00000000001FBDF0 "0'"
 *   insn=0x00000000004894CC string=0x00000000004894D0 "!"
 *   insn=0x00000000004894E4 string=0x00000000004894E8 "a"
 *   insn=0x00000000004894E8 string=0x00000000004894F0 "$"
 *   insn=0x00000000004894E8 string=0x0000000000596A04 "wb"
 *   insn=0x0000000000489510 string=0x00000000001F6550 "0'"
 *   insn=0x0000000000489518 string=0x000000000048951C ")"
 *   insn=0x000000000048951C string=0x00000000001FDDC0 "0'"
 *   insn=0x0000000000489530 string=0x0000000000489534 "'"
 *   insn=0x0000000000489534 string=0x0000000000489538 " "
 *   insn=0x0000000000489534 string=0x00000000001FDDD0 "0'"
 *   insn=0x0000000000489544 string=0x0000000000489548 "u"
 *   insn=0x0000000000489548 string=0x0000000000596A07 "_b"
 *   insn=0x0000000000489560 string=0x0000000000489564 "+"
 *   insn=0x0000000000489564 string=0x00000000001FB210 "0'"
 *   insn=0x000000000048958C string=0x0000000000489590 "x"
 *   insn=0x00000000004895DC string=0x00000000004895E0 "<"
 *   insn=0x00000000004895E0 string=0x00000000001F76D0 "0'"
 *   insn=0x00000000004895E8 string=0x00000000004895EC "/"
 *   insn=0x00000000004895FC string=0x000000000048966C "!"
 *   insn=0x000000000048960C string=0x0000000000489688 "!"
 *   insn=0x0000000000489618 string=0x000000000048961C "A"
 *   insn=0x000000000048961C string=0x00000000004896A4 "!"
 *   insn=0x000000000048962C string=0x00000000004896C0 "!"
 *   insn=0x000000000048963C string=0x00000000004896DC "!"
 *   insn=0x0000000000489648 string=0x000000000048964C "a"
 *   insn=0x000000000048964C string=0x00000000004896F8 "!"
 *   insn=0x000000000048966C string=0x0000000000489670 "8"
 *   insn=0x0000000000489670 string=0x0000000000489674 "\t"
 *   insn=0x0000000000489670 string=0x0000000000489714 "\t"
 *   insn=0x0000000000489674 string=0x0000000000489678 "*"
 *   insn=0x0000000000489678 string=0x000000000048967C "\n"
 *   insn=0x0000000000489680 string=0x0000000000489684 "'"
 *   insn=0x0000000000489684 string=0x0000000000489720 "?"
 *   insn=0x0000000000489688 string=0x000000000048968C "X"
 *   insn=0x000000000048968C string=0x0000000000489690 "\t"
 *   insn=0x000000000048968C string=0x0000000000489734 "\t"
 *   insn=0x0000000000489690 string=0x0000000000489694 "*"
 *   insn=0x0000000000489694 string=0x0000000000489698 "\n"
 *   insn=0x000000000048969C string=0x00000000004896A0 "("
 *   insn=0x00000000004896A0 string=0x0000000000489740 "?"
 *   insn=0x00000000004896A4 string=0x00000000004896A8 "x"
 *   insn=0x00000000004896A8 string=0x00000000004896AC "\t"
 *   insn=0x00000000004896A8 string=0x0000000000489754 "\t"
 *   insn=0x00000000004896AC string=0x00000000004896B0 "*"
 *   insn=0x00000000004896B0 string=0x00000000004896B4 "\n"
 *   insn=0x00000000004896B8 string=0x00000000004896BC ")"
 *   insn=0x00000000004896BC string=0x0000000000489760 "?"
 *   insn=0x00000000004896C4 string=0x00000000004896C8 "\t"
 *   insn=0x00000000004896C4 string=0x0000000000489774 "\t"
 *   insn=0x00000000004896C8 string=0x00000000004896CC "*"
 *   insn=0x00000000004896CC string=0x00000000004896D0 "\n"
 *   insn=0x00000000004896D4 string=0x00000000004896D8 "*"
 *   insn=0x00000000004896D8 string=0x0000000000489780 "?"
 *   insn=0x00000000004896E0 string=0x00000000004896E4 "\t"
 *   insn=0x00000000004896E0 string=0x0000000000489794 "\t"
 *   insn=0x00000000004896E4 string=0x00000000004896E8 "*"
 *   insn=0x00000000004896E8 string=0x00000000004896EC "\n"
 *   insn=0x00000000004896F0 string=0x00000000004896F4 "+"
 *   insn=0x00000000004896F4 string=0x00000000004897A0 "?"
 *   insn=0x00000000004896FC string=0x0000000000489700 "\t"
 *   insn=0x00000000004896FC string=0x00000000004897B4 "\t"
 *   insn=0x0000000000489700 string=0x0000000000489704 "*"
 *   insn=0x0000000000489704 string=0x0000000000489708 "\n"
 *   insn=0x000000000048970C string=0x0000000000489710 ","
 *   insn=0x0000000000489710 string=0x00000000004897C0 "?"
 *   insn=0x0000000000489714 string=0x0000000000489718 "*"
 *   insn=0x0000000000489718 string=0x000000000048971C "\n"
 *   insn=0x0000000000489734 string=0x0000000000489738 "*"
 *   insn=0x0000000000489738 string=0x000000000048973C "\n"
 *   insn=0x0000000000489740 string=0x0000000000489744 "l"
 *   insn=0x0000000000489754 string=0x0000000000489758 "*"
 *   insn=0x0000000000489758 string=0x000000000048975C "\n"
 *   insn=0x0000000000489774 string=0x0000000000489778 "*"
 *   insn=0x0000000000489778 string=0x000000000048977C "\n"
 *   insn=0x0000000000489780 string=0x0000000000489784 "l"
 *   insn=0x0000000000489794 string=0x0000000000489798 "*"
 *   insn=0x0000000000489798 string=0x000000000048979C "\n"
 *   insn=0x00000000004897B4 string=0x00000000004897B8 "*"
 *   insn=0x00000000004897B8 string=0x00000000004897BC "\n"
 *   insn=0x00000000004897C0 string=0x00000000004897C4 "l"
 *   insn=0x00000000004897E0 string=0x00000000004897E4 "a"
 *   insn=0x00000000004897E8 string=0x00000000001F5F00 "P'"
 *   insn=0x00000000004897EC string=0x0000000000489808 "t"
 *   insn=0x00000000004897F4 string=0x00000000004897F8 "a"
 *   insn=0x000000000048980C string=0x0000000000489810 "<"
 *   insn=0x0000000000489810 string=0x00000000001F3900 "P'"
 *   insn=0x0000000000489830 string=0x0000000000489834 "A"
 *   insn=0x0000000000489834 string=0x0000000000489838 "("
 *   insn=0x0000000000489844 string=0x00000000004899A4 "K"
 *   insn=0x0000000000489868 string=0x000000000048986C "Y"
 *   insn=0x000000000048986C string=0x0000000000489870 "`"
 *   insn=0x0000000000489870 string=0x000000000048987C "`"
 *   insn=0x0000000000489874 string=0x0000000000489878 """
 *   insn=0x0000000000489894 string=0x0000000000489898 ")=G"
 *   insn=0x0000000000489898 string=0x000000000048989C "!"
 *   insn=0x000000000048989C string=0x00000000004898A0 "\t"
 *   insn=0x00000000004898A0 string=0x00000000004898A4 "\t"
 *   insn=0x00000000004898A0 string=0x0000000000489900 "\t"
 *   insn=0x00000000004898A4 string=0x00000000004898A8 "*"
 *   insn=0x00000000004898A8 string=0x00000000004898AC "\n"
 *   insn=0x00000000004898B4 string=0x000000000048990C "?"
 *   insn=0x00000000004898B8 string=0x00000000004898BC ")=G"
 *   insn=0x00000000004898BC string=0x00000000004898C0 "!"
 *   insn=0x00000000004898C4 string=0x00000000004898C8 "\t"
 *   insn=0x00000000004898C4 string=0x0000000000489920 "\t"
 *   insn=0x00000000004898C8 string=0x00000000004898CC "*"
 *   insn=0x00000000004898CC string=0x00000000004898D0 "\n"
 *   insn=0x00000000004898D8 string=0x000000000048992C "?"
 *   insn=0x00000000004898DC string=0x00000000004898E0 ")=G"
 *   insn=0x00000000004898E0 string=0x00000000004898E4 "!"
 *   insn=0x00000000004898E8 string=0x00000000004898EC "\t"
 *   insn=0x00000000004898E8 string=0x0000000000489940 "\t"
 *   insn=0x00000000004898EC string=0x00000000004898F0 "*"
 *   insn=0x00000000004898F0 string=0x00000000004898F4 "\n"
 *   insn=0x00000000004898FC string=0x000000000048994C "?"
 *   insn=0x0000000000489900 string=0x0000000000489904 "*"
 *   insn=0x0000000000489904 string=0x0000000000489908 "\n"
 *   insn=0x000000000048990C string=0x0000000000489910 ","
 *   insn=0x0000000000489920 string=0x0000000000489924 "*"
 *   insn=0x0000000000489924 string=0x0000000000489928 "\n"
 *   insn=0x0000000000489940 string=0x0000000000489944 "*"
 *   insn=0x0000000000489944 string=0x0000000000489948 "\n"
 *   insn=0x000000000048994C string=0x0000000000489950 "L"
 *   insn=0x0000000000489960 string=0x0000000000489964 ")=G"
 *   insn=0x0000000000489964 string=0x0000000000489968 "!"
 *   insn=0x000000000048996C string=0x0000000000489970 "\t"
 *   insn=0x000000000048996C string=0x0000000000489984 "\t"
 *   insn=0x0000000000489970 string=0x0000000000489974 "*"
 *   insn=0x0000000000489974 string=0x0000000000489978 "\n"
 *   insn=0x0000000000489980 string=0x0000000000489990 "?"
 *   insn=0x0000000000489984 string=0x0000000000489988 "*"
 *   insn=0x0000000000489988 string=0x000000000048998C "\n"
 *   insn=0x00000000004899A4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004899B0 string=0x00000000004899B4 "J"
 *   insn=0x00000000004899B8 string=0x00000000004899BC "(a"
 *   insn=0x00000000004899C8 string=0x00000000004899CC "J=G"
 *   insn=0x00000000004899CC string=0x00000000004899D0 ")!"
 *   insn=0x00000000004899D4 string=0x00000000004899D8 "*"
 *   insn=0x00000000004899D4 string=0x00000000004899EC "*"
 *   insn=0x00000000004899D8 string=0x00000000004899DC "K"
 *   insn=0x00000000004899DC string=0x00000000004899E0 "+"
 *   insn=0x00000000004899E8 string=0x00000000004899F8 "_"
 *   insn=0x00000000004899EC string=0x00000000004899F0 "K"
 *   insn=0x00000000004899F0 string=0x00000000004899F4 "+"
 *   insn=0x0000000000489A04 string=0x0000000000489A08 "g"
 *   insn=0x0000000000489A18 string=0x0000000000489A1C ")"
 *   insn=0x0000000000489A2C string=0x0000000000489A30 ")=G"
 *   insn=0x0000000000489A30 string=0x0000000000489A34 "!"
 *   insn=0x0000000000489A38 string=0x0000000000489A3C "\t"
 *   insn=0x0000000000489A38 string=0x0000000000489DCC "\t"
 *   insn=0x0000000000489A3C string=0x0000000000489A40 "*"
 *   insn=0x0000000000489A40 string=0x0000000000489A44 "\n"
 *   insn=0x0000000000489A4C string=0x0000000000489CB8 "?"
 *   insn=0x0000000000489A58 string=0x0000000000489A5C "(a"
 *   insn=0x0000000000489A60 string=0x0000000000489A64 "@"
 *   insn=0x0000000000489A64 string=0x0000000000489A68 ")!"
 *   insn=0x0000000000489A6C string=0x0000000000489A70 "*"
 *   insn=0x0000000000489A6C string=0x0000000000489A84 "*"
 *   insn=0x0000000000489A70 string=0x0000000000489A74 "K"
 *   insn=0x0000000000489A74 string=0x0000000000489A78 "+"
 *   insn=0x0000000000489A80 string=0x0000000000489A90 "_"
 *   insn=0x0000000000489A84 string=0x0000000000489A88 "K"
 *   insn=0x0000000000489A88 string=0x0000000000489A8C "+"
 *   insn=0x0000000000489A9C string=0x0000000000489AA0 "A"
 *   insn=0x0000000000489AB4 string=0x0000000000489AB8 " "
 *   insn=0x0000000000489AB8 string=0x0000000000489ABC "!"
 *   insn=0x0000000000489AC0 string=0x0000000000489AC4 "\t"
 *   insn=0x0000000000489AC0 string=0x0000000000489AD8 "\t"
 *   insn=0x0000000000489AC4 string=0x0000000000489AC8 "*"
 *   insn=0x0000000000489AC8 string=0x0000000000489ACC "\n"
 *   insn=0x0000000000489AD4 string=0x0000000000489AE4 "?"
 *   insn=0x0000000000489AD8 string=0x0000000000489ADC "*"
 *   insn=0x0000000000489ADC string=0x0000000000489AE0 "\n"
 *   insn=0x0000000000489AEC string=0x0000000000489AF0 "-"
 *   insn=0x0000000000489B08 string=0x0000000000489B0C "!"
 *   insn=0x0000000000489B10 string=0x0000000000489B14 "\t"
 *   insn=0x0000000000489B10 string=0x0000000000489B28 "\t"
 *   insn=0x0000000000489B14 string=0x0000000000489B18 "*"
 *   insn=0x0000000000489B18 string=0x0000000000489B1C "\n"
 *   insn=0x0000000000489B24 string=0x0000000000489B34 "?"
 *   insn=0x0000000000489B28 string=0x0000000000489B2C "*"
 *   insn=0x0000000000489B2C string=0x0000000000489B30 "\n"
 *   insn=0x0000000000489B34 string=0x0000000000489B38 ","
 *   insn=0x0000000000489B48 string=0x0000000000489B4C "(a"
 *   insn=0x0000000000489B50 string=0x0000000000489B54 "@"
 *   insn=0x0000000000489B54 string=0x0000000000489B58 ")!"
 *   insn=0x0000000000489B5C string=0x0000000000489B60 "*"
 *   insn=0x0000000000489B5C string=0x0000000000489B74 "*"
 *   insn=0x0000000000489B60 string=0x0000000000489B64 "K"
 *   insn=0x0000000000489B64 string=0x0000000000489B68 "+"
 *   insn=0x0000000000489B70 string=0x0000000000489B80 "_"
 *   insn=0x0000000000489B74 string=0x0000000000489B78 "K"
 *   insn=0x0000000000489B78 string=0x0000000000489B7C "+"
 *   insn=0x0000000000489BA8 string=0x0000000000489BAC "!"
 *   insn=0x0000000000489BB0 string=0x0000000000489BB4 "\t"
 *   insn=0x0000000000489BB0 string=0x0000000000489BC8 "\t"
 *   insn=0x0000000000489BB4 string=0x0000000000489BB8 "*"
 *   insn=0x0000000000489BB8 string=0x0000000000489BBC "\n"
 *   insn=0x0000000000489BC4 string=0x0000000000489BD4 "?"
 *   insn=0x0000000000489BC8 string=0x0000000000489BCC "*"
 *   insn=0x0000000000489BCC string=0x0000000000489BD0 "\n"
 *   insn=0x0000000000489BDC string=0x0000000000489BE0 "y"
 *   insn=0x0000000000489BE0 string=0x0000000000489DC4 "x"
 *   insn=0x0000000000489BE8 string=0x0000000000489BEC "(a"
 *   insn=0x0000000000489BF4 string=0x0000000000489BF8 ")!"
 *   insn=0x0000000000489BFC string=0x0000000000489C00 "*"
 *   insn=0x0000000000489BFC string=0x0000000000489C14 "*"
 *   insn=0x0000000000489C00 string=0x0000000000489C04 "K"
 *   insn=0x0000000000489C04 string=0x0000000000489C08 "+"
 *   insn=0x0000000000489C10 string=0x0000000000489C20 "_"
 *   insn=0x0000000000489C14 string=0x0000000000489C18 "K"
 *   insn=0x0000000000489C18 string=0x0000000000489C1C "+"
 *   insn=0x0000000000489C20 string=0x0000000000489C24 ","
 *   insn=0x0000000000489C2C string=0x0000000000489C30 "U"
 *   insn=0x0000000000489C48 string=0x0000000000489C4C "(a"
 *   insn=0x0000000000489C54 string=0x0000000000489D8C ")!"
 *   insn=0x0000000000489C60 string=0x0000000000489C64 "a"
 *   insn=0x0000000000489C64 string=0x0000000000489D10 "!"
 *   insn=0x0000000000489C74 string=0x0000000000489CF4 "!"
 *   insn=0x0000000000489C80 string=0x0000000000489C84 "a"
 *   insn=0x0000000000489C98 string=0x0000000000489C9C ")=G"
 *   insn=0x0000000000489C9C string=0x0000000000489CA0 "!"
 *   insn=0x0000000000489CA0 string=0x0000000000489CA4 "I\t"
 *   insn=0x0000000000489CA4 string=0x0000000000489CA8 "\t"
 *   insn=0x0000000000489CA8 string=0x0000000000489CAC "*"
 *   insn=0x0000000000489CAC string=0x0000000000489CB0 "\n"
 *   insn=0x0000000000489CB8 string=0x0000000000489CBC "l"
 *   insn=0x0000000000489CD0 string=0x0000000000489CD4 ")=G"
 *   insn=0x0000000000489CD4 string=0x0000000000489CD8 "!"
 *   insn=0x0000000000489CDC string=0x0000000000489CE0 "\t"
 *   insn=0x0000000000489CDC string=0x0000000000489D2C "\t"
 *   insn=0x0000000000489CE0 string=0x0000000000489CE4 "*"
 *   insn=0x0000000000489CE4 string=0x0000000000489CE8 "\n"
 *   insn=0x0000000000489CF0 string=0x0000000000489D38 "?"
 *   insn=0x0000000000489CF8 string=0x0000000000489CFC "\t"
 *   insn=0x0000000000489CF8 string=0x0000000000489D4C "\t"
 *   insn=0x0000000000489CFC string=0x0000000000489D00 "*"
 *   insn=0x0000000000489D00 string=0x0000000000489D04 "\n"
 *   insn=0x0000000000489D0C string=0x0000000000489D58 "?"
 *   insn=0x0000000000489D14 string=0x0000000000489D18 "\t"
 *   insn=0x0000000000489D14 string=0x0000000000489D6C "\t"
 *   insn=0x0000000000489D18 string=0x0000000000489D1C "*"
 *   insn=0x0000000000489D1C string=0x0000000000489D20 "\n"
 *   insn=0x0000000000489D28 string=0x0000000000489D78 "?"
 *   insn=0x0000000000489D2C string=0x0000000000489D30 "*"
 *   insn=0x0000000000489D30 string=0x0000000000489D34 "\n"
 *   insn=0x0000000000489D38 string=0x0000000000489D3C "l"
 *   insn=0x0000000000489D4C string=0x0000000000489D50 "*"
 *   insn=0x0000000000489D50 string=0x0000000000489D54 "\n"
 *   insn=0x0000000000489D6C string=0x0000000000489D70 "*"
 *   insn=0x0000000000489D70 string=0x0000000000489D74 "\n"
 *   insn=0x0000000000489D78 string=0x0000000000489D7C "l"
 *   insn=0x0000000000489D90 string=0x0000000000489D94 "*"
 *   insn=0x0000000000489D90 string=0x0000000000489DA8 "*"
 *   insn=0x0000000000489D94 string=0x0000000000489D98 "K"
 *   insn=0x0000000000489D98 string=0x0000000000489D9C "+"
 *   insn=0x0000000000489DA4 string=0x0000000000489DB4 "_"
 *   insn=0x0000000000489DA8 string=0x0000000000489DAC "K"
 *   insn=0x0000000000489DAC string=0x0000000000489DB0 "+"
 *   insn=0x0000000000489DCC string=0x0000000000489DD0 "*"
 *   insn=0x0000000000489DD0 string=0x0000000000489DD4 "\n"
 *   insn=0x0000000000489DD4 string=0x0000000000489DD8 "?"
 *   insn=0x0000000000489DD8 string=0x0000000000489DDC "-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SaveByteBufferToFile(Caver *a1, unsigned int a2, const char **a3)
{
  char *v6; // x0
  void *v7; // x0
  FILE *v8; // x22
  size_t v9; // x20
  unsigned int v10; // w20
  __int64 v11; // x0
  void *v12; // x0
  void *v13; // x0
  void *v14; // x0
  char *v15; // x0
  void *v16; // x0
  void *v17; // x0
  unsigned int *v19; // x8
  int v20; // w9
  unsigned int *v21; // x8
  int v22; // w9
  unsigned int *v23; // x8
  int v24; // w9
  unsigned int *v25; // x8
  int v26; // w9
  unsigned int *v27; // x8
  int v28; // w9
  unsigned int *v29; // x8
  int v30; // w9
  unsigned int v31; // w19
  int v32; // w20
  char *v33; // x0
  char *v34; // x0
  unsigned int *v36; // x8
  int v37; // w9
  unsigned int *v38; // x8
  int v39; // w9
  unsigned int *v40; // x8
  int v41; // w9
  unsigned int *v42; // x8
  int v43; // w9
  char *v44; // [xsp+0h] [xbp-A0h] BYREF
  __int64 v45; // [xsp+8h] [xbp-98h] BYREF
  __int64 v46; // [xsp+10h] [xbp-90h] BYREF
  __int64 v47; // [xsp+18h] [xbp-88h] BYREF
  __int64 v48; // [xsp+20h] [xbp-80h]
  char *old; // [xsp+28h] [xbp-78h] BYREF
  char *filename; // [xsp+30h] [xbp-70h]
  __int64 v51; // [xsp+40h] [xbp-60h] BYREF
  _BYTE v52[12]; // [xsp+54h] [xbp-4Ch] BYREF

  *(_QWORD *)&v52[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::TemporaryDirectoryPath(&v51, a1);
  Caver::LastPathComponent();
  Caver::StringByAppendingPathComponent();
  v6 = old - 24;
  if ( old - 24 != (char *)&qword_6FD2E0 )
  {
    v36 = (unsigned int *)(old - 8);
    if ( &pthread_create )
    {
      do
        v37 = __ldaxr(v36);
      while ( __stlxr(v37 - 1, v36) );
    }
    else
    {
      v37 = (*v36)--;
    }
    if ( v37 <= 0 )
      operator delete(v6);
  }
  v7 = (void *)(v51 - 24);
  if ( (__int64 *)(v51 - 24) != &qword_6FD2E0 )
  {
    v38 = (unsigned int *)(v51 - 8);
    if ( &pthread_create )
    {
      do
        v39 = __ldaxr(v38);
      while ( __stlxr(v39 - 1, v38) );
    }
    else
    {
      v39 = (*v38)--;
    }
    if ( v39 <= 0 )
      operator delete(v7);
  }
  v8 = fopen(filename, "wb");
  if ( !v8 || (v9 = fwrite(a1, 1u, a2, v8), fclose(v8), v9 != a2) )
  {
    v31 = 0;
    goto LABEL_63;
  }
  old = &byte_6FD2F8;
  if ( (Caver::FileExistsAtPath() & 1) != 0 )
  {
    v10 = 0;
    do
    {
      Caver::StringByRemovingPathExtension();
      sub_56A528(&v46, &v45);
      sub_5677D4(&v46, "_b", 2);
      v44 = &byte_6FD2F8;
      v11 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
      sub_569E1C(&v44, 0, qword_6FD2E0, v11, &v52[-v11]);
      sub_56A528(&v47, &v46);
      sub_567614(&v47, &v44);
      Caver::PathExtension();
      Caver::StringByAppendingPathExtension();
      sub_56A6A8(&old);
      v12 = (void *)(v48 - 24);
      if ( (__int64 *)(v48 - 24) != &qword_6FD2E0 )
      {
        v19 = (unsigned int *)(v48 - 8);
        if ( &pthread_create )
        {
          do
            v20 = __ldaxr(v19);
          while ( __stlxr(v20 - 1, v19) );
        }
        else
        {
          v20 = (*v19)--;
        }
        if ( v20 <= 0 )
          operator delete(v12);
      }
      v13 = (void *)(v51 - 24);
      if ( (__int64 *)(v51 - 24) != &qword_6FD2E0 )
      {
        v21 = (unsigned int *)(v51 - 8);
        if ( &pthread_create )
        {
          do
            v22 = __ldaxr(v21);
          while ( __stlxr(v22 - 1, v21) );
        }
        else
        {
          v22 = (*v21)--;
        }
        if ( v22 <= 0 )
          operator delete(v13);
      }
      v14 = (void *)(v47 - 24);
      if ( (__int64 *)(v47 - 24) != &qword_6FD2E0 )
      {
        v23 = (unsigned int *)(v47 - 8);
        if ( &pthread_create )
        {
          do
            v24 = __ldaxr(v23);
          while ( __stlxr(v24 - 1, v23) );
        }
        else
        {
          v24 = (*v23)--;
        }
        if ( v24 <= 0 )
          operator delete(v14);
      }
      v15 = v44 - 24;
      if ( v44 - 24 != (char *)&qword_6FD2E0 )
      {
        v25 = (unsigned int *)(v44 - 8);
        if ( &pthread_create )
        {
          do
            v26 = __ldaxr(v25);
          while ( __stlxr(v26 - 1, v25) );
        }
        else
        {
          v26 = (*v25)--;
        }
        if ( v26 <= 0 )
          operator delete(v15);
      }
      v16 = (void *)(v46 - 24);
      if ( (__int64 *)(v46 - 24) != &qword_6FD2E0 )
      {
        v27 = (unsigned int *)(v46 - 8);
        if ( &pthread_create )
        {
          do
            v28 = __ldaxr(v27);
          while ( __stlxr(v28 - 1, v27) );
        }
        else
        {
          v28 = (*v27)--;
        }
        if ( v28 <= 0 )
          operator delete(v16);
      }
      v17 = (void *)(v45 - 24);
      if ( (__int64 *)(v45 - 24) != &qword_6FD2E0 )
      {
        v29 = (unsigned int *)(v45 - 8);
        if ( &pthread_create )
        {
          do
            v30 = __ldaxr(v29);
          while ( __stlxr(v30 - 1, v29) );
        }
        else
        {
          v30 = (*v29)--;
        }
        if ( v30 <= 0 )
          operator delete(v17);
      }
      if ( (Caver::FileExistsAtPath() & 1) == 0 )
        break;
    }
    while ( v10++ < 0x63 );
    if ( (Caver::FileExistsAtPath() & 1) != 0 )
      remove(old);
    if ( rename(*a3, old) )
      goto LABEL_58;
    v32 = 1;
  }
  else
  {
    v32 = 0;
  }
  if ( !rename(filename, *a3) )
  {
    if ( v32 )
      remove(old);
    v31 = 1;
    goto LABEL_62;
  }
  if ( v32 )
    rename(old, *a3);
LABEL_58:
  v31 = 0;
LABEL_62:
  v33 = old - 24;
  if ( old - 24 != (char *)&qword_6FD2E0 )
  {
    v42 = (unsigned int *)(old - 8);
    if ( &pthread_create )
    {
      do
        v43 = __ldaxr(v42);
      while ( __stlxr(v43 - 1, v42) );
    }
    else
    {
      v43 = (*v42)--;
    }
    if ( v43 <= 0 )
      operator delete(v33);
  }
LABEL_63:
  v34 = filename - 24;
  if ( filename - 24 != (char *)&qword_6FD2E0 )
  {
    v40 = (unsigned int *)(filename - 8);
    if ( &pthread_create )
    {
      do
        v41 = __ldaxr(v40);
      while ( __stlxr(v41 - 1, v40) );
    }
    else
    {
      v41 = (*v40)--;
    }
    if ( v41 <= 0 )
      operator delete(v34);
  }
  return v31;
}


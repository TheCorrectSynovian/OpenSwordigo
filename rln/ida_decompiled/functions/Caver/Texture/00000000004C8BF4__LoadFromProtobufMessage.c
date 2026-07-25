/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C8BF4
 * Mangled: _ZN5Caver7Texture23LoadFromProtobufMessageERKNS_5Proto7TextureE
 * Demangled: Caver::Texture::LoadFromProtobufMessage(Caver::Proto::Texture const&)
 *
 * Callers: 1
 *   0x00000000001F68B0  Caver::Texture::LoadFromProtobufMessage(Caver::Proto::Texture const&)
 *
 * Callees: 20
 *   0x00000000001F4900  Caver::PixelFormatFromProtobufValue(Caver::Proto::PixelFormat)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5F30  Caver::PathForResourceOfType(std::string const&,std::string const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9F60  Caver::TextureConversionInfo::LoadFromProtobufMessage(Caver::Proto::Texture_ConversionInfo const&)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FDDD0  Caver::FileExistsAtPath(std::string const&)
 *   0x00000000001FE1A0  std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000201410  Caver::Texture::CreateSubtexture(Caver::Rectangle const&,float)
 *   0x0000000000201EB0  Caver::Texture::InitWithResource(std::string const&,float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004C9694  Caver::Texture::SaveToProtobufMessage(Caver::Proto::Texture *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005677D4  sub_5677D4
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 288
 *   insn=0x00000000004C8C0C string=0x00000000004C8C10 "V"
 *   insn=0x00000000004C8C3C string=0x00000000004C8C40 "0"
 *   insn=0x00000000004C8C40 string=0x00000000001F4900 "P'"
 *   insn=0x00000000004C8C60 string=0x00000000004C8C64 "\t"
 *   insn=0x00000000004C8C70 string=0x00000000004C8C74 "("
 *   insn=0x00000000004C8C78 string=0x00000000004C8C7C "("
 *   insn=0x00000000004C8C7C string=0x00000000004C8C80 "@"
 *   insn=0x00000000004C8C80 string=0x00000000004C8C84 "\t"
 *   insn=0x00000000004C8C84 string=0x00000000004C8C88 "AA"
 *   insn=0x00000000004C8C8C string=0x00000000004C8C90 " #@"
 *   insn=0x00000000004C8C9C string=0x00000000004C8CA0 "!@"
 *   insn=0x00000000004C8CB0 string=0x00000000004C8CB4 "@"
 *   insn=0x00000000004C8CB4 string=0x00000000004C8CB8 ""
 *   insn=0x00000000004C8CB8 string=0x00000000004C8CBC ""
 *   insn=0x00000000004C8CC0 string=0x00000000004C8CC4 ""
 *   insn=0x00000000004C8CC4 string=0x00000000004C8CC8 ""
 *   insn=0x00000000004C8CD8 string=0x00000000004C8CDC "+"
 *   insn=0x00000000004C8CE0 string=0x00000000004C8CE4 ""
 *   insn=0x00000000004C8CE8 string=0x00000000004C8CEC "="
 *   insn=0x00000000004C8CEC string=0x00000000004C8CF0 "h"
 *   insn=0x00000000004C8CEC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004C8CFC string=0x00000000004C8D00 ""
 *   insn=0x00000000004C8D04 string=0x00000000004C8D08 "\t"
 *   insn=0x00000000004C8D18 string=0x00000000004C8D1C "e"
 *   insn=0x00000000004C8D1C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004C8D28 string=0x00000000004C8D2C ")"
 *   insn=0x00000000004C8D30 string=0x00000000004C8D34 ")"
 *   insn=0x00000000004C8D34 string=0x00000000004C8D38 "("
 *   insn=0x00000000004C8D40 string=0x00000000001F9F60 "0'"
 *   insn=0x00000000004C8D44 string=0x00000000004C8D48 ""
 *   insn=0x00000000004C8D44 string=0x00000000001FA350 "0'"
 *   insn=0x00000000004C8D48 string=0x00000000004C8D4C ""
 *   insn=0x00000000004C8D58 string=0x00000000004C8D5C "a"
 *   insn=0x00000000004C8D5C string=0x0000000000597CF3 "_2x"
 *   insn=0x00000000004C8D78 string=0x00000000004C8D7C "M"
 *   insn=0x00000000004C8D88 string=0x00000000004C8D8C ")"
 *   insn=0x00000000004C8DA8 string=0x00000000004C8DAC ")=G"
 *   insn=0x00000000004C8DAC string=0x00000000004C8DB0 "!"
 *   insn=0x00000000004C8DB4 string=0x00000000004C8DB8 "\t"
 *   insn=0x00000000004C8DB4 string=0x00000000004C8DCC "\t"
 *   insn=0x00000000004C8DB8 string=0x00000000004C8DBC "*"
 *   insn=0x00000000004C8DBC string=0x00000000004C8DC0 "\n"
 *   insn=0x00000000004C8DC8 string=0x00000000004C8DD8 "?"
 *   insn=0x00000000004C8DCC string=0x00000000004C8DD0 "*"
 *   insn=0x00000000004C8DD0 string=0x00000000004C8DD4 "\n"
 *   insn=0x00000000004C8DE0 string=0x00000000004C8DE4 "p"
 *   insn=0x00000000004C8DF4 string=0x00000000004C8DF8 "."
 *   insn=0x00000000004C8E04 string=0x00000000004C8E08 "!"
 *   insn=0x00000000004C8E08 string=0x00000000004C8E2C ")"
 *   insn=0x00000000004C8E2C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004C8E34 string=0x00000000004C8E38 "J"
 *   insn=0x00000000004C8E3C string=0x00000000004C8E40 "(a"
 *   insn=0x00000000004C8E44 string=0x00000000004C8E48 " "
 *   insn=0x00000000004C8E4C string=0x00000000004C8E50 "J=G"
 *   insn=0x00000000004C8E50 string=0x00000000004C8E54 ")!"
 *   insn=0x00000000004C8E58 string=0x00000000004C8E5C "*"
 *   insn=0x00000000004C8E58 string=0x00000000004C8EC8 "*"
 *   insn=0x00000000004C8E5C string=0x00000000004C8E60 "K"
 *   insn=0x00000000004C8E60 string=0x00000000004C8E64 "+"
 *   insn=0x00000000004C8E6C string=0x00000000004C8EAC "_"
 *   insn=0x00000000004C8E74 string=0x00000000004C8E78 "J"
 *   insn=0x00000000004C8E7C string=0x00000000004C8E80 "(a"
 *   insn=0x00000000004C8E84 string=0x00000000004C8E88 " "
 *   insn=0x00000000004C8E8C string=0x00000000004C8E90 "J=G"
 *   insn=0x00000000004C8E90 string=0x00000000004C8E94 ")!"
 *   insn=0x00000000004C8E98 string=0x00000000004C8E9C "*"
 *   insn=0x00000000004C8E9C string=0x00000000004C8EA0 "K"
 *   insn=0x00000000004C8EA0 string=0x00000000004C8EA4 "+"
 *   insn=0x00000000004C8EB8 string=0x00000000004C8EBC ":"
 *   insn=0x00000000004C8EC8 string=0x00000000004C8ECC "K"
 *   insn=0x00000000004C8ECC string=0x00000000004C8ED0 "+"
 *   insn=0x00000000004C8ED0 string=0x00000000004C8ED4 "_"
 *   insn=0x00000000004C8EE4 string=0x00000000004C8EE8 "("
 *   insn=0x00000000004C8EE8 string=0x00000000004C8EEC "\t\t@"
 *   insn=0x00000000004C8EEC string=0x00000000004C8EF0 ")"
 *   insn=0x00000000004C8EF0 string=0x00000000004C8EF4 "\t\t"
 *   insn=0x00000000004C8EF8 string=0x00000000004C8EFC "\t"
 *   insn=0x00000000004C8EFC string=0x00000000004C8F00 ")"
 *   insn=0x00000000004C8F04 string=0x00000000004C8F08 " "
 *   insn=0x00000000004C8F0C string=0x00000000004C8F10 "m"
 *   insn=0x00000000004C8F30 string=0x00000000004C8F34 ""
 *   insn=0x00000000004C8F44 string=0x00000000004C8F48 "%C"
 *   insn=0x00000000004C8F4C string=0x00000000004C8F50 "\t"
 *   insn=0x00000000004C8F50 string=0x00000000004C8F54 "\tA"
 *   insn=0x00000000004C8F54 string=0x00000000004C8F58 "\t"
 *   insn=0x00000000004C8F5C string=0x00000000004C8F60 ")"
 *   insn=0x00000000004C8F60 string=0x00000000004C8F64 ""
 *   insn=0x00000000004C8F6C string=0x00000000004C8F70 ")a"
 *   insn=0x00000000004C8F94 string=0x00000000004C8F98 "`"
 *   insn=0x00000000004C8F98 string=0x00000000004C8F9C "|"
 *   insn=0x00000000004C8F9C string=0x00000000004C8FA0 "\t"
 *   insn=0x00000000004C8FA0 string=0x00000000004C8FA4 "\t"
 *   insn=0x00000000004C8FA8 string=0x00000000004C8FAC "l"
 *   insn=0x00000000004C8FB4 string=0x00000000004C8FB8 "?"
 *   insn=0x00000000004C8FBC string=0x00000000004C8FC0 " "
 *   insn=0x00000000004C8FC4 string=0x00000000004C8FC8 ""
 *   insn=0x00000000004C8FD4 string=0x00000000004C8FD8 "$"
 *   insn=0x00000000004C8FD4 string=0x00000000004C8FF0 "a"
 *   insn=0x00000000004C8FE0 string=0x00000000004C8FE4 "o"
 *   insn=0x00000000004C8FF0 string=0x00000000004C8FF4 "(8@"
 *   insn=0x00000000004C8FF4 string=0x00000000004C8FF8 "\tM@"
 *   insn=0x00000000004C8FF8 string=0x00000000004C8FFC ")L"
 *   insn=0x00000000004C8FFC string=0x00000000004C9000 "\t9@"
 *   insn=0x00000000004C9000 string=0x00000000004C9004 ")8"
 *   insn=0x00000000004C9004 string=0x00000000004C9008 "\tE@"
 *   insn=0x00000000004C9008 string=0x00000000004C900C ")D"
 *   insn=0x00000000004C9014 string=0x00000000004C9018 "("
 *   insn=0x00000000004C9018 string=0x00000000004C901C " "
 *   insn=0x00000000004C9020 string=0x00000000004C9024 "(<"
 *   insn=0x00000000004C9020 string=0x00000000004C9054 " "
 *   insn=0x00000000004C9024 string=0x00000000004C9028 "h"
 *   insn=0x00000000004C9028 string=0x00000000004C902C "!l@"
 *   insn=0x00000000004C902C string=0x00000000004C9030 """
 *   insn=0x00000000004C9030 string=0x00000000004C9034 "#@E"
 *   insn=0x00000000004C9038 string=0x00000000004C903C "B"
 *   insn=0x00000000004C903C string=0x00000000004C9040 "a"
 *   insn=0x00000000004C9040 string=0x00000000004C9044 "B"
 *   insn=0x00000000004C9044 string=0x00000000004C9048 " "
 *   insn=0x00000000004C9048 string=0x00000000004C904C """
 *   insn=0x00000000004C904C string=0x00000000004C9050 " @"
 *   insn=0x00000000004C9058 string=0x00000000004C905C ""
 *   insn=0x00000000004C905C string=0x00000000004C9060 ""
 *   insn=0x00000000004C9080 string=0x00000000004C9084 "("
 *   insn=0x00000000004C9084 string=0x00000000004C9088 "\t\t@"
 *   insn=0x00000000004C9088 string=0x00000000004C908C ")"
 *   insn=0x00000000004C908C string=0x00000000004C9090 "\t\t"
 *   insn=0x00000000004C9094 string=0x00000000004C9098 "\t"
 *   insn=0x00000000004C9098 string=0x00000000004C909C ")"
 *   insn=0x00000000004C90A0 string=0x00000000004C90A4 " "
 *   insn=0x00000000004C90CC string=0x00000000004C90D0 "U"
 *   insn=0x00000000004C90D8 string=0x00000000004C90DC ""
 *   insn=0x00000000004C90F0 string=0x00000000004C90F4 "a"
 *   insn=0x00000000004C90F0 string=0x00000000004C9184 "a"
 *   insn=0x00000000004C90F4 string=0x000000000059738C "png"
 *   insn=0x00000000004C9114 string=0x00000000001F5F30 "P'"
 *   insn=0x00000000004C9118 string=0x00000000004C911C "-"
 *   insn=0x00000000004C911C string=0x00000000001FDDD0 "0'"
 *   insn=0x00000000004C9120 string=0x00000000004C9124 "`"
 *   insn=0x00000000004C9128 string=0x00000000004C912C "_"
 *   insn=0x00000000004C9130 string=0x00000000004C9134 "t*"
 *   insn=0x00000000004C9134 string=0x00000000004C9138 "hn"
 *   insn=0x00000000004C9148 string=0x00000000004C914C "s"
 *   insn=0x00000000004C9174 string=0x00000000004C9178 "a"
 *   insn=0x00000000004C917C string=0x00000000004C9180 "&"
 *   insn=0x00000000004C9184 string=0x0000000000597388 "tex"
 *   insn=0x00000000004C91A0 string=0x00000000004C91A4 "c"
 *   insn=0x00000000004C91A8 string=0x00000000004C91AC "\t"
 *   insn=0x00000000004C91AC string=0x00000000004C91B0 " "
 *   insn=0x00000000004C91B0 string=0x00000000004C91B4 "`"
 *   insn=0x00000000004C91B8 string=0x00000000004C91BC ";"
 *   insn=0x00000000004C91C0 string=0x00000000004C91C4 "h*"
 *   insn=0x00000000004C91C8 string=0x00000000004C91CC "hn"
 *   insn=0x00000000004C91E0 string=0x00000000004C91E4 " a"
 *   insn=0x00000000004C91F0 string=0x00000000004C91F4 " a"
 *   insn=0x00000000004C91F8 string=0x00000000004C91FC "!"
 *   insn=0x00000000004C9234 string=0x00000000004C9238 ")=G"
 *   insn=0x00000000004C9238 string=0x00000000004C923C "!"
 *   insn=0x00000000004C9240 string=0x00000000004C9244 "\t"
 *   insn=0x00000000004C9240 string=0x00000000004C927C "\t"
 *   insn=0x00000000004C9244 string=0x00000000004C9248 "*"
 *   insn=0x00000000004C9248 string=0x00000000004C924C "\n"
 *   insn=0x00000000004C9250 string=0x00000000004C9254 ""
 *   insn=0x00000000004C9254 string=0x00000000004C9288 "?"
 *   insn=0x00000000004C9258 string=0x00000000004C925C ")=G"
 *   insn=0x00000000004C925C string=0x00000000004C9260 "!"
 *   insn=0x00000000004C9264 string=0x00000000004C9268 "\t"
 *   insn=0x00000000004C9264 string=0x00000000004C929C "\t"
 *   insn=0x00000000004C9268 string=0x00000000004C926C "*"
 *   insn=0x00000000004C926C string=0x00000000004C9270 "\n"
 *   insn=0x00000000004C9278 string=0x00000000004C92A8 "?"
 *   insn=0x00000000004C927C string=0x00000000004C9280 "*"
 *   insn=0x00000000004C9280 string=0x00000000004C9284 "\n"
 *   insn=0x00000000004C9290 string=0x00000000004C9294 "D"
 *   insn=0x00000000004C929C string=0x00000000004C92A0 "*"
 *   insn=0x00000000004C92A0 string=0x00000000004C92A4 "\n"
 *   insn=0x00000000004C92B0 string=0x00000000004C92B4 "<"
 *   insn=0x00000000004C92BC string=0x00000000004C92C0 "J=G"
 *   insn=0x00000000004C92C0 string=0x00000000004C92C4 ")!"
 *   insn=0x00000000004C92C8 string=0x00000000004C92CC "*"
 *   insn=0x00000000004C92C8 string=0x00000000004C9304 "*"
 *   insn=0x00000000004C92CC string=0x00000000004C92D0 "K"
 *   insn=0x00000000004C92D0 string=0x00000000004C92D4 "+"
 *   insn=0x00000000004C92D8 string=0x00000000004C92DC ""
 *   insn=0x00000000004C92DC string=0x00000000004C9310 "_"
 *   insn=0x00000000004C92E0 string=0x00000000004C92E4 "J=G"
 *   insn=0x00000000004C92E4 string=0x00000000004C92E8 ")!"
 *   insn=0x00000000004C92E8 string=0x00000000004C92EC "\n"
 *   insn=0x00000000004C92EC string=0x00000000004C92F0 "*"
 *   insn=0x00000000004C92EC string=0x00000000004C932C "*"
 *   insn=0x00000000004C92F0 string=0x00000000004C92F4 "K"
 *   insn=0x00000000004C92F4 string=0x00000000004C92F8 "+"
 *   insn=0x00000000004C9300 string=0x00000000004C9338 "_"
 *   insn=0x00000000004C9304 string=0x00000000004C9308 "K"
 *   insn=0x00000000004C9308 string=0x00000000004C930C "+"
 *   insn=0x00000000004C931C string=0x00000000004C9320 "!"
 *   insn=0x00000000004C932C string=0x00000000004C9330 "K"
 *   insn=0x00000000004C9330 string=0x00000000004C9334 "+"
 *   insn=0x00000000004C9338 string=0x00000000004C933C ","
 *   insn=0x00000000004C9358 string=0x00000000004C935C "a"
 *   insn=0x00000000004C935C string=0x0000000000597ED4 "pvr"
 *   insn=0x00000000004C9384 string=0x00000000004C9388 " "
 *   insn=0x00000000004C9388 string=0x00000000004C938C "`"
 *   insn=0x00000000004C939C string=0x00000000004C93A0 "hn"
 *   insn=0x00000000004C93A0 string=0x00000000004C93A4 "h*"
 *   insn=0x00000000004C93CC string=0x00000000004C93D0 "7"
 *   insn=0x00000000004C93D8 string=0x00000000004C93DC ")=G"
 *   insn=0x00000000004C93DC string=0x00000000004C93E0 "!"
 *   insn=0x00000000004C93E4 string=0x00000000004C93E8 "\t"
 *   insn=0x00000000004C93E4 string=0x00000000004C9420 "\t"
 *   insn=0x00000000004C93E8 string=0x00000000004C93EC "*"
 *   insn=0x00000000004C93EC string=0x00000000004C93F0 "\n"
 *   insn=0x00000000004C93F4 string=0x00000000004C93F8 ""
 *   insn=0x00000000004C93F8 string=0x00000000004C942C "?"
 *   insn=0x00000000004C93FC string=0x00000000004C9400 ")=G"
 *   insn=0x00000000004C9400 string=0x00000000004C9404 "!"
 *   insn=0x00000000004C9408 string=0x00000000004C940C "\t"
 *   insn=0x00000000004C9408 string=0x00000000004C9440 "\t"
 *   insn=0x00000000004C940C string=0x00000000004C9410 "*"
 *   insn=0x00000000004C9410 string=0x00000000004C9414 "\n"
 *   insn=0x00000000004C941C string=0x00000000004C944C "?"
 *   insn=0x00000000004C9420 string=0x00000000004C9424 "*"
 *   insn=0x00000000004C9424 string=0x00000000004C9428 "\n"
 *   insn=0x00000000004C9440 string=0x00000000004C9444 "*"
 *   insn=0x00000000004C9444 string=0x00000000004C9448 "\n"
 *   insn=0x00000000004C945C string=0x00000000004C9460 "i"
 *   insn=0x00000000004C9468 string=0x00000000004C946C ""
 *   insn=0x00000000004C9478 string=0x00000000004C947C "(a"
 *   insn=0x00000000004C9498 string=0x00000000004C949C ")=G"
 *   insn=0x00000000004C949C string=0x00000000004C94A0 "!"
 *   insn=0x00000000004C94A4 string=0x00000000004C94A8 "\t"
 *   insn=0x00000000004C94A4 string=0x00000000004C9678 "\t"
 *   insn=0x00000000004C94A8 string=0x00000000004C94AC "*"
 *   insn=0x00000000004C94AC string=0x00000000004C94B0 "\n"
 *   insn=0x00000000004C94B4 string=0x00000000004C94B8 "X"
 *   insn=0x00000000004C94B8 string=0x00000000004C9618 "?"
 *   insn=0x00000000004C94BC string=0x00000000004C94C0 "J=G"
 *   insn=0x00000000004C94C0 string=0x00000000004C94C4 ")!"
 *   insn=0x00000000004C94C8 string=0x00000000004C94CC "*"
 *   insn=0x00000000004C94C8 string=0x00000000004C94E0 "*"
 *   insn=0x00000000004C94CC string=0x00000000004C94D0 "K"
 *   insn=0x00000000004C94D0 string=0x00000000004C94D4 "+"
 *   insn=0x00000000004C94DC string=0x00000000004C94EC "_"
 *   insn=0x00000000004C94E0 string=0x00000000004C94E4 "K"
 *   insn=0x00000000004C94E4 string=0x00000000004C94E8 "+"
 *   insn=0x00000000004C9504 string=0x00000000004C9508 "\t"
 *   insn=0x00000000004C9514 string=0x00000000004C9518 "J"
 *   insn=0x00000000004C951C string=0x00000000004C9520 "(a"
 *   insn=0x00000000004C9530 string=0x00000000004C9534 ")"
 *   insn=0x00000000004C953C string=0x00000000004C9540 "`\n"
 *   insn=0x00000000004C9544 string=0x00000000004C9548 ")=G"
 *   insn=0x00000000004C9548 string=0x00000000004C954C "!"
 *   insn=0x00000000004C954C string=0x00000000004C9550 "I\t"
 *   insn=0x00000000004C9550 string=0x00000000004C9554 "\t"
 *   insn=0x00000000004C9554 string=0x00000000004C9558 "*"
 *   insn=0x00000000004C9558 string=0x00000000004C955C "\n"
 *   insn=0x00000000004C9560 string=0x00000000004C9564 "-"
 *   insn=0x00000000004C9568 string=0x00000000004C956C "J=G"
 *   insn=0x00000000004C956C string=0x00000000004C9570 ")!"
 *   insn=0x00000000004C9574 string=0x00000000004C9578 "*"
 *   insn=0x00000000004C9574 string=0x00000000004C958C "*"
 *   insn=0x00000000004C9578 string=0x00000000004C957C "K"
 *   insn=0x00000000004C957C string=0x00000000004C9580 "+"
 *   insn=0x00000000004C9588 string=0x00000000004C9598 "_"
 *   insn=0x00000000004C958C string=0x00000000004C9590 "K"
 *   insn=0x00000000004C9590 string=0x00000000004C9594 "+"
 *   insn=0x00000000004C95B0 string=0x00000000004C95B4 ""
 *   insn=0x00000000004C95C8 string=0x00000000004C95CC "J"
 *   insn=0x00000000004C95D0 string=0x00000000004C95D4 "(a"
 *   insn=0x00000000004C95E4 string=0x00000000004C95E8 ")"
 *   insn=0x00000000004C95F8 string=0x00000000004C95FC ")=G"
 *   insn=0x00000000004C95FC string=0x00000000004C9600 "!"
 *   insn=0x00000000004C9604 string=0x00000000004C9608 "\t"
 *   insn=0x00000000004C9608 string=0x00000000004C960C "*"
 *   insn=0x00000000004C960C string=0x00000000004C9610 "\n"
 *   insn=0x00000000004C9620 string=0x00000000004C9624 "`"
 *   insn=0x00000000004C9630 string=0x00000000004C9634 "J=G"
 *   insn=0x00000000004C9634 string=0x00000000004C9638 ")!"
 *   insn=0x00000000004C963C string=0x00000000004C9640 "*"
 *   insn=0x00000000004C963C string=0x00000000004C9654 "*"
 *   insn=0x00000000004C9640 string=0x00000000004C9644 "K"
 *   insn=0x00000000004C9644 string=0x00000000004C9648 "+"
 *   insn=0x00000000004C9650 string=0x00000000004C9660 "_"
 *   insn=0x00000000004C9654 string=0x00000000004C9658 "K"
 *   insn=0x00000000004C9658 string=0x00000000004C965C "+"
 *   insn=0x00000000004C966C string=0x00000000004C9670 "M"
 *   insn=0x00000000004C9678 string=0x00000000004C967C "*"
 *   insn=0x00000000004C967C string=0x00000000004C9680 "\n"
 *   insn=0x00000000004C9680 string=0x00000000004C9684 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Texture::LoadFromProtobufMessage(Caver::Texture *this, const Caver::Proto::Texture *a2)
{
  char *v4; // x19
  Caver::TextureLibrary *v5; // x0
  __int64 v6; // x23
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x9
  __int64 v10; // x8
  int v11; // w8
  __int64 v12; // x0
  void *v13; // x8
  const Caver::Proto::Texture *v14; // x8
  char v15; // w0
  char v16; // w21
  void *v17; // x0
  char v18; // w0
  unsigned int *v19; // x8
  int v20; // w9
  _QWORD v22[2]; // [xsp+6Ch] [xbp-60h] BYREF
  Caver::TextureLibrary *v23; // [xsp+7Ch] [xbp-50h]
  __int64 v24; // [xsp+84h] [xbp-48h]

  v4 = (char *)this + 48;
  v24 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = (Caver::TextureLibrary *)sub_56A6A8((char *)this + 48);
  if ( (*((_BYTE *)a2 + 104) & 2) != 0 )
  {
    v5 = (Caver::TextureLibrary *)Caver::PixelFormatFromProtobufValue();
    *((_DWORD *)this + 17) = (_DWORD)v5;
  }
  if ( *((int *)a2 + 10) >= 1 )
  {
    v6 = 0;
    do
    {
      if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8 * v6) + 24LL) )
        v7 = *(_QWORD *)(*((_QWORD *)a2 + 4) + 8 * v6);
      else
        v7 = Caver::Proto::Texture_Subtexture::default_instance_;
      v8 = *(_QWORD *)(v7 + 24);
      v9 = *(_QWORD *)(v8 + 12);
      v10 = *(_QWORD *)(v8 + 20);
      v22[0] = v9;
      v22[1] = v10;
      Caver::Texture::CreateSubtexture();
      sub_56A6A8((char *)v23 + 48);
      v5 = v23;
      if ( v23 )
      {
        v11 = *((_DWORD *)v23 + 2) - 1;
        *((_DWORD *)v23 + 2) = v11;
        if ( !v11 )
          v5 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(Caver::TextureLibrary *))(*(_QWORD *)v5 + 8LL))(v5);
      }
      ++v6;
    }
    while ( v6 < *((int *)a2 + 10) );
  }
  if ( (*((_BYTE *)a2 + 104) & 0x10) != 0 )
  {
    v12 = operator new(0x18u);
    *(_BYTE *)v12 = 1;
    *(_OWORD *)(v12 + 4) = xmmword_597DC0;
    *(_DWORD *)(v12 + 20) = 2143289344;
    v13 = (void *)*((_QWORD *)this + 18);
    *((_QWORD *)this + 18) = v12;
    if ( v13 )
    {
      operator delete(v13);
      v12 = *((_QWORD *)this + 18);
    }
    if ( *((_QWORD *)a2 + 12) )
      v14 = a2;
    else
      v14 = (const Caver::Proto::Texture *)Caver::Proto::Texture::default_instance_;
    v5 = (Caver::TextureLibrary *)Caver::TextureConversionInfo::LoadFromProtobufMessage(
                                    (Caver::TextureConversionInfo *)v12,
                                    *((const Caver::Proto::Texture_ConversionInfo **)v14 + 12));
  }
  if ( !*(_BYTE *)(Caver::TextureLibrary::sharedLibrary(v5) + 57) )
    goto LABEL_29;
  sub_56A528(v22, v4);
  sub_5677D4(v22, "_2x", 3);
  Caver::Texture::InitWithResource();
  v16 = v15;
  v17 = (void *)(v22[0] - 24LL);
  if ( (__int64 *)(v22[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_21;
  v19 = (unsigned int *)(v22[0] - 8LL);
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
  if ( v20 > 0 )
  {
LABEL_21:
    if ( (v16 & 1) == 0 )
    {
LABEL_29:
      Caver::Texture::InitWithResource();
      return v18 & 1;
    }
  }
  else
  {
    operator delete(v17);
    if ( (v16 & 1) == 0 )
      goto LABEL_29;
  }
  v18 = 1;
  return v18 & 1;
}


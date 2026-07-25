/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045AC60
 * Mangled: _ZN5Caver13ObjectLibrary15LibraryWithNameERKSs
 * Demangled: Caver::ObjectLibrary::LibraryWithName(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F4780  Caver::ObjectLibrary::LibraryWithName(std::string const&)
 *
 * Callees: 25
 *   0x00000000001F3660  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_create_node(std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>> const&)
 *   0x00000000001F3EA0  boost::detail::shared_count::shared_count<Caver::ObjectLibrary>(Caver::ObjectLibrary *)
 *   0x00000000001F4480  Caver::Proto::ObjectLibrary::~ObjectLibrary()
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5F30  Caver::PathForResourceOfType(std::string const&,std::string const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6AC0  Caver::LoadProtobufMessageFromFile(google::protobuf::MessageLite *,std::string const&)
 *   0x00000000001F6F40  Caver::FindFile(std::string const&,std::string const&)
 *   0x00000000001F91F0  Caver::Proto::ObjectLibrary::ObjectLibrary(void)
 *   0x00000000001F9E60  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FCBB0  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::string const&)
 *   0x00000000001FE440  .printf
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x00000000002032B0  std::map<std::string,boost::weak_ptr<Caver::ObjectLibrary>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::operator[](std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005677D4  sub_5677D4
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 316
 *   insn=0x000000000045AC78 string=0x000000000045AC7C "X"
 *   insn=0x000000000045AC80 string=0x000000000045AC84 ""
 *   insn=0x000000000045AC88 string=0x000000000045AC8C "`"
 *   insn=0x000000000045ACA4 string=0x000000000045ACA8 "u"
 *   insn=0x000000000045ACA8 string=0x000000000045ACD4 "a"
 *   insn=0x000000000045ACB0 string=0x000000000045ACB4 ""
 *   insn=0x000000000045ACB8 string=0x000000000045ACBC ""
 *   insn=0x000000000045ACBC string=0x000000000045ACC0 "h"
 *   insn=0x000000000045ACC4 string=0x000000000045AF3C ""
 *   insn=0x000000000045ACE0 string=0x000000000045ACE4 "W"
 *   insn=0x000000000045ACF4 string=0x000000000045ACF8 ""
 *   insn=0x000000000045ACF8 string=0x000000000045ACFC "("
 *   insn=0x000000000045AD04 string=0x000000000045AD08 ">"
 *   insn=0x000000000045AD0C string=0x000000000059591D ".scl"
 *   insn=0x000000000045AD2C string=0x00000000001F6F40 "0'"
 *   insn=0x000000000045AD34 string=0x000000000045AD38 "\>"
 *   insn=0x000000000045AD44 string=0x000000000045AD48 "A"
 *   insn=0x000000000045AD48 string=0x000000000045AFB0 "I"
 *   insn=0x000000000045AD58 string=0x000000000045AD5C "I"
 *   insn=0x000000000045AD5C string=0x000000000045AD60 ")=G"
 *   insn=0x000000000045AD60 string=0x000000000045AD64 "!"
 *   insn=0x000000000045AD68 string=0x000000000045AD6C "\t"
 *   insn=0x000000000045AD68 string=0x000000000045B05C "\t"
 *   insn=0x000000000045AD6C string=0x000000000045AD70 "*"
 *   insn=0x000000000045AD70 string=0x000000000045AD74 "\n"
 *   insn=0x000000000045AD7C string=0x000000000045B068 "?"
 *   insn=0x000000000045AD80 string=0x000000000059591E "scl"
 *   insn=0x000000000045AD9C string=0x000000000045ADA0 "dl"
 *   insn=0x000000000045ADA0 string=0x00000000001F5F30 "P'"
 *   insn=0x000000000045ADA8 string=0x000000000045ADAC "?>"
 *   insn=0x000000000045ADBC string=0x000000000045B014 "I"
 *   insn=0x000000000045ADC8 string=0x000000000045ADCC "a"
 *   insn=0x000000000045ADCC string=0x000000000045B038 "I"
 *   insn=0x000000000045ADD0 string=0x000000000045ADD4 ""
 *   insn=0x000000000045ADE0 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000045ADF0 string=0x000000000045ADF4 "?"
 *   insn=0x000000000045ADF8 string=0x000000000045ADFC "B\t"
 *   insn=0x000000000045AE0C string=0x00000000001FBC40 "0'"
 *   insn=0x000000000045AE1C string=0x000000000045AE20 " d"
 *   insn=0x000000000045AE20 string=0x00000000001F3EA0 "P'"
 *   insn=0x000000000045AE30 string=0x000000000045AE34 "hZ@"
 *   insn=0x000000000045AE3C string=0x000000000045AE40 "uf"
 *   insn=0x000000000045AE40 string=0x000000000045AE44 "6"
 *   insn=0x000000000045AE48 string=0x000000000045AE4C ""
 *   insn=0x000000000045AE58 string=0x000000000045AE5C "\t@"
 *   insn=0x000000000045AE68 string=0x000000000045AE6C ""
 *   insn=0x000000000045AE78 string=0x000000000045AE7C "@"
 *   insn=0x000000000045AE8C string=0x00000000001F91F0 "0'"
 *   insn=0x000000000045AE94 string=0x000000000045AE98 "\no"
 *   insn=0x000000000045AE98 string=0x00000000001F6AC0 "0'"
 *   insn=0x000000000045AEA4 string=0x00000000001F9E60 "0'"
 *   insn=0x000000000045AEA8 string=0x000000000045AEAC "ue"
 *   insn=0x000000000045AEAC string=0x000000000045AEB0 "`"
 *   insn=0x000000000045AEAC string=0x00000000001F4480 "P'"
 *   insn=0x000000000045AECC string=0x000000000045AED0 "`"
 *   insn=0x000000000045AED4 string=0x000000000045AED8 "(@"
 *   insn=0x000000000045AED8 string=0x000000000045AEDC ""
 *   insn=0x000000000045AEDC string=0x000000000045AEE0 "("
 *   insn=0x000000000045AEE4 string=0x000000000045AEE8 "@"
 *   insn=0x000000000045AEE8 string=0x000000000045AEEC ""
 *   insn=0x000000000045AEEC string=0x000000000045AEF0 ""
 *   insn=0x000000000045AEF4 string=0x000000000045AEF8 ""
 *   insn=0x000000000045AEF8 string=0x000000000045AEFC "@"
 *   insn=0x000000000045AF10 string=0x000000000045AF18 "J"
 *   insn=0x000000000045AF10 string=0x0000000000595922 "Could not find object library: %s"
 *   insn=0x000000000045AF28 string=0x000000000045AF68 "I"
 *   insn=0x000000000045AF38 string=0x000000000045AF8C "I"
 *   insn=0x000000000045AF68 string=0x000000000045AF6C ")=G"
 *   insn=0x000000000045AF6C string=0x000000000045AF70 "!"
 *   insn=0x000000000045AF70 string=0x000000000045AF74 "\t"
 *   insn=0x000000000045AF74 string=0x000000000045AF78 "\t"
 *   insn=0x000000000045AF74 string=0x000000000045AFD4 "\t"
 *   insn=0x000000000045AF78 string=0x000000000045AF7C "*"
 *   insn=0x000000000045AF7C string=0x000000000045AF80 "\n"
 *   insn=0x000000000045AF88 string=0x000000000045AFE0 "?"
 *   insn=0x000000000045AF8C string=0x000000000045AF90 ")=G"
 *   insn=0x000000000045AF90 string=0x000000000045AF94 "!"
 *   insn=0x000000000045AF98 string=0x000000000045AF9C "\t"
 *   insn=0x000000000045AF98 string=0x000000000045AFF4 "\t"
 *   insn=0x000000000045AF9C string=0x000000000045AFA0 "*"
 *   insn=0x000000000045AFA0 string=0x000000000045AFA4 "\n"
 *   insn=0x000000000045AFAC string=0x000000000045B000 "?"
 *   insn=0x000000000045AFB0 string=0x000000000045AFB4 ")=G"
 *   insn=0x000000000045AFB4 string=0x000000000045AFB8 "!"
 *   insn=0x000000000045AFB8 string=0x000000000045AFBC "\t"
 *   insn=0x000000000045AFBC string=0x000000000045AFC0 "\t"
 *   insn=0x000000000045AFBC string=0x000000000045B07C "\t"
 *   insn=0x000000000045AFC0 string=0x000000000045AFC4 "*"
 *   insn=0x000000000045AFC4 string=0x000000000045AFC8 "\n"
 *   insn=0x000000000045AFCC string=0x000000000045AFD0 "."
 *   insn=0x000000000045AFD0 string=0x000000000045B088 "?"
 *   insn=0x000000000045AFD4 string=0x000000000045AFD8 "*"
 *   insn=0x000000000045AFD8 string=0x000000000045AFDC "\n"
 *   insn=0x000000000045AFE0 string=0x000000000045AFE4 "L"
 *   insn=0x000000000045AFF4 string=0x000000000045AFF8 "*"
 *   insn=0x000000000045AFF8 string=0x000000000045AFFC "\n"
 *   insn=0x000000000045B014 string=0x000000000045B018 ")=G"
 *   insn=0x000000000045B018 string=0x000000000045B01C "!"
 *   insn=0x000000000045B020 string=0x000000000045B024 "\t"
 *   insn=0x000000000045B020 string=0x000000000045B09C "\t"
 *   insn=0x000000000045B024 string=0x000000000045B028 "*"
 *   insn=0x000000000045B028 string=0x000000000045B02C "\n"
 *   insn=0x000000000045B034 string=0x000000000045B0A8 "?"
 *   insn=0x000000000045B038 string=0x000000000045B03C ")=G"
 *   insn=0x000000000045B03C string=0x000000000045B040 "!"
 *   insn=0x000000000045B044 string=0x000000000045B048 "\t"
 *   insn=0x000000000045B048 string=0x000000000045B04C "*"
 *   insn=0x000000000045B04C string=0x000000000045B050 "\n"
 *   insn=0x000000000045B05C string=0x000000000045B060 "*"
 *   insn=0x000000000045B060 string=0x000000000045B064 "\n"
 *   insn=0x000000000045B068 string=0x000000000045B06C ","
 *   insn=0x000000000045B074 string=0x000000000045B078 "V"
 *   insn=0x000000000045B07C string=0x000000000045B080 "*"
 *   insn=0x000000000045B080 string=0x000000000045B084 "\n"
 *   insn=0x000000000045B094 string=0x000000000045B098 "-"
 *   insn=0x000000000045B09C string=0x000000000045B0A0 "*"
 *   insn=0x000000000045B0A0 string=0x000000000045B0A4 "\n"
 *   insn=0x000000000045B0B4 string=0x000000000045B0B8 "B"
 *   insn=0x000000000045B0BC string=0x00000000001F62D0 "0'"
 *   insn=0x000000000045B0C4 string=0x000000000045B0C8 "(a"
 *   insn=0x000000000045B0D0 string=0x000000000045B0D4 "J"
 *   insn=0x000000000045B0D4 string=0x000000000045B0D8 "J=G"
 *   insn=0x000000000045B0D8 string=0x000000000045B0DC ")!"
 *   insn=0x000000000045B0E0 string=0x000000000045B0E4 "*"
 *   insn=0x000000000045B0E0 string=0x000000000045B0F8 "*"
 *   insn=0x000000000045B0E4 string=0x000000000045B0E8 "K"
 *   insn=0x000000000045B0E8 string=0x000000000045B0EC "+"
 *   insn=0x000000000045B0F4 string=0x000000000045B104 "_"
 *   insn=0x000000000045B0F8 string=0x000000000045B0FC "K"
 *   insn=0x000000000045B0FC string=0x000000000045B100 "+"
 *   insn=0x000000000045B128 string=0x000000000045B12C " "
 *   insn=0x000000000045B12C string=0x000000000045B130 "I"
 *   insn=0x000000000045B130 string=0x000000000045B134 ")=G"
 *   insn=0x000000000045B134 string=0x000000000045B138 "!"
 *   insn=0x000000000045B13C string=0x000000000045B140 "\t"
 *   insn=0x000000000045B13C string=0x000000000045B1EC "\t"
 *   insn=0x000000000045B140 string=0x000000000045B144 "*"
 *   insn=0x000000000045B144 string=0x000000000045B148 "\n"
 *   insn=0x000000000045B14C string=0x000000000045B150 "*"
 *   insn=0x000000000045B150 string=0x000000000045B1F8 "?"
 *   insn=0x000000000045B15C string=0x000000000045B160 "(a"
 *   insn=0x000000000045B168 string=0x000000000045B16C "J"
 *   insn=0x000000000045B16C string=0x000000000045B170 "J=G"
 *   insn=0x000000000045B170 string=0x000000000045B174 ")!"
 *   insn=0x000000000045B178 string=0x000000000045B17C "*"
 *   insn=0x000000000045B178 string=0x000000000045B190 "*"
 *   insn=0x000000000045B17C string=0x000000000045B180 "K"
 *   insn=0x000000000045B180 string=0x000000000045B184 "+"
 *   insn=0x000000000045B18C string=0x000000000045B19C "_"
 *   insn=0x000000000045B190 string=0x000000000045B194 "K"
 *   insn=0x000000000045B194 string=0x000000000045B198 "+"
 *   insn=0x000000000045B1A8 string=0x000000000045B1AC "~<"
 *   insn=0x000000000045B1C0 string=0x000000000045B1C4 "`"
 *   insn=0x000000000045B1C4 string=0x000000000045B1C8 "I"
 *   insn=0x000000000045B1C8 string=0x000000000045B1CC ")=G"
 *   insn=0x000000000045B1CC string=0x000000000045B1D0 "!"
 *   insn=0x000000000045B1D4 string=0x000000000045B1D8 "\t"
 *   insn=0x000000000045B1D8 string=0x000000000045B1DC "*"
 *   insn=0x000000000045B1DC string=0x000000000045B1E0 "\n"
 *   insn=0x000000000045B1EC string=0x000000000045B1F0 "*"
 *   insn=0x000000000045B1F0 string=0x000000000045B1F4 "\n"
 *   insn=0x000000000045B200 string=0x000000000045B204 "h<"
 *   insn=0x000000000045B204 string=0x000000000045B208 """
 *   insn=0x000000000045B210 string=0x000000000045B214 "(a"
 *   insn=0x000000000045B21C string=0x000000000045B220 "J"
 *   insn=0x000000000045B220 string=0x000000000045B224 "J=G"
 *   insn=0x000000000045B224 string=0x000000000045B228 ")!"
 *   insn=0x000000000045B22C string=0x000000000045B230 "*"
 *   insn=0x000000000045B22C string=0x000000000045B244 "*"
 *   insn=0x000000000045B230 string=0x000000000045B234 "K"
 *   insn=0x000000000045B234 string=0x000000000045B238 "+"
 *   insn=0x000000000045B240 string=0x000000000045B250 "_"
 *   insn=0x000000000045B244 string=0x000000000045B248 "K"
 *   insn=0x000000000045B248 string=0x000000000045B24C "+"
 *   insn=0x000000000045B25C string=0x000000000045B260 "Q<"
 *   insn=0x000000000045B260 string=0x000000000045B264 ""
 *   insn=0x000000000045B270 string=0x000000000045B274 "-"
 *   insn=0x000000000045B29C string=0x000000000045B330 "I"
 *   insn=0x000000000045B2AC string=0x000000000045B2B0 "I"
 *   insn=0x000000000045B2AC string=0x000000000045B2E0 "u"
 *   insn=0x000000000045B2B0 string=0x000000000045B2B4 ")=G"
 *   insn=0x000000000045B2B4 string=0x000000000045B2B8 "!"
 *   insn=0x000000000045B2BC string=0x000000000045B2C0 "\t"
 *   insn=0x000000000045B2BC string=0x000000000045B374 "\t"
 *   insn=0x000000000045B2C0 string=0x000000000045B2C4 "*"
 *   insn=0x000000000045B2C4 string=0x000000000045B2C8 "\n"
 *   insn=0x000000000045B2CC string=0x000000000045B2D0 "?"
 *   insn=0x000000000045B2D0 string=0x000000000045B2D4 "l"
 *   insn=0x000000000045B2D8 string=0x000000000045B2DC "2<"
 *   insn=0x000000000045B2E0 string=0x000000000045B2E4 "5"
 *   insn=0x000000000045B2E8 string=0x000000000045B2EC ""
 *   insn=0x000000000045B2F8 string=0x000000000045B2FC "\t@"
 *   insn=0x000000000045B308 string=0x000000000045B30C ""
 *   insn=0x000000000045B318 string=0x000000000045B31C "@"
 *   insn=0x000000000045B328 string=0x000000000045B32C "f"
 *   insn=0x000000000045B330 string=0x000000000045B334 ")=G"
 *   insn=0x000000000045B334 string=0x000000000045B338 "!"
 *   insn=0x000000000045B33C string=0x000000000045B340 "\t"
 *   insn=0x000000000045B33C string=0x000000000045B354 "\t"
 *   insn=0x000000000045B340 string=0x000000000045B344 "*"
 *   insn=0x000000000045B344 string=0x000000000045B348 "\n"
 *   insn=0x000000000045B350 string=0x000000000045B360 "?"
 *   insn=0x000000000045B354 string=0x000000000045B358 "*"
 *   insn=0x000000000045B358 string=0x000000000045B35C "\n"
 *   insn=0x000000000045B374 string=0x000000000045B378 "*"
 *   insn=0x000000000045B378 string=0x000000000045B37C "\n"
 *   insn=0x000000000045B37C string=0x000000000045B380 "?"
 *   insn=0x000000000045B3AC string=0x000000000045B3B0 "I"
 *   insn=0x000000000045B3B0 string=0x000000000045B3B4 "("
 *   insn=0x000000000045B3C8 string=0x000000000045B3CC "7"
 *   insn=0x000000000045B3EC string=0x000000000045B3F0 ""
 *   insn=0x000000000045B3F4 string=0x000000000045B3F8 """
 *   insn=0x000000000045B3F8 string=0x000000000045B3FC "eg"
 *   insn=0x000000000045B3FC string=0x00000000001F5190 "P'"
 *   insn=0x000000000045B400 string=0x000000000045B404 "@"
 *   insn=0x000000000045B410 string=0x000000000045B414 ""
 *   insn=0x000000000045B450 string=0x000000000045B454 "@"
 *   insn=0x000000000045B458 string=0x000000000045B45C "a"
 *   insn=0x000000000045B45C string=0x000000000045B460 ""
 *   insn=0x000000000045B460 string=0x000000000045B464 ")"
 *   insn=0x000000000045B468 string=0x000000000045B46C """
 *   insn=0x000000000045B46C string=0x000000000045B470 "Hg"
 *   insn=0x000000000045B470 string=0x000000000045B474 "@\t"
 *   insn=0x000000000045B474 string=0x000000000045B478 "`"
 *   insn=0x000000000045B480 string=0x000000000045B484 ")<"
 *   insn=0x000000000045B498 string=0x00000000001FCBB0 "0'"
 *   insn=0x000000000045B4A0 string=0x000000000045B4A4 "6"
 *   insn=0x000000000045B4A8 string=0x000000000045B4AC "s"
 *   insn=0x000000000045B4B0 string=0x000000000045B4B4 " "
 *   insn=0x000000000045B4BC string=0x000000000045B4C0 ""
 *   insn=0x000000000045B4C0 string=0x000000000045B4C4 ")"
 *   insn=0x000000000045B4C8 string=0x000000000045B4CC """
 *   insn=0x000000000045B4CC string=0x000000000045B4D0 "0g"
 *   insn=0x000000000045B4EC string=0x000000000045B4F0 "`"
 *   insn=0x000000000045B4FC string=0x000000000045B500 "X`"
 *   insn=0x000000000045B500 string=0x00000000001F3660 "P'"
 *   insn=0x000000000045B51C string=0x000000000045B520 ""
 *   insn=0x000000000045B52C string=0x000000000045B530 "@"
 *   insn=0x000000000045B530 string=0x000000000045B534 ""
 *   insn=0x000000000045B534 string=0x000000000045B538 ""
 *   insn=0x000000000045B53C string=0x000000000045B540 ""
 *   insn=0x000000000045B540 string=0x000000000045B544 "@"
 *   insn=0x000000000045B54C string=0x000000000045B550 "I"
 *   insn=0x000000000045B550 string=0x000000000045B554 ")"
 *   insn=0x000000000045B560 string=0x000000000045B5C0 "I"
 *   insn=0x000000000045B564 string=0x000000000045B568 ""
 *   insn=0x000000000045B574 string=0x000000000045B578 "`"
 *   insn=0x000000000045B574 string=0x000000000045B604 "3k"
 *   insn=0x000000000045B5B4 string=0x000000000045B5B8 "`"
 *   insn=0x000000000045B5C0 string=0x000000000045B5C4 ")=G"
 *   insn=0x000000000045B5C4 string=0x000000000045B5C8 "!"
 *   insn=0x000000000045B5CC string=0x000000000045B5D0 "\t"
 *   insn=0x000000000045B5CC string=0x000000000045B5E4 "\t"
 *   insn=0x000000000045B5D0 string=0x000000000045B5D4 "*"
 *   insn=0x000000000045B5D4 string=0x000000000045B5D8 "\n"
 *   insn=0x000000000045B5E0 string=0x000000000045B5F0 "?"
 *   insn=0x000000000045B5E4 string=0x000000000045B5E8 "*"
 *   insn=0x000000000045B5E8 string=0x000000000045B5EC "\n"
 *   insn=0x000000000045B5F8 string=0x000000000045B5FC "j;"
 *   insn=0x000000000045B608 string=0x000000000045B60C "J"
 *   insn=0x000000000045B60C string=0x000000000045B610 "J"
 *   insn=0x000000000045B614 string=0x000000000045B618 "(a"
 *   insn=0x000000000045B620 string=0x000000000045B624 "J"
 *   insn=0x000000000045B624 string=0x000000000045B628 "J=G"
 *   insn=0x000000000045B628 string=0x000000000045B62C ")!"
 *   insn=0x000000000045B630 string=0x000000000045B634 "*"
 *   insn=0x000000000045B630 string=0x000000000045B660 "*"
 *   insn=0x000000000045B634 string=0x000000000045B638 "K"
 *   insn=0x000000000045B638 string=0x000000000045B63C "+"
 *   insn=0x000000000045B640 string=0x000000000045B644 "_"
 *   insn=0x000000000045B644 string=0x000000000045B648 "l"
 *   insn=0x000000000045B650 string=0x000000000045B654 "T;"
 *   insn=0x000000000045B660 string=0x000000000045B664 "K"
 *   insn=0x000000000045B664 string=0x000000000045B668 "+"
 *   insn=0x000000000045B668 string=0x000000000045B66C "_"
 *   insn=0x000000000045B670 string=0x000000000045B674 "("
 *   insn=0x000000000045B688 string=0x000000000045B68C "("
 *   insn=0x000000000045B68C string=0x000000000045B690 "\t\t@"
 *   insn=0x000000000045B690 string=0x000000000045B694 ")"
 *   insn=0x000000000045B694 string=0x000000000045B698 "\t\t"
 *   insn=0x000000000045B69C string=0x000000000045B6A0 "\t"
 *   insn=0x000000000045B6A0 string=0x000000000045B6A4 ")@"
 *   insn=0x000000000045B6A8 string=0x000000000045B6AC " "
 *   insn=0x000000000045B6B0 string=0x000000000045B6B4 "I"
 *   insn=0x000000000045B6B4 string=0x000000000045B6B8 ")"
 *   insn=0x000000000045B6C4 string=0x000000000045B6C8 "I"
 *   insn=0x000000000045B6C8 string=0x000000000045B6CC ")=G"
 *   insn=0x000000000045B6CC string=0x000000000045B6D0 "!"
 *   insn=0x000000000045B6D0 string=0x000000000045B6D4 "i"
 *   insn=0x000000000045B6D4 string=0x000000000045B6D8 "\t"
 *   insn=0x000000000045B6D4 string=0x000000000045B700 "\t"
 *   insn=0x000000000045B6D8 string=0x000000000045B6DC "*"
 *   insn=0x000000000045B6DC string=0x000000000045B6E0 "\n"
 *   insn=0x000000000045B6E4 string=0x000000000045B6E8 "?"
 *   insn=0x000000000045B6E8 string=0x000000000045B6EC "L"
 *   insn=0x000000000045B6F0 string=0x000000000045B6F4 ",;"
 *   insn=0x000000000045B6F8 string=0x000000000045B6FC "r"
 *   insn=0x000000000045B700 string=0x000000000045B704 "*"
 *   insn=0x000000000045B704 string=0x000000000045B708 "\n"
 *   insn=0x000000000045B708 string=0x000000000045B70C "?"
 *   insn=0x000000000045B70C string=0x000000000045B710 ""
 *   insn=0x000000000045B714 string=0x000000000045B718 "k"
 *   insn=0x000000000045B71C string=0x000000000045B720 "J"
 *   insn=0x000000000045B720 string=0x000000000045B724 "J"
 *   insn=0x000000000045B728 string=0x000000000045B72C "(a"
 *   insn=0x000000000045B734 string=0x000000000045B738 "J"
 *   insn=0x000000000045B738 string=0x000000000045B73C "J=G"
 *   insn=0x000000000045B73C string=0x000000000045B740 ")!"
 *   insn=0x000000000045B744 string=0x000000000045B748 "*"
 *   insn=0x000000000045B744 string=0x000000000045B774 "*"
 *   insn=0x000000000045B748 string=0x000000000045B74C "K"
 *   insn=0x000000000045B74C string=0x000000000045B750 "+"
 *   insn=0x000000000045B754 string=0x000000000045B758 "_"
 *   insn=0x000000000045B774 string=0x000000000045B778 "K"
 *   insn=0x000000000045B778 string=0x000000000045B77C "+"
 *   insn=0x000000000045B77C string=0x000000000045B780 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::ObjectLibrary::LibraryWithName(const char **a1@<X0>, Caver::ObjectLibrary **a2@<X8>)
{
  Caver::ObjectLibrary **v4; // x0
  Caver::ObjectLibrary *v5; // x21
  __int64 v6; // x8
  Caver::ObjectLibrary *v7; // x8
  char *v8; // x0
  void *v9; // x0
  unsigned int *v10; // x8
  int v11; // w9
  char *v12; // x0
  _QWORD *v13; // x21
  Caver::ObjectLibrary *v14; // x22
  Caver::ObjectLibrary *v15; // x21
  Caver::ObjectLibrary *v16; // x25
  __int64 v17; // x8
  __int64 v18; // x8
  Caver::ObjectLibrary **v19; // x0
  Caver::ObjectLibrary **v20; // x20
  Caver::ObjectLibrary *v21; // x0
  __int64 v22; // x8
  char *v23; // x0
  void *v24; // x0
  unsigned int *v25; // x8
  int v26; // w9
  unsigned int *v27; // x8
  int v28; // w9
  unsigned int *v29; // x8
  int v30; // w9
  unsigned int *v31; // x8
  int v32; // w9
  __int64 v33; // [xsp+A0h] [xbp-168h] BYREF
  char *v34; // [xsp+A8h] [xbp-160h] BYREF
  __int64 v35; // [xsp+B0h] [xbp-158h] BYREF
  Caver::ObjectLibrary *v36; // [xsp+C0h] [xbp-148h] BYREF
  Caver::ObjectLibrary *v37; // [xsp+C8h] [xbp-140h]
  __int64 v38; // [xsp+1C0h] [xbp-48h]

  v38 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  std::map<std::string,boost::weak_ptr<Caver::ObjectLibrary>>::operator[]();
  v5 = v4[1];
  *a2 = 0;
  a2[1] = v5;
  if ( v5 )
  {
    v6 = *((_QWORD *)v5 + 1);
    if ( v6 )
    {
      *((_QWORD *)v5 + 1) = v6 + 1;
      v7 = *v4;
      *a2 = *v4;
      if ( v7 )
        return;
    }
    else
    {
      a2[1] = 0;
    }
  }
  sub_56A528(&v35, &qword_6E9BB0);
  v34 = &byte_6FD2F8;
  if ( *(_QWORD *)(v35 - 24) )
  {
    sub_56A528(&v33, a1);
    sub_5677D4(&v33, ".scl", 4);
    Caver::FindFile();
    sub_56A6A8(&v34);
    v8 = (char *)v36 - 24;
    if ( (__int64 *)((char *)v36 - 24) != &qword_6FD2E0 )
    {
      v29 = (unsigned int *)((char *)v36 - 8);
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
        operator delete(v8);
    }
    v9 = (void *)(v33 - 24);
    if ( (__int64 *)(v33 - 24) == &qword_6FD2E0 )
      goto LABEL_14;
    v10 = (unsigned int *)(v33 - 8);
    if ( &pthread_create )
    {
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
      goto LABEL_52;
    }
LABEL_51:
    v11 = (*v10)--;
    goto LABEL_52;
  }
  sub_566BB8((int)&v33, "scl");
  Caver::PathForResourceOfType();
  sub_56A6A8(&v34);
  v12 = (char *)v36 - 24;
  if ( (__int64 *)((char *)v36 - 24) != &qword_6FD2E0 )
  {
    v31 = (unsigned int *)((char *)v36 - 8);
    if ( &pthread_create )
    {
      do
        v32 = __ldaxr(v31);
      while ( __stlxr(v32 - 1, v31) );
    }
    else
    {
      v32 = (*v31)--;
    }
    if ( v32 <= 0 )
      operator delete(v12);
  }
  v9 = (void *)(v33 - 24);
  if ( (__int64 *)(v33 - 24) == &qword_6FD2E0 )
    goto LABEL_14;
  v10 = (unsigned int *)(v33 - 8);
  if ( !&pthread_create )
    goto LABEL_51;
  do
    v11 = __ldaxr(v10);
  while ( __stlxr(v11 - 1, v10) );
LABEL_52:
  if ( v11 <= 0 )
    operator delete(v9);
LABEL_14:
  if ( *((_QWORD *)v34 - 3) )
  {
    v13 = (_QWORD *)operator new(0x88u);
    *v13 = &byte_6FD2F8;
    v13[2] = 0;
    v13[3] = 0;
    v13[4] = v13 + 2;
    v13[5] = v13 + 2;
    v13[6] = 0;
    memset(v13 + 7, 0, 0x4Au);
    v36 = (Caver::ObjectLibrary *)v13;
    boost::detail::shared_count::shared_count<Caver::ObjectLibrary>();
    boost::detail::sp_enable_shared_from_this();
    v14 = a2[1];
    v15 = v36;
    v16 = v37;
    v36 = *a2;
    v37 = v14;
    *a2 = v15;
    a2[1] = v16;
    if ( v14 )
    {
      v17 = *((_QWORD *)v14 + 1) - 1LL;
      *((_QWORD *)v14 + 1) = v17;
      if ( !v17 )
      {
        (*(void (__fastcall **)(Caver::ObjectLibrary *))(*(_QWORD *)v14 + 16LL))(v14);
        v18 = *((_QWORD *)v14 + 2) - 1LL;
        *((_QWORD *)v14 + 2) = v18;
        if ( !v18 )
          (*(void (__fastcall **)(Caver::ObjectLibrary *))(*(_QWORD *)v14 + 24LL))(v14);
      }
    }
    Caver::Proto::ObjectLibrary::ObjectLibrary((Caver::Proto::ObjectLibrary *)&v36);
    Caver::LoadProtobufMessageFromFile();
    Caver::ObjectLibrary::LoadFromProtobufMessage(v15, (const Caver::Proto::ObjectLibrary *)&v36);
    Caver::Proto::ObjectLibrary::~ObjectLibrary((Caver::Proto::ObjectLibrary *)&v36);
    std::map<std::string,boost::weak_ptr<Caver::ObjectLibrary>>::operator[]();
    v20 = v19;
    v21 = v19[1];
    *v20 = v15;
    if ( v21 != v16 )
    {
      if ( v16 )
        ++*((_QWORD *)v16 + 2);
      if ( v21 )
      {
        v22 = *((_QWORD *)v21 + 2) - 1LL;
        *((_QWORD *)v21 + 2) = v22;
        if ( !v22 )
          (*(void (__fastcall **)(Caver::ObjectLibrary *))(*(_QWORD *)v21 + 24LL))(v21);
      }
      v20[1] = v16;
    }
  }
  else
  {
    printf("Could not find object library: %s", *a1);
  }
  v23 = v34 - 24;
  if ( v34 - 24 != (char *)&qword_6FD2E0 )
  {
    v25 = (unsigned int *)(v34 - 8);
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
      operator delete(v23);
  }
  v24 = (void *)(v35 - 24);
  if ( (__int64 *)(v35 - 24) != &qword_6FD2E0 )
  {
    v27 = (unsigned int *)(v35 - 8);
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
      operator delete(v24);
  }
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CCB7C
 * Mangled: _ZN5Caver14TextureLibrary17SetTextureForNameERKSsRKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::TextureLibrary::SetTextureForName(std::string const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 1
 *   0x00000000001F7170  Caver::TextureLibrary::SetTextureForName(std::string const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 25
 *   0x00000000001F3860  Caver::Texture::Load(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5C50  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>)
 *   0x00000000001F5F30  Caver::PathForResourceOfType(std::string const&,std::string const&)
 *   0x00000000001F6270  Caver::Proto::Texture::~Texture()
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F68B0  Caver::Texture::LoadFromProtobufMessage(Caver::Proto::Texture const&)
 *   0x00000000001F6AC0  Caver::LoadProtobufMessageFromFile(google::protobuf::MessageLite *,std::string const&)
 *   0x00000000001F7170  Caver::TextureLibrary::SetTextureForName(std::string const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7470  Caver::Texture::Texture(void)
 *   0x00000000001F8C60  Caver::TextureLibrary::TextureFromProtobufMessage(Caver::Proto::Texture const&,bool)
 *   0x00000000001FD3C0  Caver::TextureLibrary::PurgeTexturesIfNecessary(void)
 *   0x00000000001FD440  std::map<std::string,boost::intrusive_ptr<Caver::Texture>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::operator[](std::string const&)
 *   0x00000000001FD880  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::find(std::string const&)
 *   0x00000000001FDDD0  Caver::FileExistsAtPath(std::string const&)
 *   0x00000000002009C0  Caver::Proto::Texture::Texture(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005677D4  sub_5677D4
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 265
 *   insn=0x00000000004CCB90 string=0x00000000004CCB94 "v""
 *   insn=0x00000000004CCBA0 string=0x00000000004CCBA4 "7"
 *   insn=0x00000000004CCBA4 string=0x00000000001FD880 "0'"
 *   insn=0x00000000004CCBA8 string=0x00000000004CCBAC "iB"
 *   insn=0x00000000004CCBAC string=0x00000000004CCBB0 "?"
 *   insn=0x00000000004CCBB0 string=0x00000000004CCBB4 "`"
 *   insn=0x00000000004CCBC0 string=0x00000000004CCBC4 ")"
 *   insn=0x00000000004CCBD4 string=0x00000000004CCBD8 "j>@"
 *   insn=0x00000000004CCBD8 string=0x00000000004CCBDC "I"
 *   insn=0x00000000004CCBDC string=0x00000000004CCBE0 "i>"
 *   insn=0x00000000004CCBEC string=0x00000000001F5C50 "P'"
 *   insn=0x00000000004CCBF0 string=0x00000000004CCBF4 ""
 *   insn=0x00000000004CCC00 string=0x00000000004CCC04 "H"
 *   insn=0x00000000004CCC10 string=0x00000000001FD440 "0'"
 *   insn=0x00000000004CCC1C string=0x00000000004CCC20 "*\t@"
 *   insn=0x00000000004CCC20 string=0x00000000004CCC24 "J"
 *   insn=0x00000000004CCC24 string=0x00000000004CCC28 "*\t"
 *   insn=0x00000000004CCC2C string=0x00000000004CCC30 "\t"
 *   insn=0x00000000004CCC34 string=0x00000000004CCC38 "@"
 *   insn=0x00000000004CCC38 string=0x00000000004CCC3C ""
 *   insn=0x00000000004CCC3C string=0x00000000004CCC40 ""
 *   insn=0x00000000004CCC44 string=0x00000000004CCC48 ""
 *   insn=0x00000000004CCC48 string=0x00000000004CCC4C ""
 *   insn=0x00000000004CCC54 string=0x00000000004CCC58 "\t9@"
 *   insn=0x00000000004CCC5C string=0x00000000004CCC60 "i"
 *   insn=0x00000000004CCC60 string=0x00000000004CCC64 "\t9@"
 *   insn=0x00000000004CCC64 string=0x00000000004CCC68 ")"
 *   insn=0x00000000004CCC68 string=0x00000000004CCC6C "I@"
 *   insn=0x00000000004CCC6C string=0x00000000004CCC70 "i>@"
 *   insn=0x00000000004CCC74 string=0x00000000004CCC78 "("
 *   insn=0x00000000004CCC78 string=0x00000000004CCC7C "h>"
 *   insn=0x00000000004CCC90 string=0x00000000001FD3C0 "0'"
 *   insn=0x00000000004CCC98 string=0x00000000004CCC9C ""
 *   insn=0x00000000004CCCA4 string=0x00000000004CCCA8 ""
 *   insn=0x00000000004CCCC4 string=0x00000000004CCCC8 ""
 *   insn=0x00000000004CCCD4 string=0x00000000004CCCD8 ""
 *   insn=0x00000000004CCD08 string=0x00000000004CCD0C "X"
 *   insn=0x00000000004CCD10 string=0x00000000004CCD14 ""
 *   insn=0x00000000004CCD40 string=0x00000000004CCD44 " "
 *   insn=0x00000000004CCD58 string=0x00000000004CCD5C "h\n@"
 *   insn=0x00000000004CCD5C string=0x00000000004CCD60 ""
 *   insn=0x00000000004CCD60 string=0x00000000004CCD64 "h\n"
 *   insn=0x00000000004CCD6C string=0x00000000004CCD70 "h:@"
 *   insn=0x00000000004CCD70 string=0x00000000004CCD74 "h"
 *   insn=0x00000000004CCD7C string=0x00000000001F3860 "P'"
 *   insn=0x00000000004CCD80 string=0x00000000004CCD84 "4"
 *   insn=0x00000000004CCD84 string=0x00000000004CCE54 "h\n@"
 *   insn=0x00000000004CCD8C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004CCD98 string=0x00000000004CCD9C "h\n@"
 *   insn=0x00000000004CCD98 string=0x00000000001F7470 "0'"
 *   insn=0x00000000004CCDA0 string=0x00000000004CCDA4 ""
 *   insn=0x00000000004CCDA4 string=0x00000000004CCDA8 "h\n"
 *   insn=0x00000000004CCDB4 string=0x00000000001F68B0 "0'"
 *   insn=0x00000000004CCDB8 string=0x00000000004CCDBC "a"
 *   insn=0x00000000004CCDC8 string=0x00000000004CCDCC "h"
 *   insn=0x00000000004CCDC8 string=0x00000000001F7170 "0'"
 *   insn=0x00000000004CCDCC string=0x00000000004CCDD0 ")"
 *   insn=0x00000000004CCDD0 string=0x00000000004CCDD4 ")"
 *   insn=0x00000000004CCDD4 string=0x00000000004CCDD8 "?"
 *   insn=0x00000000004CCDF0 string=0x00000000004CCDF4 ""
 *   insn=0x00000000004CCE08 string=0x00000000004CCE0C "7"
 *   insn=0x00000000004CCE0C string=0x00000000004CCE30 "h"
 *   insn=0x00000000004CCE10 string=0x00000000004CCE14 ""
 *   insn=0x00000000004CCE20 string=0x00000000004CCE24 ""
 *   insn=0x00000000004CCE30 string=0x00000000004CCE34 "9"
 *   insn=0x00000000004CCE34 string=0x00000000004CCE38 ")"
 *   insn=0x00000000004CCE38 string=0x00000000004CCE3C ")"
 *   insn=0x00000000004CCE3C string=0x00000000004CCE40 "?"
 *   insn=0x00000000004CCE40 string=0x00000000004CCE44 ""
 *   insn=0x00000000004CCE50 string=0x00000000004CCE8C ""
 *   insn=0x00000000004CCE54 string=0x00000000004CCE58 ""
 *   insn=0x00000000004CCE58 string=0x00000000004CCE5C "h\n"
 *   insn=0x00000000004CCE5C string=0x00000000004CCE60 "s"
 *   insn=0x00000000004CCE60 string=0x00000000004CCE64 "\n"
 *   insn=0x00000000004CCE60 string=0x00000000004CCE6C "h\n@"
 *   insn=0x00000000004CCE6C string=0x00000000004CCE70 ""
 *   insn=0x00000000004CCE70 string=0x00000000004CCE74 "h\n"
 *   insn=0x00000000004CCE78 string=0x00000000004CCE7C "h"
 *   insn=0x00000000004CCE80 string=0x00000000004CCE84 ""
 *   insn=0x00000000004CCEB8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004CCEC0 string=0x00000000004CCF18 "h\n@"
 *   insn=0x00000000004CCED0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004CCED4 string=0x00000000004CCED8 "{"
 *   insn=0x00000000004CCEE8 string=0x00000000004CCEEC ""
 *   insn=0x00000000004CCEF0 string=0x00000000004CCEF4 "7"
 *   insn=0x00000000004CCEF8 string=0x00000000004CCEFC ""
 *   insn=0x00000000004CCF08 string=0x00000000004CCF0C ""
 *   insn=0x00000000004CCF18 string=0x00000000004CCF1C ""
 *   insn=0x00000000004CCF1C string=0x00000000004CCF20 "h\n"
 *   insn=0x00000000004CCF24 string=0x00000000004CCF28 "h"
 *   insn=0x00000000004CCF28 string=0x00000000004CCF2C ""
 *   insn=0x00000000004CCF38 string=0x00000000004CCF3C "b"
 *   insn=0x00000000004CCF54 string=0x00000000004CCF58 "V"
 *   insn=0x00000000004CCF78 string=0x00000000004CCF7C "h"
 *   insn=0x00000000004CCF88 string=0x00000000004CCF8C "gu"
 *   insn=0x00000000004CCF8C string=0x00000000004CCF90 "A"
 *   insn=0x00000000004CCF90 string=0x0000000000597CF3 "_2x"
 *   insn=0x00000000004CCF9C string=0x00000000004CCFA0 "j"
 *   insn=0x00000000004CCFA4 string=0x00000000005834EF "atlas"
 *   insn=0x00000000004CCFC4 string=0x00000000001F5F30 "P'"
 *   insn=0x00000000004CCFDC string=0x00000000004CCFE0 "A"
 *   insn=0x00000000004CD004 string=0x00000000004CD008 "r"
 *   insn=0x00000000004CD008 string=0x00000000001FDDD0 "0'"
 *   insn=0x00000000004CD058 string=0x00000000004CD05C "A"
 *   insn=0x00000000004CD060 string=0x00000000004CD064 "["
 *   insn=0x00000000004CD06C string=0x00000000004CD070 "T"
 *   insn=0x00000000004CD07C string=0x00000000001F6AC0 "0'"
 *   insn=0x00000000004CD090 string=0x00000000001F8C60 "0'"
 *   insn=0x00000000004CD098 string=0x00000000004CD09C ""
 *   insn=0x00000000004CD0A0 string=0x00000000004CD0A4 "@"
 *   insn=0x00000000004CD0A4 string=0x00000000004CD0A8 ""
 *   insn=0x00000000004CD0A8 string=0x00000000004CD0AC ""
 *   insn=0x00000000004CD0B0 string=0x00000000004CD0B4 ""
 *   insn=0x00000000004CD0B4 string=0x00000000004CD0B8 ""
 *   insn=0x00000000004CD0C0 string=0x00000000004CD0C4 "k"
 *   insn=0x00000000004CD0C4 string=0x00000000001F6270 "0'"
 *   insn=0x00000000004CD0D0 string=0x00000000004CD0D4 "A"
 *   insn=0x00000000004CD0FC string=0x00000000004CD100 ")=G"
 *   insn=0x00000000004CD100 string=0x00000000004CD104 "!"
 *   insn=0x00000000004CD104 string=0x00000000004CD108 "i"
 *   insn=0x00000000004CD108 string=0x00000000004CD10C "\t"
 *   insn=0x00000000004CD108 string=0x00000000004CD1D4 "\t"
 *   insn=0x00000000004CD10C string=0x00000000004CD110 "*"
 *   insn=0x00000000004CD110 string=0x00000000004CD114 "\n"
 *   insn=0x00000000004CD118 string=0x00000000004CD11C "1"
 *   insn=0x00000000004CD11C string=0x00000000004CD1E0 "?"
 *   insn=0x00000000004CD120 string=0x00000000004CD124 ")=G"
 *   insn=0x00000000004CD124 string=0x00000000004CD128 "!"
 *   insn=0x00000000004CD128 string=0x00000000004CD12C "I"
 *   insn=0x00000000004CD12C string=0x00000000004CD130 "\t"
 *   insn=0x00000000004CD12C string=0x00000000004CD1F4 "\t"
 *   insn=0x00000000004CD130 string=0x00000000004CD134 "*"
 *   insn=0x00000000004CD134 string=0x00000000004CD138 "\n"
 *   insn=0x00000000004CD13C string=0x00000000004CD140 "0"
 *   insn=0x00000000004CD140 string=0x00000000004CD200 "?"
 *   insn=0x00000000004CD144 string=0x00000000004CD148 ")=G"
 *   insn=0x00000000004CD148 string=0x00000000004CD14C "!"
 *   insn=0x00000000004CD14C string=0x00000000004CD150 ")"
 *   insn=0x00000000004CD150 string=0x00000000004CD154 "\t"
 *   insn=0x00000000004CD150 string=0x00000000004CD214 "\t"
 *   insn=0x00000000004CD154 string=0x00000000004CD158 "*"
 *   insn=0x00000000004CD158 string=0x00000000004CD15C "\n"
 *   insn=0x00000000004CD160 string=0x00000000004CD164 "/"
 *   insn=0x00000000004CD164 string=0x00000000004CD220 "?"
 *   insn=0x00000000004CD168 string=0x00000000004CD16C ")=G"
 *   insn=0x00000000004CD16C string=0x00000000004CD170 "!"
 *   insn=0x00000000004CD170 string=0x00000000004CD174 "\t"
 *   insn=0x00000000004CD174 string=0x00000000004CD178 "\t"
 *   insn=0x00000000004CD174 string=0x00000000004CD234 "\t"
 *   insn=0x00000000004CD178 string=0x00000000004CD17C "*"
 *   insn=0x00000000004CD17C string=0x00000000004CD180 "\n"
 *   insn=0x00000000004CD184 string=0x00000000004CD188 "."
 *   insn=0x00000000004CD188 string=0x00000000004CD240 "?"
 *   insn=0x00000000004CD18C string=0x00000000004CD190 ")=G"
 *   insn=0x00000000004CD190 string=0x00000000004CD194 "!"
 *   insn=0x00000000004CD198 string=0x00000000004CD19C "\t"
 *   insn=0x00000000004CD198 string=0x00000000004CD254 "\t"
 *   insn=0x00000000004CD19C string=0x00000000004CD1A0 "*"
 *   insn=0x00000000004CD1A0 string=0x00000000004CD1A4 "\n"
 *   insn=0x00000000004CD1A8 string=0x00000000004CD1AC "-"
 *   insn=0x00000000004CD1AC string=0x00000000004CD260 "?"
 *   insn=0x00000000004CD1B0 string=0x00000000004CD1B4 ")=G"
 *   insn=0x00000000004CD1B4 string=0x00000000004CD1B8 "!"
 *   insn=0x00000000004CD1BC string=0x00000000004CD1C0 "\t"
 *   insn=0x00000000004CD1BC string=0x00000000004CD274 "\t"
 *   insn=0x00000000004CD1C0 string=0x00000000004CD1C4 "*"
 *   insn=0x00000000004CD1C4 string=0x00000000004CD1C8 "\n"
 *   insn=0x00000000004CD1CC string=0x00000000004CD1D0 ","
 *   insn=0x00000000004CD1D0 string=0x00000000004CD280 "?"
 *   insn=0x00000000004CD1D4 string=0x00000000004CD1D8 "*"
 *   insn=0x00000000004CD1D8 string=0x00000000004CD1DC "\n"
 *   insn=0x00000000004CD1E8 string=0x00000000004CD1EC "nt"
 *   insn=0x00000000004CD1F4 string=0x00000000004CD1F8 "*"
 *   insn=0x00000000004CD1F8 string=0x00000000004CD1FC "\n"
 *   insn=0x00000000004CD200 string=0x00000000004CD204 "l"
 *   insn=0x00000000004CD208 string=0x00000000004CD20C "ft"
 *   insn=0x00000000004CD214 string=0x00000000004CD218 "*"
 *   insn=0x00000000004CD218 string=0x00000000004CD21C "\n"
 *   insn=0x00000000004CD228 string=0x00000000004CD22C "^t"
 *   insn=0x00000000004CD234 string=0x00000000004CD238 "*"
 *   insn=0x00000000004CD238 string=0x00000000004CD23C "\n"
 *   insn=0x00000000004CD248 string=0x00000000004CD24C "Vt"
 *   insn=0x00000000004CD24C string=0x00000000004CD250 "e"
 *   insn=0x00000000004CD254 string=0x00000000004CD258 "*"
 *   insn=0x00000000004CD258 string=0x00000000004CD25C "\n"
 *   insn=0x00000000004CD268 string=0x00000000004CD26C "Nt"
 *   insn=0x00000000004CD26C string=0x00000000004CD270 "a"
 *   insn=0x00000000004CD274 string=0x00000000004CD278 "*"
 *   insn=0x00000000004CD278 string=0x00000000004CD27C "\n"
 *   insn=0x00000000004CD288 string=0x00000000004CD28C "Ft"
 *   insn=0x00000000004CD28C string=0x00000000004CD290 "]"
 *   insn=0x00000000004CD29C string=0x00000000004CD2A0 "(a"
 *   insn=0x00000000004CD2AC string=0x00000000004CD2B0 "J=G"
 *   insn=0x00000000004CD2B0 string=0x00000000004CD2B4 ")!"
 *   insn=0x00000000004CD2B8 string=0x00000000004CD2BC "*"
 *   insn=0x00000000004CD2B8 string=0x00000000004CD2D0 "*"
 *   insn=0x00000000004CD2BC string=0x00000000004CD2C0 "K"
 *   insn=0x00000000004CD2C0 string=0x00000000004CD2C4 "+"
 *   insn=0x00000000004CD2CC string=0x00000000004CD2DC "_"
 *   insn=0x00000000004CD2D0 string=0x00000000004CD2D4 "K"
 *   insn=0x00000000004CD2D4 string=0x00000000004CD2D8 "+"
 *   insn=0x00000000004CD2E8 string=0x00000000004CD2EC ".t"
 *   insn=0x00000000004CD300 string=0x00000000004CD304 "`"
 *   insn=0x00000000004CD308 string=0x00000000004CD30C ")=G"
 *   insn=0x00000000004CD30C string=0x00000000004CD310 "!"
 *   insn=0x00000000004CD314 string=0x00000000004CD318 "\t"
 *   insn=0x00000000004CD314 string=0x00000000004CD32C "\t"
 *   insn=0x00000000004CD318 string=0x00000000004CD31C "*"
 *   insn=0x00000000004CD31C string=0x00000000004CD320 "\n"
 *   insn=0x00000000004CD328 string=0x00000000004CD338 "?"
 *   insn=0x00000000004CD32C string=0x00000000004CD330 "*"
 *   insn=0x00000000004CD330 string=0x00000000004CD334 "\n"
 *   insn=0x00000000004CD360 string=0x00000000004CD364 ")=G"
 *   insn=0x00000000004CD364 string=0x00000000004CD368 "!"
 *   insn=0x00000000004CD36C string=0x00000000004CD370 "\t"
 *   insn=0x00000000004CD36C string=0x00000000004CD47C "\t"
 *   insn=0x00000000004CD370 string=0x00000000004CD374 "*"
 *   insn=0x00000000004CD374 string=0x00000000004CD378 "\n"
 *   insn=0x00000000004CD37C string=0x00000000004CD380 "B"
 *   insn=0x00000000004CD380 string=0x00000000004CD488 "?"
 *   insn=0x00000000004CD388 string=0x00000000004CD38C "(a"
 *   insn=0x00000000004CD390 string=0x00000000004CD394 "@\t"
 *   insn=0x00000000004CD398 string=0x00000000004CD39C "J=G"
 *   insn=0x00000000004CD39C string=0x00000000004CD3A0 ")!"
 *   insn=0x00000000004CD3A4 string=0x00000000004CD3A8 "*"
 *   insn=0x00000000004CD3A4 string=0x00000000004CD3BC "*"
 *   insn=0x00000000004CD3A8 string=0x00000000004CD3AC "K"
 *   insn=0x00000000004CD3AC string=0x00000000004CD3B0 "+"
 *   insn=0x00000000004CD3B8 string=0x00000000004CD3C8 "_"
 *   insn=0x00000000004CD3BC string=0x00000000004CD3C0 "K"
 *   insn=0x00000000004CD3C0 string=0x00000000004CD3C4 "+"
 *   insn=0x00000000004CD3D8 string=0x00000000004CD3DC "8"
 *   insn=0x00000000004CD3EC string=0x00000000004CD3F0 "(a"
 *   insn=0x00000000004CD3FC string=0x00000000004CD400 "J=G"
 *   insn=0x00000000004CD400 string=0x00000000004CD404 ")!"
 *   insn=0x00000000004CD408 string=0x00000000004CD40C "*"
 *   insn=0x00000000004CD408 string=0x00000000004CD420 "*"
 *   insn=0x00000000004CD40C string=0x00000000004CD410 "K"
 *   insn=0x00000000004CD410 string=0x00000000004CD414 "+"
 *   insn=0x00000000004CD41C string=0x00000000004CD42C "_"
 *   insn=0x00000000004CD420 string=0x00000000004CD424 "K"
 *   insn=0x00000000004CD424 string=0x00000000004CD428 "+"
 *   insn=0x00000000004CD450 string=0x00000000004CD454 "@"
 *   insn=0x00000000004CD458 string=0x00000000004CD45C ")=G"
 *   insn=0x00000000004CD45C string=0x00000000004CD460 "!"
 *   insn=0x00000000004CD464 string=0x00000000004CD468 "\t"
 *   insn=0x00000000004CD468 string=0x00000000004CD46C "*"
 *   insn=0x00000000004CD46C string=0x00000000004CD470 "\n"
 *   insn=0x00000000004CD47C string=0x00000000004CD480 "*"
 *   insn=0x00000000004CD480 string=0x00000000004CD484 "\n"
 *   insn=0x00000000004CD494 string=0x00000000004CD498 "\t"
 *   insn=0x00000000004CD4A4 string=0x00000000004CD4A8 "r"
 *   insn=0x00000000004CD4CC string=0x00000000004CD4D0 ")=G"
 *   insn=0x00000000004CD4D0 string=0x00000000004CD4D4 "!"
 *   insn=0x00000000004CD4D4 string=0x00000000004CD4D8 "i"
 *   insn=0x00000000004CD4D8 string=0x00000000004CD4DC "\t"
 *   insn=0x00000000004CD4D8 string=0x00000000004CD504 "\t"
 *   insn=0x00000000004CD4DC string=0x00000000004CD4E0 "*"
 *   insn=0x00000000004CD4E0 string=0x00000000004CD4E4 "\n"
 *   insn=0x00000000004CD4E8 string=0x00000000004CD4EC "?"
 *   insn=0x00000000004CD4EC string=0x00000000004CD4F0 "l"
 *   insn=0x00000000004CD504 string=0x00000000004CD508 "*"
 *   insn=0x00000000004CD508 string=0x00000000004CD50C "\n"
 *   insn=0x00000000004CD50C string=0x00000000004CD510 "?"
 *   insn=0x00000000004CD510 string=0x00000000004CD514 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TextureLibrary::SetTextureForName(Caver::TextureLibrary *a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // x0
  __int64 v6; // x23
  int v7; // w8
  _DWORD **v8; // x0
  __int64 v9; // x9
  _QWORD *v10; // x8
  _DWORD *v11; // x0
  int v12; // w8
  __int64 v13; // x8
  int v14; // w9

  v5 = std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::find();
  if ( (Caver::TextureLibrary *)((char *)a1 + 16) == (Caver::TextureLibrary *)v5 )
    goto LABEL_7;
  v6 = *(_QWORD *)(v5 + 40);
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  if ( !*(_QWORD *)(v6 + 112) )
    *((_DWORD *)a1 + 15) -= *(_DWORD *)(v6 + 72);
  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_erase_aux();
  v7 = *(_DWORD *)(v6 + 8) - 1;
  *(_DWORD *)(v6 + 8) = v7;
  if ( v7 )
  {
LABEL_7:
    if ( !*a3 )
      return;
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    if ( !*a3 )
      return;
  }
  std::map<std::string,boost::intrusive_ptr<Caver::Texture>>::operator[]();
  v9 = *a3;
  v10 = v8;
  if ( *a3 )
    ++*(_DWORD *)(v9 + 8);
  v11 = *v8;
  *v10 = v9;
  if ( v11 )
  {
    v12 = v11[2] - 1;
    v11[2] = v12;
    if ( !v12 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  v13 = *a3;
  v14 = *(_DWORD *)(*a3 + 56);
  *(_QWORD *)(*a3 + 24) = a1;
  if ( v14 )
  {
    if ( !*(_QWORD *)(v13 + 112) )
    {
      *((_DWORD *)a1 + 15) += *(_DWORD *)(v13 + 72);
      Caver::TextureLibrary::PurgeTexturesIfNecessary(a1);
    }
  }
}


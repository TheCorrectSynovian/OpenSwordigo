/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A5CFC
 * Mangled: _ZN5Caver24ParticleEmitterComponentC2Ev
 * Demangled: Caver::ParticleEmitterComponent::ParticleEmitterComponent(void)
 *
 * Callers: 2
 *   0x00000000001F6430  Caver::ParticleEmitterComponent::ParticleEmitterComponent(void)
 *   0x00000000001FBEC0  Caver::ParticleEmitterComponent::ParticleEmitterComponent(void)
 *
 * Callees: 18
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x00000000001F7070  boost::detail::shared_count::shared_count<Caver::ParticleSystem>(Caver::ParticleSystem *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FDA20  Caver::ParticleEmitterComponent::~ParticleEmitterComponent()
 *   0x0000000000200390  Caver::ParticleSystem::ParticleSystem(void)
 *   0x0000000000200F70  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x00000000002A69FC  Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *   0x0000000000566BB8  sub_566BB8
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 392
 *   insn=0x00000000002A5D1C string=0x00000000002A5D20 "\t""
 *   insn=0x00000000002A5D20 string=0x00000000002A5D24 "["
 *   insn=0x00000000002A5D28 string=0x00000000002A5D2C ")"
 *   insn=0x00000000002A5D30 string=0x00000000002A5D34 """
 *   insn=0x00000000002A5D3C string=0x00000000002A5D40 "k"
 *   insn=0x00000000002A5D40 string=0x00000000002A5D44 "*"
 *   insn=0x00000000002A5D44 string=0x00000000002A5D48 "A"
 *   insn=0x00000000002A5D48 string=0x00000000002A5D4C "*"
 *   insn=0x00000000002A5D50 string=0x00000000002A5D54 "A"
 *   insn=0x00000000002A5D64 string=0x00000000002A5D68 "j"
 *   insn=0x00000000002A5D70 string=0x00000000002A5D74 "a"
 *   insn=0x00000000002A5D7C string=0x00000000002A5D80 "A"
 *   insn=0x00000000002A5D80 string=0x00000000002A5D84 "\n""
 *   insn=0x00000000002A5D84 string=0x00000000002A5D88 "Ji@"
 *   insn=0x00000000002A5D88 string=0x00000000002A5D8C ")A"
 *   insn=0x00000000002A5D8C string=0x00000000002A5D90 "i"
 *   insn=0x00000000002A5D94 string=0x00000000002A5D98 "i>"
 *   insn=0x00000000002A5DAC string=0x00000000002A5DB0 "i"
 *   insn=0x00000000002A5DB0 string=0x00000000002A5DB4 "IA"
 *   insn=0x00000000002A5DBC string=0x00000000002A5DC0 "iF"
 *   insn=0x00000000002A5DC0 string=0x00000000002A5DC4 "i""
 *   insn=0x00000000002A5DC4 string=0x00000000002A5DC8 "h"
 *   insn=0x00000000002A5DC8 string=0x00000000002A5DCC "hb"
 *   insn=0x00000000002A5DFC string=0x00000000002A5E00 "`N"
 *   insn=0x00000000002A5E00 string=0x00000000002A5E04 " "
 *   insn=0x00000000002A5E04 string=0x00000000002A5E08 ")"
 *   insn=0x00000000002A5E0C string=0x00000000002A5E10 " "
 *   insn=0x00000000002A5E14 string=0x00000000002A5E18 "t"
 *   insn=0x00000000002A5E18 string=0x00000000002A5E1C "i"
 *   insn=0x00000000002A5E1C string=0x00000000002A5E20 "h"
 *   insn=0x00000000002A5E20 string=0x00000000002A5E24 "h"
 *   insn=0x00000000002A5E28 string=0x00000000002A5E2C "!"
 *   insn=0x00000000002A5E3C string=0x00000000002A5E40 "!"
 *   insn=0x00000000002A5E40 string=0x0000000000589770 "parentEmitter"
 *   insn=0x00000000002A5E50 string=0x00000000002A5E54 "Y"
 *   insn=0x00000000002A5E54 string=0x00000000002A5E58 "c""
 *   insn=0x00000000002A5E6C string=0x00000000001F6CE0 "0'"
 *   insn=0x00000000002A5E78 string=0x00000000002A5E7C "a"
 *   insn=0x00000000002A5E7C string=0x00000000002A5E80 "!"
 *   insn=0x00000000002A5E80 string=0x000000000058977E "modelBinding"
 *   insn=0x00000000002A5E8C string=0x00000000002A5E90 "J"
 *   insn=0x00000000002A5EBC string=0x00000000002A5EC0 "9?G"
 *   insn=0x00000000002A5EC4 string=0x00000000002A5EC8 "5"
 *   insn=0x00000000002A5EC8 string=0x000000000058978B "particleType"
 *   insn=0x00000000002A5EE8 string=0x00000000002A5EEC "\t"
 *   insn=0x00000000002A5EE8 string=0x00000000002A5F1C "\t"
 *   insn=0x00000000002A5EEC string=0x00000000002A5EF0 "*"
 *   insn=0x00000000002A5EF0 string=0x00000000002A5EF4 "\n"
 *   insn=0x00000000002A5EF8 string=0x00000000002A5EFC ""
 *   insn=0x00000000002A5EFC string=0x00000000002A5F28 "?"
 *   insn=0x00000000002A5F04 string=0x00000000002A5F08 "\t"
 *   insn=0x00000000002A5F04 string=0x00000000002A5F3C "\t"
 *   insn=0x00000000002A5F08 string=0x00000000002A5F0C "*"
 *   insn=0x00000000002A5F0C string=0x00000000002A5F10 "\n"
 *   insn=0x00000000002A5F18 string=0x00000000002A5F48 "?"
 *   insn=0x00000000002A5F1C string=0x00000000002A5F20 "*"
 *   insn=0x00000000002A5F20 string=0x00000000002A5F24 "\n"
 *   insn=0x00000000002A5F34 string=0x00000000002A5F38 "$"
 *   insn=0x00000000002A5F3C string=0x00000000002A5F40 "*"
 *   insn=0x00000000002A5F40 string=0x00000000002A5F44 "\n"
 *   insn=0x00000000002A5F48 string=0x00000000002A5F4C "l"
 *   insn=0x00000000002A5F54 string=0x00000000002A5F58 " "
 *   insn=0x00000000002A5F94 string=0x00000000002A5F98 "&"
 *   insn=0x00000000002A5FB0 string=0x00000000002A5FB4 "KC"
 *   insn=0x00000000002A5FC4 string=0x00000000002A5EE4 "!"
 *   insn=0x00000000002A5FD0 string=0x00000000002A5FD4 "a"
 *   insn=0x00000000002A5FD4 string=0x00000000002A5F00 "!"
 *   insn=0x00000000002A5FE4 string=0x00000000002A5FE8 "~="
 *   insn=0x00000000002A5FE8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002A6008 string=0x00000000001F7070 "0'"
 *   insn=0x00000000002A6014 string=0x00000000002A6018 "Nr"
 *   insn=0x00000000002A6018 string=0x00000000002A601C "h"
 *   insn=0x00000000002A6028 string=0x00000000002A602C "i"
 *   insn=0x00000000002A6030 string=0x00000000002A6034 "5"
 *   insn=0x00000000002A6034 string=0x00000000002A6078 "h"
 *   insn=0x00000000002A6038 string=0x00000000002A603C ""
 *   insn=0x00000000002A6048 string=0x00000000002A604C "\t@"
 *   insn=0x00000000002A6058 string=0x00000000002A605C ""
 *   insn=0x00000000002A6068 string=0x00000000002A606C "@"
 *   insn=0x00000000002A6080 string=0x00000000002A6084 "a"
 *   insn=0x00000000002A6084 string=0x00000000002A6130 "h@"
 *   insn=0x00000000002A60A8 string=0x00000000002A60AC "J=G"
 *   insn=0x00000000002A60AC string=0x00000000002A60B0 "\t!"
 *   insn=0x00000000002A60B4 string=0x00000000002A60B8 "("
 *   insn=0x00000000002A60B4 string=0x00000000002A60F0 "("
 *   insn=0x00000000002A60B8 string=0x00000000002A60BC "\n"
 *   insn=0x00000000002A60BC string=0x00000000002A60C0 "*"
 *   insn=0x00000000002A60C4 string=0x00000000002A60C8 ""
 *   insn=0x00000000002A60CC string=0x00000000002A60D0 ")=G"
 *   insn=0x00000000002A60D0 string=0x00000000002A60D4 "!"
 *   insn=0x00000000002A60D8 string=0x00000000002A60DC "\t"
 *   insn=0x00000000002A60D8 string=0x00000000002A6110 "\t"
 *   insn=0x00000000002A60DC string=0x00000000002A60E0 "*"
 *   insn=0x00000000002A60E0 string=0x00000000002A60E4 "\n"
 *   insn=0x00000000002A60EC string=0x00000000002A611C "?"
 *   insn=0x00000000002A60F0 string=0x00000000002A60F4 "\n"
 *   insn=0x00000000002A60F4 string=0x00000000002A60F8 "*"
 *   insn=0x00000000002A6108 string=0x00000000002A610C "]"
 *   insn=0x00000000002A6110 string=0x00000000002A6114 "*"
 *   insn=0x00000000002A6114 string=0x00000000002A6118 "\n"
 *   insn=0x00000000002A6128 string=0x00000000002A612C "d"
 *   insn=0x00000000002A6130 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002A6138 string=0x00000000002A613C "]D"
 *   insn=0x00000000002A613C string=0x00000000002A6140 "v"
 *   insn=0x00000000002A613C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002A6144 string=0x00000000002A6148 "{"
 *   insn=0x00000000002A6148 string=0x00000000002A6334 "v"
 *   insn=0x00000000002A6154 string=0x00000000002A6158 "(a"
 *   insn=0x00000000002A615C string=0x00000000002A6160 "`"
 *   insn=0x00000000002A6160 string=0x00000000002A62EC "v"
 *   insn=0x00000000002A6164 string=0x00000000002A6168 "J=G"
 *   insn=0x00000000002A6168 string=0x00000000002A616C ")!"
 *   insn=0x00000000002A616C string=0x00000000002A6170 "\n"
 *   insn=0x00000000002A6170 string=0x00000000002A6174 "*"
 *   insn=0x00000000002A6170 string=0x00000000002A61D0 "*"
 *   insn=0x00000000002A6174 string=0x00000000002A6178 "K"
 *   insn=0x00000000002A6178 string=0x00000000002A617C "+"
 *   insn=0x00000000002A6184 string=0x00000000002A61C0 "_"
 *   insn=0x00000000002A6190 string=0x00000000002A6194 "(a"
 *   insn=0x00000000002A61A0 string=0x00000000002A61A4 "J=G"
 *   insn=0x00000000002A61A4 string=0x00000000002A61A8 ")!"
 *   insn=0x00000000002A61A8 string=0x00000000002A61AC "*"
 *   insn=0x00000000002A61AC string=0x00000000002A61B0 "*"
 *   insn=0x00000000002A61B0 string=0x00000000002A61B4 "K"
 *   insn=0x00000000002A61B4 string=0x00000000002A61B8 "+"
 *   insn=0x00000000002A61C0 string=0x00000000002A61C4 "L\t"
 *   insn=0x00000000002A61C8 string=0x00000000002A61CC "F"
 *   insn=0x00000000002A61D0 string=0x00000000002A61D4 "K"
 *   insn=0x00000000002A61D4 string=0x00000000002A61D8 "+"
 *   insn=0x00000000002A61D8 string=0x00000000002A61DC "_"
 *   insn=0x00000000002A61DC string=0x00000000002A61E0 "M"
 *   insn=0x00000000002A61E0 string=0x00000000002A61E4 "B"
 *   insn=0x00000000002A61E8 string=0x00000000002A61EC "v"
 *   insn=0x00000000002A61EC string=0x00000000002A61F0 "6"
 *   insn=0x00000000002A61F0 string=0x00000000002A61F4 "P"
 *   insn=0x00000000002A61FC string=0x00000000002A6200 "(a"
 *   insn=0x00000000002A6204 string=0x00000000002A6208 "@"
 *   insn=0x00000000002A6208 string=0x00000000002A620C ")!"
 *   insn=0x00000000002A6210 string=0x00000000002A6214 "*"
 *   insn=0x00000000002A6210 string=0x00000000002A6228 "*"
 *   insn=0x00000000002A6214 string=0x00000000002A6218 "K"
 *   insn=0x00000000002A6218 string=0x00000000002A621C "+"
 *   insn=0x00000000002A6224 string=0x00000000002A6234 "_"
 *   insn=0x00000000002A6228 string=0x00000000002A622C "K"
 *   insn=0x00000000002A622C string=0x00000000002A6230 "+"
 *   insn=0x00000000002A6240 string=0x00000000002A6244 "X"
 *   insn=0x00000000002A625C string=0x00000000002A6260 "!"
 *   insn=0x00000000002A6264 string=0x00000000002A6268 "\t"
 *   insn=0x00000000002A6264 string=0x00000000002A6294 "\t"
 *   insn=0x00000000002A6268 string=0x00000000002A626C "*"
 *   insn=0x00000000002A626C string=0x00000000002A6270 "\n"
 *   insn=0x00000000002A6274 string=0x00000000002A6278 "?"
 *   insn=0x00000000002A6280 string=0x00000000002A6284 "H"
 *   insn=0x00000000002A6284 string=0x00000000002A6288 "v"
 *   insn=0x00000000002A6288 string=0x00000000002A628C "V"
 *   insn=0x00000000002A628C string=0x00000000002A6290 ")"
 *   insn=0x00000000002A6294 string=0x00000000002A6298 "*"
 *   insn=0x00000000002A6298 string=0x00000000002A629C "\n"
 *   insn=0x00000000002A629C string=0x00000000002A62A0 "?"
 *   insn=0x00000000002A62B0 string=0x00000000002A62B4 "(a"
 *   insn=0x00000000002A62BC string=0x00000000002A62C0 ")!"
 *   insn=0x00000000002A62C4 string=0x00000000002A62C8 "*"
 *   insn=0x00000000002A62C4 string=0x00000000002A64FC "*"
 *   insn=0x00000000002A62C8 string=0x00000000002A62CC "K"
 *   insn=0x00000000002A62CC string=0x00000000002A62D0 "+"
 *   insn=0x00000000002A62D4 string=0x00000000002A62D8 "_"
 *   insn=0x00000000002A62E4 string=0x00000000002A62E8 "/"
 *   insn=0x00000000002A62EC string=0x00000000002A62F0 "6"
 *   insn=0x00000000002A62F4 string=0x00000000002A62F8 ""
 *   insn=0x00000000002A6304 string=0x00000000002A6308 "\t@"
 *   insn=0x00000000002A6314 string=0x00000000002A6318 ""
 *   insn=0x00000000002A6324 string=0x00000000002A6328 "@"
 *   insn=0x00000000002A6334 string=0x00000000002A6338 "6"
 *   insn=0x00000000002A6338 string=0x00000000002A637C "`"
 *   insn=0x00000000002A633C string=0x00000000002A6340 ""
 *   insn=0x00000000002A634C string=0x00000000002A6350 "\t@"
 *   insn=0x00000000002A635C string=0x00000000002A6360 ""
 *   insn=0x00000000002A636C string=0x00000000002A6370 "@"
 *   insn=0x00000000002A6380 string=0x00000000002A6384 "@"
 *   insn=0x00000000002A6384 string=0x00000000002A6388 ""
 *   insn=0x00000000002A6388 string=0x00000000002A638C ""
 *   insn=0x00000000002A6390 string=0x00000000002A6394 ""
 *   insn=0x00000000002A6394 string=0x00000000002A6398 ""
 *   insn=0x00000000002A63A0 string=0x00000000002A63A4 ")i@"
 *   insn=0x00000000002A63A8 string=0x00000000002A63AC "h"
 *   insn=0x00000000002A63AC string=0x00000000002A63B0 ")A"
 *   insn=0x00000000002A63B0 string=0x00000000002A63B4 "I"
 *   insn=0x00000000002A63BC string=0x00000000002A63C0 "@"
 *   insn=0x00000000002A63BC string=0x00000000002A63DC """
 *   insn=0x00000000002A63C0 string=0x00000000002A63C4 ""
 *   insn=0x00000000002A63C4 string=0x00000000002A63C8 ""
 *   insn=0x00000000002A63CC string=0x00000000002A63D0 ""
 *   insn=0x00000000002A63D0 string=0x00000000002A63D4 ""
 *   insn=0x00000000002A63DC string=0x00000000002A63E0 "`"
 *   insn=0x00000000002A63E0 string=0x00000000002A63E4 "mB"
 *   insn=0x00000000002A63E4 string=0x00000000002A63E8 "A"
 *   insn=0x00000000002A63E8 string=0x00000000002A63EC "h"
 *   insn=0x00000000002A63F0 string=0x00000000002A63F4 "@"
 *   insn=0x00000000002A63F4 string=0x00000000002A63F8 ""
 *   insn=0x00000000002A63F8 string=0x00000000002A63FC ""
 *   insn=0x00000000002A6400 string=0x00000000002A6404 ""
 *   insn=0x00000000002A6404 string=0x00000000002A6408 ""
 *   insn=0x00000000002A6410 string=0x00000000002A6414 "`v@"
 *   insn=0x00000000002A641C string=0x00000000002A6420 "tn"
 *   insn=0x00000000002A6424 string=0x00000000002A6428 "@"
 *   insn=0x00000000002A6424 string=0x00000000002A6444 "`j@"
 *   insn=0x00000000002A6428 string=0x00000000002A642C ""
 *   insn=0x00000000002A642C string=0x00000000002A6430 ""
 *   insn=0x00000000002A6434 string=0x00000000002A6438 ""
 *   insn=0x00000000002A6438 string=0x00000000002A643C ""
 *   insn=0x00000000002A6444 string=0x00000000002A6448 "tb"
 *   insn=0x00000000002A644C string=0x00000000002A6450 "@"
 *   insn=0x00000000002A644C string=0x00000000002A646C "`^@"
 *   insn=0x00000000002A6450 string=0x00000000002A6454 ""
 *   insn=0x00000000002A6454 string=0x00000000002A6458 ""
 *   insn=0x00000000002A645C string=0x00000000002A6460 ""
 *   insn=0x00000000002A6460 string=0x00000000002A6464 ""
 *   insn=0x00000000002A6470 string=0x00000000002A6474 "tV"
 *   insn=0x00000000002A6478 string=0x00000000002A647C "@"
 *   insn=0x00000000002A6478 string=0x00000000002A6498 "`R@"
 *   insn=0x00000000002A647C string=0x00000000002A6480 ""
 *   insn=0x00000000002A6480 string=0x00000000002A6484 ""
 *   insn=0x00000000002A6488 string=0x00000000002A648C ""
 *   insn=0x00000000002A648C string=0x00000000002A6490 ""
 *   insn=0x00000000002A6498 string=0x00000000002A649C "tJ"
 *   insn=0x00000000002A64A0 string=0x00000000002A64A4 "@"
 *   insn=0x00000000002A64A0 string=0x00000000002A64C0 "`F@"
 *   insn=0x00000000002A64A4 string=0x00000000002A64A8 ""
 *   insn=0x00000000002A64A8 string=0x00000000002A64AC ""
 *   insn=0x00000000002A64B0 string=0x00000000002A64B4 ""
 *   insn=0x00000000002A64B4 string=0x00000000002A64B8 ""
 *   insn=0x00000000002A64C4 string=0x00000000002A64C8 "h>"
 *   insn=0x00000000002A64CC string=0x00000000002A64D0 "@"
 *   insn=0x00000000002A64D0 string=0x00000000002A64D4 ""
 *   insn=0x00000000002A64D4 string=0x00000000002A64D8 ""
 *   insn=0x00000000002A64DC string=0x00000000002A64E0 ""
 *   insn=0x00000000002A64E0 string=0x00000000002A64E4 ""
 *   insn=0x00000000002A64F0 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002A64FC string=0x00000000002A6500 "K"
 *   insn=0x00000000002A6500 string=0x00000000002A6504 "+"
 *   insn=0x00000000002A6504 string=0x00000000002A6508 "_"
 *   insn=0x00000000002A650C string=0x00000000002A6510 "w"
 *   insn=0x00000000002A652C string=0x00000000002A6530 """
 *   insn=0x00000000002A6530 string=0x00000000002A6534 ""
 *   insn=0x00000000002A6538 string=0x00000000002A653C "t"
 *   insn=0x00000000002A653C string=0x00000000002A6540 "\n"
 *   insn=0x00000000002A6540 string=0x00000000002A6544 "\tA"
 *   insn=0x00000000002A6544 string=0x00000000002A6548 "@"
 *   insn=0x00000000002A6548 string=0x00000000002A654C ""
 *   insn=0x00000000002A6550 string=0x00000000002A6554 "i"
 *   insn=0x00000000002A6554 string=0x00000000002A6558 "`"
 *   insn=0x00000000002A6558 string=0x00000000002A655C "4"
 *   insn=0x00000000002A655C string=0x00000000002A65A0 "t"
 *   insn=0x00000000002A6560 string=0x00000000002A6564 ""
 *   insn=0x00000000002A6570 string=0x00000000002A6574 "\t@"
 *   insn=0x00000000002A6580 string=0x00000000002A6584 ""
 *   insn=0x00000000002A6590 string=0x00000000002A6594 "@"
 *   insn=0x00000000002A65A0 string=0x00000000002A65A4 "4"
 *   insn=0x00000000002A65A4 string=0x00000000002A65E8 "`"
 *   insn=0x00000000002A65A8 string=0x00000000002A65AC ""
 *   insn=0x00000000002A65B8 string=0x00000000002A65BC "\t@"
 *   insn=0x00000000002A65C8 string=0x00000000002A65CC ""
 *   insn=0x00000000002A65D8 string=0x00000000002A65DC "@"
 *   insn=0x00000000002A65EC string=0x00000000002A65F0 "@"
 *   insn=0x00000000002A65F0 string=0x00000000002A65F4 ""
 *   insn=0x00000000002A65F4 string=0x00000000002A65F8 ""
 *   insn=0x00000000002A65FC string=0x00000000002A6600 ""
 *   insn=0x00000000002A6600 string=0x00000000002A6604 ""
 *   insn=0x00000000002A660C string=0x00000000002A6610 "`"
 *   insn=0x00000000002A6610 string=0x00000000002A6614 "i@"
 *   insn=0x00000000002A6614 string=0x00000000002A6618 "A"
 *   insn=0x00000000002A6618 string=0x00000000002A661C "h"
 *   insn=0x00000000002A6620 string=0x00000000002A6624 "@"
 *   insn=0x00000000002A6620 string=0x00000000002A6640 """
 *   insn=0x00000000002A6624 string=0x00000000002A6628 ""
 *   insn=0x00000000002A6628 string=0x00000000002A662C ""
 *   insn=0x00000000002A6630 string=0x00000000002A6634 ""
 *   insn=0x00000000002A6634 string=0x00000000002A6638 ""
 *   insn=0x00000000002A6640 string=0x00000000002A6644 "`"
 *   insn=0x00000000002A6644 string=0x00000000002A6648 "mB"
 *   insn=0x00000000002A6648 string=0x00000000002A664C "A"
 *   insn=0x00000000002A664C string=0x00000000002A6650 "h"
 *   insn=0x00000000002A6654 string=0x00000000002A6658 "@"
 *   insn=0x00000000002A6658 string=0x00000000002A665C ""
 *   insn=0x00000000002A665C string=0x00000000002A6660 ""
 *   insn=0x00000000002A6664 string=0x00000000002A6668 ""
 *   insn=0x00000000002A6668 string=0x00000000002A666C ""
 *   insn=0x00000000002A6690 string=0x00000000002A6694 "@"
 *   insn=0x00000000002A6694 string=0x00000000002A6698 ""
 *   insn=0x00000000002A6698 string=0x00000000002A669C ""
 *   insn=0x00000000002A66A0 string=0x00000000002A66A4 ""
 *   insn=0x00000000002A66A4 string=0x00000000002A66A8 ""
 *   insn=0x00000000002A66BC string=0x00000000002A66C0 "@"
 *   insn=0x00000000002A66C0 string=0x00000000002A66C4 ""
 *   insn=0x00000000002A66C4 string=0x00000000002A66C8 ""
 *   insn=0x00000000002A66CC string=0x00000000002A66D0 ""
 *   insn=0x00000000002A66D0 string=0x00000000002A66D4 ""
 *   insn=0x00000000002A66EC string=0x00000000002A66F0 "@"
 *   insn=0x00000000002A66F0 string=0x00000000002A66F4 ""
 *   insn=0x00000000002A66F4 string=0x00000000002A66F8 ""
 *   insn=0x00000000002A66FC string=0x00000000002A6700 ""
 *   insn=0x00000000002A6700 string=0x00000000002A6704 ""
 *   insn=0x00000000002A6718 string=0x00000000002A671C "@"
 *   insn=0x00000000002A671C string=0x00000000002A6720 ""
 *   insn=0x00000000002A6720 string=0x00000000002A6724 ""
 *   insn=0x00000000002A6728 string=0x00000000002A672C ""
 *   insn=0x00000000002A672C string=0x00000000002A6730 ""
 *   insn=0x00000000002A6748 string=0x00000000002A674C "@"
 *   insn=0x00000000002A674C string=0x00000000002A6750 ""
 *   insn=0x00000000002A6750 string=0x00000000002A6754 ""
 *   insn=0x00000000002A6758 string=0x00000000002A675C ""
 *   insn=0x00000000002A675C string=0x00000000002A6760 ""
 *   insn=0x00000000002A6778 string=0x00000000002A677C "UO"
 *   insn=0x00000000002A6780 string=0x00000000002A6784 "?"
 *   insn=0x00000000002A6788 string=0x00000000002A678C "0"
 *   insn=0x00000000002A678C string=0x00000000002A684C """
 *   insn=0x00000000002A6790 string=0x00000000002A6794 "!"
 *   insn=0x00000000002A6798 string=0x00000000002A679C "`"
 *   insn=0x00000000002A67A0 string=0x00000000002A67FC "@"
 *   insn=0x00000000002A67AC string=0x00000000002A67B0 "5"
 *   insn=0x00000000002A67B0 string=0x00000000002A67F4 "`"
 *   insn=0x00000000002A67B4 string=0x00000000002A67B8 ""
 *   insn=0x00000000002A67C4 string=0x00000000002A67C8 "\t@"
 *   insn=0x00000000002A67D4 string=0x00000000002A67D8 ""
 *   insn=0x00000000002A67E4 string=0x00000000002A67E8 "@"
 *   insn=0x00000000002A67FC string=0x00000000002A6800 ""
 *   insn=0x00000000002A6800 string=0x00000000002A6804 ""
 *   insn=0x00000000002A6808 string=0x00000000002A680C ""
 *   insn=0x00000000002A680C string=0x00000000002A6810 ""
 *   insn=0x00000000002A6818 string=0x00000000002A681C "`"
 *   insn=0x00000000002A681C string=0x00000000002A6820 "i@"
 *   insn=0x00000000002A6820 string=0x00000000002A6824 "A"
 *   insn=0x00000000002A6824 string=0x00000000002A6828 "h"
 *   insn=0x00000000002A682C string=0x00000000002A6830 "@"
 *   insn=0x00000000002A6830 string=0x00000000002A6834 ""
 *   insn=0x00000000002A6834 string=0x00000000002A6838 ""
 *   insn=0x00000000002A683C string=0x00000000002A6840 ""
 *   insn=0x00000000002A6840 string=0x00000000002A6844 ""
 *   insn=0x00000000002A684C string=0x00000000002A6850 "`"
 *   insn=0x00000000002A6850 string=0x00000000002A6854 "mB"
 *   insn=0x00000000002A6854 string=0x00000000002A6858 "A"
 *   insn=0x00000000002A6858 string=0x00000000002A685C "h"
 *   insn=0x00000000002A6860 string=0x00000000002A6864 "@"
 *   insn=0x00000000002A6864 string=0x00000000002A6868 ""
 *   insn=0x00000000002A6868 string=0x00000000002A686C ""
 *   insn=0x00000000002A6870 string=0x00000000002A6874 ""
 *   insn=0x00000000002A6874 string=0x00000000002A6878 ""
 *   insn=0x00000000002A6880 string=0x00000000002A6884 "`v@"
 *   insn=0x00000000002A688C string=0x00000000002A6890 "vn"
 *   insn=0x00000000002A6894 string=0x00000000002A6898 "@"
 *   insn=0x00000000002A6894 string=0x00000000002A68B4 "`j@"
 *   insn=0x00000000002A6898 string=0x00000000002A689C ""
 *   insn=0x00000000002A689C string=0x00000000002A68A0 ""
 *   insn=0x00000000002A68A4 string=0x00000000002A68A8 ""
 *   insn=0x00000000002A68A8 string=0x00000000002A68AC ""
 *   insn=0x00000000002A68B4 string=0x00000000002A68B8 "vb"
 *   insn=0x00000000002A68BC string=0x00000000002A68C0 "@"
 *   insn=0x00000000002A68BC string=0x00000000002A68DC "`^@"
 *   insn=0x00000000002A68C0 string=0x00000000002A68C4 ""
 *   insn=0x00000000002A68C4 string=0x00000000002A68C8 ""
 *   insn=0x00000000002A68CC string=0x00000000002A68D0 ""
 *   insn=0x00000000002A68D0 string=0x00000000002A68D4 ""
 *   insn=0x00000000002A68E0 string=0x00000000002A68E4 "vV"
 *   insn=0x00000000002A68E8 string=0x00000000002A68EC "@"
 *   insn=0x00000000002A68E8 string=0x00000000002A6908 "`R@"
 *   insn=0x00000000002A68EC string=0x00000000002A68F0 ""
 *   insn=0x00000000002A68F0 string=0x00000000002A68F4 ""
 *   insn=0x00000000002A68F8 string=0x00000000002A68FC ""
 *   insn=0x00000000002A68FC string=0x00000000002A6900 ""
 *   insn=0x00000000002A6908 string=0x00000000002A690C "vJ"
 *   insn=0x00000000002A6910 string=0x00000000002A6914 "@"
 *   insn=0x00000000002A6910 string=0x00000000002A6930 "`F@"
 *   insn=0x00000000002A6914 string=0x00000000002A6918 ""
 *   insn=0x00000000002A6918 string=0x00000000002A691C ""
 *   insn=0x00000000002A6920 string=0x00000000002A6924 ""
 *   insn=0x00000000002A6924 string=0x00000000002A6928 ""
 *   insn=0x00000000002A6934 string=0x00000000002A6938 "h>"
 *   insn=0x00000000002A693C string=0x00000000002A6940 "@"
 *   insn=0x00000000002A6940 string=0x00000000002A6944 ""
 *   insn=0x00000000002A6944 string=0x00000000002A6948 ""
 *   insn=0x00000000002A694C string=0x00000000002A6950 ""
 *   insn=0x00000000002A6950 string=0x00000000002A6954 ""
 *   insn=0x00000000002A6968 string=0x00000000002A696C "x"
 *   insn=0x00000000002A696C string=0x00000000002A6970 "w"
 *   insn=0x00000000002A6990 string=0x00000000002A6994 "@"
 *   insn=0x00000000002A6994 string=0x00000000002A6998 ""
 *   insn=0x00000000002A6998 string=0x00000000002A699C ""
 *   insn=0x00000000002A69A0 string=0x00000000002A69A4 ""
 *   insn=0x00000000002A69A4 string=0x00000000002A69A8 ""
 *   insn=0x00000000002A69D4 string=0x00000000001FDA20 "0'"
 *   insn=0x00000000002A69E0 string=0x00000000002A69E4 "3B"
 *   insn=0x00000000002A69EC string=0x00000000002A69F0 "0B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ParticleEmitterComponent::ParticleEmitterComponent(Caver::ParticleEmitterComponent *this)
{
  __int128 v1; // q1
  char *v3; // x0
  char *v4; // x0
  unsigned __int64 v5; // x23
  unsigned int *v6; // x8
  int v7; // w9
  unsigned int *v8; // x8
  int v9; // w9
  __int64 v10; // x0
  void *v11; // x0
  char *v12; // x0
  Caver::ParticleSystem *v14; // x22
  _QWORD *v15; // x21
  Caver::ParticleSystem *v16; // x9
  _QWORD *v17; // x8
  __int64 v18; // x8
  __int64 v19; // x8
  unsigned int *v20; // x9
  int v21; // w8
  unsigned int *v22; // x8
  int v23; // w9
  char *v24; // [xsp+48h] [xbp-88h] BYREF
  __int64 v25; // [xsp+50h] [xbp-80h] BYREF
  Caver::ParticleSystem *v26; // [xsp+60h] [xbp-70h] BYREF
  _QWORD *v27; // [xsp+68h] [xbp-68h]
  _BYTE v28[12]; // [xsp+74h] [xbp-5Ch] BYREF

  *(_QWORD *)&v1 = &off_6C3668;
  *((_QWORD *)&v1 + 1) = &off_6C36A8;
  *(_QWORD *)&v28[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *((_DWORD *)this + 2) = 0;
  *((_OWORD *)this + 1) = v1;
  *((_OWORD *)this + 2) = 0u;
  *((_BYTE *)this + 48) = 0;
  *(_OWORD *)((char *)this + 72) = 0u;
  *(_QWORD *)this = off_6C3550;
  *((_QWORD *)this + 15) = &off_6C3748;
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 18) = &off_6C3748;
  *((_QWORD *)this + 20) = 0;
  *((_QWORD *)this + 21) = &off_6C3748;
  *((_QWORD *)this + 23) = 0;
  *((_QWORD *)this + 24) = &off_6C3748;
  *((_QWORD *)this + 26) = 0;
  *((_QWORD *)this + 27) = &off_6C3748;
  *((_QWORD *)this + 33) = off_6C0268;
  *((_QWORD *)this + 35) = 0;
  *((_QWORD *)this + 36) = off_6B9438;
  *((_DWORD *)this + 81) = 30;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 56) = 0;
  *((_QWORD *)this + 29) = 0;
  *((_BYTE *)this + 260) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 74) = 0;
  *((_BYTE *)this + 320) = 0;
  *((_OWORD *)this + 19) = 0u;
  *(_OWORD *)((char *)this + 328) = 0u;
  *(_OWORD *)((char *)this + 344) = 0u;
  *((_BYTE *)this + 360) = 1;
  *((_BYTE *)this + 361) = 0;
  *(_OWORD *)((char *)this + 364) = xmmword_583800;
  *(_OWORD *)((char *)this + 380) = xmmword_589600;
  *((_DWORD *)this + 99) = 0;
  *((_DWORD *)this + 100) = 0;
  *((_BYTE *)this + 468) = 0;
  sub_566BB8((int)&v26, "parentEmitter");
  Caver::Component::BindOutlet();
  v3 = (char *)v26 - 24;
  if ( (__int64 *)((char *)v26 - 24) != &qword_6FD2E0 )
  {
    v20 = (unsigned int *)((char *)v26 - 8);
    if ( &pthread_create )
    {
      do
        v21 = __ldaxr(v20);
      while ( __stlxr(v21 - 1, v20) );
    }
    else
    {
      v21 = (*v20)--;
    }
    if ( v21 <= 0 )
      operator delete(v3);
  }
  sub_566BB8((int)&v26, "modelBinding");
  Caver::Component::BindOutlet();
  v4 = (char *)v26 - 24;
  if ( (__int64 *)((char *)v26 - 24) != &qword_6FD2E0 )
  {
    v22 = (unsigned int *)((char *)v26 - 8);
    if ( &pthread_create )
    {
      do
        v23 = __ldaxr(v22);
      while ( __stlxr(v23 - 1, v22) );
    }
    else
    {
      v23 = (*v22)--;
    }
    if ( v23 <= 0 )
      operator delete(v4);
  }
  v5 = 0;
  do
  {
    v24 = &byte_6FD2F8;
    v10 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
    sub_569E1C(&v24, 0, qword_6FD2E0, v10, &v28[-v10]);
    ((void (__fastcall *)(__int64 *__return_ptr, const char *, char **))loc_25A030)(&v25, "particleType", &v24);
    Caver::Component::BindOutlet();
    v11 = (void *)(v25 - 24);
    if ( (__int64 *)(v25 - 24) != &qword_6FD2E0 )
    {
      v6 = (unsigned int *)(v25 - 8);
      if ( &pthread_create )
      {
        do
          v7 = __ldaxr(v6);
        while ( __stlxr(v7 - 1, v6) );
      }
      else
      {
        v7 = (*v6)--;
      }
      if ( v7 <= 0 )
        operator delete(v11);
    }
    v12 = v24 - 24;
    if ( v24 - 24 != (char *)&qword_6FD2E0 )
    {
      v8 = (unsigned int *)(v24 - 8);
      if ( &pthread_create )
      {
        do
          v9 = __ldaxr(v8);
        while ( __stlxr(v9 - 1, v8) );
      }
      else
      {
        v9 = (*v8)--;
      }
      if ( v9 <= 0 )
        operator delete(v12);
    }
  }
  while ( v5++ < 4 );
  v14 = (Caver::ParticleSystem *)operator new(0xC0u);
  Caver::ParticleSystem::ParticleSystem(v14);
  v26 = v14;
  boost::detail::shared_count::shared_count<Caver::ParticleSystem>();
  boost::detail::sp_enable_shared_from_this();
  v15 = (_QWORD *)*((_QWORD *)this + 42);
  v16 = v26;
  v26 = (Caver::ParticleSystem *)*((_QWORD *)this + 41);
  v17 = v27;
  *((_QWORD *)this + 41) = v16;
  *((_QWORD *)this + 42) = v17;
  v27 = v15;
  if ( v15 )
  {
    v18 = v15[1] - 1LL;
    v15[1] = v18;
    if ( !v18 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
      v19 = v15[2] - 1LL;
      v15[2] = v19;
      if ( !v19 )
        (*(void (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
    }
  }
}


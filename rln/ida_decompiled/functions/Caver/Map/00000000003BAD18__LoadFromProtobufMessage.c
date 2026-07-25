/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BAD18
 * Mangled: _ZN5Caver3Map23LoadFromProtobufMessageERKNS_5Proto3MapE
 * Demangled: Caver::Map::LoadFromProtobufMessage(Caver::Proto::Map const&)
 *
 * Callers: 1
 *   0x00000000001F7810  Caver::Map::LoadFromProtobufMessage(Caver::Proto::Map const&)
 *
 * Callees: 25
 *   0x00000000001F43E0  Caver::Map::RecursivelySetNodePositions(Caver::MapNode *)
 *   0x00000000001F4D00  Caver::MapNode::LoadFromProtobufMessage(Caver::Proto::MapNode const&)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6D00  Caver::MapNode::MapNode(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F96A0  boost::detail::shared_count::shared_count<Caver::MapNode>(Caver::MapNode *)
 *   0x00000000001FB440  Caver::MapNode::AddPortal(Caver::MapNode::Portal const&)
 *   0x00000000001FE120  boost::detail::shared_count::shared_count<Caver::MapZone>(Caver::MapZone *)
 *   0x00000000001FE5B0  std::vector<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::MapNode>*,std::vector<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>>,boost::shared_ptr<Caver::MapNode> const&)
 *   0x00000000001FECC0  Caver::MapZone::MapZone(void)
 *   0x0000000000200300  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::string const&)
 *   0x0000000000200310  std::map<std::string,boost::shared_ptr<Caver::MapNode>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::operator[](std::string const&)
 *   0x0000000000200C00  Caver::MapZone::LoadFromProtobufMessage(Caver::Proto::MapZone const&)
 *   0x0000000000201AE0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::MapZone>> const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000203DF0  std::map<std::string,boost::shared_ptr<Caver::MapZone>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::operator[](std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 383
 *   insn=0x00000000003BAD34 string=0x00000000003BAD38 "H"
 *   insn=0x00000000003BAD3C string=0x00000000003BAD40 ""
 *   insn=0x00000000003BAD58 string=0x00000000003BAD94 "|""
 *   insn=0x00000000003BAD5C string=0x00000000003BAD60 "i""
 *   insn=0x00000000003BAD60 string=0x00000000003BAD64 "!"
 *   insn=0x00000000003BAD6C string=0x00000000003BAD70 "W"
 *   insn=0x00000000003BAD80 string=0x00000000003BAD84 "|""
 *   insn=0x00000000003BAD84 string=0x00000000003BAD88 "vb"
 *   insn=0x00000000003BAD88 string=0x00000000003BAD8C "8!"
 *   insn=0x00000000003BAD98 string=0x00000000003BAD9C "u"
 *   insn=0x00000000003BADAC string=0x00000000003BADB0 "A"
 *   insn=0x00000000003BADB0 string=0x00000000003BADB4 ""
 *   insn=0x00000000003BADB4 string=0x00000000003BADB8 "\t"
 *   insn=0x00000000003BADB8 string=0x00000000003BADBC "?"
 *   insn=0x00000000003BADC4 string=0x00000000003BADC8 "*"
 *   insn=0x00000000003BADC4 string=0x00000000003BADF8 "\t"
 *   insn=0x00000000003BADD4 string=0x00000000003BADD8 "m"
 *   insn=0x00000000003BADD8 string=0x00000000003BADDC "n"
 *   insn=0x00000000003BADE8 string=0x00000000003BADEC "a"
 *   insn=0x00000000003BADEC string=0x00000000003BADF0 "?"
 *   insn=0x00000000003BADFC string=0x00000000003BAE00 "?q"
 *   insn=0x00000000003BAE10 string=0x00000000003BAE14 "?"
 *   insn=0x00000000003BAE14 string=0x00000000003BAE18 "(p"
 *   insn=0x00000000003BAE18 string=0x00000000003BAE1C "q"
 *   insn=0x00000000003BAE1C string=0x00000000003BAE20 "uZ@"
 *   insn=0x00000000003BAE1C string=0x00000000001F43E0 "P'"
 *   insn=0x00000000003BAE28 string=0x00000000003BAE2C ""
 *   insn=0x00000000003BAE38 string=0x00000000003BAE3C "\t"
 *   insn=0x00000000003BAE40 string=0x00000000003BAE44 """
 *   insn=0x00000000003BAE48 string=0x00000000003BAE4C "?q"
 *   insn=0x00000000003BAE4C string=0x00000000003BAE50 "D"
 *   insn=0x00000000003BAE50 string=0x00000000003BAE54 "`"
 *   insn=0x00000000003BAE68 string=0x00000000003BAE6C "\t"
 *   insn=0x00000000003BAE6C string=0x00000000003BAE70 "!"
 *   insn=0x00000000003BAE74 string=0x00000000003BAE78 "!"
 *   insn=0x00000000003BAE78 string=0x00000000003BAE7C "!"
 *   insn=0x00000000003BAE7C string=0x00000000003BAE80 "a"
 *   insn=0x00000000003BAE88 string=0x00000000003BAE8C "X"
 *   insn=0x00000000003BAE94 string=0x00000000003BAE98 "sb"
 *   insn=0x00000000003BAEA4 string=0x00000000003BAEA8 "\t)C"
 *   insn=0x00000000003BAEA8 string=0x00000000003BAEAC "I"
 *   insn=0x00000000003BAEB4 string=0x00000000003BAEB8 ")"
 *   insn=0x00000000003BAEB8 string=0x00000000003BAEBC "jU"
 *   insn=0x00000000003BAEC0 string=0x00000000003BAEC4 "9}\n"
 *   insn=0x00000000003BAEC8 string=0x00000000003BAED0 ""
 *   insn=0x00000000003BAED8 string=0x00000000003BAEDC ")E@9"
 *   insn=0x00000000003BAEE4 string=0x00000000003BAEE8 ";"
 *   insn=0x00000000003BAF14 string=0x00000000003BAF18 "\n"
 *   insn=0x00000000003BAF18 string=0x00000000003BAF1C "J"
 *   insn=0x00000000003BAF1C string=0x00000000003BAF20 "J\t@"
 *   insn=0x00000000003BAF20 string=0x00000000003BAF24 "J"
 *   insn=0x00000000003BAF24 string=0x00000000003BAF28 "_"
 *   insn=0x00000000003BAF30 string=0x00000000003BAF38 ")"
 *   insn=0x00000000003BAF44 string=0x00000000003BAF48 "x"
 *   insn=0x00000000003BAF64 string=0x00000000003BB004 "I"
 *   insn=0x00000000003BAF68 string=0x00000000003BAF6C ""
 *   insn=0x00000000003BAF84 string=0x00000000003BAF94 "`"
 *   insn=0x00000000003BAF88 string=0x00000000003BAF8C ""
 *   insn=0x00000000003BAF94 string=0x00000000003BAFA0 "4"
 *   insn=0x00000000003BAF98 string=0x00000000003BAF9C ")"
 *   insn=0x00000000003BAF9C string=0x00000000001FB440 "0'"
 *   insn=0x00000000003BAFA4 string=0x00000000003BAFA8 ""
 *   insn=0x00000000003BAFB4 string=0x00000000003BAFB8 "\t@"
 *   insn=0x00000000003BAFC4 string=0x00000000003BAFC8 ""
 *   insn=0x00000000003BAFD4 string=0x00000000003BAFD8 "@"
 *   insn=0x00000000003BAFF0 string=0x00000000003BB028 "I"
 *   insn=0x00000000003BAFFC string=0x00000000003BB000 "#"
 *   insn=0x00000000003BB004 string=0x00000000003BB008 ")=G"
 *   insn=0x00000000003BB008 string=0x00000000003BB00C "!"
 *   insn=0x00000000003BB010 string=0x00000000003BB014 "\t"
 *   insn=0x00000000003BB010 string=0x00000000003BB04C "\t"
 *   insn=0x00000000003BB014 string=0x00000000003BB018 "*"
 *   insn=0x00000000003BB018 string=0x00000000003BB01C "\n"
 *   insn=0x00000000003BB020 string=0x00000000003BB024 ""
 *   insn=0x00000000003BB024 string=0x00000000003BB058 "?"
 *   insn=0x00000000003BB028 string=0x00000000003BB02C ")=G"
 *   insn=0x00000000003BB02C string=0x00000000003BB030 "!"
 *   insn=0x00000000003BB034 string=0x00000000003BB038 "\t"
 *   insn=0x00000000003BB034 string=0x00000000003BB06C "\t"
 *   insn=0x00000000003BB038 string=0x00000000003BB03C "*"
 *   insn=0x00000000003BB03C string=0x00000000003BB040 "\n"
 *   insn=0x00000000003BB048 string=0x00000000003BB078 "?"
 *   insn=0x00000000003BB04C string=0x00000000003BB050 "*"
 *   insn=0x00000000003BB050 string=0x00000000003BB054 "\n"
 *   insn=0x00000000003BB058 string=0x00000000003BB05C "l"
 *   insn=0x00000000003BB06C string=0x00000000003BB070 "*"
 *   insn=0x00000000003BB070 string=0x00000000003BB074 "\n"
 *   insn=0x00000000003BB098 string=0x00000000003BB09C ""
 *   insn=0x00000000003BB0A4 string=0x00000000003BB0A8 "A"
 *   insn=0x00000000003BB0D0 string=0x00000000003BB0D4 "\t"
 *   insn=0x00000000003BB0D0 string=0x00000000003BB0E8 "\t"
 *   insn=0x00000000003BB0D4 string=0x00000000003BB0D8 "*"
 *   insn=0x00000000003BB0D8 string=0x00000000003BB0DC "\n"
 *   insn=0x00000000003BB0E4 string=0x00000000003BB0F4 "?"
 *   insn=0x00000000003BB0E8 string=0x00000000003BB0EC "*"
 *   insn=0x00000000003BB0EC string=0x00000000003BB0F0 "\n"
 *   insn=0x00000000003BB0F4 string=0x00000000003BB0F8 ","
 *   insn=0x00000000003BB0F8 string=0x00000000003BB1DC "(+@"
 *   insn=0x00000000003BB100 string=0x00000000003BB104 "6"
 *   insn=0x00000000003BB110 string=0x00000000003BB114 "3"
 *   insn=0x00000000003BB114 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003BB15C string=0x00000000003BB160 "$#"
 *   insn=0x00000000003BB168 string=0x00000000003BB16C "\n"
 *   insn=0x00000000003BB16C string=0x00000000003BB170 "J"
 *   insn=0x00000000003BB170 string=0x00000000003BB174 "\n"
 *   insn=0x00000000003BB178 string=0x00000000003BB17C "\t "
 *   insn=0x00000000003BB17C string=0x00000000003BB180 ":"
 *   insn=0x00000000003BB180 string=0x00000000003BB184 "H@"
 *   insn=0x00000000003BB184 string=0x00000000003BB188 ""
 *   insn=0x00000000003BB188 string=0x00000000003BB18C "H"
 *   insn=0x00000000003BB190 string=0x00000000003BB194 "H"
 *   insn=0x00000000003BB194 string=0x00000000003BB198 "\t@"
 *   insn=0x00000000003BB1A0 string=0x00000000003BB1A4 "H@"
 *   insn=0x00000000003BB1A4 string=0x00000000003BB1A8 ""
 *   insn=0x00000000003BB1A8 string=0x00000000003BB1AC "H"
 *   insn=0x00000000003BB1B0 string=0x00000000003BB1B4 "H"
 *   insn=0x00000000003BB1B4 string=0x00000000003BB1B8 "@"
 *   insn=0x00000000003BB1C4 string=0x00000000003BB1C8 "I"
 *   insn=0x00000000003BB1C8 string=0x00000000003BB1CC ")"
 *   insn=0x00000000003BB1D8 string=0x00000000003BB0CC "!"
 *   insn=0x00000000003BB1F4 string=0x00000000003BB1F8 ")=G"
 *   insn=0x00000000003BB1F8 string=0x00000000003BB1FC "!"
 *   insn=0x00000000003BB200 string=0x00000000003BB204 "\t"
 *   insn=0x00000000003BB200 string=0x00000000003BB218 "\t"
 *   insn=0x00000000003BB204 string=0x00000000003BB208 "*"
 *   insn=0x00000000003BB208 string=0x00000000003BB20C "\n"
 *   insn=0x00000000003BB214 string=0x00000000003BB224 "?"
 *   insn=0x00000000003BB218 string=0x00000000003BB21C "*"
 *   insn=0x00000000003BB21C string=0x00000000003BB220 "\n"
 *   insn=0x00000000003BB22C string=0x00000000003BB230 "]"
 *   insn=0x00000000003BB230 string=0x00000000003BB234 "K"
 *   insn=0x00000000003BB248 string=0x00000000001F6D00 "0'"
 *   insn=0x00000000003BB258 string=0x00000000001F96A0 "0'"
 *   insn=0x00000000003BB274 string=0x00000000003BB278 ""
 *   insn=0x00000000003BB278 string=0x00000000003BB27C "("
 *   insn=0x00000000003BB284 string=0x00000000003BB288 "a"
 *   insn=0x00000000003BB284 string=0x00000000001F4D00 "P'"
 *   insn=0x00000000003BB288 string=0x00000000003BB28C "?"
 *   insn=0x00000000003BB294 string=0x00000000003BB298 "("
 *   insn=0x00000000003BB29C string=0x00000000003BB2A0 "("
 *   insn=0x00000000003BB2A4 string=0x00000000003BB2A8 "\t"
 *   insn=0x00000000003BB2A4 string=0x00000000003BB2B4 "(@"
 *   insn=0x00000000003BB2A8 string=0x00000000003BB2AC ")"
 *   insn=0x00000000003BB2AC string=0x00000000003BB2B0 "\t"
 *   insn=0x00000000003BB2E0 string=0x00000000003BB2E4 ""
 *   insn=0x00000000003BB2EC string=0x00000000003BB2F0 "\n"
 *   insn=0x00000000003BB2F0 string=0x00000000003BB2F4 "J"
 *   insn=0x00000000003BB2F4 string=0x00000000003BB2F8 "\n"
 *   insn=0x00000000003BB2FC string=0x00000000003BB300 "\t "
 *   insn=0x00000000003BB300 string=0x00000000003BB304 ":"
 *   insn=0x00000000003BB304 string=0x00000000003BB308 "H@"
 *   insn=0x00000000003BB308 string=0x00000000003BB30C ""
 *   insn=0x00000000003BB30C string=0x00000000003BB310 "H"
 *   insn=0x00000000003BB314 string=0x00000000003BB318 "H"
 *   insn=0x00000000003BB318 string=0x00000000003BB31C "\t@"
 *   insn=0x00000000003BB324 string=0x00000000003BB328 "H@"
 *   insn=0x00000000003BB328 string=0x00000000003BB32C ""
 *   insn=0x00000000003BB32C string=0x00000000003BB330 "H"
 *   insn=0x00000000003BB334 string=0x00000000003BB338 "H"
 *   insn=0x00000000003BB338 string=0x00000000003BB33C "@"
 *   insn=0x00000000003BB348 string=0x00000000003BB34C "I"
 *   insn=0x00000000003BB34C string=0x00000000003BB350 ")"
 *   insn=0x00000000003BB35C string=0x00000000003BB1F4 "I"
 *   insn=0x00000000003BB364 string=0x00000000003BB368 "?"
 *   insn=0x00000000003BB370 string=0x00000000003BB374 ")"
 *   insn=0x00000000003BB378 string=0x00000000003BB37C ")"
 *   insn=0x00000000003BB380 string=0x00000000003BB384 "*"
 *   insn=0x00000000003BB380 string=0x00000000003BB390 ")@"
 *   insn=0x00000000003BB384 string=0x00000000003BB388 "J"
 *   insn=0x00000000003BB388 string=0x00000000003BB38C "*"
 *   insn=0x00000000003BB390 string=0x00000000003BB394 "\t"
 *   insn=0x00000000003BB39C string=0x00000000003BB3B8 "H@"
 *   insn=0x00000000003BB3A0 string=0x00000000003BB3F8 "(+"
 *   insn=0x00000000003BB3B0 string=0x00000000003BB3B4 ":"
 *   insn=0x00000000003BB3B8 string=0x00000000003BB3BC ""
 *   insn=0x00000000003BB3BC string=0x00000000003BB3C0 "H"
 *   insn=0x00000000003BB3C4 string=0x00000000003BB3C8 "H"
 *   insn=0x00000000003BB3C8 string=0x00000000003BB3CC "\t@"
 *   insn=0x00000000003BB3D4 string=0x00000000003BB3D8 "H@"
 *   insn=0x00000000003BB3D8 string=0x00000000003BB3DC ""
 *   insn=0x00000000003BB3DC string=0x00000000003BB3E0 "H"
 *   insn=0x00000000003BB3E4 string=0x00000000003BB3E8 "H"
 *   insn=0x00000000003BB3E8 string=0x00000000003BB3EC "@"
 *   insn=0x00000000003BB408 string=0x00000000003BB40C "W"
 *   insn=0x00000000003BB414 string=0x00000000003BB418 "9"
 *   insn=0x00000000003BB418 string=0x00000000003BB41C "(@"
 *   insn=0x00000000003BB41C string=0x00000000003BB420 ""
 *   insn=0x00000000003BB420 string=0x00000000003BB424 "("
 *   insn=0x00000000003BB428 string=0x00000000003BB42C "("
 *   insn=0x00000000003BB430 string=0x00000000003BB434 "\t@"
 *   insn=0x00000000003BB438 string=0x00000000003BB43C "(@"
 *   insn=0x00000000003BB43C string=0x00000000003BB440 ""
 *   insn=0x00000000003BB440 string=0x00000000003BB444 "("
 *   insn=0x00000000003BB448 string=0x00000000003BB44C "("
 *   insn=0x00000000003BB450 string=0x00000000003BB454 "@"
 *   insn=0x00000000003BB45C string=0x00000000003BB460 "{"
 *   insn=0x00000000003BB464 string=0x00000000003BB468 ""
 *   insn=0x00000000003BB468 string=0x00000000003BB46C "K"
 *   insn=0x00000000003BB470 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003BB47C string=0x00000000003BB480 ""
 *   insn=0x00000000003BB484 string=0x00000000003BB488 "!\t"
 *   insn=0x00000000003BB48C string=0x00000000003BB490 "\t@"
 *   insn=0x00000000003BB49C string=0x00000000003BB4A0 ""
 *   insn=0x00000000003BB4A4 string=0x00000000003BB4A8 "!"
 *   insn=0x00000000003BB4AC string=0x00000000003BB4B0 "@"
 *   insn=0x00000000003BB4B8 string=0x00000000003BB4BC "<"
 *   insn=0x00000000003BB4CC string=0x00000000003BB4D0 "x"
 *   insn=0x00000000003BB4D0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003BB4DC string=0x00000000003BB4E0 "J"
 *   insn=0x00000000003BB4E0 string=0x00000000003BB4E4 "J"
 *   insn=0x00000000003BB4E8 string=0x00000000003BB4EC "(a"
 *   insn=0x00000000003BB4F4 string=0x00000000003BB4F8 ")!"
 *   insn=0x00000000003BB4FC string=0x00000000003BB500 "*"
 *   insn=0x00000000003BB4FC string=0x00000000003BB530 "*"
 *   insn=0x00000000003BB500 string=0x00000000003BB504 "K"
 *   insn=0x00000000003BB504 string=0x00000000003BB508 "+"
 *   insn=0x00000000003BB50C string=0x00000000003BB510 "_"
 *   insn=0x00000000003BB524 string=0x00000000003BB528 "4"
 *   insn=0x00000000003BB530 string=0x00000000003BB534 "K"
 *   insn=0x00000000003BB534 string=0x00000000003BB538 "+"
 *   insn=0x00000000003BB538 string=0x00000000003BB53C "_"
 *   insn=0x00000000003BB540 string=0x00000000003BB544 "l"
 *   insn=0x00000000003BB54C string=0x00000000003BB550 "(a"
 *   insn=0x00000000003BB558 string=0x00000000003BB55C "J"
 *   insn=0x00000000003BB55C string=0x00000000003BB560 "J=G"
 *   insn=0x00000000003BB560 string=0x00000000003BB564 ")!"
 *   insn=0x00000000003BB568 string=0x00000000003BB56C "*"
 *   insn=0x00000000003BB568 string=0x00000000003BB580 "*"
 *   insn=0x00000000003BB56C string=0x00000000003BB570 "K"
 *   insn=0x00000000003BB570 string=0x00000000003BB574 "+"
 *   insn=0x00000000003BB57C string=0x00000000003BB58C "_"
 *   insn=0x00000000003BB580 string=0x00000000003BB584 "K"
 *   insn=0x00000000003BB584 string=0x00000000003BB588 "+"
 *   insn=0x00000000003BB5B8 string=0x00000000003BB5BC "I"
 *   insn=0x00000000003BB5BC string=0x00000000003BB5C0 ")=G"
 *   insn=0x00000000003BB5C0 string=0x00000000003BB5C4 "!"
 *   insn=0x00000000003BB5C4 string=0x00000000003BB5C8 "i"
 *   insn=0x00000000003BB5C8 string=0x00000000003BB5CC "\t"
 *   insn=0x00000000003BB5C8 string=0x00000000003BB5F4 "\t"
 *   insn=0x00000000003BB5CC string=0x00000000003BB5D0 "*"
 *   insn=0x00000000003BB5D0 string=0x00000000003BB5D4 "\n"
 *   insn=0x00000000003BB5D8 string=0x00000000003BB5DC "?"
 *   insn=0x00000000003BB5DC string=0x00000000003BB5E0 "l"
 *   insn=0x00000000003BB5E4 string=0x00000000003BB5E8 "o"
 *   insn=0x00000000003BB5F4 string=0x00000000003BB5F8 "*"
 *   insn=0x00000000003BB5F8 string=0x00000000003BB5FC "\n"
 *   insn=0x00000000003BB5FC string=0x00000000003BB600 "?"
 *   insn=0x00000000003BB600 string=0x00000000003BB604 ""
 *   insn=0x00000000003BB604 string=0x00000000003BB608 "Q"
 *   insn=0x00000000003BB614 string=0x00000000003BB618 "7"
 *   insn=0x00000000003BB620 string=0x00000000003BB624 "#"
 *   insn=0x00000000003BB62C string=0x00000000003BB630 "G"
 *   insn=0x00000000003BB634 string=0x00000000003BB638 "J"
 *   insn=0x00000000003BB638 string=0x00000000003BB63C "J"
 *   insn=0x00000000003BB640 string=0x00000000003BB644 "(a"
 *   insn=0x00000000003BB64C string=0x00000000003BB650 "J"
 *   insn=0x00000000003BB650 string=0x00000000003BB654 "J=G"
 *   insn=0x00000000003BB654 string=0x00000000003BB658 ")!"
 *   insn=0x00000000003BB65C string=0x00000000003BB660 "*"
 *   insn=0x00000000003BB65C string=0x00000000003BB690 "*"
 *   insn=0x00000000003BB660 string=0x00000000003BB664 "K"
 *   insn=0x00000000003BB664 string=0x00000000003BB668 "+"
 *   insn=0x00000000003BB66C string=0x00000000003BB670 "_"
 *   insn=0x00000000003BB67C string=0x00000000003BB680 "I"
 *   insn=0x00000000003BB684 string=0x00000000003BB688 "t"
 *   insn=0x00000000003BB690 string=0x00000000003BB694 "K"
 *   insn=0x00000000003BB694 string=0x00000000003BB698 "+"
 *   insn=0x00000000003BB698 string=0x00000000003BB69C "_"
 *   insn=0x00000000003BB6AC string=0x00000000003BB6B0 "4"
 *   insn=0x00000000003BB6B4 string=0x00000000003BB6B8 ""
 *   insn=0x00000000003BB6C4 string=0x00000000003BB6C8 "\t@"
 *   insn=0x00000000003BB6D4 string=0x00000000003BB6D8 ""
 *   insn=0x00000000003BB6E4 string=0x00000000003BB6E8 "@"
 *   insn=0x00000000003BB704 string=0x00000000003BB708 "4"
 *   insn=0x00000000003BB70C string=0x00000000003BB710 ""
 *   insn=0x00000000003BB71C string=0x00000000003BB720 "\t@"
 *   insn=0x00000000003BB72C string=0x00000000003BB730 ""
 *   insn=0x00000000003BB73C string=0x00000000003BB740 "@"
 *   insn=0x00000000003BB74C string=0x00000000003BB750 "]"
 *   insn=0x00000000003BB774 string=0x00000000003BB778 "H"
 *   insn=0x00000000003BB77C string=0x00000000003BB780 ""
 *   insn=0x00000000003BB794 string=0x00000000003BB798 "7"
 *   insn=0x00000000003BB7B8 string=0x00000000003BB7BC ""
 *   insn=0x00000000003BB7C0 string=0x00000000003BB7C4 """
 *   insn=0x00000000003BB7C4 string=0x00000000003BB7C8 "r"
 *   insn=0x00000000003BB7C8 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003BB7CC string=0x00000000003BB7D0 "@"
 *   insn=0x00000000003BB7DC string=0x00000000003BB7E0 ""
 *   insn=0x00000000003BB81C string=0x00000000003BB820 "@"
 *   insn=0x00000000003BB824 string=0x00000000003BB828 "a"
 *   insn=0x00000000003BB828 string=0x00000000003BB82C ""
 *   insn=0x00000000003BB82C string=0x00000000003BB830 ")"
 *   insn=0x00000000003BB834 string=0x00000000003BB838 """
 *   insn=0x00000000003BB838 string=0x00000000003BB83C "U"
 *   insn=0x00000000003BB83C string=0x00000000003BB840 "`\n"
 *   insn=0x00000000003BB84C string=0x00000000003BB850 "6"
 *   insn=0x00000000003BB86C string=0x00000000003BB870 "6"
 *   insn=0x00000000003BB874 string=0x00000000003BB878 "s"
 *   insn=0x00000000003BB87C string=0x00000000003BB880 " "
 *   insn=0x00000000003BB888 string=0x00000000003BB88C ""
 *   insn=0x00000000003BB88C string=0x00000000003BB890 ")"
 *   insn=0x00000000003BB894 string=0x00000000003BB898 """
 *   insn=0x00000000003BB898 string=0x00000000003BB89C "="
 *   insn=0x00000000003BB8B8 string=0x00000000003BB8BC "`"
 *   insn=0x00000000003BB8E8 string=0x00000000003BB8EC ""
 *   insn=0x00000000003BB8F4 string=0x00000000003BB8F8 "4"
 *   insn=0x00000000003BB8FC string=0x00000000003BB900 ""
 *   insn=0x00000000003BB90C string=0x00000000003BB910 "\t@"
 *   insn=0x00000000003BB91C string=0x00000000003BB920 ""
 *   insn=0x00000000003BB92C string=0x00000000003BB930 "@"
 *   insn=0x00000000003BB93C string=0x00000000003BB940 "I"
 *   insn=0x00000000003BB940 string=0x00000000003BB944 ")"
 *   insn=0x00000000003BB950 string=0x00000000003BB9B0 "I"
 *   insn=0x00000000003BB954 string=0x00000000003BB958 ""
 *   insn=0x00000000003BB964 string=0x00000000003BB968 "`"
 *   insn=0x00000000003BB964 string=0x00000000003BB9F4 "7"
 *   insn=0x00000000003BB9A4 string=0x00000000003BB9A8 "`"
 *   insn=0x00000000003BB9B0 string=0x00000000003BB9B4 ")=G"
 *   insn=0x00000000003BB9B4 string=0x00000000003BB9B8 "!"
 *   insn=0x00000000003BB9BC string=0x00000000003BB9C0 "\t"
 *   insn=0x00000000003BB9BC string=0x00000000003BB9D4 "\t"
 *   insn=0x00000000003BB9C0 string=0x00000000003BB9C4 "*"
 *   insn=0x00000000003BB9C4 string=0x00000000003BB9C8 "\n"
 *   insn=0x00000000003BB9D0 string=0x00000000003BB9E0 "?"
 *   insn=0x00000000003BB9D4 string=0x00000000003BB9D8 "*"
 *   insn=0x00000000003BB9D8 string=0x00000000003BB9DC "\n"
 *   insn=0x00000000003BB9E8 string=0x00000000003BB9EC "n"
 *   insn=0x00000000003BB9F8 string=0x00000000003BB9FC "J"
 *   insn=0x00000000003BB9FC string=0x00000000003BBA00 "J"
 *   insn=0x00000000003BBA04 string=0x00000000003BBA08 "(a"
 *   insn=0x00000000003BBA10 string=0x00000000003BBA14 "J"
 *   insn=0x00000000003BBA14 string=0x00000000003BBA18 "J=G"
 *   insn=0x00000000003BBA18 string=0x00000000003BBA1C ")!"
 *   insn=0x00000000003BBA20 string=0x00000000003BBA24 "*"
 *   insn=0x00000000003BBA20 string=0x00000000003BBA50 "*"
 *   insn=0x00000000003BBA24 string=0x00000000003BBA28 "K"
 *   insn=0x00000000003BBA28 string=0x00000000003BBA2C "+"
 *   insn=0x00000000003BBA30 string=0x00000000003BBA34 "_"
 *   insn=0x00000000003BBA34 string=0x00000000003BBA38 "l"
 *   insn=0x00000000003BBA40 string=0x00000000003BBA44 "X"
 *   insn=0x00000000003BBA50 string=0x00000000003BBA54 "K"
 *   insn=0x00000000003BBA54 string=0x00000000003BBA58 "+"
 *   insn=0x00000000003BBA58 string=0x00000000003BBA5C "_"
 *   insn=0x00000000003BBA60 string=0x00000000003BBA64 "0"
 *   insn=0x00000000003BBA78 string=0x00000000003BBA7C "4"
 *   insn=0x00000000003BBA80 string=0x00000000003BBA84 ""
 *   insn=0x00000000003BBA90 string=0x00000000003BBA94 "\t@"
 *   insn=0x00000000003BBAA0 string=0x00000000003BBAA4 ""
 *   insn=0x00000000003BBAB0 string=0x00000000003BBAB4 "@"
 *   insn=0x00000000003BBAC0 string=0x00000000003BBAC4 "I"
 *   insn=0x00000000003BBAC4 string=0x00000000003BBAC8 ")"
 *   insn=0x00000000003BBAD4 string=0x00000000003BBAD8 "I"
 *   insn=0x00000000003BBAD8 string=0x00000000003BBADC ")=G"
 *   insn=0x00000000003BBADC string=0x00000000003BBAE0 "!"
 *   insn=0x00000000003BBAE0 string=0x00000000003BBAE4 "i"
 *   insn=0x00000000003BBAE4 string=0x00000000003BBAE8 "\t"
 *   insn=0x00000000003BBAE4 string=0x00000000003BBB10 "\t"
 *   insn=0x00000000003BBAE8 string=0x00000000003BBAEC "*"
 *   insn=0x00000000003BBAEC string=0x00000000003BBAF0 "\n"
 *   insn=0x00000000003BBAF4 string=0x00000000003BBAF8 "?"
 *   insn=0x00000000003BBAF8 string=0x00000000003BBAFC "L"
 *   insn=0x00000000003BBB00 string=0x00000000003BBB04 "("
 *   insn=0x00000000003BBB08 string=0x00000000003BBB0C "n"
 *   insn=0x00000000003BBB10 string=0x00000000003BBB14 "*"
 *   insn=0x00000000003BBB14 string=0x00000000003BBB18 "\n"
 *   insn=0x00000000003BBB18 string=0x00000000003BBB1C "?"
 *   insn=0x00000000003BBB1C string=0x00000000003BBB20 ""
 *   insn=0x00000000003BBB24 string=0x00000000003BBB28 "g"
 *   insn=0x00000000003BBB2C string=0x00000000003BBB30 "J"
 *   insn=0x00000000003BBB30 string=0x00000000003BBB34 "J"
 *   insn=0x00000000003BBB38 string=0x00000000003BBB3C "(a"
 *   insn=0x00000000003BBB44 string=0x00000000003BBB48 "J"
 *   insn=0x00000000003BBB48 string=0x00000000003BBB4C "J=G"
 *   insn=0x00000000003BBB4C string=0x00000000003BBB50 ")!"
 *   insn=0x00000000003BBB54 string=0x00000000003BBB58 "*"
 *   insn=0x00000000003BBB54 string=0x00000000003BBB84 "*"
 *   insn=0x00000000003BBB58 string=0x00000000003BBB5C "K"
 *   insn=0x00000000003BBB5C string=0x00000000003BBB60 "+"
 *   insn=0x00000000003BBB64 string=0x00000000003BBB68 "_"
 *   insn=0x00000000003BBB74 string=0x00000000003BBB78 ""
 *   insn=0x00000000003BBB84 string=0x00000000003BBB88 "K"
 *   insn=0x00000000003BBB88 string=0x00000000003BBB8C "+"
 *   insn=0x00000000003BBB8C string=0x00000000003BBB90 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Map::LoadFromProtobufMessage(Caver::Map *this, const Caver::Proto::Map *a2)
{
  __int64 v4; // x27
  __int64 v5; // x21
  float32x2_t ***v6; // x28
  float32x2_t **v7; // x22
  float32x2_t **v8; // x21
  unsigned __int64 v9; // x9
  float32x2_t **v10; // x8
  __int64 *v11; // x11
  __int64 v12; // x12
  __int64 v13; // x13
  __int64 v14; // t1
  float32x2_t *v15; // t1
  float32x2_t *v16; // x1
  int8x8_t v17; // d0
  float32x2_t **v23; // x8
  float32x2_t *v24; // t1
  float32x2_t v25; // d2
  float32x2_t **v26; // x8
  float32x2_t *v27; // t1
  float32x2_t *v28; // x8
  __int64 v29; // x9
  __int64 v30; // x23
  unsigned __int64 v31; // x25
  __int64 v32; // x8
  __int64 v33; // x20
  int v34; // w9
  float32x2_t *v35; // x8
  int v36; // w10
  char *v37; // x0
  __int64 v38; // x0
  _QWORD *v39; // x20
  __int64 *v40; // t2
  __int64 v41; // x8
  __int64 v42; // x8
  char *v43; // x0
  unsigned int *v44; // x8
  int v45; // w9
  unsigned int *v46; // x8
  int v47; // w9
  unsigned int *v48; // x8
  int v49; // w9
  __int64 v50; // x25
  Caver::MapZone *v51; // x26
  Caver::MapZone **v52; // x0
  Caver::MapZone *v53; // x8
  Caver::MapZone *v54; // x9
  Caver::MapZone *v55; // x26
  __int64 v56; // x8
  __int64 v57; // x8
  char *v58; // x0
  __int64 v59; // x23
  unsigned int *v60; // x8
  int v61; // w9
  Caver::MapNode *v62; // x26
  Caver::MapNode *v63; // x0
  Caver::MapNode **v64; // x1
  Caver::MapNode *v65; // x8
  _QWORD *v66; // x0
  Caver::MapNode *v67; // x8
  Caver::MapNode *v68; // x9
  _QWORD *v69; // x26
  __int64 v70; // x8
  __int64 v71; // x8
  void *v72; // x0
  Caver::MapZone *v73; // x8
  Caver::MapNode **v74; // x1
  Caver::MapNode *v75; // x9
  Caver::MapNode *v76; // x26
  __int64 v77; // x8
  __int64 v78; // x8
  Caver::MapZone *v79; // x25
  __int64 v80; // x8
  __int64 v81; // x8
  __int64 v82; // [xsp+B8h] [xbp-90h] BYREF
  Caver::MapNode *v83; // [xsp+C0h] [xbp-88h] BYREF
  Caver::MapNode *v84; // [xsp+C8h] [xbp-80h]
  Caver::MapZone *v85; // [xsp+D8h] [xbp-70h] BYREF
  Caver::MapZone *v86; // [xsp+E0h] [xbp-68h]
  __int16 v87; // [xsp+E8h] [xbp-60h]
  __int64 v88; // [xsp+F0h] [xbp-58h]

  v88 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((int *)a2 + 6) > 0 )
  {
    v4 = 0;
    LODWORD(v5) = 0;
    v6 = (float32x2_t ***)((char *)this + 8);
    while ( 1 )
    {
      v50 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8 * v4);
      v51 = (Caver::MapZone *)operator new(0x38u);
      Caver::MapZone::MapZone(v51);
      v85 = v51;
      boost::detail::shared_count::shared_count<Caver::MapZone>();
      boost::detail::sp_enable_shared_from_this();
      Caver::MapZone::LoadFromProtobufMessage(v85, (const Caver::Proto::MapZone *)v50);
      sub_56A528(&v83, v85);
      std::map<std::string,boost::shared_ptr<Caver::MapZone>>::operator[]();
      v54 = v85;
      v53 = v86;
      if ( v86 )
        ++*((_QWORD *)v86 + 1);
      v55 = v52[1];
      *v52 = v54;
      v52[1] = v53;
      if ( v55 )
      {
        v56 = *((_QWORD *)v55 + 1) - 1LL;
        *((_QWORD *)v55 + 1) = v56;
        if ( !v56 )
        {
          (*(void (__fastcall **)(Caver::MapZone *))(*(_QWORD *)v55 + 16LL))(v55);
          v57 = *((_QWORD *)v55 + 2) - 1LL;
          *((_QWORD *)v55 + 2) = v57;
          if ( !v57 )
            (*(void (__fastcall **)(Caver::MapZone *))(*(_QWORD *)v55 + 24LL))(v55);
        }
      }
      v58 = (char *)v83 - 24;
      if ( (__int64 *)((char *)v83 - 24) != &qword_6FD2E0 )
      {
        v48 = (unsigned int *)((char *)v83 - 8);
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
          operator delete(v58);
      }
      if ( *(int *)(v50 + 40) >= 1 )
        break;
LABEL_92:
      v79 = v86;
      if ( v86 )
      {
        v80 = *((_QWORD *)v86 + 1) - 1LL;
        *((_QWORD *)v86 + 1) = v80;
        if ( !v80 )
        {
          (*(void (__fastcall **)(Caver::MapZone *))(*(_QWORD *)v79 + 16LL))(v79);
          v81 = *((_QWORD *)v79 + 2) - 1LL;
          *((_QWORD *)v79 + 2) = v81;
          if ( !v81 )
            (*(void (__fastcall **)(Caver::MapZone *))(*(_QWORD *)v79 + 24LL))(v79);
        }
      }
      if ( ++v4 >= *((int *)a2 + 6) )
        goto LABEL_4;
    }
    v59 = 0;
    v5 = (int)v5;
    while ( 1 )
    {
      v62 = (Caver::MapNode *)operator new(0x78u);
      Caver::MapNode::MapNode(v62);
      v83 = v62;
      boost::detail::shared_count::shared_count<Caver::MapNode>();
      boost::detail::sp_enable_shared_from_this();
      v63 = v83;
      *(_QWORD *)v83 = v5;
      *((_QWORD *)v63 + 5) = v85;
      Caver::MapNode::LoadFromProtobufMessage(v63, *(const Caver::Proto::MapNode **)(*(_QWORD *)(v50 + 32) + 8 * v59));
      v64 = (Caver::MapNode **)*((_QWORD *)this + 1);
      if ( v64 == *((Caver::MapNode ***)this + 2) )
      {
        std::vector<boost::shared_ptr<Caver::MapNode>>::_M_insert_aux();
      }
      else
      {
        *v64 = v83;
        v65 = v84;
        v64[1] = v84;
        if ( v65 )
          ++*((_QWORD *)v65 + 1);
        *v6 = (float32x2_t **)(v64 + 2);
      }
      sub_56A528(&v82, (char *)v83 + 16);
      v66 = (_QWORD *)std::map<std::string,boost::shared_ptr<Caver::MapNode>>::operator[]();
      v68 = v83;
      v67 = v84;
      if ( v84 )
        ++*((_QWORD *)v84 + 1);
      v69 = (_QWORD *)v66[1];
      *v66 = v68;
      v66[1] = v67;
      if ( v69 )
      {
        v70 = v69[1] - 1LL;
        v69[1] = v70;
        if ( !v70 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v69 + 16LL))(v69);
          v71 = v69[2] - 1LL;
          v69[2] = v71;
          if ( !v71 )
            (*(void (__fastcall **)(_QWORD *))(*v69 + 24LL))(v69);
        }
      }
      v72 = (void *)(v82 - 24);
      if ( (__int64 *)(v82 - 24) != &qword_6FD2E0 )
      {
        v60 = (unsigned int *)(v82 - 8);
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
          operator delete(v72);
      }
      v73 = v85;
      v74 = (Caver::MapNode **)*((_QWORD *)v85 + 3);
      if ( v74 != *((Caver::MapNode ***)v85 + 4) )
        break;
      std::vector<boost::shared_ptr<Caver::MapNode>>::_M_insert_aux();
      v76 = v84;
      if ( v84 )
        goto LABEL_88;
LABEL_91:
      ++v59;
      ++v5;
      if ( v59 >= *(int *)(v50 + 40) )
        goto LABEL_92;
    }
    *v74 = v83;
    v75 = v84;
    v74[1] = v84;
    if ( v75 )
      ++*((_QWORD *)v75 + 1);
    *((_QWORD *)v73 + 3) = v74 + 2;
    v76 = v84;
    if ( !v84 )
      goto LABEL_91;
LABEL_88:
    v77 = *((_QWORD *)v76 + 1) - 1LL;
    *((_QWORD *)v76 + 1) = v77;
    if ( !v77 )
    {
      (*(void (__fastcall **)(Caver::MapNode *))(*(_QWORD *)v76 + 16LL))(v76);
      v78 = *((_QWORD *)v76 + 2) - 1LL;
      *((_QWORD *)v76 + 2) = v78;
      if ( !v78 )
        (*(void (__fastcall **)(Caver::MapNode *))(*(_QWORD *)v76 + 24LL))(v76);
    }
    goto LABEL_91;
  }
  v6 = (float32x2_t ***)((char *)this + 8);
LABEL_4:
  v7 = *v6;
  v8 = *(float32x2_t ***)this;
  if ( *v6 == *(float32x2_t ***)this )
    goto LABEL_16;
  v9 = (((unsigned __int64)*v6 - *(_QWORD *)this - 16) >> 4) + 1;
  v10 = *(float32x2_t ***)this;
  if ( v9 < 3 )
    goto LABEL_100;
  v10 = &v8[2 * (v9 & 0x1FFFFFFFFFFFFFFELL)];
  v11 = (__int64 *)(v8 + 2);
  v12 = v9 & 0x1FFFFFFFFFFFFFFELL;
  do
  {
    v13 = *(v11 - 2);
    v14 = *v11;
    v11 += 4;
    v12 -= 2;
    *(_BYTE *)(v13 + 92) = 0;
    *(_BYTE *)(v14 + 92) = 0;
  }
  while ( v12 );
  if ( v9 != (v9 & 0x1FFFFFFFFFFFFFFELL) )
  {
LABEL_100:
    do
    {
      v15 = *v10;
      v10 += 2;
      v15[11].n64_u8[4] = 0;
    }
    while ( v7 != v10 );
  }
  v16 = *v8;
  v16[1].n64_u64[0] = 0;
  v16[11].n64_u8[4] = 1;
  Caver::Map::RecursivelySetNodePositions(this, (Caver::MapNode *)v16);
  v8 = *(float32x2_t ***)this;
  v7 = (float32x2_t **)*((_QWORD *)this + 1);
  if ( *(float32x2_t ***)this != v7 )
  {
    v17.n64_u64[0] = vdup_n_s32(0x7F7FFFFFu).n64_u64[0];
    __asm { FMOV            V1.2S, #-16.0 }
    v23 = *(float32x2_t ***)this;
    do
    {
      v24 = *v23;
      v23 += 2;
      v25.n64_u64[0] = v24[1].n64_u64[0];
      v24[11].n64_u8[4] = 0;
      v17.n64_u64[0] = vbsl_s8(vcgt_f32(v17, v25), vadd_f32(v25, _D1), v17).n64_u64[0];
    }
    while ( v7 != v23 );
    if ( v8 != v7 )
    {
      v26 = v8;
      do
      {
        v27 = *v26;
        v26 += 2;
        v27[1].n64_u64[0] = vsub_f32(v27[1], v17).n64_u64[0];
      }
      while ( v7 != v26 );
LABEL_16:
      while ( v8 != v7 )
      {
        v28 = *v8;
        v29 = (*v8)[7].n64_u64[0] - (*v8)[6].n64_u64[0];
        if ( v29 )
        {
          v30 = 0;
          v31 = 0xAAAAAAAAAAAAAAABLL * (v29 >> 3);
          while ( 1 )
          {
            v32 = v28[6].n64_i64[0];
            if ( !*(_BYTE *)(v32 + 24 * v30 + 17) )
            {
              v33 = v32 + 24 * v30;
              sub_56A528(&v85, v33);
              v34 = 1;
              v87 = *(_WORD *)(v33 + 16);
              v86 = *(Caver::MapZone **)(v33 + 8);
              HIBYTE(v87) = 1;
              v35 = *v8;
              v36 = *(_DWORD *)((*v8)[6].n64_u64[0] + 24 * v30 + 8) - 1;
              if ( (unsigned int)v36 <= 7 )
                v34 = dword_591F30[v36];
              LODWORD(v86) = v34;
              sub_56A528(&v83, &v35[2]);
              sub_56A6A8(&v85);
              v37 = (char *)v83 - 24;
              if ( (__int64 *)((char *)v83 - 24) != &qword_6FD2E0 )
              {
                v44 = (unsigned int *)((char *)v83 - 8);
                if ( &pthread_create )
                {
                  do
                    v45 = __ldaxr(v44);
                  while ( __stlxr(v45 - 1, v44) );
                }
                else
                {
                  v45 = (*v44)--;
                }
                if ( v45 <= 0 )
                  operator delete(v37);
              }
              v40 = (__int64 *)std::map<std::string,boost::shared_ptr<Caver::MapNode>>::operator[]();
              v38 = *v40;
              v39 = (_QWORD *)v40[1];
              if ( v39 )
                ++v39[1];
              if ( v38 )
                Caver::MapNode::AddPortal();
              if ( v39 )
              {
                v41 = v39[1] - 1LL;
                v39[1] = v41;
                if ( !v41 )
                {
                  (*(void (__fastcall **)(_QWORD *))(*v39 + 16LL))(v39);
                  v42 = v39[2] - 1LL;
                  v39[2] = v42;
                  if ( !v42 )
                    (*(void (__fastcall **)(_QWORD *))(*v39 + 24LL))(v39);
                }
              }
              v43 = (char *)v85 - 24;
              if ( (__int64 *)((char *)v85 - 24) != &qword_6FD2E0 )
              {
                v46 = (unsigned int *)((char *)v85 - 8);
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
                  operator delete(v43);
              }
            }
            if ( ++v30 >= v31 )
              break;
            v28 = *v8;
          }
        }
        v8 += 2;
      }
    }
  }
}


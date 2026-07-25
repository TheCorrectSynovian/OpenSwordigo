/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BC240
 * Mangled: _ZNK5Caver3Map21SaveToProtobufMessageEPNS_5Proto3MapE
 * Demangled: Caver::Map::SaveToProtobufMessage(Caver::Proto::Map *)
 *
 * Callers: 0
 *
 * Callees: 28
 *   0x00000000001F3D40  Caver::MapZone::SaveToProtobufMessage(Caver::Proto::MapZone *)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F58F0  std::deque<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_reallocate_map(ulong,bool)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6820  Caver::Proto::MapNode::MapNode(void)
 *   0x00000000001F6C00  boost::detail::shared_count::shared_count<Caver::MapPath>(Caver::MapPath *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7800  std::deque<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::~deque()
 *   0x00000000001F83A0  std::vector<std::string,std::allocator<std::string>>::_M_insert_aux(__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,std::string const&)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FE720  std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator[](std::string const&)
 *   0x00000000001FE830  Caver::Proto::MapZone::MapZone(void)
 *   0x0000000000200310  std::map<std::string,boost::shared_ptr<Caver::MapNode>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::operator[](std::string const&)
 *   0x0000000000200600  Caver::MapNode::SaveToProtobufMessage(Caver::Proto::MapNode *)
 *   0x0000000000201DC0  std::deque<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_destroy_data_aux(std::_Deque_iterator<boost::shared_ptr<Caver::MapNode>,boost::shared_ptr<Caver::MapNode>&,boost::shared_ptr<Caver::MapNode>*>,std::_Deque_iterator<boost::shared_ptr<Caver::MapNode>,boost::shared_ptr<Caver::MapNode>&,boost::shared_ptr<Caver::MapNode>*>)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202C60  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,std::string>> *)
 *   0x0000000000203470  std::_Deque_base<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_initialize_map(ulong)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003BD23C  std::vector<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::MapNode>*,std::vector<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>>,boost::shared_ptr<Caver::MapNode> const&)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 416
 *   insn=0x00000000003BC260 string=0x00000000003BC264 "@"
 *   insn=0x00000000003BC284 string=0x00000000003BC288 "h"
 *   insn=0x00000000003BC288 string=0x00000000003BC28C ""
 *   insn=0x00000000003BC28C string=0x00000000003BC290 "h"
 *   insn=0x00000000003BC294 string=0x00000000003BC298 ")}@"
 *   insn=0x00000000003BC298 string=0x00000000003BC29C "?"
 *   insn=0x00000000003BC2A4 string=0x00000000003BC2A8 "*"
 *   insn=0x00000000003BC2C0 string=0x00000000003BC2D4 ""
 *   insn=0x00000000003BC2CC string=0x00000000001FAD20 "0'"
 *   insn=0x00000000003BC2E0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003BC2E8 string=0x00000000003BC2EC "Q\t"
 *   insn=0x00000000003BC2F4 string=0x00000000003BC2F8 "\n"
 *   insn=0x00000000003BC2FC string=0x00000000003BC300 "8y("
 *   insn=0x00000000003BC30C string=0x00000000001F3D40 "P'"
 *   insn=0x00000000003BC310 string=0x00000000003BC314 ")"
 *   insn=0x00000000003BC314 string=0x00000000003BC318 ")"
 *   insn=0x00000000003BC318 string=0x00000000003BC31C "?"
 *   insn=0x00000000003BC31C string=0x00000000003BC320 "K"
 *   insn=0x00000000003BC320 string=0x00000000003BC428 "3"
 *   insn=0x00000000003BC328 string=0x00000000003BC32C "\t"
 *   insn=0x00000000003BC330 string=0x00000000003BC334 ""
 *   insn=0x00000000003BC334 string=0x00000000003BC338 "e@"
 *   insn=0x00000000003BC33C string=0x00000000003BC340 "(@"
 *   insn=0x00000000003BC33C string=0x00000000003BC34C "\t#E))}@"
 *   insn=0x00000000003BC340 string=0x00000000003BC344 ""
 *   insn=0x00000000003BC344 string=0x00000000003BC348 "("
 *   insn=0x00000000003BC34C string=0x00000000003BC350 ")}@"
 *   insn=0x00000000003BC350 string=0x00000000003BC354 "?"
 *   insn=0x00000000003BC358 string=0x00000000003BC35C ""
 *   insn=0x00000000003BC358 string=0x00000000003BC370 "\t3@"
 *   insn=0x00000000003BC35C string=0x00000000003BC360 "*"
 *   insn=0x00000000003BC360 string=0x00000000003BC364 "\n+"
 *   insn=0x00000000003BC378 string=0x00000000003BC38C ""
 *   insn=0x00000000003BC380 string=0x00000000003BC384 "g"
 *   insn=0x00000000003BC384 string=0x00000000003BC388 "/@"
 *   insn=0x00000000003BC38C string=0x00000000003BC390 "/"
 *   insn=0x00000000003BC3A4 string=0x00000000003BC3A8 "+"
 *   insn=0x00000000003BC3A4 string=0x00000000001F6820 "0'"
 *   insn=0x00000000003BC3A8 string=0x00000000003BC3AC "\t"
 *   insn=0x00000000003BC3AC string=0x00000000003BC3B0 "\n"
 *   insn=0x00000000003BC3B0 string=0x00000000003BC3B4 "\n+"
 *   insn=0x00000000003BC3B4 string=0x00000000003BC3B8 "<y("
 *   insn=0x00000000003BC3C4 string=0x00000000003BC3C8 "9"
 *   insn=0x00000000003BC3C8 string=0x00000000003BC3CC "(@"
 *   insn=0x00000000003BC3CC string=0x00000000003BC3D0 ""
 *   insn=0x00000000003BC3D0 string=0x00000000003BC3D4 "("
 *   insn=0x00000000003BC3D8 string=0x00000000003BC3DC "("
 *   insn=0x00000000003BC3DC string=0x00000000003BC3E0 "\t@"
 *   insn=0x00000000003BC3E8 string=0x00000000003BC3EC "(@"
 *   insn=0x00000000003BC3EC string=0x00000000003BC3F0 ""
 *   insn=0x00000000003BC3F0 string=0x00000000003BC3F4 "("
 *   insn=0x00000000003BC3F8 string=0x00000000003BC3FC "("
 *   insn=0x00000000003BC3FC string=0x00000000003BC400 "@"
 *   insn=0x00000000003BC40C string=0x00000000003BC410 "Z"
 *   insn=0x00000000003BC414 string=0x00000000003BC418 ")"
 *   insn=0x00000000003BC418 string=0x00000000003BC41C ")"
 *   insn=0x00000000003BC41C string=0x00000000003BC420 "_"
 *   insn=0x00000000003BC428 string=0x00000000003BC42C "h"
 *   insn=0x00000000003BC42C string=0x00000000003BC430 ""
 *   insn=0x00000000003BC430 string=0x00000000003BC434 "h"
 *   insn=0x00000000003BC438 string=0x00000000003BC43C "h"
 *   insn=0x00000000003BC440 string=0x00000000003BC444 "\t@"
 *   insn=0x00000000003BC448 string=0x00000000003BC44C "h\n@"
 *   insn=0x00000000003BC44C string=0x00000000003BC450 ""
 *   insn=0x00000000003BC450 string=0x00000000003BC454 "h\n"
 *   insn=0x00000000003BC458 string=0x00000000003BC45C "h"
 *   insn=0x00000000003BC460 string=0x00000000003BC464 "@"
 *   insn=0x00000000003BC4AC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003BC4B0 string=0x00000000003BC4B4 "/"
 *   insn=0x00000000003BC4B0 string=0x00000000003BC530 "h"
 *   insn=0x00000000003BC4BC string=0x00000000003BC4C0 ","
 *   insn=0x00000000003BC4C4 string=0x00000000003BC4C8 "S"
 *   insn=0x00000000003BC4C8 string=0x00000000003BC4CC ")"
 *   insn=0x00000000003BC4D4 string=0x00000000003BC4D8 "v"
 *   insn=0x00000000003BC4DC string=0x00000000003BC4EC "(@"
 *   insn=0x00000000003BC4E0 string=0x00000000003BC52C "3"
 *   insn=0x00000000003BC4E4 string=0x00000000003BC4E8 "9"
 *   insn=0x00000000003BC4EC string=0x00000000003BC4F0 ""
 *   insn=0x00000000003BC4F0 string=0x00000000003BC4F4 "("
 *   insn=0x00000000003BC4F8 string=0x00000000003BC4FC "("
 *   insn=0x00000000003BC4FC string=0x00000000003BC500 "\t@"
 *   insn=0x00000000003BC508 string=0x00000000003BC50C "(@"
 *   insn=0x00000000003BC50C string=0x00000000003BC510 ""
 *   insn=0x00000000003BC510 string=0x00000000003BC514 "("
 *   insn=0x00000000003BC518 string=0x00000000003BC51C "("
 *   insn=0x00000000003BC51C string=0x00000000003BC520 "@"
 *   insn=0x00000000003BC530 string=0x00000000003BC534 ""
 *   insn=0x00000000003BC534 string=0x00000000003BC538 "h"
 *   insn=0x00000000003BC53C string=0x00000000003BC540 "h"
 *   insn=0x00000000003BC540 string=0x00000000003BC544 "\t@"
 *   insn=0x00000000003BC54C string=0x00000000003BC550 "h\n@"
 *   insn=0x00000000003BC550 string=0x00000000003BC554 ""
 *   insn=0x00000000003BC554 string=0x00000000003BC558 "h\n"
 *   insn=0x00000000003BC55C string=0x00000000003BC560 "h"
 *   insn=0x00000000003BC560 string=0x00000000003BC564 "@"
 *   insn=0x00000000003BC574 string=0x00000000003BC578 "uG"
 *   insn=0x00000000003BC598 string=0x00000000003BC59C "["
 *   insn=0x00000000003BC5A0 string=0x00000000003BC5A4 "h"
 *   insn=0x00000000003BC5B8 string=0x00000000003BC5BC "U"
 *   insn=0x00000000003BC5C4 string=0x00000000003BC5C8 "h"
 *   insn=0x00000000003BC5C8 string=0x00000000003BC5CC ""
 *   insn=0x00000000003BC5CC string=0x00000000003BC5D0 "h"
 *   insn=0x00000000003BC5D8 string=0x00000000003BC5DC "M"
 *   insn=0x00000000003BC5E8 string=0x00000000003BC5EC ""
 *   insn=0x00000000003BC5FC string=0x00000000003BC600 "!"
 *   insn=0x00000000003BC61C string=0x00000000001FBC40 "0'"
 *   insn=0x00000000003BC634 string=0x00000000003BC638 "\tA"
 *   insn=0x00000000003BC638 string=0x00000000003BC63C ")"
 *   insn=0x00000000003BC63C string=0x00000000003BC640 ")"
 *   insn=0x00000000003BC640 string=0x00000000003BC644 "*"
 *   insn=0x00000000003BC644 string=0x00000000003BC648 "_"
 *   insn=0x00000000003BC650 string=0x00000000003BC654 "K"
 *   insn=0x00000000003BC650 string=0x00000000003BC684 "*"
 *   insn=0x00000000003BC674 string=0x00000000003BC678 "a"
 *   insn=0x00000000003BC678 string=0x00000000003BC67C "_"
 *   insn=0x00000000003BC688 string=0x00000000003BC68C "_q"
 *   insn=0x00000000003BC69C string=0x00000000003BC6A0 ")A"
 *   insn=0x00000000003BC6A4 string=0x00000000003BC6A8 "`"
 *   insn=0x00000000003BC6B0 string=0x00000000003BC6B4 "i"
 *   insn=0x00000000003BC6B0 string=0x00000000003BC6C0 "\tA"
 *   insn=0x00000000003BC6B4 string=0x00000000003BC6B8 ")"
 *   insn=0x00000000003BC6B8 string=0x00000000003BC6BC "i"
 *   insn=0x00000000003BC6D0 string=0x00000000003BCDAC "3"
 *   insn=0x00000000003BC6D8 string=0x00000000003BC6DC ""
 *   insn=0x00000000003BC6DC string=0x00000000003BC6E0 "H"
 *   insn=0x00000000003BC6F4 string=0x00000000003BC6F8 "~"
 *   insn=0x00000000003BC6F8 string=0x00000000001F58F0 "P'"
 *   insn=0x00000000003BC714 string=0x00000000003BC718 "h"
 *   insn=0x00000000003BC718 string=0x00000000003BC71C ""
 *   insn=0x00000000003BC71C string=0x00000000003BC720 "h"
 *   insn=0x00000000003BC724 string=0x00000000003BC728 "\t!"
 *   insn=0x00000000003BC72C string=0x00000000003BC730 "\t"
 *   insn=0x00000000003BC730 string=0x00000000003BC734 "("
 *   insn=0x00000000003BC740 string=0x00000000003BC744 ":s"
 *   insn=0x00000000003BC748 string=0x00000000003BC74C "?"
 *   insn=0x00000000003BC75C string=0x00000000003BC760 ")A"
 *   insn=0x00000000003BC764 string=0x00000000003BC768 ")C"
 *   insn=0x00000000003BC778 string=0x00000000003BC77C "k"
 *   insn=0x00000000003BC780 string=0x00000000003BCBF8 "h@"
 *   insn=0x00000000003BC784 string=0x00000000003BC788 ")=G"
 *   insn=0x00000000003BC788 string=0x00000000003BC78C "!"
 *   insn=0x00000000003BC790 string=0x00000000003BC794 "\t"
 *   insn=0x00000000003BC790 string=0x00000000003BC7A8 "\t"
 *   insn=0x00000000003BC794 string=0x00000000003BC798 "*"
 *   insn=0x00000000003BC798 string=0x00000000003BC79C "\n"
 *   insn=0x00000000003BC7A4 string=0x00000000003BC7B4 "?"
 *   insn=0x00000000003BC7A8 string=0x00000000003BC7AC "*"
 *   insn=0x00000000003BC7AC string=0x00000000003BC7B0 "\n"
 *   insn=0x00000000003BC7D0 string=0x00000000003BC7D4 "]"
 *   insn=0x00000000003BC7E0 string=0x00000000003BC7E4 ")"
 *   insn=0x00000000003BC7EC string=0x00000000003BC7F0 ")A"
 *   insn=0x00000000003BC7F8 string=0x00000000003BC7FC "6"
 *   insn=0x00000000003BC7F8 string=0x00000000003BC84C "6"
 *   insn=0x00000000003BC800 string=0x00000000003BC804 ""
 *   insn=0x00000000003BC810 string=0x00000000003BC814 "\t@"
 *   insn=0x00000000003BC820 string=0x00000000003BC824 ""
 *   insn=0x00000000003BC830 string=0x00000000003BC834 "@"
 *   insn=0x00000000003BC840 string=0x00000000003BC844 "A"
 *   insn=0x00000000003BC850 string=0x00000000003BC854 ""
 *   insn=0x00000000003BC860 string=0x00000000003BC864 "\t@"
 *   insn=0x00000000003BC870 string=0x00000000003BC874 ""
 *   insn=0x00000000003BC880 string=0x00000000003BC884 "@"
 *   insn=0x00000000003BC898 string=0x00000000003BC89C "\t!"
 *   insn=0x00000000003BC8A0 string=0x00000000003BC8A4 ""
 *   insn=0x00000000003BC8A4 string=0x00000000003BC8A8 "\t"
 *   insn=0x00000000003BC8C0 string=0x00000000003BC8C4 "?"
 *   insn=0x00000000003BC8DC string=0x00000000003BC8E0 "@"
 *   insn=0x00000000003BC8FC string=0x00000000001F6C00 "0'"
 *   insn=0x00000000003BC91C string=0x00000000003BC920 "h"
 *   insn=0x00000000003BC924 string=0x00000000003BC928 "@"
 *   insn=0x00000000003BC948 string=0x00000000003BC94C "*"
 *   insn=0x00000000003BC95C string=0x00000000001F83A0 "0'"
 *   insn=0x00000000003BC964 string=0x00000000003BC968 ")=G"
 *   insn=0x00000000003BC968 string=0x00000000003BC96C "!"
 *   insn=0x00000000003BC970 string=0x00000000003BC974 "\t"
 *   insn=0x00000000003BC970 string=0x00000000003BC9AC "\t"
 *   insn=0x00000000003BC974 string=0x00000000003BC978 "*"
 *   insn=0x00000000003BC978 string=0x00000000003BC97C "\n"
 *   insn=0x00000000003BC980 string=0x00000000003BC984 ""
 *   insn=0x00000000003BC984 string=0x00000000003BC9B8 "Z"
 *   insn=0x00000000003BC988 string=0x00000000003BC98C ")=G"
 *   insn=0x00000000003BC98C string=0x00000000003BC990 "!"
 *   insn=0x00000000003BC990 string=0x00000000003BC994 "\t"
 *   insn=0x00000000003BC994 string=0x00000000003BC998 "\t"
 *   insn=0x00000000003BC994 string=0x00000000003BC9D4 "\t"
 *   insn=0x00000000003BC998 string=0x00000000003BC99C "*"
 *   insn=0x00000000003BC99C string=0x00000000003BC9A0 "\n"
 *   insn=0x00000000003BC9A8 string=0x00000000003BC9E0 "?"
 *   insn=0x00000000003BC9AC string=0x00000000003BC9B0 "*"
 *   insn=0x00000000003BC9B0 string=0x00000000003BC9B4 "\n"
 *   insn=0x00000000003BC9B8 string=0x00000000003BC9BC "Z"
 *   insn=0x00000000003BC9BC string=0x00000000003BC9C0 "?"
 *   insn=0x00000000003BC9C8 string=0x00000000003BC9CC "v"
 *   insn=0x00000000003BC9CC string=0x00000000003BC9D0 "I"
 *   insn=0x00000000003BC9D4 string=0x00000000003BC9D8 "*"
 *   insn=0x00000000003BC9D8 string=0x00000000003BC9DC "\n"
 *   insn=0x00000000003BC9E0 string=0x00000000003BC9E4 ",\t"
 *   insn=0x00000000003BC9E8 string=0x00000000003BC9EC "n"
 *   insn=0x00000000003BC9EC string=0x00000000003BC9F0 "F"
 *   insn=0x00000000003BC9F4 string=0x00000000003BC9F8 ")#\t"
 *   insn=0x00000000003BC9F8 string=0x00000000003BC9FC ")@"
 *   insn=0x00000000003BC9FC string=0x00000000003BCA00 "?\t"
 *   insn=0x00000000003BCA04 string=0x00000000003BCA08 "?"
 *   insn=0x00000000003BCA08 string=0x00000000003BCA0C "A"
 *   insn=0x00000000003BCA10 string=0x00000000003BCA14 ")#\t"
 *   insn=0x00000000003BCA14 string=0x00000000003BCA18 ")E@9"
 *   insn=0x00000000003BCA24 string=0x00000000003BCA28 ")#\t"
 *   insn=0x00000000003BCA28 string=0x00000000003BCA2C ")E@9\t"
 *   insn=0x00000000003BCA2C string=0x00000000003BCA30 "\t"
 *   insn=0x00000000003BCA34 string=0x00000000003BCA38 "!#\t"
 *   insn=0x00000000003BCA3C string=0x00000000003BCA40 "4"
 *   insn=0x00000000003BCA48 string=0x00000000003BCA4C "h@"
 *   insn=0x00000000003BCA48 string=0x00000000003BCA58 "x"
 *   insn=0x00000000003BCA4C string=0x00000000003BCA50 ""
 *   insn=0x00000000003BCA50 string=0x00000000003BCA54 "h"
 *   insn=0x00000000003BCA58 string=0x00000000003BCA5C "sA9h"
 *   insn=0x00000000003BCA58 string=0x00000000003BCA64 "{\n"
 *   insn=0x00000000003BCA5C string=0x00000000003BCA60 "h"
 *   insn=0x00000000003BCA64 string=0x00000000003BCA68 "h@"
 *   insn=0x00000000003BCA68 string=0x00000000003BCA6C ""
 *   insn=0x00000000003BCA6C string=0x00000000003BCA70 "h"
 *   insn=0x00000000003BCA74 string=0x00000000003BCA78 "h"
 *   insn=0x00000000003BCA78 string=0x00000000003BCA7C "\t@"
 *   insn=0x00000000003BCA84 string=0x00000000003BCA88 "h@"
 *   insn=0x00000000003BCA88 string=0x00000000003BCA8C ""
 *   insn=0x00000000003BCA8C string=0x00000000003BCA90 "h"
 *   insn=0x00000000003BCA94 string=0x00000000003BCA98 "h"
 *   insn=0x00000000003BCA98 string=0x00000000003BCA9C "@"
 *   insn=0x00000000003BCAA4 string=0x00000000003BCAA8 "B"
 *   insn=0x00000000003BCADC string=0x00000000003BCAE0 "Z"
 *   insn=0x00000000003BCAE0 string=0x00000000003BCAE4 "Z"
 *   insn=0x00000000003BCAF0 string=0x00000000003BC964 "I"
 *   insn=0x00000000003BCB00 string=0x00000000003BCB04 "!"
 *   insn=0x00000000003BCB04 string=0x00000000003BC988 "I"
 *   insn=0x00000000003BCB0C string=0x00000000003BCB10 ")A"
 *   insn=0x00000000003BCB14 string=0x00000000003BCB18 "@"
 *   insn=0x00000000003BCB20 string=0x00000000003BCB24 "i@"
 *   insn=0x00000000003BCB20 string=0x00000000003BCB30 "A"
 *   insn=0x00000000003BCB24 string=0x00000000003BCB28 ")"
 *   insn=0x00000000003BCB28 string=0x00000000003BCB2C "i"
 *   insn=0x00000000003BCB44 string=0x00000000003BCB48 ""
 *   insn=0x00000000003BCB48 string=0x00000000003BCB4C "H"
 *   insn=0x00000000003BCB60 string=0x00000000003BCB64 "c"
 *   insn=0x00000000003BCB80 string=0x00000000003BCB84 "h@"
 *   insn=0x00000000003BCB84 string=0x00000000003BCB88 ""
 *   insn=0x00000000003BCB88 string=0x00000000003BCB8C "h"
 *   insn=0x00000000003BCB90 string=0x00000000003BCB94 "\t!"
 *   insn=0x00000000003BCB98 string=0x00000000003BCB9C ""
 *   insn=0x00000000003BCB9C string=0x00000000003BCBA0 "\t"
 *   insn=0x00000000003BCBB4 string=0x00000000003BCBBC "9"
 *   insn=0x00000000003BCBBC string=0x00000000003BCBC0 ")"
 *   insn=0x00000000003BCBC0 string=0x00000000003BCBC4 ")"
 *   insn=0x00000000003BCBC4 string=0x00000000003BCBC8 ")}\n"
 *   insn=0x00000000003BCBC8 string=0x00000000003BCBCC "?"
 *   insn=0x00000000003BCBCC string=0x00000000003BCBD0 "#"
 *   insn=0x00000000003BCBD8 string=0x00000000003BCBDC "v\t"
 *   insn=0x00000000003BCBDC string=0x00000000003BCBE0 "Z"
 *   insn=0x00000000003BCBE8 string=0x00000000003BCBEC "?"
 *   insn=0x00000000003BCBEC string=0x00000000003BCBF0 "A"
 *   insn=0x00000000003BCBF0 string=0x00000000003BCBF4 "W"
 *   insn=0x00000000003BCBF8 string=0x00000000003BCBFC "!"
 *   insn=0x00000000003BCBFC string=0x00000000003BCC00 "h"
 *   insn=0x00000000003BCC08 string=0x00000000003BCC0C "G"
 *   insn=0x00000000003BCC18 string=0x00000000003BCC1C "h"
 *   insn=0x00000000003BCC1C string=0x00000000003BCC20 "_"
 *   insn=0x00000000003BCC28 string=0x00000000003BCC2C "Y"
 *   insn=0x00000000003BCC2C string=0x00000000001F5190 "P'"
 *   insn=0x00000000003BCC38 string=0x00000000003BCC40 "H"
 *   insn=0x00000000003BCC40 string=0x00000000003BCC44 ""
 *   insn=0x00000000003BCC4C string=0x00000000003BCC9C "I"
 *   insn=0x00000000003BCC6C string=0x00000000003BCC70 "h'@"
 *   insn=0x00000000003BCC70 string=0x00000000003BCC74 "?"
 *   insn=0x00000000003BCC78 string=0x00000000003BCC7C "j@"
 *   insn=0x00000000003BCC7C string=0x00000000003BCC80 "?"
 *   insn=0x00000000003BCC9C string=0x00000000003BCCA0 ")=G"
 *   insn=0x00000000003BCCA8 string=0x00000000003BCCAC "\t"
 *   insn=0x00000000003BCCA8 string=0x00000000003BCCC0 "\t"
 *   insn=0x00000000003BCCAC string=0x00000000003BCCB0 "*"
 *   insn=0x00000000003BCCB0 string=0x00000000003BCCB4 "\n"
 *   insn=0x00000000003BCCBC string=0x00000000003BCCCC "?"
 *   insn=0x00000000003BCCC0 string=0x00000000003BCCC4 "*"
 *   insn=0x00000000003BCCC4 string=0x00000000003BCCC8 "\n"
 *   insn=0x00000000003BCCE4 string=0x00000000003BCCE8 "I"
 *   insn=0x00000000003BCCE8 string=0x00000000003BCCEC ")"
 *   insn=0x00000000003BCCF8 string=0x00000000003BCCFC "A"
 *   insn=0x00000000003BCCFC string=0x00000000003BC784 "I"
 *   insn=0x00000000003BCD00 string=0x00000000003BCD04 "6"
 *   insn=0x00000000003BCD08 string=0x00000000003BCD0C ""
 *   insn=0x00000000003BCD18 string=0x00000000003BCD1C "\t@"
 *   insn=0x00000000003BCD28 string=0x00000000003BCD2C ""
 *   insn=0x00000000003BCD38 string=0x00000000003BCD3C "@"
 *   insn=0x00000000003BCD58 string=0x00000000001F7800 "0'"
 *   insn=0x00000000003BCD64 string=0x00000000003BCD68 "4"
 *   insn=0x00000000003BCD6C string=0x00000000003BCD70 ""
 *   insn=0x00000000003BCD7C string=0x00000000003BCD80 "\t@"
 *   insn=0x00000000003BCD8C string=0x00000000003BCD90 ""
 *   insn=0x00000000003BCD9C string=0x00000000003BCDA0 "@"
 *   insn=0x00000000003BCDAC string=0x00000000003BCDB0 "h"
 *   insn=0x00000000003BCDAC string=0x00000000003BCDF0 "h"
 *   insn=0x00000000003BCDB0 string=0x00000000003BCDB4 ""
 *   insn=0x00000000003BCDB4 string=0x00000000003BCDB8 "h"
 *   insn=0x00000000003BCDBC string=0x00000000003BCDC0 "h"
 *   insn=0x00000000003BCDC4 string=0x00000000003BCDC8 "\t@"
 *   insn=0x00000000003BCDCC string=0x00000000003BCDD0 "h\n@"
 *   insn=0x00000000003BCDD0 string=0x00000000003BCDD4 ""
 *   insn=0x00000000003BCDD4 string=0x00000000003BCDD8 "h\n"
 *   insn=0x00000000003BCDDC string=0x00000000003BCDE0 "h"
 *   insn=0x00000000003BCDE4 string=0x00000000003BCDE8 "@"
 *   insn=0x00000000003BCDF8 string=0x00000000003BCDFC "!"
 *   insn=0x00000000003BCDFC string=0x00000000003BCE20 ","
 *   insn=0x00000000003BCE20 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003BCE2C string=0x00000000003BD0DC "3"
 *   insn=0x00000000003BCE40 string=0x00000000003BD0E0 "h"
 *   insn=0x00000000003BCE54 string=0x00000000003BCE58 "{"
 *   insn=0x00000000003BCE5C string=0x00000000003BCFAC "I"
 *   insn=0x00000000003BCE68 string=0x00000000003BCE6C "u"
 *   insn=0x00000000003BCE6C string=0x00000000003BD040 "6"
 *   insn=0x00000000003BCE80 string=0x00000000003BCE84 "{"
 *   insn=0x00000000003BCE84 string=0x00000000003BCE88 "n"
 *   insn=0x00000000003BCE84 string=0x00000000003BCEF0 "h@"
 *   insn=0x00000000003BCE90 string=0x00000000003BCE94 "U"
 *   insn=0x00000000003BCE9C string=0x00000000003BCEA0 "(a"
 *   insn=0x00000000003BCEA4 string=0x00000000003BCEA8 "a"
 *   insn=0x00000000003BCEA8 string=0x00000000003BCF34 "J"
 *   insn=0x00000000003BCEB8 string=0x00000000003BCEBC "I"
 *   insn=0x00000000003BCEBC string=0x00000000003BCEC0 ")=G"
 *   insn=0x00000000003BCEC0 string=0x00000000003BCEC4 "!"
 *   insn=0x00000000003BCEC8 string=0x00000000003BCECC "\t"
 *   insn=0x00000000003BCEC8 string=0x00000000003BCF84 "\t"
 *   insn=0x00000000003BCECC string=0x00000000003BCED0 "*"
 *   insn=0x00000000003BCED0 string=0x00000000003BCED4 "\n"
 *   insn=0x00000000003BCED8 string=0x00000000003BCEDC "?"
 *   insn=0x00000000003BCEDC string=0x00000000003BCEE0 "l"
 *   insn=0x00000000003BCEE4 string=0x00000000003BCEE8 "/"
 *   insn=0x00000000003BCEF0 string=0x00000000003BCEF4 ""
 *   insn=0x00000000003BCEF4 string=0x00000000003BCEF8 "h"
 *   insn=0x00000000003BCEF8 string=0x00000000003BCEFC "!\n"
 *   insn=0x00000000003BCEFC string=0x00000000003BCF00 "h"
 *   insn=0x00000000003BCF00 string=0x00000000003BCF04 "\t@"
 *   insn=0x00000000003BCF0C string=0x00000000003BCF10 "h@"
 *   insn=0x00000000003BCF10 string=0x00000000003BCF14 ""
 *   insn=0x00000000003BCF14 string=0x00000000003BCF18 "h"
 *   insn=0x00000000003BCF18 string=0x00000000003BCF1C "!\t"
 *   insn=0x00000000003BCF1C string=0x00000000003BCF20 "h"
 *   insn=0x00000000003BCF20 string=0x00000000003BCF24 "@"
 *   insn=0x00000000003BCF2C string=0x00000000003BCF30 "D"
 *   insn=0x00000000003BCF34 string=0x00000000003BCF38 "J=G"
 *   insn=0x00000000003BCF38 string=0x00000000003BCF3C ")!"
 *   insn=0x00000000003BCF40 string=0x00000000003BCF44 "*"
 *   insn=0x00000000003BCF40 string=0x00000000003BCF58 "*"
 *   insn=0x00000000003BCF44 string=0x00000000003BCF48 "K"
 *   insn=0x00000000003BCF48 string=0x00000000003BCF4C "+"
 *   insn=0x00000000003BCF54 string=0x00000000003BCF64 "U"
 *   insn=0x00000000003BCF58 string=0x00000000003BCF5C "K"
 *   insn=0x00000000003BCF5C string=0x00000000003BCF60 "+"
 *   insn=0x00000000003BCF68 string=0x00000000003BCF6C "_"
 *   insn=0x00000000003BCF78 string=0x00000000003BCF7C "\n"
 *   insn=0x00000000003BCF84 string=0x00000000003BCF88 "*"
 *   insn=0x00000000003BCF88 string=0x00000000003BCF8C "\n"
 *   insn=0x00000000003BCF8C string=0x00000000003BCF90 "?"
 *   insn=0x00000000003BCFA4 string=0x00000000003BCFA8 "7"
 *   insn=0x00000000003BCFAC string=0x00000000003BCFB0 ")"
 *   insn=0x00000000003BCFC4 string=0x00000000003BCFC8 "I"
 *   insn=0x00000000003BCFC8 string=0x00000000003BCFCC ")=G"
 *   insn=0x00000000003BCFCC string=0x00000000003BCFD0 "!"
 *   insn=0x00000000003BCFD4 string=0x00000000003BCFD8 "\t"
 *   insn=0x00000000003BCFD4 string=0x00000000003BD128 "\t"
 *   insn=0x00000000003BCFD8 string=0x00000000003BCFDC "*"
 *   insn=0x00000000003BCFDC string=0x00000000003BCFE0 "\n"
 *   insn=0x00000000003BCFE4 string=0x00000000003BCFE8 "?"
 *   insn=0x00000000003BCFE8 string=0x00000000003BCFEC "l"
 *   insn=0x00000000003BCFF8 string=0x00000000003BCFFC "5"
 *   insn=0x00000000003BD000 string=0x00000000003BD004 ""
 *   insn=0x00000000003BD010 string=0x00000000003BD014 "\t@"
 *   insn=0x00000000003BD020 string=0x00000000003BD024 ""
 *   insn=0x00000000003BD030 string=0x00000000003BD034 "@"
 *   insn=0x00000000003BD044 string=0x00000000003BD048 ""
 *   insn=0x00000000003BD054 string=0x00000000003BD058 "\t@"
 *   insn=0x00000000003BD064 string=0x00000000003BD068 ""
 *   insn=0x00000000003BD074 string=0x00000000003BD078 "@"
 *   insn=0x00000000003BD094 string=0x00000000003BD098 "4"
 *   insn=0x00000000003BD09C string=0x00000000003BD0A0 ""
 *   insn=0x00000000003BD0AC string=0x00000000003BD0B0 "\t@"
 *   insn=0x00000000003BD0BC string=0x00000000003BD0C0 ""
 *   insn=0x00000000003BD0CC string=0x00000000003BD0D0 "@"
 *   insn=0x00000000003BD0E0 string=0x00000000003BD0E4 ""
 *   insn=0x00000000003BD0E4 string=0x00000000003BD0E8 "h"
 *   insn=0x00000000003BD0EC string=0x00000000003BD0F0 "h"
 *   insn=0x00000000003BD0F0 string=0x00000000003BD0F4 "\t@"
 *   insn=0x00000000003BD0FC string=0x00000000003BD100 "h\n@"
 *   insn=0x00000000003BD100 string=0x00000000003BD104 ""
 *   insn=0x00000000003BD104 string=0x00000000003BD108 "h\n"
 *   insn=0x00000000003BD10C string=0x00000000003BD110 "h"
 *   insn=0x00000000003BD110 string=0x00000000003BD114 "@"
 *   insn=0x00000000003BD128 string=0x00000000003BD12C "*"
 *   insn=0x00000000003BD12C string=0x00000000003BD130 "\n"
 *   insn=0x00000000003BD130 string=0x00000000003BD134 "?"
 *   insn=0x00000000003BD154 string=0x00000000003BD158 "T"
 *   insn=0x00000000003BD164 string=0x00000000003BD168 "`"
 *   insn=0x00000000003BD168 string=0x00000000003BD16C "h&B"
 *   insn=0x00000000003BD16C string=0x00000000003BD170 "a"
 *   insn=0x00000000003BD170 string=0x00000000003BD174 "j.D"
 *   insn=0x00000000003BD190 string=0x00000000003BD194 "`"
 *   insn=0x00000000003BD198 string=0x00000000003BD19C "u&@"
 *   insn=0x00000000003BD19C string=0x00000000003BD1A0 "h"
 *   insn=0x00000000003BD1AC string=0x00000000003BD1C8 ":"
 *   insn=0x00000000003BD1B4 string=0x00000000003BD1B8 ">"
 *   insn=0x00000000003BD1C0 string=0x00000000003BD1C4 "`"
 *   insn=0x00000000003BD1D8 string=0x00000000003BD1F0 "8"
 *   insn=0x00000000003BD1FC string=0x00000000003BD200 "u&@"
 *   insn=0x00000000003BD200 string=0x00000000003BD204 "i"
 *   insn=0x00000000003BD208 string=0x00000000003BD20C "?"
 *   insn=0x00000000003BD210 string=0x00000000003BD214 "6!"
 *   insn=0x00000000003BD218 string=0x00000000003BD21C "%"
 *   insn=0x00000000003BD224 string=0x00000000003BD228 "h"
 *   insn=0x00000000003BD22C string=0x00000000003BD230 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Map::SaveToProtobufMessage(__int64 this, Caver::Proto::Map *a2)
{
  __int64 v2; // x21
  _QWORD *v4; // x19
  Caver::MapZone *v5; // x23
  int v6; // w8
  __int64 v7; // x9
  __int64 v8; // x8
  int *v9; // x24
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x8
  __int64 v13; // x22
  __int64 v14; // x26
  __int64 v15; // x8
  _QWORD *v16; // x25
  Caver::MapNode *v17; // x27
  int v18; // w8
  __int64 v19; // x9
  __int64 v20; // x8
  Caver::Proto::MapNode *v21; // x28
  __int64 v22; // x8
  __int64 v23; // x9
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x8
  __int64 v27; // x8
  google::protobuf::internal::RepeatedPtrFieldBase *v28; // [xsp+140h] [xbp-68h]
  __int64 v29; // [xsp+148h] [xbp-60h]

  v2 = *(_QWORD *)(this + 96);
  v29 = this + 80;
  if ( this + 80 != v2 )
  {
    v28 = (Caver::Proto::Map *)((char *)a2 + 16);
    do
    {
      v5 = *(Caver::MapZone **)(v2 + 40);
      v4 = *(_QWORD **)(v2 + 48);
      if ( v4 )
        ++v4[1];
      v6 = *((_DWORD *)a2 + 7);
      v7 = *((int *)a2 + 6);
      if ( (int)v7 >= v6 )
      {
        if ( v6 == *((_DWORD *)a2 + 8) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v28, v6 + 1);
          v6 = *((_DWORD *)a2 + 7);
        }
        *((_DWORD *)a2 + 7) = v6 + 1;
        v9 = (int *)operator new(0x70u);
        Caver::Proto::MapZone::MapZone((Caver::Proto::MapZone *)v9);
        v10 = *((int *)a2 + 6);
        v11 = *((_QWORD *)a2 + 2);
        *((_DWORD *)a2 + 6) = v10 + 1;
        *(_QWORD *)(v11 + 8 * v10) = v9;
      }
      else
      {
        v8 = *((_QWORD *)a2 + 2);
        *((_DWORD *)a2 + 6) = v7 + 1;
        v9 = *(int **)(v8 + 8 * v7);
      }
      Caver::MapZone::SaveToProtobufMessage(v5, (Caver::Proto::MapZone *)v9);
      v12 = *((_QWORD *)v5 + 2);
      if ( (int)((unsigned __int64)(*((_QWORD *)v5 + 3) - v12) >> 4) >= 1 )
      {
        v13 = 0;
        v14 = 0;
        do
        {
          v15 = v12 + v13;
          v17 = *(Caver::MapNode **)v15;
          v16 = *(_QWORD **)(v15 + 8);
          if ( v16 )
            ++v16[1];
          v18 = v9[11];
          v19 = v9[10];
          if ( (int)v19 >= v18 )
          {
            if ( v18 == v9[12] )
            {
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
                (google::protobuf::internal::RepeatedPtrFieldBase *)(v9 + 8),
                v18 + 1);
              v18 = v9[11];
            }
            v9[11] = v18 + 1;
            v21 = (Caver::Proto::MapNode *)operator new(0x88u);
            Caver::Proto::MapNode::MapNode(v21);
            v22 = v9[10];
            v23 = *((_QWORD *)v9 + 4);
            v9[10] = v22 + 1;
            *(_QWORD *)(v23 + 8 * v22) = v21;
          }
          else
          {
            v20 = *((_QWORD *)v9 + 4);
            v9[10] = v19 + 1;
            v21 = *(Caver::Proto::MapNode **)(v20 + 8 * v19);
          }
          Caver::MapNode::SaveToProtobufMessage(v17, v21);
          if ( v16 )
          {
            v24 = v16[1] - 1LL;
            v16[1] = v24;
            if ( !v24 )
            {
              (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
              v25 = v16[2] - 1LL;
              v16[2] = v25;
              if ( !v25 )
                (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
            }
          }
          v12 = *((_QWORD *)v5 + 2);
          ++v14;
          v13 += 16;
        }
        while ( v14 < (int)((unsigned __int64)(*((_QWORD *)v5 + 3) - v12) >> 4) );
      }
      if ( v4 )
      {
        v26 = v4[1] - 1LL;
        v4[1] = v26;
        if ( !v26 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
          v27 = v4[2] - 1LL;
          v4[2] = v27;
          if ( !v27 )
            (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
        }
      }
      this = sub_54C6A0(v2);
      v2 = this;
    }
    while ( v29 != this );
  }
  return this;
}


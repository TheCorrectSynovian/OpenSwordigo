/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BBE60
 * Mangled: _ZN5Caver22ProfileManager_Android27HandleDownloadedProfileDataERKSs
 * Demangled: Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F5830  Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&)
 *
 * Callees: 31
 *   0x00000000001F3450  Caver::PlayerProfile::InitWithIdentifier(std::string const&)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F8A60  Caver::PlayerProfile::LoadGameState(void)
 *   0x00000000001F9560  boost::shared_ptr<Caver::Proto::PlayerProfile>::shared_ptr<Caver::Proto::PlayerProfile>(Caver::Proto::PlayerProfile *)
 *   0x00000000001F9DB0  Caver::PlayerProfile::PlayerProfile(void)
 *   0x00000000001FB9E0  google::protobuf::MessageLite::ParseFromString(std::string const&)
 *   0x00000000001FC010  Caver::ProfileManager::ProfileWithIdentifier(std::string const&)
 *   0x00000000001FC5D0  std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_erase(std::_Rb_tree_node<Caver::IProfileManagerDelegate *> *)
 *   0x00000000001FCD30  Caver::ProfileManager::AddProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000001FD830  Caver::PlayerProfile::Load(void)
 *   0x00000000001FDF50  Caver::PlayerProfile::LocalFilePath(void)
 *   0x00000000001FEDE0  Caver::Proto::PlayerProfile::PlayerProfile(void)
 *   0x00000000001FFEB0  std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_copy(std::_Rb_tree_node<Caver::IProfileManagerDelegate *> const*,std::_Rb_tree_node<Caver::IProfileManagerDelegate *>*)
 *   0x0000000000201490  boost::detail::shared_count::shared_count<Caver::PlayerProfile>(Caver::PlayerProfile *)
 *   0x0000000000201760  .memcpy
 *   0x0000000000201F00  Caver::ProfileStats::ProfileStats(Caver::PlayerProfile *)
 *   0x0000000000202230  Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x000000000056918C  sub_56918C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 230
 *   insn=0x00000000004BBE78 string=0x00000000004BBE7C "X"
 *   insn=0x00000000004BBE80 string=0x00000000004BBE84 ""
 *   insn=0x00000000004BBE9C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004BBEB4 string=0x00000000001F9560 "0'"
 *   insn=0x00000000004BBEB8 string=0x00000000004BBEBC ""
 *   insn=0x00000000004BBEBC string=0x00000000004BBEC0 "("
 *   insn=0x00000000004BBECC string=0x00000000001FB9E0 "0'"
 *   insn=0x00000000004BBED8 string=0x00000000004BBEDC "("
 *   insn=0x00000000004BBEDC string=0x00000000004BBEE0 ""
 *   insn=0x00000000004BBEE0 string=0x00000000004BBEE4 ""
 *   insn=0x00000000004BBEF8 string=0x00000000004BBEFC "E"
 *   insn=0x00000000004BBEFC string=0x00000000004BBF00 "Y"
 *   insn=0x00000000004BBEFC string=0x00000000001FC010 "0'"
 *   insn=0x00000000004BBF04 string=0x00000000004BBF08 "9"
 *   insn=0x00000000004BBF14 string=0x00000000004BBF18 "(c"
 *   insn=0x00000000004BBF34 string=0x00000000004BBF38 "W"
 *   insn=0x00000000004BBF6C string=0x00000000004BBF70 ""
 *   insn=0x00000000004BBF70 string=0x00000000004BBF74 "H"
 *   insn=0x00000000004BBF74 string=0x0000000000583734 "o"
 *   insn=0x00000000004BBF84 string=0x00000000004BBF88 "  ""
 *   insn=0x00000000004BBF88 string=0x00000000004BBF8C "m"
 *   insn=0x00000000004BBF8C string=0x00000000004BC298 "("
 *   insn=0x00000000004BBFA0 string=0x00000000004BC2F0 "I"
 *   insn=0x00000000004BBFAC string=0x00000000004BBFB0 "!"
 *   insn=0x00000000004BBFB0 string=0x00000000004BC314 "I"
 *   insn=0x00000000004BBFC4 string=0x00000000004BBFC8 "z"
 *   insn=0x00000000004BBFC8 string=0x00000000001F9DB0 "0'"
 *   insn=0x00000000004BBFD8 string=0x00000000004BBFDC "-"
 *   insn=0x00000000004BBFE8 string=0x00000000004BBFEC "Y"
 *   insn=0x00000000004BBFEC string=0x00000000004BBFF0 "hZ@"
 *   insn=0x00000000004BC000 string=0x00000000004BC004 "i""
 *   insn=0x00000000004BC004 string=0x00000000004BC008 "6"
 *   insn=0x00000000004BC008 string=0x00000000004BC04C "`"
 *   insn=0x00000000004BC00C string=0x00000000004BC010 ""
 *   insn=0x00000000004BC01C string=0x00000000004BC020 "\t@"
 *   insn=0x00000000004BC02C string=0x00000000004BC030 ""
 *   insn=0x00000000004BC03C string=0x00000000004BC040 "@"
 *   insn=0x00000000004BC054 string=0x00000000001F3450 "P'"
 *   insn=0x00000000004BC058 string=0x00000000004BC05C "z"
 *   insn=0x00000000004BC064 string=0x00000000004BC068 "B"
 *   insn=0x00000000004BC068 string=0x00000000004BC06C "H@"
 *   insn=0x00000000004BC068 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004BC06C string=0x00000000004BC070 "@"
 *   insn=0x00000000004BC07C string=0x00000000004BC080 "@@"
 *   insn=0x00000000004BC07C string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004BC090 string=0x00000000004BC094 "`"
 *   insn=0x00000000004BC0A0 string=0x00000000001FDF50 "0'"
 *   insn=0x00000000004BC0AC string=0x00000000004BC0B0 "`"
 *   insn=0x00000000004BC0C0 string=0x00000000004BC0C4 "`"
 *   insn=0x00000000004BC0C0 string=0x00000000004BC3A0 "I"
 *   insn=0x00000000004BC0C8 string=0x00000000001FD830 "0'"
 *   insn=0x00000000004BC0D8 string=0x00000000004BC114 "v"
 *   insn=0x00000000004BC0E4 string=0x00000000004BC0E8 "\t@"
 *   insn=0x00000000004BC0F4 string=0x00000000004BC0F8 ""
 *   insn=0x00000000004BC104 string=0x00000000004BC108 "@"
 *   insn=0x00000000004BC114 string=0x00000000004BC118 "`"
 *   insn=0x00000000004BC118 string=0x00000000004BC11C "Q"
 *   insn=0x00000000004BC11C string=0x00000000001F8A60 "0'"
 *   insn=0x00000000004BC128 string=0x00000000001FCD30 "0'"
 *   insn=0x00000000004BC14C string=0x00000000004BC150 "X"
 *   insn=0x00000000004BC174 string=0x00000000004BC178 "\t@"
 *   insn=0x00000000004BC194 string=0x00000000004BC198 ""
 *   insn=0x00000000004BC198 string=0x00000000004BC19C ""
 *   insn=0x00000000004BC1AC string=0x00000000004BC1B0 "<A"
 *   insn=0x00000000004BC1C8 string=0x00000000001FC5D0 "0'"
 *   insn=0x00000000004BC1CC string=0x00000000004BC1D0 "4"
 *   insn=0x00000000004BC1D4 string=0x00000000004BC1D8 ""
 *   insn=0x00000000004BC1E4 string=0x00000000004BC1E8 "\t@"
 *   insn=0x00000000004BC1F4 string=0x00000000004BC1F8 ""
 *   insn=0x00000000004BC204 string=0x00000000004BC208 "@"
 *   insn=0x00000000004BC220 string=0x00000000004BC338 "I"
 *   insn=0x00000000004BC224 string=0x00000000004BC228 "4"
 *   insn=0x00000000004BC228 string=0x00000000004BC26C ""
 *   insn=0x00000000004BC22C string=0x00000000004BC230 ""
 *   insn=0x00000000004BC23C string=0x00000000004BC240 "\t@"
 *   insn=0x00000000004BC24C string=0x00000000004BC250 ""
 *   insn=0x00000000004BC25C string=0x00000000004BC260 "@"
 *   insn=0x00000000004BC298 string=0x00000000005837A4 "o"
 *   insn=0x00000000004BC2A0 string=0x00000000004BC2A4 "   "
 *   insn=0x00000000004BC2A4 string=0x00000000004BC2A8 ""
 *   insn=0x00000000004BC2BC string=0x00000000004BC2C0 "@ `"
 *   insn=0x00000000004BC2C0 string=0x00000000004BC2C4 "l"
 *   insn=0x00000000004BC2D0 string=0x00000000004BC2D4 "("
 *   insn=0x00000000004BC2D4 string=0x00000000004BC2D8 "_"
 *   insn=0x00000000004BC2E0 string=0x00000000004BC2E4 "`"
 *   insn=0x00000000004BC2E0 string=0x00000000001F5190 "P'"
 *   insn=0x00000000004BC2E8 string=0x00000000004BC2EC "*"
 *   insn=0x00000000004BC2F0 string=0x00000000004BC2F4 ")=G"
 *   insn=0x00000000004BC2F4 string=0x00000000004BC2F8 "!"
 *   insn=0x00000000004BC2F8 string=0x00000000004BC2FC "\t"
 *   insn=0x00000000004BC2FC string=0x00000000004BC300 "\t"
 *   insn=0x00000000004BC2FC string=0x00000000004BC35C "\t"
 *   insn=0x00000000004BC300 string=0x00000000004BC304 "*"
 *   insn=0x00000000004BC304 string=0x00000000004BC308 "\n"
 *   insn=0x00000000004BC310 string=0x00000000004BC368 "?"
 *   insn=0x00000000004BC314 string=0x00000000004BC318 ")=G"
 *   insn=0x00000000004BC318 string=0x00000000004BC31C "!"
 *   insn=0x00000000004BC320 string=0x00000000004BC324 "\t"
 *   insn=0x00000000004BC320 string=0x00000000004BC37C "\t"
 *   insn=0x00000000004BC324 string=0x00000000004BC328 "*"
 *   insn=0x00000000004BC328 string=0x00000000004BC32C "\n"
 *   insn=0x00000000004BC334 string=0x00000000004BC388 "?"
 *   insn=0x00000000004BC338 string=0x00000000004BC33C ")=G"
 *   insn=0x00000000004BC33C string=0x00000000004BC340 "!"
 *   insn=0x00000000004BC340 string=0x00000000004BC344 "\t"
 *   insn=0x00000000004BC344 string=0x00000000004BC348 "\t"
 *   insn=0x00000000004BC344 string=0x00000000004BC3C4 "\t"
 *   insn=0x00000000004BC348 string=0x00000000004BC34C "*"
 *   insn=0x00000000004BC34C string=0x00000000004BC350 "\n"
 *   insn=0x00000000004BC358 string=0x00000000004BC3D0 "?"
 *   insn=0x00000000004BC35C string=0x00000000004BC360 "*"
 *   insn=0x00000000004BC360 string=0x00000000004BC364 "\n"
 *   insn=0x00000000004BC374 string=0x00000000004BC378 ""
 *   insn=0x00000000004BC37C string=0x00000000004BC380 "*"
 *   insn=0x00000000004BC380 string=0x00000000004BC384 "\n"
 *   insn=0x00000000004BC388 string=0x00000000004BC38C "L"
 *   insn=0x00000000004BC3A0 string=0x00000000004BC3A4 ")=G"
 *   insn=0x00000000004BC3A4 string=0x00000000004BC3A8 "!"
 *   insn=0x00000000004BC3A8 string=0x00000000004BC3AC "\t"
 *   insn=0x00000000004BC3AC string=0x00000000004BC3B0 "\t"
 *   insn=0x00000000004BC3AC string=0x00000000004BC3EC "\t"
 *   insn=0x00000000004BC3B0 string=0x00000000004BC3B4 "*"
 *   insn=0x00000000004BC3B4 string=0x00000000004BC3B8 "\n"
 *   insn=0x00000000004BC3C0 string=0x00000000004BC3F8 "?"
 *   insn=0x00000000004BC3C4 string=0x00000000004BC3C8 "*"
 *   insn=0x00000000004BC3C8 string=0x00000000004BC3CC "\n"
 *   insn=0x00000000004BC3E0 string=0x00000000004BC3E4 "T"
 *   insn=0x00000000004BC3EC string=0x00000000004BC3F0 "*"
 *   insn=0x00000000004BC3F0 string=0x00000000004BC3F4 "\n"
 *   insn=0x00000000004BC3F8 string=0x00000000004BC3FC "L"
 *   insn=0x00000000004BC404 string=0x00000000004BC408 "/"
 *   insn=0x00000000004BC40C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004BC414 string=0x00000000004BC418 "(a"
 *   insn=0x00000000004BC41C string=0x00000000004BC420 "@\n"
 *   insn=0x00000000004BC420 string=0x00000000004BC424 "J"
 *   insn=0x00000000004BC424 string=0x00000000004BC428 "J=G"
 *   insn=0x00000000004BC428 string=0x00000000004BC42C ")!"
 *   insn=0x00000000004BC430 string=0x00000000004BC434 "*"
 *   insn=0x00000000004BC430 string=0x00000000004BC4E4 "*"
 *   insn=0x00000000004BC434 string=0x00000000004BC438 "K"
 *   insn=0x00000000004BC438 string=0x00000000004BC43C "+"
 *   insn=0x00000000004BC440 string=0x00000000004BC444 "+"
 *   insn=0x00000000004BC444 string=0x00000000004BC4F0 "_"
 *   insn=0x00000000004BC454 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004BC45C string=0x00000000004BC460 "T"
 *   insn=0x00000000004BC46C string=0x00000000004BC470 "(a"
 *   insn=0x00000000004BC478 string=0x00000000004BC47C "J"
 *   insn=0x00000000004BC47C string=0x00000000004BC480 "J=G"
 *   insn=0x00000000004BC480 string=0x00000000004BC484 ")!"
 *   insn=0x00000000004BC488 string=0x00000000004BC48C "*"
 *   insn=0x00000000004BC48C string=0x00000000004BC490 "K"
 *   insn=0x00000000004BC490 string=0x00000000004BC494 "+"
 *   insn=0x00000000004BC4A4 string=0x00000000004BC4A8 "B"
 *   insn=0x00000000004BC4B0 string=0x00000000004BC4B4 "(a"
 *   insn=0x00000000004BC4B8 string=0x00000000004BC4BC "`"
 *   insn=0x00000000004BC4BC string=0x00000000004BC4C0 "J"
 *   insn=0x00000000004BC4C0 string=0x00000000004BC4C4 "J=G"
 *   insn=0x00000000004BC4C4 string=0x00000000004BC4C8 ")!"
 *   insn=0x00000000004BC4CC string=0x00000000004BC4D0 "*"
 *   insn=0x00000000004BC4D0 string=0x00000000004BC4D4 "K"
 *   insn=0x00000000004BC4D4 string=0x00000000004BC4D8 "+"
 *   insn=0x00000000004BC4E4 string=0x00000000004BC4E8 "K"
 *   insn=0x00000000004BC4E8 string=0x00000000004BC4EC "+"
 *   insn=0x00000000004BC504 string=0x00000000004BC508 "U"
 *   insn=0x00000000004BC508 string=0x00000000004BC50C ")"
 *   insn=0x00000000004BC514 string=0x00000000004BC518 "U"
 *   insn=0x00000000004BC518 string=0x00000000004BC51C "I"
 *   insn=0x00000000004BC51C string=0x00000000004BC640 "s"
 *   insn=0x00000000004BC524 string=0x00000000004BC528 "U"
 *   insn=0x00000000004BC528 string=0x00000000004BC52C "!"
 *   insn=0x00000000004BC534 string=0x00000000004BC538 "^"
 *   insn=0x00000000004BC538 string=0x00000000004BC53C "s"
 *   insn=0x00000000004BC53C string=0x00000000004BC540 "S"
 *   insn=0x00000000004BC540 string=0x00000000004BC544 "Q"
 *   insn=0x00000000004BC540 string=0x00000000004BC648 "h"
 *   insn=0x00000000004BC548 string=0x00000000004BC54C "s"
 *   insn=0x00000000004BC550 string=0x00000000004BC554 "M"
 *   insn=0x00000000004BC560 string=0x00000000004BC564 ""
 *   insn=0x00000000004BC568 string=0x00000000004BC56C "5"
 *   insn=0x00000000004BC570 string=0x00000000004BC574 ""
 *   insn=0x00000000004BC580 string=0x00000000004BC584 "\t@"
 *   insn=0x00000000004BC590 string=0x00000000004BC594 ""
 *   insn=0x00000000004BC5A0 string=0x00000000004BC5A4 "@"
 *   insn=0x00000000004BC5B0 string=0x00000000004BC5B4 "I"
 *   insn=0x00000000004BC5B4 string=0x00000000004BC5B8 ")"
 *   insn=0x00000000004BC5C4 string=0x00000000004BC5C8 "I"
 *   insn=0x00000000004BC5C8 string=0x00000000004BC5CC ")=G"
 *   insn=0x00000000004BC5CC string=0x00000000004BC5D0 "!"
 *   insn=0x00000000004BC5D4 string=0x00000000004BC5D8 "\t"
 *   insn=0x00000000004BC5D4 string=0x00000000004BC690 "\t"
 *   insn=0x00000000004BC5D8 string=0x00000000004BC5DC "*"
 *   insn=0x00000000004BC5DC string=0x00000000004BC5E0 "\n"
 *   insn=0x00000000004BC5E4 string=0x00000000004BC5E8 "?"
 *   insn=0x00000000004BC5E8 string=0x00000000004BC5EC "l"
 *   insn=0x00000000004BC5F0 string=0x00000000004BC5F4 "l"
 *   insn=0x00000000004BC5F8 string=0x00000000004BC5FC "5"
 *   insn=0x00000000004BC600 string=0x00000000004BC604 ""
 *   insn=0x00000000004BC610 string=0x00000000004BC614 "\t@"
 *   insn=0x00000000004BC620 string=0x00000000004BC624 ""
 *   insn=0x00000000004BC630 string=0x00000000004BC634 "@"
 *   insn=0x00000000004BC640 string=0x00000000004BC644 "3"
 *   insn=0x00000000004BC648 string=0x00000000004BC64C ""
 *   insn=0x00000000004BC64C string=0x00000000004BC650 "h"
 *   insn=0x00000000004BC654 string=0x00000000004BC658 "h"
 *   insn=0x00000000004BC658 string=0x00000000004BC65C "\t@"
 *   insn=0x00000000004BC664 string=0x00000000004BC668 "h\n@"
 *   insn=0x00000000004BC668 string=0x00000000004BC66C ""
 *   insn=0x00000000004BC66C string=0x00000000004BC670 "h\n"
 *   insn=0x00000000004BC674 string=0x00000000004BC678 "h"
 *   insn=0x00000000004BC678 string=0x00000000004BC67C "@"
 *   insn=0x00000000004BC690 string=0x00000000004BC694 "*"
 *   insn=0x00000000004BC694 string=0x00000000004BC698 "\n"
 *   insn=0x00000000004BC698 string=0x00000000004BC69C "?"
 *   insn=0x00000000004BC6A8 string=0x00000000004BC6AC "H"
 *   insn=0x00000000004BC6AC string=0x00000000004BC6B0 ""
 *   insn=0x00000000004BC6B0 string=0x00000000004BC6B4 "("
 *   insn=0x00000000004BC6B4 string=0x00000000004BC6B8 "@"
 *   insn=0x00000000004BC6BC string=0x00000000004BC6C0 "!"
 *   insn=0x00000000004BC6C4 string=0x00000000004BC6C8 "  ""
 *   insn=0x00000000004BC6C8 string=0x00000000004BC6CC "m"
 *   insn=0x00000000004BC6CC string=0x00000000004BC6D8 "("
 *   insn=0x00000000004BC6E0 string=0x00000000004BC6E4 "   "
 *   insn=0x00000000004BC6EC string=0x00000000004BC6F0 "@"
 *   insn=0x00000000004BC6F4 string=0x00000000004BC6F8 """
 *   insn=0x00000000004BC6FC string=0x00000000004BC700 "@ `"
 *   insn=0x00000000004BC700 string=0x00000000004BC704 "l"
 *   insn=0x00000000004BC704 string=0x00000000004BC708 " @"
 *   insn=0x00000000004BC708 string=0x00000000004BC70C "A@"
 *   insn=0x00000000004BC710 string=0x00000000004BC714 "("
 *   insn=0x00000000004BC714 string=0x00000000004BC718 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::ProfileManager_Android::HandleDownloadedProfileData(
        __int64 a1@<X0>,
        const void **a2@<X1>,
        __int64 a3@<X8>)
{
  Caver::Proto::PlayerProfile *v6; // x0
  char v7; // w0
  _QWORD *v8; // x1
  __int64 v9; // x23
  _BOOL4 v10; // w22
  char *v11; // x0
  char *v12; // x0
  Caver::PlayerProfile *v13; // x22
  _QWORD *v14; // x22
  __int64 v15; // x9
  double v16; // x8
  __int64 v17; // x8
  __int64 v18; // x8
  const void *v19; // x22
  Caver::PlayerProfile *v20; // x26
  unsigned __int64 v21; // x23
  void *v22; // x0
  void *v23; // x8
  char *v24; // x0
  _QWORD *v25; // x21
  __int64 v26; // x22
  __int64 v27; // x8
  _QWORD *v28; // x0
  _QWORD *v29; // x8
  __int64 v30; // x22
  double *v31; // x9
  double *v32; // x8
  _QWORD *v33; // x20
  __int64 v34; // x8
  __int64 v35; // x8
  void *v36; // x0
  _QWORD *v37; // x20
  __int64 v38; // x8
  __int64 v39; // x8
  size_t v40; // x2
  unsigned int *v41; // x8
  int v42; // w9
  unsigned int *v43; // x8
  int v44; // w9
  unsigned int *v45; // x8
  int v46; // w9
  unsigned int *v47; // x8
  int v48; // w9
  Caver::PlayerProfile *v49; // [xsp+10h] [xbp-C0h] BYREF
  double v50; // [xsp+18h] [xbp-B8h] BYREF
  void *v51; // [xsp+20h] [xbp-B0h] BYREF
  double *v52; // [xsp+28h] [xbp-A8h]
  double *v53; // [xsp+30h] [xbp-A0h]
  __int64 i; // [xsp+38h] [xbp-98h]
  char v55[4]; // [xsp+40h] [xbp-90h] BYREF
  float v56; // [xsp+44h] [xbp-8Ch]
  double v57; // [xsp+48h] [xbp-88h]
  void *v58; // [xsp+50h] [xbp-80h]
  Caver::PlayerProfile *v59; // [xsp+58h] [xbp-78h]
  _QWORD *v60; // [xsp+60h] [xbp-70h]
  __int64 v61; // [xsp+68h] [xbp-68h] BYREF
  __int64 v62; // [xsp+70h] [xbp-60h]
  _QWORD *v63; // [xsp+78h] [xbp-58h]
  __int64 v64; // [xsp+88h] [xbp-48h]

  v64 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(_QWORD *)a3 = 0;
  *(_QWORD *)(a3 + 8) = 0;
  v6 = (Caver::Proto::PlayerProfile *)operator new(0xB0u);
  Caver::Proto::PlayerProfile::PlayerProfile(v6);
  boost::shared_ptr<Caver::Proto::PlayerProfile>::shared_ptr<Caver::Proto::PlayerProfile>();
  if ( !*((_QWORD *)*a2 - 3) )
    goto LABEL_39;
  google::protobuf::MessageLite::ParseFromString();
  if ( (v7 & 1) == 0 )
    goto LABEL_39;
  v8 = *(_QWORD **)(v62 + 160);
  if ( !*(_QWORD *)(*v8 - 24LL) )
    goto LABEL_39;
  sub_56A528(&v61, v8);
  Caver::ProfileManager::ProfileWithIdentifier();
  v9 = v62;
  LOBYTE(v49) = 0;
  v50 = 0.0;
  v51 = &byte_6FD2F8;
  HIDWORD(v49) = 0;
  sub_56918C(&v51, "", 0);
  if ( v9 )
  {
    LOBYTE(v49) = 1;
    HIDWORD(v49) = *(_DWORD *)(v9 + 44);
    v50 = *(double *)(v9 + 48);
    sub_56A6A8(&v51);
  }
  Caver::ProfileStats::ProfileStats((Caver::ProfileStats *)v55, v59);
  v10 = 1;
  if ( v55[0] )
  {
    if ( *((float *)&v49 + 1) <= (float)(v56 + 0.001) )
    {
      if ( *((float *)&v49 + 1) <= (float)(v56 + -0.001)
        || v50 <= v57 + 0.001 && (v40 = *((_QWORD *)v51 - 3), v40 == *((_QWORD *)v58 - 3)) && !memcmp(v51, v58, v40) )
      {
        v10 = 0;
      }
    }
  }
  v11 = (char *)v58 - 24;
  if ( (char *)v58 - 24 != (char *)&qword_6FD2E0 )
  {
    v41 = (unsigned int *)((char *)v58 - 8);
    if ( &pthread_create )
    {
      do
        v42 = __ldaxr(v41);
      while ( __stlxr(v42 - 1, v41) );
    }
    else
    {
      v42 = (*v41)--;
    }
    if ( v42 <= 0 )
      operator delete(v11);
  }
  v12 = (char *)v51 - 24;
  if ( (char *)v51 - 24 == (char *)&qword_6FD2E0 )
    goto LABEL_11;
  v43 = (unsigned int *)((char *)v51 - 8);
  if ( &pthread_create )
  {
    do
      v44 = __ldaxr(v43);
    while ( __stlxr(v44 - 1, v43) );
  }
  else
  {
    v44 = (*v43)--;
  }
  if ( v44 > 0 )
  {
LABEL_11:
    if ( !v10 )
      goto LABEL_34;
  }
  else
  {
    operator delete(v12);
    if ( !v10 )
      goto LABEL_34;
  }
  v13 = (Caver::PlayerProfile *)operator new(0xC8u);
  Caver::PlayerProfile::PlayerProfile(v13);
  v49 = v13;
  boost::detail::shared_count::shared_count<Caver::PlayerProfile>();
  boost::detail::sp_enable_shared_from_this();
  v14 = *(_QWORD **)(a3 + 8);
  v15 = (__int64)v49;
  v49 = *(Caver::PlayerProfile **)a3;
  v16 = v50;
  v50 = *(double *)&v14;
  *(_QWORD *)a3 = v15;
  *(double *)(a3 + 8) = v16;
  if ( *(double *)&v14 != 0.0 )
  {
    v17 = v14[1] - 1LL;
    v14[1] = v17;
    if ( !v17 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      v18 = v14[2] - 1LL;
      v14[2] = v18;
      if ( !v18 )
        (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
    }
  }
  Caver::PlayerProfile::InitWithIdentifier();
  v19 = *a2;
  v20 = *(Caver::PlayerProfile **)a3;
  v21 = *((unsigned int *)*a2 - 6);
  v22 = (void *)operator new[](v21);
  v23 = (void *)*((_QWORD *)v20 + 1);
  *((_QWORD *)v20 + 1) = v22;
  if ( v23 )
  {
    operator delete[](v23);
    v22 = (void *)*((_QWORD *)v20 + 1);
  }
  memcpy(v22, v19, v21);
  Caver::PlayerProfile::LocalFilePath((__int64 *)&v49, *(Caver::PlayerProfile **)a3);
  Caver::SaveByteBufferToFile();
  v24 = (char *)v49 - 24;
  if ( (__int64 *)((char *)v49 - 24) != &qword_6FD2E0 )
  {
    v47 = (unsigned int *)((char *)v49 - 8);
    if ( &pthread_create )
    {
      do
        v48 = __ldaxr(v47);
      while ( __stlxr(v48 - 1, v47) );
    }
    else
    {
      v48 = (*v47)--;
    }
    if ( v48 <= 0 )
      operator delete(v24);
  }
  Caver::PlayerProfile::Load(*(Caver::PlayerProfile **)a3);
  if ( v59 )
  {
    v26 = *((_QWORD *)v59 + 16);
    v25 = (_QWORD *)*((_QWORD *)v59 + 17);
    if ( v25 )
    {
      if ( !v25[1] )
      {
        (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
        v27 = v25[2] - 1LL;
        v25[2] = v27;
        if ( !v27 )
          (*(void (__fastcall **)(_QWORD *))(*v25 + 24LL))(v25);
      }
    }
    if ( v26 )
      Caver::PlayerProfile::LoadGameState(*(Caver::PlayerProfile **)a3);
  }
  Caver::ProfileManager::AddProfile();
  v50 = 0.0;
  v51 = 0;
  v52 = &v50;
  v53 = &v50;
  i = 0;
  if ( *(_QWORD *)(a1 + 24) )
  {
    v28 = (_QWORD *)std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_copy();
    v29 = v28;
    v51 = v28;
    do
    {
      v30 = (__int64)v29;
      v29 = (_QWORD *)v29[2];
    }
    while ( v29 );
    v31 = (double *)v28;
    v52 = (double *)v30;
    do
    {
      v32 = v31;
      v31 = (double *)*((_QWORD *)v31 + 3);
    }
    while ( v31 );
    v53 = v32;
    for ( i = *(_QWORD *)(a1 + 48); (double *)v30 != &v50; v30 = sub_54C6A0(v30) )
      (***(void (__fastcall ****)(_QWORD, __int64, __int64 *))(v30 + 32))(*(_QWORD *)(v30 + 32), a1, &v61);
  }
  std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_erase();
LABEL_34:
  v33 = v60;
  if ( v60 )
  {
    v34 = v60[1] - 1LL;
    v60[1] = v34;
    if ( !v34 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v33 + 16LL))(v33);
      v35 = v33[2] - 1LL;
      v33[2] = v35;
      if ( !v35 )
        (*(void (__fastcall **)(_QWORD *))(*v33 + 24LL))(v33);
    }
  }
  v36 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    v45 = (unsigned int *)(v61 - 8);
    if ( &pthread_create )
    {
      do
        v46 = __ldaxr(v45);
      while ( __stlxr(v46 - 1, v45) );
    }
    else
    {
      v46 = (*v45)--;
    }
    if ( v46 <= 0 )
    {
      operator delete(v36);
      v37 = v63;
      if ( !v63 )
        return;
      goto LABEL_40;
    }
  }
LABEL_39:
  v37 = v63;
  if ( !v63 )
    return;
LABEL_40:
  v38 = v37[1] - 1LL;
  v37[1] = v38;
  if ( !v38 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v37 + 16LL))(v37);
    v39 = v37[2] - 1LL;
    v37[2] = v39;
    if ( !v39 )
      (*(void (__fastcall **)(_QWORD *))(*v37 + 24LL))(v37);
  }
}


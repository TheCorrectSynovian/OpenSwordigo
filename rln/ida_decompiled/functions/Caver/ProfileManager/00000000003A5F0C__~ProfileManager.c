/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A5F0C
 * Mangled: _ZN5Caver14ProfileManagerD2Ev
 * Demangled: Caver::ProfileManager::~ProfileManager()
 *
 * Callers: 1
 *   0x00000000001FB790  Caver::ProfileManager::~ProfileManager()
 *
 * Callees: 29
 *   0x00000000001F3450  Caver::PlayerProfile::InitWithIdentifier(std::string const&)
 *   0x00000000001F47F0  Caver::LastPathComponent(std::string const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6D30  std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7740  Caver::DocumentsDirectoryPath(void)
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *   0x00000000001F9DB0  Caver::PlayerProfile::PlayerProfile(void)
 *   0x00000000001FA820  Caver::GetFilesWithExtension(std::string const&,std::string const&,std::vector<std::string,std::allocator<std::string>> *)
 *   0x00000000001FB210  Caver::StringByRemovingPathExtension(std::string const&)
 *   0x00000000001FC250  Caver::AchievementsManager::SetCounterValue(std::string const&,int,int)
 *   0x00000000001FC5D0  std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_erase(std::_Rb_tree_node<Caver::IProfileManagerDelegate *> *)
 *   0x00000000001FCD30  Caver::ProfileManager::AddProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000001FD2D0  Caver::AchievementsManager::sharedManager(void)
 *   0x00000000001FD410  std::map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::operator[](std::string const&)
 *   0x00000000001FD830  Caver::PlayerProfile::Load(void)
 *   0x00000000001FF620  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>> *)
 *   0x0000000000201490  boost::detail::shared_count::shared_count<Caver::PlayerProfile>(Caver::PlayerProfile *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x00000000002036B0  Caver::PlayerProfile::ProfileExists(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003A69D0  std::map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::operator[](std::string const&)
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C6A0  sub_54C6A0
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 279
 *   insn=0x00000000003A5F20 string=0x00000000003A5F24 "V"
 *   insn=0x00000000003A5F28 string=0x00000000003A5F2C "\t"
 *   insn=0x00000000003A5F30 string=0x00000000003A5F34 ")"
 *   insn=0x00000000003A5F38 string=0x00000000003A5F3C "`2@"
 *   insn=0x00000000003A5F3C string=0x00000000003A5F40 "u""
 *   insn=0x00000000003A5F40 string=0x00000000003A5F44 "(A"
 *   insn=0x00000000003A5F44 string=0x00000000003A5F48 "wB"
 *   insn=0x00000000003A5F48 string=0x00000000003A5F4C "h"
 *   insn=0x00000000003A5F64 string=0x00000000003A5F68 ""
 *   insn=0x00000000003A5F64 string=0x00000000003A5FBC "a.@"
 *   insn=0x00000000003A5F68 string=0x00000000003A5F6C "T"
 *   insn=0x00000000003A5F80 string=0x00000000003A5F84 "\t@"
 *   insn=0x00000000003A5F90 string=0x00000000003A5F94 ""
 *   insn=0x00000000003A5FA0 string=0x00000000003A5FA4 "@"
 *   insn=0x00000000003A5FC4 string=0x00000000003A5FC8 "t"@"
 *   insn=0x00000000003A5FC8 string=0x00000000003A5FCC "4"
 *   insn=0x00000000003A5FCC string=0x00000000003A6010 "a"
 *   insn=0x00000000003A5FD0 string=0x00000000003A5FD4 ""
 *   insn=0x00000000003A5FE0 string=0x00000000003A5FE4 "\t@"
 *   insn=0x00000000003A5FF0 string=0x00000000003A5FF4 ""
 *   insn=0x00000000003A6000 string=0x00000000003A6004 "@"
 *   insn=0x00000000003A6010 string=0x00000000003A6014 "`""
 *   insn=0x00000000003A6014 string=0x00000000003A6018 "nY"
 *   insn=0x00000000003A6018 string=0x00000000001FC5D0 "0'"
 *   insn=0x00000000003A6044 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003A6048 string=0x00000000003A604C ""
 *   insn=0x00000000003A604C string=0x00000000003A60B8 "a"
 *   insn=0x00000000003A6050 string=0x00000000003A6054 "u"@"
 *   insn=0x00000000003A6068 string=0x00000000003A606C "me"
 *   insn=0x00000000003A606C string=0x00000000003A6070 "u"@"
 *   insn=0x00000000003A6070 string=0x00000000003A6074 "5"
 *   insn=0x00000000003A6078 string=0x00000000003A607C ""
 *   insn=0x00000000003A6088 string=0x00000000003A608C "\t@"
 *   insn=0x00000000003A6098 string=0x00000000003A609C ""
 *   insn=0x00000000003A60A8 string=0x00000000003A60AC "@"
 *   insn=0x00000000003A60B8 string=0x00000000003A60BC "`""
 *   insn=0x00000000003A60BC string=0x00000000003A60C0 "DY"
 *   insn=0x00000000003A60EC string=0x00000000003A60F0 "Z"
 *   insn=0x00000000003A60F0 string=0x00000000003A60F4 "H"
 *   insn=0x00000000003A6108 string=0x00000000003A610C "A"
 *   insn=0x00000000003A610C string=0x0000000000591F74 "gplayer"
 *   insn=0x00000000003A6124 string=0x00000000001F7740 "0'"
 *   insn=0x00000000003A6134 string=0x00000000001FA820 "0'"
 *   insn=0x00000000003A613C string=0x00000000003A6140 "9"
 *   insn=0x00000000003A6174 string=0x00000000003A6178 "!"
 *   insn=0x00000000003A6184 string=0x00000000003A6188 "v""
 *   insn=0x00000000003A6188 string=0x00000000003A618C "W"
 *   insn=0x00000000003A6198 string=0x00000000003A619C "@"
 *   insn=0x00000000003A619C string=0x00000000003A61A0 ""
 *   insn=0x00000000003A61A0 string=0x00000000003A61A4 ""
 *   insn=0x00000000003A61A8 string=0x00000000003A61AC ""
 *   insn=0x00000000003A61AC string=0x00000000003A61B0 "\t@"
 *   insn=0x00000000003A61B8 string=0x00000000003A61BC "@"
 *   insn=0x00000000003A61BC string=0x00000000003A61C0 ""
 *   insn=0x00000000003A61C0 string=0x00000000003A61C4 ""
 *   insn=0x00000000003A61C8 string=0x00000000003A61CC ""
 *   insn=0x00000000003A61CC string=0x00000000003A61D0 "@"
 *   insn=0x00000000003A61D8 string=0x00000000003A61DC "W"
 *   insn=0x00000000003A61E8 string=0x00000000001F6D30 "0'"
 *   insn=0x00000000003A61F4 string=0x00000000003A61F8 "nL"
 *   insn=0x00000000003A61F4 string=0x00000000001FCD30 "0'"
 *   insn=0x00000000003A61F8 string=0x00000000003A61FC ""
 *   insn=0x00000000003A61F8 string=0x00000000001F93B0 "0'"
 *   insn=0x00000000003A61FC string=0x00000000003A6200 "\t@"
 *   insn=0x00000000003A620C string=0x00000000003A6210 "U@"
 *   insn=0x00000000003A6210 string=0x00000000003A6214 "a"
 *   insn=0x00000000003A6224 string=0x00000000003A6228 "*\"
 *   insn=0x00000000003A6228 string=0x00000000001FD2D0 "0'"
 *   insn=0x00000000003A6238 string=0x00000000001FC250 "0'"
 *   insn=0x00000000003A624C string=0x00000000003A6250 "a"
 *   insn=0x00000000003A6254 string=0x00000000003A6258 "a"
 *   insn=0x00000000003A6274 string=0x00000000003A6278 "\t"
 *   insn=0x00000000003A6274 string=0x00000000003A62A8 "\t"
 *   insn=0x00000000003A6278 string=0x00000000003A627C "*"
 *   insn=0x00000000003A627C string=0x00000000003A6280 "\n"
 *   insn=0x00000000003A6284 string=0x00000000003A6288 ""
 *   insn=0x00000000003A6288 string=0x00000000003A62B4 "?"
 *   insn=0x00000000003A6290 string=0x00000000003A6294 "\t"
 *   insn=0x00000000003A6290 string=0x00000000003A62C8 "\t"
 *   insn=0x00000000003A6294 string=0x00000000003A6298 "*"
 *   insn=0x00000000003A6298 string=0x00000000003A629C "\n"
 *   insn=0x00000000003A62A4 string=0x00000000003A62D4 "?"
 *   insn=0x00000000003A62A8 string=0x00000000003A62AC "*"
 *   insn=0x00000000003A62AC string=0x00000000003A62B0 "\n"
 *   insn=0x00000000003A62BC string=0x00000000003A62C0 "9"
 *   insn=0x00000000003A62C8 string=0x00000000003A62CC "*"
 *   insn=0x00000000003A62CC string=0x00000000003A62D0 "\n"
 *   insn=0x00000000003A62DC string=0x00000000003A62E0 "1"
 *   insn=0x00000000003A62E0 string=0x00000000003A62E4 "y"
 *   insn=0x00000000003A62EC string=0x00000000003A62F0 "@9"
 *   insn=0x00000000003A62F0 string=0x00000000001F47F0 "P'"
 *   insn=0x00000000003A62FC string=0x00000000001FB210 "0'"
 *   insn=0x00000000003A6308 string=0x00000000003A630C "!"
 *   insn=0x00000000003A630C string=0x00000000003A6270 "!"
 *   insn=0x00000000003A6314 string=0x00000000003A6318 ">\"
 *   insn=0x00000000003A6318 string=0x00000000003A631C "$@"
 *   insn=0x00000000003A6318 string=0x00000000001FD410 "0'"
 *   insn=0x00000000003A6324 string=0x00000000003A6328 "*"
 *   insn=0x00000000003A6324 string=0x00000000003A6334 "H"
 *   insn=0x00000000003A6328 string=0x00000000003A632C "J"
 *   insn=0x00000000003A632C string=0x00000000003A6330 "*"
 *   insn=0x00000000003A633C string=0x00000000003A6340 "?"
 *   insn=0x00000000003A6348 string=0x00000000003A634C "("
 *   insn=0x00000000003A6350 string=0x00000000003A6354 "("
 *   insn=0x00000000003A6358 string=0x00000000003A635C "\t"
 *   insn=0x00000000003A6358 string=0x00000000003A6368 "(@"
 *   insn=0x00000000003A635C string=0x00000000003A6360 ")"
 *   insn=0x00000000003A6360 string=0x00000000003A6364 "\t"
 *   insn=0x00000000003A6370 string=0x00000000003A6374 "8"
 *   insn=0x00000000003A6374 string=0x00000000003A6378 "P"
 *   insn=0x00000000003A6374 string=0x00000000003A6478 "@"
 *   insn=0x00000000003A6380 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003A638C string=0x00000000001F9DB0 "0'"
 *   insn=0x00000000003A6398 string=0x00000000003A639C "=l"
 *   insn=0x00000000003A63A8 string=0x00000000003A63AC "iq"
 *   insn=0x00000000003A63C4 string=0x00000000003A63C8 "8"
 *   insn=0x00000000003A63C8 string=0x00000000003A63CC "@"
 *   insn=0x00000000003A63CC string=0x00000000003A63D0 ""
 *   insn=0x00000000003A63D0 string=0x00000000003A63D4 ""
 *   insn=0x00000000003A63D8 string=0x00000000003A63DC ""
 *   insn=0x00000000003A63DC string=0x00000000003A63E0 "\t@"
 *   insn=0x00000000003A63E8 string=0x00000000003A63EC "@"
 *   insn=0x00000000003A63EC string=0x00000000003A63F0 ""
 *   insn=0x00000000003A63F0 string=0x00000000003A63F4 ""
 *   insn=0x00000000003A63F8 string=0x00000000003A63FC ""
 *   insn=0x00000000003A63FC string=0x00000000003A6400 "@"
 *   insn=0x00000000003A6414 string=0x00000000001F3450 "P'"
 *   insn=0x00000000003A6428 string=0x00000000001FD830 "0'"
 *   insn=0x00000000003A642C string=0x00000000003A6430 "?"
 *   insn=0x00000000003A6430 string=0x00000000003A6434 "`"
 *   insn=0x00000000003A6438 string=0x00000000003A643C "("
 *   insn=0x00000000003A6440 string=0x00000000003A6444 "("
 *   insn=0x00000000003A6448 string=0x00000000003A644C "\t"
 *   insn=0x00000000003A6448 string=0x00000000003A6458 "(@"
 *   insn=0x00000000003A644C string=0x00000000003A6450 ")"
 *   insn=0x00000000003A6450 string=0x00000000003A6454 "\t"
 *   insn=0x00000000003A645C string=0x00000000003A6460 "c"
 *   insn=0x00000000003A6468 string=0x00000000003A646C "1B"
 *   insn=0x00000000003A6470 string=0x00000000003A6474 "8"
 *   insn=0x00000000003A6478 string=0x00000000003A647C ""
 *   insn=0x00000000003A647C string=0x00000000003A6480 ""
 *   insn=0x00000000003A6484 string=0x00000000003A6488 ""
 *   insn=0x00000000003A6488 string=0x00000000003A648C "\t@"
 *   insn=0x00000000003A6494 string=0x00000000003A6498 "@"
 *   insn=0x00000000003A6498 string=0x00000000003A649C ""
 *   insn=0x00000000003A649C string=0x00000000003A64A0 ""
 *   insn=0x00000000003A64A4 string=0x00000000003A64A8 ""
 *   insn=0x00000000003A64A8 string=0x00000000003A64AC "@"
 *   insn=0x00000000003A64C0 string=0x00000000003A64C4 "A"
 *   insn=0x00000000003A64C4 string=0x00000000003A628C "!"
 *   insn=0x00000000003A64D8 string=0x00000000003A64DC "h"
 *   insn=0x00000000003A64E8 string=0x00000000003A64EC "3"
 *   insn=0x00000000003A64EC string=0x00000000003A64F0 "h"
 *   insn=0x00000000003A64F0 string=0x00000000003A64F4 ""
 *   insn=0x00000000003A64F4 string=0x00000000003A64F8 "h"
 *   insn=0x00000000003A64FC string=0x00000000003A6500 "h"
 *   insn=0x00000000003A6500 string=0x00000000003A6504 "\t@"
 *   insn=0x00000000003A650C string=0x00000000003A6510 "h\n@"
 *   insn=0x00000000003A6510 string=0x00000000003A6514 ""
 *   insn=0x00000000003A6514 string=0x00000000003A6518 "h\n"
 *   insn=0x00000000003A651C string=0x00000000003A6520 "h"
 *   insn=0x00000000003A6520 string=0x00000000003A6524 "@"
 *   insn=0x00000000003A6544 string=0x00000000003A6548 "ZC"
 *   insn=0x00000000003A6548 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003A6550 string=0x00000000003A6554 "h"
 *   insn=0x00000000003A655C string=0x00000000003A6560 "`"
 *   insn=0x00000000003A6560 string=0x00000000003A65CC "s"
 *   insn=0x00000000003A656C string=0x00000000003A65AC "h"
 *   insn=0x00000000003A6574 string=0x00000000003A6578 "\t"
 *   insn=0x00000000003A6574 string=0x00000000003A658C "\t"
 *   insn=0x00000000003A6578 string=0x00000000003A657C "*"
 *   insn=0x00000000003A657C string=0x00000000003A6580 "\n"
 *   insn=0x00000000003A6588 string=0x00000000003A6598 "?"
 *   insn=0x00000000003A658C string=0x00000000003A6590 "*"
 *   insn=0x00000000003A6590 string=0x00000000003A6594 "\n"
 *   insn=0x00000000003A659C string=0x00000000003A65BC "s""
 *   insn=0x00000000003A65B8 string=0x00000000003A6570 "!"
 *   insn=0x00000000003A65C0 string=0x00000000003A65C4 "A"
 *   insn=0x00000000003A65CC string=0x00000000003A65D8 "H"
 *   insn=0x00000000003A65D0 string=0x00000000003A65D4 "7C"
 *   insn=0x00000000003A65E0 string=0x00000000003A65E4 "a"
 *   insn=0x00000000003A6608 string=0x00000000003A660C ")=G"
 *   insn=0x00000000003A660C string=0x00000000003A6610 "!"
 *   insn=0x00000000003A6614 string=0x00000000003A6618 "\t"
 *   insn=0x00000000003A6614 string=0x00000000003A6650 "\t"
 *   insn=0x00000000003A6618 string=0x00000000003A661C "*"
 *   insn=0x00000000003A661C string=0x00000000003A6620 "\n"
 *   insn=0x00000000003A6624 string=0x00000000003A6628 ""
 *   insn=0x00000000003A6628 string=0x00000000003A665C "?"
 *   insn=0x00000000003A662C string=0x00000000003A6630 ")=G"
 *   insn=0x00000000003A6630 string=0x00000000003A6634 "!"
 *   insn=0x00000000003A6638 string=0x00000000003A663C "\t"
 *   insn=0x00000000003A6638 string=0x00000000003A6670 "\t"
 *   insn=0x00000000003A663C string=0x00000000003A6640 "*"
 *   insn=0x00000000003A6640 string=0x00000000003A6644 "\n"
 *   insn=0x00000000003A664C string=0x00000000003A667C "?"
 *   insn=0x00000000003A6650 string=0x00000000003A6654 "*"
 *   insn=0x00000000003A6654 string=0x00000000003A6658 "\n"
 *   insn=0x00000000003A6664 string=0x00000000003A6668 "O"
 *   insn=0x00000000003A6670 string=0x00000000003A6674 "*"
 *   insn=0x00000000003A6674 string=0x00000000003A6678 "\n"
 *   insn=0x00000000003A6684 string=0x00000000003A6688 "G"
 *   insn=0x00000000003A6698 string=0x00000000003A669C "J"
 *   insn=0x00000000003A66A0 string=0x00000000003A66A4 "(a"
 *   insn=0x00000000003A66B0 string=0x00000000003A66B4 "J=G"
 *   insn=0x00000000003A66B4 string=0x00000000003A66B8 ")!"
 *   insn=0x00000000003A66BC string=0x00000000003A66C0 "*"
 *   insn=0x00000000003A66BC string=0x00000000003A66D4 "*"
 *   insn=0x00000000003A66C0 string=0x00000000003A66C4 "K"
 *   insn=0x00000000003A66C4 string=0x00000000003A66C8 "+"
 *   insn=0x00000000003A66D0 string=0x00000000003A66E0 "_"
 *   insn=0x00000000003A66D4 string=0x00000000003A66D8 "K"
 *   insn=0x00000000003A66D8 string=0x00000000003A66DC "+"
 *   insn=0x00000000003A66EC string=0x00000000003A66F0 "-"
 *   insn=0x00000000003A6700 string=0x00000000003A6704 ")"
 *   insn=0x00000000003A6714 string=0x00000000003A6718 ")=G"
 *   insn=0x00000000003A6718 string=0x00000000003A671C "!"
 *   insn=0x00000000003A6720 string=0x00000000003A6724 "\t"
 *   insn=0x00000000003A6720 string=0x00000000003A6738 "\t"
 *   insn=0x00000000003A6724 string=0x00000000003A6728 "*"
 *   insn=0x00000000003A6728 string=0x00000000003A672C "\n"
 *   insn=0x00000000003A6734 string=0x00000000003A6744 "?"
 *   insn=0x00000000003A6738 string=0x00000000003A673C "*"
 *   insn=0x00000000003A673C string=0x00000000003A6740 "\n"
 *   insn=0x00000000003A6744 string=0x00000000003A6748 ","
 *   insn=0x00000000003A6750 string=0x00000000003A6754 "^"
 *   insn=0x00000000003A6758 string=0x00000000003A675C "\"
 *   insn=0x00000000003A6764 string=0x00000000003A6768 "("
 *   insn=0x00000000003A676C string=0x00000000003A6770 "V"
 *   insn=0x00000000003A6770 string=0x00000000003A68C8 "zB"
 *   insn=0x00000000003A6780 string=0x00000000003A6784 "T"
 *   insn=0x00000000003A6784 string=0x00000000003A6788 "1"
 *   insn=0x00000000003A67A0 string=0x00000000003A67A4 "(a"
 *   insn=0x00000000003A67AC string=0x00000000003A67B0 ")!"
 *   insn=0x00000000003A67B4 string=0x00000000003A67B8 "*"
 *   insn=0x00000000003A67B4 string=0x00000000003A67CC "*"
 *   insn=0x00000000003A67B8 string=0x00000000003A67BC "K"
 *   insn=0x00000000003A67BC string=0x00000000003A67C0 "+"
 *   insn=0x00000000003A67C8 string=0x00000000003A67D8 "_"
 *   insn=0x00000000003A67CC string=0x00000000003A67D0 "K"
 *   insn=0x00000000003A67D0 string=0x00000000003A67D4 "+"
 *   insn=0x00000000003A6804 string=0x00000000003A6808 "4"
 *   insn=0x00000000003A680C string=0x00000000003A6810 ""
 *   insn=0x00000000003A681C string=0x00000000003A6820 "\t@"
 *   insn=0x00000000003A682C string=0x00000000003A6830 ""
 *   insn=0x00000000003A683C string=0x00000000003A6840 "@"
 *   insn=0x00000000003A6854 string=0x00000000003A6858 "a"
 *   insn=0x00000000003A6858 string=0x00000000003A6964 "!"
 *   insn=0x00000000003A6864 string=0x00000000003A68C0 "t"
 *   insn=0x00000000003A6868 string=0x00000000003A686C "5"
 *   insn=0x00000000003A6870 string=0x00000000003A6874 ""
 *   insn=0x00000000003A6880 string=0x00000000003A6884 "\t@"
 *   insn=0x00000000003A6890 string=0x00000000003A6894 ""
 *   insn=0x00000000003A68A0 string=0x00000000003A68A4 "@"
 *   insn=0x00000000003A68D4 string=0x00000000003A6950 "t"
 *   insn=0x00000000003A68F0 string=0x00000000003A68F4 "\t"
 *   insn=0x00000000003A68F0 string=0x00000000003A6910 "\t"
 *   insn=0x00000000003A68F4 string=0x00000000003A68F8 "*"
 *   insn=0x00000000003A68F8 string=0x00000000003A68FC "\n"
 *   insn=0x00000000003A6900 string=0x00000000003A6904 "?"
 *   insn=0x00000000003A6910 string=0x00000000003A6914 "*"
 *   insn=0x00000000003A6914 string=0x00000000003A6918 "\n"
 *   insn=0x00000000003A6918 string=0x00000000003A691C "?"
 *   insn=0x00000000003A693C string=0x00000000003A68EC "!"
 *   insn=0x00000000003A6944 string=0x00000000003A6948 "A"
 *   insn=0x00000000003A6954 string=0x00000000003A6958 "VB"
 *   insn=0x00000000003A6968 string=0x00000000003A696C "\t"
 *   insn=0x00000000003A6968 string=0x00000000003A6980 "\t"
 *   insn=0x00000000003A696C string=0x00000000003A6970 "*"
 *   insn=0x00000000003A6970 string=0x00000000003A6974 "\n"
 *   insn=0x00000000003A697C string=0x00000000003A698C "?"
 *   insn=0x00000000003A6980 string=0x00000000003A6984 "*"
 *   insn=0x00000000003A6984 string=0x00000000003A6988 "\n"
 *   insn=0x00000000003A698C string=0x00000000003A6990 "l"
 *   insn=0x00000000003A69A4 string=0x00000000003A69A8 "i"
 *   insn=0x00000000003A69B0 string=0x00000000003A69B4 "h"
 *   insn=0x00000000003A69B8 string=0x00000000003A69BC "d"
 *   insn=0x00000000003A69C0 string=0x00000000003A69C4 ";B"
 *   insn=0x00000000003A69C8 string=0x00000000003A69CC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProfileManager::~ProfileManager(Caver::ProfileManager *this)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x8
  _QWORD *v4; // x20
  __int64 v5; // x9
  __int64 v6; // x8
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x8
  _QWORD *v10; // [xsp+D0h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_QWORD *)*((_QWORD *)this + 12);
  *(_QWORD *)this = &off_6CE940;
  while ( 1 )
  {
    v10 = v2;
    if ( (_QWORD *)((char *)this + 80) == v2 )
      break;
    v3 = (_QWORD *)v2[5];
    v4 = (_QWORD *)v2[6];
    if ( v4 )
    {
      v5 = v4[1];
      *v3 = 0;
      v4[1] = v5;
      if ( !v5 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
        v6 = v4[2] - 1LL;
        v4[2] = v6;
        if ( !v6 )
          (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
      }
    }
    else
    {
      *v3 = 0;
    }
    v2 = (_QWORD *)sub_54C640(v10);
  }
  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_erase();
  v7 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v7 )
  {
    v8 = v7[1] - 1LL;
    v7[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
  }
  std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_erase();
}


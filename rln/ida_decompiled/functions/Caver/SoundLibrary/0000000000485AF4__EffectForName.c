/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000485AF4
 * Mangled: _ZN5Caver12SoundLibrary13EffectForNameERKSs
 * Demangled: Caver::SoundLibrary::EffectForName(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FDFA0  Caver::SoundLibrary::EffectForName(std::string const&)
 *
 * Callees: 28
 *   0x00000000001F41C0  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::equal_range(std::string const&)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5F30  Caver::PathForResourceOfType(std::string const&,std::string const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7240  Caver::SoundLibrary::AddEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8D00  std::map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>>::operator[](std::string const&)
 *   0x00000000001FA560  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>,std::string const&)
 *   0x00000000001FB700  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>>::_M_create_node(std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>> const&)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *   0x00000000001FD200  Caver::AudioBuffer::LoadFromFile(std::string const&)
 *   0x00000000001FDDD0  Caver::FileExistsAtPath(std::string const&)
 *   0x00000000001FF600  boost::detail::shared_count::shared_count<Caver::AudioBuffer>(Caver::AudioBuffer *)
 *   0x0000000000201390  Caver::AudioBuffer::AudioBuffer(void)
 *   0x0000000000201BB0  Caver::SoundEffect::SoundEffect(void)
 *   0x0000000000201E40  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::equal_range(std::string const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C6A0  sub_54C6A0
 *   0x000000000054C8A0  sub_54C8A0
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 308
 *   insn=0x0000000000485B0C string=0x0000000000485B10 "X"
 *   insn=0x0000000000485B14 string=0x0000000000485B18 ""
 *   insn=0x0000000000485B34 string=0x0000000000485B38 " "
 *   insn=0x0000000000485B44 string=0x0000000000485B48 "9"
 *   insn=0x0000000000485B4C string=0x0000000000485B50 "?"
 *   insn=0x0000000000485B54 string=0x0000000000485B58 "&"
 *   insn=0x0000000000485B5C string=0x0000000000485B60 "?"
 *   insn=0x0000000000485B60 string=0x0000000000485B64 "k"
 *   insn=0x0000000000485B70 string=0x00000000001F41C0 "P'"
 *   insn=0x0000000000485B78 string=0x0000000000485B7C "?"
 *   insn=0x0000000000485B84 string=0x0000000000485B88 ""
 *   insn=0x0000000000485B84 string=0x00000000001FCE30 "0'"
 *   insn=0x0000000000485B88 string=0x0000000000485B8C ""
 *   insn=0x0000000000485BA0 string=0x0000000000485BA4 "`"
 *   insn=0x0000000000485BA8 string=0x0000000000485BAC "9"
 *   insn=0x0000000000485BC0 string=0x0000000000485BC4 "A"
 *   insn=0x0000000000485BC4 string=0x0000000000485BC8 "\n"
 *   insn=0x0000000000485BD0 string=0x0000000000485BD4 "@"
 *   insn=0x0000000000485BD4 string=0x0000000000485BD8 ""
 *   insn=0x0000000000485BD8 string=0x0000000000485BDC ""
 *   insn=0x0000000000485BE0 string=0x0000000000485BE4 "`"
 *   insn=0x0000000000485BE4 string=0x0000000000485BE8 "."
 *   insn=0x0000000000485BE8 string=0x0000000000485CA0 "@"
 *   insn=0x0000000000485BF0 string=0x0000000000485BF4 "{"
 *   insn=0x0000000000485BF4 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000485C0C string=0x0000000000485C10 ""
 *   insn=0x0000000000485C2C string=0x000000000059687C "wav"
 *   insn=0x0000000000485C4C string=0x00000000001F5F30 "P'"
 *   insn=0x0000000000485C50 string=0x0000000000485C54 "_"
 *   insn=0x0000000000485C54 string=0x00000000001FDDD0 "0'"
 *   insn=0x0000000000485C8C string=0x0000000000485C90 "l"
 *   insn=0x0000000000485C90 string=0x00000000001F7240 "0'"
 *   insn=0x0000000000485C94 string=0x0000000000485C98 "`"
 *   insn=0x0000000000485C98 string=0x0000000000485C9C " "
 *   insn=0x0000000000485C9C string=0x0000000000485D60 ""
 *   insn=0x0000000000485CA0 string=0x0000000000485CA4 ""
 *   insn=0x0000000000485CA4 string=0x0000000000485CA8 ""
 *   insn=0x0000000000485CA8 string=0x0000000000485CAC "&"
 *   insn=0x0000000000485CAC string=0x0000000000485D44 "@"
 *   insn=0x0000000000485CB0 string=0x0000000000485CB4 ")=G"
 *   insn=0x0000000000485CB4 string=0x0000000000485CB8 "!"
 *   insn=0x0000000000485CBC string=0x0000000000485CC0 "\t"
 *   insn=0x0000000000485CBC string=0x0000000000485CF8 "\t"
 *   insn=0x0000000000485CC0 string=0x0000000000485CC4 "*"
 *   insn=0x0000000000485CC4 string=0x0000000000485CC8 "\n"
 *   insn=0x0000000000485CCC string=0x0000000000485CD0 ""
 *   insn=0x0000000000485CD0 string=0x0000000000485D04 "?"
 *   insn=0x0000000000485CD4 string=0x0000000000485CD8 ")=G"
 *   insn=0x0000000000485CD8 string=0x0000000000485CDC "!"
 *   insn=0x0000000000485CE0 string=0x0000000000485CE4 "\t"
 *   insn=0x0000000000485CE0 string=0x0000000000485D18 "\t"
 *   insn=0x0000000000485CE4 string=0x0000000000485CE8 "*"
 *   insn=0x0000000000485CE8 string=0x0000000000485CEC "\n"
 *   insn=0x0000000000485CF4 string=0x0000000000485D24 "?"
 *   insn=0x0000000000485CF8 string=0x0000000000485CFC "*"
 *   insn=0x0000000000485CFC string=0x0000000000485D00 "\n"
 *   insn=0x0000000000485D04 string=0x0000000000485D08 "l"
 *   insn=0x0000000000485D18 string=0x0000000000485D1C "*"
 *   insn=0x0000000000485D1C string=0x0000000000485D20 "\n"
 *   insn=0x0000000000485D44 string=0x0000000000485D48 ""
 *   insn=0x0000000000485D48 string=0x0000000000485D4C ""
 *   insn=0x0000000000485D50 string=0x0000000000485D54 ""
 *   insn=0x0000000000485D54 string=0x0000000000485D58 ""
 *   insn=0x0000000000485D6C string=0x0000000000485D8C "Q"
 *   insn=0x0000000000485D8C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000485D98 string=0x0000000000485D9C "\n"
 *   insn=0x0000000000485D9C string=0x0000000000485DA0 "J"
 *   insn=0x0000000000485DA4 string=0x0000000000485DA8 "(a"
 *   insn=0x0000000000485DB4 string=0x0000000000485DB8 "J=G"
 *   insn=0x0000000000485DB8 string=0x0000000000485DBC ")!"
 *   insn=0x0000000000485DC0 string=0x0000000000485DC4 "*"
 *   insn=0x0000000000485DC0 string=0x0000000000485DD8 "*"
 *   insn=0x0000000000485DC4 string=0x0000000000485DC8 "K"
 *   insn=0x0000000000485DC8 string=0x0000000000485DCC "+"
 *   insn=0x0000000000485DD4 string=0x0000000000485DE4 "_"
 *   insn=0x0000000000485DD8 string=0x0000000000485DDC "K"
 *   insn=0x0000000000485DDC string=0x0000000000485DE0 "+"
 *   insn=0x0000000000485DF0 string=0x0000000000485DF4 "l"
 *   insn=0x0000000000485E00 string=0x0000000000485E04 "\t"
 *   insn=0x0000000000485E04 string=0x0000000000485E08 ")"
 *   insn=0x0000000000485E18 string=0x0000000000485E1C ")=G"
 *   insn=0x0000000000485E1C string=0x0000000000485E20 "!"
 *   insn=0x0000000000485E24 string=0x0000000000485E28 "\t"
 *   insn=0x0000000000485E24 string=0x0000000000485E54 "\t"
 *   insn=0x0000000000485E28 string=0x0000000000485E2C "*"
 *   insn=0x0000000000485E2C string=0x0000000000485E30 "\n"
 *   insn=0x0000000000485E34 string=0x0000000000485E38 "?"
 *   insn=0x0000000000485E40 string=0x0000000000485E44 "X"
 *   insn=0x0000000000485E48 string=0x0000000000485E4C "@"
 *   insn=0x0000000000485E4C string=0x0000000000485E94 "@"
 *   insn=0x0000000000485E54 string=0x0000000000485E58 "*"
 *   insn=0x0000000000485E58 string=0x0000000000485E5C "\n"
 *   insn=0x0000000000485E5C string=0x0000000000485E60 "?"
 *   insn=0x0000000000485E64 string=0x0000000000485E68 "\t"
 *   insn=0x0000000000485E78 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000485E80 string=0x0000000000485E84 ""
 *   insn=0x0000000000485E94 string=0x0000000000485E98 ""
 *   insn=0x0000000000485E98 string=0x0000000000485E9C ""
 *   insn=0x0000000000485EA0 string=0x0000000000485EA4 ""
 *   insn=0x0000000000485EA4 string=0x0000000000485EA8 ""
 *   insn=0x0000000000485EB4 string=0x0000000000485EB8 "%!"
 *   insn=0x0000000000485ED4 string=0x0000000000485ED8 "Y"
 *   insn=0x0000000000485EDC string=0x0000000000485EE0 "("
 *   insn=0x0000000000485EF4 string=0x0000000000485EF8 ""
 *   insn=0x0000000000485EF4 string=0x00000000001F8D00 "0'"
 *   insn=0x0000000000485EFC string=0x0000000000485F00 "H"
 *   insn=0x0000000000485F00 string=0x0000000000485F04 "\t"
 *   insn=0x0000000000485F08 string=0x0000000000485F0C ")"
 *   insn=0x0000000000485F0C string=0x0000000000485F10 "\t"
 *   insn=0x0000000000485F10 string=0x0000000000485F14 ""
 *   insn=0x0000000000485F14 string=0x0000000000485F18 "h"
 *   insn=0x0000000000485F18 string=0x0000000000485F1C ""
 *   insn=0x0000000000485F1C string=0x00000000004860BC "("
 *   insn=0x0000000000485F34 string=0x0000000000485F38 " "
 *   insn=0x0000000000485F50 string=0x0000000000485F54 "Z"
 *   insn=0x0000000000485F5C string=0x0000000000485F60 "A"
 *   insn=0x0000000000485FA0 string=0x0000000000485FA4 "k"
 *   insn=0x0000000000485FA4 string=0x0000000000485FA8 "hb@"
 *   insn=0x0000000000485FB0 string=0x0000000000485FB4 "wZ"
 *   insn=0x0000000000485FB4 string=0x0000000000485FB8 "8"
 *   insn=0x0000000000485FB8 string=0x0000000000485FBC "@"
 *   insn=0x0000000000485FBC string=0x0000000000485FC0 ""
 *   insn=0x0000000000485FC0 string=0x0000000000485FC4 ""
 *   insn=0x0000000000485FC8 string=0x0000000000485FCC ""
 *   insn=0x0000000000485FCC string=0x0000000000485FD0 "\t@"
 *   insn=0x0000000000485FD8 string=0x0000000000485FDC "@"
 *   insn=0x0000000000485FDC string=0x0000000000485FE0 ""
 *   insn=0x0000000000485FE0 string=0x0000000000485FE4 ""
 *   insn=0x0000000000485FE8 string=0x0000000000485FEC ""
 *   insn=0x0000000000485FEC string=0x0000000000485FF0 "@"
 *   insn=0x0000000000486004 string=0x00000000001FD200 "0'"
 *   insn=0x0000000000486010 string=0x0000000000486014 ";"
 *   insn=0x0000000000486024 string=0x0000000000486028 " "
 *   insn=0x0000000000486030 string=0x0000000000486034 ""
 *   insn=0x000000000048603C string=0x0000000000486040 "@"
 *   insn=0x0000000000486040 string=0x0000000000486044 ""
 *   insn=0x0000000000486044 string=0x0000000000486048 ""
 *   insn=0x000000000048604C string=0x0000000000486050 ""
 *   insn=0x0000000000486050 string=0x0000000000486054 "@"
 *   insn=0x0000000000486064 string=0x0000000000486068 "6"
 *   insn=0x000000000048606C string=0x0000000000486070 ""
 *   insn=0x000000000048607C string=0x0000000000486080 "\t@"
 *   insn=0x000000000048608C string=0x0000000000486090 ""
 *   insn=0x000000000048609C string=0x00000000004860A0 "@"
 *   insn=0x00000000004860C4 string=0x00000000004860C8 "A"
 *   insn=0x00000000004860C8 string=0x0000000000486170 "X"
 *   insn=0x00000000004860E8 string=0x00000000004860EC ")=G"
 *   insn=0x00000000004860EC string=0x00000000004860F0 "!"
 *   insn=0x00000000004860F4 string=0x00000000004860F8 "\t"
 *   insn=0x00000000004860F4 string=0x0000000000486130 "\t"
 *   insn=0x00000000004860F8 string=0x00000000004860FC "*"
 *   insn=0x00000000004860FC string=0x0000000000486100 "\n"
 *   insn=0x0000000000486104 string=0x0000000000486108 ""
 *   insn=0x0000000000486108 string=0x000000000048613C "?"
 *   insn=0x000000000048610C string=0x0000000000486110 ")=G"
 *   insn=0x0000000000486110 string=0x0000000000486114 "!"
 *   insn=0x0000000000486118 string=0x000000000048611C "\t"
 *   insn=0x0000000000486118 string=0x0000000000486150 "\t"
 *   insn=0x000000000048611C string=0x0000000000486120 "*"
 *   insn=0x0000000000486120 string=0x0000000000486124 "\n"
 *   insn=0x000000000048612C string=0x000000000048615C "?"
 *   insn=0x0000000000486130 string=0x0000000000486134 "*"
 *   insn=0x0000000000486134 string=0x0000000000486138 "\n"
 *   insn=0x000000000048613C string=0x0000000000486140 ","
 *   insn=0x0000000000486150 string=0x0000000000486154 "*"
 *   insn=0x0000000000486154 string=0x0000000000486158 "\n"
 *   insn=0x0000000000486178 string=0x000000000048617C "M"
 *   insn=0x000000000048617C string=0x0000000000486180 " "
 *   insn=0x0000000000486188 string=0x000000000048618C "J"
 *   insn=0x0000000000486190 string=0x0000000000486194 "(a"
 *   insn=0x0000000000486198 string=0x000000000048619C " "
 *   insn=0x000000000048619C string=0x0000000000486240 "s"
 *   insn=0x00000000004861A0 string=0x00000000004861A4 "J=G"
 *   insn=0x00000000004861A4 string=0x00000000004861A8 ")!"
 *   insn=0x00000000004861A8 string=0x00000000004861AC "J"
 *   insn=0x00000000004861AC string=0x00000000004861B0 "*"
 *   insn=0x00000000004861AC string=0x00000000004861D4 "*"
 *   insn=0x00000000004861B0 string=0x00000000004861B4 "K"
 *   insn=0x00000000004861B4 string=0x00000000004861B8 "+"
 *   insn=0x00000000004861BC string=0x00000000004861C0 "_"
 *   insn=0x00000000004861CC string=0x00000000004861D0 ""
 *   insn=0x00000000004861D0 string=0x000000000048623C "Z"
 *   insn=0x00000000004861D4 string=0x00000000004861D8 "K"
 *   insn=0x00000000004861D8 string=0x00000000004861DC "+"
 *   insn=0x00000000004861DC string=0x00000000004861E0 "_"
 *   insn=0x00000000004861E0 string=0x00000000004861E4 "-"
 *   insn=0x00000000004861EC string=0x00000000004861F0 "s"
 *   insn=0x00000000004861F4 string=0x00000000004861F8 "$"
 *   insn=0x00000000004861F4 string=0x0000000000486248 "h"
 *   insn=0x0000000000486210 string=0x0000000000486214 ")=G"
 *   insn=0x0000000000486214 string=0x0000000000486218 "!"
 *   insn=0x000000000048621C string=0x0000000000486220 "\t"
 *   insn=0x000000000048621C string=0x0000000000486290 "\t"
 *   insn=0x0000000000486220 string=0x0000000000486224 "*"
 *   insn=0x0000000000486224 string=0x0000000000486228 "\n"
 *   insn=0x000000000048622C string=0x0000000000486230 "?"
 *   insn=0x0000000000486230 string=0x0000000000486234 "l"
 *   insn=0x0000000000486240 string=0x0000000000486244 "3"
 *   insn=0x0000000000486248 string=0x000000000048624C ""
 *   insn=0x000000000048624C string=0x0000000000486250 "h"
 *   insn=0x0000000000486254 string=0x0000000000486258 "h"
 *   insn=0x0000000000486258 string=0x000000000048625C "\t@"
 *   insn=0x0000000000486264 string=0x0000000000486268 "h\n@"
 *   insn=0x0000000000486268 string=0x000000000048626C ""
 *   insn=0x000000000048626C string=0x0000000000486270 "h\n"
 *   insn=0x0000000000486274 string=0x0000000000486278 "h"
 *   insn=0x0000000000486278 string=0x000000000048627C "@"
 *   insn=0x0000000000486290 string=0x0000000000486294 "*"
 *   insn=0x0000000000486294 string=0x0000000000486298 "\n"
 *   insn=0x0000000000486298 string=0x000000000048629C "?"
 *   insn=0x00000000004862C8 string=0x00000000004862CC "I"
 *   insn=0x00000000004862CC string=0x00000000004862D0 "("
 *   insn=0x00000000004862E4 string=0x00000000004862E8 "7"
 *   insn=0x0000000000486308 string=0x000000000048630C ""
 *   insn=0x0000000000486310 string=0x0000000000486314 """
 *   insn=0x0000000000486318 string=0x00000000001F5190 "P'"
 *   insn=0x000000000048631C string=0x0000000000486320 "@"
 *   insn=0x000000000048632C string=0x0000000000486330 ""
 *   insn=0x000000000048636C string=0x0000000000486370 "@"
 *   insn=0x0000000000486374 string=0x0000000000486378 "a"
 *   insn=0x0000000000486378 string=0x000000000048637C ""
 *   insn=0x000000000048637C string=0x0000000000486380 ")"
 *   insn=0x0000000000486384 string=0x0000000000486388 """
 *   insn=0x000000000048638C string=0x0000000000486390 "@\t"
 *   insn=0x0000000000486390 string=0x0000000000486394 "`"
 *   insn=0x000000000048639C string=0x00000000004863A0 "b"
 *   insn=0x00000000004863B0 string=0x00000000004863B4 "k"
 *   insn=0x00000000004863B4 string=0x00000000001FA560 "0'"
 *   insn=0x00000000004863BC string=0x00000000004863C0 "6"
 *   insn=0x00000000004863C4 string=0x00000000004863C8 "s"
 *   insn=0x00000000004863CC string=0x00000000004863D0 " "
 *   insn=0x00000000004863D8 string=0x00000000004863DC ""
 *   insn=0x00000000004863DC string=0x00000000004863E0 ")"
 *   insn=0x00000000004863E4 string=0x00000000004863E8 """
 *   insn=0x00000000004863E8 string=0x00000000004863EC "i"
 *   insn=0x0000000000486408 string=0x000000000048640C "`"
 *   insn=0x000000000048641C string=0x00000000001FB700 "0'"
 *   insn=0x0000000000486430 string=0x0000000000486434 ""
 *   insn=0x0000000000486438 string=0x000000000048643C ""
 *   insn=0x0000000000486448 string=0x000000000048644C "@"
 *   insn=0x000000000048644C string=0x0000000000486450 ""
 *   insn=0x0000000000486450 string=0x0000000000486454 ""
 *   insn=0x0000000000486458 string=0x000000000048645C ""
 *   insn=0x000000000048645C string=0x0000000000486460 "@"
 *   insn=0x000000000048646C string=0x0000000000486470 ")"
 *   insn=0x0000000000486480 string=0x0000000000486484 ""
 *   insn=0x0000000000486490 string=0x0000000000486494 "`"
 *   insn=0x0000000000486490 string=0x0000000000486520 "l"
 *   insn=0x00000000004864D0 string=0x00000000004864D4 "`"
 *   insn=0x00000000004864DC string=0x00000000004864E0 ")=G"
 *   insn=0x00000000004864E0 string=0x00000000004864E4 "!"
 *   insn=0x00000000004864E8 string=0x00000000004864EC "\t"
 *   insn=0x00000000004864E8 string=0x0000000000486500 "\t"
 *   insn=0x00000000004864EC string=0x00000000004864F0 "*"
 *   insn=0x00000000004864F0 string=0x00000000004864F4 "\n"
 *   insn=0x00000000004864FC string=0x000000000048650C "?"
 *   insn=0x0000000000486500 string=0x0000000000486504 "*"
 *   insn=0x0000000000486504 string=0x0000000000486508 "\n"
 *   insn=0x0000000000486528 string=0x000000000048652C "J"
 *   insn=0x0000000000486530 string=0x0000000000486534 "(a"
 *   insn=0x0000000000486540 string=0x0000000000486544 "J=G"
 *   insn=0x0000000000486544 string=0x0000000000486548 ")!"
 *   insn=0x000000000048654C string=0x0000000000486550 "*"
 *   insn=0x000000000048654C string=0x000000000048657C "*"
 *   insn=0x0000000000486550 string=0x0000000000486554 "K"
 *   insn=0x0000000000486554 string=0x0000000000486558 "+"
 *   insn=0x000000000048655C string=0x0000000000486560 "_"
 *   insn=0x0000000000486560 string=0x0000000000486564 "l"
 *   insn=0x000000000048657C string=0x0000000000486580 "K"
 *   insn=0x0000000000486580 string=0x0000000000486584 "+"
 *   insn=0x0000000000486584 string=0x0000000000486588 "_"
 *   insn=0x000000000048658C string=0x0000000000486590 "("
 *   insn=0x00000000004865A4 string=0x00000000004865A8 "("
 *   insn=0x00000000004865A8 string=0x00000000004865AC "\t\t@"
 *   insn=0x00000000004865AC string=0x00000000004865B0 ")"
 *   insn=0x00000000004865B0 string=0x00000000004865B4 "\t\t"
 *   insn=0x00000000004865B8 string=0x00000000004865BC "\t"
 *   insn=0x00000000004865BC string=0x00000000004865C0 ")@"
 *   insn=0x00000000004865C4 string=0x00000000004865C8 " "
 *   insn=0x00000000004865D0 string=0x00000000004865D4 ")"
 *   insn=0x00000000004865E4 string=0x00000000004865E8 ")=G"
 *   insn=0x00000000004865E8 string=0x00000000004865EC "!"
 *   insn=0x00000000004865EC string=0x00000000004865F0 "i"
 *   insn=0x00000000004865F0 string=0x00000000004865F4 "\t"
 *   insn=0x00000000004865F0 string=0x000000000048661C "\t"
 *   insn=0x00000000004865F4 string=0x00000000004865F8 "*"
 *   insn=0x00000000004865F8 string=0x00000000004865FC "\n"
 *   insn=0x0000000000486600 string=0x0000000000486604 "?"
 *   insn=0x0000000000486604 string=0x0000000000486608 "L"
 *   insn=0x000000000048660C string=0x0000000000486610 "e"
 *   insn=0x000000000048661C string=0x0000000000486620 "*"
 *   insn=0x0000000000486620 string=0x0000000000486624 "\n"
 *   insn=0x0000000000486624 string=0x0000000000486628 "?"
 *   insn=0x0000000000486628 string=0x000000000048662C ""
 *   insn=0x000000000048663C string=0x0000000000486640 "J"
 *   insn=0x0000000000486644 string=0x0000000000486648 "(a"
 *   insn=0x0000000000486654 string=0x0000000000486658 "J=G"
 *   insn=0x0000000000486658 string=0x000000000048665C ")!"
 *   insn=0x0000000000486660 string=0x0000000000486664 "*"
 *   insn=0x0000000000486660 string=0x0000000000486690 "*"
 *   insn=0x0000000000486664 string=0x0000000000486668 "K"
 *   insn=0x0000000000486668 string=0x000000000048666C "+"
 *   insn=0x0000000000486670 string=0x0000000000486674 "_"
 *   insn=0x0000000000486680 string=0x0000000000486684 "H"
 *   insn=0x0000000000486688 string=0x000000000048668C "0"
 *   insn=0x0000000000486690 string=0x0000000000486694 "K"
 *   insn=0x0000000000486694 string=0x0000000000486698 "+"
 *   insn=0x0000000000486698 string=0x000000000048669C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SoundEffect *__usercall Caver::SoundLibrary::EffectForName@<X0>(Caver::SoundEffect **a1@<X8>)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x22
  int v5; // w25
  Caver *v6; // x0
  Caver *v7; // x1
  __int64 v8; // x23
  Caver *v9; // x22
  int v10; // w8
  int v11; // w25
  Caver::SoundEffect *result; // x0
  Caver::SoundEffect *v13; // x22
  int v14; // w8
  char v15; // w21
  void *v16; // x0
  void *v17; // x0
  unsigned int *v18; // x8
  int v19; // w9
  unsigned int *v20; // x8
  int v21; // w9
  int v22; // w8
  __int64 v23; // [xsp+120h] [xbp-68h] BYREF
  __int64 v24; // [xsp+128h] [xbp-60h]
  Caver::SoundEffect *v25; // [xsp+130h] [xbp-58h]
  __int64 v26; // [xsp+140h] [xbp-48h]

  v26 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v25 = 0;
  v2 = std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::equal_range();
  v4 = v3;
  if ( v2 != v3 )
  {
    v5 = 0;
    do
    {
      v2 = sub_54C6A0(v2);
      ++v5;
    }
    while ( v2 != v4 );
    if ( v5 >= 1 )
    {
      v6 = (Caver *)std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::equal_range();
      v8 = (__int64)v6;
      v9 = v7;
      if ( v5 < 2 )
      {
        v10 = 0;
        if ( v6 == v7 )
          goto LABEL_18;
      }
      else
      {
        v10 = (int)Caver::fastrandom(v6) % v5;
        if ( (Caver *)v8 == v9 )
          goto LABEL_18;
      }
      v11 = v10 + 1;
      while ( --v11 )
      {
        v8 = sub_54C640(v8);
        if ( (Caver *)v8 == v9 )
          goto LABEL_18;
      }
      result = *(Caver::SoundEffect **)(v8 + 40);
      if ( result )
      {
        ++*((_DWORD *)result + 2);
        v25 = result;
        *a1 = result;
        goto LABEL_22;
      }
      v25 = 0;
    }
  }
LABEL_18:
  v13 = (Caver::SoundEffect *)operator new(0x40u);
  Caver::SoundEffect::SoundEffect(v13);
  v14 = *((_DWORD *)v13 + 2);
  v25 = v13;
  *((_DWORD *)v13 + 2) = v14 + 1;
  sub_56A6A8((char *)v13 + 24);
  sub_56A6A8((char *)v13 + 32);
  sub_566BB8((int)&v23, "wav");
  Caver::PathForResourceOfType();
  v15 = Caver::FileExistsAtPath();
  v16 = (void *)(v24 - 24);
  if ( (__int64 *)(v24 - 24) != &qword_6FD2E0 )
  {
    v18 = (unsigned int *)(v24 - 8);
    if ( &pthread_create )
    {
      do
        v19 = __ldaxr(v18);
      while ( __stlxr(v19 - 1, v18) );
    }
    else
    {
      v19 = (*v18)--;
    }
    if ( v19 <= 0 )
      operator delete(v16);
  }
  v17 = (void *)(v23 - 24);
  if ( (__int64 *)(v23 - 24) == &qword_6FD2E0 )
    goto LABEL_20;
  v20 = (unsigned int *)(v23 - 8);
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
  if ( v21 > 0 )
  {
LABEL_20:
    if ( (v15 & 1) == 0 )
      goto LABEL_35;
  }
  else
  {
    operator delete(v17);
    if ( (v15 & 1) == 0 )
    {
LABEL_35:
      result = v25;
      *a1 = 0;
      if ( !result )
        return result;
      goto LABEL_36;
    }
  }
  Caver::SoundLibrary::AddEffect();
  result = v25;
  *a1 = v25;
  if ( !result )
    return result;
LABEL_22:
  ++*((_DWORD *)result + 2);
LABEL_36:
  v22 = *((_DWORD *)result + 2) - 1;
  *((_DWORD *)result + 2) = v22;
  if ( !v22 )
    return (Caver::SoundEffect *)(*(__int64 (__fastcall **)(Caver::SoundEffect *))(*(_QWORD *)result + 8LL))(result);
  return result;
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B62B4
 * Mangled: _ZN5Caver9GameState23LoadFromProtobufMessageERKNS_5Proto9GameStateE
 * Demangled: Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *
 * Callers: 2
 *   0x0000000000200730  Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *   0x00000000003B5E68  Caver::CharacterState::~CharacterState()
 *
 * Callees: 32
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F5060  Caver::LevelState::LevelState(void)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F52E0  boost::detail::shared_count::shared_count<Caver::QuestState>(Caver::QuestState *)
 *   0x00000000001F5360  std::map<std::string,boost::shared_ptr<Caver::LevelState>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::operator[](std::string const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5700  std::vector<boost::shared_ptr<Caver::QuestText>,std::allocator<boost::shared_ptr<Caver::QuestText>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::QuestText>*,std::vector<boost::shared_ptr<Caver::QuestText>,std::allocator<boost::shared_ptr<Caver::QuestText>>>>,boost::shared_ptr<Caver::QuestText> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7080  Caver::QuestState::LoadFromProtobufMessage(Caver::Proto::QuestState const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7500  std::map<std::string,boost::shared_ptr<Caver::QuestState>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::operator[](std::string const&)
 *   0x00000000001FB4C0  Caver::CharacterState::LoadFromProtobufMessage(Caver::Proto::CharacterState const&)
 *   0x00000000001FBC60  boost::shared_ptr<Caver::QuestText>::shared_ptr<Caver::QuestText>(Caver::QuestText *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FE820  Caver::QuestText::LoadFromProtobufMessage(Caver::Proto::QuestText const&)
 *   0x00000000001FF1E0  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(std::_Rb_tree_node<std::string> *)
 *   0x00000000001FF800  Caver::LevelState::LoadFromProtobufMessage(Caver::Proto::LevelState const&)
 *   0x00000000001FFEC0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::string const&)
 *   0x00000000002003C0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::LevelState>> const&)
 *   0x0000000000200D50  Caver::QuestState::QuestState(void)
 *   0x0000000000200FC0  boost::shared_ptr<Caver::LevelState>::shared_ptr<Caver::LevelState>(Caver::LevelState *)
 *   0x0000000000201D60  Caver::StateProperties::LoadFromProtobufMessage(Caver::Proto::StateProperties const&)
 *   0x0000000000202260  Caver::Map::NodeForName(std::string const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 357
 *   insn=0x00000000003B62D0 string=0x00000000003B62D4 "X"
 *   insn=0x00000000003B62D4 string=0x00000000003B62D8 ""
 *   insn=0x00000000003B62DC string=0x00000000003B62E0 "y"
 *   insn=0x00000000003B62E8 string=0x00000000003B62EC "h\n@"
 *   insn=0x00000000003B62EC string=0x00000000003B62F0 "9"
 *   insn=0x00000000003B62F8 string=0x00000000003B62FC ")"
 *   insn=0x00000000003B62FC string=0x00000000003B6300 "("
 *   insn=0x00000000003B6304 string=0x00000000003B6308 "n"
 *   insn=0x00000000003B6308 string=0x00000000003B630C "h"@"
 *   insn=0x00000000003B6308 string=0x00000000001FB4C0 "0'"
 *   insn=0x00000000003B6314 string=0x00000000003B6318 "{"
 *   insn=0x00000000003B6314 string=0x00000000003B6484 "h"
 *   insn=0x00000000003B6318 string=0x00000000003B631C "w"
 *   insn=0x00000000003B631C string=0x00000000003B6320 "{"
 *   insn=0x00000000003B6338 string=0x00000000003B633C "\t"
 *   insn=0x00000000003B6338 string=0x00000000003B6350 "\t"
 *   insn=0x00000000003B633C string=0x00000000003B6340 "*"
 *   insn=0x00000000003B6340 string=0x00000000003B6344 "\n"
 *   insn=0x00000000003B634C string=0x00000000003B635C "?"
 *   insn=0x00000000003B6350 string=0x00000000003B6354 "*"
 *   insn=0x00000000003B6354 string=0x00000000003B6358 "\n"
 *   insn=0x00000000003B635C string=0x00000000003B6360 "l"
 *   insn=0x00000000003B636C string=0x00000000003B6370 "6"
 *   insn=0x00000000003B6370 string=0x00000000003B6374 "@"
 *   insn=0x00000000003B6374 string=0x00000000003B6474 "h""
 *   insn=0x00000000003B637C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003B6380 string=0x00000000003B6384 "7"
 *   insn=0x00000000003B6384 string=0x00000000001F5060 "P'"
 *   insn=0x00000000003B6390 string=0x00000000003B6394 "h"
 *   insn=0x00000000003B63A8 string=0x00000000003B63AC "_"
 *   insn=0x00000000003B63B8 string=0x00000000001F5360 "P'"
 *   insn=0x00000000003B63C0 string=0x00000000003B63C4 "\n"
 *   insn=0x00000000003B63C4 string=0x00000000003B63C8 "J"
 *   insn=0x00000000003B63C8 string=0x00000000003B63CC "\n"
 *   insn=0x00000000003B63D0 string=0x00000000003B63D4 "\t "
 *   insn=0x00000000003B63D4 string=0x00000000003B63D8 "6"
 *   insn=0x00000000003B63DC string=0x00000000003B63E0 ""
 *   insn=0x00000000003B63EC string=0x00000000003B63F0 "\t@"
 *   insn=0x00000000003B63FC string=0x00000000003B6400 ""
 *   insn=0x00000000003B640C string=0x00000000003B6410 "@"
 *   insn=0x00000000003B6424 string=0x00000000003B6428 "a"
 *   insn=0x00000000003B6428 string=0x00000000003B6334 "!"
 *   insn=0x00000000003B642C string=0x00000000003B6430 "6"
 *   insn=0x00000000003B6434 string=0x00000000003B6438 ""
 *   insn=0x00000000003B6448 string=0x00000000003B644C "\t@"
 *   insn=0x00000000003B6454 string=0x00000000003B6458 ""
 *   insn=0x00000000003B6468 string=0x00000000003B646C "@"
 *   insn=0x00000000003B6474 string=0x00000000003B6478 "Z"
 *   insn=0x00000000003B6478 string=0x00000000003B647C "_"
 *   insn=0x00000000003B6488 string=0x00000000003B648C "k"
 *   insn=0x00000000003B648C string=0x00000000003B6490 "|"
 *   insn=0x00000000003B648C string=0x00000000003B6618 "h^@"
 *   insn=0x00000000003B6490 string=0x00000000003B6494 "{"
 *   insn=0x00000000003B6498 string=0x00000000003B649C "{?G"
 *   insn=0x00000000003B64B8 string=0x00000000003B64BC "\t"
 *   insn=0x00000000003B64B8 string=0x00000000003B64D0 "\t"
 *   insn=0x00000000003B64BC string=0x00000000003B64C0 "*"
 *   insn=0x00000000003B64C0 string=0x00000000003B64C4 "\n"
 *   insn=0x00000000003B64CC string=0x00000000003B64DC "?"
 *   insn=0x00000000003B64D0 string=0x00000000003B64D4 "*"
 *   insn=0x00000000003B64D4 string=0x00000000003B64D8 "\n"
 *   insn=0x00000000003B64F0 string=0x00000000003B64F4 "E"
 *   insn=0x00000000003B64F4 string=0x00000000003B6608 "h"
 *   insn=0x00000000003B64F8 string=0x00000000003B64FC "9"
 *   insn=0x00000000003B6510 string=0x00000000003B6514 "s"
 *   insn=0x00000000003B6514 string=0x00000000001F52E0 "P'"
 *   insn=0x00000000003B6520 string=0x00000000003B6524 "1"
 *   insn=0x00000000003B6524 string=0x00000000003B6528 "hB@"
 *   insn=0x00000000003B6534 string=0x00000000001F7080 "0'"
 *   insn=0x00000000003B654C string=0x00000000001F7500 "0'"
 *   insn=0x00000000003B6554 string=0x00000000003B6558 "\n"
 *   insn=0x00000000003B6558 string=0x00000000003B655C "J"
 *   insn=0x00000000003B655C string=0x00000000003B6560 "\n"
 *   insn=0x00000000003B6564 string=0x00000000003B6568 "\t "
 *   insn=0x00000000003B6568 string=0x00000000003B656C "7"
 *   insn=0x00000000003B6570 string=0x00000000003B6574 ""
 *   insn=0x00000000003B6580 string=0x00000000003B6584 "\t@"
 *   insn=0x00000000003B6590 string=0x00000000003B6594 ""
 *   insn=0x00000000003B65A0 string=0x00000000003B65A4 "@"
 *   insn=0x00000000003B65BC string=0x00000000003B64B4 "!"
 *   insn=0x00000000003B65C0 string=0x00000000003B65C4 "7"
 *   insn=0x00000000003B65C8 string=0x00000000003B65CC ""
 *   insn=0x00000000003B65DC string=0x00000000003B65E0 "\t@"
 *   insn=0x00000000003B65E8 string=0x00000000003B65EC ""
 *   insn=0x00000000003B65FC string=0x00000000003B6600 "@"
 *   insn=0x00000000003B6608 string=0x00000000003B660C "Z"
 *   insn=0x00000000003B660C string=0x00000000003B6610 "_"
 *   insn=0x00000000003B6610 string=0x00000000003B6614 "+"
 *   insn=0x00000000003B6618 string=0x00000000003B661C ")"
 *   insn=0x00000000003B6624 string=0x00000000003B6628 "("
 *   insn=0x00000000003B6630 string=0x00000000003B6634 "a*@"
 *   insn=0x00000000003B6638 string=0x00000000003B663C ""
 *   insn=0x00000000003B663C string=0x00000000003B6640 "a.@"
 *   insn=0x00000000003B6648 string=0x00000000003B664C "a2@"
 *   insn=0x00000000003B6658 string=0x00000000003B665C ""
 *   insn=0x00000000003B6664 string=0x00000000003B6668 ")"
 *   insn=0x00000000003B6670 string=0x00000000003B6674 "v"
 *   insn=0x00000000003B6670 string=0x00000000003B678C "5"
 *   insn=0x00000000003B6674 string=0x00000000003B6678 "5"
 *   insn=0x00000000003B667C string=0x00000000003B6680 ""
 *   insn=0x00000000003B6690 string=0x00000000003B6694 "\t@"
 *   insn=0x00000000003B669C string=0x00000000003B66A0 ""
 *   insn=0x00000000003B66B0 string=0x00000000003B66B4 "@"
 *   insn=0x00000000003B66BC string=0x00000000003B67D0 "a:@"
 *   insn=0x00000000003B66C8 string=0x00000000003B66D8 "a6@"
 *   insn=0x00000000003B66CC string=0x00000000003B66D0 ""
 *   insn=0x00000000003B66E8 string=0x00000000003B66EC "\n"
 *   insn=0x00000000003B66EC string=0x00000000003B66F0 "J"
 *   insn=0x00000000003B66F0 string=0x00000000003B66F4 "\n"
 *   insn=0x00000000003B66FC string=0x00000000003B6700 "6"
 *   insn=0x00000000003B6704 string=0x00000000003B6708 ""
 *   insn=0x00000000003B6714 string=0x00000000003B6718 "\t@"
 *   insn=0x00000000003B6724 string=0x00000000003B6728 ""
 *   insn=0x00000000003B6734 string=0x00000000003B6738 "@"
 *   insn=0x00000000003B6744 string=0x00000000003B6748 "6"
 *   insn=0x00000000003B674C string=0x00000000003B6750 ""
 *   insn=0x00000000003B675C string=0x00000000003B6760 "\t@"
 *   insn=0x00000000003B676C string=0x00000000003B6770 ""
 *   insn=0x00000000003B677C string=0x00000000003B6780 "@"
 *   insn=0x00000000003B6790 string=0x00000000003B6794 ""
 *   insn=0x00000000003B67A4 string=0x00000000003B67A8 "\t@"
 *   insn=0x00000000003B67B0 string=0x00000000003B67B4 ""
 *   insn=0x00000000003B67C4 string=0x00000000003B67C8 "@"
 *   insn=0x00000000003B67D8 string=0x00000000003B67DC "a>@"
 *   insn=0x00000000003B67E4 string=0x00000000003B67E8 "ab@"
 *   insn=0x00000000003B67F0 string=0x00000000003B67F4 "h"C9"
 *   insn=0x00000000003B67FC string=0x00000000003B6800 "h&C9"
 *   insn=0x00000000003B6804 string=0x00000000003B6808 "aj@"
 *   insn=0x00000000003B680C string=0x00000000003B6810 "an@"
 *   insn=0x00000000003B6818 string=0x00000000003B681C "h"
 *   insn=0x00000000003B6820 string=0x00000000003B6824 "k"
 *   insn=0x00000000003B6824 string=0x00000000003B6828 "h"
 *   insn=0x00000000003B6824 string=0x00000000003B6910 "hbD9"
 *   insn=0x00000000003B6828 string=0x00000000003B682C ""
 *   insn=0x00000000003B683C string=0x00000000003B6840 "h"
 *   insn=0x00000000003B6858 string=0x00000000003B685C "hr@"
 *   insn=0x00000000003B6858 string=0x00000000001FBC60 "0'"
 *   insn=0x00000000003B686C string=0x00000000003B6870 "?"
 *   insn=0x00000000003B6878 string=0x00000000003B687C "("
 *   insn=0x00000000003B6880 string=0x00000000003B6884 "("
 *   insn=0x00000000003B6888 string=0x00000000003B688C "\t"
 *   insn=0x00000000003B6888 string=0x00000000003B6898 "(@"
 *   insn=0x00000000003B688C string=0x00000000003B6890 ")"
 *   insn=0x00000000003B6890 string=0x00000000003B6894 "\t"
 *   insn=0x00000000003B68A8 string=0x00000000003B6900 "h"
 *   insn=0x00000000003B68B4 string=0x00000000001F5700 "P'"
 *   insn=0x00000000003B68B8 string=0x00000000003B68BC "6"
 *   insn=0x00000000003B68C0 string=0x00000000003B68C4 ""
 *   insn=0x00000000003B68D4 string=0x00000000003B68D8 "\t@"
 *   insn=0x00000000003B68E0 string=0x00000000003B68E4 ""
 *   insn=0x00000000003B68F4 string=0x00000000003B68F8 "@"
 *   insn=0x00000000003B6914 string=0x00000000003B6918 "hfD9"
 *   insn=0x00000000003B691C string=0x00000000003B6920 "hjD9"
 *   insn=0x00000000003B6924 string=0x00000000003B6928 "hnD9"
 *   insn=0x00000000003B692C string=0x00000000003B6930 ""
 *   insn=0x00000000003B6938 string=0x00000000003B693C "!"
 *   insn=0x00000000003B693C string=0x00000000003B6960 "\"
 *   insn=0x00000000003B6960 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003B6968 string=0x00000000003B696C "t"
 *   insn=0x00000000003B6970 string=0x00000000003B6974 ""
 *   insn=0x00000000003B6980 string=0x00000000003B6984 "\t@"
 *   insn=0x00000000003B6990 string=0x00000000003B6994 ""
 *   insn=0x00000000003B69A0 string=0x00000000003B69A4 "@"
 *   insn=0x00000000003B69BC string=0x00000000003B69C0 ""
 *   insn=0x00000000003B69C4 string=0x00000000003B69C8 "!"
 *   insn=0x00000000003B69CC string=0x00000000003B69D0 "\t@"
 *   insn=0x00000000003B69DC string=0x00000000003B69E0 ""
 *   insn=0x00000000003B69E4 string=0x00000000003B69E8 "!"
 *   insn=0x00000000003B69EC string=0x00000000003B69F0 "@"
 *   insn=0x00000000003B69F8 string=0x00000000003B69FC "t"
 *   insn=0x00000000003B6A08 string=0x00000000003B6A0C "4"
 *   insn=0x00000000003B6A0C string=0x00000000003B6A10 "o"
 *   insn=0x00000000003B6A18 string=0x00000000003B6A1C "%"
 *   insn=0x00000000003B6A1C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B6A2C string=0x00000000003B6A30 "(a"
 *   insn=0x00000000003B6A38 string=0x00000000003B6A3C ")!"
 *   insn=0x00000000003B6A40 string=0x00000000003B6A44 "*"
 *   insn=0x00000000003B6A40 string=0x00000000003B6AB4 "*"
 *   insn=0x00000000003B6A44 string=0x00000000003B6A48 "K"
 *   insn=0x00000000003B6A48 string=0x00000000003B6A4C "+"
 *   insn=0x00000000003B6A50 string=0x00000000003B6A54 "_"
 *   insn=0x00000000003B6A60 string=0x00000000003B6A64 "P"
 *   insn=0x00000000003B6A70 string=0x00000000003B6A74 ""
 *   insn=0x00000000003B6A80 string=0x00000000003B6A84 "\t@"
 *   insn=0x00000000003B6A90 string=0x00000000003B6A94 ""
 *   insn=0x00000000003B6AA0 string=0x00000000003B6AA4 "@"
 *   insn=0x00000000003B6AAC string=0x00000000003B6AB0 "G"
 *   insn=0x00000000003B6AB4 string=0x00000000003B6AB8 "K"
 *   insn=0x00000000003B6AB8 string=0x00000000003B6ABC "+"
 *   insn=0x00000000003B6ABC string=0x00000000003B6AC0 "_"
 *   insn=0x00000000003B6AD8 string=0x00000000003B6ADC ""
 *   insn=0x00000000003B6AE0 string=0x00000000003B6AE4 "A"
 *   insn=0x00000000003B6AE8 string=0x00000000003B6AEC "\t@"
 *   insn=0x00000000003B6AF8 string=0x00000000003B6AFC ""
 *   insn=0x00000000003B6B00 string=0x00000000003B6B04 "A"
 *   insn=0x00000000003B6B08 string=0x00000000003B6B0C "@"
 *   insn=0x00000000003B6B14 string=0x00000000003B6B18 "-"
 *   insn=0x00000000003B6B24 string=0x00000000003B6B28 "4"
 *   insn=0x00000000003B6B28 string=0x00000000003B6B2C "("
 *   insn=0x00000000003B6B3C string=0x00000000003B6B40 "a+"
 *   insn=0x00000000003B6B48 string=0x00000000003B6B4C "(a"
 *   insn=0x00000000003B6B54 string=0x00000000003B6B58 ")!"
 *   insn=0x00000000003B6B5C string=0x00000000003B6B60 "*"
 *   insn=0x00000000003B6B5C string=0x00000000003B6BD4 "*"
 *   insn=0x00000000003B6B60 string=0x00000000003B6B64 "K"
 *   insn=0x00000000003B6B64 string=0x00000000003B6B68 "+"
 *   insn=0x00000000003B6B6C string=0x00000000003B6B70 "_"
 *   insn=0x00000000003B6B7C string=0x00000000003B6B80 "\t"
 *   insn=0x00000000003B6B84 string=0x00000000003B6B88 "4"
 *   insn=0x00000000003B6B8C string=0x00000000003B6B90 ""
 *   insn=0x00000000003B6B9C string=0x00000000003B6BA0 "\t@"
 *   insn=0x00000000003B6BAC string=0x00000000003B6BB0 ""
 *   insn=0x00000000003B6BBC string=0x00000000003B6BC0 "@"
 *   insn=0x00000000003B6BCC string=0x00000000003B6BD0 "=+"
 *   insn=0x00000000003B6BD4 string=0x00000000003B6BD8 "K"
 *   insn=0x00000000003B6BD8 string=0x00000000003B6BDC "+"
 *   insn=0x00000000003B6BDC string=0x00000000003B6BE0 "_"
 *   insn=0x00000000003B6C00 string=0x00000000003B6C04 "U"
 *   insn=0x00000000003B6C1C string=0x00000000003B6C20 "p"
 *   insn=0x00000000003B6C24 string=0x00000000003B6C28 ")"
 *   insn=0x00000000003B6C34 string=0x00000000003B6C38 "(A"
 *   insn=0x00000000003B6C3C string=0x00000000003B6C40 ""
 *   insn=0x00000000003B6C50 string=0x00000000003B6C54 "?/"
 *   insn=0x00000000003B6C80 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003B6C84 string=0x00000000003B6C88 "a"
 *   insn=0x00000000003B6C88 string=0x00000000003B6C8C "`B"
 *   insn=0x00000000003B6C8C string=0x00000000003B6C90 "T!"
 *   insn=0x00000000003B6C90 string=0x00000000003B6C94 "h"
 *   insn=0x00000000003B6C94 string=0x00000000003B6C98 "i"
 *   insn=0x00000000003B6C98 string=0x00000000003B6C9C ")"
 *   insn=0x00000000003B6CA8 string=0x00000000003B6CAC "i"
 *   insn=0x00000000003B6CAC string=0x00000000003B6CB0 ")=G"
 *   insn=0x00000000003B6CB0 string=0x00000000003B6CB4 "!"
 *   insn=0x00000000003B6CB8 string=0x00000000003B6CBC "\t"
 *   insn=0x00000000003B6CB8 string=0x00000000003B6CE8 "\t"
 *   insn=0x00000000003B6CBC string=0x00000000003B6CC0 "*"
 *   insn=0x00000000003B6CC0 string=0x00000000003B6CC4 "\n"
 *   insn=0x00000000003B6CC8 string=0x00000000003B6CCC "?"
 *   insn=0x00000000003B6CCC string=0x00000000003B6CD0 "l"
 *   insn=0x00000000003B6CDC string=0x00000000003B6CE0 "t"
 *   insn=0x00000000003B6CE8 string=0x00000000003B6CEC "*"
 *   insn=0x00000000003B6CEC string=0x00000000003B6CF0 "\n"
 *   insn=0x00000000003B6CF0 string=0x00000000003B6CF4 "?"
 *   insn=0x00000000003B6D08 string=0x00000000003B6D0C "j"
 *   insn=0x00000000003B6D0C string=0x00000000003B6D10 "J"
 *   insn=0x00000000003B6D14 string=0x00000000003B6D18 "(a"
 *   insn=0x00000000003B6D20 string=0x00000000003B6D24 "j"
 *   insn=0x00000000003B6D24 string=0x00000000003B6D28 "J=G"
 *   insn=0x00000000003B6D28 string=0x00000000003B6D2C ")!"
 *   insn=0x00000000003B6D30 string=0x00000000003B6D34 "*"
 *   insn=0x00000000003B6D30 string=0x00000000003B6D6C "*"
 *   insn=0x00000000003B6D34 string=0x00000000003B6D38 "K"
 *   insn=0x00000000003B6D38 string=0x00000000003B6D3C "+"
 *   insn=0x00000000003B6D40 string=0x00000000003B6D44 "_"
 *   insn=0x00000000003B6D58 string=0x00000000003B6D5C "U"
 *   insn=0x00000000003B6D60 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003B6D6C string=0x00000000003B6D70 "K"
 *   insn=0x00000000003B6D70 string=0x00000000003B6D74 "+"
 *   insn=0x00000000003B6D74 string=0x00000000003B6D78 "_"
 *   insn=0x00000000003B6DA4 string=0x00000000003B6DA8 "H"
 *   insn=0x00000000003B6DAC string=0x00000000003B6DB0 ""
 *   insn=0x00000000003B6DC4 string=0x00000000003B6DC8 "7"
 *   insn=0x00000000003B6DE8 string=0x00000000003B6DEC ""
 *   insn=0x00000000003B6DF0 string=0x00000000003B6DF4 """
 *   insn=0x00000000003B6DF8 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003B6DFC string=0x00000000003B6E00 "@"
 *   insn=0x00000000003B6E0C string=0x00000000003B6E10 ""
 *   insn=0x00000000003B6E4C string=0x00000000003B6E50 "@"
 *   insn=0x00000000003B6E54 string=0x00000000003B6E58 "a"
 *   insn=0x00000000003B6E58 string=0x00000000003B6E5C ""
 *   insn=0x00000000003B6E5C string=0x00000000003B6E60 ")"
 *   insn=0x00000000003B6E64 string=0x00000000003B6E68 """
 *   insn=0x00000000003B6E6C string=0x00000000003B6E70 "`\n"
 *   insn=0x00000000003B6E90 string=0x00000000003B6E94 "$"
 *   insn=0x00000000003B6E9C string=0x00000000003B6EA0 "6"
 *   insn=0x00000000003B6EA4 string=0x00000000003B6EA8 "s"
 *   insn=0x00000000003B6EAC string=0x00000000003B6EB0 " "
 *   insn=0x00000000003B6EB8 string=0x00000000003B6EBC ""
 *   insn=0x00000000003B6EBC string=0x00000000003B6EC0 ")"
 *   insn=0x00000000003B6EC4 string=0x00000000003B6EC8 """
 *   insn=0x00000000003B6EE8 string=0x00000000003B6EEC "`"
 *   insn=0x00000000003B6EF8 string=0x00000000003B6EFC "1%"
 *   insn=0x00000000003B6F10 string=0x00000000003B6F14 "cV"
 *   insn=0x00000000003B6F18 string=0x00000000003B6F1C ""
 *   insn=0x00000000003B6F24 string=0x00000000003B6F28 "4"
 *   insn=0x00000000003B6F2C string=0x00000000003B6F30 ""
 *   insn=0x00000000003B6F3C string=0x00000000003B6F40 "\t@"
 *   insn=0x00000000003B6F4C string=0x00000000003B6F50 ""
 *   insn=0x00000000003B6F5C string=0x00000000003B6F60 "@"
 *   insn=0x00000000003B6F6C string=0x00000000003B6F70 "i"
 *   insn=0x00000000003B6F70 string=0x00000000003B6F74 ")"
 *   insn=0x00000000003B6F80 string=0x00000000003B6FE0 "i"
 *   insn=0x00000000003B6F84 string=0x00000000003B6F88 ""
 *   insn=0x00000000003B6F94 string=0x00000000003B6F98 "`"
 *   insn=0x00000000003B6FD4 string=0x00000000003B6FD8 "`"
 *   insn=0x00000000003B6FE0 string=0x00000000003B6FE4 ")=G"
 *   insn=0x00000000003B6FE4 string=0x00000000003B6FE8 "!"
 *   insn=0x00000000003B6FEC string=0x00000000003B6FF0 "\t"
 *   insn=0x00000000003B6FEC string=0x00000000003B7004 "\t"
 *   insn=0x00000000003B6FF0 string=0x00000000003B6FF4 "*"
 *   insn=0x00000000003B6FF4 string=0x00000000003B6FF8 "\n"
 *   insn=0x00000000003B7000 string=0x00000000003B7010 "?"
 *   insn=0x00000000003B7004 string=0x00000000003B7008 "*"
 *   insn=0x00000000003B7008 string=0x00000000003B700C "\n"
 *   insn=0x00000000003B7028 string=0x00000000003B702C "j"
 *   insn=0x00000000003B702C string=0x00000000003B7030 "J"
 *   insn=0x00000000003B7034 string=0x00000000003B7038 "(a"
 *   insn=0x00000000003B7040 string=0x00000000003B7044 "j"
 *   insn=0x00000000003B7044 string=0x00000000003B7048 "J=G"
 *   insn=0x00000000003B7048 string=0x00000000003B704C ")!"
 *   insn=0x00000000003B7050 string=0x00000000003B7054 "*"
 *   insn=0x00000000003B7050 string=0x00000000003B7080 "*"
 *   insn=0x00000000003B7054 string=0x00000000003B7058 "K"
 *   insn=0x00000000003B7058 string=0x00000000003B705C "+"
 *   insn=0x00000000003B7060 string=0x00000000003B7064 "_"
 *   insn=0x00000000003B7064 string=0x00000000003B7068 "l"
 *   insn=0x00000000003B7080 string=0x00000000003B7084 "K"
 *   insn=0x00000000003B7084 string=0x00000000003B7088 "+"
 *   insn=0x00000000003B7088 string=0x00000000003B708C "_"
 *   insn=0x00000000003B7090 string=0x00000000003B7094 "0"
 *   insn=0x00000000003B709C string=0x00000000003B70A0 "\t*"
 *   insn=0x00000000003B70A8 string=0x00000000003B70AC "4"
 *   insn=0x00000000003B70B0 string=0x00000000003B70B4 ""
 *   insn=0x00000000003B70C0 string=0x00000000003B70C4 "\t@"
 *   insn=0x00000000003B70D0 string=0x00000000003B70D4 ""
 *   insn=0x00000000003B70E0 string=0x00000000003B70E4 "@"
 *   insn=0x00000000003B70F0 string=0x00000000003B70F4 "i"
 *   insn=0x00000000003B70F4 string=0x00000000003B70F8 ")"
 *   insn=0x00000000003B7104 string=0x00000000003B7108 "i"
 *   insn=0x00000000003B7108 string=0x00000000003B710C ")=G"
 *   insn=0x00000000003B710C string=0x00000000003B7110 "!"
 *   insn=0x00000000003B7110 string=0x00000000003B7114 "i"
 *   insn=0x00000000003B7114 string=0x00000000003B7118 "\t"
 *   insn=0x00000000003B7114 string=0x00000000003B7140 "\t"
 *   insn=0x00000000003B7118 string=0x00000000003B711C "*"
 *   insn=0x00000000003B711C string=0x00000000003B7120 "\n"
 *   insn=0x00000000003B7124 string=0x00000000003B7128 "?"
 *   insn=0x00000000003B7128 string=0x00000000003B712C "L"
 *   insn=0x00000000003B7140 string=0x00000000003B7144 "*"
 *   insn=0x00000000003B7144 string=0x00000000003B7148 "\n"
 *   insn=0x00000000003B7148 string=0x00000000003B714C "?"
 *   insn=0x00000000003B714C string=0x00000000003B7150 ""
 *   insn=0x00000000003B715C string=0x00000000003B7160 "j"
 *   insn=0x00000000003B7160 string=0x00000000003B7164 "J"
 *   insn=0x00000000003B7168 string=0x00000000003B716C "(a"
 *   insn=0x00000000003B7174 string=0x00000000003B7178 "j"
 *   insn=0x00000000003B7178 string=0x00000000003B717C "J=G"
 *   insn=0x00000000003B717C string=0x00000000003B7180 ")!"
 *   insn=0x00000000003B7184 string=0x00000000003B7188 "*"
 *   insn=0x00000000003B7184 string=0x00000000003B71B4 "*"
 *   insn=0x00000000003B7188 string=0x00000000003B718C "K"
 *   insn=0x00000000003B718C string=0x00000000003B7190 "+"
 *   insn=0x00000000003B7194 string=0x00000000003B7198 "_"
 *   insn=0x00000000003B71AC string=0x00000000003B71B0 "g\"
 *   insn=0x00000000003B71B4 string=0x00000000003B71B8 "K"
 *   insn=0x00000000003B71B8 string=0x00000000003B71BC "+"
 *   insn=0x00000000003B71BC string=0x00000000003B71C0 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameState::LoadFromProtobufMessage(Caver::GameState *this, const Caver::Proto::GameState *a2)
{
  Caver::CharacterState *v4; // x0
  const Caver::Proto::GameState *v5; // x8
  __int64 i; // x26
  unsigned int *v7; // x8
  int v8; // w9
  Caver::QuestState *v9; // x22
  Caver::LevelState *v10; // x0
  Caver::QuestState **v11; // x0
  Caver::QuestState *v12; // x8
  Caver::QuestState *v13; // x9
  Caver::QuestState *v14; // x22
  __int64 v15; // x8
  __int64 v16; // x8
  void *v17; // x0
  __int64 v18; // x8
  __int64 v19; // x8
  __int64 j; // x26
  unsigned int *v21; // x8
  int v22; // w9
  Caver::QuestState *v23; // x23
  Caver::QuestState *v24; // x23
  _QWORD *v25; // x0
  Caver::QuestState *v26; // x8
  Caver::QuestState *v27; // x9
  _QWORD *v28; // x23
  __int64 v29; // x8
  __int64 v30; // x8
  void *v31; // x0
  __int64 v32; // x8
  __int64 v33; // x8
  const Caver::Proto::GameState *v34; // x8
  __int64 v35; // x8
  _QWORD *v36; // x21
  int v37; // w22
  __int64 v38; // x8
  __int64 v39; // x8
  Caver::QuestState *v40; // x8
  Caver::QuestState *v41; // x9
  _QWORD *v42; // x22
  __int64 v43; // x8
  __int64 v44; // x8
  Caver::QuestState *v45; // x22
  __int64 v46; // x8
  __int64 v47; // x8
  __int64 v48; // x8
  __int64 v49; // x8
  __int64 result; // x0
  __int64 v51; // x23
  _QWORD *v52; // x0
  Caver::QuestState **v53; // x1
  Caver::QuestState *v54; // x8
  Caver::QuestState *v55; // x22
  __int64 v56; // x8
  __int64 v57; // x8
  __int64 v58; // [xsp+F0h] [xbp-78h] BYREF
  Caver::QuestState *v59; // [xsp+F8h] [xbp-70h]
  Caver::QuestState *v60; // [xsp+100h] [xbp-68h]
  __int64 v61; // [xsp+110h] [xbp-58h]

  v61 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (Caver::GameState *)((char *)this + 16);
  if ( *((_QWORD *)a2 + 2) )
    v5 = a2;
  else
    v5 = (const Caver::Proto::GameState *)Caver::Proto::GameState::default_instance_;
  Caver::CharacterState::LoadFromProtobufMessage(v4, *((const Caver::Proto::CharacterState **)v5 + 2));
  if ( *((int *)a2 + 8) >= 1 )
  {
    for ( i = 0; i < *((int *)a2 + 8); ++i )
    {
      v10 = (Caver::LevelState *)operator new(0x48u);
      Caver::LevelState::LevelState(v10);
      boost::shared_ptr<Caver::LevelState>::shared_ptr<Caver::LevelState>();
      Caver::LevelState::LoadFromProtobufMessage(v59, *(const Caver::Proto::LevelState **)(*((_QWORD *)a2 + 3) + 8 * i));
      sub_56A528(&v58, v59);
      std::map<std::string,boost::shared_ptr<Caver::LevelState>>::operator[]();
      v13 = v59;
      v12 = v60;
      if ( v60 )
        ++*((_QWORD *)v60 + 1);
      v14 = v11[1];
      *v11 = v13;
      v11[1] = v12;
      if ( v14 )
      {
        v15 = *((_QWORD *)v14 + 1) - 1LL;
        *((_QWORD *)v14 + 1) = v15;
        if ( !v15 )
        {
          (*(void (__fastcall **)(Caver::QuestState *))(*(_QWORD *)v14 + 16LL))(v14);
          v16 = *((_QWORD *)v14 + 2) - 1LL;
          *((_QWORD *)v14 + 2) = v16;
          if ( !v16 )
            (*(void (__fastcall **)(Caver::QuestState *))(*(_QWORD *)v14 + 24LL))(v14);
        }
      }
      v17 = (void *)(v58 - 24);
      if ( (__int64 *)(v58 - 24) == &qword_6FD2E0 )
        goto LABEL_20;
      v7 = (unsigned int *)(v58 - 8);
      if ( &pthread_create )
      {
        do
          v8 = __ldaxr(v7);
        while ( __stlxr(v8 - 1, v7) );
      }
      else
      {
        v8 = (*v7)--;
      }
      if ( v8 > 0 )
      {
LABEL_20:
        v9 = v60;
        if ( v60 )
        {
LABEL_21:
          v18 = *((_QWORD *)v9 + 1) - 1LL;
          *((_QWORD *)v9 + 1) = v18;
          if ( !v18 )
          {
            (*(void (__fastcall **)(Caver::QuestState *))(*(_QWORD *)v9 + 16LL))(v9);
            v19 = *((_QWORD *)v9 + 2) - 1LL;
            *((_QWORD *)v9 + 2) = v19;
            if ( !v19 )
              (*(void (__fastcall **)(Caver::QuestState *))(*(_QWORD *)v9 + 24LL))(v9);
          }
        }
      }
      else
      {
        operator delete(v17);
        v9 = v60;
        if ( v60 )
          goto LABEL_21;
      }
    }
  }
  if ( *((int *)a2 + 34) >= 1 )
  {
    for ( j = 0; j < *((int *)a2 + 34); ++j )
    {
      v24 = (Caver::QuestState *)operator new(0x10u);
      Caver::QuestState::QuestState(v24);
      v59 = v24;
      boost::detail::shared_count::shared_count<Caver::QuestState>();
      boost::detail::sp_enable_shared_from_this();
      Caver::QuestState::LoadFromProtobufMessage(
        v59,
        *(const Caver::Proto::QuestState **)(*((_QWORD *)a2 + 16) + 8 * j));
      sub_56A528(&v58, v59);
      v25 = (_QWORD *)std::map<std::string,boost::shared_ptr<Caver::QuestState>>::operator[]();
      v27 = v59;
      v26 = v60;
      if ( v60 )
        ++*((_QWORD *)v60 + 1);
      v28 = (_QWORD *)v25[1];
      *v25 = v27;
      v25[1] = v26;
      if ( v28 )
      {
        v29 = v28[1] - 1LL;
        v28[1] = v29;
        if ( !v29 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
          v30 = v28[2] - 1LL;
          v28[2] = v30;
          if ( !v30 )
            (*(void (__fastcall **)(_QWORD *))(*v28 + 24LL))(v28);
        }
      }
      v31 = (void *)(v58 - 24);
      if ( (__int64 *)(v58 - 24) == &qword_6FD2E0 )
        goto LABEL_41;
      v21 = (unsigned int *)(v58 - 8);
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
      if ( v22 > 0 )
      {
LABEL_41:
        v23 = v60;
        if ( v60 )
        {
LABEL_42:
          v32 = *((_QWORD *)v23 + 1) - 1LL;
          *((_QWORD *)v23 + 1) = v32;
          if ( !v32 )
          {
            (*(void (__fastcall **)(Caver::QuestState *))(*(_QWORD *)v23 + 16LL))(v23);
            v33 = *((_QWORD *)v23 + 2) - 1LL;
            *((_QWORD *)v23 + 2) = v33;
            if ( !v33 )
              (*(void (__fastcall **)(Caver::QuestState *))(*(_QWORD *)v23 + 24LL))(v23);
          }
        }
      }
      else
      {
        operator delete(v31);
        v23 = v60;
        if ( v60 )
          goto LABEL_42;
      }
    }
  }
  if ( *((_QWORD *)a2 + 23) )
    v34 = a2;
  else
    v34 = (const Caver::Proto::GameState *)Caver::Proto::GameState::default_instance_;
  Caver::StateProperties::LoadFromProtobufMessage(
    (Caver::GameState *)((char *)this + 296),
    *((const Caver::Proto::StateProperties **)v34 + 23));
  sub_56A6A8((char *)this + 344);
  sub_56A6A8((char *)this + 352);
  sub_56A6A8((char *)this + 360);
  v35 = *(_QWORD *)(*(_QWORD *)this + 72LL);
  v36 = *(_QWORD **)(*(_QWORD *)this + 80LL);
  if ( v36 )
    ++v36[1];
  if ( !v35 )
    goto LABEL_69;
  v37 = *((_DWORD *)a2 + 71);
  if ( v36 )
  {
    v38 = v36[1] - 1LL;
    v36[1] = v38;
    if ( !v38 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v36 + 16LL))(v36);
      v39 = v36[2] - 1LL;
      v36[2] = v39;
      if ( !v39 )
        (*(void (__fastcall **)(_QWORD *))(*v36 + 24LL))(v36);
    }
  }
  if ( (v37 & 0x20) != 0 )
  {
    v36 = *(_QWORD **)(*(_QWORD *)this + 80LL);
    if ( v36 )
      ++v36[1];
    Caver::Map::NodeForName();
    v41 = v59;
    v40 = v60;
    if ( v60 )
      ++*((_QWORD *)v60 + 1);
    v42 = (_QWORD *)*((_QWORD *)this + 47);
    *((_QWORD *)this + 46) = v41;
    *((_QWORD *)this + 47) = v40;
    if ( v42 )
    {
      v43 = v42[1] - 1LL;
      v42[1] = v43;
      if ( !v43 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v42 + 16LL))(v42);
        v44 = v42[2] - 1LL;
        v42[2] = v44;
        if ( !v44 )
          (*(void (__fastcall **)(_QWORD *))(*v42 + 24LL))(v42);
      }
    }
    v45 = v60;
    if ( v60 )
    {
      v46 = *((_QWORD *)v60 + 1) - 1LL;
      *((_QWORD *)v60 + 1) = v46;
      if ( !v46 )
      {
        (*(void (__fastcall **)(Caver::QuestState *))(*(_QWORD *)v45 + 16LL))(v45);
        v47 = *((_QWORD *)v45 + 2) - 1LL;
        *((_QWORD *)v45 + 2) = v47;
        if ( !v47 )
          (*(void (__fastcall **)(Caver::QuestState *))(*(_QWORD *)v45 + 24LL))(v45);
      }
    }
LABEL_69:
    if ( v36 )
    {
      v48 = v36[1] - 1LL;
      v36[1] = v48;
      if ( !v48 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v36 + 16LL))(v36);
        v49 = v36[2] - 1LL;
        v36[2] = v49;
        if ( !v49 )
          (*(void (__fastcall **)(_QWORD *))(*v36 + 24LL))(v36);
      }
    }
  }
  sub_56A6A8((char *)this + 384);
  sub_56A6A8((char *)this + 392);
  sub_56A6A8((char *)this + 400);
  *((_BYTE *)this + 408) = *((_BYTE *)a2 + 200);
  *((_BYTE *)this + 409) = *((_BYTE *)a2 + 201);
  sub_56A6A8((char *)this + 416);
  result = sub_56A6A8((char *)this + 424);
  if ( *((int *)a2 + 58) >= 1 )
  {
    v51 = 0;
    while ( 1 )
    {
      v52 = (_QWORD *)operator new(0x20u);
      v52[2] = 0;
      v52[3] = 0;
      *v52 = &byte_6FD2F8;
      v52[1] = 0;
      boost::shared_ptr<Caver::QuestText>::shared_ptr<Caver::QuestText>();
      result = Caver::QuestText::LoadFromProtobufMessage(
                 v59,
                 *(const Caver::Proto::QuestText **)(*((_QWORD *)a2 + 28) + 8 * v51));
      v53 = (Caver::QuestState **)*((_QWORD *)this + 55);
      if ( v53 != *((Caver::QuestState ***)this + 56) )
        break;
      result = std::vector<boost::shared_ptr<Caver::QuestText>>::_M_insert_aux();
      v55 = v60;
      if ( v60 )
        goto LABEL_81;
LABEL_84:
      if ( ++v51 >= *((int *)a2 + 58) )
        goto LABEL_85;
    }
    *v53 = v59;
    v54 = v60;
    v53[1] = v60;
    if ( v54 )
      ++*((_QWORD *)v54 + 1);
    *((_QWORD *)this + 55) = v53 + 2;
    v55 = v60;
    if ( !v60 )
      goto LABEL_84;
LABEL_81:
    v56 = *((_QWORD *)v55 + 1) - 1LL;
    *((_QWORD *)v55 + 1) = v56;
    if ( !v56 )
    {
      result = (*(__int64 (__fastcall **)(Caver::QuestState *))(*(_QWORD *)v55 + 16LL))(v55);
      v57 = *((_QWORD *)v55 + 2) - 1LL;
      *((_QWORD *)v55 + 2) = v57;
      if ( !v57 )
        result = (*(__int64 (__fastcall **)(Caver::QuestState *))(*(_QWORD *)v55 + 24LL))(v55);
    }
    goto LABEL_84;
  }
LABEL_85:
  *((_BYTE *)this + 456) = *((_BYTE *)a2 + 280);
  *((_BYTE *)this + 457) = *((_BYTE *)a2 + 281);
  *((_BYTE *)this + 458) = *((_BYTE *)a2 + 282);
  *((_BYTE *)this + 459) = *((_BYTE *)a2 + 283);
  return result;
}


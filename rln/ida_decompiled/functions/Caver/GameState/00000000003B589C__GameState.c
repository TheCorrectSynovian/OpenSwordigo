/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B589C
 * Mangled: _ZN5Caver9GameStateC2ERKN5boost10shared_ptrINS_8GameDataEEE
 * Demangled: Caver::GameState::GameState(boost::shared_ptr<Caver::GameData> const&)
 *
 * Callers: 1
 *   0x00000000001F8E90  Caver::GameState::GameState(boost::shared_ptr<Caver::GameData> const&)
 *
 * Callees: 13
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8C00  Caver::CharacterState::CharacterState(void)
 *   0x00000000001F8FB0  Caver::CharacterState::~CharacterState()
 *   0x00000000001FF1E0  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(std::_Rb_tree_node<std::string> *)
 *   0x00000000001FFFD0  Caver::StateProperties::StateProperties(void)
 *   0x0000000000200870  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>> *)
 *   0x0000000000200A40  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003B5E68  Caver::CharacterState::~CharacterState()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 196
 *   insn=0x00000000003B58B4 string=0x00000000003B58B8 "W"
 *   insn=0x00000000003B58CC string=0x00000000003B58D0 "h"
 *   insn=0x00000000003B58D4 string=0x00000000003B58D8 "h"
 *   insn=0x00000000003B58DC string=0x00000000003B58E0 "\t"
 *   insn=0x00000000003B58DC string=0x00000000003B58EC "tB"
 *   insn=0x00000000003B58E0 string=0x00000000003B58E4 ")"
 *   insn=0x00000000003B58E4 string=0x00000000003B58E8 "\t"
 *   insn=0x00000000003B58F4 string=0x00000000001F8C00 "0'"
 *   insn=0x00000000003B5900 string=0x00000000003B5904 "\t"
 *   insn=0x00000000003B590C string=0x00000000003B5910 ""
 *   insn=0x00000000003B5910 string=0x00000000003B5914 "\t"
 *   insn=0x00000000003B591C string=0x00000000003B5920 "\t%"
 *   insn=0x00000000003B592C string=0x00000000003B5930 ""
 *   insn=0x00000000003B5930 string=0x00000000003B5934 "yb"
 *   insn=0x00000000003B5934 string=0x00000000003B5938 "a"
 *   insn=0x00000000003B593C string=0x00000000003B5940 " "
 *   insn=0x00000000003B5944 string=0x00000000003B5948 "h"
 *   insn=0x00000000003B5948 string=0x00000000003B594C "`b"
 *   insn=0x00000000003B594C string=0x00000000003B5950 "h"
 *   insn=0x00000000003B5954 string=0x00000000003B5958 "`j"
 *   insn=0x00000000003B596C string=0x00000000003B5970 "\n"
 *   insn=0x00000000003B596C string=0x00000000003B597C "v"
 *   insn=0x00000000003B5970 string=0x00000000003B5974 "J"
 *   insn=0x00000000003B5974 string=0x00000000003B5978 "\n"
 *   insn=0x00000000003B597C string=0x00000000003B5980 "i""
 *   insn=0x00000000003B5980 string=0x00000000003B5984 "V"
 *   insn=0x00000000003B5988 string=0x00000000003B598C ""
 *   insn=0x00000000003B5998 string=0x00000000003B599C "x"
 *   insn=0x00000000003B599C string=0x00000000003B59A0 "\t@"
 *   insn=0x00000000003B59AC string=0x00000000003B59B0 ""
 *   insn=0x00000000003B59BC string=0x00000000003B59C0 "@"
 *   insn=0x00000000003B59D8 string=0x00000000003B59F8 "6"
 *   insn=0x00000000003B59F8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003B59FC string=0x00000000003B5A00 "vf["
 *   insn=0x00000000003B5A0C string=0x00000000003B5A68 "v"
 *   insn=0x00000000003B5A10 string=0x00000000003B5A14 "7"
 *   insn=0x00000000003B5A18 string=0x00000000003B5A1C ""
 *   insn=0x00000000003B5A28 string=0x00000000003B5A2C "\t@"
 *   insn=0x00000000003B5A38 string=0x00000000003B5A3C ""
 *   insn=0x00000000003B5A48 string=0x00000000003B5A4C "@"
 *   insn=0x00000000003B5A58 string=0x00000000003B5A5C "?"
 *   insn=0x00000000003B5A68 string=0x00000000003B5A74 "h"
 *   insn=0x00000000003B5A70 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B5A78 string=0x00000000003B5A7C ")"
 *   insn=0x00000000003B5A88 string=0x00000000003B5A8C "h"
 *   insn=0x00000000003B5A88 string=0x00000000003B5BC0 "i"
 *   insn=0x00000000003B5A90 string=0x00000000003B5A94 ")"
 *   insn=0x00000000003B5A9C string=0x00000000003B5AA0 "!\n"
 *   insn=0x00000000003B5AA0 string=0x00000000003B5AA4 "h"
 *   insn=0x00000000003B5AA0 string=0x00000000003B5BE4 "i"
 *   insn=0x00000000003B5AA8 string=0x00000000003B5AAC ")"
 *   insn=0x00000000003B5AB8 string=0x00000000003B5ABC "h"
 *   insn=0x00000000003B5AB8 string=0x00000000003B5C08 "i"
 *   insn=0x00000000003B5AC0 string=0x00000000003B5AC4 ")"
 *   insn=0x00000000003B5AD0 string=0x00000000003B5AD4 "h"
 *   insn=0x00000000003B5AD0 string=0x00000000003B5C2C "i"
 *   insn=0x00000000003B5AD8 string=0x00000000003B5ADC ")"
 *   insn=0x00000000003B5AE4 string=0x00000000003B5AE8 "A"
 *   insn=0x00000000003B5AE8 string=0x00000000003B5AEC "v"
 *   insn=0x00000000003B5AE8 string=0x00000000003B5C50 "i"
 *   insn=0x00000000003B5AEC string=0x00000000003B5AF0 "6"
 *   insn=0x00000000003B5AF0 string=0x00000000003B5B34 "h"
 *   insn=0x00000000003B5AF4 string=0x00000000003B5AF8 ""
 *   insn=0x00000000003B5B04 string=0x00000000003B5B08 "\t@"
 *   insn=0x00000000003B5B14 string=0x00000000003B5B18 ""
 *   insn=0x00000000003B5B24 string=0x00000000003B5B28 "@"
 *   insn=0x00000000003B5B38 string=0x00000000003B5B3C ")"
 *   insn=0x00000000003B5B44 string=0x00000000003B5B48 "a\t"
 *   insn=0x00000000003B5B48 string=0x00000000003B5B4C "h"
 *   insn=0x00000000003B5B48 string=0x00000000003B5C74 "i"
 *   insn=0x00000000003B5B50 string=0x00000000003B5B54 ")"
 *   insn=0x00000000003B5B60 string=0x00000000003B5C98 "i"
 *   insn=0x00000000003B5B68 string=0x00000000003B5B6C ""
 *   insn=0x00000000003B5B6C string=0x00000000003B5B70 ")"
 *   insn=0x00000000003B5B7C string=0x00000000003B5B80 "i"
 *   insn=0x00000000003B5B7C string=0x00000000003B5BB0 "a"
 *   insn=0x00000000003B5B80 string=0x00000000003B5B84 ")=G"
 *   insn=0x00000000003B5B84 string=0x00000000003B5B88 "!"
 *   insn=0x00000000003B5B8C string=0x00000000003B5B90 "\t"
 *   insn=0x00000000003B5B8C string=0x00000000003B5DA4 "\t"
 *   insn=0x00000000003B5B90 string=0x00000000003B5B94 "*"
 *   insn=0x00000000003B5B94 string=0x00000000003B5B98 "\n"
 *   insn=0x00000000003B5B9C string=0x00000000003B5BA0 "?"
 *   insn=0x00000000003B5BA0 string=0x00000000003B5BA4 "l"
 *   insn=0x00000000003B5BBC string=0x00000000003B5DE4 "a"
 *   insn=0x00000000003B5BC0 string=0x00000000003B5BC4 ")=G"
 *   insn=0x00000000003B5BC4 string=0x00000000003B5BC8 "!"
 *   insn=0x00000000003B5BCC string=0x00000000003B5BD0 "\t"
 *   insn=0x00000000003B5BCC string=0x00000000003B5CBC "\t"
 *   insn=0x00000000003B5BD0 string=0x00000000003B5BD4 "*"
 *   insn=0x00000000003B5BD4 string=0x00000000003B5BD8 "\n"
 *   insn=0x00000000003B5BDC string=0x00000000003B5BE0 ":"
 *   insn=0x00000000003B5BE0 string=0x00000000003B5CC8 "?"
 *   insn=0x00000000003B5BE4 string=0x00000000003B5BE8 ")=G"
 *   insn=0x00000000003B5BE8 string=0x00000000003B5BEC "!"
 *   insn=0x00000000003B5BEC string=0x00000000003B5BF0 "i"
 *   insn=0x00000000003B5BF0 string=0x00000000003B5BF4 "\t"
 *   insn=0x00000000003B5BF0 string=0x00000000003B5CDC "\t"
 *   insn=0x00000000003B5BF4 string=0x00000000003B5BF8 "*"
 *   insn=0x00000000003B5BF8 string=0x00000000003B5BFC "\n"
 *   insn=0x00000000003B5C00 string=0x00000000003B5C04 "9"
 *   insn=0x00000000003B5C04 string=0x00000000003B5CE8 "?"
 *   insn=0x00000000003B5C08 string=0x00000000003B5C0C ")=G"
 *   insn=0x00000000003B5C0C string=0x00000000003B5C10 "!"
 *   insn=0x00000000003B5C10 string=0x00000000003B5C14 "I"
 *   insn=0x00000000003B5C14 string=0x00000000003B5C18 "\t"
 *   insn=0x00000000003B5C14 string=0x00000000003B5CFC "\t"
 *   insn=0x00000000003B5C18 string=0x00000000003B5C1C "*"
 *   insn=0x00000000003B5C1C string=0x00000000003B5C20 "\n"
 *   insn=0x00000000003B5C24 string=0x00000000003B5C28 "8"
 *   insn=0x00000000003B5C28 string=0x00000000003B5D08 "?"
 *   insn=0x00000000003B5C2C string=0x00000000003B5C30 ")=G"
 *   insn=0x00000000003B5C30 string=0x00000000003B5C34 "!"
 *   insn=0x00000000003B5C34 string=0x00000000003B5C38 ")"
 *   insn=0x00000000003B5C38 string=0x00000000003B5C3C "\t"
 *   insn=0x00000000003B5C38 string=0x00000000003B5D1C "\t"
 *   insn=0x00000000003B5C3C string=0x00000000003B5C40 "*"
 *   insn=0x00000000003B5C40 string=0x00000000003B5C44 "\n"
 *   insn=0x00000000003B5C48 string=0x00000000003B5C4C "7"
 *   insn=0x00000000003B5C4C string=0x00000000003B5D28 "?"
 *   insn=0x00000000003B5C50 string=0x00000000003B5C54 ")=G"
 *   insn=0x00000000003B5C54 string=0x00000000003B5C58 "!"
 *   insn=0x00000000003B5C58 string=0x00000000003B5C5C "\t"
 *   insn=0x00000000003B5C5C string=0x00000000003B5C60 "\t"
 *   insn=0x00000000003B5C5C string=0x00000000003B5D3C "\t"
 *   insn=0x00000000003B5C60 string=0x00000000003B5C64 "*"
 *   insn=0x00000000003B5C64 string=0x00000000003B5C68 "\n"
 *   insn=0x00000000003B5C6C string=0x00000000003B5C70 "6"
 *   insn=0x00000000003B5C70 string=0x00000000003B5D48 "?"
 *   insn=0x00000000003B5C74 string=0x00000000003B5C78 ")=G"
 *   insn=0x00000000003B5C78 string=0x00000000003B5C7C "!"
 *   insn=0x00000000003B5C7C string=0x00000000003B5C80 ")"
 *   insn=0x00000000003B5C80 string=0x00000000003B5C84 "\t"
 *   insn=0x00000000003B5C80 string=0x00000000003B5D64 "\t"
 *   insn=0x00000000003B5C84 string=0x00000000003B5C88 "*"
 *   insn=0x00000000003B5C88 string=0x00000000003B5C8C "\n"
 *   insn=0x00000000003B5C90 string=0x00000000003B5C94 "7"
 *   insn=0x00000000003B5C94 string=0x00000000003B5D70 "?"
 *   insn=0x00000000003B5C98 string=0x00000000003B5C9C ")=G"
 *   insn=0x00000000003B5C9C string=0x00000000003B5CA0 "!"
 *   insn=0x00000000003B5CA0 string=0x00000000003B5CA4 "\t"
 *   insn=0x00000000003B5CA4 string=0x00000000003B5CA8 "\t"
 *   insn=0x00000000003B5CA4 string=0x00000000003B5D84 "\t"
 *   insn=0x00000000003B5CA8 string=0x00000000003B5CAC "*"
 *   insn=0x00000000003B5CAC string=0x00000000003B5CB0 "\n"
 *   insn=0x00000000003B5CB4 string=0x00000000003B5CB8 "6"
 *   insn=0x00000000003B5CB8 string=0x00000000003B5D90 "?"
 *   insn=0x00000000003B5CBC string=0x00000000003B5CC0 "*"
 *   insn=0x00000000003B5CC0 string=0x00000000003B5CC4 "\n"
 *   insn=0x00000000003B5CD4 string=0x00000000003B5CD8 "m"
 *   insn=0x00000000003B5CDC string=0x00000000003B5CE0 "*"
 *   insn=0x00000000003B5CE0 string=0x00000000003B5CE4 "\n"
 *   insn=0x00000000003B5CF4 string=0x00000000003B5CF8 "k"
 *   insn=0x00000000003B5CFC string=0x00000000003B5D00 "*"
 *   insn=0x00000000003B5D00 string=0x00000000003B5D04 "\n"
 *   insn=0x00000000003B5D14 string=0x00000000003B5D18 "i"
 *   insn=0x00000000003B5D1C string=0x00000000003B5D20 "*"
 *   insn=0x00000000003B5D20 string=0x00000000003B5D24 "\n"
 *   insn=0x00000000003B5D28 string=0x00000000003B5D2C "L"
 *   insn=0x00000000003B5D34 string=0x00000000003B5D38 "g"
 *   insn=0x00000000003B5D3C string=0x00000000003B5D40 "*"
 *   insn=0x00000000003B5D40 string=0x00000000003B5D44 "\n"
 *   insn=0x00000000003B5D54 string=0x00000000003B5D58 "v"
 *   insn=0x00000000003B5D5C string=0x00000000003B5D60 "u"
 *   insn=0x00000000003B5D64 string=0x00000000003B5D68 "*"
 *   insn=0x00000000003B5D68 string=0x00000000003B5D6C "\n"
 *   insn=0x00000000003B5D7C string=0x00000000003B5D80 "s"
 *   insn=0x00000000003B5D84 string=0x00000000003B5D88 "*"
 *   insn=0x00000000003B5D88 string=0x00000000003B5D8C "\n"
 *   insn=0x00000000003B5D9C string=0x00000000003B5DA0 "q"
 *   insn=0x00000000003B5DA4 string=0x00000000003B5DA8 "*"
 *   insn=0x00000000003B5DA8 string=0x00000000003B5DAC "\n"
 *   insn=0x00000000003B5DAC string=0x00000000003B5DB0 "?"
 *   insn=0x00000000003B5DB4 string=0x00000000003B5DB8 "~"
 *   insn=0x00000000003B5DC0 string=0x00000000003B5DC4 "h"
 *   insn=0x00000000003B5DC8 string=0x00000000003B5DCC "`a"
 *   insn=0x00000000003B5DD0 string=0x00000000003B5DD4 "7"
 *   insn=0x00000000003B5DD8 string=0x00000000003B5DDC "\a"
 *   insn=0x00000000003B5DE4 string=0x00000000003B5DE8 "`"
 *   insn=0x00000000003B5DEC string=0x00000000003B5DF0 "an@"
 *   insn=0x00000000003B5DF0 string=0x00000000003B5DF4 "`""
 *   insn=0x00000000003B5DFC string=0x00000000003B5E00 "l"
 *   insn=0x00000000003B5E00 string=0x00000000001F8FB0 "0'"
 *   insn=0x00000000003B5E04 string=0x00000000003B5E0C "s"
 *   insn=0x00000000003B5E0C string=0x00000000003B5E10 "3"
 *   insn=0x00000000003B5E10 string=0x00000000003B5E14 "h"
 *   insn=0x00000000003B5E14 string=0x00000000003B5E18 ""
 *   insn=0x00000000003B5E18 string=0x00000000003B5E1C "h"
 *   insn=0x00000000003B5E20 string=0x00000000003B5E24 "h"
 *   insn=0x00000000003B5E24 string=0x00000000003B5E28 "\t@"
 *   insn=0x00000000003B5E30 string=0x00000000003B5E34 "h\n@"
 *   insn=0x00000000003B5E34 string=0x00000000003B5E38 ""
 *   insn=0x00000000003B5E38 string=0x00000000003B5E3C "h\n"
 *   insn=0x00000000003B5E40 string=0x00000000003B5E44 "h"
 *   insn=0x00000000003B5E44 string=0x00000000003B5E48 "@"
 *   insn=0x00000000003B5E60 string=0x00000000003B5E64 ":a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameState::GameState(__int64 a1, _QWORD *a2)
{
  __int64 v4; // x8
  __int64 result; // x0
  int64x2_t v6; // q0
  __int64 v7; // x8
  __int64 v8; // x9
  _QWORD *v9; // x22
  __int64 v10; // x8
  __int64 v11; // x8

  _ReadStatusReg(TPIDR_EL0);
  *(_QWORD *)a1 = *a2;
  v4 = a2[1];
  *(_QWORD *)(a1 + 8) = v4;
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  Caver::CharacterState::CharacterState((Caver::CharacterState *)(a1 + 16));
  *(_OWORD *)(a1 + 208) = 0u;
  *(_OWORD *)(a1 + 224) = 0u;
  *(_QWORD *)(a1 + 232) = a1 + 208;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 224) = a1 + 208;
  *(_OWORD *)(a1 + 280) = 0u;
  *(_OWORD *)(a1 + 256) = 0u;
  *(_QWORD *)(a1 + 272) = a1 + 256;
  *(_QWORD *)(a1 + 280) = a1 + 256;
  result = Caver::StateProperties::StateProperties((Caver::StateProperties *)(a1 + 296));
  v6 = vdupq_n_s64((unsigned __int64)&byte_6FD2F8);
  *(int64x2_t *)(a1 + 344) = v6;
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 360) = &byte_6FD2F8;
  *(int64x2_t *)(a1 + 384) = v6;
  *(_QWORD *)(a1 + 400) = &byte_6FD2F8;
  *(_WORD *)(a1 + 408) = 0;
  *(int64x2_t *)(a1 + 416) = v6;
  *(_DWORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0;
  *(_QWORD *)(a1 + 432) = 0;
  v8 = *a2;
  v7 = a2[1];
  if ( v7 )
    ++*(_QWORD *)(v7 + 8);
  v9 = *(_QWORD **)(a1 + 24);
  *(_QWORD *)(a1 + 16) = v8;
  *(_QWORD *)(a1 + 24) = v7;
  if ( v9 )
  {
    v10 = v9[1] - 1LL;
    v9[1] = v10;
    if ( !v10 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      v11 = v9[2] - 1LL;
      v9[2] = v11;
      if ( !v11 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
    }
  }
  return result;
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B7C8C
 * Mangled: _ZN5Caver9GameState21StateForLevelWithNameERKSsb
 * Demangled: Caver::GameState::StateForLevelWithName(std::string const&,bool)
 *
 * Callers: 2
 *   0x00000000001F6D50  Caver::GameState::StateForLevelWithName(std::string const&,bool)
 *   0x00000000003B7610  Caver::GameState::SaveToProtobufMessage(Caver::Proto::GameState *)
 *
 * Callees: 11
 *   0x00000000001F5060  Caver::LevelState::LevelState(void)
 *   0x00000000001F5360  std::map<std::string,boost::shared_ptr<Caver::LevelState>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::operator[](std::string const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6D50  Caver::GameState::StateForLevelWithName(std::string const&,bool)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD160  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::find(std::string const&)
 *   0x0000000000200FC0  boost::shared_ptr<Caver::LevelState>::shared_ptr<Caver::LevelState>(Caver::LevelState *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 46
 *   insn=0x00000000003B7CA0 string=0x00000000003B7CA4 "W"
 *   insn=0x00000000003B7CC0 string=0x00000000003B7CC4 "'"
 *   insn=0x00000000003B7CC4 string=0x00000000001FD160 "0'"
 *   insn=0x00000000003B7CCC string=0x00000000003B7CD0 "`"
 *   insn=0x00000000003B7CD0 string=0x00000000003B7CDC "5"
 *   insn=0x00000000003B7CD4 string=0x00000000003B7CD8 ";"
 *   insn=0x00000000003B7CE0 string=0x00000000003B7CE4 "?"
 *   insn=0x00000000003B7CE4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003B7CEC string=0x00000000001F5060 "P'"
 *   insn=0x00000000003B7D00 string=0x00000000003B7D04 "i"
 *   insn=0x00000000003B7D10 string=0x00000000001F5360 "P'"
 *   insn=0x00000000003B7D18 string=0x00000000003B7D1C "\n"
 *   insn=0x00000000003B7D1C string=0x00000000003B7D20 "J"
 *   insn=0x00000000003B7D20 string=0x00000000003B7D24 "\n"
 *   insn=0x00000000003B7D28 string=0x00000000003B7D2C "\t "
 *   insn=0x00000000003B7D2C string=0x00000000003B7D30 "3"
 *   insn=0x00000000003B7D30 string=0x00000000003B7D34 "h"
 *   insn=0x00000000003B7D34 string=0x00000000003B7D38 ""
 *   insn=0x00000000003B7D38 string=0x00000000003B7D3C "h"
 *   insn=0x00000000003B7D40 string=0x00000000003B7D44 "h"
 *   insn=0x00000000003B7D44 string=0x00000000003B7D48 "\t@"
 *   insn=0x00000000003B7D50 string=0x00000000003B7D54 "h\n@"
 *   insn=0x00000000003B7D54 string=0x00000000003B7D58 ""
 *   insn=0x00000000003B7D58 string=0x00000000003B7D5C "h\n"
 *   insn=0x00000000003B7D60 string=0x00000000003B7D64 "h"
 *   insn=0x00000000003B7D64 string=0x00000000003B7D68 "@"
 *   insn=0x00000000003B7D74 string=0x00000000003B7D78 "t"
 *   insn=0x00000000003B7D7C string=0x00000000003B7D80 ""
 *   insn=0x00000000003B7D90 string=0x00000000003B7D94 "\t@"
 *   insn=0x00000000003B7D9C string=0x00000000003B7DA0 ""
 *   insn=0x00000000003B7DB0 string=0x00000000003B7DB4 "@"
 *   insn=0x00000000003B7DD0 string=0x00000000003B7DF0 "8"
 *   insn=0x00000000003B7DF0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003B7DF8 string=0x00000000003B7DFC "-"
 *   insn=0x00000000003B7DFC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B7E0C string=0x00000000003B7E10 "4"
 *   insn=0x00000000003B7E14 string=0x00000000003B7E18 ""
 *   insn=0x00000000003B7E24 string=0x00000000003B7E28 "\t@"
 *   insn=0x00000000003B7E34 string=0x00000000003B7E38 ""
 *   insn=0x00000000003B7E44 string=0x00000000003B7E48 "@"
 *   insn=0x00000000003B7E58 string=0x00000000003B7E5C "<Y"
 *   insn=0x00000000003B7E5C string=0x00000000003B7E60 ""
 *   insn=0x00000000003B7E60 string=0x00000000003B7E64 ""
 *   insn=0x00000000003B7E68 string=0x00000000003B7E6C "`"
 *   insn=0x00000000003B7E6C string=0x00000000003B7E70 """
 *   insn=0x00000000003B7E78 string=0x00000000001F6D50 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameState::StateForLevelWithName(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // x0
  __int64 v6; // x19
  Caver::LevelState *v7; // x0
  _QWORD *v8; // x0
  _QWORD *v9; // x19
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v15; // [xsp+8h] [xbp-48h]
  _QWORD *v16; // [xsp+10h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::find();
  if ( a1 + 208 != v5 )
    return *(_QWORD *)(v5 + 40);
  if ( (a3 & 1) == 0 )
    return 0;
  v7 = (Caver::LevelState *)operator new(0x48u);
  Caver::LevelState::LevelState(v7);
  boost::shared_ptr<Caver::LevelState>::shared_ptr<Caver::LevelState>();
  sub_56A6A8(v15);
  std::map<std::string,boost::shared_ptr<Caver::LevelState>>::operator[]();
  if ( v16 )
    ++v16[1];
  v9 = (_QWORD *)v8[1];
  *v8 = v15;
  v8[1] = v16;
  if ( v9 )
  {
    v10 = v9[1] - 1LL;
    v9[1] = v10;
    if ( !v10 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      v11 = v9[2] - 1LL;
      v9[2] = v11;
      if ( !v11 )
        (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
    }
  }
  v6 = v15;
  if ( v16 )
  {
    v12 = v16[1] - 1LL;
    v16[1] = v12;
    if ( !v12 )
    {
      (*(void (__fastcall **)())(*v16 + 16LL))();
      v13 = v16[2] - 1LL;
      v16[2] = v13;
      if ( !v13 )
        (*(void (__fastcall **)())(*v16 + 24LL))();
    }
  }
  return v6;
}


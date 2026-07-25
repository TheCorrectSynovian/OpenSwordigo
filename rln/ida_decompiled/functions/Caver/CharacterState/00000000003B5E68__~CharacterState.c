/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B5E68
 * Mangled: _ZN5Caver14CharacterStateD2Ev
 * Demangled: Caver::CharacterState::~CharacterState()
 *
 * Callers: 2
 *   0x00000000001F8FB0  Caver::CharacterState::~CharacterState()
 *   0x00000000003B589C  Caver::GameState::GameState(boost::shared_ptr<Caver::GameData> const&)
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002026F0  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Caver::CharacterState::ItemState>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003B62B4  Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 104
 *   insn=0x00000000003B5E7C string=0x00000000003B5E80 "tJ@"
 *   insn=0x00000000003B5E80 string=0x00000000003B5E84 "4"
 *   insn=0x00000000003B5E84 string=0x00000000003B5EC8 "tB@"
 *   insn=0x00000000003B5E88 string=0x00000000003B5E8C ""
 *   insn=0x00000000003B5E98 string=0x00000000003B5E9C "\t@"
 *   insn=0x00000000003B5EA8 string=0x00000000003B5EAC ""
 *   insn=0x00000000003B5EB8 string=0x00000000003B5EBC "@"
 *   insn=0x00000000003B5EC8 string=0x00000000003B5ECC "4"
 *   insn=0x00000000003B5ECC string=0x00000000003B5F10 "t:@"
 *   insn=0x00000000003B5ED0 string=0x00000000003B5ED4 ""
 *   insn=0x00000000003B5EE0 string=0x00000000003B5EE4 "\t@"
 *   insn=0x00000000003B5EF0 string=0x00000000003B5EF4 ""
 *   insn=0x00000000003B5F00 string=0x00000000003B5F04 "@"
 *   insn=0x00000000003B5F10 string=0x00000000003B5F14 "4"
 *   insn=0x00000000003B5F14 string=0x00000000003B5F58 "t2@"
 *   insn=0x00000000003B5F18 string=0x00000000003B5F1C ""
 *   insn=0x00000000003B5F28 string=0x00000000003B5F2C "\t@"
 *   insn=0x00000000003B5F38 string=0x00000000003B5F3C ""
 *   insn=0x00000000003B5F48 string=0x00000000003B5F4C "@"
 *   insn=0x00000000003B5F58 string=0x00000000003B5F5C "4"
 *   insn=0x00000000003B5F5C string=0x00000000003B5FA0 "tZD"
 *   insn=0x00000000003B5F60 string=0x00000000003B5F64 ""
 *   insn=0x00000000003B5F70 string=0x00000000003B5F74 "\t@"
 *   insn=0x00000000003B5F80 string=0x00000000003B5F84 ""
 *   insn=0x00000000003B5F90 string=0x00000000003B5F94 "@"
 *   insn=0x00000000003B5FA8 string=0x00000000003B6004 "t"
 *   insn=0x00000000003B5FAC string=0x00000000003B5FB0 "5"
 *   insn=0x00000000003B5FB4 string=0x00000000003B5FB8 ""
 *   insn=0x00000000003B5FC4 string=0x00000000003B5FC8 "\t@"
 *   insn=0x00000000003B5FD4 string=0x00000000003B5FD8 ""
 *   insn=0x00000000003B5FE4 string=0x00000000003B5FE8 "@"
 *   insn=0x00000000003B5FFC string=0x00000000003B6000 "t"@"
 *   insn=0x00000000003B6004 string=0x00000000003B6010 "a"
 *   insn=0x00000000003B600C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B6010 string=0x00000000003B6014 "`B"
 *   insn=0x00000000003B6018 string=0x00000000003B601C "s"
 *   insn=0x00000000003B6020 string=0x00000000003B6024 "h"
 *   insn=0x00000000003B6024 string=0x00000000003B6028 ""
 *   insn=0x00000000003B6028 string=0x00000000003B602C "h"
 *   insn=0x00000000003B602C string=0x00000000003B6030 "!"
 *   insn=0x00000000003B6030 string=0x00000000003B6034 "h"
 *   insn=0x00000000003B6038 string=0x00000000003B603C "\t@"
 *   insn=0x00000000003B6040 string=0x00000000003B6044 "h\n@"
 *   insn=0x00000000003B6044 string=0x00000000003B6048 ""
 *   insn=0x00000000003B6048 string=0x00000000003B604C "h\n"
 *   insn=0x00000000003B6050 string=0x00000000003B6068 "h"
 *   insn=0x00000000003B6080 string=0x00000000003B6084 " "
 *   insn=0x00000000003B6088 string=0x00000000003B608C "@"
 *   insn=0x00000000003B608C string=0x00000000003B618C "h^D"
 *   insn=0x00000000003B6090 string=0x00000000003B6094 "u2@"
 *   insn=0x00000000003B6098 string=0x00000000003B609C "<"
 *   insn=0x00000000003B60A0 string=0x00000000003B60A4 "u:@"
 *   insn=0x00000000003B60A8 string=0x00000000003B60AC "&"
 *   insn=0x00000000003B60AC string=0x00000000003B6144 "u2@"
 *   insn=0x00000000003B60B4 string=0x00000000003B60B8 "5"
 *   insn=0x00000000003B60B8 string=0x00000000003B60FC "u:@"
 *   insn=0x00000000003B60BC string=0x00000000003B60C0 ""
 *   insn=0x00000000003B60CC string=0x00000000003B60D0 "\t@"
 *   insn=0x00000000003B60DC string=0x00000000003B60E0 ""
 *   insn=0x00000000003B60EC string=0x00000000003B60F0 "@"
 *   insn=0x00000000003B60FC string=0x00000000003B6100 "5"
 *   insn=0x00000000003B6104 string=0x00000000003B6108 ""
 *   insn=0x00000000003B6114 string=0x00000000003B6118 "\t@"
 *   insn=0x00000000003B6124 string=0x00000000003B6128 ""
 *   insn=0x00000000003B6134 string=0x00000000003B6138 "@"
 *   insn=0x00000000003B6144 string=0x00000000003B6148 "5"
 *   insn=0x00000000003B614C string=0x00000000003B6150 ""
 *   insn=0x00000000003B615C string=0x00000000003B6160 "\t@"
 *   insn=0x00000000003B616C string=0x00000000003B6170 ""
 *   insn=0x00000000003B617C string=0x00000000003B6180 "@"
 *   insn=0x00000000003B6194 string=0x00000000003B6198 "`"
 *   insn=0x00000000003B6198 string=0x00000000003B6204 " "
 *   insn=0x00000000003B61A4 string=0x00000000003B61F4 "A"
 *   insn=0x00000000003B61A8 string=0x00000000003B61AC ")"
 *   insn=0x00000000003B61B8 string=0x00000000003B61BC ")\t@"
 *   insn=0x00000000003B61C4 string=0x00000000003B61C8 " "
 *   insn=0x00000000003B61D0 string=0x00000000003B61D4 ")"
 *   insn=0x00000000003B61E0 string=0x00000000003B61E4 "@"
 *   insn=0x00000000003B61F8 string=0x00000000003B61FC "!"
 *   insn=0x00000000003B61FC string=0x00000000003B6200 "`"@"
 *   insn=0x00000000003B6208 string=0x00000000003B624C "a"
 *   insn=0x00000000003B620C string=0x00000000003B6210 "s"
 *   insn=0x00000000003B6210 string=0x00000000003B6214 "s"
 *   insn=0x00000000003B6214 string=0x00000000003B6218 """
 *   insn=0x00000000003B6214 string=0x00000000003B6260 "h"
 *   insn=0x00000000003B6220 string=0x00000000003B6224 "H"
 *   insn=0x00000000003B6228 string=0x00000000003B622C "!"
 *   insn=0x00000000003B6230 string=0x00000000003B6234 "F`"
 *   insn=0x00000000003B6234 string=0x00000000003B6238 "h"@"
 *   insn=0x00000000003B623C string=0x00000000003B6240 "h"
 *   insn=0x00000000003B624C string=0x00000000003B6250 "`B"
 *   insn=0x00000000003B6250 string=0x00000000003B6254 "'1"
 *   insn=0x00000000003B6254 string=0x00000000003B6258 "s"
 *   insn=0x00000000003B6258 string=0x00000000003B625C "3"
 *   insn=0x00000000003B6260 string=0x00000000003B6264 ""
 *   insn=0x00000000003B6264 string=0x00000000003B6268 "h"
 *   insn=0x00000000003B626C string=0x00000000003B6270 "h"
 *   insn=0x00000000003B6270 string=0x00000000003B6274 "\t@"
 *   insn=0x00000000003B627C string=0x00000000003B6280 "h\n@"
 *   insn=0x00000000003B6280 string=0x00000000003B6284 ""
 *   insn=0x00000000003B6284 string=0x00000000003B6288 "h\n"
 *   insn=0x00000000003B628C string=0x00000000003B6290 "h"
 *   insn=0x00000000003B6290 string=0x00000000003B6294 "@"
 *   insn=0x00000000003B62AC string=0x00000000003B62B0 "'`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CharacterState::~CharacterState(Caver::CharacterState *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8
  _QWORD *v14; // x20
  _QWORD *v15; // x22
  _QWORD *v16; // x21
  __int64 v17; // x8
  __int64 v18; // x8
  _QWORD *v19; // x19
  __int64 v20; // x8
  __int64 v21; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 18);
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v5 = (_QWORD *)*((_QWORD *)this + 16);
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  v8 = (_QWORD *)*((_QWORD *)this + 14);
  if ( v8 )
  {
    v9 = v8[1] - 1LL;
    v8[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  v11 = (_QWORD *)*((_QWORD *)this + 12);
  if ( v11 )
  {
    v12 = v11[1] - 1LL;
    v11[1] = v12;
    if ( !v12 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  v14 = (_QWORD *)*((_QWORD *)this + 8);
  v15 = (_QWORD *)*((_QWORD *)this + 9);
  if ( v14 != v15 )
  {
    do
    {
      v16 = (_QWORD *)v14[1];
      if ( v16 )
      {
        v17 = v16[1] - 1LL;
        v16[1] = v17;
        if ( !v17 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
          v18 = v16[2] - 1LL;
          v16[2] = v18;
          if ( !v18 )
            (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
        }
      }
      v14 += 2;
    }
    while ( v15 != v14 );
    v14 = (_QWORD *)*((_QWORD *)this + 8);
  }
  if ( v14 )
    operator delete(v14);
  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_erase();
  v19 = (_QWORD *)*((_QWORD *)this + 1);
  if ( v19 )
  {
    v20 = v19[1] - 1LL;
    v19[1] = v20;
    if ( !v20 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
      v21 = v19[2] - 1LL;
      v19[2] = v21;
      if ( !v21 )
        (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
    }
  }
}


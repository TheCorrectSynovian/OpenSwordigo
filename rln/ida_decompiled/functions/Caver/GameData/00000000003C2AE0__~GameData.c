/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C2AE0
 * Mangled: _ZN5Caver8GameDataD2Ev
 * Demangled: Caver::GameData::~GameData()
 *
 * Callers: 1
 *   0x00000000001F74D0  Caver::GameData::~GameData()
 *
 * Callees: 7
 *   0x00000000001F3C50  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>> *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F98B0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Item>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::Item>>> *)
 *   0x00000000001FF2F0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003C2EB0  boost::detail::shared_count::shared_count<Caver::GameState>(Caver::GameState *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 83
 *   insn=0x00000000003C2AF4 string=0x00000000003C2AF8 "tZM"
 *   insn=0x00000000003C2B00 string=0x00000000003C2B5C "t"
 *   insn=0x00000000003C2B04 string=0x00000000003C2B08 "5"
 *   insn=0x00000000003C2B0C string=0x00000000003C2B10 ""
 *   insn=0x00000000003C2B1C string=0x00000000003C2B20 "\t@"
 *   insn=0x00000000003C2B2C string=0x00000000003C2B30 ""
 *   insn=0x00000000003C2B3C string=0x00000000003C2B40 "@"
 *   insn=0x00000000003C2B54 string=0x00000000003C2B58 "tj@"
 *   insn=0x00000000003C2B5C string=0x00000000003C2B68 "aZ@"
 *   insn=0x00000000003C2B64 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003C2B68 string=0x00000000003C2B6C "`"
 *   insn=0x00000000003C2B70 string=0x00000000003C2B74 "t"
 *   insn=0x00000000003C2B7C string=0x00000000003C2BD8 "t"
 *   insn=0x00000000003C2B80 string=0x00000000003C2B84 "5"
 *   insn=0x00000000003C2B88 string=0x00000000003C2B8C ""
 *   insn=0x00000000003C2B98 string=0x00000000003C2B9C "\t@"
 *   insn=0x00000000003C2BA8 string=0x00000000003C2BAC ""
 *   insn=0x00000000003C2BB8 string=0x00000000003C2BBC "@"
 *   insn=0x00000000003C2BD0 string=0x00000000003C2BD4 "tF@"
 *   insn=0x00000000003C2BD8 string=0x00000000003C2BE4 "a6@"
 *   insn=0x00000000003C2BE4 string=0x00000000003C2BE8 "`b"
 *   insn=0x00000000003C2BEC string=0x00000000003C2BF0 "t*@"
 *   insn=0x00000000003C2BEC string=0x00000000001F3C50 "P'"
 *   insn=0x00000000003C2BF0 string=0x00000000003C2BF4 "4"
 *   insn=0x00000000003C2BF4 string=0x00000000003C2C38 "tZC"
 *   insn=0x00000000003C2BF8 string=0x00000000003C2BFC ""
 *   insn=0x00000000003C2C08 string=0x00000000003C2C0C "\t@"
 *   insn=0x00000000003C2C18 string=0x00000000003C2C1C ""
 *   insn=0x00000000003C2C28 string=0x00000000003C2C2C "@"
 *   insn=0x00000000003C2C40 string=0x00000000003C2C9C "t"
 *   insn=0x00000000003C2C44 string=0x00000000003C2C48 "5"
 *   insn=0x00000000003C2C4C string=0x00000000003C2C50 ""
 *   insn=0x00000000003C2C5C string=0x00000000003C2C60 "\t@"
 *   insn=0x00000000003C2C6C string=0x00000000003C2C70 ""
 *   insn=0x00000000003C2C7C string=0x00000000003C2C80 "@"
 *   insn=0x00000000003C2C94 string=0x00000000003C2C98 "t"
 *   insn=0x00000000003C2C9C string=0x00000000003C2CA8 "a\n@"
 *   insn=0x00000000003C2CC0 string=0x00000000001F98B0 "0'"
 *   insn=0x00000000003C2CC4 string=0x00000000003C2CC8 "O"
 *   insn=0x00000000003C2CC8 string=0x00000000003C2E04 "u^C"
 *   insn=0x00000000003C2CCC string=0x00000000003C2CD0 "u*@"
 *   insn=0x00000000003C2CD4 string=0x00000000003C2CD8 "K"
 *   insn=0x00000000003C2CE0 string=0x00000000003C2D40 "u"
 *   insn=0x00000000003C2CE8 string=0x00000000003C2CEC "h"
 *   insn=0x00000000003C2CEC string=0x00000000003C2CF8 "a\n@"
 *   insn=0x00000000003C2CF0 string=0x00000000003C2CF4 "o"
 *   insn=0x00000000003C2D08 string=0x00000000003C2D0C "hF@"
 *   insn=0x00000000003C2D14 string=0x00000000003C2DB0 "a6@"
 *   insn=0x00000000003C2D18 string=0x00000000003C2D1C "$"
 *   insn=0x00000000003C2D1C string=0x00000000003C2DAC "A"
 *   insn=0x00000000003C2D24 string=0x00000000003C2D28 "h"
 *   insn=0x00000000003C2D28 string=0x00000000003C2D34 "aZ@"
 *   insn=0x00000000003C2D2C string=0x00000000003C2D30 "`"
 *   insn=0x00000000003C2D34 string=0x00000000003C2D38 "`"
 *   insn=0x00000000003C2D38 string=0x00000000003C2D3C "m"
 *   insn=0x00000000003C2D48 string=0x00000000003C2DA4 "u"
 *   insn=0x00000000003C2D4C string=0x00000000003C2D50 "6"
 *   insn=0x00000000003C2D54 string=0x00000000003C2D58 ""
 *   insn=0x00000000003C2D64 string=0x00000000003C2D68 "\t@"
 *   insn=0x00000000003C2D74 string=0x00000000003C2D78 ""
 *   insn=0x00000000003C2D84 string=0x00000000003C2D88 "@"
 *   insn=0x00000000003C2D9C string=0x00000000003C2DA0 "uF@"
 *   insn=0x00000000003C2DB0 string=0x00000000003C2DB4 "`b"
 *   insn=0x00000000003C2DB8 string=0x00000000003C2DBC "u*@"
 *   insn=0x00000000003C2DBC string=0x00000000003C2DC0 "5"
 *   insn=0x00000000003C2DC4 string=0x00000000003C2DC8 ""
 *   insn=0x00000000003C2DD4 string=0x00000000003C2DD8 "\t@"
 *   insn=0x00000000003C2DE4 string=0x00000000003C2DE8 ""
 *   insn=0x00000000003C2DF4 string=0x00000000003C2DF8 "@"
 *   insn=0x00000000003C2E10 string=0x00000000003C2E14 "6"
 *   insn=0x00000000003C2E18 string=0x00000000003C2E1C ""
 *   insn=0x00000000003C2E28 string=0x00000000003C2E2C "\t@"
 *   insn=0x00000000003C2E38 string=0x00000000003C2E3C ""
 *   insn=0x00000000003C2E48 string=0x00000000003C2E4C "@"
 *   insn=0x00000000003C2E60 string=0x00000000003C2E64 "u"
 *   insn=0x00000000003C2E78 string=0x00000000003C2E7C "4-"
 *   insn=0x00000000003C2E7C string=0x00000000003C2E80 "hF@"
 *   insn=0x00000000003C2E84 string=0x00000000003C2E88 ""
 *   insn=0x00000000003C2E8C string=0x00000000003C2E90 ""
 *   insn=0x00000000003C2E94 string=0x00000000003C2E98 "--"
 *   insn=0x00000000003C2E98 string=0x00000000003C2E9C "h"
 *   insn=0x00000000003C2EA0 string=0x00000000003C2EA4 "H"
 *   insn=0x00000000003C2EA8 string=0x00000000003C2EAC "(-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameData::~GameData(Caver::GameData *this)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x22
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x8
  _QWORD *v7; // x20
  _QWORD *v8; // x22
  _QWORD *v9; // x21
  __int64 v10; // x8
  __int64 v11; // x8
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x8
  _QWORD *v15; // x20
  _QWORD *v16; // x22
  _QWORD *v17; // x21
  __int64 v18; // x8
  __int64 v19; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 26);
  v3 = (_QWORD *)*((_QWORD *)this + 27);
  if ( v2 != v3 )
  {
    do
    {
      v4 = (_QWORD *)v2[1];
      if ( v4 )
      {
        v5 = v4[1] - 1LL;
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
      v2 += 2;
    }
    while ( v3 != v2 );
    v2 = (_QWORD *)*((_QWORD *)this + 26);
  }
  if ( v2 )
    operator delete(v2);
  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::_M_erase();
  v7 = (_QWORD *)*((_QWORD *)this + 17);
  v8 = (_QWORD *)*((_QWORD *)this + 18);
  if ( v7 != v8 )
  {
    do
    {
      v9 = (_QWORD *)v7[1];
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
      v7 += 2;
    }
    while ( v8 != v7 );
    v7 = (_QWORD *)*((_QWORD *)this + 17);
  }
  if ( v7 )
    operator delete(v7);
  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::_M_erase();
  v12 = (_QWORD *)*((_QWORD *)this + 10);
  if ( v12 )
  {
    v13 = v12[1] - 1LL;
    v12[1] = v13;
    if ( !v13 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      v14 = v12[2] - 1LL;
      v12[2] = v14;
      if ( !v14 )
        (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
    }
  }
  v15 = (_QWORD *)*((_QWORD *)this + 6);
  v16 = (_QWORD *)*((_QWORD *)this + 7);
  if ( v15 != v16 )
  {
    do
    {
      v17 = (_QWORD *)v15[1];
      if ( v17 )
      {
        v18 = v17[1] - 1LL;
        v17[1] = v18;
        if ( !v18 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
          v19 = v17[2] - 1LL;
          v17[2] = v19;
          if ( !v19 )
            (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
        }
      }
      v15 += 2;
    }
    while ( v16 != v15 );
    v15 = (_QWORD *)*((_QWORD *)this + 6);
  }
  if ( v15 )
    operator delete(v15);
  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Item>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::_M_erase();
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000464844
 * Mangled: _ZN5Caver5Scene26MakeUniqueObjectIdentifierERKSs
 * Demangled: Caver::Scene::MakeUniqueObjectIdentifier(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FDBD0  Caver::Scene::MakeUniqueObjectIdentifier(std::string const&)
 *
 * Callees: 17
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000200350  boost::detail::lexical_cast<int,std::string,false,char>(boost::call_traits<std::string>::param_type,char *,ulong)
 *   0x0000000000200500  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::find(std::string const&)
 *   0x0000000000200F70  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *   0x00000000005656B4  sub_5656B4
 *   0x0000000000566784  sub_566784
 *   0x0000000000567614  sub_567614
 *   0x00000000005677D4  sub_5677D4
 *   0x0000000000568098  sub_568098
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 213
 *   insn=0x0000000000464860 string=0x0000000000464864 "Y"
 *   insn=0x0000000000464868 string=0x000000000046486C "("
 *   insn=0x0000000000464888 string=0x000000000046488C "_"
 *   insn=0x000000000046488C string=0x0000000000464890 "@"
 *   insn=0x0000000000464898 string=0x000000000046489C "@"
 *   insn=0x00000000004648A0 string=0x00000000004648A4 ""
 *   insn=0x00000000004648A0 string=0x00000000004648B0 "a"
 *   insn=0x00000000004648A4 string=0x00000000004648A8 ""
 *   insn=0x00000000004648D0 string=0x00000000004648D4 "\nc"
 *   insn=0x00000000004648E8 string=0x00000000004648EC "o"
 *   insn=0x00000000004648F0 string=0x00000000004648F4 "1"
 *   insn=0x00000000004648FC string=0x0000000000464900 "\n"
 *   insn=0x0000000000464900 string=0x0000000000464904 "("
 *   insn=0x000000000046490C string=0x0000000000464910 "A"
 *   insn=0x0000000000464934 string=0x0000000000464938 "#"
 *   insn=0x000000000046493C string=0x0000000000464940 ""
 *   insn=0x0000000000464968 string=0x000000000046496C "yn"
 *   insn=0x0000000000464980 string=0x0000000000464984 "a"
 *   insn=0x0000000000464984 string=0x0000000000464BB0 "\t"
 *   insn=0x0000000000464994 string=0x0000000000464998 "{"
 *   insn=0x00000000004649A0 string=0x00000000004649A4 "A"
 *   insn=0x00000000004649B4 string=0x0000000000464BD4 "\t"
 *   insn=0x00000000004649BC string=0x0000000000595BF0 "#"
 *   insn=0x00000000004649EC string=0x00000000004649F0 "y"
 *   insn=0x0000000000464A00 string=0x0000000000464A04 "[q"
 *   insn=0x0000000000464A08 string=0x0000000000464A0C "u"
 *   insn=0x0000000000464A0C string=0x0000000000464A10 "\tc"
 *   insn=0x0000000000464A0C string=0x0000000000464A18 ""
 *   insn=0x0000000000464A14 string=0x0000000000464A20 """
 *   insn=0x0000000000464A5C string=0x0000000000464AD4 "\t"
 *   insn=0x0000000000464A68 string=0x0000000000464A6C "a"
 *   insn=0x0000000000464A6C string=0x0000000000464AF8 "\t"
 *   insn=0x0000000000464A78 string=0x0000000000464A7C "_"
 *   insn=0x0000000000464A88 string=0x0000000000464A8C "@"
 *   insn=0x0000000000464A90 string=0x0000000000464A94 ""
 *   insn=0x0000000000464A90 string=0x0000000000464AA0 "h"
 *   insn=0x0000000000464A94 string=0x0000000000464A98 ""
 *   insn=0x0000000000464AA8 string=0x0000000000464AAC "@"
 *   insn=0x0000000000464AAC string=0x0000000000464AB0 "\t"
 *   insn=0x0000000000464AB0 string=0x0000000000464AB4 ")=G"
 *   insn=0x0000000000464AB4 string=0x0000000000464AB8 "!"
 *   insn=0x0000000000464AB8 string=0x0000000000464ABC "\t"
 *   insn=0x0000000000464ABC string=0x0000000000464AC0 "\t"
 *   insn=0x0000000000464ABC string=0x0000000000464B5C "\t"
 *   insn=0x0000000000464AC0 string=0x0000000000464AC4 "*"
 *   insn=0x0000000000464AC4 string=0x0000000000464AC8 "\n"
 *   insn=0x0000000000464ACC string=0x0000000000464AD0 "&"
 *   insn=0x0000000000464AD0 string=0x0000000000464B68 "?"
 *   insn=0x0000000000464AD4 string=0x0000000000464AD8 ")=G"
 *   insn=0x0000000000464AD8 string=0x0000000000464ADC "!"
 *   insn=0x0000000000464AE0 string=0x0000000000464AE4 "\t"
 *   insn=0x0000000000464AE0 string=0x0000000000464B1C "\t"
 *   insn=0x0000000000464AE4 string=0x0000000000464AE8 "*"
 *   insn=0x0000000000464AE8 string=0x0000000000464AEC "\n"
 *   insn=0x0000000000464AF0 string=0x0000000000464AF4 ""
 *   insn=0x0000000000464AF4 string=0x0000000000464B28 "?"
 *   insn=0x0000000000464AF8 string=0x0000000000464AFC ")=G"
 *   insn=0x0000000000464AFC string=0x0000000000464B00 "!"
 *   insn=0x0000000000464B04 string=0x0000000000464B08 "\t"
 *   insn=0x0000000000464B04 string=0x0000000000464B3C "\t"
 *   insn=0x0000000000464B08 string=0x0000000000464B0C "*"
 *   insn=0x0000000000464B0C string=0x0000000000464B10 "\n"
 *   insn=0x0000000000464B18 string=0x0000000000464B48 "?"
 *   insn=0x0000000000464B1C string=0x0000000000464B20 "*"
 *   insn=0x0000000000464B20 string=0x0000000000464B24 "\n"
 *   insn=0x0000000000464B3C string=0x0000000000464B40 "*"
 *   insn=0x0000000000464B40 string=0x0000000000464B44 "\n"
 *   insn=0x0000000000464B48 string=0x0000000000464B4C ","
 *   insn=0x0000000000464B5C string=0x0000000000464B60 "*"
 *   insn=0x0000000000464B60 string=0x0000000000464B64 "\n"
 *   insn=0x0000000000464B68 string=0x0000000000464B6C "L"
 *   insn=0x0000000000464B88 string=0x0000000000464B8C "\t"
 *   insn=0x0000000000464B8C string=0x0000000000464B90 ")=G"
 *   insn=0x0000000000464B90 string=0x0000000000464B94 "!"
 *   insn=0x0000000000464B94 string=0x0000000000464B98 "\t"
 *   insn=0x0000000000464B98 string=0x0000000000464B9C "\t"
 *   insn=0x0000000000464B98 string=0x0000000000464C38 "\t"
 *   insn=0x0000000000464B9C string=0x0000000000464BA0 "*"
 *   insn=0x0000000000464BA0 string=0x0000000000464BA4 "\n"
 *   insn=0x0000000000464BA8 string=0x0000000000464BAC "&"
 *   insn=0x0000000000464BAC string=0x0000000000464C44 "?"
 *   insn=0x0000000000464BB0 string=0x0000000000464BB4 ")=G"
 *   insn=0x0000000000464BB4 string=0x0000000000464BB8 "!"
 *   insn=0x0000000000464BBC string=0x0000000000464BC0 "\t"
 *   insn=0x0000000000464BBC string=0x0000000000464BF8 "\t"
 *   insn=0x0000000000464BC0 string=0x0000000000464BC4 "*"
 *   insn=0x0000000000464BC4 string=0x0000000000464BC8 "\n"
 *   insn=0x0000000000464BCC string=0x0000000000464BD0 ""
 *   insn=0x0000000000464BD0 string=0x0000000000464C04 "?"
 *   insn=0x0000000000464BD4 string=0x0000000000464BD8 ")=G"
 *   insn=0x0000000000464BD8 string=0x0000000000464BDC "!"
 *   insn=0x0000000000464BE0 string=0x0000000000464BE4 "\t"
 *   insn=0x0000000000464BE0 string=0x0000000000464C18 "\t"
 *   insn=0x0000000000464BE4 string=0x0000000000464BE8 "*"
 *   insn=0x0000000000464BE8 string=0x0000000000464BEC "\n"
 *   insn=0x0000000000464BF4 string=0x0000000000464C24 "?"
 *   insn=0x0000000000464BF8 string=0x0000000000464BFC "*"
 *   insn=0x0000000000464BFC string=0x0000000000464C00 "\n"
 *   insn=0x0000000000464C10 string=0x0000000000464C14 "]"
 *   insn=0x0000000000464C18 string=0x0000000000464C1C "*"
 *   insn=0x0000000000464C1C string=0x0000000000464C20 "\n"
 *   insn=0x0000000000464C30 string=0x0000000000464C34 "a"
 *   insn=0x0000000000464C38 string=0x0000000000464C3C "*"
 *   insn=0x0000000000464C3C string=0x0000000000464C40 "\n"
 *   insn=0x0000000000464C50 string=0x0000000000464C54 ","
 *   insn=0x0000000000464C58 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000464C5C string=0x0000000000595C57 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x0000000000464C60 string=0x0000000000595C42 "basic_string::substr"
 *   insn=0x0000000000464C64 string=0x0000000000464C68 "!1"
 *   insn=0x0000000000464C7C string=0x0000000000464C80 "(a"
 *   insn=0x0000000000464C84 string=0x0000000000464C88 " "
 *   insn=0x0000000000464C88 string=0x0000000000464C8C "\n"
 *   insn=0x0000000000464C8C string=0x0000000000464C90 "J=G"
 *   insn=0x0000000000464C90 string=0x0000000000464C94 ")!"
 *   insn=0x0000000000464C94 string=0x0000000000464C98 "J"
 *   insn=0x0000000000464C98 string=0x0000000000464C9C "*"
 *   insn=0x0000000000464C98 string=0x0000000000464D00 "*"
 *   insn=0x0000000000464C9C string=0x0000000000464CA0 "K"
 *   insn=0x0000000000464CA0 string=0x0000000000464CA4 "+"
 *   insn=0x0000000000464CAC string=0x0000000000464D0C "_"
 *   insn=0x0000000000464CBC string=0x0000000000464CC0 "(a"
 *   insn=0x0000000000464CC8 string=0x0000000000464CDC "\n"
 *   insn=0x0000000000464CCC string=0x0000000000464CD0 "D>"
 *   insn=0x0000000000464CD0 string=0x0000000000464CD4 "/b"
 *   insn=0x0000000000464CD0 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000464CD4 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000464CDC string=0x0000000000464CE0 "J=G"
 *   insn=0x0000000000464CE0 string=0x0000000000464CE4 ")!"
 *   insn=0x0000000000464CE8 string=0x0000000000464CEC "*"
 *   insn=0x0000000000464CEC string=0x0000000000464CF0 "K"
 *   insn=0x0000000000464CF0 string=0x0000000000464CF4 "+"
 *   insn=0x0000000000464D00 string=0x0000000000464D04 "K"
 *   insn=0x0000000000464D04 string=0x0000000000464D08 "+"
 *   insn=0x0000000000464D2C string=0x0000000000464D30 "(a"
 *   insn=0x0000000000464D38 string=0x0000000000464D3C "\n"
 *   insn=0x0000000000464D3C string=0x0000000000464D40 "J=G"
 *   insn=0x0000000000464D40 string=0x0000000000464D44 ")!"
 *   insn=0x0000000000464D48 string=0x0000000000464D4C "*"
 *   insn=0x0000000000464D48 string=0x0000000000464D60 "*"
 *   insn=0x0000000000464D4C string=0x0000000000464D50 "K"
 *   insn=0x0000000000464D50 string=0x0000000000464D54 "+"
 *   insn=0x0000000000464D5C string=0x0000000000464D6C "_"
 *   insn=0x0000000000464D60 string=0x0000000000464D64 "K"
 *   insn=0x0000000000464D64 string=0x0000000000464D68 "+"
 *   insn=0x0000000000464D94 string=0x0000000000464D98 "\t"
 *   insn=0x0000000000464D98 string=0x0000000000464D9C ")=G"
 *   insn=0x0000000000464D9C string=0x0000000000464DA0 "!"
 *   insn=0x0000000000464DA4 string=0x0000000000464DA8 "\t"
 *   insn=0x0000000000464DA4 string=0x0000000000464DBC "\t"
 *   insn=0x0000000000464DA8 string=0x0000000000464DAC "*"
 *   insn=0x0000000000464DAC string=0x0000000000464DB0 "\n"
 *   insn=0x0000000000464DB8 string=0x0000000000464DC8 "?"
 *   insn=0x0000000000464DBC string=0x0000000000464DC0 "*"
 *   insn=0x0000000000464DC0 string=0x0000000000464DC4 "\n"
 *   insn=0x0000000000464DD0 string=0x0000000000464DD4 "d"
 *   insn=0x0000000000464DDC string=0x0000000000464DE0 "(a"
 *   insn=0x0000000000464DE8 string=0x0000000000464DEC "\n"
 *   insn=0x0000000000464DEC string=0x0000000000464DF0 "J=G"
 *   insn=0x0000000000464DF0 string=0x0000000000464DF4 ")!"
 *   insn=0x0000000000464DF8 string=0x0000000000464DFC "*"
 *   insn=0x0000000000464DF8 string=0x0000000000464E50 "*"
 *   insn=0x0000000000464DFC string=0x0000000000464E00 "K"
 *   insn=0x0000000000464E00 string=0x0000000000464E04 "+"
 *   insn=0x0000000000464E0C string=0x0000000000464E5C "_"
 *   insn=0x0000000000464E10 string=0x0000000000464E14 "!"
 *   insn=0x0000000000464E1C string=0x0000000000464E20 "(a"
 *   insn=0x0000000000464E28 string=0x0000000000464E2C "\n"
 *   insn=0x0000000000464E2C string=0x0000000000464E30 "J=G"
 *   insn=0x0000000000464E30 string=0x0000000000464E34 ")!"
 *   insn=0x0000000000464E38 string=0x0000000000464E3C "*"
 *   insn=0x0000000000464E3C string=0x0000000000464E40 "K"
 *   insn=0x0000000000464E40 string=0x0000000000464E44 "+"
 *   insn=0x0000000000464E50 string=0x0000000000464E54 "K"
 *   insn=0x0000000000464E54 string=0x0000000000464E58 "+"
 *   insn=0x0000000000464E68 string=0x0000000000464E6C "N"
 *   insn=0x0000000000464E6C string=0x0000000000464E70 "\n"
 *   insn=0x0000000000464E78 string=0x0000000000464E7C "(a"
 *   insn=0x0000000000464E84 string=0x0000000000464F04 "\n"
 *   insn=0x0000000000464E90 string=0x0000000000464E94 "a"
 *   insn=0x0000000000464E94 string=0x0000000000464EE0 "\t"
 *   insn=0x0000000000464EA4 string=0x0000000000464EA8 "\t"
 *   insn=0x0000000000464EA8 string=0x0000000000464EAC ")=G"
 *   insn=0x0000000000464EAC string=0x0000000000464EB0 "!"
 *   insn=0x0000000000464EB4 string=0x0000000000464EB8 "\t"
 *   insn=0x0000000000464EB4 string=0x0000000000464F6C "\t"
 *   insn=0x0000000000464EB8 string=0x0000000000464EBC "*"
 *   insn=0x0000000000464EBC string=0x0000000000464EC0 "\n"
 *   insn=0x0000000000464EC4 string=0x0000000000464EC8 "?"
 *   insn=0x0000000000464EC8 string=0x0000000000464ECC "l"
 *   insn=0x0000000000464ED0 string=0x0000000000464ED4 "4"
 *   insn=0x0000000000464ED8 string=0x0000000000464EDC "zr"
 *   insn=0x0000000000464EE0 string=0x0000000000464EE4 ")=G"
 *   insn=0x0000000000464EE4 string=0x0000000000464EE8 "!"
 *   insn=0x0000000000464EEC string=0x0000000000464EF0 "\t"
 *   insn=0x0000000000464EEC string=0x0000000000464F28 "\t"
 *   insn=0x0000000000464EF0 string=0x0000000000464EF4 "*"
 *   insn=0x0000000000464EF4 string=0x0000000000464EF8 "\n"
 *   insn=0x0000000000464EFC string=0x0000000000464F00 ""
 *   insn=0x0000000000464F00 string=0x0000000000464F34 "?"
 *   insn=0x0000000000464F04 string=0x0000000000464F08 "J=G"
 *   insn=0x0000000000464F08 string=0x0000000000464F0C ")!"
 *   insn=0x0000000000464F10 string=0x0000000000464F14 "*"
 *   insn=0x0000000000464F10 string=0x0000000000464F48 "*"
 *   insn=0x0000000000464F14 string=0x0000000000464F18 "K"
 *   insn=0x0000000000464F18 string=0x0000000000464F1C "+"
 *   insn=0x0000000000464F24 string=0x0000000000464F54 "_"
 *   insn=0x0000000000464F28 string=0x0000000000464F2C "*"
 *   insn=0x0000000000464F2C string=0x0000000000464F30 "\n"
 *   insn=0x0000000000464F48 string=0x0000000000464F4C "K"
 *   insn=0x0000000000464F4C string=0x0000000000464F50 "+"
 *   insn=0x0000000000464F6C string=0x0000000000464F70 "*"
 *   insn=0x0000000000464F70 string=0x0000000000464F74 "\n"
 *   insn=0x0000000000464F74 string=0x0000000000464F78 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::Scene::MakeUniqueObjectIdentifier(__int64 a1@<X0>, _QWORD *a2@<X1>, _QWORD *a3@<X8>)
{
  __int64 v6; // x0
  __int64 v7; // x26
  _DWORD *v8; // x0
  __int64 v9; // x0
  int v10; // w21
  void *v11; // x0
  void *v12; // x0
  __int64 v13; // x0
  __int64 v14; // x8
  char *v15; // x9
  char *v16; // x0
  void *v17; // x0
  __int64 v18; // x0
  _DWORD *v19; // x0
  __int64 *v20; // x0
  unsigned int *v21; // x8
  int v22; // w9
  unsigned int *v23; // x8
  int v24; // w9
  unsigned int *v25; // x8
  int v26; // w9
  char *v27; // x0
  unsigned int *v28; // x8
  int v29; // w9
  unsigned int *v30; // x8
  int v31; // w9
  unsigned int *v32; // x8
  int v33; // w9
  char *v34; // [xsp+0h] [xbp-90h] BYREF
  __int64 v35; // [xsp+8h] [xbp-88h] BYREF
  char *v36; // [xsp+10h] [xbp-80h] BYREF
  _QWORD v37[2]; // [xsp+20h] [xbp-70h] BYREF
  _BYTE v38[12]; // [xsp+34h] [xbp-5Ch] BYREF

  *(_QWORD *)&v38[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::find();
  v7 = a1 + 184;
  if ( a1 + 184 == v6 || (v8 = *(_DWORD **)(v6 + 40)) == 0 )
  {
    sub_56A528(a3, a2);
  }
  else
  {
    if ( !v8[2] )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = sub_568098(a2, 35, -1);
    v36 = &byte_6FD2F8;
    if ( v9 << 32 == 0xFFFFFFFF00000000LL )
    {
      sub_56A6A8(&v36);
      v10 = 2;
    }
    else
    {
      if ( *(_QWORD *)(*a2 - 24LL) < (unsigned __int64)(((v9 << 32) + 0x100000000LL) >> 32) )
        sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::substr");
      sub_566784(v37, a2);
      v10 = boost::detail::lexical_cast<int,std::string,false,char>();
      v11 = (void *)(v37[0] - 24LL);
      if ( (__int64 *)(v37[0] - 24LL) != &qword_6FD2E0 )
      {
        v30 = (unsigned int *)(v37[0] - 8LL);
        if ( &pthread_create )
        {
          do
            v31 = __ldaxr(v30);
          while ( __stlxr(v31 - 1, v30) );
        }
        else
        {
          v31 = (*v30)--;
        }
        if ( v31 <= 0 )
          operator delete(v11);
      }
      sub_566784(v37, a2);
      sub_56A6A8(&v36);
      v12 = (void *)(v37[0] - 24LL);
      if ( (__int64 *)(v37[0] - 24LL) != &qword_6FD2E0 )
      {
        v32 = (unsigned int *)(v37[0] - 8LL);
        if ( &pthread_create )
        {
          do
            v33 = __ldaxr(v32);
          while ( __stlxr(v33 - 1, v32) );
        }
        else
        {
          v33 = (*v32)--;
        }
        if ( v33 <= 0 )
          operator delete(v12);
      }
    }
    while ( 1 )
    {
      sub_56A528(&v35, &v36);
      sub_5677D4(&v35, "#", 1);
      v34 = &byte_6FD2F8;
      v13 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
      v14 = v13;
      if ( v10 < 0 )
      {
        *(_BYTE *)(v13 - 1) = 45;
        v14 = v13 - 1;
        v15 = v34;
      }
      else
      {
        v15 = &byte_6FD2F8;
      }
      sub_569E1C(&v34, 0, *((_QWORD *)v15 - 3), v14, &v38[-v14]);
      sub_56A528(a3, &v35);
      sub_567614(a3, &v34);
      v16 = v34 - 24;
      if ( v34 - 24 != (char *)&qword_6FD2E0 )
      {
        v23 = (unsigned int *)(v34 - 8);
        if ( &pthread_create )
        {
          do
            v24 = __ldaxr(v23);
          while ( __stlxr(v24 - 1, v23) );
        }
        else
        {
          v24 = (*v23)--;
        }
        if ( v24 <= 0 )
          operator delete(v16);
      }
      v17 = (void *)(v35 - 24);
      if ( (__int64 *)(v35 - 24) != &qword_6FD2E0 )
      {
        v25 = (unsigned int *)(v35 - 8);
        if ( &pthread_create )
        {
          do
            v26 = __ldaxr(v25);
          while ( __stlxr(v26 - 1, v25) );
        }
        else
        {
          v26 = (*v25)--;
        }
        if ( v26 <= 0 )
          operator delete(v17);
      }
      v18 = std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::find();
      if ( v7 == v18 )
        break;
      v19 = *(_DWORD **)(v18 + 40);
      if ( !v19 )
        break;
      if ( !v19[2] )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 8LL))(v19);
      v20 = (__int64 *)(*a3 - 24LL);
      if ( v20 != &qword_6FD2E0 )
      {
        v21 = (unsigned int *)(*a3 - 8LL);
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
        if ( v22 <= 0 )
          operator delete(v20);
      }
      ++v10;
    }
    v27 = v36 - 24;
    if ( v36 - 24 != (char *)&qword_6FD2E0 )
    {
      v28 = (unsigned int *)(v36 - 8);
      if ( &pthread_create )
      {
        do
          v29 = __ldaxr(v28);
        while ( __stlxr(v29 - 1, v28) );
      }
      else
      {
        v29 = (*v28)--;
      }
      if ( v29 <= 0 )
        operator delete(v27);
    }
  }
}


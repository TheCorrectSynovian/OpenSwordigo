/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000472850
 * Mangled: _ZN5Caver11SceneObject25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::SceneObject::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001FA570  Caver::SceneObject::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 20
 *   0x00000000001F38E0  boost::detail::shared_count::shared_count<Caver::Program>(Caver::Program *)
 *   0x00000000001F4540  Caver::BindingValue::ProgramValue(void)
 *   0x00000000001F49A0  Caver::Scene::GroupWithIdentifier(std::string const&,bool)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F65B0  Caver::SceneObjectGroup::RemoveObject(Caver::SceneObject *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB490  Caver::SceneObject::SetIdentifier(std::string const&)
 *   0x00000000001FDBD0  Caver::Scene::MakeUniqueObjectIdentifier(std::string const&)
 *   0x00000000001FEF50  Caver::FastVector<Caver::SceneObjectGroup *>::Resize(int)
 *   0x0000000000200470  Caver::SceneObjectGroup::AddObject(Caver::SceneObject *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000047301C  Caver::SceneObject::SetIdentifier(std::string const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 210
 *   insn=0x0000000000472864 string=0x0000000000472868 "W"
 *   insn=0x0000000000472874 string=0x0000000000472878 "?"
 *   insn=0x0000000000472880 string=0x0000000000472884 "?"
 *   insn=0x0000000000472884 string=0x0000000000472888 "@"
 *   insn=0x0000000000472888 string=0x000000000047288C "?"
 *   insn=0x0000000000472890 string=0x0000000000472990 "6"
 *   insn=0x0000000000472898 string=0x000000000047289C "#"
 *   insn=0x00000000004728A8 string=0x00000000004728AC "a*@"
 *   insn=0x00000000004728AC string=0x00000000004728B0 "("
 *   insn=0x00000000004728B0 string=0x00000000004728B4 "_"
 *   insn=0x00000000004728BC string=0x00000000004728C0 "4\n"
 *   insn=0x00000000004728C0 string=0x00000000001F5190 "P'"
 *   insn=0x00000000004728C8 string=0x00000000004728CC "`"
 *   insn=0x00000000004728D0 string=0x00000000004728D4 ""
 *   insn=0x00000000004728D4 string=0x00000000004728D8 "h"
 *   insn=0x00000000004728E0 string=0x00000000004728E4 "?"
 *   insn=0x00000000004728E4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004728F4 string=0x00000000001F4540 "P'"
 *   insn=0x0000000000472908 string=0x00000000001F38E0 "P'"
 *   insn=0x0000000000472918 string=0x000000000047291C "h"
 *   insn=0x0000000000472928 string=0x000000000047292C "i"
 *   insn=0x0000000000472930 string=0x0000000000472934 "4"
 *   insn=0x0000000000472934 string=0x0000000000472978 "h.@"
 *   insn=0x0000000000472938 string=0x000000000047293C ""
 *   insn=0x000000000047294C string=0x0000000000472950 "\t@"
 *   insn=0x0000000000472958 string=0x000000000047295C ""
 *   insn=0x000000000047296C string=0x0000000000472970 "@"
 *   insn=0x000000000047297C string=0x0000000000472980 "a"
 *   insn=0x0000000000472988 string=0x000000000047298C "E"
 *   insn=0x0000000000472994 string=0x0000000000472998 "h"
 *   insn=0x0000000000472998 string=0x000000000047299C "h"
 *   insn=0x000000000047299C string=0x00000000004729A0 "h"
 *   insn=0x00000000004729A0 string=0x00000000004729A4 "\t"
 *   insn=0x00000000004729AC string=0x00000000004729B0 ""
 *   insn=0x00000000004729BC string=0x00000000001F65B0 "0'"
 *   insn=0x00000000004729EC string=0x00000000004729F0 "u"
 *   insn=0x0000000000472A0C string=0x00000000001F49A0 "P'"
 *   insn=0x0000000000472A2C string=0x0000000000472A30 "t"
 *   insn=0x0000000000472A30 string=0x0000000000472A34 "t\n"
 *   insn=0x0000000000472A3C string=0x0000000000472A40 "k\n"
 *   insn=0x0000000000472A58 string=0x0000000000472A5C "H"
 *   insn=0x0000000000472A5C string=0x0000000000472A60 "u"
 *   insn=0x0000000000472A7C string=0x0000000000472A80 "T,"
 *   insn=0x0000000000472A80 string=0x00000000001FDBD0 "0'"
 *   insn=0x0000000000472A84 string=0x0000000000472A88 ")"
 *   insn=0x0000000000472A98 string=0x0000000000472A9C "G"
 *   insn=0x0000000000472AAC string=0x0000000000472AB0 ")"
 *   insn=0x0000000000472AB8 string=0x0000000000472ABC "T"
 *   insn=0x0000000000472ABC string=0x0000000000472AC0 "t2@"
 *   insn=0x0000000000472ACC string=0x0000000000472AD0 ""
 *   insn=0x0000000000472AD4 string=0x0000000000472AD8 "a"
 *   insn=0x0000000000472AE0 string=0x0000000000472AE4 "\t@"
 *   insn=0x0000000000472AEC string=0x0000000000472AF0 ""
 *   insn=0x0000000000472AF4 string=0x0000000000472AF8 "a"
 *   insn=0x0000000000472B00 string=0x0000000000472B04 "@"
 *   insn=0x0000000000472B04 string=0x0000000000472B08 "n"
 *   insn=0x0000000000472B30 string=0x0000000000472B34 "W""
 *   insn=0x0000000000472B34 string=0x00000000001FB490 "0'"
 *   insn=0x0000000000472B40 string=0x0000000000472B44 "A"
 *   insn=0x0000000000472B54 string=0x0000000000472B58 "`"
 *   insn=0x0000000000472B5C string=0x0000000000472B60 ")=G"
 *   insn=0x0000000000472B60 string=0x0000000000472B64 "!"
 *   insn=0x0000000000472B68 string=0x0000000000472B6C "\t"
 *   insn=0x0000000000472B68 string=0x0000000000472E64 "\t"
 *   insn=0x0000000000472B6C string=0x0000000000472B70 "*"
 *   insn=0x0000000000472B70 string=0x0000000000472B74 "\n"
 *   insn=0x0000000000472B7C string=0x0000000000472E70 "?"
 *   insn=0x0000000000472B90 string=0x0000000000472B94 ""
 *   insn=0x0000000000472B98 string=0x0000000000472B9C ""
 *   insn=0x0000000000472B9C string=0x0000000000472BA0 "\n"
 *   insn=0x0000000000472BA4 string=0x0000000000472BA8 "\t"
 *   insn=0x0000000000472BA8 string=0x0000000000472BAC "J!"
 *   insn=0x0000000000472BC0 string=0x0000000000472BC4 ")"
 *   insn=0x0000000000472BC0 string=0x0000000000472C20 ""
 *   insn=0x0000000000472BC4 string=0x0000000000472BC8 "?"
 *   insn=0x0000000000472BC8 string=0x0000000000472BCC "J!"
 *   insn=0x0000000000472BE0 string=0x0000000000472BE4 "\t"
 *   insn=0x0000000000472BEC string=0x0000000000472BF0 ""
 *   insn=0x0000000000472BF0 string=0x0000000000472BF4 "Hy"
 *   insn=0x0000000000472BF8 string=0x0000000000472BFC "I"
 *   insn=0x0000000000472C14 string=0x0000000000472C18 "("
 *   insn=0x0000000000472C24 string=0x0000000000472C28 "t"
 *   insn=0x0000000000472C38 string=0x0000000000472C3C ""
 *   insn=0x0000000000472C3C string=0x0000000000472C40 "(y"
 *   insn=0x0000000000472C3C string=0x0000000000472C5C "\t"
 *   insn=0x0000000000472C44 string=0x0000000000472C48 "I"
 *   insn=0x0000000000472C64 string=0x0000000000472C68 "m"
 *   insn=0x0000000000472C68 string=0x0000000000472C6C "\t}@"
 *   insn=0x0000000000472C74 string=0x0000000000472C78 "J\t"
 *   insn=0x0000000000472C78 string=0x0000000000472C7C "K"
 *   insn=0x0000000000472C7C string=0x0000000000472C80 ")"
 *   insn=0x0000000000472C80 string=0x0000000000472C84 "?"
 *   insn=0x0000000000472C84 string=0x0000000000472C88 "K"
 *   insn=0x0000000000472C88 string=0x0000000000472C8C "L"
 *   insn=0x0000000000472C98 string=0x0000000000472C9C "5y("
 *   insn=0x0000000000472CA4 string=0x0000000000472CA8 "@"
 *   insn=0x0000000000472CA8 string=0x0000000000472CAC ""
 *   insn=0x0000000000472CAC string=0x0000000000472CB0 ""
 *   insn=0x0000000000472CB4 string=0x0000000000472CB8 ""
 *   insn=0x0000000000472CB8 string=0x0000000000472CBC ""
 *   insn=0x0000000000472CEC string=0x0000000000472CF0 "J=G"
 *   insn=0x0000000000472CF4 string=0x0000000000472CF8 "\n"
 *   insn=0x0000000000472CF8 string=0x0000000000472CFC "*"
 *   insn=0x0000000000472CF8 string=0x0000000000472D58 "*"
 *   insn=0x0000000000472CFC string=0x0000000000472D00 "K"
 *   insn=0x0000000000472D00 string=0x0000000000472D04 "+"
 *   insn=0x0000000000472D0C string=0x0000000000472D64 "_"
 *   insn=0x0000000000472D10 string=0x0000000000472D14 ")=G"
 *   insn=0x0000000000472D14 string=0x0000000000472D18 "!"
 *   insn=0x0000000000472D18 string=0x0000000000472D1C "i"
 *   insn=0x0000000000472D1C string=0x0000000000472D20 "\t"
 *   insn=0x0000000000472D1C string=0x0000000000472D88 "\t"
 *   insn=0x0000000000472D20 string=0x0000000000472D24 "*"
 *   insn=0x0000000000472D24 string=0x0000000000472D28 "\n"
 *   insn=0x0000000000472D30 string=0x0000000000472D94 "?"
 *   insn=0x0000000000472D34 string=0x0000000000472D38 ")=G"
 *   insn=0x0000000000472D38 string=0x0000000000472D3C "!"
 *   insn=0x0000000000472D40 string=0x0000000000472D44 "\t"
 *   insn=0x0000000000472D40 string=0x0000000000472DF4 "\t"
 *   insn=0x0000000000472D44 string=0x0000000000472D48 "*"
 *   insn=0x0000000000472D48 string=0x0000000000472D4C "\n"
 *   insn=0x0000000000472D50 string=0x0000000000472D54 "+"
 *   insn=0x0000000000472D54 string=0x0000000000472E00 "?"
 *   insn=0x0000000000472D58 string=0x0000000000472D5C "K"
 *   insn=0x0000000000472D5C string=0x0000000000472D60 "+"
 *   insn=0x0000000000472D7C string=0x0000000000472D80 ""
 *   insn=0x0000000000472D88 string=0x0000000000472D8C "*"
 *   insn=0x0000000000472D8C string=0x0000000000472D90 "\n"
 *   insn=0x0000000000472D94 string=0x0000000000472D98 ","
 *   insn=0x0000000000472DA4 string=0x0000000000472DA8 "F"
 *   insn=0x0000000000472DAC string=0x0000000000472DB0 ")=G"
 *   insn=0x0000000000472DB0 string=0x0000000000472DB4 "!"
 *   insn=0x0000000000472DB4 string=0x0000000000472DB8 "\t"
 *   insn=0x0000000000472DB8 string=0x0000000000472DBC "\t"
 *   insn=0x0000000000472DB8 string=0x0000000000472E18 "\t"
 *   insn=0x0000000000472DBC string=0x0000000000472DC0 "*"
 *   insn=0x0000000000472DC0 string=0x0000000000472DC4 "\n"
 *   insn=0x0000000000472DCC string=0x0000000000472E24 "?"
 *   insn=0x0000000000472DD0 string=0x0000000000472DD4 ")=G"
 *   insn=0x0000000000472DD4 string=0x0000000000472DD8 "!"
 *   insn=0x0000000000472DD8 string=0x0000000000472DDC "\t"
 *   insn=0x0000000000472DDC string=0x0000000000472DE0 "\t"
 *   insn=0x0000000000472DDC string=0x0000000000472E3C "\t"
 *   insn=0x0000000000472DE0 string=0x0000000000472DE4 "*"
 *   insn=0x0000000000472DE4 string=0x0000000000472DE8 "\n"
 *   insn=0x0000000000472DF0 string=0x0000000000472E48 "?"
 *   insn=0x0000000000472DF4 string=0x0000000000472DF8 "*"
 *   insn=0x0000000000472DF8 string=0x0000000000472DFC "\n"
 *   insn=0x0000000000472E00 string=0x0000000000472E04 ","
 *   insn=0x0000000000472E08 string=0x0000000000472E0C "f"
 *   insn=0x0000000000472E18 string=0x0000000000472E1C "*"
 *   insn=0x0000000000472E1C string=0x0000000000472E20 "\n"
 *   insn=0x0000000000472E2C string=0x0000000000472E30 "]"
 *   insn=0x0000000000472E3C string=0x0000000000472E40 "*"
 *   insn=0x0000000000472E40 string=0x0000000000472E44 "\n"
 *   insn=0x0000000000472E50 string=0x0000000000472E54 "T"
 *   insn=0x0000000000472E58 string=0x0000000000472E5C "`"
 *   insn=0x0000000000472E64 string=0x0000000000472E68 "*"
 *   insn=0x0000000000472E68 string=0x0000000000472E6C "\n"
 *   insn=0x0000000000472E78 string=0x0000000000472E7C "J"
 *   insn=0x0000000000472E84 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000472E98 string=0x0000000000472E9C " "
 *   insn=0x0000000000472E9C string=0x0000000000472EA0 "@"
 *   insn=0x0000000000472EA0 string=0x0000000000472EA4 ""
 *   insn=0x0000000000472EA4 string=0x0000000000472EA8 ""
 *   insn=0x0000000000472EAC string=0x0000000000472EB0 ""
 *   insn=0x0000000000472EB0 string=0x0000000000472EB4 ""
 *   insn=0x0000000000472EB8 string=0x0000000000472EBC "Q"
 *   insn=0x0000000000472EC4 string=0x0000000000472EC8 "$"
 *   insn=0x0000000000472ED0 string=0x0000000000472ED4 "(a"
 *   insn=0x0000000000472ED8 string=0x0000000000472EDC " \t"
 *   insn=0x0000000000472EE0 string=0x0000000000472EE4 "J=G"
 *   insn=0x0000000000472EE4 string=0x0000000000472EE8 ")!"
 *   insn=0x0000000000472EEC string=0x0000000000472EF0 "*"
 *   insn=0x0000000000472EEC string=0x0000000000472F1C "*"
 *   insn=0x0000000000472EF0 string=0x0000000000472EF4 "K"
 *   insn=0x0000000000472EF4 string=0x0000000000472EF8 "+"
 *   insn=0x0000000000472EFC string=0x0000000000472F00 "_"
 *   insn=0x0000000000472F0C string=0x0000000000472F10 "%"
 *   insn=0x0000000000472F14 string=0x0000000000472F18 "k:"
 *   insn=0x0000000000472F1C string=0x0000000000472F20 "K"
 *   insn=0x0000000000472F20 string=0x0000000000472F24 "+"
 *   insn=0x0000000000472F24 string=0x0000000000472F28 "_"
 *   insn=0x0000000000472F2C string=0x0000000000472F30 "4"
 *   insn=0x0000000000472F38 string=0x0000000000472F3C "b:"
 *   insn=0x0000000000472F44 string=0x0000000000472F48 "(a"
 *   insn=0x0000000000472F50 string=0x0000000000472F54 "t"
 *   insn=0x0000000000472F68 string=0x0000000000472F6C ")=G"
 *   insn=0x0000000000472F6C string=0x0000000000472F70 "!"
 *   insn=0x0000000000472F74 string=0x0000000000472F78 "\t"
 *   insn=0x0000000000472F74 string=0x0000000000472FEC "\t"
 *   insn=0x0000000000472F78 string=0x0000000000472F7C "*"
 *   insn=0x0000000000472F7C string=0x0000000000472F80 "\n"
 *   insn=0x0000000000472F84 string=0x0000000000472F88 "?"
 *   insn=0x0000000000472F98 string=0x0000000000472F9C "J:"
 *   insn=0x0000000000472FA0 string=0x0000000000472FA4 "J=G"
 *   insn=0x0000000000472FA4 string=0x0000000000472FA8 ")!"
 *   insn=0x0000000000472FAC string=0x0000000000472FB0 "*"
 *   insn=0x0000000000472FAC string=0x0000000000472FC4 "*"
 *   insn=0x0000000000472FB0 string=0x0000000000472FB4 "K"
 *   insn=0x0000000000472FB4 string=0x0000000000472FB8 "+"
 *   insn=0x0000000000472FC0 string=0x0000000000472FD0 "_"
 *   insn=0x0000000000472FC4 string=0x0000000000472FC8 "K"
 *   insn=0x0000000000472FC8 string=0x0000000000472FCC "+"
 *   insn=0x0000000000472FEC string=0x0000000000472FF0 "*"
 *   insn=0x0000000000472FF0 string=0x0000000000472FF4 "\n"
 *   insn=0x0000000000472FF4 string=0x0000000000472FF8 "?"
 *   insn=0x0000000000473000 string=0x0000000000473004 "0:"
 *   insn=0x0000000000473010 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000473014 string=0x0000000000473018 "+:"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SceneObject::SetValueForBindedProperty(
        Caver::SceneObject *this,
        int a2,
        const Caver::BindingValue *a3)
{
  Caver::SceneObjectGroup *v5; // x22
  size_t v6; // x2
  __int64 *v7; // x21
  _QWORD *v8; // x1
  _BOOL4 v9; // w8
  __int64 *v10; // x21
  _QWORD *v11; // x20
  _QWORD *v12; // x8
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x1
  int v16; // w22
  __int64 v17; // x8
  void *v18; // x0
  __int64 v19; // x21
  void *v20; // x0
  Caver::SceneObjectGroup *v21; // x0
  int *v22; // x20
  int v23; // w20
  void *v24; // x0
  __int64 v25; // x20
  _QWORD *v26; // x20
  __int64 v27; // x8
  __int64 v28; // x8
  char *v29; // x0
  void *v30; // x0
  unsigned int *v31; // x8
  int v32; // w9
  __int64 v33; // x8
  Caver::SceneObjectGroup *v34; // x21
  Caver::SceneObjectGroup *v35; // x11
  __int64 v36; // x9
  __int64 v37; // x10
  __int64 v38; // x12
  Caver::SceneObjectGroup *v39; // x24
  int v40; // w10
  int v41; // w9
  int v42; // w8
  __int64 v43; // x9
  __int64 v44; // x8
  _QWORD *v45; // x10
  Caver::SceneObjectGroup *v46; // x0
  int v47; // w8
  unsigned int *v48; // x9
  int v49; // w10
  unsigned int *v50; // x8
  int v51; // w9
  unsigned int *v52; // x8
  int v53; // w9
  __int64 *v54; // x0
  _BOOL4 v55; // w21
  unsigned int *v56; // x8
  int v57; // w9
  unsigned int *v58; // x8
  int v59; // w9
  __int64 v60; // [xsp+8h] [xbp-68h] BYREF
  __int64 v61; // [xsp+10h] [xbp-60h] BYREF
  __int64 v62; // [xsp+18h] [xbp-58h] BYREF
  Caver::SceneObjectGroup *v63; // [xsp+20h] [xbp-50h] BYREF
  _QWORD *v64; // [xsp+28h] [xbp-48h]
  __int64 v65; // [xsp+38h] [xbp-38h]

  v65 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 == 3 )
  {
    v10 = (__int64 *)operator new(0x28u);
    Caver::BindingValue::ProgramValue(v10, a3);
    v63 = (Caver::SceneObjectGroup *)v10;
    boost::detail::shared_count::shared_count<Caver::Program>();
    boost::detail::sp_enable_shared_from_this();
    v11 = (_QWORD *)*((_QWORD *)this + 12);
    v63 = (Caver::SceneObjectGroup *)*((_QWORD *)this + 11);
    v12 = v64;
    *((_QWORD *)this + 11) = v10;
    *((_QWORD *)this + 12) = v12;
    v64 = v11;
    if ( v11 )
    {
      v13 = v11[1] - 1LL;
      v11[1] = v13;
      if ( !v13 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
        v14 = v11[2] - 1LL;
        v11[2] = v14;
        if ( !v14 )
          (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
      }
    }
    v15 = *(_QWORD *)(*((_QWORD *)this + 11) + 8LL);
    if ( v15 )
      sub_56A528(&v61, v15);
    else
      sub_566BB8((int)&v61, "");
    v24 = (void *)(v61 - 24);
    v25 = *(_QWORD *)(v61 - 24);
    if ( (__int64 *)(v61 - 24) == &qword_6FD2E0 )
      goto LABEL_31;
    v50 = (unsigned int *)(v61 - 8);
    if ( &pthread_create )
    {
      do
        v51 = __ldaxr(v50);
      while ( __stlxr(v51 - 1, v50) );
    }
    else
    {
      v51 = (*v50)--;
    }
    if ( v51 > 0 )
    {
LABEL_31:
      if ( v25 )
        return;
    }
    else
    {
      operator delete(v24);
      if ( v25 )
        return;
    }
    v26 = (_QWORD *)*((_QWORD *)this + 12);
    *((_QWORD *)this + 11) = 0;
    *((_QWORD *)this + 12) = 0;
    if ( v26 )
    {
      v27 = v26[1] - 1LL;
      v26[1] = v27;
      if ( !v27 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
        v28 = v26[2] - 1LL;
        v26[2] = v28;
        if ( !v28 )
          (*(void (__fastcall **)(_QWORD *))(*v26 + 24LL))(v26);
      }
    }
    return;
  }
  if ( a2 == 2 )
  {
    *((_BYTE *)this + 244) = **((_BYTE **)a3 + 1);
    return;
  }
  if ( a2 != 1 )
  {
    v16 = a2 - 4;
    if ( (unsigned int)(a2 - 4) > 0x14 )
      return;
    v17 = *((_QWORD *)this + 5);
    if ( v17 )
    {
      if ( v16 >= *(_DWORD *)v17 )
      {
LABEL_17:
        sub_56A528(&v60, *((_QWORD *)a3 + 1));
        v18 = (void *)(v60 - 24);
        v19 = *(_QWORD *)(v60 - 24);
        if ( (__int64 *)(v60 - 24) == &qword_6FD2E0 )
          goto LABEL_18;
        v52 = (unsigned int *)(v60 - 8);
        if ( &pthread_create )
        {
          do
            v53 = __ldaxr(v52);
          while ( __stlxr(v53 - 1, v52) );
        }
        else
        {
          v53 = (*v52)--;
        }
        if ( v53 > 0 )
        {
LABEL_18:
          if ( !v19 )
            return;
        }
        else
        {
          operator delete(v18);
          if ( !v19 )
            return;
        }
        sub_56A528(&v62, *((_QWORD *)a3 + 1));
        Caver::Scene::GroupWithIdentifier();
        v20 = (void *)(v62 - 24);
        if ( (__int64 *)(v62 - 24) == &qword_6FD2E0 )
          goto LABEL_20;
        v58 = (unsigned int *)(v62 - 8);
        if ( &pthread_create )
        {
          do
            v59 = __ldaxr(v58);
          while ( __stlxr(v59 - 1, v58) );
        }
        else
        {
          v59 = (*v58)--;
        }
        if ( v59 > 0 )
        {
LABEL_20:
          v21 = v63;
          if ( !v63 )
            return;
        }
        else
        {
          operator delete(v20);
          v21 = v63;
          if ( !v63 )
            return;
        }
        Caver::SceneObjectGroup::AddObject(v21, this);
        v22 = (int *)*((_QWORD *)this + 5);
        if ( v22 )
        {
          if ( v16 >= *v22 )
            goto LABEL_66;
        }
        else if ( v16 >= 0 )
        {
LABEL_66:
          v46 = v63;
          if ( v63 )
          {
            v47 = *((_DWORD *)v63 + 2) - 1;
            *((_DWORD *)v63 + 2) = v47;
            if ( !v47 )
              (*(void (__fastcall **)(Caver::SceneObjectGroup *))(*(_QWORD *)v46 + 8LL))(v46);
          }
          return;
        }
        v33 = *v22;
        v34 = v63;
        if ( (_DWORD)v33 )
        {
          if ( (int)v33 < 1 )
          {
            v39 = 0;
LABEL_53:
            v40 = v22[1];
            v41 = v33 - 1;
            *v22 = v33 - 1;
            if ( (int)v33 > v40 )
            {
              Caver::FastVector<Caver::SceneObjectGroup *>::Resize();
              v41 = *v22;
            }
            *(_QWORD *)(*((_QWORD *)v22 + 1) + 8LL * v41) = v39;
            v42 = v41 + 1;
          }
          else
          {
            v35 = 0;
            v36 = v33 + 1;
            v37 = 8 * v33 - 8;
            while ( 1 )
            {
              v38 = *((_QWORD *)v22 + 1);
              v39 = *(Caver::SceneObjectGroup **)(v38 + v37);
              *(_QWORD *)(v38 + v37) = v35;
              if ( v39 == v34 )
                break;
              --v36;
              v37 -= 8;
              v35 = v39;
              if ( v36 <= 1 )
                goto LABEL_53;
            }
            v42 = v33 - 1;
          }
          *v22 = v42;
          v22 = (int *)*((_QWORD *)this + 5);
          v34 = v63;
          LODWORD(v33) = *v22;
        }
        if ( (int)v33 >= v22[1] )
        {
          Caver::FastVector<Caver::SceneObjectGroup *>::Resize();
          LODWORD(v33) = *v22;
        }
        *v22 = v33 + 1;
        if ( (int)v33 <= v16 )
        {
          v44 = v16;
        }
        else
        {
          v43 = (int)v33;
          v44 = v16;
          do
          {
            v45 = (_QWORD *)(*((_QWORD *)v22 + 1) + 8 * v43--);
            *v45 = *(v45 - 1);
          }
          while ( v43 > v16 );
        }
        *(_QWORD *)(*((_QWORD *)v22 + 1) + 8 * v44) = v34;
        goto LABEL_66;
      }
    }
    else if ( v16 >= 0 )
    {
      goto LABEL_17;
    }
    Caver::SceneObjectGroup::RemoveObject(*(Caver::SceneObjectGroup **)(*(_QWORD *)(v17 + 8) + 8LL * v16), this);
    goto LABEL_17;
  }
  sub_56A528(&v63, *((_QWORD *)a3 + 1));
  v5 = v63;
  v7 = (__int64 *)((char *)v63 - 24);
  v6 = *((_QWORD *)v63 - 3);
  v8 = (_QWORD *)*((_QWORD *)this + 10);
  v9 = v6 != *(v8 - 3) || memcmp(v63, v8, v6) != 0;
  if ( v7 == &qword_6FD2E0 )
    goto LABEL_26;
  v48 = (unsigned int *)((char *)v5 - 8);
  if ( &pthread_create )
  {
    do
      v49 = __ldaxr(v48);
    while ( __stlxr(v49 - 1, v48) );
  }
  else
  {
    v49 = (*v48)--;
  }
  if ( v49 > 0 )
  {
LABEL_26:
    if ( !v9 )
      return;
  }
  else
  {
    v54 = v7;
    v55 = v9;
    operator delete(v54);
    if ( !v55 )
      return;
  }
  if ( *((_QWORD *)this + 4) )
  {
    sub_56A528(&v62, *((_QWORD *)a3 + 1));
    Caver::Scene::MakeUniqueObjectIdentifier();
    v23 = 1;
  }
  else
  {
    sub_56A528(&v63, *((_QWORD *)a3 + 1));
    v23 = 0;
  }
  Caver::SceneObject::SetIdentifier();
  v29 = (char *)v63 - 24;
  if ( (__int64 *)((char *)v63 - 24) == &qword_6FD2E0 )
    goto LABEL_40;
  v56 = (unsigned int *)((char *)v63 - 8);
  if ( &pthread_create )
  {
    do
      v57 = __ldaxr(v56);
    while ( __stlxr(v57 - 1, v56) );
  }
  else
  {
    v57 = (*v56)--;
  }
  if ( v57 > 0 )
  {
LABEL_40:
    if ( !v23 )
      return;
  }
  else
  {
    operator delete(v29);
    if ( !v23 )
      return;
  }
  v30 = (void *)(v62 - 24);
  if ( (__int64 *)(v62 - 24) != &qword_6FD2E0 )
  {
    v31 = (unsigned int *)(v62 - 8);
    if ( &pthread_create )
    {
      do
        v32 = __ldaxr(v31);
      while ( __stlxr(v32 - 1, v31) );
    }
    else
    {
      v32 = (*v31)--;
    }
    if ( v32 <= 0 )
      operator delete(v30);
  }
}


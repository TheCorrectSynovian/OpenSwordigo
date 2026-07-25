/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000254800
 * Mangled: _ZN5Caver24BreakableObjectComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::BreakableObjectComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001FF5C0  Caver::BreakableObjectComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000254730  Caver::BreakableObjectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001FF5C0  Caver::BreakableObjectComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 224
 *   insn=0x0000000000254818 string=0x000000000025481C "W"
 *   insn=0x000000000025482C string=0x00000000001FB3B0 "0'"
 *   insn=0x0000000000254830 string=0x00000000005877B0 "breaksOnImpact"
 *   insn=0x0000000000254854 string=0x0000000000254858 "4W"
 *   insn=0x0000000000254858 string=0x000000000025485C "h"
 *   insn=0x0000000000254868 string=0x000000000025486C "t"
 *   insn=0x000000000025487C string=0x0000000000254880 ""
 *   insn=0x0000000000254884 string=0x0000000000254888 "(W"
 *   insn=0x000000000025488C string=0x0000000000254890 "\t\t@"
 *   insn=0x0000000000254894 string=0x0000000000254898 ""
 *   insn=0x000000000025489C string=0x00000000002548A0 "h"
 *   insn=0x00000000002548A0 string=0x00000000002548A4 ""
 *   insn=0x00000000002548A4 string=0x00000000002548A8 "h"
 *   insn=0x00000000002548B8 string=0x00000000002548BC "\t"
 *   insn=0x00000000002548BC string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002548E0 string=0x00000000002548E4 "a"
 *   insn=0x00000000002548E8 string=0x00000000005877BF "numHitsToBreak"
 *   insn=0x0000000000254914 string=0x0000000000254918 "h"
 *   insn=0x0000000000254918 string=0x000000000025491C ""
 *   insn=0x0000000000254924 string=0x0000000000254928 "t"
 *   insn=0x0000000000254938 string=0x000000000025493C ""
 *   insn=0x0000000000254944 string=0x0000000000254948 "C"
 *   insn=0x0000000000254948 string=0x000000000025494C "\t\t@"
 *   insn=0x0000000000254950 string=0x0000000000254954 ""
 *   insn=0x0000000000254958 string=0x000000000025495C "h"
 *   insn=0x000000000025495C string=0x0000000000254960 ""
 *   insn=0x0000000000254960 string=0x0000000000254964 "h"
 *   insn=0x0000000000254984 string=0x0000000000254988 "a"
 *   insn=0x000000000025499C string=0x00000000005877CE "requiredDamageType"
 *   insn=0x00000000002549D4 string=0x00000000002549D8 "t"
 *   insn=0x00000000002549E8 string=0x00000000002549EC ""
 *   insn=0x00000000002549F4 string=0x00000000002549F8 "C"
 *   insn=0x00000000002549F8 string=0x00000000002549FC "\t\t@"
 *   insn=0x0000000000254A00 string=0x0000000000254A04 ""
 *   insn=0x0000000000254A08 string=0x0000000000254A0C "h"
 *   insn=0x0000000000254A0C string=0x0000000000254A10 ""
 *   insn=0x0000000000254A10 string=0x0000000000254A14 "h"
 *   insn=0x0000000000254A34 string=0x0000000000254A38 "!"
 *   insn=0x0000000000254A4C string=0x00000000005877E1 "onBreak"
 *   insn=0x0000000000254A58 string=0x0000000000254A5C "WH"
 *   insn=0x0000000000254A78 string=0x0000000000254A7C "h"
 *   insn=0x0000000000254A88 string=0x0000000000254A8C "t"
 *   insn=0x0000000000254A9C string=0x0000000000254AA0 ""
 *   insn=0x0000000000254AA8 string=0x0000000000254AAC "C"
 *   insn=0x0000000000254AAC string=0x0000000000254AB0 "\t\t@"
 *   insn=0x0000000000254AB4 string=0x0000000000254AB8 ""
 *   insn=0x0000000000254ABC string=0x0000000000254AC0 "h"
 *   insn=0x0000000000254AC0 string=0x0000000000254AC4 ""
 *   insn=0x0000000000254AC4 string=0x0000000000254AC8 "h"
 *   insn=0x0000000000254AF8 string=0x0000000000254AFC "a\t"
 *   insn=0x0000000000254B0C string=0x0000000000254D4C "a"
 *   insn=0x0000000000254B2C string=0x0000000000254B30 ")=G"
 *   insn=0x0000000000254B30 string=0x0000000000254B34 "!"
 *   insn=0x0000000000254B38 string=0x0000000000254B3C "\t"
 *   insn=0x0000000000254B38 string=0x0000000000254C4C "\t"
 *   insn=0x0000000000254B3C string=0x0000000000254B40 "*"
 *   insn=0x0000000000254B40 string=0x0000000000254B44 "\n"
 *   insn=0x0000000000254B48 string=0x0000000000254B4C "C"
 *   insn=0x0000000000254B4C string=0x0000000000254C58 "?"
 *   insn=0x0000000000254B50 string=0x0000000000254B54 ")=G"
 *   insn=0x0000000000254B54 string=0x0000000000254B58 "!"
 *   insn=0x0000000000254B5C string=0x0000000000254B60 "\t"
 *   insn=0x0000000000254B5C string=0x0000000000254C6C "\t"
 *   insn=0x0000000000254B60 string=0x0000000000254B64 "*"
 *   insn=0x0000000000254B64 string=0x0000000000254B68 "\n"
 *   insn=0x0000000000254B6C string=0x0000000000254B70 "B"
 *   insn=0x0000000000254B70 string=0x0000000000254C78 "?"
 *   insn=0x0000000000254B74 string=0x0000000000254B78 ")=G"
 *   insn=0x0000000000254B78 string=0x0000000000254B7C "!"
 *   insn=0x0000000000254B7C string=0x0000000000254B80 "i"
 *   insn=0x0000000000254B80 string=0x0000000000254B84 "\t"
 *   insn=0x0000000000254B80 string=0x0000000000254C8C "\t"
 *   insn=0x0000000000254B84 string=0x0000000000254B88 "*"
 *   insn=0x0000000000254B88 string=0x0000000000254B8C "\n"
 *   insn=0x0000000000254B90 string=0x0000000000254B94 "A"
 *   insn=0x0000000000254B94 string=0x0000000000254C98 "?"
 *   insn=0x0000000000254B98 string=0x0000000000254B9C ")=G"
 *   insn=0x0000000000254B9C string=0x0000000000254BA0 "!"
 *   insn=0x0000000000254BA0 string=0x0000000000254BA4 "I"
 *   insn=0x0000000000254BA4 string=0x0000000000254BA8 "\t"
 *   insn=0x0000000000254BA4 string=0x0000000000254CAC "\t"
 *   insn=0x0000000000254BA8 string=0x0000000000254BAC "*"
 *   insn=0x0000000000254BAC string=0x0000000000254BB0 "\n"
 *   insn=0x0000000000254BB4 string=0x0000000000254BB8 "@"
 *   insn=0x0000000000254BB8 string=0x0000000000254CB8 "?"
 *   insn=0x0000000000254BBC string=0x0000000000254BC0 ")=G"
 *   insn=0x0000000000254BC0 string=0x0000000000254BC4 "!"
 *   insn=0x0000000000254BC4 string=0x0000000000254BC8 ")"
 *   insn=0x0000000000254BC8 string=0x0000000000254BCC "\t"
 *   insn=0x0000000000254BC8 string=0x0000000000254CCC "\t"
 *   insn=0x0000000000254BCC string=0x0000000000254BD0 "*"
 *   insn=0x0000000000254BD0 string=0x0000000000254BD4 "\n"
 *   insn=0x0000000000254BD8 string=0x0000000000254BDC "?"
 *   insn=0x0000000000254BDC string=0x0000000000254CD8 "?"
 *   insn=0x0000000000254BE0 string=0x0000000000254BE4 ")=G"
 *   insn=0x0000000000254BE4 string=0x0000000000254BE8 "!"
 *   insn=0x0000000000254BE8 string=0x0000000000254BEC "\t"
 *   insn=0x0000000000254BEC string=0x0000000000254BF0 "\t"
 *   insn=0x0000000000254BEC string=0x0000000000254CEC "\t"
 *   insn=0x0000000000254BF0 string=0x0000000000254BF4 "*"
 *   insn=0x0000000000254BF4 string=0x0000000000254BF8 "\n"
 *   insn=0x0000000000254BFC string=0x0000000000254C00 ">"
 *   insn=0x0000000000254C00 string=0x0000000000254CF8 "?"
 *   insn=0x0000000000254C04 string=0x0000000000254C08 ")=G"
 *   insn=0x0000000000254C08 string=0x0000000000254C0C "!"
 *   insn=0x0000000000254C10 string=0x0000000000254C14 "\t"
 *   insn=0x0000000000254C10 string=0x0000000000254D0C "\t"
 *   insn=0x0000000000254C14 string=0x0000000000254C18 "*"
 *   insn=0x0000000000254C18 string=0x0000000000254C1C "\n"
 *   insn=0x0000000000254C20 string=0x0000000000254C24 "="
 *   insn=0x0000000000254C24 string=0x0000000000254D18 "?"
 *   insn=0x0000000000254C28 string=0x0000000000254C2C ")=G"
 *   insn=0x0000000000254C2C string=0x0000000000254C30 "!"
 *   insn=0x0000000000254C34 string=0x0000000000254C38 "\t"
 *   insn=0x0000000000254C34 string=0x0000000000254D2C "\t"
 *   insn=0x0000000000254C38 string=0x0000000000254C3C "*"
 *   insn=0x0000000000254C3C string=0x0000000000254C40 "\n"
 *   insn=0x0000000000254C44 string=0x0000000000254C48 "<"
 *   insn=0x0000000000254C48 string=0x0000000000254D38 "?"
 *   insn=0x0000000000254C4C string=0x0000000000254C50 "*"
 *   insn=0x0000000000254C50 string=0x0000000000254C54 "\n"
 *   insn=0x0000000000254C6C string=0x0000000000254C70 "*"
 *   insn=0x0000000000254C70 string=0x0000000000254C74 "\n"
 *   insn=0x0000000000254C78 string=0x0000000000254C7C "l"
 *   insn=0x0000000000254C8C string=0x0000000000254C90 "*"
 *   insn=0x0000000000254C90 string=0x0000000000254C94 "\n"
 *   insn=0x0000000000254CA4 string=0x0000000000254CA8 "9"
 *   insn=0x0000000000254CAC string=0x0000000000254CB0 "*"
 *   insn=0x0000000000254CB0 string=0x0000000000254CB4 "\n"
 *   insn=0x0000000000254CC4 string=0x0000000000254CC8 "5"
 *   insn=0x0000000000254CCC string=0x0000000000254CD0 "*"
 *   insn=0x0000000000254CD0 string=0x0000000000254CD4 "\n"
 *   insn=0x0000000000254CE4 string=0x0000000000254CE8 "U"
 *   insn=0x0000000000254CEC string=0x0000000000254CF0 "*"
 *   insn=0x0000000000254CF0 string=0x0000000000254CF4 "\n"
 *   insn=0x0000000000254D04 string=0x0000000000254D08 "Q"
 *   insn=0x0000000000254D0C string=0x0000000000254D10 "*"
 *   insn=0x0000000000254D10 string=0x0000000000254D14 "\n"
 *   insn=0x0000000000254D24 string=0x0000000000254D28 "r"
 *   insn=0x0000000000254D2C string=0x0000000000254D30 "*"
 *   insn=0x0000000000254D30 string=0x0000000000254D34 "\n"
 *   insn=0x0000000000254D38 string=0x0000000000254D3C ","
 *   insn=0x0000000000254D44 string=0x0000000000254D48 "n"
 *   insn=0x0000000000254D4C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000254D54 string=0x0000000000254D58 "(a"
 *   insn=0x0000000000254D64 string=0x0000000000254D68 "J=G"
 *   insn=0x0000000000254D68 string=0x0000000000254D6C ")!"
 *   insn=0x0000000000254D70 string=0x0000000000254D74 "*"
 *   insn=0x0000000000254D70 string=0x0000000000254D88 "*"
 *   insn=0x0000000000254D74 string=0x0000000000254D78 "K"
 *   insn=0x0000000000254D78 string=0x0000000000254D7C "+"
 *   insn=0x0000000000254D84 string=0x0000000000254D94 "_"
 *   insn=0x0000000000254D88 string=0x0000000000254D8C "K"
 *   insn=0x0000000000254D8C string=0x0000000000254D90 "+"
 *   insn=0x0000000000254DB8 string=0x0000000000254DBC "`"
 *   insn=0x0000000000254DC0 string=0x0000000000254DC4 ")=G"
 *   insn=0x0000000000254DC4 string=0x0000000000254DC8 "!"
 *   insn=0x0000000000254DC8 string=0x0000000000254DCC ")"
 *   insn=0x0000000000254DCC string=0x0000000000254DD0 "\t"
 *   insn=0x0000000000254DCC string=0x0000000000254FD0 "\t"
 *   insn=0x0000000000254DD0 string=0x0000000000254DD4 "*"
 *   insn=0x0000000000254DD4 string=0x0000000000254DD8 "\n"
 *   insn=0x0000000000254DDC string=0x0000000000254DE0 "v"
 *   insn=0x0000000000254DE0 string=0x0000000000254FB8 "?"
 *   insn=0x0000000000254DEC string=0x0000000000254DF0 "(a"
 *   insn=0x0000000000254DFC string=0x0000000000254E00 "J=G"
 *   insn=0x0000000000254E00 string=0x0000000000254E04 ")!"
 *   insn=0x0000000000254E08 string=0x0000000000254E0C "*"
 *   insn=0x0000000000254E08 string=0x0000000000254E20 "*"
 *   insn=0x0000000000254E0C string=0x0000000000254E10 "K"
 *   insn=0x0000000000254E10 string=0x0000000000254E14 "+"
 *   insn=0x0000000000254E1C string=0x0000000000254E2C "_"
 *   insn=0x0000000000254E20 string=0x0000000000254E24 "K"
 *   insn=0x0000000000254E24 string=0x0000000000254E28 "+"
 *   insn=0x0000000000254E38 string=0x0000000000254E3C "ZU"
 *   insn=0x0000000000254E58 string=0x0000000000254E5C ")=G"
 *   insn=0x0000000000254E5C string=0x0000000000254E60 "!"
 *   insn=0x0000000000254E60 string=0x0000000000254E64 "i"
 *   insn=0x0000000000254E64 string=0x0000000000254E68 "\t"
 *   insn=0x0000000000254E68 string=0x0000000000254E6C "*"
 *   insn=0x0000000000254E6C string=0x0000000000254E70 "\n"
 *   insn=0x0000000000254E74 string=0x0000000000254E78 "P"
 *   insn=0x0000000000254E84 string=0x0000000000254E88 "(a"
 *   insn=0x0000000000254E94 string=0x0000000000254E98 "J=G"
 *   insn=0x0000000000254E98 string=0x0000000000254E9C ")!"
 *   insn=0x0000000000254EA0 string=0x0000000000254EA4 "*"
 *   insn=0x0000000000254EA0 string=0x0000000000254EB8 "*"
 *   insn=0x0000000000254EA4 string=0x0000000000254EA8 "K"
 *   insn=0x0000000000254EA8 string=0x0000000000254EAC "+"
 *   insn=0x0000000000254EB4 string=0x0000000000254EC4 "_"
 *   insn=0x0000000000254EB8 string=0x0000000000254EBC "K"
 *   insn=0x0000000000254EBC string=0x0000000000254EC0 "+"
 *   insn=0x0000000000254ED0 string=0x0000000000254ED4 "4U"
 *   insn=0x0000000000254EF0 string=0x0000000000254EF4 ")=G"
 *   insn=0x0000000000254EF4 string=0x0000000000254EF8 "!"
 *   insn=0x0000000000254EFC string=0x0000000000254F00 "\t"
 *   insn=0x0000000000254F00 string=0x0000000000254F04 "*"
 *   insn=0x0000000000254F04 string=0x0000000000254F08 "\n"
 *   insn=0x0000000000254F0C string=0x0000000000254F10 "*"
 *   insn=0x0000000000254F1C string=0x0000000000254F20 "J"
 *   insn=0x0000000000254F24 string=0x0000000000254F28 "(a"
 *   insn=0x0000000000254F34 string=0x0000000000254F38 "J=G"
 *   insn=0x0000000000254F38 string=0x0000000000254F3C ")!"
 *   insn=0x0000000000254F40 string=0x0000000000254F44 "*"
 *   insn=0x0000000000254F40 string=0x0000000000254F58 "*"
 *   insn=0x0000000000254F44 string=0x0000000000254F48 "K"
 *   insn=0x0000000000254F48 string=0x0000000000254F4C "+"
 *   insn=0x0000000000254F54 string=0x0000000000254F64 "_"
 *   insn=0x0000000000254F58 string=0x0000000000254F5C "K"
 *   insn=0x0000000000254F5C string=0x0000000000254F60 "+"
 *   insn=0x0000000000254F84 string=0x0000000000254F88 ")"
 *   insn=0x0000000000254F98 string=0x0000000000254F9C ")=G"
 *   insn=0x0000000000254F9C string=0x0000000000254FA0 "!"
 *   insn=0x0000000000254FA0 string=0x0000000000254FA4 "i"
 *   insn=0x0000000000254FA4 string=0x0000000000254FA8 "\t"
 *   insn=0x0000000000254FA8 string=0x0000000000254FAC "*"
 *   insn=0x0000000000254FAC string=0x0000000000254FB0 "\n"
 *   insn=0x0000000000254FB8 string=0x0000000000254FBC "l"
 *   insn=0x0000000000254FC8 string=0x0000000000254FCC ">"
 *   insn=0x0000000000254FD0 string=0x0000000000254FD4 "*"
 *   insn=0x0000000000254FD4 string=0x0000000000254FD8 "\n"
 *   insn=0x0000000000254FD8 string=0x0000000000254FDC "?"
 *   insn=0x0000000000254FDC string=0x0000000000254FE0 ""
 *   insn=0x0000000000254FEC string=0x0000000000254FF0 "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BreakableObjectComponent::GetBindings(Caver::Component *a1, __int64 a2)
{
  __int64 v3; // x20
  void *v4; // x0
  void *v5; // x0
  __int64 v6; // x20
  void *v7; // x0
  void *v8; // x0
  __int64 v9; // x20
  void *v10; // x0
  void *v11; // x0
  __int64 v12; // x20
  void *v13; // x0
  void *v14; // x0
  unsigned int *v15; // x8
  int v16; // w9
  unsigned int *v17; // x8
  int v18; // w9
  unsigned int *v19; // x8
  int v20; // w9
  unsigned int *v21; // x8
  int v22; // w9
  unsigned int *v23; // x8
  int v24; // w9
  unsigned int *v25; // x8
  int v26; // w9
  unsigned int *v27; // x8
  int v28; // w9
  unsigned int *v29; // x8
  int v30; // w9
  __int64 v31; // [xsp+8h] [xbp-78h] BYREF
  int v32; // [xsp+18h] [xbp-68h]
  __int64 v33; // [xsp+20h] [xbp-60h] BYREF
  __int64 v34; // [xsp+28h] [xbp-58h]
  int v35; // [xsp+30h] [xbp-50h]
  __int64 v36; // [xsp+38h] [xbp-48h]

  v36 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::GetBindings(a1);
  sub_566BB8((int)&v31, "breaksOnImpact");
  v32 = 0;
  sub_56A528(&v33, &v31);
  v35 = 0;
  v34 = 0x400000001LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v3 = v32;
    sub_56A528(v3 + 8, &v33);
    *(_DWORD *)(v3 + 24) = v35;
    *(_QWORD *)(v3 + 16) = v34;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v4 = (void *)(v33 - 24);
  if ( (__int64 *)(v33 - 24) != &qword_6FD2E0 )
  {
    v15 = (unsigned int *)(v33 - 8);
    if ( &pthread_create )
    {
      do
        v16 = __ldaxr(v15);
      while ( __stlxr(v16 - 1, v15) );
    }
    else
    {
      v16 = (*v15)--;
    }
    if ( v16 <= 0 )
      operator delete(v4);
  }
  v5 = (void *)(v31 - 24);
  if ( (__int64 *)(v31 - 24) != &qword_6FD2E0 )
  {
    v17 = (unsigned int *)(v31 - 8);
    if ( &pthread_create )
    {
      do
        v18 = __ldaxr(v17);
      while ( __stlxr(v18 - 1, v17) );
    }
    else
    {
      v18 = (*v17)--;
    }
    if ( v18 <= 0 )
      operator delete(v5);
  }
  sub_566BB8((int)&v31, "numHitsToBreak");
  v32 = 1;
  sub_56A528(&v33, &v31);
  v35 = 0;
  v34 = 0x200000001LL;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v6 = v32;
    sub_56A528(v6 + 8, &v33);
    *(_DWORD *)(v6 + 24) = v35;
    *(_QWORD *)(v6 + 16) = v34;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v7 = (void *)(v33 - 24);
  if ( (__int64 *)(v33 - 24) != &qword_6FD2E0 )
  {
    v19 = (unsigned int *)(v33 - 8);
    if ( &pthread_create )
    {
      do
        v20 = __ldaxr(v19);
      while ( __stlxr(v20 - 1, v19) );
    }
    else
    {
      v20 = (*v19)--;
    }
    if ( v20 <= 0 )
      operator delete(v7);
  }
  v8 = (void *)(v31 - 24);
  if ( (__int64 *)(v31 - 24) != &qword_6FD2E0 )
  {
    v21 = (unsigned int *)(v31 - 8);
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
      operator delete(v8);
  }
  sub_566BB8((int)&v31, "requiredDamageType");
  v32 = 2;
  sub_56A528(&v33, &v31);
  v34 = 0x200000001LL;
  v35 = 1;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v9 = v32;
    sub_56A528(v9 + 8, &v33);
    *(_DWORD *)(v9 + 24) = v35;
    *(_QWORD *)(v9 + 16) = v34;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v10 = (void *)(v33 - 24);
  if ( (__int64 *)(v33 - 24) != &qword_6FD2E0 )
  {
    v23 = (unsigned int *)(v33 - 8);
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
      operator delete(v10);
  }
  v11 = (void *)(v31 - 24);
  if ( (__int64 *)(v31 - 24) != &qword_6FD2E0 )
  {
    v25 = (unsigned int *)(v31 - 8);
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
      operator delete(v11);
  }
  sub_566BB8((int)&v31, "onBreak");
  v32 = 3;
  sub_56A528(&v33, &v31);
  v35 = 0;
  v34 = 0x600000001LL;
  v12 = *(_QWORD *)(a2 + 8);
  if ( v12 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v12 = v32;
    sub_56A528(v12 + 8, &v33);
    *(_DWORD *)(v12 + 24) = v35;
    *(_QWORD *)(v12 + 16) = v34;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v13 = (void *)(v33 - 24);
  if ( (__int64 *)(v33 - 24) != &qword_6FD2E0 )
  {
    v27 = (unsigned int *)(v33 - 8);
    if ( &pthread_create )
    {
      do
        v28 = __ldaxr(v27);
      while ( __stlxr(v28 - 1, v27) );
    }
    else
    {
      v28 = (*v27)--;
    }
    if ( v28 <= 0 )
      operator delete(v13);
  }
  v14 = (void *)(v31 - 24);
  if ( (__int64 *)(v31 - 24) != &qword_6FD2E0 )
  {
    v29 = (unsigned int *)(v31 - 8);
    if ( &pthread_create )
    {
      do
        v30 = __ldaxr(v29);
      while ( __stlxr(v30 - 1, v29) );
    }
    else
    {
      v30 = (*v29)--;
    }
    if ( v30 <= 0 )
      operator delete(v14);
  }
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026A6E8
 * Mangled: _ZN5Caver25EntityControllerComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::EntityControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000001F3F10  Caver::EntityControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 9
 *   0x00000000001F3F10  Caver::EntityControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 226
 *   insn=0x000000000026A700 string=0x000000000026A704 "W"
 *   insn=0x000000000026A710 string=0x000000000026A714 "'C"
 *   insn=0x000000000026A714 string=0x00000000001FB3B0 "0'"
 *   insn=0x000000000026A718 string=0x0000000000588060 "defaultMoveSpeed"
 *   insn=0x000000000026A724 string=0x000000000026A728 "$"
 *   insn=0x000000000026A740 string=0x000000000026A744 "y"
 *   insn=0x000000000026A748 string=0x000000000026A74C ""
 *   insn=0x000000000026A754 string=0x000000000026A758 "t"
 *   insn=0x000000000026A768 string=0x000000000026A76C ""
 *   insn=0x000000000026A770 string=0x000000000026A774 "m"
 *   insn=0x000000000026A778 string=0x000000000026A77C "\t\t@"
 *   insn=0x000000000026A780 string=0x000000000026A784 ""
 *   insn=0x000000000026A788 string=0x000000000026A78C "h"
 *   insn=0x000000000026A78C string=0x000000000026A790 ""
 *   insn=0x000000000026A790 string=0x000000000026A794 "h"
 *   insn=0x000000000026A7A4 string=0x000000000026A7A8 "N4"
 *   insn=0x000000000026A7A8 string=0x00000000001F78E0 "0'"
 *   insn=0x000000000026A7CC string=0x000000000026A7D0 "!"
 *   insn=0x000000000026A7D4 string=0x0000000000588071 "defaultAcceleration"
 *   insn=0x000000000026A7FC string=0x000000000026A800 "J"
 *   insn=0x000000000026A808 string=0x000000000026A80C "t"
 *   insn=0x000000000026A81C string=0x000000000026A820 ""
 *   insn=0x000000000026A824 string=0x000000000026A828 "@"
 *   insn=0x000000000026A828 string=0x000000000026A82C "C"
 *   insn=0x000000000026A82C string=0x000000000026A830 "\t\t@"
 *   insn=0x000000000026A834 string=0x000000000026A838 ""
 *   insn=0x000000000026A83C string=0x000000000026A840 "h"
 *   insn=0x000000000026A840 string=0x000000000026A844 ""
 *   insn=0x000000000026A844 string=0x000000000026A848 "h"
 *   insn=0x000000000026A858 string=0x000000000026A85C "!4"
 *   insn=0x000000000026A868 string=0x000000000026A86C "a"
 *   insn=0x000000000026A880 string=0x0000000000588085 "targetingDistance"
 *   insn=0x000000000026A8B4 string=0x000000000026A8B8 "t"
 *   insn=0x000000000026A8C8 string=0x000000000026A8CC ""
 *   insn=0x000000000026A8D4 string=0x000000000026A8D8 "C"
 *   insn=0x000000000026A8D8 string=0x000000000026A8DC "\t\t@"
 *   insn=0x000000000026A8E0 string=0x000000000026A8E4 ""
 *   insn=0x000000000026A8E8 string=0x000000000026A8EC "h"
 *   insn=0x000000000026A8EC string=0x000000000026A8F0 ""
 *   insn=0x000000000026A8F0 string=0x000000000026A8F4 "h"
 *   insn=0x000000000026A914 string=0x000000000026A918 "A"
 *   insn=0x000000000026A92C string=0x0000000000588097 "movementBehavior"
 *   insn=0x000000000026A96C string=0x000000000026A970 "t"
 *   insn=0x000000000026A980 string=0x000000000026A984 ""
 *   insn=0x000000000026A98C string=0x000000000026A990 "C"
 *   insn=0x000000000026A990 string=0x000000000026A994 "\t\t@"
 *   insn=0x000000000026A998 string=0x000000000026A99C ""
 *   insn=0x000000000026A9A0 string=0x000000000026A9A4 "h"
 *   insn=0x000000000026A9A4 string=0x000000000026A9A8 ""
 *   insn=0x000000000026A9A8 string=0x000000000026A9AC "h"
 *   insn=0x000000000026A9DC string=0x000000000026A9E0 "a\t"
 *   insn=0x000000000026AA10 string=0x000000000026AA14 ")=G"
 *   insn=0x000000000026AA14 string=0x000000000026AA18 "!"
 *   insn=0x000000000026AA1C string=0x000000000026AA20 "\t"
 *   insn=0x000000000026AA1C string=0x000000000026AB30 "\t"
 *   insn=0x000000000026AA20 string=0x000000000026AA24 "*"
 *   insn=0x000000000026AA24 string=0x000000000026AA28 "\n"
 *   insn=0x000000000026AA2C string=0x000000000026AA30 "C"
 *   insn=0x000000000026AA30 string=0x000000000026AB3C "?"
 *   insn=0x000000000026AA34 string=0x000000000026AA38 ")=G"
 *   insn=0x000000000026AA38 string=0x000000000026AA3C "!"
 *   insn=0x000000000026AA40 string=0x000000000026AA44 "\t"
 *   insn=0x000000000026AA40 string=0x000000000026AB50 "\t"
 *   insn=0x000000000026AA44 string=0x000000000026AA48 "*"
 *   insn=0x000000000026AA48 string=0x000000000026AA4C "\n"
 *   insn=0x000000000026AA50 string=0x000000000026AA54 "B"
 *   insn=0x000000000026AA54 string=0x000000000026AB5C "?"
 *   insn=0x000000000026AA58 string=0x000000000026AA5C ")=G"
 *   insn=0x000000000026AA5C string=0x000000000026AA60 "!"
 *   insn=0x000000000026AA60 string=0x000000000026AA64 "i"
 *   insn=0x000000000026AA64 string=0x000000000026AA68 "\t"
 *   insn=0x000000000026AA64 string=0x000000000026AB70 "\t"
 *   insn=0x000000000026AA68 string=0x000000000026AA6C "*"
 *   insn=0x000000000026AA6C string=0x000000000026AA70 "\n"
 *   insn=0x000000000026AA74 string=0x000000000026AA78 "A"
 *   insn=0x000000000026AA78 string=0x000000000026AB7C "?"
 *   insn=0x000000000026AA7C string=0x000000000026AA80 ")=G"
 *   insn=0x000000000026AA80 string=0x000000000026AA84 "!"
 *   insn=0x000000000026AA84 string=0x000000000026AA88 "I"
 *   insn=0x000000000026AA88 string=0x000000000026AA8C "\t"
 *   insn=0x000000000026AA88 string=0x000000000026AB90 "\t"
 *   insn=0x000000000026AA8C string=0x000000000026AA90 "*"
 *   insn=0x000000000026AA90 string=0x000000000026AA94 "\n"
 *   insn=0x000000000026AA98 string=0x000000000026AA9C "@"
 *   insn=0x000000000026AA9C string=0x000000000026AB9C "?"
 *   insn=0x000000000026AAA0 string=0x000000000026AAA4 ")=G"
 *   insn=0x000000000026AAA4 string=0x000000000026AAA8 "!"
 *   insn=0x000000000026AAA8 string=0x000000000026AAAC ")"
 *   insn=0x000000000026AAAC string=0x000000000026AAB0 "\t"
 *   insn=0x000000000026AAAC string=0x000000000026ABB0 "\t"
 *   insn=0x000000000026AAB0 string=0x000000000026AAB4 "*"
 *   insn=0x000000000026AAB4 string=0x000000000026AAB8 "\n"
 *   insn=0x000000000026AABC string=0x000000000026AAC0 "?"
 *   insn=0x000000000026AAC0 string=0x000000000026ABBC "?"
 *   insn=0x000000000026AAC4 string=0x000000000026AAC8 ")=G"
 *   insn=0x000000000026AAC8 string=0x000000000026AACC "!"
 *   insn=0x000000000026AACC string=0x000000000026AAD0 "\t"
 *   insn=0x000000000026AAD0 string=0x000000000026AAD4 "\t"
 *   insn=0x000000000026AAD0 string=0x000000000026ABD0 "\t"
 *   insn=0x000000000026AAD4 string=0x000000000026AAD8 "*"
 *   insn=0x000000000026AAD8 string=0x000000000026AADC "\n"
 *   insn=0x000000000026AAE0 string=0x000000000026AAE4 ">"
 *   insn=0x000000000026AAE4 string=0x000000000026ABDC "?"
 *   insn=0x000000000026AAE8 string=0x000000000026AAEC ")=G"
 *   insn=0x000000000026AAEC string=0x000000000026AAF0 "!"
 *   insn=0x000000000026AAF4 string=0x000000000026AAF8 "\t"
 *   insn=0x000000000026AAF4 string=0x000000000026ABF0 "\t"
 *   insn=0x000000000026AAF8 string=0x000000000026AAFC "*"
 *   insn=0x000000000026AAFC string=0x000000000026AB00 "\n"
 *   insn=0x000000000026AB04 string=0x000000000026AB08 "="
 *   insn=0x000000000026AB08 string=0x000000000026ABFC "?"
 *   insn=0x000000000026AB0C string=0x000000000026AB10 ")=G"
 *   insn=0x000000000026AB10 string=0x000000000026AB14 "!"
 *   insn=0x000000000026AB18 string=0x000000000026AB1C "\t"
 *   insn=0x000000000026AB18 string=0x000000000026AC10 "\t"
 *   insn=0x000000000026AB1C string=0x000000000026AB20 "*"
 *   insn=0x000000000026AB20 string=0x000000000026AB24 "\n"
 *   insn=0x000000000026AB28 string=0x000000000026AB2C "<"
 *   insn=0x000000000026AB2C string=0x000000000026AC1C "?"
 *   insn=0x000000000026AB30 string=0x000000000026AB34 "*"
 *   insn=0x000000000026AB34 string=0x000000000026AB38 "\n"
 *   insn=0x000000000026AB3C string=0x000000000026AB40 ","
 *   insn=0x000000000026AB50 string=0x000000000026AB54 "*"
 *   insn=0x000000000026AB54 string=0x000000000026AB58 "\n"
 *   insn=0x000000000026AB70 string=0x000000000026AB74 "*"
 *   insn=0x000000000026AB74 string=0x000000000026AB78 "\n"
 *   insn=0x000000000026AB84 string=0x000000000026AB88 ""
 *   insn=0x000000000026AB88 string=0x000000000026AB8C "9"
 *   insn=0x000000000026AB90 string=0x000000000026AB94 "*"
 *   insn=0x000000000026AB94 string=0x000000000026AB98 "\n"
 *   insn=0x000000000026ABA8 string=0x000000000026ABAC "5"
 *   insn=0x000000000026ABB0 string=0x000000000026ABB4 "*"
 *   insn=0x000000000026ABB4 string=0x000000000026ABB8 "\n"
 *   insn=0x000000000026ABC8 string=0x000000000026ABCC "T"
 *   insn=0x000000000026ABD0 string=0x000000000026ABD4 "*"
 *   insn=0x000000000026ABD4 string=0x000000000026ABD8 "\n"
 *   insn=0x000000000026ABDC string=0x000000000026ABE0 "l"
 *   insn=0x000000000026ABE8 string=0x000000000026ABEC "P"
 *   insn=0x000000000026ABF0 string=0x000000000026ABF4 "*"
 *   insn=0x000000000026ABF4 string=0x000000000026ABF8 "\n"
 *   insn=0x000000000026AC08 string=0x000000000026AC0C "r"
 *   insn=0x000000000026AC10 string=0x000000000026AC14 "*"
 *   insn=0x000000000026AC14 string=0x000000000026AC18 "\n"
 *   insn=0x000000000026AC1C string=0x000000000026AC20 ","
 *   insn=0x000000000026AC28 string=0x000000000026AC2C "n"
 *   insn=0x000000000026AC30 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000026AC38 string=0x000000000026AC3C "(a"
 *   insn=0x000000000026AC48 string=0x000000000026AC4C "J=G"
 *   insn=0x000000000026AC4C string=0x000000000026AC50 ")!"
 *   insn=0x000000000026AC54 string=0x000000000026AC58 "*"
 *   insn=0x000000000026AC54 string=0x000000000026AC6C "*"
 *   insn=0x000000000026AC58 string=0x000000000026AC5C "K"
 *   insn=0x000000000026AC5C string=0x000000000026AC60 "+"
 *   insn=0x000000000026AC68 string=0x000000000026AC78 "_"
 *   insn=0x000000000026AC6C string=0x000000000026AC70 "K"
 *   insn=0x000000000026AC70 string=0x000000000026AC74 "+"
 *   insn=0x000000000026AC9C string=0x000000000026ACA0 "`"
 *   insn=0x000000000026ACA4 string=0x000000000026ACA8 ")=G"
 *   insn=0x000000000026ACA8 string=0x000000000026ACAC "!"
 *   insn=0x000000000026ACAC string=0x000000000026ACB0 ")"
 *   insn=0x000000000026ACB0 string=0x000000000026ACB4 "\t"
 *   insn=0x000000000026ACB0 string=0x000000000026AEB4 "\t"
 *   insn=0x000000000026ACB4 string=0x000000000026ACB8 "*"
 *   insn=0x000000000026ACB8 string=0x000000000026ACBC "\n"
 *   insn=0x000000000026ACC0 string=0x000000000026ACC4 "v"
 *   insn=0x000000000026ACC4 string=0x000000000026AE9C "?"
 *   insn=0x000000000026ACD0 string=0x000000000026ACD4 "(a"
 *   insn=0x000000000026ACE0 string=0x000000000026ACE4 "J=G"
 *   insn=0x000000000026ACE4 string=0x000000000026ACE8 ")!"
 *   insn=0x000000000026ACEC string=0x000000000026ACF0 "*"
 *   insn=0x000000000026ACEC string=0x000000000026AD04 "*"
 *   insn=0x000000000026ACF0 string=0x000000000026ACF4 "K"
 *   insn=0x000000000026ACF4 string=0x000000000026ACF8 "+"
 *   insn=0x000000000026AD00 string=0x000000000026AD10 "_"
 *   insn=0x000000000026AD04 string=0x000000000026AD08 "K"
 *   insn=0x000000000026AD08 string=0x000000000026AD0C "+"
 *   insn=0x000000000026AD3C string=0x000000000026AD40 ")=G"
 *   insn=0x000000000026AD40 string=0x000000000026AD44 "!"
 *   insn=0x000000000026AD44 string=0x000000000026AD48 "i"
 *   insn=0x000000000026AD48 string=0x000000000026AD4C "\t"
 *   insn=0x000000000026AD4C string=0x000000000026AD50 "*"
 *   insn=0x000000000026AD50 string=0x000000000026AD54 "\n"
 *   insn=0x000000000026AD58 string=0x000000000026AD5C "P"
 *   insn=0x000000000026AD68 string=0x000000000026AD6C "(a"
 *   insn=0x000000000026AD78 string=0x000000000026AD7C "J=G"
 *   insn=0x000000000026AD7C string=0x000000000026AD80 ")!"
 *   insn=0x000000000026AD84 string=0x000000000026AD88 "*"
 *   insn=0x000000000026AD84 string=0x000000000026AD9C "*"
 *   insn=0x000000000026AD88 string=0x000000000026AD8C "K"
 *   insn=0x000000000026AD8C string=0x000000000026AD90 "+"
 *   insn=0x000000000026AD98 string=0x000000000026ADA8 "_"
 *   insn=0x000000000026AD9C string=0x000000000026ADA0 "K"
 *   insn=0x000000000026ADA0 string=0x000000000026ADA4 "+"
 *   insn=0x000000000026ADB4 string=0x000000000026ADB8 "{"
 *   insn=0x000000000026ADD4 string=0x000000000026ADD8 ")=G"
 *   insn=0x000000000026ADD8 string=0x000000000026ADDC "!"
 *   insn=0x000000000026ADE0 string=0x000000000026ADE4 "\t"
 *   insn=0x000000000026ADE4 string=0x000000000026ADE8 "*"
 *   insn=0x000000000026ADE8 string=0x000000000026ADEC "\n"
 *   insn=0x000000000026ADF0 string=0x000000000026ADF4 "*"
 *   insn=0x000000000026AE00 string=0x000000000026AE04 "J"
 *   insn=0x000000000026AE08 string=0x000000000026AE0C "(a"
 *   insn=0x000000000026AE18 string=0x000000000026AE1C "J=G"
 *   insn=0x000000000026AE1C string=0x000000000026AE20 ")!"
 *   insn=0x000000000026AE24 string=0x000000000026AE28 "*"
 *   insn=0x000000000026AE24 string=0x000000000026AE3C "*"
 *   insn=0x000000000026AE28 string=0x000000000026AE2C "K"
 *   insn=0x000000000026AE2C string=0x000000000026AE30 "+"
 *   insn=0x000000000026AE38 string=0x000000000026AE48 "_"
 *   insn=0x000000000026AE3C string=0x000000000026AE40 "K"
 *   insn=0x000000000026AE40 string=0x000000000026AE44 "+"
 *   insn=0x000000000026AE54 string=0x000000000026AE58 "S"
 *   insn=0x000000000026AE68 string=0x000000000026AE6C ")"
 *   insn=0x000000000026AE7C string=0x000000000026AE80 ")=G"
 *   insn=0x000000000026AE80 string=0x000000000026AE84 "!"
 *   insn=0x000000000026AE84 string=0x000000000026AE88 "i"
 *   insn=0x000000000026AE88 string=0x000000000026AE8C "\t"
 *   insn=0x000000000026AE8C string=0x000000000026AE90 "*"
 *   insn=0x000000000026AE90 string=0x000000000026AE94 "\n"
 *   insn=0x000000000026AE9C string=0x000000000026AEA0 "l"
 *   insn=0x000000000026AEA4 string=0x000000000026AEA8 "?"
 *   insn=0x000000000026AEB4 string=0x000000000026AEB8 "*"
 *   insn=0x000000000026AEB8 string=0x000000000026AEBC "\n"
 *   insn=0x000000000026AEBC string=0x000000000026AEC0 "?"
 *   insn=0x000000000026AEC0 string=0x000000000026AEC4 ""
 *   insn=0x000000000026AED4 string=0x00000000001F3F10 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::EntityControllerComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  sub_566BB8((int)&v31, "defaultMoveSpeed");
  v32 = 3;
  sub_56A528(&v33, &v31);
  v35 = 0;
  v34 = 0x500000001LL;
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
  sub_566BB8((int)&v31, "defaultAcceleration");
  v32 = 4;
  sub_56A528(&v33, &v31);
  v34 = 0x500000001LL;
  v35 = 0;
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
  sub_566BB8((int)&v31, "targetingDistance");
  v32 = 5;
  sub_56A528(&v33, &v31);
  v34 = 0x500000001LL;
  v35 = 0;
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
  sub_566BB8((int)&v31, "movementBehavior");
  v32 = 6;
  sub_56A528(&v33, &v31);
  v35 = 1;
  v34 = 0x200000001LL;
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


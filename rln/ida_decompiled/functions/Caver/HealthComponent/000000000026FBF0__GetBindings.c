/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026FBF0
 * Mangled: _ZN5Caver15HealthComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::HealthComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x00000000001F6FF0  Caver::HealthComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x000000000026FB18  Caver::HealthComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6FF0  Caver::HealthComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FB3B0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 226
 *   insn=0x000000000026FC08 string=0x000000000026FC0C "W"
 *   insn=0x000000000026FC1C string=0x00000000001FB3B0 "0'"
 *   insn=0x000000000026FC20 string=0x00000000005882E0 "maxHealth"
 *   insn=0x000000000026FC44 string=0x000000000026FC48 "8"
 *   insn=0x000000000026FC4C string=0x000000000026FC50 ""
 *   insn=0x000000000026FC58 string=0x000000000026FC5C "t"
 *   insn=0x000000000026FC6C string=0x000000000026FC70 ""
 *   insn=0x000000000026FC74 string=0x000000000026FC78 ","
 *   insn=0x000000000026FC7C string=0x000000000026FC80 "\t\t@"
 *   insn=0x000000000026FC84 string=0x000000000026FC88 ""
 *   insn=0x000000000026FC8C string=0x000000000026FC90 "h"
 *   insn=0x000000000026FC90 string=0x000000000026FC94 ""
 *   insn=0x000000000026FC94 string=0x000000000026FC98 "h"
 *   insn=0x000000000026FCA8 string=0x000000000026FCAC ""
 *   insn=0x000000000026FCAC string=0x00000000001F78E0 "0'"
 *   insn=0x000000000026FCC0 string=0x000000000026FCC4 "a"
 *   insn=0x000000000026FCD8 string=0x00000000005882EA "healthType"
 *   insn=0x000000000026FD00 string=0x000000000026FD04 "\t"
 *   insn=0x000000000026FD0C string=0x000000000026FD10 "t"
 *   insn=0x000000000026FD20 string=0x000000000026FD24 ""
 *   insn=0x000000000026FD2C string=0x000000000026FD30 "C"
 *   insn=0x000000000026FD30 string=0x000000000026FD34 "\t\t@"
 *   insn=0x000000000026FD38 string=0x000000000026FD3C ""
 *   insn=0x000000000026FD40 string=0x000000000026FD44 "h"
 *   insn=0x000000000026FD44 string=0x000000000026FD48 ""
 *   insn=0x000000000026FD48 string=0x000000000026FD4C "h"
 *   insn=0x000000000026FD6C string=0x000000000026FD70 "A"
 *   insn=0x000000000026FD84 string=0x00000000005882F5 "barOffsetX"
 *   insn=0x000000000026FDB4 string=0x000000000026FDB8 ""
 *   insn=0x000000000026FDC0 string=0x000000000026FDC4 "t"
 *   insn=0x000000000026FDD4 string=0x000000000026FDD8 ""
 *   insn=0x000000000026FDE0 string=0x000000000026FDE4 "C"
 *   insn=0x000000000026FDE4 string=0x000000000026FDE8 "\t\t@"
 *   insn=0x000000000026FDEC string=0x000000000026FDF0 ""
 *   insn=0x000000000026FDF4 string=0x000000000026FDF8 "h"
 *   insn=0x000000000026FDF8 string=0x000000000026FDFC ""
 *   insn=0x000000000026FDFC string=0x000000000026FE00 "h"
 *   insn=0x000000000026FE38 string=0x0000000000588300 "barOffsetY"
 *   insn=0x000000000026FE44 string=0x000000000026FE48 "\"
 *   insn=0x000000000026FE6C string=0x000000000026FE70 "t"
 *   insn=0x000000000026FE80 string=0x000000000026FE84 ""
 *   insn=0x000000000026FE8C string=0x000000000026FE90 "C"
 *   insn=0x000000000026FE90 string=0x000000000026FE94 "\t\t@"
 *   insn=0x000000000026FE98 string=0x000000000026FE9C ""
 *   insn=0x000000000026FEA0 string=0x000000000026FEA4 "h"
 *   insn=0x000000000026FEA4 string=0x000000000026FEA8 ""
 *   insn=0x000000000026FEA8 string=0x000000000026FEAC "h"
 *   insn=0x000000000026FEDC string=0x000000000026FEE0 "a\t"
 *   insn=0x000000000026FEF0 string=0x0000000000270130 "h"
 *   insn=0x000000000026FF10 string=0x000000000026FF14 ")=G"
 *   insn=0x000000000026FF14 string=0x000000000026FF18 "!"
 *   insn=0x000000000026FF1C string=0x000000000026FF20 "\t"
 *   insn=0x000000000026FF1C string=0x0000000000270030 "\t"
 *   insn=0x000000000026FF20 string=0x000000000026FF24 "*"
 *   insn=0x000000000026FF24 string=0x000000000026FF28 "\n"
 *   insn=0x000000000026FF2C string=0x000000000026FF30 "C"
 *   insn=0x000000000026FF30 string=0x000000000027003C "?"
 *   insn=0x000000000026FF34 string=0x000000000026FF38 ")=G"
 *   insn=0x000000000026FF38 string=0x000000000026FF3C "!"
 *   insn=0x000000000026FF40 string=0x000000000026FF44 "\t"
 *   insn=0x000000000026FF40 string=0x0000000000270050 "\t"
 *   insn=0x000000000026FF44 string=0x000000000026FF48 "*"
 *   insn=0x000000000026FF48 string=0x000000000026FF4C "\n"
 *   insn=0x000000000026FF50 string=0x000000000026FF54 "B"
 *   insn=0x000000000026FF54 string=0x000000000027005C "?"
 *   insn=0x000000000026FF58 string=0x000000000026FF5C ")=G"
 *   insn=0x000000000026FF5C string=0x000000000026FF60 "!"
 *   insn=0x000000000026FF60 string=0x000000000026FF64 "i"
 *   insn=0x000000000026FF64 string=0x000000000026FF68 "\t"
 *   insn=0x000000000026FF64 string=0x0000000000270070 "\t"
 *   insn=0x000000000026FF68 string=0x000000000026FF6C "*"
 *   insn=0x000000000026FF6C string=0x000000000026FF70 "\n"
 *   insn=0x000000000026FF74 string=0x000000000026FF78 "A"
 *   insn=0x000000000026FF78 string=0x000000000027007C "?"
 *   insn=0x000000000026FF7C string=0x000000000026FF80 ")=G"
 *   insn=0x000000000026FF80 string=0x000000000026FF84 "!"
 *   insn=0x000000000026FF84 string=0x000000000026FF88 "I"
 *   insn=0x000000000026FF88 string=0x000000000026FF8C "\t"
 *   insn=0x000000000026FF88 string=0x0000000000270090 "\t"
 *   insn=0x000000000026FF8C string=0x000000000026FF90 "*"
 *   insn=0x000000000026FF90 string=0x000000000026FF94 "\n"
 *   insn=0x000000000026FF98 string=0x000000000026FF9C "@"
 *   insn=0x000000000026FF9C string=0x000000000027009C "?"
 *   insn=0x000000000026FFA0 string=0x000000000026FFA4 ")=G"
 *   insn=0x000000000026FFA4 string=0x000000000026FFA8 "!"
 *   insn=0x000000000026FFA8 string=0x000000000026FFAC ")"
 *   insn=0x000000000026FFAC string=0x000000000026FFB0 "\t"
 *   insn=0x000000000026FFAC string=0x00000000002700B0 "\t"
 *   insn=0x000000000026FFB0 string=0x000000000026FFB4 "*"
 *   insn=0x000000000026FFB4 string=0x000000000026FFB8 "\n"
 *   insn=0x000000000026FFBC string=0x000000000026FFC0 "?"
 *   insn=0x000000000026FFC0 string=0x00000000002700BC "?"
 *   insn=0x000000000026FFC4 string=0x000000000026FFC8 ")=G"
 *   insn=0x000000000026FFC8 string=0x000000000026FFCC "!"
 *   insn=0x000000000026FFCC string=0x000000000026FFD0 "\t"
 *   insn=0x000000000026FFD0 string=0x000000000026FFD4 "\t"
 *   insn=0x000000000026FFD0 string=0x00000000002700D0 "\t"
 *   insn=0x000000000026FFD4 string=0x000000000026FFD8 "*"
 *   insn=0x000000000026FFD8 string=0x000000000026FFDC "\n"
 *   insn=0x000000000026FFE0 string=0x000000000026FFE4 ">"
 *   insn=0x000000000026FFE4 string=0x00000000002700DC "?"
 *   insn=0x000000000026FFE8 string=0x000000000026FFEC ")=G"
 *   insn=0x000000000026FFEC string=0x000000000026FFF0 "!"
 *   insn=0x000000000026FFF4 string=0x000000000026FFF8 "\t"
 *   insn=0x000000000026FFF4 string=0x00000000002700F0 "\t"
 *   insn=0x000000000026FFF8 string=0x000000000026FFFC "*"
 *   insn=0x000000000026FFFC string=0x0000000000270000 "\n"
 *   insn=0x0000000000270004 string=0x0000000000270008 "="
 *   insn=0x0000000000270008 string=0x00000000002700FC "?"
 *   insn=0x000000000027000C string=0x0000000000270010 ")=G"
 *   insn=0x0000000000270010 string=0x0000000000270014 "!"
 *   insn=0x0000000000270018 string=0x000000000027001C "\t"
 *   insn=0x0000000000270018 string=0x0000000000270110 "\t"
 *   insn=0x000000000027001C string=0x0000000000270020 "*"
 *   insn=0x0000000000270020 string=0x0000000000270024 "\n"
 *   insn=0x0000000000270028 string=0x000000000027002C "<"
 *   insn=0x000000000027002C string=0x000000000027011C "?"
 *   insn=0x0000000000270030 string=0x0000000000270034 "*"
 *   insn=0x0000000000270034 string=0x0000000000270038 "\n"
 *   insn=0x000000000027003C string=0x0000000000270040 "L"
 *   insn=0x0000000000270050 string=0x0000000000270054 "*"
 *   insn=0x0000000000270054 string=0x0000000000270058 "\n"
 *   insn=0x0000000000270068 string=0x000000000027006C ""
 *   insn=0x0000000000270070 string=0x0000000000270074 "*"
 *   insn=0x0000000000270074 string=0x0000000000270078 "\n"
 *   insn=0x0000000000270088 string=0x000000000027008C ":"
 *   insn=0x0000000000270090 string=0x0000000000270094 "*"
 *   insn=0x0000000000270094 string=0x0000000000270098 "\n"
 *   insn=0x000000000027009C string=0x00000000002700A0 ","
 *   insn=0x00000000002700A8 string=0x00000000002700AC "6"
 *   insn=0x00000000002700B0 string=0x00000000002700B4 "*"
 *   insn=0x00000000002700B4 string=0x00000000002700B8 "\n"
 *   insn=0x00000000002700BC string=0x00000000002700C0 "L"
 *   insn=0x00000000002700C8 string=0x00000000002700CC "W"
 *   insn=0x00000000002700D0 string=0x00000000002700D4 "*"
 *   insn=0x00000000002700D4 string=0x00000000002700D8 "\n"
 *   insn=0x00000000002700E8 string=0x00000000002700EC "S"
 *   insn=0x00000000002700F0 string=0x00000000002700F4 "*"
 *   insn=0x00000000002700F4 string=0x00000000002700F8 "\n"
 *   insn=0x0000000000270108 string=0x000000000027010C "r"
 *   insn=0x0000000000270110 string=0x0000000000270114 "*"
 *   insn=0x0000000000270114 string=0x0000000000270118 "\n"
 *   insn=0x000000000027011C string=0x0000000000270120 ","
 *   insn=0x0000000000270128 string=0x000000000027012C "n"
 *   insn=0x0000000000270130 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000270138 string=0x000000000027013C "(a"
 *   insn=0x0000000000270148 string=0x000000000027014C "J=G"
 *   insn=0x000000000027014C string=0x0000000000270150 ")!"
 *   insn=0x0000000000270154 string=0x0000000000270158 "*"
 *   insn=0x0000000000270154 string=0x000000000027016C "*"
 *   insn=0x0000000000270158 string=0x000000000027015C "K"
 *   insn=0x000000000027015C string=0x0000000000270160 "+"
 *   insn=0x0000000000270168 string=0x0000000000270178 "_"
 *   insn=0x000000000027016C string=0x0000000000270170 "K"
 *   insn=0x0000000000270170 string=0x0000000000270174 "+"
 *   insn=0x000000000027019C string=0x00000000002701A0 "`"
 *   insn=0x00000000002701A4 string=0x00000000002701A8 ")=G"
 *   insn=0x00000000002701A8 string=0x00000000002701AC "!"
 *   insn=0x00000000002701AC string=0x00000000002701B0 ")"
 *   insn=0x00000000002701B0 string=0x00000000002701B4 "\t"
 *   insn=0x00000000002701B0 string=0x00000000002703B4 "\t"
 *   insn=0x00000000002701B4 string=0x00000000002701B8 "*"
 *   insn=0x00000000002701B8 string=0x00000000002701BC "\n"
 *   insn=0x00000000002701C0 string=0x00000000002701C4 "v"
 *   insn=0x00000000002701C4 string=0x000000000027039C "?"
 *   insn=0x00000000002701D0 string=0x00000000002701D4 "(a"
 *   insn=0x00000000002701E0 string=0x00000000002701E4 "J=G"
 *   insn=0x00000000002701E4 string=0x00000000002701E8 ")!"
 *   insn=0x00000000002701EC string=0x00000000002701F0 "*"
 *   insn=0x00000000002701EC string=0x0000000000270204 "*"
 *   insn=0x00000000002701F0 string=0x00000000002701F4 "K"
 *   insn=0x00000000002701F4 string=0x00000000002701F8 "+"
 *   insn=0x0000000000270200 string=0x0000000000270210 "_"
 *   insn=0x0000000000270204 string=0x0000000000270208 "K"
 *   insn=0x0000000000270208 string=0x000000000027020C "+"
 *   insn=0x000000000027021C string=0x0000000000270220 "a"
 *   insn=0x000000000027023C string=0x0000000000270240 ")=G"
 *   insn=0x0000000000270240 string=0x0000000000270244 "!"
 *   insn=0x0000000000270244 string=0x0000000000270248 "i"
 *   insn=0x0000000000270248 string=0x000000000027024C "\t"
 *   insn=0x000000000027024C string=0x0000000000270250 "*"
 *   insn=0x0000000000270250 string=0x0000000000270254 "\n"
 *   insn=0x0000000000270258 string=0x000000000027025C "P"
 *   insn=0x0000000000270268 string=0x000000000027026C "(a"
 *   insn=0x0000000000270278 string=0x000000000027027C "J=G"
 *   insn=0x000000000027027C string=0x0000000000270280 ")!"
 *   insn=0x0000000000270284 string=0x0000000000270288 "*"
 *   insn=0x0000000000270284 string=0x000000000027029C "*"
 *   insn=0x0000000000270288 string=0x000000000027028C "K"
 *   insn=0x000000000027028C string=0x0000000000270290 "+"
 *   insn=0x0000000000270298 string=0x00000000002702A8 "_"
 *   insn=0x000000000027029C string=0x00000000002702A0 "K"
 *   insn=0x00000000002702A0 string=0x00000000002702A4 "+"
 *   insn=0x00000000002702B4 string=0x00000000002702B8 ";"
 *   insn=0x00000000002702D4 string=0x00000000002702D8 ")=G"
 *   insn=0x00000000002702D8 string=0x00000000002702DC "!"
 *   insn=0x00000000002702E0 string=0x00000000002702E4 "\t"
 *   insn=0x00000000002702E4 string=0x00000000002702E8 "*"
 *   insn=0x00000000002702E8 string=0x00000000002702EC "\n"
 *   insn=0x00000000002702F0 string=0x00000000002702F4 "*"
 *   insn=0x0000000000270300 string=0x0000000000270304 "J"
 *   insn=0x0000000000270308 string=0x000000000027030C "(a"
 *   insn=0x0000000000270318 string=0x000000000027031C "J=G"
 *   insn=0x000000000027031C string=0x0000000000270320 ")!"
 *   insn=0x0000000000270324 string=0x0000000000270328 "*"
 *   insn=0x0000000000270324 string=0x000000000027033C "*"
 *   insn=0x0000000000270328 string=0x000000000027032C "K"
 *   insn=0x000000000027032C string=0x0000000000270330 "+"
 *   insn=0x0000000000270338 string=0x0000000000270348 "_"
 *   insn=0x000000000027033C string=0x0000000000270340 "K"
 *   insn=0x0000000000270340 string=0x0000000000270344 "+"
 *   insn=0x0000000000270368 string=0x000000000027036C ")"
 *   insn=0x000000000027037C string=0x0000000000270380 ")=G"
 *   insn=0x0000000000270380 string=0x0000000000270384 "!"
 *   insn=0x0000000000270384 string=0x0000000000270388 "i"
 *   insn=0x0000000000270388 string=0x000000000027038C "\t"
 *   insn=0x000000000027038C string=0x0000000000270390 "*"
 *   insn=0x0000000000270390 string=0x0000000000270394 "\n"
 *   insn=0x000000000027039C string=0x00000000002703A0 "l"
 *   insn=0x00000000002703AC string=0x00000000002703B0 "EE"
 *   insn=0x00000000002703B4 string=0x00000000002703B8 "*"
 *   insn=0x00000000002703B8 string=0x00000000002703BC "\n"
 *   insn=0x00000000002703BC string=0x00000000002703C0 "?"
 *   insn=0x00000000002703C0 string=0x00000000002703C4 ""
 *   insn=0x00000000002703D0 string=0x00000000002703D4 ""
 *   insn=0x00000000002703D4 string=0x00000000001F6FF0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::HealthComponent::GetBindings(Caver::Component *a1, __int64 a2)
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
  sub_566BB8((int)&v31, "maxHealth");
  v32 = 0;
  sub_56A528(&v33, &v31);
  v35 = 0;
  v34 = 0x200000001LL;
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
  sub_566BB8((int)&v31, "healthType");
  v32 = 1;
  sub_56A528(&v33, &v31);
  v34 = 0x200000001LL;
  v35 = 1;
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
  sub_566BB8((int)&v31, "barOffsetX");
  v32 = 2;
  sub_56A528(&v33, &v31);
  v35 = 0;
  v34 = 0x500000001LL;
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
  sub_566BB8((int)&v31, "barOffsetY");
  v32 = 3;
  sub_56A528(&v33, &v31);
  v34 = 0x500000001LL;
  v35 = 0;
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


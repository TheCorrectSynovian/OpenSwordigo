/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000295924
 * Mangled: _ZN5Caver34ChargingMonsterControllerComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::ChargingMonsterControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000002010F0  Caver::ChargingMonsterControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x0000000000200EB0  Caver::MonsterControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000002010F0  Caver::ChargingMonsterControllerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 116
 *   insn=0x000000000029593C string=0x0000000000295940 "V"
 *   insn=0x000000000029594C string=0x0000000000295950 "X"
 *   insn=0x0000000000295954 string=0x0000000000587AC0 "runSpeed"
 *   insn=0x0000000000295980 string=0x0000000000295984 "h"
 *   insn=0x0000000000295984 string=0x0000000000295988 ""
 *   insn=0x0000000000295990 string=0x0000000000295994 "t"
 *   insn=0x00000000002959A4 string=0x00000000002959A8 ""
 *   insn=0x00000000002959B4 string=0x00000000002959B8 "\t\t@"
 *   insn=0x00000000002959BC string=0x00000000002959C0 ""
 *   insn=0x00000000002959C4 string=0x00000000002959C8 "h"
 *   insn=0x00000000002959C8 string=0x00000000002959CC ""
 *   insn=0x00000000002959CC string=0x00000000002959D0 "h"
 *   insn=0x00000000002959E4 string=0x00000000001F78E0 "0'"
 *   insn=0x00000000002959F8 string=0x00000000002959FC "a"
 *   insn=0x00000000002959FC string=0x0000000000295AE8 "i""
 *   insn=0x0000000000295A0C string=0x0000000000295B0C "i""
 *   insn=0x0000000000295A10 string=0x000000000058912D "runAcceleration"
 *   insn=0x0000000000295A1C string=0x0000000000295A20 "fD"
 *   insn=0x0000000000295A24 string=0x0000000000295A28 ""
 *   insn=0x0000000000295A44 string=0x0000000000295A48 "t"
 *   insn=0x0000000000295A58 string=0x0000000000295A5C ""
 *   insn=0x0000000000295A64 string=0x0000000000295A68 "C"
 *   insn=0x0000000000295A68 string=0x0000000000295A6C "\t\t@"
 *   insn=0x0000000000295A70 string=0x0000000000295A74 ""
 *   insn=0x0000000000295A78 string=0x0000000000295A7C "h"
 *   insn=0x0000000000295A7C string=0x0000000000295A80 ""
 *   insn=0x0000000000295A80 string=0x0000000000295A84 "h"
 *   insn=0x0000000000295AA4 string=0x0000000000295AA8 "A"
 *   insn=0x0000000000295AA8 string=0x0000000000295B30 "i""
 *   insn=0x0000000000295AB8 string=0x0000000000295B54 "i""
 *   insn=0x0000000000295AE8 string=0x0000000000295AEC ")=G"
 *   insn=0x0000000000295AEC string=0x0000000000295AF0 "!"
 *   insn=0x0000000000295AF0 string=0x0000000000295AF4 ")"
 *   insn=0x0000000000295AF4 string=0x0000000000295AF8 "\t"
 *   insn=0x0000000000295AF4 string=0x0000000000295B78 "\t"
 *   insn=0x0000000000295AF8 string=0x0000000000295AFC "*"
 *   insn=0x0000000000295AFC string=0x0000000000295B00 "\n"
 *   insn=0x0000000000295B08 string=0x0000000000295B84 "?"
 *   insn=0x0000000000295B0C string=0x0000000000295B10 ")=G"
 *   insn=0x0000000000295B10 string=0x0000000000295B14 "!"
 *   insn=0x0000000000295B14 string=0x0000000000295B18 "\t"
 *   insn=0x0000000000295B18 string=0x0000000000295B1C "\t"
 *   insn=0x0000000000295B18 string=0x0000000000295B98 "\t"
 *   insn=0x0000000000295B1C string=0x0000000000295B20 "*"
 *   insn=0x0000000000295B20 string=0x0000000000295B24 "\n"
 *   insn=0x0000000000295B2C string=0x0000000000295BA4 "?"
 *   insn=0x0000000000295B30 string=0x0000000000295B34 ")=G"
 *   insn=0x0000000000295B34 string=0x0000000000295B38 "!"
 *   insn=0x0000000000295B3C string=0x0000000000295B40 "\t"
 *   insn=0x0000000000295B3C string=0x0000000000295BB8 "\t"
 *   insn=0x0000000000295B40 string=0x0000000000295B44 "*"
 *   insn=0x0000000000295B44 string=0x0000000000295B48 "\n"
 *   insn=0x0000000000295B50 string=0x0000000000295BC4 "?"
 *   insn=0x0000000000295B54 string=0x0000000000295B58 ")=G"
 *   insn=0x0000000000295B58 string=0x0000000000295B5C "!"
 *   insn=0x0000000000295B60 string=0x0000000000295B64 "\t"
 *   insn=0x0000000000295B60 string=0x0000000000295BD8 "\t"
 *   insn=0x0000000000295B64 string=0x0000000000295B68 "*"
 *   insn=0x0000000000295B68 string=0x0000000000295B6C "\n"
 *   insn=0x0000000000295B74 string=0x0000000000295BE4 "?"
 *   insn=0x0000000000295B78 string=0x0000000000295B7C "*"
 *   insn=0x0000000000295B7C string=0x0000000000295B80 "\n"
 *   insn=0x0000000000295B98 string=0x0000000000295B9C "*"
 *   insn=0x0000000000295B9C string=0x0000000000295BA0 "\n"
 *   insn=0x0000000000295BA4 string=0x0000000000295BA8 "L"
 *   insn=0x0000000000295BB8 string=0x0000000000295BBC "*"
 *   insn=0x0000000000295BBC string=0x0000000000295BC0 "\n"
 *   insn=0x0000000000295BC4 string=0x0000000000295BC8 ","
 *   insn=0x0000000000295BD8 string=0x0000000000295BDC "*"
 *   insn=0x0000000000295BDC string=0x0000000000295BE0 "\n"
 *   insn=0x0000000000295BF8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000295C00 string=0x0000000000295C04 "(a"
 *   insn=0x0000000000295C0C string=0x0000000000295C10 "j""
 *   insn=0x0000000000295C10 string=0x0000000000295C14 "J=G"
 *   insn=0x0000000000295C14 string=0x0000000000295C18 ")!"
 *   insn=0x0000000000295C1C string=0x0000000000295C20 "*"
 *   insn=0x0000000000295C1C string=0x0000000000295C34 "*"
 *   insn=0x0000000000295C20 string=0x0000000000295C24 "K"
 *   insn=0x0000000000295C24 string=0x0000000000295C28 "+"
 *   insn=0x0000000000295C30 string=0x0000000000295C40 "_"
 *   insn=0x0000000000295C34 string=0x0000000000295C38 "K"
 *   insn=0x0000000000295C38 string=0x0000000000295C3C "+"
 *   insn=0x0000000000295C68 string=0x0000000000295C6C "i""
 *   insn=0x0000000000295C6C string=0x0000000000295C70 ")=G"
 *   insn=0x0000000000295C70 string=0x0000000000295C74 "!"
 *   insn=0x0000000000295C78 string=0x0000000000295C7C "\t"
 *   insn=0x0000000000295C78 string=0x0000000000295D4C "\t"
 *   insn=0x0000000000295C7C string=0x0000000000295C80 "*"
 *   insn=0x0000000000295C80 string=0x0000000000295C84 "\n"
 *   insn=0x0000000000295C88 string=0x0000000000295C8C "*"
 *   insn=0x0000000000295C8C string=0x0000000000295D34 "?"
 *   insn=0x0000000000295C98 string=0x0000000000295C9C "J"
 *   insn=0x0000000000295CA0 string=0x0000000000295CA4 "(a"
 *   insn=0x0000000000295CAC string=0x0000000000295CB0 "j""
 *   insn=0x0000000000295CB0 string=0x0000000000295CB4 "J=G"
 *   insn=0x0000000000295CB4 string=0x0000000000295CB8 ")!"
 *   insn=0x0000000000295CBC string=0x0000000000295CC0 "*"
 *   insn=0x0000000000295CBC string=0x0000000000295CD4 "*"
 *   insn=0x0000000000295CC0 string=0x0000000000295CC4 "K"
 *   insn=0x0000000000295CC4 string=0x0000000000295CC8 "+"
 *   insn=0x0000000000295CD0 string=0x0000000000295CE0 "_"
 *   insn=0x0000000000295CD4 string=0x0000000000295CD8 "K"
 *   insn=0x0000000000295CD8 string=0x0000000000295CDC "+"
 *   insn=0x0000000000295D00 string=0x0000000000295D04 ")"
 *   insn=0x0000000000295D10 string=0x0000000000295D14 "i""
 *   insn=0x0000000000295D14 string=0x0000000000295D18 ")=G"
 *   insn=0x0000000000295D18 string=0x0000000000295D1C "!"
 *   insn=0x0000000000295D1C string=0x0000000000295D20 "i"
 *   insn=0x0000000000295D20 string=0x0000000000295D24 "\t"
 *   insn=0x0000000000295D24 string=0x0000000000295D28 "*"
 *   insn=0x0000000000295D28 string=0x0000000000295D2C "\n"
 *   insn=0x0000000000295D34 string=0x0000000000295D38 "l"
 *   insn=0x0000000000295D4C string=0x0000000000295D50 "*"
 *   insn=0x0000000000295D50 string=0x0000000000295D54 "\n"
 *   insn=0x0000000000295D54 string=0x0000000000295D58 "?"
 *   insn=0x0000000000295D58 string=0x0000000000295D5C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ChargingMonsterControllerComponent::GetBindings(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  void *v4; // x0
  void *v5; // x0
  __int64 v6; // x20
  void *v7; // x0
  void *v8; // x0
  unsigned int *v9; // x8
  int v10; // w9
  unsigned int *v11; // x8
  int v12; // w9
  unsigned int *v13; // x8
  int v14; // w9
  unsigned int *v15; // x8
  int v16; // w9
  __int64 v17; // [xsp+8h] [xbp-78h] BYREF
  int v18; // [xsp+18h] [xbp-68h]
  __int64 v19; // [xsp+20h] [xbp-60h] BYREF
  __int64 v20; // [xsp+28h] [xbp-58h]
  int v21; // [xsp+30h] [xbp-50h]
  __int64 v22; // [xsp+38h] [xbp-48h]

  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::MonsterControllerComponent::GetBindings();
  sub_566BB8((int)&v17, "runSpeed");
  v18 = 103;
  sub_56A528(&v19, &v17);
  v21 = 0;
  v20 = 0x500000001LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v3 = v18;
    sub_56A528(v3 + 8, &v19);
    *(_DWORD *)(v3 + 24) = v21;
    *(_QWORD *)(v3 + 16) = v20;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v4 = (void *)(v19 - 24);
  if ( (__int64 *)(v19 - 24) != &qword_6FD2E0 )
  {
    v9 = (unsigned int *)(v19 - 8);
    if ( &pthread_create )
    {
      do
        v10 = __ldaxr(v9);
      while ( __stlxr(v10 - 1, v9) );
    }
    else
    {
      v10 = (*v9)--;
    }
    if ( v10 <= 0 )
      operator delete(v4);
  }
  v5 = (void *)(v17 - 24);
  if ( (__int64 *)(v17 - 24) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v17 - 8);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v5);
  }
  sub_566BB8((int)&v17, "runAcceleration");
  v18 = 104;
  sub_56A528(&v19, &v17);
  v20 = 0x500000001LL;
  v21 = 0;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 == *(_QWORD *)(a2 + 16) )
  {
    std::vector<Caver::Binding>::_M_insert_aux();
  }
  else
  {
    *(_DWORD *)v6 = v18;
    sub_56A528(v6 + 8, &v19);
    *(_DWORD *)(v6 + 24) = v21;
    *(_QWORD *)(v6 + 16) = v20;
    *(_QWORD *)(a2 + 8) += 32LL;
  }
  v7 = (void *)(v19 - 24);
  if ( (__int64 *)(v19 - 24) != &qword_6FD2E0 )
  {
    v13 = (unsigned int *)(v19 - 8);
    if ( &pthread_create )
    {
      do
        v14 = __ldaxr(v13);
      while ( __stlxr(v14 - 1, v13) );
    }
    else
    {
      v14 = (*v13)--;
    }
    if ( v14 <= 0 )
      operator delete(v7);
  }
  v8 = (void *)(v17 - 24);
  if ( (__int64 *)(v17 - 24) != &qword_6FD2E0 )
  {
    v15 = (unsigned int *)(v17 - 8);
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
      operator delete(v8);
  }
}


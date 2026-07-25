/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000229904
 * Mangled: _ZN5Caver29ObjectLinkControllerComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::ObjectLinkControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x00000000001F6860  Caver::ObjectLinkControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *   0x00000000002008D0  std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::BindingValue*,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>>,Caver::BindingValue const&)
 *   0x0000000000202470  Caver::Component::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 72
 *   insn=0x0000000000229918 string=0x000000000022991C "V"
 *   insn=0x0000000000229928 string=0x000000000022992C "?"
 *   insn=0x0000000000229940 string=0x0000000000229944 ""
 *   insn=0x0000000000229944 string=0x0000000000229948 "@"
 *   insn=0x0000000000229950 string=0x0000000000229954 "D@"
 *   insn=0x0000000000229958 string=0x000000000022995C ""
 *   insn=0x0000000000229958 string=0x0000000000229988 "@"
 *   insn=0x000000000022995C string=0x0000000000229960 "!@"
 *   insn=0x0000000000229978 string=0x000000000022997C "!@"
 *   insn=0x0000000000229994 string=0x0000000000229998 "+\n"
 *   insn=0x00000000002299B0 string=0x00000000002299B4 "a"
 *   insn=0x00000000002299B4 string=0x00000000002299B8 "?"
 *   insn=0x00000000002299C0 string=0x00000000002299C4 "("
 *   insn=0x00000000002299C8 string=0x00000000002299CC "("
 *   insn=0x00000000002299D0 string=0x00000000002299D4 "("
 *   insn=0x00000000002299D8 string=0x00000000002299DC "\t"
 *   insn=0x00000000002299DC string=0x00000000002299E0 ")"
 *   insn=0x00000000002299E0 string=0x00000000002299E4 "\t"
 *   insn=0x00000000002299E8 string=0x00000000002299EC "("
 *   insn=0x00000000002299F0 string=0x00000000002299F4 "("
 *   insn=0x00000000002299F8 string=0x00000000002299FC "\t"
 *   insn=0x00000000002299F8 string=0x0000000000229A08 "("
 *   insn=0x00000000002299FC string=0x0000000000229A00 ")"
 *   insn=0x0000000000229A00 string=0x0000000000229A04 "\t"
 *   insn=0x0000000000229A08 string=0x0000000000229A0C "h"
 *   insn=0x0000000000229A28 string=0x0000000000229A2C "4"
 *   insn=0x0000000000229A30 string=0x0000000000229A34 ""
 *   insn=0x0000000000229A40 string=0x0000000000229A44 "\t@"
 *   insn=0x0000000000229A50 string=0x0000000000229A54 ""
 *   insn=0x0000000000229A60 string=0x0000000000229A64 "@"
 *   insn=0x0000000000229A70 string=0x0000000000229A74 "4"
 *   insn=0x0000000000229A78 string=0x0000000000229A7C ""
 *   insn=0x0000000000229A8C string=0x0000000000229A90 "\t@"
 *   insn=0x0000000000229A98 string=0x0000000000229A9C ""
 *   insn=0x0000000000229AAC string=0x0000000000229AB0 "@"
 *   insn=0x0000000000229AD4 string=0x0000000000229AD8 "fb"
 *   insn=0x0000000000229B08 string=0x0000000000229B0C "!@"
 *   insn=0x0000000000229B14 string=0x0000000000229B18 "("
 *   insn=0x0000000000229B20 string=0x0000000000229B24 "("
 *   insn=0x0000000000229B2C string=0x0000000000229B30 "!@"
 *   insn=0x0000000000229B38 string=0x0000000000229B3C "@"
 *   insn=0x0000000000229B48 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000229B58 string=0x0000000000229B5C ""
 *   insn=0x0000000000229B68 string=0x0000000000229B6C "\t@"
 *   insn=0x0000000000229B78 string=0x0000000000229B7C ""
 *   insn=0x0000000000229B88 string=0x0000000000229B8C "@"
 *   insn=0x0000000000229B94 string=0x0000000000229B98 "'"
 *   insn=0x0000000000229BA4 string=0x0000000000229BA8 "4"
 *   insn=0x0000000000229BAC string=0x0000000000229BB0 ""
 *   insn=0x0000000000229BBC string=0x0000000000229BC0 "\t@"
 *   insn=0x0000000000229BCC string=0x0000000000229BD0 ""
 *   insn=0x0000000000229BDC string=0x0000000000229BE0 "@"
 *   insn=0x0000000000229BEC string=0x0000000000229BF0 "4"
 *   insn=0x0000000000229BF4 string=0x0000000000229BF8 ""
 *   insn=0x0000000000229C04 string=0x0000000000229C08 "\t@"
 *   insn=0x0000000000229C14 string=0x0000000000229C18 ""
 *   insn=0x0000000000229C24 string=0x0000000000229C28 "@"
 *   insn=0x0000000000229C34 string=0x0000000000229C38 "#_"
 *   insn=0x0000000000229C4C string=0x0000000000229C50 "4"
 *   insn=0x0000000000229C54 string=0x0000000000229C58 ""
 *   insn=0x0000000000229C64 string=0x0000000000229C68 "\t@"
 *   insn=0x0000000000229C74 string=0x0000000000229C78 ""
 *   insn=0x0000000000229C84 string=0x0000000000229C88 "@"
 *   insn=0x0000000000229CAC string=0x0000000000229CB0 "tF@"
 *   insn=0x0000000000229CB8 string=0x0000000000229CBC "h"
 *   insn=0x0000000000229CCC string=0x0000000000229CD0 "!@"
 *   insn=0x0000000000229CD8 string=0x0000000000229CDC "H"
 *   insn=0x0000000000229CDC string=0x0000000000229CE0 "sF@"
 *   insn=0x0000000000229CE0 string=0x0000000000229CE4 "hF@"
 *   insn=0x0000000000229CE8 string=0x0000000000229CEC "h"
 *   insn=0x0000000000229CF0 string=0x0000000000229CF4 "!@"
 *   insn=0x0000000000229CF8 string=0x0000000000229CFC "hF@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ObjectLinkControllerComponent::GetEnumValuesForBindedProperty(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v5; // x21
  __int64 v6; // x8
  _QWORD *v7; // x0
  __int64 v8; // x8
  _QWORD *v9; // x20
  int *v10; // x21
  __int64 v11; // x23
  __int64 v12; // x24
  __int64 v13; // x1
  _QWORD *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 v18; // x8
  _QWORD *v19; // x21
  int v20; // [xsp+20h] [xbp-60h]
  __int64 v21; // [xsp+28h] [xbp-58h]
  _QWORD *v22; // [xsp+30h] [xbp-50h]
  __int64 v23; // [xsp+38h] [xbp-48h]
  _QWORD *v24; // [xsp+40h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a2 != 1 )
  {
    Caver::Component::GetEnumValuesForBindedProperty();
    return;
  }
  v5 = *(_QWORD **)(a1 + 136);
  if ( !v5 )
    return;
  v6 = v5[17];
  if ( v6 )
    goto LABEL_4;
  (*(void (__fastcall **)(_QWORD))(*v5 + 64LL))(*(_QWORD *)(a1 + 136));
  if ( !v5[17] )
    return;
  v19 = *(_QWORD **)(a1 + 136);
  v6 = v19[17];
  if ( v6 )
  {
LABEL_4:
    if ( !*(_QWORD *)(v6 + 24) )
      return;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(*v19 + 64LL))(*(_QWORD *)(a1 + 136));
    if ( !*(_QWORD *)(v19[17] + 24LL) )
      return;
  }
  v7 = *(_QWORD **)(a1 + 136);
  v8 = v7[17];
  if ( !v8 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v7 + 64LL))(v7);
    v9 = *(_QWORD **)(a1 + 136);
    v8 = v9[17];
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v9 + 64LL))(v9);
      v8 = v9[17];
    }
  }
  v10 = **(int ***)(v8 + 24);
  if ( *v10 >= 1 )
  {
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      Caver::BindingValue::ValueWithString();
      v13 = *(_QWORD *)(a3 + 8);
      if ( v13 != *(_QWORD *)(a3 + 16) )
        break;
      std::vector<Caver::BindingValue>::_M_insert_aux();
      v14 = v24;
      if ( v24 )
        goto LABEL_18;
LABEL_21:
      if ( v22 )
      {
        v17 = v22[1] - 1LL;
        v22[1] = v17;
        if ( !v17 )
        {
          (*(void (__fastcall **)())(*v22 + 16LL))();
          v18 = v22[2] - 1LL;
          v22[2] = v18;
          if ( !v18 )
            (*(void (__fastcall **)())(*v22 + 24LL))();
        }
      }
      ++v12;
      v11 += 144;
      if ( v12 >= *v10 )
        return;
    }
    *(_DWORD *)v13 = v20;
    *(_QWORD *)(v13 + 8) = v21;
    *(_QWORD *)(v13 + 16) = v22;
    if ( v22 )
      ++v22[1];
    *(_QWORD *)(v13 + 24) = v23;
    *(_QWORD *)(v13 + 32) = v24;
    if ( v24 )
      ++v24[1];
    *(_QWORD *)(a3 + 8) = v13 + 40;
    v14 = v24;
    if ( !v24 )
      goto LABEL_21;
LABEL_18:
    v15 = v14[1] - 1LL;
    v14[1] = v15;
    if ( !v15 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      v16 = v14[2] - 1LL;
      v14[2] = v16;
      if ( !v16 )
        (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
    }
    goto LABEL_21;
  }
}


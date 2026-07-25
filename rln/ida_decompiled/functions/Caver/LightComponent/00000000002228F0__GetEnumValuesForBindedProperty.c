/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002228F0
 * Mangled: _ZN5Caver14LightComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::LightComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x00000000001FB970  Caver::LightComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB970  Caver::LightComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *   0x00000000002008D0  std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::BindingValue*,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>>,Caver::BindingValue const&)
 *   0x0000000000202470  Caver::Component::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 58
 *   insn=0x0000000000222900 string=0x0000000000222904 "V"
 *   insn=0x0000000000222914 string=0x0000000000222944 "(&"
 *   insn=0x0000000000222944 string=0x0000000000222948 "9D"
 *   insn=0x0000000000222948 string=0x000000000022294C ""
 *   insn=0x000000000022294C string=0x0000000000222950 ""
 *   insn=0x0000000000222950 string=0x0000000000222954 "h"
 *   insn=0x0000000000222954 string=0x0000000000222958 "4&"
 *   insn=0x0000000000222968 string=0x000000000022296C "a"
 *   insn=0x000000000022296C string=0x0000000000222970 "?"
 *   insn=0x0000000000222978 string=0x000000000022297C "("
 *   insn=0x0000000000222980 string=0x0000000000222984 "("
 *   insn=0x0000000000222988 string=0x000000000022298C "("
 *   insn=0x0000000000222990 string=0x0000000000222994 "\t"
 *   insn=0x0000000000222994 string=0x0000000000222998 ")"
 *   insn=0x0000000000222998 string=0x000000000022299C "\t"
 *   insn=0x00000000002229A0 string=0x00000000002229A4 "("
 *   insn=0x00000000002229A8 string=0x00000000002229AC "("
 *   insn=0x00000000002229B0 string=0x00000000002229B4 "\t"
 *   insn=0x00000000002229B0 string=0x00000000002229C0 "("
 *   insn=0x00000000002229B4 string=0x00000000002229B8 ")"
 *   insn=0x00000000002229B8 string=0x00000000002229BC "\t"
 *   insn=0x00000000002229C0 string=0x00000000002229C4 "h"
 *   insn=0x00000000002229E0 string=0x00000000002229E4 "5"
 *   insn=0x00000000002229E8 string=0x00000000002229EC ""
 *   insn=0x00000000002229F8 string=0x00000000002229FC "\t@"
 *   insn=0x0000000000222A08 string=0x0000000000222A0C ""
 *   insn=0x0000000000222A18 string=0x0000000000222A1C "@"
 *   insn=0x0000000000222A28 string=0x0000000000222A2C "5"
 *   insn=0x0000000000222A30 string=0x0000000000222A34 ""
 *   insn=0x0000000000222A44 string=0x0000000000222A48 "\t@"
 *   insn=0x0000000000222A50 string=0x0000000000222A54 ""
 *   insn=0x0000000000222A64 string=0x0000000000222A68 "@"
 *   insn=0x0000000000222A70 string=0x0000000000222A74 ""
 *   insn=0x0000000000222A74 string=0x0000000000222A78 "H"
 *   insn=0x0000000000222A80 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000222A90 string=0x0000000000222A94 ""
 *   insn=0x0000000000222AA0 string=0x0000000000222AA4 "\t@"
 *   insn=0x0000000000222AB0 string=0x0000000000222AB4 ""
 *   insn=0x0000000000222AC0 string=0x0000000000222AC4 "@"
 *   insn=0x0000000000222ACC string=0x0000000000222AD0 "'"
 *   insn=0x0000000000222ADC string=0x0000000000222AE0 "4"
 *   insn=0x0000000000222AE4 string=0x0000000000222AE8 ""
 *   insn=0x0000000000222AF4 string=0x0000000000222AF8 "\t@"
 *   insn=0x0000000000222B04 string=0x0000000000222B08 ""
 *   insn=0x0000000000222B14 string=0x0000000000222B18 "@"
 *   insn=0x0000000000222B24 string=0x0000000000222B28 "4"
 *   insn=0x0000000000222B2C string=0x0000000000222B30 ""
 *   insn=0x0000000000222B3C string=0x0000000000222B40 "\t@"
 *   insn=0x0000000000222B4C string=0x0000000000222B50 ""
 *   insn=0x0000000000222B5C string=0x0000000000222B60 "@"
 *   insn=0x0000000000222B6C string=0x0000000000222B70 "U{"
 *   insn=0x0000000000222B84 string=0x0000000000222B88 "4"
 *   insn=0x0000000000222B8C string=0x0000000000222B90 ""
 *   insn=0x0000000000222B9C string=0x0000000000222BA0 "\t@"
 *   insn=0x0000000000222BAC string=0x0000000000222BB0 ""
 *   insn=0x0000000000222BBC string=0x0000000000222BC0 "@"
 *   insn=0x0000000000222BD8 string=0x0000000000222BDC "ec"
 *   insn=0x0000000000222BDC string=0x00000000001FB970 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::LightComponent::GetEnumValuesForBindedProperty(__int64 a1, int a2, __int64 a3)
{
  __int64 *i; // x20
  __int64 v5; // x1
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // t1
  int v12; // [xsp+0h] [xbp-50h]
  __int64 v13; // [xsp+8h] [xbp-48h]
  _QWORD *v14; // [xsp+10h] [xbp-40h]
  __int64 v15; // [xsp+18h] [xbp-38h]
  _QWORD *v16; // [xsp+20h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a2 )
  {
    Caver::Component::GetEnumValuesForBindedProperty();
    return;
  }
  if ( *(_QWORD *)(Caver::typeStrings - 24) )
  {
    for ( i = &Caver::typeStrings; ; ++i )
    {
      Caver::BindingValue::ValueWithString();
      v5 = *(_QWORD *)(a3 + 8);
      if ( v5 != *(_QWORD *)(a3 + 16) )
        break;
      std::vector<Caver::BindingValue>::_M_insert_aux();
      v6 = v16;
      if ( v16 )
        goto LABEL_14;
LABEL_17:
      if ( v14 )
      {
        v9 = v14[1] - 1LL;
        v14[1] = v9;
        if ( !v9 )
        {
          (*(void (__fastcall **)())(*v14 + 16LL))();
          v10 = v14[2] - 1LL;
          v14[2] = v10;
          if ( !v10 )
            (*(void (__fastcall **)())(*v14 + 24LL))();
        }
      }
      v11 = i[1];
      if ( !*(_QWORD *)(v11 - 24) )
        return;
    }
    *(_DWORD *)v5 = v12;
    *(_QWORD *)(v5 + 8) = v13;
    *(_QWORD *)(v5 + 16) = v14;
    if ( v14 )
      ++v14[1];
    *(_QWORD *)(v5 + 24) = v15;
    *(_QWORD *)(v5 + 32) = v16;
    if ( v16 )
      ++v16[1];
    *(_QWORD *)(a3 + 8) = v5 + 40;
    v6 = v16;
    if ( !v16 )
      goto LABEL_17;
LABEL_14:
    v7 = v6[1] - 1LL;
    v6[1] = v7;
    if ( !v7 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
    goto LABEL_17;
  }
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BDFE4
 * Mangled: _ZN5Caver28GroundMeshGeneratorComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::GroundMeshGeneratorComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x00000000001FA1C0  Caver::GroundMeshGeneratorComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA1C0  Caver::GroundMeshGeneratorComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x00000000002008D0  std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::BindingValue*,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>>,Caver::BindingValue const&)
 *   0x0000000000202470  Caver::Component::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 55
 *   insn=0x00000000002BDFF8 string=0x00000000002BDFFC "V"
 *   insn=0x00000000002BE004 string=0x00000000002BE008 "?"
 *   insn=0x00000000002BE010 string=0x00000000002BE014 "7!"
 *   insn=0x00000000002BE02C string=0x00000000002BE030 "D"
 *   insn=0x00000000002BE030 string=0x00000000002BE034 "a"
 *   insn=0x00000000002BE034 string=0x00000000002BE038 "?"
 *   insn=0x00000000002BE040 string=0x00000000002BE044 "("
 *   insn=0x00000000002BE048 string=0x00000000002BE04C "("
 *   insn=0x00000000002BE050 string=0x00000000002BE054 "("
 *   insn=0x00000000002BE058 string=0x00000000002BE05C "\t"
 *   insn=0x00000000002BE05C string=0x00000000002BE060 ")"
 *   insn=0x00000000002BE060 string=0x00000000002BE064 "\t"
 *   insn=0x00000000002BE068 string=0x00000000002BE06C "("
 *   insn=0x00000000002BE070 string=0x00000000002BE074 "("
 *   insn=0x00000000002BE078 string=0x00000000002BE07C "\t"
 *   insn=0x00000000002BE078 string=0x00000000002BE088 "("
 *   insn=0x00000000002BE07C string=0x00000000002BE080 ")"
 *   insn=0x00000000002BE080 string=0x00000000002BE084 "\t"
 *   insn=0x00000000002BE088 string=0x00000000002BE08C "h"
 *   insn=0x00000000002BE0A0 string=0x00000000002BE0A4 "\n"
 *   insn=0x00000000002BE0A8 string=0x00000000002BE0AC "5"
 *   insn=0x00000000002BE0B0 string=0x00000000002BE0B4 ""
 *   insn=0x00000000002BE0C0 string=0x00000000002BE0C4 "\t@"
 *   insn=0x00000000002BE0D0 string=0x00000000002BE0D4 ""
 *   insn=0x00000000002BE0E0 string=0x00000000002BE0E4 "@"
 *   insn=0x00000000002BE0F8 string=0x00000000002BE0FC ""
 *   insn=0x00000000002BE100 string=0x00000000002BE104 "!"
 *   insn=0x00000000002BE10C string=0x00000000002BE110 "\t@"
 *   insn=0x00000000002BE118 string=0x00000000002BE11C ""
 *   insn=0x00000000002BE12C string=0x00000000002BE130 "\n"
 *   insn=0x00000000002BE138 string=0x00000000002BE13C "@"
 *   insn=0x00000000002BE164 string=0x00000000002BE180 "T"
 *   insn=0x00000000002BE180 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002BE190 string=0x00000000002BE194 ""
 *   insn=0x00000000002BE1A0 string=0x00000000002BE1A4 "\t@"
 *   insn=0x00000000002BE1B0 string=0x00000000002BE1B4 ""
 *   insn=0x00000000002BE1C0 string=0x00000000002BE1C4 "@"
 *   insn=0x00000000002BE1CC string=0x00000000002BE1D0 "'"
 *   insn=0x00000000002BE1DC string=0x00000000002BE1E0 "4"
 *   insn=0x00000000002BE1E4 string=0x00000000002BE1E8 ""
 *   insn=0x00000000002BE1F4 string=0x00000000002BE1F8 "\t@"
 *   insn=0x00000000002BE204 string=0x00000000002BE208 ""
 *   insn=0x00000000002BE214 string=0x00000000002BE218 "@"
 *   insn=0x00000000002BE224 string=0x00000000002BE228 "4"
 *   insn=0x00000000002BE22C string=0x00000000002BE230 ""
 *   insn=0x00000000002BE23C string=0x00000000002BE240 "\t@"
 *   insn=0x00000000002BE24C string=0x00000000002BE250 ""
 *   insn=0x00000000002BE25C string=0x00000000002BE260 "@"
 *   insn=0x00000000002BE278 string=0x00000000002BE27C "4@"
 *   insn=0x00000000002BE284 string=0x00000000002BE288 "4"
 *   insn=0x00000000002BE28C string=0x00000000002BE290 ""
 *   insn=0x00000000002BE29C string=0x00000000002BE2A0 "\t@"
 *   insn=0x00000000002BE2AC string=0x00000000002BE2B0 ""
 *   insn=0x00000000002BE2BC string=0x00000000002BE2C0 "@"
 *   insn=0x00000000002BE2DC string=0x00000000001FA1C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GroundMeshGeneratorComponent::GetEnumValuesForBindedProperty(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // x8
  __int64 v5; // x20
  __int64 v6; // x1
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x8
  int v12; // [xsp+0h] [xbp-60h]
  __int64 v13; // [xsp+8h] [xbp-58h]
  _QWORD *v14; // [xsp+10h] [xbp-50h]
  __int64 v15; // [xsp+18h] [xbp-48h]
  _QWORD *v16; // [xsp+20h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a2 == 4 )
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = v4;
      Caver::BindingValue::ValueWithInt();
      v6 = *(_QWORD *)(a3 + 8);
      if ( v6 != *(_QWORD *)(a3 + 16) )
        break;
      std::vector<Caver::BindingValue>::_M_insert_aux();
      v7 = v16;
      if ( v16 )
        goto LABEL_11;
LABEL_14:
      if ( !v14
        || (v10 = v14[1] - 1LL, (v14[1] = v10) != 0)
        || ((*(void (__fastcall **)())(*v14 + 16LL))(), v11 = v14[2] - 1LL, (v14[2] = v11) != 0) )
      {
        v4 = 1;
        if ( v5 )
          return;
      }
      else
      {
        (*(void (__fastcall **)())(*v14 + 24LL))();
        v4 = 1;
        if ( v5 )
          return;
      }
    }
    *(_DWORD *)v6 = v12;
    *(_QWORD *)(v6 + 8) = v13;
    *(_QWORD *)(v6 + 16) = v14;
    if ( v14 )
      ++v14[1];
    *(_QWORD *)(v6 + 24) = v15;
    *(_QWORD *)(v6 + 32) = v16;
    if ( v16 )
      ++v16[1];
    *(_QWORD *)(a3 + 8) = v6 + 40;
    v7 = v16;
    if ( !v16 )
      goto LABEL_14;
LABEL_11:
    v8 = v7[1] - 1LL;
    v7[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
    goto LABEL_14;
  }
  Caver::Component::GetEnumValuesForBindedProperty();
}


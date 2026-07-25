/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B3E74
 * Mangled: _ZN5Caver27ElevatorControllerComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::ElevatorControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x00000000001F6290  Caver::ElevatorControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 7
 *   0x00000000001F6290  Caver::ElevatorControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x00000000002008D0  std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::BindingValue*,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>>,Caver::BindingValue const&)
 *   0x0000000000202470  Caver::Component::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 54
 *   insn=0x00000000002B3E88 string=0x00000000002B3E8C "V"
 *   insn=0x00000000002B3E94 string=0x00000000002B3E98 "?"
 *   insn=0x00000000002B3EBC string=0x00000000002B3EC0 "a"
 *   insn=0x00000000002B3EC0 string=0x00000000002B3EC4 "?"
 *   insn=0x00000000002B3ECC string=0x00000000002B3ED0 "("
 *   insn=0x00000000002B3ED4 string=0x00000000002B3ED8 "("
 *   insn=0x00000000002B3EDC string=0x00000000002B3EE0 "("
 *   insn=0x00000000002B3EE4 string=0x00000000002B3EE8 "\t"
 *   insn=0x00000000002B3EE8 string=0x00000000002B3EEC ")"
 *   insn=0x00000000002B3EEC string=0x00000000002B3EF0 "\t"
 *   insn=0x00000000002B3EF4 string=0x00000000002B3EF8 "("
 *   insn=0x00000000002B3EFC string=0x00000000002B3F00 "("
 *   insn=0x00000000002B3F04 string=0x00000000002B3F08 "\t"
 *   insn=0x00000000002B3F04 string=0x00000000002B3F14 "("
 *   insn=0x00000000002B3F08 string=0x00000000002B3F0C ")"
 *   insn=0x00000000002B3F0C string=0x00000000002B3F10 "\t"
 *   insn=0x00000000002B3F14 string=0x00000000002B3F18 "h"
 *   insn=0x00000000002B3F2C string=0x00000000002B3F30 "h2"
 *   insn=0x00000000002B3F34 string=0x00000000002B3F38 "5"
 *   insn=0x00000000002B3F3C string=0x00000000002B3F40 ""
 *   insn=0x00000000002B3F4C string=0x00000000002B3F50 "\t@"
 *   insn=0x00000000002B3F5C string=0x00000000002B3F60 ""
 *   insn=0x00000000002B3F6C string=0x00000000002B3F70 "@"
 *   insn=0x00000000002B3F7C string=0x00000000002B3F80 "5"
 *   insn=0x00000000002B3F84 string=0x00000000002B3F88 ""
 *   insn=0x00000000002B3F98 string=0x00000000002B3F9C "\t@"
 *   insn=0x00000000002B3FA4 string=0x00000000002B3FA8 ""
 *   insn=0x00000000002B3FB8 string=0x00000000002B3FBC "@"
 *   insn=0x00000000002B3FD8 string=0x00000000002B3FDC "%9"
 *   insn=0x00000000002B4008 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002B4018 string=0x00000000002B401C ""
 *   insn=0x00000000002B4028 string=0x00000000002B402C "\t@"
 *   insn=0x00000000002B4038 string=0x00000000002B403C ""
 *   insn=0x00000000002B4048 string=0x00000000002B404C "@"
 *   insn=0x00000000002B4054 string=0x00000000002B4058 "'"
 *   insn=0x00000000002B4064 string=0x00000000002B4068 "4"
 *   insn=0x00000000002B406C string=0x00000000002B4070 ""
 *   insn=0x00000000002B407C string=0x00000000002B4080 "\t@"
 *   insn=0x00000000002B408C string=0x00000000002B4090 ""
 *   insn=0x00000000002B409C string=0x00000000002B40A0 "@"
 *   insn=0x00000000002B40AC string=0x00000000002B40B0 "4"
 *   insn=0x00000000002B40B4 string=0x00000000002B40B8 ""
 *   insn=0x00000000002B40C4 string=0x00000000002B40C8 "\t@"
 *   insn=0x00000000002B40D4 string=0x00000000002B40D8 ""
 *   insn=0x00000000002B40E4 string=0x00000000002B40E8 "@"
 *   insn=0x00000000002B410C string=0x00000000002B4110 "4"
 *   insn=0x00000000002B4114 string=0x00000000002B4118 ""
 *   insn=0x00000000002B4124 string=0x00000000002B4128 "\t@"
 *   insn=0x00000000002B4134 string=0x00000000002B4138 ""
 *   insn=0x00000000002B4144 string=0x00000000002B4148 "@"
 *   insn=0x00000000002B4154 string=0x00000000002B4158 "}h"
 *   insn=0x00000000002B4158 string=0x00000000002B415C "|h"
 *   insn=0x00000000002B4160 string=0x00000000002B4164 "K"
 *   insn=0x00000000002B4164 string=0x00000000001F6290 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ElevatorControllerComponent::GetEnumValuesForBindedProperty(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // x23
  __int64 *i; // x20
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
  if ( a2 == 1 )
  {
    v4 = -1;
    for ( i = &qword_6E8BE0; ; ++i )
    {
      Caver::BindingValue::ValueWithInt();
      v6 = *(_QWORD *)(a3 + 8);
      if ( v6 != *(_QWORD *)(a3 + 16) )
        break;
      std::vector<Caver::BindingValue>::_M_insert_aux();
      v7 = v16;
      if ( v16 )
        goto LABEL_11;
LABEL_14:
      if ( v14 )
      {
        v10 = v14[1] - 1LL;
        v14[1] = v10;
        if ( !v10 )
        {
          (*(void (__fastcall **)())(*v14 + 16LL))();
          v11 = v14[2] - 1LL;
          v14[2] = v11;
          if ( !v11 )
            (*(void (__fastcall **)())(*v14 + 24LL))();
        }
      }
      if ( (unsigned __int64)++v4 >= 2 )
        return;
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


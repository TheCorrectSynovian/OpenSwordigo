/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B5E1C
 * Mangled: _ZN5Caver24PressureTriggerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::PressureTriggerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001FADA0  Caver::PressureTriggerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 8
 *   0x00000000001F4540  Caver::BindingValue::ProgramValue(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FADA0  Caver::PressureTriggerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 64
 *   insn=0x00000000002B5E2C string=0x00000000002B5E30 "U"
 *   insn=0x00000000002B5E38 string=0x00000000002B5E3C "?"
 *   insn=0x00000000002B5E48 string=0x0000000000589C58 ""
 *   insn=0x00000000002B5E4C string=0x00000000002B5E50 ")a1"
 *   insn=0x00000000002B5E50 string=0x00000000002B5E54 "(y"
 *   insn=0x00000000002B5E54 string=0x00000000002B5E58 ""
 *   insn=0x00000000002B5E5C string=0x00000000002B5E60 "H"
 *   insn=0x00000000002B5E5C string=0x00000000002B6030 "H"
 *   insn=0x00000000002B5E60 string=0x00000000002B5E64 ""
 *   insn=0x00000000002B5E64 string=0x00000000002B5E68 "hz"
 *   insn=0x00000000002B5E68 string=0x00000000002B5E6C "w"
 *   insn=0x00000000002B5E78 string=0x00000000002B5E7C "`""
 *   insn=0x00000000002B5E78 string=0x00000000001F4540 "P'"
 *   insn=0x00000000002B5E80 string=0x00000000002B5E84 "\t"
 *   insn=0x00000000002B5E8C string=0x00000000002B5E90 "\n"
 *   insn=0x00000000002B5E8C string=0x00000000002B5E9C "tN@"
 *   insn=0x00000000002B5E90 string=0x00000000002B5E94 "J"
 *   insn=0x00000000002B5E94 string=0x00000000002B5E98 "\n"
 *   insn=0x00000000002B5E9C string=0x00000000002B5EA0 "i"\t"
 *   insn=0x00000000002B5EA0 string=0x00000000002B5EA4 "4"
 *   insn=0x00000000002B5EA8 string=0x00000000002B5EAC ""
 *   insn=0x00000000002B5EB8 string=0x00000000002B5EBC "\t@"
 *   insn=0x00000000002B5EC8 string=0x00000000002B5ECC ""
 *   insn=0x00000000002B5ED8 string=0x00000000002B5EDC "@"
 *   insn=0x00000000002B5EEC string=0x00000000002B5EF0 "\n"
 *   insn=0x00000000002B5EEC string=0x00000000002B5EFC "tV@"
 *   insn=0x00000000002B5EF0 string=0x00000000002B5EF4 "J"
 *   insn=0x00000000002B5EF4 string=0x00000000002B5EF8 "\n"
 *   insn=0x00000000002B5EFC string=0x00000000002B5F00 "i"\n"
 *   insn=0x00000000002B5F08 string=0x00000000002B5F0C ""
 *   insn=0x00000000002B5F18 string=0x00000000002B5F1C "\t@"
 *   insn=0x00000000002B5F28 string=0x00000000002B5F2C ""
 *   insn=0x00000000002B5F38 string=0x00000000002B5F3C "@"
 *   insn=0x00000000002B5F44 string=0x00000000002B5F48 "7"
 *   insn=0x00000000002B5F50 string=0x00000000002B5F54 "{"
 *   insn=0x00000000002B5F54 string=0x00000000002B5F58 "`"
 *   insn=0x00000000002B5F68 string=0x00000000002B5F6C "\n"
 *   insn=0x00000000002B5F68 string=0x00000000002B5F78 "tb@"
 *   insn=0x00000000002B5F6C string=0x00000000002B5F70 "J"
 *   insn=0x00000000002B5F70 string=0x00000000002B5F74 "\n"
 *   insn=0x00000000002B5F78 string=0x00000000002B5F7C "i"
 *   insn=0x00000000002B5F7C string=0x00000000002B5F80 "4"
 *   insn=0x00000000002B5F84 string=0x00000000002B5F88 ""
 *   insn=0x00000000002B5F94 string=0x00000000002B5F98 "\t@"
 *   insn=0x00000000002B5FA4 string=0x00000000002B5FA8 ""
 *   insn=0x00000000002B5FB4 string=0x00000000002B5FB8 "@"
 *   insn=0x00000000002B5FC8 string=0x00000000002B5FCC "\n"
 *   insn=0x00000000002B5FC8 string=0x00000000002B5FD8 "tj@"
 *   insn=0x00000000002B5FCC string=0x00000000002B5FD0 "J"
 *   insn=0x00000000002B5FD0 string=0x00000000002B5FD4 "\n"
 *   insn=0x00000000002B5FD8 string=0x00000000002B5FDC "i"
 *   insn=0x00000000002B5FDC string=0x00000000002B5FE0 "4"
 *   insn=0x00000000002B5FE4 string=0x00000000002B5FE8 ""
 *   insn=0x00000000002B5FF4 string=0x00000000002B5FF8 "\t@"
 *   insn=0x00000000002B6004 string=0x00000000002B6008 ""
 *   insn=0x00000000002B6014 string=0x00000000002B6018 "@"
 *   insn=0x00000000002B6028 string=0x00000000002B602C ""
 *   insn=0x00000000002B6030 string=0x00000000002B6034 ""
 *   insn=0x00000000002B6034 string=0x00000000002B6038 "hb"
 *   insn=0x00000000002B6044 string=0x00000000001F9320 "0'"
 *   insn=0x00000000002B606C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002B608C string=0x00000000002B6090 "."
 *   insn=0x00000000002B6098 string=0x00000000002B609C "A"
 *   insn=0x00000000002B609C string=0x00000000001FADA0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PressureTriggerComponent::SetValueForBindedProperty(
        Caver::PressureTriggerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int64 v4; // x8
  __int64 v5; // x9
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x9
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x9
  _QWORD *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x8
  __int64 v19; // x8
  __int64 v20; // x9
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // [xsp+0h] [xbp-50h] BYREF
  __int64 v24; // [xsp+8h] [xbp-48h]
  __int64 v25; // [xsp+10h] [xbp-40h]
  __int64 v26; // [xsp+18h] [xbp-38h]
  __int64 v27; // [xsp+20h] [xbp-30h]
  __int64 v28; // [xsp+28h] [xbp-28h]

  v28 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a2 )
  {
    case 0:
      *((_DWORD *)this + 30) = **((_DWORD **)a3 + 1);
      break;
    case 1:
      *((_BYTE *)this + 216) = **((_BYTE **)a3 + 1);
      break;
    case 2:
      Caver::BindingValue::ProgramValue(&v23, a3);
      sub_56A6A8((char *)this + 136);
      v5 = v24;
      v4 = v25;
      if ( v25 )
        ++*(_QWORD *)(v25 + 8);
      v6 = (_QWORD *)*((_QWORD *)this + 19);
      *((_QWORD *)this + 18) = v5;
      *((_QWORD *)this + 19) = v4;
      if ( v6 )
      {
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
      }
      v10 = v26;
      v9 = v27;
      if ( v27 )
        ++*(_QWORD *)(v27 + 8);
      v11 = (_QWORD *)*((_QWORD *)this + 21);
      *((_QWORD *)this + 20) = v10;
      *((_QWORD *)this + 21) = v9;
      if ( !v11 )
        goto LABEL_27;
      v12 = v11[1] - 1LL;
      v11[1] = v12;
      if ( v12 )
        goto LABEL_27;
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( v13 )
        goto LABEL_27;
      goto LABEL_26;
    case 3:
      Caver::BindingValue::ProgramValue(&v23, a3);
      sub_56A6A8((char *)this + 176);
      v15 = v24;
      v14 = v25;
      if ( v25 )
        ++*(_QWORD *)(v25 + 8);
      v16 = (_QWORD *)*((_QWORD *)this + 24);
      *((_QWORD *)this + 23) = v15;
      *((_QWORD *)this + 24) = v14;
      if ( v16 )
      {
        v17 = v16[1] - 1LL;
        v16[1] = v17;
        if ( !v17 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
          v18 = v16[2] - 1LL;
          v16[2] = v18;
          if ( !v18 )
            (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
        }
      }
      v20 = v26;
      v19 = v27;
      if ( v27 )
        ++*(_QWORD *)(v27 + 8);
      v11 = (_QWORD *)*((_QWORD *)this + 26);
      *((_QWORD *)this + 25) = v20;
      *((_QWORD *)this + 26) = v19;
      if ( v11 )
      {
        v21 = v11[1] - 1LL;
        v11[1] = v21;
        if ( !v21 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
          v22 = v11[2] - 1LL;
          v11[2] = v22;
          if ( !v22 )
LABEL_26:
            (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
        }
      }
LABEL_27:
      Caver::Program::~Program((Caver::Program *)&v23);
      break;
    default:
      Caver::Component::SetValueForBindedProperty(this, a2, a3);
      break;
  }
}


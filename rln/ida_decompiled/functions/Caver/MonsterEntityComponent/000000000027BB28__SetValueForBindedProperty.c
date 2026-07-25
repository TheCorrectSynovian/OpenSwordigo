/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027BB28
 * Mangled: _ZN5Caver22MonsterEntityComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::MonsterEntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001F5230  Caver::MonsterEntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 8
 *   0x00000000001F4540  Caver::BindingValue::ProgramValue(void)
 *   0x00000000001F5230  Caver::MonsterEntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8C40  Caver::EntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 67
 *   insn=0x000000000027BB38 string=0x000000000027BB3C "U"
 *   insn=0x000000000027BB40 string=0x000000000027BB44 "("
 *   insn=0x000000000027BB54 string=0x000000000027BB58 "i"
 *   insn=0x000000000027BB58 string=0x000000000027BB60 "(y"
 *   insn=0x000000000027BB58 string=0x0000000000588620 "L5"
 *   insn=0x000000000027BB60 string=0x000000000027BB64 ""
 *   insn=0x000000000027BB68 string=0x000000000027BC48 "H"
 *   insn=0x000000000027BB68 string=0x000000000027BC58 "H"
 *   insn=0x000000000027BB70 string=0x000000000027BB74 "s"
 *   insn=0x000000000027BB74 string=0x000000000027BB78 "`"
 *   insn=0x000000000027BB74 string=0x00000000001F4540 "P'"
 *   insn=0x000000000027BB88 string=0x000000000027BB8C "\n"
 *   insn=0x000000000027BB88 string=0x000000000027BB98 "t"
 *   insn=0x000000000027BB8C string=0x000000000027BB90 "J"
 *   insn=0x000000000027BB90 string=0x000000000027BB94 "\n"
 *   insn=0x000000000027BB98 string=0x000000000027BB9C "i"
 *   insn=0x000000000027BB9C string=0x000000000027BBA0 "4"
 *   insn=0x000000000027BBA4 string=0x000000000027BBA8 ""
 *   insn=0x000000000027BBB4 string=0x000000000027BBB8 "\t@"
 *   insn=0x000000000027BBC4 string=0x000000000027BBC8 ""
 *   insn=0x000000000027BBD4 string=0x000000000027BBD8 "@"
 *   insn=0x000000000027BBE8 string=0x000000000027BBEC "\n"
 *   insn=0x000000000027BBE8 string=0x000000000027BBF8 "t"
 *   insn=0x000000000027BBEC string=0x000000000027BBF0 "J"
 *   insn=0x000000000027BBF0 string=0x000000000027BBF4 "\n"
 *   insn=0x000000000027BBF8 string=0x000000000027BBFC "i"
 *   insn=0x000000000027BC04 string=0x000000000027BC08 ""
 *   insn=0x000000000027BC14 string=0x000000000027BC18 "\t@"
 *   insn=0x000000000027BC24 string=0x000000000027BC28 ""
 *   insn=0x000000000027BC34 string=0x000000000027BC38 "@"
 *   insn=0x000000000027BC40 string=0x000000000027BC44 "?"
 *   insn=0x000000000027BC48 string=0x000000000027BC4C ""
 *   insn=0x000000000027BC4C string=0x000000000027BC50 "hb"
 *   insn=0x000000000027BC50 string=0x000000000027BC54 "@"
 *   insn=0x000000000027BC58 string=0x000000000027BC5C ""
 *   insn=0x000000000027BC5C string=0x000000000027BC60 "hj"
 *   insn=0x000000000027BC60 string=0x000000000027BC64 "<"
 *   insn=0x000000000027BC6C string=0x000000000027BC70 "4"
 *   insn=0x000000000027BC70 string=0x000000000027BC74 "`b"
 *   insn=0x000000000027BC84 string=0x000000000027BC88 "\n"
 *   insn=0x000000000027BC84 string=0x000000000027BC94 "t"
 *   insn=0x000000000027BC88 string=0x000000000027BC8C "J"
 *   insn=0x000000000027BC8C string=0x000000000027BC90 "\n"
 *   insn=0x000000000027BC94 string=0x000000000027BC98 "i""
 *   insn=0x000000000027BC98 string=0x000000000027BC9C "4"
 *   insn=0x000000000027BCA0 string=0x000000000027BCA4 ""
 *   insn=0x000000000027BCB0 string=0x000000000027BCB4 "\t@"
 *   insn=0x000000000027BCC0 string=0x000000000027BCC4 ""
 *   insn=0x000000000027BCD0 string=0x000000000027BCD4 "@"
 *   insn=0x000000000027BCE4 string=0x000000000027BCE8 "\n"
 *   insn=0x000000000027BCE4 string=0x000000000027BCF4 "t"
 *   insn=0x000000000027BCE8 string=0x000000000027BCEC "J"
 *   insn=0x000000000027BCEC string=0x000000000027BCF0 "\n"
 *   insn=0x000000000027BCF4 string=0x000000000027BCF8 "i""
 *   insn=0x000000000027BCF8 string=0x000000000027BCFC "4"
 *   insn=0x000000000027BD00 string=0x000000000027BD04 ""
 *   insn=0x000000000027BD10 string=0x000000000027BD14 "\t@"
 *   insn=0x000000000027BD20 string=0x000000000027BD24 ""
 *   insn=0x000000000027BD30 string=0x000000000027BD34 "@"
 *   insn=0x000000000027BD50 string=0x00000000001F8C40 "0'"
 *   insn=0x000000000027BD60 string=0x000000000027BD78 "V"
 *   insn=0x000000000027BD78 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000027BD80 string=0x000000000027BD84 "{"
 *   insn=0x000000000027BD90 string=0x000000000027BD94 "w"
 *   insn=0x000000000027BD9C string=0x000000000027BDA0 "kI"
 *   insn=0x000000000027BDA4 string=0x000000000027BDA8 """
 *   insn=0x000000000027BDA8 string=0x00000000001F5230 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MonsterEntityComponent::SetValueForBindedProperty(
        Caver::MonsterEntityComponent *this,
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
    case 'd':
      Caver::BindingValue::ProgramValue(&v23, a3);
      sub_56A6A8((char *)this + 304);
      v5 = v24;
      v4 = v25;
      if ( v25 )
        ++*(_QWORD *)(v25 + 8);
      v6 = (_QWORD *)*((_QWORD *)this + 40);
      *((_QWORD *)this + 39) = v5;
      *((_QWORD *)this + 40) = v4;
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
      v11 = (_QWORD *)*((_QWORD *)this + 42);
      *((_QWORD *)this + 41) = v10;
      *((_QWORD *)this + 42) = v9;
      if ( !v11 )
        goto LABEL_28;
      v12 = v11[1] - 1LL;
      v11[1] = v12;
      if ( v12 )
        goto LABEL_28;
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( v13 )
        goto LABEL_28;
      goto LABEL_27;
    case 'e':
      Caver::BindingValue::ProgramValue(&v23, a3);
      sub_56A6A8((char *)this + 344);
      v15 = v24;
      v14 = v25;
      if ( v25 )
        ++*(_QWORD *)(v25 + 8);
      v16 = (_QWORD *)*((_QWORD *)this + 45);
      *((_QWORD *)this + 44) = v15;
      *((_QWORD *)this + 45) = v14;
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
      v11 = (_QWORD *)*((_QWORD *)this + 47);
      *((_QWORD *)this + 46) = v20;
      *((_QWORD *)this + 47) = v19;
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
LABEL_27:
            (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
        }
      }
LABEL_28:
      Caver::Program::~Program((Caver::Program *)&v23);
      break;
    case 'f':
      *((_BYTE *)this + 408) = **((_BYTE **)a3 + 1);
      break;
    case 'g':
      *((_BYTE *)this + 410) = **((_BYTE **)a3 + 1);
      break;
    default:
      Caver::EntityComponent::SetValueForBindedProperty(this, a2, a3);
      break;
  }
}


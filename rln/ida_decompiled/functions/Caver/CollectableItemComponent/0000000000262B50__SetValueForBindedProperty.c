/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000262B50
 * Mangled: _ZN5Caver24CollectableItemComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::CollectableItemComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001F8620  Caver::CollectableItemComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 11
 *   0x00000000001F4540  Caver::BindingValue::ProgramValue(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8620  Caver::CollectableItemComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 105
 *   insn=0x0000000000262B60 string=0x0000000000262B64 "U"
 *   insn=0x0000000000262B6C string=0x0000000000262B70 "?"
 *   insn=0x0000000000262B78 string=0x0000000000262B7C ")"
 *   insn=0x0000000000262B80 string=0x0000000000262B84 ")"
 *   insn=0x0000000000262B84 string=0x0000000000262B88 "(y"
 *   insn=0x0000000000262B88 string=0x0000000000262B8C ""
 *   insn=0x0000000000262B90 string=0x0000000000262B94 "H"
 *   insn=0x0000000000262B90 string=0x0000000000262BA4 "H"
 *   insn=0x0000000000262B90 string=0x0000000000262BB4 "A"
 *   insn=0x0000000000262B90 string=0x0000000000262C08 "A"
 *   insn=0x0000000000262B90 string=0x0000000000262C5C "H"
 *   insn=0x0000000000262B94 string=0x0000000000262B98 ""
 *   insn=0x0000000000262B98 string=0x0000000000262B9C "hr"
 *   insn=0x0000000000262B9C string=0x0000000000262BA0 "n"
 *   insn=0x0000000000262BA4 string=0x0000000000262BA8 ""
 *   insn=0x0000000000262BA8 string=0x0000000000262BAC "h""
 *   insn=0x0000000000262BAC string=0x0000000000262BB0 "j"
 *   insn=0x0000000000262BB8 string=0x0000000000262BBC "["
 *   insn=0x0000000000262BBC string=0x0000000000262BC0 "`"
 *   insn=0x0000000000262BCC string=0x0000000000262BD0 "\t$"
 *   insn=0x0000000000262BD0 string=0x0000000000262BD4 ")"
 *   insn=0x0000000000262BE0 string=0x0000000000262BE4 "\t$"
 *   insn=0x0000000000262BE4 string=0x0000000000262BE8 ")=G"
 *   insn=0x0000000000262BE8 string=0x0000000000262BEC "!"
 *   insn=0x0000000000262BEC string=0x0000000000262BF0 "i"
 *   insn=0x0000000000262BF0 string=0x0000000000262BF4 "\t"
 *   insn=0x0000000000262BF0 string=0x0000000000262D7C "\t"
 *   insn=0x0000000000262BF4 string=0x0000000000262BF8 "*"
 *   insn=0x0000000000262BF8 string=0x0000000000262BFC "\n"
 *   insn=0x0000000000262C00 string=0x0000000000262C04 "a"
 *   insn=0x0000000000262C04 string=0x0000000000262D88 "?"
 *   insn=0x0000000000262C0C string=0x0000000000262C10 "F"
 *   insn=0x0000000000262C10 string=0x0000000000262C14 "`"
 *   insn=0x0000000000262C20 string=0x0000000000262C24 "\t$"
 *   insn=0x0000000000262C24 string=0x0000000000262C28 ")"
 *   insn=0x0000000000262C30 string=0x0000000000262C34 " \t"
 *   insn=0x0000000000262C34 string=0x0000000000262C38 "\t$"
 *   insn=0x0000000000262C38 string=0x0000000000262C3C ")=G"
 *   insn=0x0000000000262C3C string=0x0000000000262C40 "!"
 *   insn=0x0000000000262C44 string=0x0000000000262C48 "\t"
 *   insn=0x0000000000262C48 string=0x0000000000262C4C "*"
 *   insn=0x0000000000262C4C string=0x0000000000262C50 "\n"
 *   insn=0x0000000000262C54 string=0x0000000000262C58 "L"
 *   insn=0x0000000000262C5C string=0x0000000000262C60 ""
 *   insn=0x0000000000262C60 string=0x0000000000262C64 "hv"
 *   insn=0x0000000000262C64 string=0x0000000000262C68 "<"
 *   insn=0x0000000000262C70 string=0x0000000000262C74 "3F"
 *   insn=0x0000000000262C74 string=0x0000000000262C78 "`B"
 *   insn=0x0000000000262C74 string=0x00000000001F4540 "P'"
 *   insn=0x0000000000262C88 string=0x0000000000262C8C "\n"
 *   insn=0x0000000000262C88 string=0x0000000000262C98 "tR@"
 *   insn=0x0000000000262C8C string=0x0000000000262C90 "J"
 *   insn=0x0000000000262C90 string=0x0000000000262C94 "\n"
 *   insn=0x0000000000262C98 string=0x0000000000262C9C "i"
 *   insn=0x0000000000262C9C string=0x0000000000262CA0 "4"
 *   insn=0x0000000000262CA4 string=0x0000000000262CA8 ""
 *   insn=0x0000000000262CB4 string=0x0000000000262CB8 "\t@"
 *   insn=0x0000000000262CC4 string=0x0000000000262CC8 ""
 *   insn=0x0000000000262CD4 string=0x0000000000262CD8 "@"
 *   insn=0x0000000000262CE8 string=0x0000000000262CEC "\n"
 *   insn=0x0000000000262CE8 string=0x0000000000262CF8 "tZ@"
 *   insn=0x0000000000262CEC string=0x0000000000262CF0 "J"
 *   insn=0x0000000000262CF0 string=0x0000000000262CF4 "\n"
 *   insn=0x0000000000262CF8 string=0x0000000000262CFC "i"
 *   insn=0x0000000000262CFC string=0x0000000000262D00 "4"
 *   insn=0x0000000000262D04 string=0x0000000000262D08 ""
 *   insn=0x0000000000262D14 string=0x0000000000262D18 "\t@"
 *   insn=0x0000000000262D24 string=0x0000000000262D28 ""
 *   insn=0x0000000000262D34 string=0x0000000000262D38 "@"
 *   insn=0x0000000000262D50 string=0x0000000000262D54 "sY"
 *   insn=0x0000000000262D54 string=0x00000000001F9320 "0'"
 *   insn=0x0000000000262D64 string=0x0000000000262D9C "MM"
 *   insn=0x0000000000262D7C string=0x0000000000262D80 "*"
 *   insn=0x0000000000262D80 string=0x0000000000262D84 "\n"
 *   insn=0x0000000000262D88 string=0x0000000000262D8C "l"
 *   insn=0x0000000000262D9C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000262DA0 string=0x0000000000262DA4 "\n$"
 *   insn=0x0000000000262DA4 string=0x0000000000262DA8 "J"
 *   insn=0x0000000000262DAC string=0x0000000000262DB0 "(a"
 *   insn=0x0000000000262DB4 string=0x0000000000262DB8 " "
 *   insn=0x0000000000262DB8 string=0x0000000000262DBC "\n$"
 *   insn=0x0000000000262DBC string=0x0000000000262DC0 "J=G"
 *   insn=0x0000000000262DC0 string=0x0000000000262DC4 ")!"
 *   insn=0x0000000000262DC8 string=0x0000000000262DCC "*"
 *   insn=0x0000000000262DC8 string=0x0000000000262E38 "*"
 *   insn=0x0000000000262DCC string=0x0000000000262DD0 "K"
 *   insn=0x0000000000262DD0 string=0x0000000000262DD4 "+"
 *   insn=0x0000000000262DDC string=0x0000000000262E1C "_"
 *   insn=0x0000000000262DE0 string=0x0000000000262DE4 "\n$"
 *   insn=0x0000000000262DE4 string=0x0000000000262DE8 "J"
 *   insn=0x0000000000262DEC string=0x0000000000262DF0 "(a"
 *   insn=0x0000000000262DF4 string=0x0000000000262DF8 " "
 *   insn=0x0000000000262DF8 string=0x0000000000262DFC "\n$"
 *   insn=0x0000000000262DFC string=0x0000000000262E00 "J=G"
 *   insn=0x0000000000262E00 string=0x0000000000262E04 ")!"
 *   insn=0x0000000000262E08 string=0x0000000000262E0C "*"
 *   insn=0x0000000000262E0C string=0x0000000000262E10 "K"
 *   insn=0x0000000000262E10 string=0x0000000000262E14 "+"
 *   insn=0x0000000000262E28 string=0x0000000000262E2C "^"
 *   insn=0x0000000000262E38 string=0x0000000000262E3C "K"
 *   insn=0x0000000000262E3C string=0x0000000000262E40 "+"
 *   insn=0x0000000000262E40 string=0x0000000000262E44 "_"
 *   insn=0x0000000000262E54 string=0x0000000000262E58 "Fs"
 *   insn=0x0000000000262E60 string=0x0000000000262E64 ":"
 *   insn=0x0000000000262E6C string=0x00000000001F8620 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CollectableItemComponent::SetValueForBindedProperty(
        Caver::CollectableItemComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  void *v4; // x0
  unsigned int *v5; // x8
  int v6; // w9
  __int64 v7; // x8
  __int64 v8; // x9
  _QWORD *v9; // x20
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // x9
  _QWORD *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x8
  __int64 v17[2]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v18; // [xsp+18h] [xbp-48h]
  __int64 v19; // [xsp+20h] [xbp-40h]
  __int64 v20; // [xsp+28h] [xbp-38h]
  __int64 v21; // [xsp+38h] [xbp-28h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a2 )
  {
    case 0:
      *((_DWORD *)this + 28) = **((_DWORD **)a3 + 1);
      break;
    case 1:
      *((_DWORD *)this + 29) = **((_DWORD **)a3 + 1);
      break;
    case 2:
      sub_56A528(v17, *((_QWORD *)a3 + 1));
      sub_56A6A8((char *)this + 120);
      v4 = (void *)(v17[0] - 24);
      if ( (__int64 *)(v17[0] - 24) != &qword_6FD2E0 )
      {
        v5 = (unsigned int *)(v17[0] - 8);
        if ( !&pthread_create )
          goto LABEL_28;
        do
          v6 = __ldaxr(v5);
        while ( __stlxr(v6 - 1, v5) );
        goto LABEL_29;
      }
      break;
    case 3:
      sub_56A528(v17, *((_QWORD *)a3 + 1));
      sub_56A6A8((char *)this + 128);
      v4 = (void *)(v17[0] - 24);
      if ( (__int64 *)(v17[0] - 24) != &qword_6FD2E0 )
      {
        v5 = (unsigned int *)(v17[0] - 8);
        if ( &pthread_create )
        {
          do
            v6 = __ldaxr(v5);
          while ( __stlxr(v6 - 1, v5) );
        }
        else
        {
LABEL_28:
          v6 = (*v5)--;
        }
LABEL_29:
        if ( v6 <= 0 )
          operator delete(v4);
      }
      break;
    case 4:
      *((_BYTE *)this + 136) = **((_BYTE **)a3 + 1);
      break;
    case 5:
      Caver::BindingValue::ProgramValue(v17, a3);
      sub_56A6A8((char *)this + 144);
      v8 = v17[1];
      v7 = v18;
      if ( v18 )
        ++*(_QWORD *)(v18 + 8);
      v9 = (_QWORD *)*((_QWORD *)this + 20);
      *((_QWORD *)this + 19) = v8;
      *((_QWORD *)this + 20) = v7;
      if ( v9 )
      {
        v10 = v9[1] - 1LL;
        v9[1] = v10;
        if ( !v10 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
          v11 = v9[2] - 1LL;
          v9[2] = v11;
          if ( !v11 )
            (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
        }
      }
      v13 = v19;
      v12 = v20;
      if ( v20 )
        ++*(_QWORD *)(v20 + 8);
      v14 = (_QWORD *)*((_QWORD *)this + 22);
      *((_QWORD *)this + 21) = v13;
      *((_QWORD *)this + 22) = v12;
      if ( v14 )
      {
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
      }
      Caver::Program::~Program((Caver::Program *)v17);
      break;
    default:
      Caver::Component::SetValueForBindedProperty(this, a2, a3);
      break;
  }
}


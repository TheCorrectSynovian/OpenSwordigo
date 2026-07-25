/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000460B48
 * Mangled: _ZN5Caver14ObjectTemplate25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ObjectTemplate::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001FA7F0  Caver::ObjectTemplate::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 13
 *   0x00000000001F38E0  boost::detail::shared_count::shared_count<Caver::Program>(Caver::Program *)
 *   0x00000000001F4540  Caver::BindingValue::ProgramValue(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA7F0  Caver::ObjectTemplate::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 65
 *   insn=0x0000000000460B58 string=0x0000000000460B5C "V"
 *   insn=0x0000000000460B68 string=0x0000000000460B6C "?"
 *   insn=0x0000000000460B74 string=0x0000000000460B78 "?"
 *   insn=0x0000000000460B78 string=0x0000000000460B7C "!\n"
 *   insn=0x0000000000460B80 string=0x0000000000460B84 ""
 *   insn=0x0000000000460B84 string=0x0000000000460B88 "h2"
 *   insn=0x0000000000460B88 string=0x0000000000460B8C "M"
 *   insn=0x0000000000460B94 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000460BA0 string=0x0000000000460BA4 "gN"
 *   insn=0x0000000000460BA4 string=0x00000000001F4540 "P'"
 *   insn=0x0000000000460BB4 string=0x0000000000460BB8 "JK"
 *   insn=0x0000000000460BB8 string=0x00000000001F38E0 "P'"
 *   insn=0x0000000000460BC4 string=0x0000000000460BC8 "b"
 *   insn=0x0000000000460BD4 string=0x0000000000460BE4 "a\t"
 *   insn=0x0000000000460BD8 string=0x0000000000460BDC "S&"
 *   insn=0x0000000000460BF8 string=0x0000000000460BFC ")"
 *   insn=0x0000000000460C04 string=0x0000000000460C08 ")"
 *   insn=0x0000000000460C10 string=0x0000000000460CE4 ")"
 *   insn=0x0000000000460C1C string=0x0000000000460C20 "\n"
 *   insn=0x0000000000460C1C string=0x0000000000460C2C "t2@"
 *   insn=0x0000000000460C20 string=0x0000000000460C24 "J"
 *   insn=0x0000000000460C24 string=0x0000000000460C28 "\n"
 *   insn=0x0000000000460C2C string=0x0000000000460C30 "i"
 *   insn=0x0000000000460C30 string=0x0000000000460C34 "4"
 *   insn=0x0000000000460C38 string=0x0000000000460C3C ""
 *   insn=0x0000000000460C48 string=0x0000000000460C4C "\t@"
 *   insn=0x0000000000460C58 string=0x0000000000460C5C ""
 *   insn=0x0000000000460C68 string=0x0000000000460C6C "@"
 *   insn=0x0000000000460C78 string=0x0000000000460C7C "3"
 *   insn=0x0000000000460C7C string=0x0000000000460C80 "h"
 *   insn=0x0000000000460C80 string=0x0000000000460C84 ""
 *   insn=0x0000000000460C84 string=0x0000000000460C88 "h"
 *   insn=0x0000000000460C8C string=0x0000000000460C90 "h"
 *   insn=0x0000000000460C94 string=0x0000000000460C98 "\t@"
 *   insn=0x0000000000460C9C string=0x0000000000460CA0 "h\n@"
 *   insn=0x0000000000460CA0 string=0x0000000000460CA4 ""
 *   insn=0x0000000000460CA4 string=0x0000000000460CA8 "h\n"
 *   insn=0x0000000000460CAC string=0x0000000000460CB0 "h"
 *   insn=0x0000000000460CB4 string=0x0000000000460CB8 "@"
 *   insn=0x0000000000460CC8 string=0x0000000000460CCC "a"
 *   insn=0x0000000000460CCC string=0x0000000000460D78 "VU"
 *   insn=0x0000000000460CE4 string=0x0000000000460CE8 ")=G"
 *   insn=0x0000000000460CE8 string=0x0000000000460CEC "!"
 *   insn=0x0000000000460CF0 string=0x0000000000460CF4 "\t"
 *   insn=0x0000000000460CF0 string=0x0000000000460D08 "\t"
 *   insn=0x0000000000460CF4 string=0x0000000000460CF8 "*"
 *   insn=0x0000000000460CF8 string=0x0000000000460CFC "\n"
 *   insn=0x0000000000460D04 string=0x0000000000460D14 "?"
 *   insn=0x0000000000460D08 string=0x0000000000460D0C "*"
 *   insn=0x0000000000460D0C string=0x0000000000460D10 "\n"
 *   insn=0x0000000000460D2C string=0x0000000000460D30 "T"
 *   insn=0x0000000000460D34 string=0x0000000000460D38 ""
 *   insn=0x0000000000460D44 string=0x0000000000460D48 "\t@"
 *   insn=0x0000000000460D54 string=0x0000000000460D58 ""
 *   insn=0x0000000000460D64 string=0x0000000000460D68 "@"
 *   insn=0x0000000000460D78 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000460D84 string=0x0000000000460D88 "JY"
 *   insn=0x0000000000460D88 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000460D98 string=0x0000000000460D9C "4"
 *   insn=0x0000000000460DA0 string=0x0000000000460DA4 ""
 *   insn=0x0000000000460DB0 string=0x0000000000460DB4 "\t@"
 *   insn=0x0000000000460DC0 string=0x0000000000460DC4 ""
 *   insn=0x0000000000460DD0 string=0x0000000000460DD4 "@"
 *   insn=0x0000000000460DE4 string=0x0000000000460DE8 "Y"
 *   insn=0x0000000000460DF0 string=0x00000000001FA7F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ObjectTemplate::SetValueForBindedProperty(
        Caver::ObjectTemplate *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int64 *v5; // x20
  __int64 v6; // x1
  void *v7; // x0
  __int64 v8; // x20
  _QWORD *v9; // x8
  __int64 *v10; // x9
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8
  _QWORD *v14; // x19
  __int64 v15; // x8
  __int64 v16; // x8
  unsigned int *v17; // x8
  int v18; // w9
  _QWORD *v19; // x20
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // [xsp+8h] [xbp-48h] BYREF
  __int64 *v23; // [xsp+10h] [xbp-40h]
  _QWORD *v24; // [xsp+18h] [xbp-38h]
  __int64 v25; // [xsp+28h] [xbp-28h]

  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 != 102 )
  {
    if ( a2 == 101 )
      *((_DWORD *)this + 76) = **((_DWORD **)a3 + 1);
    return;
  }
  v5 = (__int64 *)operator new(0x28u);
  Caver::BindingValue::ProgramValue(v5, a3);
  v23 = v5;
  boost::detail::shared_count::shared_count<Caver::Program>();
  boost::detail::sp_enable_shared_from_this();
  v6 = v5[1];
  if ( v6 )
    sub_56A528(&v22, v6);
  else
    sub_566BB8((int)&v22, "");
  v7 = (void *)(v22 - 24);
  v8 = *(_QWORD *)(v22 - 24);
  if ( (__int64 *)(v22 - 24) == &qword_6FD2E0 )
    goto LABEL_8;
  v17 = (unsigned int *)(v22 - 8);
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
  if ( v18 > 0 )
  {
LABEL_8:
    if ( !v8 )
    {
LABEL_26:
      v19 = v24;
      v23 = 0;
      v24 = 0;
      if ( v19 )
      {
        v20 = v19[1] - 1LL;
        v19[1] = v20;
        if ( !v20 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
          v21 = v19[2] - 1LL;
          v19[2] = v21;
          if ( !v21 )
            (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
        }
      }
    }
  }
  else
  {
    operator delete(v7);
    if ( !v8 )
      goto LABEL_26;
  }
  v10 = v23;
  v9 = v24;
  if ( v24 )
    ++v24[1];
  v11 = (_QWORD *)*((_QWORD *)this + 12);
  *((_QWORD *)this + 11) = v10;
  *((_QWORD *)this + 12) = v9;
  if ( v11 )
  {
    v12 = v11[1] - 1LL;
    v11[1] = v12;
    if ( !v12 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  v14 = v24;
  if ( v24 )
  {
    v15 = v24[1] - 1LL;
    v24[1] = v15;
    if ( !v15 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      v16 = v14[2] - 1LL;
      v14[2] = v16;
      if ( !v16 )
        (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
    }
  }
}


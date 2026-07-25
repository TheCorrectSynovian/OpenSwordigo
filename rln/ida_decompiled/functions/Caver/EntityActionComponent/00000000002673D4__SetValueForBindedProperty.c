/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002673D4
 * Mangled: _ZN5Caver21EntityActionComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::EntityActionComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001FA630  Caver::EntityActionComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 8
 *   0x00000000001F4540  Caver::BindingValue::ProgramValue(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FA630  Caver::EntityActionComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 30
 *   insn=0x00000000002673E4 string=0x00000000002673E8 "U"
 *   insn=0x0000000000267400 string=0x0000000000267404 "9"
 *   insn=0x0000000000267400 string=0x00000000001F9320 "0'"
 *   insn=0x000000000026740C string=0x0000000000267410 "L4"
 *   insn=0x0000000000267410 string=0x0000000000267414 "`"
 *   insn=0x0000000000267410 string=0x00000000001F4540 "P'"
 *   insn=0x0000000000267424 string=0x0000000000267428 "\n"
 *   insn=0x0000000000267424 string=0x0000000000267434 "tB@"
 *   insn=0x0000000000267428 string=0x000000000026742C "J"
 *   insn=0x000000000026742C string=0x0000000000267430 "\n"
 *   insn=0x0000000000267434 string=0x0000000000267438 "i"
 *   insn=0x0000000000267438 string=0x000000000026743C "4"
 *   insn=0x0000000000267440 string=0x0000000000267444 ""
 *   insn=0x0000000000267450 string=0x0000000000267454 "\t@"
 *   insn=0x0000000000267460 string=0x0000000000267464 ""
 *   insn=0x0000000000267470 string=0x0000000000267474 "@"
 *   insn=0x0000000000267484 string=0x0000000000267488 "\n"
 *   insn=0x0000000000267484 string=0x0000000000267494 "tJ@"
 *   insn=0x0000000000267488 string=0x000000000026748C "J"
 *   insn=0x000000000026748C string=0x0000000000267490 "\n"
 *   insn=0x0000000000267494 string=0x0000000000267498 "i"
 *   insn=0x0000000000267498 string=0x000000000026749C "4"
 *   insn=0x00000000002674A0 string=0x00000000002674A4 ""
 *   insn=0x00000000002674B0 string=0x00000000002674B4 "\t@"
 *   insn=0x00000000002674C0 string=0x00000000002674C4 ""
 *   insn=0x00000000002674D0 string=0x00000000002674D4 "@"
 *   insn=0x00000000002674F4 string=0x000000000026750C "q;"
 *   insn=0x000000000026750C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000267528 string=0x000000000026752C "AL"
 *   insn=0x000000000026752C string=0x00000000001FA630 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::EntityActionComponent::SetValueForBindedProperty(
        Caver::EntityActionComponent *this,
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
  __int64 v14[2]; // [xsp+0h] [xbp-50h] BYREF
  __int64 v15; // [xsp+10h] [xbp-40h]
  __int64 v16; // [xsp+18h] [xbp-38h]
  __int64 v17; // [xsp+20h] [xbp-30h]
  __int64 v18; // [xsp+28h] [xbp-28h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 )
  {
    Caver::Component::SetValueForBindedProperty(this, a2, a3);
  }
  else
  {
    Caver::BindingValue::ProgramValue(v14, a3);
    sub_56A6A8((char *)this + 112);
    v5 = v14[1];
    v4 = v15;
    if ( v15 )
      ++*(_QWORD *)(v15 + 8);
    v6 = (_QWORD *)*((_QWORD *)this + 16);
    *((_QWORD *)this + 15) = v5;
    *((_QWORD *)this + 16) = v4;
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
    v10 = v16;
    v9 = v17;
    if ( v17 )
      ++*(_QWORD *)(v17 + 8);
    v11 = (_QWORD *)*((_QWORD *)this + 18);
    *((_QWORD *)this + 17) = v10;
    *((_QWORD *)this + 18) = v9;
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
    Caver::Program::~Program((Caver::Program *)v14);
  }
}


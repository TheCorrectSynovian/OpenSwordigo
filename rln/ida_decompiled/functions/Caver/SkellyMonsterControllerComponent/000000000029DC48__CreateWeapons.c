/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029DC48
 * Mangled: _ZN5Caver32SkellyMonsterControllerComponent13CreateWeaponsEv
 * Demangled: Caver::SkellyMonsterControllerComponent::CreateWeapons(void)
 *
 * Callers: 1
 *   0x00000000001FB040  Caver::SkellyMonsterControllerComponent::CreateWeapons(void)
 *
 * Callees: 16
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F9B80  Caver::SwingableWeaponControllerComponent::SetWeaponComponent(boost::intrusive_ptr<Caver::SwingableWeaponComponent> const&)
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x00000000001FFC30  Caver::CharControllerComponent::StartJumping(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000029EB14  Caver::SwingableWeaponComponent::Interface(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 150
 *   insn=0x000000000029DC58 string=0x000000000029DC5C "V"
 *   insn=0x000000000029DC68 string=0x000000000029DC6C "h"
 *   insn=0x000000000029DC6C string=0x000000000029DC70 "\t%@"
 *   insn=0x000000000029DC70 string=0x000000000029DC74 "i"
 *   insn=0x000000000029DC74 string=0x000000000029DC78 "("
 *   insn=0x000000000029DC74 string=0x000000000029DC80 ""
 *   insn=0x000000000029DC80 string=0x000000000029DC84 ""
 *   insn=0x000000000029DC88 string=0x000000000029DC8C "a"
 *   insn=0x000000000029DC8C string=0x000000000058938F "skelly_sword"
 *   insn=0x000000000029DCB4 string=0x000000000029DCB8 "I""
 *   insn=0x000000000029DCB8 string=0x000000000029DCBC ")"
 *   insn=0x000000000029DCC4 string=0x000000000029DCC8 "a"
 *   insn=0x000000000029DCC8 string=0x000000000029DF74 ")""
 *   insn=0x000000000029DCCC string=0x000000000029DCD0 ""
 *   insn=0x000000000029DCD0 string=0x000000000029DCD4 "tr@"
 *   insn=0x000000000029DCD8 string=0x000000000029DCE8 "`B"
 *   insn=0x000000000029DCE0 string=0x000000000029DCE4 ""
 *   insn=0x000000000029DCEC string=0x000000000029DCF0 "|g"
 *   insn=0x000000000029DCF0 string=0x000000000029DCF4 "tr@"
 *   insn=0x000000000029DCF0 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000029DD04 string=0x000000000029DD08 "vg"
 *   insn=0x000000000029DD10 string=0x000000000029DE00 "tr@"
 *   insn=0x000000000029DD14 string=0x000000000029DD18 "2^"
 *   insn=0x000000000029DD18 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000029DD24 string=0x00000000001FAB30 "0'"
 *   insn=0x000000000029DD28 string=0x000000000029DD2C ""
 *   insn=0x000000000029DD30 string=0x000000000029DD34 "`"
 *   insn=0x000000000029DD34 string=0x000000000029DD38 "t"
 *   insn=0x000000000029DD38 string=0x000000000029DD3C " "
 *   insn=0x000000000029DD3C string=0x000000000029DD40 "@"
 *   insn=0x000000000029DD40 string=0x000000000029DD44 ""
 *   insn=0x000000000029DD44 string=0x000000000029DD48 ""
 *   insn=0x000000000029DD4C string=0x000000000029DD50 ""
 *   insn=0x000000000029DD50 string=0x000000000029DD54 ""
 *   insn=0x000000000029DD58 string=0x000000000029DD5C "t"
 *   insn=0x000000000029DD68 string=0x000000000029DD6C "-_"
 *   insn=0x000000000029DD6C string=0x000000000029DD70 "ur@"
 *   insn=0x000000000029DD6C string=0x00000000001F5A20 "P'"
 *   insn=0x000000000029DD74 string=0x000000000029DD84 "`B"
 *   insn=0x000000000029DD7C string=0x000000000029DD80 ""
 *   insn=0x000000000029DD7C string=0x000000000029DDAC "`"
 *   insn=0x000000000029DD88 string=0x000000000029DD8C "Ug"
 *   insn=0x000000000029DD8C string=0x000000000029DD90 "ur@"
 *   insn=0x000000000029DDA0 string=0x000000000029DDA4 "Og"
 *   insn=0x000000000029DDAC string=0x000000000029DDB0 "A""
 *   insn=0x000000000029DDB0 string=0x000000000029DDB4 "!"
 *   insn=0x000000000029DDB4 string=0x000000000029DDB8 "\n"
 *   insn=0x000000000029DDB4 string=0x000000000029EB14 "@""
 *   insn=0x000000000029DDC0 string=0x000000000029DDC4 "@"
 *   insn=0x000000000029DDC4 string=0x000000000029DDC8 ""
 *   insn=0x000000000029DDC8 string=0x000000000029DDCC ""
 *   insn=0x000000000029DDD4 string=0x000000000029DDD8 "jo"
 *   insn=0x000000000029DDD8 string=0x00000000001F9B80 "0'"
 *   insn=0x000000000029DDE0 string=0x000000000029DDE4 "@"
 *   insn=0x000000000029DDE4 string=0x000000000029DDE8 ""
 *   insn=0x000000000029DDE8 string=0x000000000029DDEC ""
 *   insn=0x000000000029DDF0 string=0x000000000029DDF4 ""
 *   insn=0x000000000029DDF4 string=0x000000000029DDF8 ""
 *   insn=0x000000000029DE04 string=0x000000000029DE14 "`B"
 *   insn=0x000000000029DE0C string=0x000000000029DE10 ""
 *   insn=0x000000000029DE18 string=0x000000000029DE1C "1g"
 *   insn=0x000000000029DE1C string=0x000000000029DE20 "tr@"
 *   insn=0x000000000029DE30 string=0x000000000029DE34 "+g"
 *   insn=0x000000000029DE4C string=0x000000000029DE50 "8s"
 *   insn=0x000000000029DE54 string=0x000000000029DE58 ""
 *   insn=0x000000000029DE5C string=0x000000000029DE60 "`"
 *   insn=0x000000000029DE60 string=0x000000000029DE64 "t"
 *   insn=0x000000000029DE64 string=0x000000000029DE68 " "
 *   insn=0x000000000029DE68 string=0x000000000029DE6C "@"
 *   insn=0x000000000029DE6C string=0x000000000029DE70 ""
 *   insn=0x000000000029DE70 string=0x000000000029DE74 ""
 *   insn=0x000000000029DE78 string=0x000000000029DE7C ""
 *   insn=0x000000000029DE7C string=0x000000000029DE80 ""
 *   insn=0x000000000029DE84 string=0x000000000029DE88 "t"
 *   insn=0x000000000029DE98 string=0x000000000029DE9C "ur@"
 *   insn=0x000000000029DEA0 string=0x000000000029DEB0 "`B"
 *   insn=0x000000000029DEA8 string=0x000000000029DEAC ""
 *   insn=0x000000000029DEA8 string=0x000000000029DED8 "`"
 *   insn=0x000000000029DEB4 string=0x000000000029DEB8 "\ng"
 *   insn=0x000000000029DEB8 string=0x000000000029DEBC "ur@"
 *   insn=0x000000000029DED8 string=0x000000000029DEDC "A""
 *   insn=0x000000000029DEDC string=0x000000000029DEE0 "!"
 *   insn=0x000000000029DEEC string=0x000000000029DEF0 "@"
 *   insn=0x000000000029DEF0 string=0x000000000029DEF4 ""
 *   insn=0x000000000029DEF4 string=0x000000000029DEF8 ""
 *   insn=0x000000000029DF0C string=0x000000000029DF10 "@"
 *   insn=0x000000000029DF10 string=0x000000000029DF14 ""
 *   insn=0x000000000029DF14 string=0x000000000029DF18 ""
 *   insn=0x000000000029DF1C string=0x000000000029DF20 ""
 *   insn=0x000000000029DF20 string=0x000000000029DF24 ""
 *   insn=0x000000000029DF30 string=0x000000000029DF34 "@"
 *   insn=0x000000000029DF34 string=0x000000000029DF38 ""
 *   insn=0x000000000029DF38 string=0x000000000029DF3C ""
 *   insn=0x000000000029DF40 string=0x000000000029DF44 ""
 *   insn=0x000000000029DF44 string=0x000000000029DF48 ""
 *   insn=0x000000000029DF58 string=0x000000000029DF5C "!"
 *   insn=0x000000000029DF74 string=0x000000000029DF78 ")=G"
 *   insn=0x000000000029DF78 string=0x000000000029DF7C "!"
 *   insn=0x000000000029DF80 string=0x000000000029DF84 "\t"
 *   insn=0x000000000029DF80 string=0x000000000029DF98 "\t"
 *   insn=0x000000000029DF84 string=0x000000000029DF88 "*"
 *   insn=0x000000000029DF88 string=0x000000000029DF8C "\n"
 *   insn=0x000000000029DF94 string=0x000000000029DFA4 "?"
 *   insn=0x000000000029DF98 string=0x000000000029DF9C "*"
 *   insn=0x000000000029DF9C string=0x000000000029DFA0 "\n"
 *   insn=0x000000000029DFA4 string=0x000000000029DFA8 ","
 *   insn=0x000000000029DFC0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000029DFCC string=0x000000000029DFD0 "\t\t@"
 *   insn=0x000000000029DFD0 string=0x000000000029DFD4 ")"
 *   insn=0x000000000029DFD4 string=0x000000000029DFD8 "\t\t"
 *   insn=0x000000000029DFD8 string=0x000000000029DFDC "!"
 *   insn=0x000000000029DFDC string=0x000000000029DFE0 "\t"
 *   insn=0x000000000029DFE0 string=0x000000000029DFE4 ")"
 *   insn=0x000000000029DFE8 string=0x000000000029DFEC " "
 *   insn=0x000000000029DFEC string=0x000000000029DFF0 "4"
 *   insn=0x000000000029DFFC string=0x000000000029E000 ""
 *   insn=0x000000000029E000 string=0x000000000029E004 "\t\t@"
 *   insn=0x000000000029E004 string=0x000000000029E008 ")"
 *   insn=0x000000000029E008 string=0x000000000029E00C "\t\t"
 *   insn=0x000000000029E010 string=0x000000000029E014 "\t"
 *   insn=0x000000000029E014 string=0x000000000029E018 ")"
 *   insn=0x000000000029E01C string=0x000000000029E020 " "
 *   insn=0x000000000029E020 string=0x000000000029E024 "'"
 *   insn=0x000000000029E030 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000029E038 string=0x000000000029E03C "*"
 *   insn=0x000000000029E038 string=0x000000000029E0C8 "@"
 *   insn=0x000000000029E048 string=0x000000000029E04C "*""
 *   insn=0x000000000029E04C string=0x000000000029E050 "J"
 *   insn=0x000000000029E054 string=0x000000000029E058 "(a"
 *   insn=0x000000000029E05C string=0x000000000029E060 " "
 *   insn=0x000000000029E060 string=0x000000000029E064 "*""
 *   insn=0x000000000029E064 string=0x000000000029E068 "J=G"
 *   insn=0x000000000029E068 string=0x000000000029E06C ")!"
 *   insn=0x000000000029E070 string=0x000000000029E074 "*"
 *   insn=0x000000000029E070 string=0x000000000029E0A0 "*"
 *   insn=0x000000000029E074 string=0x000000000029E078 "K"
 *   insn=0x000000000029E078 string=0x000000000029E07C "+"
 *   insn=0x000000000029E080 string=0x000000000029E084 "_"
 *   insn=0x000000000029E098 string=0x000000000029E09C "\n"
 *   insn=0x000000000029E0A0 string=0x000000000029E0A4 "K"
 *   insn=0x000000000029E0A4 string=0x000000000029E0A8 "+"
 *   insn=0x000000000029E0A8 string=0x000000000029E0AC "_"
 *   insn=0x000000000029E0C8 string=0x000000000029E0CC ""
 *   insn=0x000000000029E0CC string=0x000000000029E0D0 ""
 *   insn=0x000000000029E0D4 string=0x000000000029E0D8 ""
 *   insn=0x000000000029E0D8 string=0x000000000029E0DC ""
 *   insn=0x000000000029E0FC string=0x000000000029E100 "`r@"
 *   insn=0x000000000029E108 string=0x000000000029E10C "`B"
 *   insn=0x000000000029E110 string=0x000000000029E114 "sf"
 *   insn=0x000000000029E114 string=0x000000000029E118 "`r@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SkellyMonsterControllerComponent::CreateWeapons(Caver::SkellyMonsterControllerComponent *this)
{
  void *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x20
  _DWORD *v5; // x0
  int v6; // w8
  _QWORD *v7; // x21
  Caver::SwingableWeaponControllerComponent *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x0
  int v11; // w8
  _QWORD *v12; // x20
  __int64 v13; // x20
  _DWORD *v14; // x0
  int v15; // w8
  _QWORD *v16; // x21
  Caver::SwingableWeaponControllerComponent *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x0
  int v20; // w8
  __int64 v21; // x0
  int v22; // w8
  unsigned int *v23; // x8
  int v24; // w9
  __int64 v25; // [xsp+30h] [xbp-40h] BYREF
  __int64 v26; // [xsp+38h] [xbp-38h]
  __int64 v27; // [xsp+48h] [xbp-28h]

  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)&v25, "skelly_sword");
  Caver::ObjectLibrary::TemplateForName();
  v2 = (void *)(v25 - 24);
  if ( (__int64 *)(v25 - 24) == &qword_6FD2E0 )
    goto LABEL_2;
  v23 = (unsigned int *)(v25 - 8);
  if ( &pthread_create )
  {
    do
      v24 = __ldaxr(v23);
    while ( __stlxr(v24 - 1, v23) );
  }
  else
  {
    v24 = (*v23)--;
  }
  if ( v24 > 0 )
  {
LABEL_2:
    if ( !v26 )
      return;
  }
  else
  {
    operator delete(v2);
    if ( !v26 )
      return;
  }
  v3 = (_QWORD *)*((_QWORD *)this + 28);
  if ( v3 )
  {
    if ( v3[53] )
      goto LABEL_8;
  }
  else
  {
    Caver::ComponentOutletBase::Connect((Caver::SkellyMonsterControllerComponent *)((char *)this + 208), this);
    v3 = (_QWORD *)*((_QWORD *)this + 28);
    if ( v3[53] )
      goto LABEL_8;
  }
  Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v3 + 51), (const Caver::Component *)v3);
  if ( !v3[53] )
    goto LABEL_21;
LABEL_8:
  v4 = operator new(0x128u);
  Caver::SceneObject::SceneObject((Caver::SceneObject *)v4);
  ++*(_DWORD *)(v4 + 8);
  v5 = (_DWORD *)*((_QWORD *)this + 32);
  *((_QWORD *)this + 32) = v4;
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
      v4 = *((_QWORD *)this + 32);
    }
  }
  *(_BYTE *)(v4 + 24) = 0;
  Caver::SceneObject::InitWithTemplate((Caver::SceneObject *)v4);
  v7 = (_QWORD *)*((_QWORD *)this + 28);
  if ( v7 )
  {
    v8 = (Caver::SwingableWeaponControllerComponent *)v7[53];
    if ( !v8 )
      goto LABEL_15;
  }
  else
  {
    Caver::ComponentOutletBase::Connect((Caver::SkellyMonsterControllerComponent *)((char *)this + 208), this);
    v7 = (_QWORD *)*((_QWORD *)this + 28);
    v8 = (Caver::SwingableWeaponControllerComponent *)v7[53];
    if ( !v8 )
    {
LABEL_15:
      Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v7 + 51), (const Caver::Component *)v7);
      v8 = (Caver::SwingableWeaponControllerComponent *)v7[53];
    }
  }
  v9 = Caver::SceneObject::ComponentWithInterface(
         *((Caver::SceneObject **)this + 32),
         (__int64)Caver::SwingableWeaponComponent::Interface);
  v25 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  Caver::SwingableWeaponControllerComponent::SetWeaponComponent(v8);
  v10 = v25;
  if ( v25 )
  {
    v11 = *(_DWORD *)(v25 + 8) - 1;
    *(_DWORD *)(v25 + 8) = v11;
    if ( !v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
LABEL_21:
  v12 = (_QWORD *)*((_QWORD *)this + 28);
  if ( !v12 )
  {
    Caver::ComponentOutletBase::Connect((Caver::SkellyMonsterControllerComponent *)((char *)this + 208), this);
    v12 = (_QWORD *)*((_QWORD *)this + 28);
    if ( !v12[56] )
      goto LABEL_25;
LABEL_26:
    v13 = operator new(0x128u);
    Caver::SceneObject::SceneObject((Caver::SceneObject *)v13);
    ++*(_DWORD *)(v13 + 8);
    v14 = (_DWORD *)*((_QWORD *)this + 33);
    *((_QWORD *)this + 33) = v13;
    if ( v14 )
    {
      v15 = v14[2] - 1;
      v14[2] = v15;
      if ( !v15 )
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 8LL))(v14);
        v13 = *((_QWORD *)this + 33);
      }
    }
    *(_BYTE *)(v13 + 24) = 0;
    Caver::SceneObject::InitWithTemplate((Caver::SceneObject *)v13);
    v16 = (_QWORD *)*((_QWORD *)this + 28);
    if ( v16 )
    {
      v17 = (Caver::SwingableWeaponControllerComponent *)v16[56];
      if ( !v17 )
        goto LABEL_33;
    }
    else
    {
      Caver::ComponentOutletBase::Connect((Caver::SkellyMonsterControllerComponent *)((char *)this + 208), this);
      v16 = (_QWORD *)*((_QWORD *)this + 28);
      v17 = (Caver::SwingableWeaponControllerComponent *)v16[56];
      if ( !v17 )
      {
LABEL_33:
        Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v16 + 54), (const Caver::Component *)v16);
        v17 = (Caver::SwingableWeaponControllerComponent *)v16[56];
      }
    }
    v18 = Caver::SceneObject::ComponentWithInterface(
            *((Caver::SceneObject **)this + 33),
            (__int64)Caver::SwingableWeaponComponent::Interface);
    v25 = v18;
    if ( v18 )
      ++*(_DWORD *)(v18 + 8);
    Caver::SwingableWeaponControllerComponent::SetWeaponComponent(v17);
    v19 = v25;
    if ( v25 )
    {
      v20 = *(_DWORD *)(v25 + 8) - 1;
      *(_DWORD *)(v25 + 8) = v20;
      if ( !v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    }
    goto LABEL_39;
  }
  if ( v12[56] )
    goto LABEL_26;
LABEL_25:
  Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v12 + 54), (const Caver::Component *)v12);
  if ( v12[56] )
    goto LABEL_26;
LABEL_39:
  v21 = v26;
  if ( v26 )
  {
    v22 = *(_DWORD *)(v26 + 8) - 1;
    *(_DWORD *)(v26 + 8) = v22;
    if ( !v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  }
}


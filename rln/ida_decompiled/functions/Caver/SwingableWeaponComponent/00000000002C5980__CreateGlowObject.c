/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C5980
 * Mangled: _ZN5Caver24SwingableWeaponComponent16CreateGlowObjectEv
 * Demangled: Caver::SwingableWeaponComponent::CreateGlowObject(void)
 *
 * Callers: 1
 *   0x0000000000201620  Caver::SwingableWeaponComponent::CreateGlowObject(void)
 *
 * Callees: 20
 *   0x00000000001F37E0  Caver::WeaponGlowComponent::SetColor(Caver::FloatColor const&)
 *   0x00000000001F3F40  Caver::WeaponTrailComponent::ResetTrail(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x00000000001FB490  Caver::SceneObject::SetIdentifier(std::string const&)
 *   0x00000000001FD980  Caver::WeaponTrail::FadeIn(float)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x00000000002012F0  Caver::ObjectLinkControllerComponent::LinkToObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000022B880  Caver::ObjectLinkControllerComponent::className(void)
 *   0x00000000002C75D0  Caver::WeaponGlowComponent::Interface(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 168
 *   insn=0x00000000002C5990 string=0x00000000002C5994 "U"
 *   insn=0x00000000002C59A4 string=0x00000000002C59A8 "H"
 *   insn=0x00000000002C59D0 string=0x00000000002C59D4 ""
 *   insn=0x00000000002C59DC string=0x00000000002C59E0 "!"
 *   insn=0x00000000002C59E0 string=0x000000000058A106 "weapon_glow"
 *   insn=0x00000000002C59EC string=0x00000000002C59F0 "r"
 *   insn=0x00000000002C5A00 string=0x00000000002C5A04 "_"
 *   insn=0x00000000002C5A20 string=0x00000000002C5A24 "H"
 *   insn=0x00000000002C5A2C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002C5A34 string=0x00000000002C5A38 ">"
 *   insn=0x00000000002C5A38 string=0x00000000002C5A3C "h\n@"
 *   insn=0x00000000002C5A38 string=0x00000000001FAB30 "0'"
 *   insn=0x00000000002C5A3C string=0x00000000002C5A40 ""
 *   insn=0x00000000002C5A40 string=0x00000000002C5A44 "h\n"
 *   insn=0x00000000002C5A48 string=0x00000000005981DB "w"
 *   insn=0x00000000002C5A54 string=0x00000000002C5A58 "X"
 *   insn=0x00000000002C5A64 string=0x00000000001FB490 "0'"
 *   insn=0x00000000002C5A70 string=0x00000000002C5A74 "A\n"
 *   insn=0x00000000002C5A84 string=0x00000000001F5A20 "P'"
 *   insn=0x00000000002C5A88 string=0x00000000002C5A8C "!4F"
 *   insn=0x00000000002C5A98 string=0x00000000002C5A9C "@"
 *   insn=0x00000000002C5A9C string=0x00000000002C5AA0 ""
 *   insn=0x00000000002C5AA0 string=0x00000000002C5AA4 ""
 *   insn=0x00000000002C5AAC string=0x00000000002C5AB0 "H"
 *   insn=0x00000000002C5AB0 string=0x00000000002C5AB4 "\t\t@"
 *   insn=0x00000000002C5AB4 string=0x00000000002C5AB8 ")"
 *   insn=0x00000000002C5AB8 string=0x00000000002C5ABC "\t\t"
 *   insn=0x00000000002C5AC0 string=0x00000000002C5AC4 "\t"
 *   insn=0x00000000002C5AC4 string=0x00000000002C5AC8 ")"
 *   insn=0x00000000002C5ACC string=0x00000000002C5AD0 " "
 *   insn=0x00000000002C5AE8 string=0x00000000002C5AEC ""
 *   insn=0x00000000002C5AEC string=0x00000000002C5AF0 ""
 *   insn=0x00000000002C5AF4 string=0x00000000002C5AF8 ":"
 *   insn=0x00000000002C5AF8 string=0x00000000001F37E0 "P'"
 *   insn=0x00000000002C5AFC string=0x00000000002C5B00 "!"
 *   insn=0x00000000002C5B14 string=0x00000000002C5B18 "\t\t@"
 *   insn=0x00000000002C5B18 string=0x00000000002C5B1C ")"
 *   insn=0x00000000002C5B1C string=0x00000000002C5B20 "\t\t"
 *   insn=0x00000000002C5B30 string=0x00000000002C5B34 "@"
 *   insn=0x00000000002C5B30 string=0x00000000002C5B50 "h\n@"
 *   insn=0x00000000002C5B34 string=0x00000000002C5B38 ""
 *   insn=0x00000000002C5B38 string=0x00000000002C5B3C ""
 *   insn=0x00000000002C5B40 string=0x00000000002C5B44 ""
 *   insn=0x00000000002C5B44 string=0x00000000002C5B48 ""
 *   insn=0x00000000002C5B50 string=0x00000000002C5B54 ""
 *   insn=0x00000000002C5B54 string=0x00000000002C5B58 "h\n"
 *   insn=0x00000000002C5B5C string=0x00000000002C5B60 "h"
 *   insn=0x00000000002C5B60 string=0x00000000002C5B64 ""
 *   insn=0x00000000002C5B74 string=0x00000000002C5B78 "@"
 *   insn=0x00000000002C5B78 string=0x00000000002C5B7C ""
 *   insn=0x00000000002C5B7C string=0x00000000002C5B80 ""
 *   insn=0x00000000002C5B80 string=0x00000000002C5B84 "A"
 *   insn=0x00000000002C5B84 string=0x00000000002C5B88 ""
 *   insn=0x00000000002C5B88 string=0x00000000002C5B8C ""
 *   insn=0x00000000002C5B98 string=0x00000000002C5B9C ")=G"
 *   insn=0x00000000002C5B9C string=0x00000000002C5BA0 "!"
 *   insn=0x00000000002C5BA4 string=0x00000000002C5BA8 "\t"
 *   insn=0x00000000002C5BA4 string=0x00000000002C5BE0 "\t"
 *   insn=0x00000000002C5BA8 string=0x00000000002C5BAC "*"
 *   insn=0x00000000002C5BAC string=0x00000000002C5BB0 "\n"
 *   insn=0x00000000002C5BB4 string=0x00000000002C5BB8 ""
 *   insn=0x00000000002C5BB8 string=0x00000000002C5BEC "?"
 *   insn=0x00000000002C5BBC string=0x00000000002C5BC0 ")=G"
 *   insn=0x00000000002C5BC0 string=0x00000000002C5BC4 "!"
 *   insn=0x00000000002C5BC4 string=0x00000000002C5BC8 "\t"
 *   insn=0x00000000002C5BC8 string=0x00000000002C5BCC "\t"
 *   insn=0x00000000002C5BC8 string=0x00000000002C5C08 "\t"
 *   insn=0x00000000002C5BCC string=0x00000000002C5BD0 "*"
 *   insn=0x00000000002C5BD0 string=0x00000000002C5BD4 "\n"
 *   insn=0x00000000002C5BDC string=0x00000000002C5C14 "?"
 *   insn=0x00000000002C5BE0 string=0x00000000002C5BE4 "*"
 *   insn=0x00000000002C5BE4 string=0x00000000002C5BE8 "\n"
 *   insn=0x00000000002C5BFC string=0x00000000002C5C00 "H"
 *   insn=0x00000000002C5C00 string=0x00000000002C5C04 "j"
 *   insn=0x00000000002C5C08 string=0x00000000002C5C0C "*"
 *   insn=0x00000000002C5C0C string=0x00000000002C5C10 "\n"
 *   insn=0x00000000002C5C28 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002C5C38 string=0x00000000002C5C3C "\t\t@"
 *   insn=0x00000000002C5C38 string=0x00000000002C5D6C "h\n@"
 *   insn=0x00000000002C5C3C string=0x00000000002C5C40 ")"
 *   insn=0x00000000002C5C40 string=0x00000000002C5C44 "\t\t"
 *   insn=0x00000000002C5C44 string=0x00000000002C5C48 "!\t"
 *   insn=0x00000000002C5C48 string=0x00000000002C5C4C "\t"
 *   insn=0x00000000002C5C4C string=0x00000000002C5C50 ")"
 *   insn=0x00000000002C5C54 string=0x00000000002C5C58 " "
 *   insn=0x00000000002C5C58 string=0x00000000002C5C5C "D"
 *   insn=0x00000000002C5C68 string=0x00000000002C5C6C "(a"
 *   insn=0x00000000002C5C78 string=0x00000000002C5C7C "J=G"
 *   insn=0x00000000002C5C7C string=0x00000000002C5C80 ")!"
 *   insn=0x00000000002C5C80 string=0x00000000002C5C84 "j"
 *   insn=0x00000000002C5C84 string=0x00000000002C5C88 "*"
 *   insn=0x00000000002C5C84 string=0x00000000002C5CB0 "*"
 *   insn=0x00000000002C5C88 string=0x00000000002C5C8C "K"
 *   insn=0x00000000002C5C8C string=0x00000000002C5C90 "+"
 *   insn=0x00000000002C5C94 string=0x00000000002C5C98 "_"
 *   insn=0x00000000002C5CA8 string=0x00000000002C5CAC "0"
 *   insn=0x00000000002C5CB0 string=0x00000000002C5CB4 "K"
 *   insn=0x00000000002C5CB4 string=0x00000000002C5CB8 "+"
 *   insn=0x00000000002C5CB8 string=0x00000000002C5CBC "_"
 *   insn=0x00000000002C5CBC string=0x00000000002C5CC0 ""
 *   insn=0x00000000002C5CC0 string=0x00000000002C5CC4 "*"
 *   insn=0x00000000002C5CD0 string=0x00000000002C5CD4 "w"
 *   insn=0x00000000002C5CD4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002C5CDC string=0x00000000002C5CE0 "4"
 *   insn=0x00000000002C5CDC string=0x00000000002C5D94 "@"
 *   insn=0x00000000002C5CE8 string=0x00000000002C5CEC "@"
 *   insn=0x00000000002C5CEC string=0x00000000002C5CF0 "0"
 *   insn=0x00000000002C5CF4 string=0x00000000002C5CF8 "\n!"
 *   insn=0x00000000002C5CF8 string=0x00000000002C5CFC "J"
 *   insn=0x00000000002C5D00 string=0x00000000002C5D04 "(a"
 *   insn=0x00000000002C5D08 string=0x00000000002C5D0C " "
 *   insn=0x00000000002C5D10 string=0x00000000002C5D14 "J=G"
 *   insn=0x00000000002C5D14 string=0x00000000002C5D18 ")!"
 *   insn=0x00000000002C5D1C string=0x00000000002C5D20 "*"
 *   insn=0x00000000002C5D1C string=0x00000000002C5D4C "*"
 *   insn=0x00000000002C5D20 string=0x00000000002C5D24 "K"
 *   insn=0x00000000002C5D24 string=0x00000000002C5D28 "+"
 *   insn=0x00000000002C5D2C string=0x00000000002C5D30 "_"
 *   insn=0x00000000002C5D4C string=0x00000000002C5D50 "K"
 *   insn=0x00000000002C5D50 string=0x00000000002C5D54 "+"
 *   insn=0x00000000002C5D54 string=0x00000000002C5D58 "_"
 *   insn=0x00000000002C5D6C string=0x00000000002C5D70 ""
 *   insn=0x00000000002C5D70 string=0x00000000002C5D74 "h\n"
 *   insn=0x00000000002C5D78 string=0x00000000002C5D7C "h"
 *   insn=0x00000000002C5D7C string=0x00000000002C5D80 ""
 *   insn=0x00000000002C5D94 string=0x00000000002C5D98 ""
 *   insn=0x00000000002C5D98 string=0x00000000002C5D9C ""
 *   insn=0x00000000002C5DA0 string=0x00000000002C5DA4 ""
 *   insn=0x00000000002C5DA4 string=0x00000000002C5DA8 ""
 *   insn=0x00000000002C5DB4 string=0x00000000002C5DB8 "e!"
 *   insn=0x00000000002C5DCC string=0x00000000002C5DD0 "h"
 *   insn=0x00000000002C5DD0 string=0x00000000002C5DD4 "("
 *   insn=0x00000000002C5DD4 string=0x00000000002C5DD8 "\t"
 *   insn=0x00000000002C5DDC string=0x00000000002C5DE0 "h"
 *   insn=0x00000000002C5DE0 string=0x00000000002C5DE4 "h"
 *   insn=0x00000000002C5DE8 string=0x00000000002C5DFC "`n@"
 *   insn=0x00000000002C5E00 string=0x00000000002C5E04 "`""
 *   insn=0x00000000002C5E00 string=0x00000000002C5E18 "J"
 *   insn=0x00000000002C5E08 string=0x00000000002C5E0C "5"
 *   insn=0x00000000002C5E0C string=0x00000000002C5E10 "`n@"
 *   insn=0x00000000002C5E0C string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002C5E10 string=0x00000000002C5E14 "@"
 *   insn=0x00000000002C5E14 string=0x00000000002C5E1C "`z@"
 *   insn=0x00000000002C5E18 string=0x00000000001F3F40 "P'"
 *   insn=0x00000000002C5E20 string=0x00000000002C5E24 "`"
 *   insn=0x00000000002C5E20 string=0x00000000002C5E38 "B"
 *   insn=0x00000000002C5E28 string=0x00000000002C5E2C "-"
 *   insn=0x00000000002C5E2C string=0x00000000002C5E30 "`z@"
 *   insn=0x00000000002C5E30 string=0x00000000002C5E34 "@"
 *   insn=0x00000000002C5E40 string=0x00000000002C5E44 "iR"
 *   insn=0x00000000002C5E48 string=0x00000000002C5E4C "t"
 *   insn=0x00000000002C5E4C string=0x00000000002C5E50 "iv"
 *   insn=0x00000000002C5E50 string=0x00000000002C5E54 "hz"
 *   insn=0x00000000002C5E5C string=0x00000000002C5E60 "h"
 *   insn=0x00000000002C5E60 string=0x00000000002C5E64 "`"
 *   insn=0x00000000002C5E64 string=0x00000000002C5E68 "!"
 *   insn=0x00000000002C5E68 string=0x00000000002C5E6C "hn@"
 *   insn=0x00000000002C5E6C string=0x00000000002C5E70 "`"
 *   insn=0x00000000002C5E70 string=0x00000000002C5E74 "a"
 *   insn=0x00000000002C5E78 string=0x00000000002C5E7C "`""
 *   insn=0x00000000002C5E84 string=0x00000000002C5E88 "hn@"
 *   insn=0x00000000002C5E8C string=0x00000000002C5EA0 "hz@"
 *   insn=0x00000000002C5E9C string=0x00000000001FD980 "0'"
 *   insn=0x00000000002C5EA4 string=0x00000000002C5EA8 "t"
 *   insn=0x00000000002C5EB0 string=0x00000000002C5EB4 ""
 *   insn=0x00000000002C5EB4 string=0x00000000002C5EB8 "hz@"
 *   insn=0x00000000002C5EB8 string=0x00000000002C5EBC "("
 *   insn=0x00000000002C5EE8 string=0x00000000002C5EEC "hz@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SwingableWeaponComponent::CreateGlowObject(Caver::SwingableWeaponComponent *this)
{
  void *v2; // x0
  __int64 v3; // x19
  void *v4; // x0
  __int64 v5; // x0
  _DWORD *v6; // x8
  int v7; // w9
  float v8; // s0
  __int64 v9; // x8
  __int64 v10; // x0
  int v11; // w8
  int v12; // w8
  __int64 v13; // x0
  int v14; // w8
  unsigned int *v15; // x8
  int v16; // w9
  unsigned int *v17; // x8
  int v18; // w9
  __int64 v19; // [xsp+40h] [xbp-40h] BYREF
  __int64 v20; // [xsp+48h] [xbp-38h]
  __int64 v21; // [xsp+58h] [xbp-28h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*((_QWORD *)this + 45) && *(_QWORD *)(*((_QWORD *)this + 5) + 32LL) )
  {
    sub_566BB8((int)&v19, "weapon_glow");
    Caver::ObjectLibrary::TemplateForName();
    v2 = (void *)(v19 - 24);
    if ( (__int64 *)(v19 - 24) == &qword_6FD2E0 )
      goto LABEL_5;
    v15 = (unsigned int *)(v19 - 8);
    if ( &pthread_create )
    {
      do
        v16 = __ldaxr(v15);
      while ( __stlxr(v16 - 1, v15) );
    }
    else
    {
      v16 = (*v15)--;
    }
    if ( v16 > 0 )
    {
LABEL_5:
      if ( !v20 )
        return;
    }
    else
    {
      operator delete(v2);
      if ( !v20 )
        return;
    }
    v3 = operator new(0x128u);
    Caver::SceneObject::SceneObject((Caver::SceneObject *)v3);
    ++*(_DWORD *)(v3 + 8);
    sub_566BB8((int)&v19, "w");
    Caver::SceneObject::SetIdentifier();
    v4 = (void *)(v19 - 24);
    if ( (__int64 *)(v19 - 24) != &qword_6FD2E0 )
    {
      v17 = (unsigned int *)(v19 - 8);
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
      if ( v18 <= 0 )
        operator delete(v4);
    }
    *(_BYTE *)(v3 + 24) = 0;
    Caver::SceneObject::InitWithTemplate((Caver::SceneObject *)v3);
    v5 = Caver::SceneObject::ComponentWithInterface(
           (Caver::SceneObject *)v3,
           (__int64)Caver::WeaponGlowComponent::Interface);
    if ( v5 )
      ++*(_DWORD *)(v5 + 8);
    v6 = (_DWORD *)*((_QWORD *)this + 45);
    *((_QWORD *)this + 45) = v5;
    if ( v6 )
    {
      v7 = v6[2] - 1;
      v6[2] = v7;
      if ( !v7 )
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
        v5 = *((_QWORD *)this + 45);
      }
    }
    v8 = *((float *)this + 111) + 4.0;
    *(_BYTE *)(v5 + 112) = 1;
    *(_BYTE *)(v5 + 160) = 1;
    *(float *)(v5 + 244) = v8;
    Caver::WeaponGlowComponent::SetColor();
    Caver::SceneObject::ComponentWithInterface(
      (Caver::SceneObject *)v3,
      (__int64)Caver::ObjectLinkControllerComponent::Interface);
    v9 = *((_QWORD *)this + 5);
    v19 = v9;
    if ( v9 )
      ++*(_DWORD *)(v9 + 8);
    Caver::ObjectLinkControllerComponent::LinkToObject();
    v10 = v19;
    if ( v19 )
    {
      v11 = *(_DWORD *)(v19 + 8) - 1;
      *(_DWORD *)(v19 + 8) = v11;
      if ( !v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    }
    v12 = *(_DWORD *)(v3 + 8) - 1;
    *(_DWORD *)(v3 + 8) = v12;
    if ( !v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v13 = v20;
    if ( v20 )
    {
      v14 = *(_DWORD *)(v20 + 8) - 1;
      *(_DWORD *)(v20 + 8) = v14;
      if ( !v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
}


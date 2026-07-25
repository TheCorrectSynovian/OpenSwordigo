/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028A9FC
 * Mangled: _ZN5Caver22MagicHookshotComponent13HandleMessageEiPv
 * Demangled: Caver::MagicHookshotComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 28
 *   0x00000000001F3600  Caver::MagicHookshotComponent::Destroy(void)
 *   0x00000000001F3730  Caver::SpellComponent::CasterObject(void)
 *   0x00000000001F3DF0  Caver::DamageComponent::AddPotentialImpact(boost::intrusive_ptr<Caver::SceneObject> const&,Caver::Vector2 const&,Caver::Vector2 const&,bool,Caver::Vector4 const&)
 *   0x00000000001F3FD0  Caver::CollisionShapeComponent::collisionShape(void)
 *   0x00000000001F4FA0  Caver::SoundEffectComponent::Play(void)
 *   0x00000000001F5B00  Caver::CharControllerComponent::ResetAirJumpCount(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6580  Caver::EntityInfoComponent::grabbable(void)
 *   0x00000000001F67D0  Caver::MagicHookshotComponent::CreateBlast(void)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000001F8E80  Caver::CollisionShape::NearestPointInShape(Caver::Vector2 const&)
 *   0x00000000001FC840  Caver::SpellComponent::HandleMessage(int,void *)
 *   0x00000000001FD0C0  Caver::SoundLibrary::sharedLibrary(void)
 *   0x00000000001FDEE0  Caver::AudioSystem::PlaySoundEffect(boost::intrusive_ptr<Caver::SoundEffect> const&,float)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x00000000001FDFA0  Caver::SoundLibrary::EffectForName(std::string const&)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000021C13C  Caver::HealthComponent::Interface(void)
 *   0x0000000000261698  Caver::CharControllerComponent::Interface(void)
 *   0x000000000026F808  Caver::EntityInfoComponent::className(void)
 *   0x0000000000274FA8  Caver::MonsterEntityComponent::Interface(void)
 *   0x000000000028AFD4  Caver::MagicHookshotComponent::~MagicHookshotComponent()
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 153
 *   insn=0x000000000028AA14 string=0x000000000028AA18 "Y"
 *   insn=0x000000000028AA18 string=0x000000000028AA1C "("
 *   insn=0x000000000028AA38 string=0x000000000028AA3C "@"
 *   insn=0x000000000028AA3C string=0x000000000028AA84 "h"
 *   insn=0x000000000028AA44 string=0x000000000028AA48 "h"
 *   insn=0x000000000028AA4C string=0x000000000028AA50 "x"
 *   insn=0x000000000028AA50 string=0x000000000028AA54 ""
 *   insn=0x000000000028AA54 string=0x000000000028AA58 "h\n"
 *   insn=0x000000000028AA58 string=0x000000000028AA5C "v"
 *   insn=0x000000000028AA64 string=0x000000000028AA68 "2"
 *   insn=0x000000000028AA68 string=0x00000000001F3730 "P'"
 *   insn=0x000000000028AA74 string=0x000000000028AA78 "h"
 *   insn=0x000000000028AA7C string=0x000000000028AA80 "a"
 *   insn=0x000000000028AA80 string=0x000000000028AC04 "@"
 *   insn=0x000000000028AA94 string=0x000000000028AA98 "N"
 *   insn=0x000000000028AA98 string=0x00000000001F67D0 "0'"
 *   insn=0x000000000028AAA0 string=0x000000000028AAA4 "#"
 *   insn=0x000000000028AAA0 string=0x00000000001F3600 "P'"
 *   insn=0x000000000028AAA4 string=0x00000000001FDF30 "0'"
 *   insn=0x000000000028AAAC string=0x00000000001FD0C0 "0'"
 *   insn=0x000000000028AAB4 string=0x0000000000588CAF "shield_block"
 *   insn=0x000000000028AAC0 string=0x000000000028AAC4 "=p"
 *   insn=0x000000000028AAD0 string=0x000000000028AAD4 "3"
 *   insn=0x000000000028AAD4 string=0x00000000001FDFA0 "0'"
 *   insn=0x000000000028AAE8 string=0x00000000001FDEE0 "0'"
 *   insn=0x000000000028AAF0 string=0x000000000028AAF4 "@"
 *   insn=0x000000000028AAF4 string=0x000000000028AAF8 ""
 *   insn=0x000000000028AAF8 string=0x000000000028AAFC ""
 *   insn=0x000000000028AB00 string=0x000000000028AB04 ""
 *   insn=0x000000000028AB04 string=0x000000000028AB08 ""
 *   insn=0x000000000028AB14 string=0x000000000028AB18 "@"
 *   insn=0x000000000028AB18 string=0x000000000028AB1C ""
 *   insn=0x000000000028AB1C string=0x000000000028AB20 ""
 *   insn=0x000000000028AB24 string=0x000000000028AB28 ""
 *   insn=0x000000000028AB28 string=0x000000000028AB2C ""
 *   insn=0x000000000028AB38 string=0x000000000028AB3C ")"
 *   insn=0x000000000028AB4C string=0x000000000028AB50 ")=G"
 *   insn=0x000000000028AB50 string=0x000000000028AB54 "!"
 *   insn=0x000000000028AB54 string=0x000000000028AB58 ")"
 *   insn=0x000000000028AB58 string=0x000000000028AB5C "\t"
 *   insn=0x000000000028AB58 string=0x000000000028AE9C "\t"
 *   insn=0x000000000028AB5C string=0x000000000028AB60 "*"
 *   insn=0x000000000028AB60 string=0x000000000028AB64 "\n"
 *   insn=0x000000000028AB6C string=0x000000000028AEA8 "?"
 *   insn=0x000000000028AB74 string=0x000000000028AB78 ""
 *   insn=0x000000000028AB8C string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000028AB90 string=0x000000000028AB94 "@"
 *   insn=0x000000000028AB98 string=0x00000000001F4FA0 "P'"
 *   insn=0x000000000028ABAC string=0x000000000028ABB0 "$"
 *   insn=0x000000000028ABB0 string=0x000000000028ABB4 "("
 *   insn=0x000000000028ABB0 string=0x00000000001FC840 "0'"
 *   insn=0x000000000028ABF0 string=0x000000000028ABF4 "?"
 *   insn=0x000000000028AC04 string=0x000000000028AC08 ""
 *   insn=0x000000000028AC08 string=0x000000000028AC0C ""
 *   insn=0x000000000028AC0C string=0x000000000028AC10 "`"
 *   insn=0x000000000028AC10 string=0x000000000028AC1C ""
 *   insn=0x000000000028AC1C string=0x000000000028AC20 ""
 *   insn=0x000000000028AC64 string=0x000000000028AC68 "@"
 *   insn=0x000000000028AC80 string=0x000000000028AC84 "!"
 *   insn=0x000000000028AC84 string=0x000000000028AC88 "V"
 *   insn=0x000000000028AC84 string=0x0000000000261698 " $"
 *   insn=0x000000000028AC94 string=0x000000000028AC98 "@"
 *   insn=0x000000000028AC98 string=0x000000000028AC9C ""
 *   insn=0x000000000028AC9C string=0x000000000028ACA0 ""
 *   insn=0x000000000028ACA4 string=0x000000000028ACA8 ""
 *   insn=0x000000000028ACA8 string=0x000000000028ACAC ""
 *   insn=0x000000000028ACB4 string=0x000000000028ADB4 ""
 *   insn=0x000000000028ACBC string=0x000000000028ACC0 ""
 *   insn=0x000000000028ACBC string=0x00000000001F5B00 "P'"
 *   insn=0x000000000028ACCC string=0x000000000028ACD0 "("
 *   insn=0x000000000028ACD8 string=0x000000000028ACDC "!"
 *   insn=0x000000000028ACDC string=0x000000000028ACE0 "@"
 *   insn=0x000000000028ACEC string=0x000000000028ACF0 "!"
 *   insn=0x000000000028ACF0 string=0x000000000028ACF4 ";"
 *   insn=0x000000000028ACF4 string=0x000000000028ACF8 "`"
 *   insn=0x000000000028ACF8 string=0x000000000028ACFC "!"
 *   insn=0x000000000028ACFC string=0x00000000001F6580 "0'"
 *   insn=0x000000000028AD10 string=0x000000000028AD14 "\t\t@"
 *   insn=0x000000000028AD14 string=0x000000000028AD18 ")"
 *   insn=0x000000000028AD18 string=0x000000000028AD1C "\t\t"
 *   insn=0x000000000028AD24 string=0x000000000028AD28 " "
 *   insn=0x000000000028AD28 string=0x000000000028AD2C "\t@"
 *   insn=0x000000000028AD2C string=0x000000000028AD30 ")"
 *   insn=0x000000000028AD30 string=0x000000000028AD34 "\t"
 *   insn=0x000000000028AD38 string=0x000000000028AD3C ""
 *   insn=0x000000000028AD3C string=0x000000000028AD40 ""
 *   insn=0x000000000028AD54 string=0x000000000028AD58 "!9@"
 *   insn=0x000000000028AD64 string=0x000000000028AD68 ""
 *   insn=0x000000000028AD98 string=0x000000000028ADB0 "|"
 *   insn=0x000000000028ADA0 string=0x000000000028ADA4 "O"
 *   insn=0x000000000028ADA8 string=0x000000000028ADAC "@"
 *   insn=0x000000000028ADB4 string=0x000000000028ADB8 "h"
 *   insn=0x000000000028ADD4 string=0x000000000028ADD8 "!(B"
 *   insn=0x000000000028ADD8 string=0x000000000021C13C "@&"
 *   insn=0x000000000028ADE0 string=0x000000000028ADE4 ""
 *   insn=0x000000000028ADE4 string=0x000000000028ADE8 "\t"
 *   insn=0x000000000028ADF0 string=0x000000000028ADF4 ""
 *   insn=0x000000000028ADF4 string=0x000000000028ADF8 "\t"
 *   insn=0x000000000028ADFC string=0x000000000028AE00 " "
 *   insn=0x000000000028AE04 string=0x000000000028AE08 "r"
 *   insn=0x000000000028AE08 string=0x00000000001F3FD0 "P'"
 *   insn=0x000000000028AE18 string=0x00000000001F8E80 "0'"
 *   insn=0x000000000028AE2C string=0x000000000028AE30 ""
 *   insn=0x000000000028AE38 string=0x000000000028AE3C "5@"
 *   insn=0x000000000028AE48 string=0x00000000001F8E10 "0'"
 *   insn=0x000000000028AE70 string=0x00000000001F3DF0 "P'"
 *   insn=0x000000000028AE74 string=0x000000000028AE78 "`"
 *   insn=0x000000000028AE78 string=0x000000000028AE7C "@"
 *   insn=0x000000000028AE7C string=0x000000000028AE80 ""
 *   insn=0x000000000028AE80 string=0x000000000028AE84 ""
 *   insn=0x000000000028AE88 string=0x000000000028AE8C ""
 *   insn=0x000000000028AE8C string=0x000000000028AE90 ""
 *   insn=0x000000000028AE94 string=0x000000000028AE98 "C"
 *   insn=0x000000000028AE9C string=0x000000000028AEA0 "*"
 *   insn=0x000000000028AEA0 string=0x000000000028AEA4 "\n"
 *   insn=0x000000000028AEB0 string=0x000000000028AEB4 "<}"
 *   insn=0x000000000028AEB4 string=0x000000000028AEB8 "9"
 *   insn=0x000000000028AEBC string=0x00000000001F62D0 "0'"
 *   insn=0x000000000028AEC8 string=0x000000000028AECC "@"
 *   insn=0x000000000028AED8 string=0x000000000028AEDC ""
 *   insn=0x000000000028AEE0 string=0x000000000028AEE4 "A"
 *   insn=0x000000000028AEE8 string=0x000000000028AEEC ""
 *   insn=0x000000000028AEF4 string=0x000000000028AEF8 "5"
 *   insn=0x000000000028AF00 string=0x000000000028AF04 "H"
 *   insn=0x000000000028AF04 string=0x000000000028AF08 "\t\t@"
 *   insn=0x000000000028AF08 string=0x000000000028AF0C ")"
 *   insn=0x000000000028AF0C string=0x000000000028AF10 "\t\t"
 *   insn=0x000000000028AF14 string=0x000000000028AF18 "\t"
 *   insn=0x000000000028AF18 string=0x000000000028AF1C ")"
 *   insn=0x000000000028AF20 string=0x000000000028AF24 " "
 *   insn=0x000000000028AF24 string=0x000000000028AF28 ")"
 *   insn=0x000000000028AF38 string=0x000000000028AF3C "\t\t@"
 *   insn=0x000000000028AF3C string=0x000000000028AF40 ")"
 *   insn=0x000000000028AF40 string=0x000000000028AF44 "\t\t"
 *   insn=0x000000000028AF48 string=0x000000000028AF4C "\t"
 *   insn=0x000000000028AF4C string=0x000000000028AF50 ")"
 *   insn=0x000000000028AF54 string=0x000000000028AF58 " "
 *   insn=0x000000000028AF6C string=0x000000000028AF70 ")"
 *   insn=0x000000000028AF80 string=0x000000000028AF84 ")=G"
 *   insn=0x000000000028AF84 string=0x000000000028AF88 "!"
 *   insn=0x000000000028AF88 string=0x000000000028AF8C "i"
 *   insn=0x000000000028AF8C string=0x000000000028AF90 "\t"
 *   insn=0x000000000028AF8C string=0x000000000028AFB8 "\t"
 *   insn=0x000000000028AF90 string=0x000000000028AF94 "*"
 *   insn=0x000000000028AF94 string=0x000000000028AF98 "\n"
 *   insn=0x000000000028AF9C string=0x000000000028AFA0 "?"
 *   insn=0x000000000028AFA0 string=0x000000000028AFA4 "L"
 *   insn=0x000000000028AFB0 string=0x000000000028AFB4 "D"
 *   insn=0x000000000028AFB8 string=0x000000000028AFBC "*"
 *   insn=0x000000000028AFBC string=0x000000000028AFC0 "\n"
 *   insn=0x000000000028AFC0 string=0x000000000028AFC4 "?"
 *   insn=0x000000000028AFC4 string=0x000000000028AFC8 ""
 *   insn=0x000000000028AFCC string=0x000000000028AFD0 "="
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicHookshotComponent::HandleMessage(float32x2_t *this, int a2, __int64 *a3)
{
  __int64 v6; // x24
  __int64 v7; // x22
  __int64 v8; // x0
  _BOOL4 v9; // w23
  Caver::AudioSystem *v10; // x0
  Caver::SoundLibrary *v11; // x0
  int v12; // w8
  int v13; // w8
  void *v14; // x0
  unsigned int *v15; // x8
  int v16; // w9
  Caver::SoundEffectComponent *v17; // x0
  int v19; // w8
  unsigned __int64 v20; // x8
  Caver::SoundEffectComponent *v21; // x0
  Caver::CharControllerComponent *v22; // x23
  Caver::SceneObject *v23; // x0
  int v24; // w8
  Caver::EntityInfoComponent *v25; // x0
  float32x2_t *v26; // x8
  _DWORD *v27; // x0
  int v28; // w9
  Caver::SoundEffectComponent *v29; // x0
  __int64 v30; // x0
  unsigned __int64 v31; // x8
  Caver::CollisionShape *v32; // x0
  __int64 v33; // x23
  __int64 v34; // x0
  int v35; // w8
  _DWORD *v36; // [xsp+8h] [xbp-88h]
  _DWORD *v37; // [xsp+10h] [xbp-80h]
  __int64 v38; // [xsp+20h] [xbp-70h] BYREF
  __int64 v39; // [xsp+28h] [xbp-68h]
  __int64 v40; // [xsp+30h] [xbp-60h] BYREF
  Caver::SceneObject *v41; // [xsp+38h] [xbp-58h] BYREF
  __int64 v42[2]; // [xsp+40h] [xbp-50h] BYREF

  v42[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a2 )
  {
    case 2:
      this[23].n64_u8[0] = 1;
      return Caver::SpellComponent::HandleMessage((Caver::SpellComponent *)this, a2, a3) & 1;
    case 13:
      if ( *((_BYTE *)a3 + 36) )
      {
        *(_QWORD *)(this[5].n64_u64[0] + 104) = 0;
        Caver::MagicHookshotComponent::CreateBlast((Caver::MagicHookshotComponent *)this);
        Caver::MagicHookshotComponent::Destroy((Caver::MagicHookshotComponent *)this);
        v11 = (Caver::SoundLibrary *)Caver::AudioSystem::sharedSystem(v10);
        Caver::SoundLibrary::sharedLibrary(v11);
        sub_566BB8((int)&v40, "shield_block");
        Caver::SoundLibrary::EffectForName();
        Caver::AudioSystem::PlaySoundEffect();
        if ( v36 )
        {
          v12 = v36[2] - 1;
          v36[2] = v12;
          if ( !v12 )
            (*(void (__fastcall **)())(*(_QWORD *)v36 + 8LL))();
        }
        if ( v37 )
        {
          v13 = v37[2] - 1;
          v37[2] = v13;
          if ( !v13 )
            (*(void (__fastcall **)())(*(_QWORD *)v37 + 8LL))();
        }
        v14 = (void *)(v40 - 24);
        if ( (__int64 *)(v40 - 24) != &qword_6FD2E0 )
        {
          v15 = (unsigned int *)(v40 - 8);
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
          if ( v16 <= 0 )
            operator delete(v14);
        }
      }
      else
      {
        v17 = (Caver::SoundEffectComponent *)this[32].n64_u64[0];
        if ( v17
          || (Caver::ComponentOutletBase::Connect(
                (Caver::ComponentOutletBase *)&this[30],
                (const Caver::Component *)this),
              (v17 = (Caver::SoundEffectComponent *)this[32].n64_u64[0]) != 0) )
        {
          Caver::SoundEffectComponent::Play(v17);
        }
      }
      Caver::MagicHookshotComponent::CreateBlast((Caver::MagicHookshotComponent *)this);
      break;
    case 7:
      if ( !*((_BYTE *)a3 + 52) )
        return Caver::SpellComponent::HandleMessage((Caver::SpellComponent *)this, a2, a3) & 1;
      v6 = *a3;
      if ( !*(_BYTE *)(*a3 + 381) )
        return Caver::SpellComponent::HandleMessage((Caver::SpellComponent *)this, a2, a3) & 1;
      v7 = a3[1];
      Caver::SpellComponent::CasterObject(v42, (Caver::SpellComponent *)this);
      v8 = v42[0];
      if ( !v42[0] )
        return Caver::SpellComponent::HandleMessage((Caver::SpellComponent *)this, a2, a3) & 1;
      if ( this[40].n64_u8[4] )
      {
        v9 = 0;
      }
      else if ( this[40].n64_u8[5] )
      {
        v9 = this[41].n64_u64[0] == this[5].n64_u64[0];
      }
      else
      {
        v9 = 1;
      }
      v19 = *(_DWORD *)(v42[0] + 8) - 1;
      *(_DWORD *)(v42[0] + 8) = v19;
      if ( v19 )
      {
        if ( !v9 )
          return Caver::SpellComponent::HandleMessage((Caver::SpellComponent *)this, a2, a3) & 1;
      }
      else
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        if ( !v9 )
          return Caver::SpellComponent::HandleMessage((Caver::SpellComponent *)this, a2, a3) & 1;
      }
      if ( *(_DWORD *)(v7 + 384) == 7 )
      {
        v20 = this[5].n64_u64[0];
        this[40].n64_u8[4] = 1;
        *(_QWORD *)(v20 + 104) = 0;
        Caver::MagicHookshotComponent::CreateBlast((Caver::MagicHookshotComponent *)this);
        v21 = (Caver::SoundEffectComponent *)this[32].n64_u64[0];
        if ( v21
          || (Caver::ComponentOutletBase::Connect(
                (Caver::ComponentOutletBase *)&this[30],
                (const Caver::Component *)this),
              (v21 = (Caver::SoundEffectComponent *)this[32].n64_u64[0]) != 0) )
        {
          Caver::SoundEffectComponent::Play(v21);
        }
        Caver::SpellComponent::CasterObject((__int64 *)&v41, (Caver::SpellComponent *)this);
        v22 = (Caver::CharControllerComponent *)Caver::SceneObject::ComponentWithInterface(
                                                  v41,
                                                  (__int64)Caver::CharControllerComponent::Interface);
        v23 = v41;
        if ( v41 )
        {
          v24 = *((_DWORD *)v41 + 2) - 1;
          *((_DWORD *)v41 + 2) = v24;
          if ( !v24 )
            (*(void (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)v23 + 8LL))(v23);
        }
        if ( v22 )
        {
          Caver::CharControllerComponent::ResetAirJumpCount(v22);
          if ( !*(_BYTE *)(v6 + 381) )
            return Caver::SpellComponent::HandleMessage((Caver::SpellComponent *)this, a2, a3) & 1;
          goto LABEL_59;
        }
LABEL_58:
        if ( !*(_BYTE *)(v6 + 381) )
          return Caver::SpellComponent::HandleMessage((Caver::SpellComponent *)this, a2, a3) & 1;
        goto LABEL_59;
      }
      if ( !*(_BYTE *)(v7 + 380)
        || !Caver::SceneObject::ComponentWithInterface(
              *(Caver::SceneObject **)(v7 + 40),
              (__int64)Caver::MonsterEntityComponent::Interface) )
      {
        if ( *(_BYTE *)(v7 + 378) )
        {
          *(_QWORD *)(this[5].n64_u64[0] + 104) = 0;
          Caver::MagicHookshotComponent::CreateBlast((Caver::MagicHookshotComponent *)this);
          Caver::MagicHookshotComponent::Destroy((Caver::MagicHookshotComponent *)this);
          v29 = (Caver::SoundEffectComponent *)this[35].n64_u64[0];
          if ( v29
            || (Caver::ComponentOutletBase::Connect(
                  (Caver::ComponentOutletBase *)&this[33],
                  (const Caver::Component *)this),
                (v29 = (Caver::SoundEffectComponent *)this[35].n64_u64[0]) != 0) )
          {
            Caver::SoundEffectComponent::Play(v29);
          }
        }
        goto LABEL_58;
      }
      v25 = (Caver::EntityInfoComponent *)Caver::SceneObject::ComponentWithInterface(
                                            *(Caver::SceneObject **)(v7 + 40),
                                            (__int64)Caver::EntityInfoComponent::Interface);
      if ( v25 && (Caver::EntityInfoComponent::grabbable(v25) & 1) == 0 )
        goto LABEL_58;
      this[40].n64_u8[5] = 1;
      v26 = *(float32x2_t **)(v7 + 40);
      if ( v26 )
        ++v26[1].n64_u32[0];
      v27 = (_DWORD *)this[41].n64_u64[0];
      this[41].n64_u64[0] = (unsigned __int64)v26;
      if ( v27 )
      {
        v28 = v27[2] - 1;
        v27[2] = v28;
        if ( !v28 )
        {
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v27 + 8LL))(v27);
          v26 = (float32x2_t *)this[41].n64_u64[0];
        }
      }
      this[42].n64_u64[0] = vsub_f32(v26[14], *(float32x2_t *)(this[5].n64_u64[0] + 112)).n64_u64[0];
      Caver::MagicHookshotComponent::CreateBlast((Caver::MagicHookshotComponent *)this);
      if ( *(_BYTE *)(v6 + 381) )
      {
LABEL_59:
        if ( *(_BYTE *)(v7 + 380) || *(_DWORD *)(v7 + 384) == 6 )
        {
          v30 = Caver::SceneObject::ComponentWithInterface(
                  *(Caver::SceneObject **)(v7 + 40),
                  (__int64)Caver::HealthComponent::Interface);
          v31 = this[39].n64_u64[0];
          if ( v31 )
          {
            if ( *(_BYTE *)(v31 + 188) && (!v30 || *(_DWORD *)(v31 + 180) != *(_DWORD *)(v30 + 136)) )
            {
              v32 = (Caver::CollisionShape *)Caver::CollisionShapeComponent::collisionShape((Caver::CollisionShapeComponent *)v7);
              Caver::CollisionShape::NearestPointInShape(&v40, v32, (const Caver::Vector2 *)(this[5].n64_u64[0] + 112));
              v33 = *(_QWORD *)(v7 + 40);
              v39 = v33;
              if ( v33 )
                ++*(_DWORD *)(v33 + 8);
              v38 = *(_QWORD *)(this[5].n64_u64[0] + 104);
              Caver::Vector2::Normalize((Caver::Vector2 *)&v38);
              Caver::DamageComponent::AddPotentialImpact();
              v34 = v39;
              if ( v39 )
              {
                v35 = *(_DWORD *)(v39 + 8) - 1;
                *(_DWORD *)(v39 + 8) = v35;
                if ( !v35 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 8LL))(v34);
              }
            }
          }
        }
      }
      break;
    default:
      return Caver::SpellComponent::HandleMessage((Caver::SpellComponent *)this, a2, a3) & 1;
  }
  return Caver::SpellComponent::HandleMessage((Caver::SpellComponent *)this, a2, a3) & 1;
}


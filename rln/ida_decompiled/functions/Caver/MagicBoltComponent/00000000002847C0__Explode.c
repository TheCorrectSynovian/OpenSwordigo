/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002847C0
 * Mangled: _ZN5Caver18MagicBoltComponent7ExplodeEb
 * Demangled: Caver::MagicBoltComponent::Explode(bool)
 *
 * Callers: 1
 *   0x00000000001FE100  Caver::MagicBoltComponent::Explode(bool)
 *
 * Callees: 20
 *   0x00000000001F36C0  Caver::MagicExplosionComponent::ExplodeToDirection(Caver::Vector2 const&,float)
 *   0x00000000001F3730  Caver::SpellComponent::CasterObject(void)
 *   0x00000000001F4FA0  Caver::SoundEffectComponent::Play(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F84D0  Caver::MagicExplosionComponent::SetCasterObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000274F9C  Caver::MagicExplosionComponent::Interface(void)
 *   0x0000000000284B60  Caver::MagicBoltComponent::Update(float)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 123
 *   insn=0x00000000002847D4 string=0x00000000002847D8 "W"
 *   insn=0x00000000002847E8 string=0x00000000002847EC "`"
 *   insn=0x00000000002847F0 string=0x00000000002847F4 "`"
 *   insn=0x00000000002847FC string=0x0000000000284800 "`"
 *   insn=0x00000000002847FC string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000284800 string=0x0000000000284804 "@"
 *   insn=0x0000000000284808 string=0x00000000001F4FA0 "P'"
 *   insn=0x000000000028480C string=0x0000000000284810 "t"
 *   insn=0x0000000000284810 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000284818 string=0x000000000028481C "h"
 *   insn=0x0000000000284818 string=0x00000000001FAB30 "0'"
 *   insn=0x000000000028481C string=0x0000000000284820 ""
 *   insn=0x0000000000284824 string=0x0000000000284828 "!"
 *   insn=0x0000000000284828 string=0x0000000000588B67 "magic_bolt_explosion"
 *   insn=0x0000000000284854 string=0x0000000000284858 "r"
 *   insn=0x0000000000284858 string=0x00000000001F5A20 "P'"
 *   insn=0x0000000000284860 string=0x0000000000284864 "@"
 *   insn=0x0000000000284864 string=0x0000000000284868 ""
 *   insn=0x0000000000284868 string=0x000000000028486C ""
 *   insn=0x0000000000284870 string=0x0000000000284874 ""
 *   insn=0x0000000000284874 string=0x0000000000284878 ""
 *   insn=0x0000000000284880 string=0x0000000000284884 "\t#"
 *   insn=0x0000000000284884 string=0x0000000000284888 ")"
 *   insn=0x0000000000284890 string=0x0000000000284894 "A"
 *   insn=0x0000000000284894 string=0x0000000000284898 "h"
 *   insn=0x0000000000284894 string=0x00000000002849FC "\t#"
 *   insn=0x00000000002848A0 string=0x00000000002848A4 """
 *   insn=0x00000000002848AC string=0x00000000002848B0 "!"
 *   insn=0x00000000002848B0 string=0x00000000002848B4 "  ""
 *   insn=0x00000000002848B8 string=0x00000000002848BC "\nu@"
 *   insn=0x00000000002848C0 string=0x00000000002848C4 "\t"
 *   insn=0x00000000002848CC string=0x00000000002848D0 "#MG"
 *   insn=0x00000000002848D0 string=0x00000000002848D4 "#8#"
 *   insn=0x00000000002848D4 string=0x00000000002848D8 "c"
 *   insn=0x00000000002848D8 string=0x00000000002848DC "` ""
 *   insn=0x00000000002848DC string=0x00000000002848E0 "i"
 *   insn=0x00000000002848E0 string=0x00000000002848E4 "*"
 *   insn=0x00000000002848E0 string=0x000000000028490C "\ty@"
 *   insn=0x00000000002848E8 string=0x00000000002848EC "*"
 *   insn=0x00000000002848F8 string=0x00000000002848FC ")"
 *   insn=0x00000000002848FC string=0x00000000001F5DA0 "P'"
 *   insn=0x0000000000284904 string=0x0000000000284908 "h"
 *   insn=0x0000000000284918 string=0x000000000028491C ""
 *   insn=0x000000000028491C string=0x0000000000284920 ")"
 *   insn=0x0000000000284920 string=0x0000000000284924 ""
 *   insn=0x000000000028493C string=0x0000000000284940 "@"
 *   insn=0x0000000000284940 string=0x0000000000284944 ""
 *   insn=0x0000000000284944 string=0x0000000000284948 ""
 *   insn=0x000000000028494C string=0x0000000000284950 ""
 *   insn=0x0000000000284950 string=0x0000000000284954 ""
 *   insn=0x000000000028495C string=0x0000000000284960 "!4E"
 *   insn=0x0000000000284974 string=0x0000000000284978 "n"
 *   insn=0x0000000000284978 string=0x00000000001F3730 "P'"
 *   insn=0x0000000000284984 string=0x00000000001F84D0 "0'"
 *   insn=0x000000000028498C string=0x0000000000284990 "@"
 *   insn=0x000000000028498C string=0x00000000002849AC "("
 *   insn=0x0000000000284990 string=0x0000000000284994 ""
 *   insn=0x0000000000284994 string=0x0000000000284998 ""
 *   insn=0x000000000028499C string=0x00000000002849A0 ""
 *   insn=0x00000000002849A0 string=0x00000000002849A4 ""
 *   insn=0x00000000002849BC string=0x00000000002849C0 "@"
 *   insn=0x00000000002849C0 string=0x00000000001F36C0 "P'"
 *   insn=0x00000000002849C4 string=0x00000000002849C8 "h"
 *   insn=0x00000000002849CC string=0x00000000002849D0 "\t"
 *   insn=0x00000000002849E0 string=0x0000000000284A40 "$"
 *   insn=0x00000000002849FC string=0x0000000000284A00 ")=G"
 *   insn=0x0000000000284A00 string=0x0000000000284A04 "!"
 *   insn=0x0000000000284A08 string=0x0000000000284A0C "\t"
 *   insn=0x0000000000284A08 string=0x0000000000284A20 "\t"
 *   insn=0x0000000000284A0C string=0x0000000000284A10 "*"
 *   insn=0x0000000000284A10 string=0x0000000000284A14 "\n"
 *   insn=0x0000000000284A1C string=0x0000000000284A2C "?"
 *   insn=0x0000000000284A20 string=0x0000000000284A24 "*"
 *   insn=0x0000000000284A24 string=0x0000000000284A28 "\n"
 *   insn=0x0000000000284A2C string=0x0000000000284A30 "L"
 *   insn=0x0000000000284A34 string=0x0000000000284A38 "["
 *   insn=0x0000000000284A40 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000284A48 string=0x0000000000284A4C "h"
 *   insn=0x0000000000284A4C string=0x0000000000284A50 "\t\t@"
 *   insn=0x0000000000284A50 string=0x0000000000284A54 ")"
 *   insn=0x0000000000284A54 string=0x0000000000284A58 "\t\t"
 *   insn=0x0000000000284A5C string=0x0000000000284A60 "\t"
 *   insn=0x0000000000284A60 string=0x0000000000284A64 ")"
 *   insn=0x0000000000284A68 string=0x0000000000284A6C " "
 *   insn=0x0000000000284A6C string=0x0000000000284A70 ":"
 *   insn=0x0000000000284A7C string=0x0000000000284A80 "\t\t@"
 *   insn=0x0000000000284A80 string=0x0000000000284A84 ")"
 *   insn=0x0000000000284A84 string=0x0000000000284A88 "\t\t"
 *   insn=0x0000000000284A88 string=0x0000000000284A8C "a"
 *   insn=0x0000000000284A8C string=0x0000000000284A90 "\t"
 *   insn=0x0000000000284A90 string=0x0000000000284A94 ")"
 *   insn=0x0000000000284A98 string=0x0000000000284A9C " "
 *   insn=0x0000000000284A9C string=0x0000000000284AA0 "."
 *   insn=0x0000000000284AA8 string=0x0000000000284AAC "H"
 *   insn=0x0000000000284AAC string=0x0000000000284AB0 "\t\t@"
 *   insn=0x0000000000284AB0 string=0x0000000000284AB4 ")"
 *   insn=0x0000000000284AB4 string=0x0000000000284AB8 "\t\t"
 *   insn=0x0000000000284ABC string=0x0000000000284AC0 "\t"
 *   insn=0x0000000000284AC0 string=0x0000000000284AC4 ")"
 *   insn=0x0000000000284AC8 string=0x0000000000284ACC " "
 *   insn=0x0000000000284ACC string=0x0000000000284AD0 "\t"
 *   insn=0x0000000000284AD4 string=0x0000000000284AD8 "{"
 *   insn=0x0000000000284AE4 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000284AE8 string=0x0000000000284AEC "v"
 *   insn=0x0000000000284AF4 string=0x0000000000284AF8 "\t#"
 *   insn=0x0000000000284AF8 string=0x0000000000284AFC ")"
 *   insn=0x0000000000284B08 string=0x0000000000284B0C "\t#"
 *   insn=0x0000000000284B0C string=0x0000000000284B10 ")=G"
 *   insn=0x0000000000284B10 string=0x0000000000284B14 "!"
 *   insn=0x0000000000284B14 string=0x0000000000284B18 "i"
 *   insn=0x0000000000284B18 string=0x0000000000284B1C "\t"
 *   insn=0x0000000000284B18 string=0x0000000000284B44 "\t"
 *   insn=0x0000000000284B1C string=0x0000000000284B20 "*"
 *   insn=0x0000000000284B20 string=0x0000000000284B24 "\n"
 *   insn=0x0000000000284B28 string=0x0000000000284B2C "?"
 *   insn=0x0000000000284B2C string=0x0000000000284B30 "L"
 *   insn=0x0000000000284B34 string=0x0000000000284B38 ""
 *   insn=0x0000000000284B3C string=0x0000000000284B40 "a"
 *   insn=0x0000000000284B44 string=0x0000000000284B48 "*"
 *   insn=0x0000000000284B48 string=0x0000000000284B4C "\n"
 *   insn=0x0000000000284B4C string=0x0000000000284B50 "?"
 *   insn=0x0000000000284B50 string=0x0000000000284B54 ""
 *   insn=0x0000000000284B58 string=0x0000000000284B5C "Z"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicBoltComponent::Explode(Caver::MagicBoltComponent *this, char a2)
{
  Caver::SoundEffectComponent *v4; // x0
  __int64 v5; // x21
  __int64 v6; // x0
  int v7; // w8
  void *v8; // x0
  __int64 v9; // x8
  float v10; // s0
  int v11; // w10
  _DWORD *v12; // x9
  __int64 v13; // x0
  int v14; // w9
  void (__fastcall *v15)(__int64, __int64 *); // x8
  __int64 v16; // x0
  int v17; // w8
  Caver::MagicExplosionComponent *v18; // x21
  __int64 v19; // x0
  int v20; // w8
  __int64 result; // x0
  unsigned int *v22; // x8
  int v23; // w9
  __int64 v24; // [xsp+10h] [xbp-50h] BYREF
  __int64 v25[3]; // [xsp+18h] [xbp-48h] BYREF

  v25[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 32);
  if ( v4
    || (Caver::ComponentOutletBase::Connect((Caver::MagicBoltComponent *)((char *)this + 240), this),
        (v4 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 32)) != 0) )
  {
    Caver::SoundEffectComponent::Play(v4);
  }
  v5 = operator new(0x128u);
  Caver::SceneObject::SceneObject((Caver::SceneObject *)v5);
  sub_566BB8((int)&v24, "magic_bolt_explosion");
  Caver::ObjectLibrary::TemplateForName();
  Caver::SceneObject::InitWithTemplate((Caver::SceneObject *)v5);
  v6 = v25[0];
  if ( v25[0] )
  {
    v7 = *(_DWORD *)(v25[0] + 8) - 1;
    *(_DWORD *)(v25[0] + 8) = v7;
    if ( !v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  v8 = (void *)(v24 - 24);
  if ( (__int64 *)(v24 - 24) != &qword_6FD2E0 )
  {
    v22 = (unsigned int *)(v24 - 8);
    if ( &pthread_create )
    {
      do
        v23 = __ldaxr(v22);
      while ( __stlxr(v23 - 1, v22) );
    }
    else
    {
      v23 = (*v22)--;
    }
    if ( v23 <= 0 )
      operator delete(v8);
  }
  v9 = *((_QWORD *)this + 5);
  v10 = *(float *)(v9 + 112);
  if ( fabsf(v10 - *(float *)(v5 + 112)) <= 0.0001 )
  {
    v12 = (_DWORD *)(v5 + 116);
    if ( fabsf(*(float *)(v9 + 116) - *(float *)(v5 + 116)) <= 0.0001 )
      goto LABEL_14;
    v11 = *(_DWORD *)(v9 + 116);
  }
  else
  {
    v11 = *(_DWORD *)(v9 + 116);
    v12 = (_DWORD *)(v5 + 116);
  }
  *(float *)(v5 + 112) = v10;
  *v12 = v11;
  if ( !*(_BYTE *)(v5 + 180) )
  {
    Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v5);
    *(_BYTE *)(v5 + 180) = 1;
    v9 = *((_QWORD *)this + 5);
  }
LABEL_14:
  *(_DWORD *)(v5 + 120) = *(_DWORD *)(v9 + 120);
  v13 = *(_QWORD *)(v9 + 32);
  v14 = *(_DWORD *)(v5 + 8) + 1;
  v15 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 40LL);
  v25[0] = v5;
  *(_DWORD *)(v5 + 8) = v14;
  v15(v13, v25);
  v16 = v25[0];
  if ( v25[0] )
  {
    v17 = *(_DWORD *)(v25[0] + 8) - 1;
    *(_DWORD *)(v25[0] + 8) = v17;
    if ( !v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  }
  v18 = (Caver::MagicExplosionComponent *)Caver::SceneObject::ComponentWithInterface(
                                            (Caver::SceneObject *)v5,
                                            (__int64)Caver::MagicExplosionComponent::Interface);
  Caver::SpellComponent::CasterObject(v25, this);
  Caver::MagicExplosionComponent::SetCasterObject();
  v19 = v25[0];
  if ( v25[0] )
  {
    v20 = *(_DWORD *)(v25[0] + 8) - 1;
    *(_DWORD *)(v25[0] + 8) = v20;
    if ( !v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  }
  v25[0] = 0;
  result = Caver::MagicExplosionComponent::ExplodeToDirection(v18, (const Caver::Vector2 *)v25, 6.2832);
  if ( (a2 & 1) != 0 )
    *(_BYTE *)(*((_QWORD *)this + 5) + 232LL) = 1;
  return result;
}


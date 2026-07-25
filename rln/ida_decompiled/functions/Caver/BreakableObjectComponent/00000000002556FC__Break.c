/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002556FC
 * Mangled: _ZN5Caver24BreakableObjectComponent5BreakEv
 * Demangled: Caver::BreakableObjectComponent::Break(void)
 *
 * Callers: 1
 *   0x00000000001FAC90  Caver::BreakableObjectComponent::Break(void)
 *
 * Callees: 26
 *   0x00000000001F45A0  Caver::SceneObject::AddComponent(Caver::Component *)
 *   0x00000000001F4FA0  Caver::SoundEffectComponent::Play(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8630  Caver::ShatterComponent::ShatterModel(Caver::ModelComponent *,bool)
 *   0x00000000001F9780  Caver::ItemDropComponent::Trigger(void)
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x00000000001FEE40  Caver::Component::NewProgramStateForProgram(Caver::Program const&)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000200B80  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x0000000000201480  Caver::ProgramState::Execute(int)
 *   0x0000000000201A30  Caver::ItemDropComponent::ItemDropComponent(void)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000215678  Caver::ModelComponent::Interface(void)
 *   0x000000000023AA08  Caver::SoundEffectComponent::className(void)
 *   0x00000000002560E8  Caver::ShatterComponent::Interface(void)
 *   0x00000000002560F4  Caver::ItemDropComponent::Interface(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 139
 *   insn=0x000000000025570C string=0x0000000000255710 "V"
 *   insn=0x000000000025571C string=0x0000000000255720 "h"
 *   insn=0x0000000000255720 string=0x0000000000255724 "H"
 *   insn=0x0000000000255734 string=0x0000000000255A28 "*"
 *   insn=0x0000000000255750 string=0x0000000000255754 "h"
 *   insn=0x0000000000255758 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000255760 string=0x00000000001FAB30 "0'"
 *   insn=0x0000000000255768 string=0x000000000025576C ""
 *   insn=0x0000000000255770 string=0x0000000000255774 "h"
 *   insn=0x0000000000255774 string=0x0000000000255778 ""
 *   insn=0x0000000000255780 string=0x00000000005877E9 "effect_shatter"
 *   insn=0x000000000025578C string=0x0000000000255790 "\nE"
 *   insn=0x00000000002557B0 string=0x00000000001F5A20 "P'"
 *   insn=0x00000000002557B8 string=0x00000000002557BC "@"
 *   insn=0x00000000002557BC string=0x00000000002557C0 ""
 *   insn=0x00000000002557C0 string=0x00000000002557C4 ""
 *   insn=0x00000000002557C8 string=0x00000000002557CC ""
 *   insn=0x00000000002557CC string=0x00000000002557D0 ""
 *   insn=0x00000000002557DC string=0x00000000002557E0 ")"
 *   insn=0x00000000002557EC string=0x00000000002557F0 "h"
 *   insn=0x00000000002557EC string=0x00000000002559E4 "i$"
 *   insn=0x00000000002557F4 string=0x00000000002557F8 "\t9@"
 *   insn=0x00000000002557F8 string=0x00000000002557FC "y@"
 *   insn=0x0000000000255818 string=0x000000000025581C "h"
 *   insn=0x0000000000255824 string=0x0000000000255828 "!"
 *   insn=0x0000000000255828 string=0x000000000025582C "  ""
 *   insn=0x0000000000255838 string=0x000000000025583C "\t"
 *   insn=0x0000000000255848 string=0x000000000025584C "#8#"
 *   insn=0x000000000025584C string=0x0000000000255850 "c"
 *   insn=0x0000000000255850 string=0x0000000000255854 "` ""
 *   insn=0x0000000000255854 string=0x0000000000255858 "I"
 *   insn=0x0000000000255858 string=0x000000000025585C ")"
 *   insn=0x0000000000255860 string=0x0000000000255864 "\t"
 *   insn=0x0000000000255870 string=0x0000000000255874 "K"
 *   insn=0x0000000000255874 string=0x00000000001F5DA0 "P'"
 *   insn=0x0000000000255884 string=0x0000000000255888 "h"
 *   insn=0x000000000025588C string=0x0000000000255890 ""
 *   insn=0x0000000000255890 string=0x0000000000255894 ""
 *   insn=0x00000000002558A4 string=0x00000000002558A8 "!"
 *   insn=0x00000000002558A8 string=0x00000000002558AC "M"
 *   insn=0x00000000002558B0 string=0x00000000002558B4 "`"
 *   insn=0x00000000002558B8 string=0x00000000002558BC "!0D"
 *   insn=0x00000000002558BC string=0x00000000002558C0 "H"
 *   insn=0x00000000002558CC string=0x00000000002558D0 "X"
 *   insn=0x00000000002558D0 string=0x00000000002558D4 "`"
 *   insn=0x00000000002558D0 string=0x00000000001F8630 "0'"
 *   insn=0x00000000002558D8 string=0x00000000002558DC "!"
 *   insn=0x00000000002558DC string=0x00000000002558E0 "@"
 *   insn=0x00000000002558DC string=0x000000000023AA60 "`%"
 *   insn=0x00000000002558E0 string=0x00000000002558E4 "@"
 *   insn=0x00000000002558E4 string=0x00000000002558EC "hN@"
 *   insn=0x00000000002558E8 string=0x00000000001F4FA0 "P'"
 *   insn=0x00000000002558F0 string=0x00000000002558F4 "a"
 *   insn=0x00000000002558F0 string=0x0000000000255968 "`"
 *   insn=0x00000000002558FC string=0x0000000000255900 "P"
 *   insn=0x0000000000255908 string=0x000000000025590C "a"
 *   insn=0x0000000000255920 string=0x0000000000255924 "4"
 *   insn=0x0000000000255928 string=0x000000000025592C ""
 *   insn=0x0000000000255938 string=0x000000000025593C "\t@"
 *   insn=0x0000000000255948 string=0x000000000025594C ""
 *   insn=0x0000000000255958 string=0x000000000025595C "@"
 *   insn=0x000000000025596C string=0x0000000000255970 "!P@"
 *   insn=0x0000000000255970 string=0x0000000000255974 ""
 *   insn=0x0000000000255978 string=0x000000000025597C "t"
 *   insn=0x000000000025598C string=0x0000000000255990 "("
 *   insn=0x0000000000255998 string=0x000000000025599C "`"
 *   insn=0x00000000002559A4 string=0x00000000001F45A0 "P'"
 *   insn=0x00000000002559A8 string=0x00000000002559AC "u"
 *   insn=0x00000000002559AC string=0x00000000002559B0 "h"
 *   insn=0x00000000002559AC string=0x00000000001F9780 "0'"
 *   insn=0x00000000002559B4 string=0x00000000002559B8 "\t"
 *   insn=0x00000000002559BC string=0x00000000002559C0 "@"
 *   insn=0x00000000002559C0 string=0x00000000002559C4 "@"
 *   insn=0x00000000002559C4 string=0x00000000002559C8 ""
 *   insn=0x00000000002559C8 string=0x00000000002559CC ""
 *   insn=0x00000000002559D0 string=0x00000000002559D4 ""
 *   insn=0x00000000002559D4 string=0x00000000002559D8 ""
 *   insn=0x00000000002559DC string=0x00000000002559E0 "R"
 *   insn=0x00000000002559E4 string=0x00000000002559E8 ")=G"
 *   insn=0x00000000002559E8 string=0x00000000002559EC "!"
 *   insn=0x00000000002559F0 string=0x00000000002559F4 "\t"
 *   insn=0x00000000002559F0 string=0x0000000000255A08 "\t"
 *   insn=0x00000000002559F4 string=0x00000000002559F8 "*"
 *   insn=0x00000000002559F8 string=0x00000000002559FC "\n"
 *   insn=0x0000000000255A04 string=0x0000000000255A14 "?"
 *   insn=0x0000000000255A08 string=0x0000000000255A0C "*"
 *   insn=0x0000000000255A0C string=0x0000000000255A10 "\n"
 *   insn=0x0000000000255A1C string=0x0000000000255A20 "aR"
 *   insn=0x0000000000255A20 string=0x0000000000255A24 "s"
 *   insn=0x0000000000255A28 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000255A34 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000255A3C string=0x0000000000255A40 "R"
 *   insn=0x0000000000255A3C string=0x0000000000255B6C "@"
 *   insn=0x0000000000255A50 string=0x0000000000255A54 ""
 *   insn=0x0000000000255A58 string=0x0000000000255A5C "A"
 *   insn=0x0000000000255A60 string=0x0000000000255A64 "\t@"
 *   insn=0x0000000000255A70 string=0x0000000000255A74 ""
 *   insn=0x0000000000255A78 string=0x0000000000255A7C "A"
 *   insn=0x0000000000255A80 string=0x0000000000255A84 "@"
 *   insn=0x0000000000255A8C string=0x0000000000255A90 "5"
 *   insn=0x0000000000255AA0 string=0x0000000000255AA4 "("
 *   insn=0x0000000000255AA4 string=0x0000000000255AA8 "\t\t@"
 *   insn=0x0000000000255AA8 string=0x0000000000255AAC ")"
 *   insn=0x0000000000255AAC string=0x0000000000255AB0 "\t\t"
 *   insn=0x0000000000255AB4 string=0x0000000000255AB8 "\t"
 *   insn=0x0000000000255AB8 string=0x0000000000255ABC ")"
 *   insn=0x0000000000255AC0 string=0x0000000000255AC4 " "
 *   insn=0x0000000000255AC4 string=0x0000000000255AC8 ""
 *   insn=0x0000000000255ADC string=0x0000000000255AE0 "y"
 *   insn=0x0000000000255AEC string=0x0000000000255AF0 ")"
 *   insn=0x0000000000255AF8 string=0x0000000000255AFC "@"
 *   insn=0x0000000000255AFC string=0x0000000000255B00 "i$"
 *   insn=0x0000000000255B00 string=0x0000000000255B04 ")=G"
 *   insn=0x0000000000255B04 string=0x0000000000255B08 "!"
 *   insn=0x0000000000255B0C string=0x0000000000255B10 "\t"
 *   insn=0x0000000000255B0C string=0x0000000000255B3C "\t"
 *   insn=0x0000000000255B10 string=0x0000000000255B14 "*"
 *   insn=0x0000000000255B14 string=0x0000000000255B18 "\n"
 *   insn=0x0000000000255B1C string=0x0000000000255B20 "?"
 *   insn=0x0000000000255B3C string=0x0000000000255B40 "*"
 *   insn=0x0000000000255B40 string=0x0000000000255B44 "\n"
 *   insn=0x0000000000255B44 string=0x0000000000255B48 "?"
 *   insn=0x0000000000255B6C string=0x0000000000255B70 ""
 *   insn=0x0000000000255B70 string=0x0000000000255B74 ""
 *   insn=0x0000000000255B78 string=0x0000000000255B7C ""
 *   insn=0x0000000000255B7C string=0x0000000000255B80 ""
 *   insn=0x0000000000255B88 string=0x0000000000255B8C "N"
 *   insn=0x0000000000255BA4 string=0x0000000000255BA8 "h"
 *   insn=0x0000000000255BA8 string=0x0000000000255BAC "H"
 *   insn=0x0000000000255BAC string=0x0000000000255BB0 "a"
 *   insn=0x0000000000255BB0 string=0x0000000000255BB4 "h"
 *   insn=0x0000000000255BB4 string=0x0000000000583734 "o"
 *   insn=0x0000000000255BB8 string=0x0000000000255BBC " 8 "
 *   insn=0x0000000000255BBC string=0x0000000000255BC0 "`"
 *   insn=0x0000000000255BC4 string=0x0000000000255BC8 "e"
 *   insn=0x0000000000255BC8 string=0x0000000000255BCC "h"
 *   insn=0x0000000000255BE8 string=0x0000000000255BEC ""
 *   insn=0x0000000000255BEC string=0x0000000000255BF0 "Q@"
 *   insn=0x0000000000255BF4 string=0x0000000000255BF8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SceneObject *__fastcall Caver::BreakableObjectComponent::Break(Caver::SceneObject *this)
{
  __int64 v1; // x19
  Caver::SceneObject *v2; // x20
  int v3; // w8
  Caver::SceneObjectLib *v4; // x0
  int v5; // w8
  void *v6; // x0
  __int64 v7; // x8
  Caver::SceneObject *v8; // x20
  Caver::SceneObjectLib *v9; // x9
  int v10; // w9
  _DWORD *v11; // x8
  Caver::ShatterComponent *v12; // x20
  Caver::ModelComponent *v13; // x0
  Caver::SoundEffectComponent *v14; // x0
  Caver::SceneObject *v15; // x2
  _QWORD *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x8
  Caver::ItemDropComponent *v19; // x20
  int v20; // w8
  unsigned int *v21; // x8
  int v22; // w9
  Caver::SceneObjectLib *v23; // [xsp+38h] [xbp-58h] BYREF
  _QWORD *v24; // [xsp+40h] [xbp-50h]
  Caver::SceneObject *v25; // [xsp+50h] [xbp-40h] BYREF
  _QWORD v26[2]; // [xsp+60h] [xbp-30h] BYREF

  v1 = (__int64)this;
  v26[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_BYTE *)this + 112) )
    return this;
  *((_BYTE *)this + 112) = 1;
  v2 = (Caver::SceneObject *)operator new(0x128u);
  Caver::SceneObject::SceneObject(v2);
  v3 = *((_DWORD *)v2 + 2);
  v25 = v2;
  *((_DWORD *)v2 + 2) = v3 + 1;
  sub_566BB8((int)v26, "effect_shatter");
  Caver::ObjectLibrary::TemplateForName();
  Caver::SceneObject::InitWithTemplate(v2);
  v4 = v23;
  if ( v23 )
  {
    v5 = *((_DWORD *)v23 + 2) - 1;
    *((_DWORD *)v23 + 2) = v5;
    if ( !v5 )
      (*(void (__fastcall **)(Caver::SceneObjectLib *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v6 = (void *)(v26[0] - 24LL);
  if ( (__int64 *)(v26[0] - 24LL) != &qword_6FD2E0 )
  {
    v21 = (unsigned int *)(v26[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v22 = __ldaxr(v21);
      while ( __stlxr(v22 - 1, v21) );
    }
    else
    {
      v22 = (*v21)--;
    }
    if ( v22 <= 0 )
      operator delete(v6);
  }
  v7 = *(_QWORD *)(v1 + 40);
  v8 = v25;
  v9 = *(Caver::SceneObjectLib **)(v7 + 112);
  LODWORD(v7) = *(_DWORD *)(v7 + 120);
  v23 = v9;
  LODWORD(v24) = v7;
  Caver::Vector2::Vector2((Caver::Vector2 *)v26, (const Caver::Vector3 *)&v23);
  if ( fabsf(*(float *)v26 - *((float *)v8 + 28)) > 0.0001 )
  {
    v10 = HIDWORD(v26[0]);
    v11 = (_DWORD *)((char *)v8 + 116);
    goto LABEL_11;
  }
  v11 = (_DWORD *)((char *)v8 + 116);
  if ( fabsf(*((float *)v26 + 1) - *((float *)v8 + 29)) > 0.0001 )
  {
    v10 = HIDWORD(v26[0]);
LABEL_11:
    *((_DWORD *)v8 + 28) = v26[0];
    *v11 = v10;
    if ( !*((_BYTE *)v8 + 180) )
    {
      Caver::SceneObject::RegisterForWorldBoundsUpdate(v8);
      *((_BYTE *)v8 + 180) = 1;
    }
  }
  *((_DWORD *)v8 + 30) = (_DWORD)v24;
  (*(void (__fastcall **)(_QWORD, Caver::SceneObject **))(**(_QWORD **)(*(_QWORD *)(v1 + 40) + 32LL) + 40LL))(
    *(_QWORD *)(*(_QWORD *)(v1 + 40) + 32LL),
    &v25);
  v12 = (Caver::ShatterComponent *)Caver::SceneObject::ComponentWithInterface(
                                     v25,
                                     (__int64)Caver::ShatterComponent::Interface);
  v13 = (Caver::ModelComponent *)Caver::SceneObject::ComponentWithInterface(
                                   *(Caver::SceneObject **)(v1 + 40),
                                   (__int64)Caver::ModelComponent::Interface);
  Caver::ShatterComponent::ShatterModel(v12, v13, 1);
  v14 = (Caver::SoundEffectComponent *)Caver::SceneObject::ComponentWithInterface(
                                         *(Caver::SceneObject **)(v1 + 40),
                                         (__int64)Caver::SoundEffectComponent::Interface);
  if ( v14 )
    Caver::SoundEffectComponent::Play(v14);
  if ( *(_QWORD *)(v1 + 152) )
  {
    Caver::Component::NewProgramStateForProgram(
      (__int64 *)&v23,
      (Caver::Component *)v1,
      (const Caver::Program *)(v1 + 128));
    if ( v23 )
    {
      Caver::SceneObjectLib::PushSceneObject(v23, *(Caver::ProgramState **)(v1 + 40), v15);
      Caver::ProgramState::Execute(v23, 1);
    }
    v16 = v24;
    if ( v24 )
    {
      v17 = v24[1] - 1LL;
      v24[1] = v17;
      if ( !v17 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
        v18 = v16[2] - 1LL;
        v16[2] = v18;
        if ( !v18 )
          (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
      }
    }
  }
  v19 = (Caver::ItemDropComponent *)Caver::SceneObject::ComponentWithInterface(
                                      *(Caver::SceneObject **)(v1 + 40),
                                      (__int64)Caver::ItemDropComponent::Interface);
  if ( !v19 )
  {
    v19 = (Caver::ItemDropComponent *)operator new(0xB0u);
    Caver::ItemDropComponent::ItemDropComponent(v19);
    *((_BYTE *)v19 + 113) = 1;
    Caver::SceneObject::AddComponent(*(Caver::SceneObject **)(v1 + 40), v19);
  }
  Caver::ItemDropComponent::Trigger(v19);
  *(_BYTE *)(*(_QWORD *)(v1 + 40) + 232LL) = 1;
  this = v25;
  if ( v25 )
  {
    v20 = *((_DWORD *)v25 + 2) - 1;
    *((_DWORD *)v25 + 2) = v20;
    if ( !v20 )
      return (Caver::SceneObject *)(*(__int64 (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)this + 8LL))(this);
  }
  return this;
}


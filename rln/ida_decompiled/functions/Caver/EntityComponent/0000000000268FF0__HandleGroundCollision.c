/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000268FF0
 * Mangled: _ZN5Caver15EntityComponent21HandleGroundCollisionERKNS_20CollisionMessageDataE
 * Demangled: Caver::EntityComponent::HandleGroundCollision(Caver::CollisionMessageData const&)
 *
 * Callers: 1
 *   0x00000000001FC2B0  Caver::EntityComponent::HandleGroundCollision(Caver::CollisionMessageData const&)
 *
 * Callees: 18
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x00000000001FD310  Caver::ParticleEmitterComponent::StartEmitting(void)
 *   0x00000000001FE040  Caver::PhysicsObjectState::HandleGroundCollision(Caver::CollisionMessageData const&)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x00000000002012F0  Caver::ObjectLinkControllerComponent::LinkToObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000022B880  Caver::ObjectLinkControllerComponent::className(void)
 *   0x0000000000269C04  Caver::EntityComponent::className(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 132
 *   insn=0x0000000000269004 string=0x0000000000269008 "V"
 *   insn=0x0000000000269010 string=0x0000000000269014 "`"
 *   insn=0x000000000026901C string=0x0000000000269020 "T"
 *   insn=0x0000000000269024 string=0x0000000000269028 "`"
 *   insn=0x0000000000269028 string=0x000000000026902C "5D"
 *   insn=0x0000000000269034 string=0x0000000000269038 "`"
 *   insn=0x0000000000269038 string=0x000000000026903C "  "
 *   insn=0x0000000000269040 string=0x0000000000269044 "a"
 *   insn=0x0000000000269040 string=0x00000000002692B0 "`"
 *   insn=0x0000000000269054 string=0x0000000000269058 "$"
 *   insn=0x0000000000269064 string=0x0000000000269068 "-"
 *   insn=0x0000000000269068 string=0x000000000026906C "b"
 *   insn=0x0000000000269068 string=0x000000000026908C "\t"
 *   insn=0x0000000000269070 string=0x0000000000269074 "#"
 *   insn=0x0000000000269074 string=0x0000000000269078 "A8!"
 *   insn=0x0000000000269078 string=0x000000000026907C "!"
 *   insn=0x000000000026907C string=0x0000000000269080 "  #"
 *   insn=0x0000000000269080 string=0x0000000000269084 "M"
 *   insn=0x0000000000269098 string=0x000000000026909C "h"
 *   insn=0x000000000026909C string=0x00000000002690A0 "h"
 *   insn=0x00000000002690A0 string=0x00000000002690A4 ""
 *   insn=0x00000000002690A0 string=0x00000000002690AC "h"
 *   insn=0x00000000002690A8 string=0x000000000026929C "`"
 *   insn=0x00000000002690AC string=0x00000000002690B0 ""
 *   insn=0x00000000002690B8 string=0x0000000000587F57 "wsmoke"
 *   insn=0x00000000002690E4 string=0x00000000002690E8 ")"
 *   insn=0x00000000002690FC string=0x0000000000269294 "h"
 *   insn=0x0000000000269100 string=0x0000000000269104 "71"
 *   insn=0x0000000000269104 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000269110 string=0x00000000001FAB30 "0'"
 *   insn=0x0000000000269114 string=0x0000000000269118 ""
 *   insn=0x000000000026911C string=0x0000000000269120 "`"
 *   insn=0x0000000000269120 string=0x0000000000269124 "u"
 *   insn=0x0000000000269124 string=0x0000000000269128 " "
 *   insn=0x0000000000269128 string=0x000000000026912C "@"
 *   insn=0x000000000026912C string=0x0000000000269130 ""
 *   insn=0x0000000000269130 string=0x0000000000269134 ""
 *   insn=0x0000000000269138 string=0x000000000026913C ""
 *   insn=0x000000000026913C string=0x0000000000269140 ""
 *   insn=0x0000000000269144 string=0x0000000000269148 "u"
 *   insn=0x0000000000269150 string=0x0000000000269154 "32"
 *   insn=0x0000000000269154 string=0x00000000001F5A20 "P'"
 *   insn=0x0000000000269158 string=0x000000000026915C "u"
 *   insn=0x0000000000269178 string=0x000000000026917C "@( "
 *   insn=0x000000000026918C string=0x0000000000269190 "b(""
 *   insn=0x0000000000269198 string=0x000000000026919C "C8#"
 *   insn=0x000000000026919C string=0x00000000002691A0 "c"
 *   insn=0x00000000002691A0 string=0x00000000002691A4 "` !"
 *   insn=0x00000000002691A4 string=0x00000000002691A8 "I"
 *   insn=0x00000000002691A8 string=0x00000000002691D0 "h"
 *   insn=0x00000000002691BC string=0x00000000001F5DA0 "P'"
 *   insn=0x00000000002691C4 string=0x00000000002691C8 "u"
 *   insn=0x00000000002691D0 string=0x00000000002691D4 "y@"
 *   insn=0x00000000002691D8 string=0x00000000002691DC ""
 *   insn=0x00000000002691DC string=0x00000000002691E0 "\tq@"
 *   insn=0x00000000002691E4 string=0x00000000002691E8 " "
 *   insn=0x00000000002691E8 string=0x00000000002691EC "`"
 *   insn=0x00000000002691F0 string=0x00000000002691F4 "!"
 *   insn=0x0000000000269208 string=0x000000000026920C " ( "
 *   insn=0x0000000000269210 string=0x0000000000269214 "|"
 *   insn=0x0000000000269214 string=0x0000000000269218 "h"
 *   insn=0x0000000000269220 string=0x0000000000269224 "\t\t@"
 *   insn=0x0000000000269224 string=0x0000000000269228 ")"
 *   insn=0x0000000000269228 string=0x000000000026922C "\t\t"
 *   insn=0x0000000000269230 string=0x0000000000269234 "/`"
 *   insn=0x000000000026923C string=0x0000000000269240 "@"
 *   insn=0x000000000026923C string=0x000000000026925C "`"
 *   insn=0x0000000000269240 string=0x0000000000269244 ""
 *   insn=0x0000000000269244 string=0x0000000000269248 ""
 *   insn=0x000000000026924C string=0x0000000000269250 ""
 *   insn=0x0000000000269250 string=0x0000000000269254 ""
 *   insn=0x0000000000269260 string=0x0000000000269264 "!"
 *   insn=0x0000000000269268 string=0x000000000026926C "`"
 *   insn=0x0000000000269274 string=0x0000000000269278 "@"
 *   insn=0x0000000000269278 string=0x000000000026927C ""
 *   insn=0x000000000026927C string=0x0000000000269280 ""
 *   insn=0x0000000000269284 string=0x0000000000269288 ""
 *   insn=0x0000000000269288 string=0x000000000026928C ""
 *   insn=0x00000000002692A0 string=0x00000000001FD310 "0'"
 *   insn=0x00000000002692A8 string=0x00000000002692AC "h"
 *   insn=0x00000000002692B4 string=0x00000000002692B8 "e"
 *   insn=0x00000000002692B8 string=0x00000000002692BC "`"
 *   insn=0x00000000002692BC string=0x00000000002692C0 "  "
 *   insn=0x00000000002692C0 string=0x00000000002692C4 ""
 *   insn=0x00000000002692C4 string=0x00000000002692C8 "hBB9"
 *   insn=0x00000000002692CC string=0x00000000002692D0 "h"
 *   insn=0x00000000002692D0 string=0x00000000002692D4 "\t9@"
 *   insn=0x00000000002692D4 string=0x00000000002692D8 "y@"
 *   insn=0x00000000002692D8 string=0x00000000002692DC "i"
 *   insn=0x00000000002692DC string=0x00000000002692E0 "h"
 *   insn=0x00000000002692EC string=0x00000000002692F0 "A"
 *   insn=0x000000000026930C string=0x0000000000269310 ")=G"
 *   insn=0x0000000000269310 string=0x0000000000269314 "!"
 *   insn=0x0000000000269318 string=0x000000000026931C "\t"
 *   insn=0x0000000000269318 string=0x0000000000269330 "\t"
 *   insn=0x000000000026931C string=0x0000000000269320 "*"
 *   insn=0x0000000000269320 string=0x0000000000269324 "\n"
 *   insn=0x000000000026932C string=0x000000000026933C "?"
 *   insn=0x0000000000269330 string=0x0000000000269334 "*"
 *   insn=0x0000000000269334 string=0x0000000000269338 "\n"
 *   insn=0x0000000000269358 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000269368 string=0x000000000026936C ""
 *   insn=0x000000000026936C string=0x0000000000269370 "\t\t@"
 *   insn=0x0000000000269370 string=0x0000000000269374 ")"
 *   insn=0x0000000000269374 string=0x0000000000269378 "\t\t"
 *   insn=0x000000000026937C string=0x0000000000269380 "\t"
 *   insn=0x0000000000269380 string=0x0000000000269384 ")"
 *   insn=0x0000000000269388 string=0x000000000026938C " "
 *   insn=0x000000000026938C string=0x0000000000269390 "'"
 *   insn=0x00000000002693A0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002693A4 string=0x00000000002693A8 "`"
 *   insn=0x00000000002693A8 string=0x00000000002693AC ")"
 *   insn=0x00000000002693A8 string=0x0000000000269434 "@"
 *   insn=0x00000000002693B4 string=0x00000000002693B8 "J"
 *   insn=0x00000000002693BC string=0x00000000002693C0 "(a"
 *   insn=0x00000000002693C4 string=0x00000000002693C8 "@"
 *   insn=0x00000000002693CC string=0x00000000002693D0 "J=G"
 *   insn=0x00000000002693D0 string=0x00000000002693D4 ")!"
 *   insn=0x00000000002693D8 string=0x00000000002693DC "*"
 *   insn=0x00000000002693D8 string=0x0000000000269408 "*"
 *   insn=0x00000000002693DC string=0x00000000002693E0 "K"
 *   insn=0x00000000002693E0 string=0x00000000002693E4 "+"
 *   insn=0x00000000002693E8 string=0x00000000002693EC "_"
 *   insn=0x0000000000269400 string=0x0000000000269404 "0a"
 *   insn=0x0000000000269408 string=0x000000000026940C "K"
 *   insn=0x000000000026940C string=0x0000000000269410 "+"
 *   insn=0x0000000000269410 string=0x0000000000269414 "_"
 *   insn=0x0000000000269418 string=0x000000000026941C ""
 *   insn=0x0000000000269434 string=0x0000000000269438 ""
 *   insn=0x0000000000269438 string=0x000000000026943C ""
 *   insn=0x0000000000269440 string=0x0000000000269444 ""
 *   insn=0x0000000000269444 string=0x0000000000269448 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::EntityComponent::HandleGroundCollision(__int64 a1, __int64 *a2)
{
  float v4; // s0
  float v5; // s0
  float v6; // s1
  float v7; // s4
  _BOOL4 v8; // w8
  __int64 v9; // x8
  void *v10; // x0
  Caver::SceneObject *v11; // x21
  _DWORD *v12; // x0
  int v13; // w8
  __int64 v14; // x0
  __int64 v15; // x21
  float v16; // s0
  float v17; // s2
  int v18; // w8
  __int64 v19; // x0
  int v20; // w8
  _DWORD *v21; // x8
  int v22; // w8
  __int64 v23; // x0
  int v24; // w8
  __int64 v25; // x8
  __int64 v26; // x9
  unsigned int *v27; // x8
  int v28; // w9
  _DWORD *v29; // [xsp+0h] [xbp-60h]
  __int64 v30; // [xsp+8h] [xbp-58h] BYREF
  float v31; // [xsp+10h] [xbp-50h]
  __int64 v32; // [xsp+20h] [xbp-40h]
  __int64 v33; // [xsp+28h] [xbp-38h]

  v33 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::PhysicsObjectState::HandleGroundCollision();
  v4 = *(float *)(a1 + 128);
  if ( v4 < 0.1 )
  {
    v5 = *(float *)(a1 + 140);
    if ( v5 <= 0.0 )
      goto LABEL_29;
    v6 = *(float *)(a1 + 176);
    v7 = fabsf(v6);
    v8 = v7 > 300.0;
    if ( v7 > 115.0 && fabsf(*(float *)(a1 + 212) - v6) > 50.0 )
      v8 = 1;
    if ( v5 <= 0.5 || !v8 )
      goto LABEL_29;
    v9 = *(_QWORD *)(a1 + 280);
    if ( v9 && *(_QWORD *)(v9 + 32) )
      goto LABEL_28;
    sub_566BB8((int)&v30, "wsmoke");
    Caver::ObjectLibrary::TemplateForName();
    v10 = (void *)(v30 - 24);
    if ( (__int64 *)(v30 - 24) == &qword_6FD2E0 )
      goto LABEL_11;
    v27 = (unsigned int *)(v30 - 8);
    if ( &pthread_create )
    {
      do
        v28 = __ldaxr(v27);
      while ( __stlxr(v28 - 1, v27) );
    }
    else
    {
      v28 = (*v27)--;
    }
    if ( v28 > 0 )
    {
LABEL_11:
      if ( !v32 )
        goto LABEL_27;
    }
    else
    {
      operator delete(v10);
      if ( !v32 )
        goto LABEL_27;
    }
    v11 = (Caver::SceneObject *)operator new(0x128u);
    Caver::SceneObject::SceneObject(v11);
    ++*((_DWORD *)v11 + 2);
    v12 = *(_DWORD **)(a1 + 280);
    *(_QWORD *)(a1 + 280) = v11;
    if ( v12 )
    {
      v13 = v12[2] - 1;
      v12[2] = v13;
      if ( !v13 )
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 8LL))(v12);
        v11 = *(Caver::SceneObject **)(a1 + 280);
      }
    }
    Caver::SceneObject::InitWithTemplate(v11);
    v14 = *a2;
    v15 = *(_QWORD *)(a1 + 280);
    v16 = *(float *)(*a2 + 360) + (float)(*(float *)(*a2 + 368) * 0.5);
    v17 = *(float *)(*a2 + 364) + 5.0;
    if ( fabsf(v16 - *(float *)(v15 + 112)) > 0.0001 || fabsf(v17 - *(float *)(v15 + 116)) > 0.0001 )
    {
      v18 = *(unsigned __int8 *)(v15 + 180);
      *(float *)(v15 + 112) = v16;
      *(float *)(v15 + 116) = v17;
      if ( !v18 )
      {
        Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v15);
        *(_BYTE *)(v15 + 180) = 1;
        v15 = *(_QWORD *)(a1 + 280);
        v14 = *a2;
      }
    }
    *(_DWORD *)(v15 + 120) = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 120LL);
    (*(void (__fastcall **)(__int64 *__return_ptr))(*(_QWORD *)v14 + 224LL))(&v30);
    v19 = Caver::SceneObject::ComponentWithInterface(
            *(Caver::SceneObject **)(a1 + 280),
            (__int64)Caver::ObjectLinkControllerComponent::Interface);
    v20 = HIDWORD(v30);
    *(float *)(v19 + 236) = *(float *)&v30 + (float)(v31 * 0.5);
    *(_DWORD *)(v19 + 240) = v20;
    *(_DWORD *)(v19 + 244) = 0;
    v21 = *(_DWORD **)(a1 + 40);
    v29 = v21;
    if ( v21 )
      ++v21[2];
    Caver::ObjectLinkControllerComponent::LinkToObject();
    if ( v29 )
    {
      v22 = v29[2] - 1;
      v29[2] = v22;
      if ( !v22 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v29 + 8LL))(v29);
    }
    *(_QWORD *)(a1 + 288) = Caver::SceneObject::ComponentWithInterface(
                              *(Caver::SceneObject **)(a1 + 280),
                              (__int64)Caver::ParticleEmitterComponent::Interface);
    v23 = v32;
    if ( v32 )
    {
      v24 = *(_DWORD *)(v32 + 8) - 1;
      *(_DWORD *)(v32 + 8) = v24;
      if ( !v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
    }
LABEL_27:
    if ( !*(_QWORD *)(a1 + 280) )
    {
LABEL_29:
      v4 = *(float *)(a1 + 128);
      goto LABEL_30;
    }
LABEL_28:
    Caver::ParticleEmitterComponent::StartEmitting(*(Caver::ParticleEmitterComponent **)(a1 + 288));
    *(_DWORD *)(a1 + 300) = 0;
    *(_BYTE *)(a1 + 296) = 1;
    goto LABEL_29;
  }
LABEL_30:
  if ( v4 < 0.1 && *(float *)(a1 + 140) > 0.0 && !*(_BYTE *)(a1 + 144) )
  {
    v25 = *(_QWORD *)(a1 + 40);
    v26 = *(_QWORD *)(v25 + 112);
    LODWORD(v25) = *(_DWORD *)(v25 + 120);
    *(_QWORD *)(a1 + 264) = v26;
    *(_DWORD *)(a1 + 272) = v25;
  }
}


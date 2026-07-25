/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029A028
 * Mangled: _ZN5Caver31MonsterDeathControllerComponent11KillMonsterERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::MonsterDeathControllerComponent::KillMonster(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 1
 *   0x0000000000201450  Caver::MonsterDeathControllerComponent::KillMonster(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callees: 22
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5990  Caver::SceneObject::WorldPointFromLocalPoint(Caver::Vector2 const&)
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7100  Caver::MonsterDeathControllerComponent::FindOriginAndRadius(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F81D0  Caver::SceneObject::SetAlwaysActive(bool)
 *   0x00000000001F8630  Caver::ShatterComponent::ShatterModel(Caver::ModelComponent *,bool)
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x00000000001FD0F0  Caver::CollisionShapeComponent::SetEnabled(bool)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000215678  Caver::ModelComponent::Interface(void)
 *   0x0000000000215A90  Caver::CollisionShapeComponent::Interface(void)
 *   0x00000000002560E8  Caver::ShatterComponent::Interface(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 194
 *   insn=0x000000000029A040 string=0x000000000029A044 "W"
 *   insn=0x000000000029A054 string=0x000000000029A058 "h"
 *   insn=0x000000000029A05C string=0x000000000029A060 "\t\t@"
 *   insn=0x000000000029A060 string=0x000000000029A064 ")"
 *   insn=0x000000000029A064 string=0x000000000029A068 "\t\t"
 *   insn=0x000000000029A074 string=0x000000000029A078 "@"
 *   insn=0x000000000029A078 string=0x000000000029A07C ""
 *   insn=0x000000000029A07C string=0x000000000029A080 ""
 *   insn=0x000000000029A084 string=0x000000000029A088 ""
 *   insn=0x000000000029A088 string=0x000000000029A08C ""
 *   insn=0x000000000029A098 string=0x000000000029A09C "Mx"
 *   insn=0x000000000029A09C string=0x000000000029A0A0 "h"
 *   insn=0x000000000029A09C string=0x00000000001F81D0 "0'"
 *   insn=0x000000000029A0A4 string=0x000000000029A0A8 "I"
 *   insn=0x000000000029A0A8 string=0x000000000029A0AC "("
 *   insn=0x000000000029A0B8 string=0x000000000029A0BC "!"
 *   insn=0x000000000029A0BC string=0x000000000029A0C0 "  ("
 *   insn=0x000000000029A0C4 string=0x000000000029A0C8 "\nu@"
 *   insn=0x000000000029A0CC string=0x000000000029A0D0 "\t"
 *   insn=0x000000000029A0D8 string=0x000000000029A0DC ""MG"
 *   insn=0x000000000029A0DC string=0x000000000029A0E0 ""8""
 *   insn=0x000000000029A0E0 string=0x000000000029A0E4 "B"
 *   insn=0x000000000029A0E4 string=0x000000000029A0E8 "@ ("
 *   insn=0x000000000029A0EC string=0x000000000029A0F0 "*"
 *   insn=0x000000000029A0EC string=0x000000000029A11C "\ty@"
 *   insn=0x000000000029A0F4 string=0x000000000029A0F8 "*"
 *   insn=0x000000000029A104 string=0x000000000029A108 "&o"
 *   insn=0x000000000029A108 string=0x00000000001F5DA0 "P'"
 *   insn=0x000000000029A114 string=0x000000000029A118 "h"
 *   insn=0x000000000029A124 string=0x000000000029A128 ""
 *   insn=0x000000000029A128 string=0x000000000029A12C ""
 *   insn=0x000000000029A138 string=0x000000000029A13C ")"
 *   insn=0x000000000029A150 string=0x000000000029A154 "@"
 *   insn=0x000000000029A154 string=0x000000000029A158 ""
 *   insn=0x000000000029A158 string=0x000000000029A15C ""
 *   insn=0x000000000029A160 string=0x000000000029A164 ""
 *   insn=0x000000000029A164 string=0x000000000029A168 ""
 *   insn=0x000000000029A174 string=0x000000000029A178 "a""
 *   insn=0x000000000029A174 string=0x00000000001F7100 "0'"
 *   insn=0x000000000029A178 string=0x000000000029A17C "`"
 *   insn=0x000000000029A17C string=0x000000000029A180 "!0D"
 *   insn=0x000000000029A184 string=0x000000000029A188 "`"
 *   insn=0x000000000029A190 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000029A194 string=0x000000000029A198 "f"
 *   insn=0x000000000029A198 string=0x00000000001FAB30 "0'"
 *   insn=0x000000000029A1A0 string=0x000000000029A1A4 ""
 *   insn=0x000000000029A1A8 string=0x000000000029A1AC "h"
 *   insn=0x000000000029A1AC string=0x000000000029A1B0 ""
 *   insn=0x000000000029A1B4 string=0x000000000029A1B8 "a"
 *   insn=0x000000000029A1B8 string=0x00000000005877E9 "effect_shatter"
 *   insn=0x000000000029A1C4 string=0x000000000029A1C8 "|2"
 *   insn=0x000000000029A1D8 string=0x000000000029A1DC "i"
 *   insn=0x000000000029A1E8 string=0x00000000001F5A20 "P'"
 *   insn=0x000000000029A1F0 string=0x000000000029A1F4 "@"
 *   insn=0x000000000029A1F4 string=0x000000000029A1F8 ""
 *   insn=0x000000000029A1F8 string=0x000000000029A1FC ""
 *   insn=0x000000000029A200 string=0x000000000029A204 ""
 *   insn=0x000000000029A204 string=0x000000000029A208 ""
 *   insn=0x000000000029A210 string=0x000000000029A214 "I""
 *   insn=0x000000000029A214 string=0x000000000029A218 ")"
 *   insn=0x000000000029A224 string=0x000000000029A340 "I""
 *   insn=0x000000000029A230 string=0x000000000029A234 "g"
 *   insn=0x000000000029A240 string=0x000000000029A244 "!"
 *   insn=0x000000000029A244 string=0x000000000029A248 "  ("
 *   insn=0x000000000029A254 string=0x000000000029A258 "\t"
 *   insn=0x000000000029A264 string=0x000000000029A268 ""8""
 *   insn=0x000000000029A268 string=0x000000000029A26C "B"
 *   insn=0x000000000029A26C string=0x000000000029A270 "@ ("
 *   insn=0x000000000029A270 string=0x000000000029A274 "I"
 *   insn=0x000000000029A274 string=0x000000000029A278 ")"
 *   insn=0x000000000029A27C string=0x000000000029A280 "\t"
 *   insn=0x000000000029A2A0 string=0x000000000029A2A4 "h"
 *   insn=0x000000000029A2A8 string=0x000000000029A2AC ""
 *   insn=0x000000000029A2AC string=0x000000000029A2B0 ""
 *   insn=0x000000000029A2BC string=0x000000000029A2C0 "a""
 *   insn=0x000000000029A2C0 string=0x000000000029A2C4 "!"
 *   insn=0x000000000029A2CC string=0x000000000029A2D0 "`"
 *   insn=0x000000000029A2D0 string=0x000000000029A2D4 "a""
 *   insn=0x000000000029A2D4 string=0x000000000029A2D8 "!0D"
 *   insn=0x000000000029A2EC string=0x00000000001F8630 "0'"
 *   insn=0x000000000029A2F4 string=0x000000000029A2F8 "@"
 *   insn=0x000000000029A2F8 string=0x000000000029A2FC ""
 *   insn=0x000000000029A2FC string=0x000000000029A300 ""
 *   insn=0x000000000029A304 string=0x000000000029A308 ""
 *   insn=0x000000000029A308 string=0x000000000029A30C ""
 *   insn=0x000000000029A31C string=0x000000000029A320 "!"
 *   insn=0x000000000029A340 string=0x000000000029A344 ")=G"
 *   insn=0x000000000029A344 string=0x000000000029A348 "!"
 *   insn=0x000000000029A34C string=0x000000000029A350 "\t"
 *   insn=0x000000000029A34C string=0x000000000029A364 "\t"
 *   insn=0x000000000029A350 string=0x000000000029A354 "*"
 *   insn=0x000000000029A354 string=0x000000000029A358 "\n"
 *   insn=0x000000000029A360 string=0x000000000029A370 "?"
 *   insn=0x000000000029A364 string=0x000000000029A368 "*"
 *   insn=0x000000000029A368 string=0x000000000029A36C "\n"
 *   insn=0x000000000029A378 string=0x000000000029A37C "\n@"
 *   insn=0x000000000029A384 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000029A38C string=0x000000000029A390 "("
 *   insn=0x000000000029A390 string=0x000000000029A394 "\t\t@"
 *   insn=0x000000000029A394 string=0x000000000029A398 ")"
 *   insn=0x000000000029A398 string=0x000000000029A39C "\t\t"
 *   insn=0x000000000029A3A0 string=0x000000000029A3A4 "\t"
 *   insn=0x000000000029A3A4 string=0x000000000029A3A8 ")"
 *   insn=0x000000000029A3AC string=0x000000000029A3B0 " "
 *   insn=0x000000000029A3B0 string=0x000000000029A3B4 ""
 *   insn=0x000000000029A3C4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000029A3C8 string=0x000000000029A3CC ">"
 *   insn=0x000000000029A3D4 string=0x000000000029A3D8 "I""
 *   insn=0x000000000029A3D8 string=0x000000000029A3DC ")"
 *   insn=0x000000000029A3E8 string=0x000000000029A3EC "I""
 *   insn=0x000000000029A3EC string=0x000000000029A3F0 ")=G"
 *   insn=0x000000000029A3F0 string=0x000000000029A3F4 "!"
 *   insn=0x000000000029A3F8 string=0x000000000029A3FC "\t"
 *   insn=0x000000000029A3F8 string=0x000000000029A428 "\t"
 *   insn=0x000000000029A3FC string=0x000000000029A400 "*"
 *   insn=0x000000000029A400 string=0x000000000029A404 "\n"
 *   insn=0x000000000029A408 string=0x000000000029A40C "?"
 *   insn=0x000000000029A40C string=0x000000000029A410 "L"
 *   insn=0x000000000029A420 string=0x000000000029A480 "@"
 *   insn=0x000000000029A428 string=0x000000000029A42C "*"
 *   insn=0x000000000029A42C string=0x000000000029A430 "\n"
 *   insn=0x000000000029A430 string=0x000000000029A434 "?"
 *   insn=0x000000000029A448 string=0x000000000029A44C "\t\t@"
 *   insn=0x000000000029A44C string=0x000000000029A450 ")"
 *   insn=0x000000000029A450 string=0x000000000029A454 "\t\t"
 *   insn=0x000000000029A454 string=0x000000000029A458 "!"
 *   insn=0x000000000029A458 string=0x000000000029A45C "\t"
 *   insn=0x000000000029A45C string=0x000000000029A460 ")"
 *   insn=0x000000000029A464 string=0x000000000029A468 " "
 *   insn=0x000000000029A480 string=0x000000000029A484 ""
 *   insn=0x000000000029A484 string=0x000000000029A488 ""
 *   insn=0x000000000029A48C string=0x000000000029A490 ""
 *   insn=0x000000000029A490 string=0x000000000029A494 ""
 *   insn=0x000000000029A49C string=0x000000000029A4A0 "\t"
 *   insn=0x000000000029A4CC string=0x000000000029A4D0 "W"
 *   insn=0x000000000029A4D8 string=0x000000000029A4DC "\n"
 *   insn=0x000000000029A4E0 string=0x000000000029A4E4 "h"
 *   insn=0x000000000029A4E8 string=0x000000000029A4EC "q@"
 *   insn=0x000000000029A4EC string=0x000000000029A4F0 ""
 *   insn=0x000000000029A4F0 string=0x000000000029A4F4 "i"
 *   insn=0x000000000029A4F4 string=0x000000000029A4F8 "j^@"
 *   insn=0x000000000029A4F8 string=0x000000000029A4FC "k"
 *   insn=0x000000000029A4FC string=0x000000000029A500 "k""
 *   insn=0x000000000029A500 string=0x000000000029A504 "i"
 *   insn=0x000000000029A504 string=0x000000000029A508 "XeL"
 *   insn=0x000000000029A50C string=0x000000000029A510 "@"
 *   insn=0x000000000029A510 string=0x000000000029A514 "J"
 *   insn=0x000000000029A514 string=0x000000000029A518 "T""
 *   insn=0x000000000029A514 string=0x00000000005846C0 "ff"
 *   insn=0x000000000029A518 string=0x000000000029A51C "H"
 *   insn=0x000000000029A530 string=0x000000000029A534 ";1"
 *   insn=0x000000000029A538 string=0x000000000029A53C "\n"
 *   insn=0x000000000029A544 string=0x000000000029A548 ""
 *   insn=0x000000000029A548 string=0x000000000029A54C "Q@"
 *   insn=0x000000000029A564 string=0x00000000001FD0F0 "0'"
 *   insn=0x000000000029A56C string=0x000000000029A570 "\tq@"
 *   insn=0x000000000029A574 string=0x000000000029A578 " "
 *   insn=0x000000000029A580 string=0x000000000029A584 " "
 *   insn=0x000000000029A590 string=0x000000000029A594 "6"
 *   insn=0x000000000029A594 string=0x000000000029A598 "a"
 *   insn=0x000000000029A594 string=0x000000000029A5B8 "`^@"
 *   insn=0x000000000029A59C string=0x000000000029A5A0 "c"
 *   insn=0x000000000029A5A0 string=0x000000000029A5A4 "!!"
 *   insn=0x000000000029A5A4 string=0x000000000029A5A8 "B""
 *   insn=0x000000000029A5A8 string=0x000000000029A5AC "!(""
 *   insn=0x000000000029A5AC string=0x000000000029A5B0 "` !"
 *   insn=0x000000000029A5C0 string=0x000000000029A5C4 "`B\t"
 *   insn=0x000000000029A5C8 string=0x000000000029A5CC "h"
 *   insn=0x000000000029A5C8 string=0x00000000001F5990 "P'"
 *   insn=0x000000000029A5D4 string=0x000000000029A5D8 "y@"
 *   insn=0x000000000029A5D8 string=0x000000000029A5DC "i"
 *   insn=0x000000000029A5DC string=0x000000000029A5E0 "h"
 *   insn=0x000000000029A5E4 string=0x000000000029A5E8 "\tq@"
 *   insn=0x000000000029A5EC string=0x000000000029A5F0 " "
 *   insn=0x000000000029A5FC string=0x000000000029A600 "\tq@"
 *   insn=0x000000000029A604 string=0x000000000029A608 " "
 *   insn=0x000000000029A610 string=0x000000000029A614 "\tq@"
 *   insn=0x000000000029A614 string=0x000000000029A618 "`! "
 *   insn=0x000000000029A624 string=0x000000000029A628 " "
 *   insn=0x000000000029A630 string=0x000000000029A644 "v^@"
 *   insn=0x000000000029A638 string=0x000000000029A63C " "
 *   insn=0x000000000029A658 string=0x000000000029A65C "`"
 *   insn=0x000000000029A660 string=0x000000000029A664 "\tq@"
 *   insn=0x000000000029A668 string=0x000000000029A66C " "
 *   insn=0x000000000029A67C string=0x000000000029A680 "\tq@"
 *   insn=0x000000000029A688 string=0x000000000029A68C "+( "
 *   insn=0x000000000029A68C string=0x000000000029A690 " "
 *   insn=0x000000000029A6B0 string=0x000000000029A6B4 "h"
 *   insn=0x000000000029A6B8 string=0x000000000029A6BC "y@"
 *   insn=0x000000000029A6BC string=0x000000000029A6C0 "iF"
 *   insn=0x000000000029A6C0 string=0x000000000029A6C4 "h"
 *   insn=0x000000000029A6CC string=0x000000000029A6D0 "?"
 *   insn=0x000000000029A6D0 string=0x000000000029A6D4 "a"
 *   insn=0x000000000029A6E0 string=0x000000000029A6E4 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SceneObject *__fastcall Caver::MonsterDeathControllerComponent::KillMonster(__int64 a1, Caver::SceneObject **a2)
{
  Caver::SceneObject *v4; // x8
  _DWORD *v5; // x0
  int v6; // w8
  Caver::SceneObject *v7; // x8
  __int64 v8; // x21
  float v9; // s0
  int v10; // w10
  _DWORD *v11; // x9
  void (*v12)(void); // x8
  __int64 v13; // x0
  int v14; // w8
  Caver::SceneObject *result; // x0
  Caver::SceneObject *v16; // x21
  int v17; // w8
  __int64 v18; // x0
  int v19; // w8
  void *v20; // x0
  Caver::SceneObject *v21; // x21
  int v22; // w9
  _DWORD *v23; // x8
  Caver::ShatterComponent *v24; // x20
  Caver::ModelComponent *v25; // x0
  int v26; // w8
  unsigned int *v27; // x8
  int v28; // w9
  __int64 v29; // [xsp+118h] [xbp-58h] BYREF
  Caver::SceneObject *v30; // [xsp+120h] [xbp-50h] BYREF
  _QWORD v31[3]; // [xsp+128h] [xbp-48h] BYREF

  v31[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *a2;
  if ( *a2 )
    ++*((_DWORD *)v4 + 2);
  v5 = *(_DWORD **)(a1 + 184);
  *(_QWORD *)(a1 + 184) = v4;
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  Caver::SceneObject::SetAlwaysActive(*(Caver::SceneObject **)(a1 + 40));
  v7 = *a2;
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *((float *)*a2 + 28);
  if ( fabsf(v9 - *(float *)(v8 + 112)) <= 0.0001 )
  {
    v11 = (_DWORD *)(v8 + 116);
    if ( fabsf(*((float *)v7 + 29) - *(float *)(v8 + 116)) <= 0.0001 )
      goto LABEL_12;
    v10 = *((_DWORD *)v7 + 29);
  }
  else
  {
    v10 = *((_DWORD *)v7 + 29);
    v11 = (_DWORD *)(v8 + 116);
  }
  *(float *)(v8 + 112) = v9;
  *v11 = v10;
  if ( !*(_BYTE *)(v8 + 180) )
  {
    Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v8);
    *(_BYTE *)(v8 + 180) = 1;
    v8 = *(_QWORD *)(a1 + 40);
    v7 = *a2;
  }
LABEL_12:
  *(_DWORD *)(v8 + 120) = *((_DWORD *)v7 + 30);
  v12 = *(void (**)(void))(**((_QWORD **)v7 + 4) + 40LL);
  v31[0] = v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v12();
  v13 = v31[0];
  if ( v31[0] )
  {
    v14 = *(_DWORD *)(v31[0] + 8LL) - 1;
    *(_DWORD *)(v31[0] + 8LL) = v14;
    if ( !v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  }
  Caver::MonsterDeathControllerComponent::FindOriginAndRadius((Caver::MonsterDeathControllerComponent *)a1);
  result = (Caver::SceneObject *)Caver::SceneObject::ComponentWithInterface(
                                   *a2,
                                   (__int64)Caver::ModelComponent::Interface);
  if ( result )
  {
    v16 = (Caver::SceneObject *)operator new(0x128u);
    Caver::SceneObject::SceneObject(v16);
    v17 = *((_DWORD *)v16 + 2);
    v30 = v16;
    *((_DWORD *)v16 + 2) = v17 + 1;
    sub_566BB8((int)&v29, "effect_shatter");
    Caver::ObjectLibrary::TemplateForName();
    Caver::SceneObject::InitWithTemplate(v16);
    v18 = v31[0];
    if ( v31[0] )
    {
      v19 = *(_DWORD *)(v31[0] + 8LL) - 1;
      *(_DWORD *)(v31[0] + 8LL) = v19;
      if ( !v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    }
    v20 = (void *)(v29 - 24);
    if ( (__int64 *)(v29 - 24) != &qword_6FD2E0 )
    {
      v27 = (unsigned int *)(v29 - 8);
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
      if ( v28 <= 0 )
        operator delete(v20);
    }
    v21 = v30;
    Caver::Vector2::Vector2((Caver::Vector2 *)v31, (const Caver::Vector3 *)(a1 + 156));
    if ( fabsf(*(float *)v31 - *((float *)v21 + 28)) <= 0.0001 )
    {
      v23 = (_DWORD *)((char *)v21 + 116);
      if ( fabsf(*((float *)v31 + 1) - *((float *)v21 + 29)) <= 0.0001 )
      {
LABEL_28:
        *((_DWORD *)v21 + 30) = *(_DWORD *)(a1 + 164);
        (*(void (__fastcall **)(_QWORD, Caver::SceneObject **))(**((_QWORD **)*a2 + 4) + 40LL))(
          *((_QWORD *)*a2 + 4),
          &v30);
        v24 = (Caver::ShatterComponent *)Caver::SceneObject::ComponentWithInterface(
                                           v30,
                                           (__int64)Caver::ShatterComponent::Interface);
        v25 = (Caver::ModelComponent *)Caver::SceneObject::ComponentWithInterface(
                                         *a2,
                                         (__int64)Caver::ModelComponent::Interface);
        Caver::ShatterComponent::ShatterModel(v24, v25, 1);
        result = v30;
        if ( v30 )
        {
          v26 = *((_DWORD *)v30 + 2) - 1;
          *((_DWORD *)v30 + 2) = v26;
          if ( !v26 )
            return (Caver::SceneObject *)(*(__int64 (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)result + 8LL))(result);
        }
        return result;
      }
      v22 = HIDWORD(v31[0]);
    }
    else
    {
      v22 = HIDWORD(v31[0]);
      v23 = (_DWORD *)((char *)v21 + 116);
    }
    *((_DWORD *)v21 + 28) = v31[0];
    *v23 = v22;
    if ( !*((_BYTE *)v21 + 180) )
    {
      Caver::SceneObject::RegisterForWorldBoundsUpdate(v21);
      *((_BYTE *)v21 + 180) = 1;
    }
    goto LABEL_28;
  }
  return result;
}


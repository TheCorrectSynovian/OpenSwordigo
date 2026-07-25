/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000263354
 * Mangled: sub_263354
 * Demangled: sub_263354
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBB30  Caver::ProgramState::PushString(std::string const&)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000263D6C  Caver::CollectableItemComponent::className(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 36
 *   insn=0x0000000000263360 string=0x0000000000263364 "T"
 *   insn=0x0000000000263370 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000026337C string=0x00000000001FC790 "0'"
 *   insn=0x0000000000263384 string=0x0000000000263388 "@"
 *   insn=0x000000000026338C string=0x0000000000263390 "!"
 *   insn=0x00000000002633A0 string=0x00000000002633A4 "a"
 *   insn=0x00000000002633B0 string=0x00000000001FBB30 "0'"
 *   insn=0x00000000002633B4 string=0x00000000002633B8 "\t$"
 *   insn=0x00000000002633B8 string=0x00000000002633BC ")"
 *   insn=0x00000000002633C4 string=0x00000000002633C8 "A"
 *   insn=0x00000000002633C8 string=0x00000000002633F0 "\t$"
 *   insn=0x00000000002633F0 string=0x00000000002633F4 ")=G"
 *   insn=0x00000000002633F4 string=0x00000000002633F8 "!"
 *   insn=0x00000000002633FC string=0x0000000000263400 "\t"
 *   insn=0x00000000002633FC string=0x0000000000263414 "\t"
 *   insn=0x0000000000263400 string=0x0000000000263404 "*"
 *   insn=0x0000000000263404 string=0x0000000000263408 "\n"
 *   insn=0x0000000000263410 string=0x0000000000263420 "?"
 *   insn=0x0000000000263414 string=0x0000000000263418 "*"
 *   insn=0x0000000000263418 string=0x000000000026341C "\n"
 *   insn=0x0000000000263420 string=0x0000000000263424 "L"
 *   insn=0x0000000000263434 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000263438 string=0x000000000026343C "\n$"
 *   insn=0x000000000026343C string=0x0000000000263440 "J"
 *   insn=0x0000000000263444 string=0x0000000000263448 "(a"
 *   insn=0x0000000000263450 string=0x0000000000263454 "\n$"
 *   insn=0x0000000000263454 string=0x0000000000263458 "J=G"
 *   insn=0x0000000000263458 string=0x000000000026345C ")!"
 *   insn=0x0000000000263460 string=0x0000000000263464 "*"
 *   insn=0x0000000000263460 string=0x0000000000263490 "*"
 *   insn=0x0000000000263464 string=0x0000000000263468 "K"
 *   insn=0x0000000000263468 string=0x000000000026346C "+"
 *   insn=0x0000000000263470 string=0x0000000000263474 "_"
 *   insn=0x0000000000263490 string=0x0000000000263494 "K"
 *   insn=0x0000000000263494 string=0x0000000000263498 "+"
 *   insn=0x0000000000263498 string=0x000000000026349C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_263354(void *a1)
{
  Caver::ProgramState *v1; // x0
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x0
  void *v5; // x0
  unsigned int *v6; // x8
  int v7; // w9
  _QWORD v8[3]; // [xsp+8h] [xbp-28h] BYREF

  v8[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
    {
      v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::CollectableItemComponent::Interface);
      if ( v4 )
      {
        sub_56A528(v8, v4 + 128);
        Caver::ProgramState::PushString();
        v5 = (void *)(v8[0] - 24LL);
        if ( (__int64 *)(v8[0] - 24LL) != &qword_6FD2E0 )
        {
          v6 = (unsigned int *)(v8[0] - 8LL);
          if ( &pthread_create )
          {
            do
              v7 = __ldaxr(v6);
            while ( __stlxr(v7 - 1, v6) );
          }
          else
          {
            v7 = (*v6)--;
          }
          if ( v7 <= 0 )
            operator delete(v5);
        }
      }
    }
  }
}


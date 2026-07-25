/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026D894
 * Mangled: sub_26D894
 * Demangled: sub_26D894
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7770  Caver::StringForMovementBehavior(Caver::EntityControllerComponent::MovementBehavior)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBB30  Caver::ProgramState::PushString(std::string const&)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000026E65C  Caver::EntityControllerComponent::Interface(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 36
 *   insn=0x000000000026D8A4 string=0x000000000026D8A8 "T"
 *   insn=0x000000000026D8B4 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000026D8C0 string=0x00000000001FC790 "0'"
 *   insn=0x000000000026D8C8 string=0x000000000026D8CC "@"
 *   insn=0x000000000026D8D0 string=0x000000000026D8D4 "!"
 *   insn=0x000000000026D8D4 string=0x000000000026D8D8 "BK"
 *   insn=0x000000000026D8E8 string=0x00000000001F7770 "0'"
 *   insn=0x000000000026D8EC string=0x000000000026D8F0 ""
 *   insn=0x000000000026D914 string=0x00000000001FBB30 "0'"
 *   insn=0x000000000026D91C string=0x000000000026D920 ")"
 *   insn=0x000000000026D928 string=0x000000000026D92C "a"
 *   insn=0x000000000026D93C string=0x000000000026D99C "M""
 *   insn=0x000000000026D958 string=0x000000000026D95C ")=G"
 *   insn=0x000000000026D95C string=0x000000000026D960 "!"
 *   insn=0x000000000026D964 string=0x000000000026D968 "\t"
 *   insn=0x000000000026D964 string=0x000000000026D97C "\t"
 *   insn=0x000000000026D968 string=0x000000000026D96C "*"
 *   insn=0x000000000026D96C string=0x000000000026D970 "\n"
 *   insn=0x000000000026D978 string=0x000000000026D988 "?"
 *   insn=0x000000000026D97C string=0x000000000026D980 "*"
 *   insn=0x000000000026D980 string=0x000000000026D984 "\n"
 *   insn=0x000000000026D988 string=0x000000000026D98C ","
 *   insn=0x000000000026D99C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000026D9A8 string=0x000000000026D9AC "J"
 *   insn=0x000000000026D9B0 string=0x000000000026D9B4 "(a"
 *   insn=0x000000000026D9C0 string=0x000000000026D9C4 "J=G"
 *   insn=0x000000000026D9C4 string=0x000000000026D9C8 ")!"
 *   insn=0x000000000026D9CC string=0x000000000026D9D0 "*"
 *   insn=0x000000000026D9CC string=0x000000000026D9FC "*"
 *   insn=0x000000000026D9D0 string=0x000000000026D9D4 "K"
 *   insn=0x000000000026D9D4 string=0x000000000026D9D8 "+"
 *   insn=0x000000000026D9DC string=0x000000000026D9E0 "_"
 *   insn=0x000000000026D9EC string=0x000000000026D9F0 "m"
 *   insn=0x000000000026D9FC string=0x000000000026DA00 "K"
 *   insn=0x000000000026DA00 string=0x000000000026DA04 "+"
 *   insn=0x000000000026DA04 string=0x000000000026DA08 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_26D894(void *a1)
{
  Caver::ProgramState *v1; // x0
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  void *v4; // x0
  unsigned int *v6; // x8
  int v7; // w9
  _QWORD v8[3]; // [xsp+8h] [xbp-38h] BYREF

  v8[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2
    && (v3 = *v2) != 0
    && Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::EntityControllerComponent::Interface) )
  {
    Caver::StringForMovementBehavior();
  }
  else
  {
    sub_566BB8((int)v8, "");
  }
  Caver::ProgramState::PushString();
  v4 = (void *)(v8[0] - 24LL);
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
      operator delete(v4);
  }
  return 1;
}


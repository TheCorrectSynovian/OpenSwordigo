/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B4B6C
 * Mangled: sub_2B4B6C
 * Demangled: sub_2B4B6C
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBB30  Caver::ProgramState::PushString(std::string const&)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x00000000002B50F8  Caver::ElevatorControllerComponent::className(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 39
 *   insn=0x00000000002B4B78 string=0x00000000002B4B7C "T"
 *   insn=0x00000000002B4B88 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000002B4B94 string=0x00000000002B4B98 "@"
 *   insn=0x00000000002B4B94 string=0x00000000001FC790 "0'"
 *   insn=0x00000000002B4BA0 string=0x00000000002B4BA4 ""
 *   insn=0x00000000002B4BA4 string=0x00000000002B4BA8 "a"
 *   insn=0x00000000002B4BB4 string=0x00000000002B4BB8 "!"
 *   insn=0x00000000002B4BC0 string=0x00000000002B4BC4 ""
 *   insn=0x00000000002B4BC8 string=0x00000000002B4BD0 "!"
 *   insn=0x00000000002B4BE0 string=0x00000000002B4BE4 ""
 *   insn=0x00000000002B4BE4 string=0x00000000002B4BE8 "a"
 *   insn=0x00000000002B4BF8 string=0x00000000001FBB30 "0'"
 *   insn=0x00000000002B4C00 string=0x00000000002B4C04 ")"
 *   insn=0x00000000002B4C0C string=0x00000000002B4C10 "A"
 *   insn=0x00000000002B4C38 string=0x00000000002B4C3C ")=G"
 *   insn=0x00000000002B4C3C string=0x00000000002B4C40 "!"
 *   insn=0x00000000002B4C44 string=0x00000000002B4C48 "\t"
 *   insn=0x00000000002B4C44 string=0x00000000002B4C5C "\t"
 *   insn=0x00000000002B4C48 string=0x00000000002B4C4C "*"
 *   insn=0x00000000002B4C4C string=0x00000000002B4C50 "\n"
 *   insn=0x00000000002B4C58 string=0x00000000002B4C68 "?"
 *   insn=0x00000000002B4C5C string=0x00000000002B4C60 "*"
 *   insn=0x00000000002B4C60 string=0x00000000002B4C64 "\n"
 *   insn=0x00000000002B4C68 string=0x00000000002B4C6C "L"
 *   insn=0x00000000002B4C7C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002B4C88 string=0x00000000002B4C8C ")"
 *   insn=0x00000000002B4CA0 string=0x00000000002B4CA4 ")=G"
 *   insn=0x00000000002B4CA4 string=0x00000000002B4CA8 "!"
 *   insn=0x00000000002B4CA8 string=0x00000000002B4CAC "i"
 *   insn=0x00000000002B4CAC string=0x00000000002B4CB0 "\t"
 *   insn=0x00000000002B4CAC string=0x00000000002B4CD8 "\t"
 *   insn=0x00000000002B4CB0 string=0x00000000002B4CB4 "*"
 *   insn=0x00000000002B4CB4 string=0x00000000002B4CB8 "\n"
 *   insn=0x00000000002B4CBC string=0x00000000002B4CC0 "?"
 *   insn=0x00000000002B4CC0 string=0x00000000002B4CC4 "l"
 *   insn=0x00000000002B4CD8 string=0x00000000002B4CDC "*"
 *   insn=0x00000000002B4CDC string=0x00000000002B4CE0 "\n"
 *   insn=0x00000000002B4CE0 string=0x00000000002B4CE4 "?"
 *   insn=0x00000000002B4CE4 string=0x00000000002B4CE8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_2B4B6C(void *a1)
{
  Caver::ProgramState *v1; // x0
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  void *v4; // x0
  unsigned int *v6; // x8
  int v7; // w9
  _QWORD v8[3]; // [xsp+8h] [xbp-28h] BYREF

  v8[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    v8[0] = &byte_6FD2F8;
    if ( v3 && Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::ElevatorControllerComponent::Interface) )
      sub_56A6A8(v8);
  }
  else
  {
    v8[0] = &byte_6FD2F8;
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


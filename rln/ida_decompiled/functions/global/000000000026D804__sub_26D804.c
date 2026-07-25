/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026D804
 * Mangled: sub_26D804
 * Demangled: sub_26D804
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7CB0  Caver::ProgramState::PushRectangle(Caver::Rectangle const&)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000026E65C  Caver::EntityControllerComponent::Interface(void)
 *
 * Referenced strings: 8
 *   insn=0x000000000026D810 string=0x000000000026D814 "T"
 *   insn=0x000000000026D820 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000026D82C string=0x000000000026D830 "@"
 *   insn=0x000000000026D82C string=0x00000000001FC790 "0'"
 *   insn=0x000000000026D83C string=0x000000000026D840 "!"
 *   insn=0x000000000026D840 string=0x000000000026D844 "gK"
 *   insn=0x000000000026D868 string=0x00000000001F7CB0 "0'"
 *   insn=0x000000000026D890 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_26D804(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x0
  __int128 v6; // [xsp+0h] [xbp-30h] BYREF
  __int64 v7; // [xsp+18h] [xbp-18h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2
    && (v3 = *v2) != 0
    && (v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::EntityControllerComponent::Interface)) != 0 )
  {
    v6 = *(_OWORD *)(v4 + 208);
  }
  else
  {
    v6 = 0u;
  }
  Caver::ProgramState::PushRectangle(v1, (const Caver::Rectangle *)&v6);
  return 1;
}


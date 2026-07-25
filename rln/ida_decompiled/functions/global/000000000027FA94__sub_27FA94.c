/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027FA94
 * Mangled: sub_27FA94
 * Demangled: sub_27FA94
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x00000000002618B0  Caver::PhysicsObjectComponent::Interface(void)
 *
 * Referenced strings: 13
 *   insn=0x000000000027FAA0 string=0x000000000027FAA4 "O"
 *   insn=0x000000000027FAA4 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000027FAAC string=0x000000000027FAB0 "8"
 *   insn=0x000000000027FAB0 string=0x000000000027FAB4 " "
 *   insn=0x000000000027FAB0 string=0x00000000001FC790 "0'"
 *   insn=0x000000000027FAC0 string=0x000000000027FAC4 "G"
 *   insn=0x000000000027FAC4 string=0x000000000027FAC8 ""
 *   insn=0x000000000027FAC4 string=0x00000000001FABE0 "0'"
 *   insn=0x000000000027FACC string=0x000000000027FAD0 "!#"
 *   insn=0x000000000027FAD0 string=0x000000000027FAD4 "!pG"
 *   insn=0x000000000027FADC string=0x000000000027FAE0 " "
 *   insn=0x000000000027FAE0 string=0x000000000027FAE4 "H"
 *   insn=0x000000000027FAFC string=0x000000000027FB00 "8"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_27FA94(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x20
  float v4; // s0
  float v5; // s8
  __int64 v6; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    Caver::ProgramState::FloatAtStackIndex(v1, 2);
    v5 = v4;
    if ( v3 )
    {
      v6 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::PhysicsObjectComponent::Interface);
      if ( v6 )
        *(float *)(v6 + 232) = v5 * 800.0;
    }
  }
  else
  {
    Caver::ProgramState::FloatAtStackIndex(v1, 2);
  }
  return 0;
}


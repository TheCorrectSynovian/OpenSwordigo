/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004770AC
 * Mangled: sub_4770AC
 * Demangled: sub_4770AC
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FFD90  Caver::SceneObject::Activate(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000004770B4 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004770BC string=0x00000000001FC790 "0'"
 *   insn=0x00000000004770C4 string=0x00000000004770C8 "@"
 *   insn=0x00000000004770C8 string=0x00000000004770CC "1#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4770AC(void *a1)
{
  Caver::ProgramState *v1; // x0
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
      Caver::SceneObject::Activate(v3);
  }
  return 0;
}


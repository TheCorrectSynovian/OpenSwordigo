/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004779B0
 * Mangled: sub_4779B0
 * Demangled: sub_4779B0
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FF760  Caver::SceneObject::SetInstanceScaling(float)
 *
 * Referenced strings: 7
 *   insn=0x00000000004779BC string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004779C4 string=0x00000000004779C8 "r"
 *   insn=0x00000000004779C8 string=0x00000000004779CC " "
 *   insn=0x00000000004779C8 string=0x00000000001FC790 "0'"
 *   insn=0x00000000004779DC string=0x00000000001FABE0 "0'"
 *   insn=0x00000000004779E4 string=0x00000000004779E8 "^"
 *   insn=0x00000000004779F4 string=0x00000000004779F8 "z"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4779B0(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x20
  float v4; // s0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    Caver::ProgramState::FloatAtStackIndex(v1, 2);
    if ( v3 )
      Caver::SceneObject::SetInstanceScaling(v3, v4);
  }
  else
  {
    Caver::ProgramState::FloatAtStackIndex(v1, 2);
  }
  return 0;
}


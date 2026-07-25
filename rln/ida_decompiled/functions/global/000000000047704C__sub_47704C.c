/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047704C
 * Mangled: sub_47704C
 * Demangled: sub_47704C
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F81D0  Caver::SceneObject::SetAlwaysActive(bool)
 *   0x00000000001F8D80  Caver::ProgramState::BoolAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *
 * Referenced strings: 8
 *   insn=0x0000000000477058 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000477064 string=0x0000000000477068 "@"
 *   insn=0x0000000000477064 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000477074 string=0x0000000000477078 "B"
 *   insn=0x0000000000477078 string=0x00000000001F8D80 "0'"
 *   insn=0x0000000000477084 string=0x0000000000477088 "R"
 *   insn=0x0000000000477088 string=0x00000000001F81D0 "0'"
 *   insn=0x0000000000477094 string=0x0000000000477098 ":"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_47704C(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x20

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    Caver::ProgramState::BoolAtStackIndex(v1, 2);
    if ( v3 )
      Caver::SceneObject::SetAlwaysActive(v3);
  }
  else
  {
    Caver::ProgramState::BoolAtStackIndex(v1, 2);
  }
  return 0;
}


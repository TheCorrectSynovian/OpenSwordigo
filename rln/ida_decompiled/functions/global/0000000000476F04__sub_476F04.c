/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000476F04
 * Mangled: sub_476F04
 * Demangled: sub_476F04
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F8C50  Caver::SceneObject::isHidden(void)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FF250  Caver::ProgramState::PushBool(bool)
 *
 * Referenced strings: 6
 *   insn=0x0000000000476F0C string=0x0000000000476F10 "4"
 *   insn=0x0000000000476F10 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000476F1C string=0x00000000001FC790 "0'"
 *   insn=0x0000000000476F24 string=0x0000000000476F28 "@"
 *   insn=0x0000000000476F28 string=0x0000000000476F2C "I"
 *   insn=0x0000000000476F2C string=0x00000000001F8C50 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_476F04(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject *v2; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v2 = *(Caver::SceneObject **)v2;
    if ( v2 )
      LOBYTE(v2) = Caver::SceneObject::isHidden(v2);
  }
  Caver::ProgramState::PushBool(v1, (unsigned __int8)v2 & 1);
  return 1;
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000476F4C
 * Mangled: sub_476F4C
 * Demangled: sub_476F4C
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F8D80  Caver::ProgramState::BoolAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FFD90  Caver::SceneObject::Activate(void)
 *
 * Referenced strings: 11
 *   insn=0x0000000000476F54 string=0x0000000000476F58 """
 *   insn=0x0000000000476F58 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000476F60 string=0x0000000000476F64 ""
 *   insn=0x0000000000476F64 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000476F78 string=0x00000000001F8D80 "0'"
 *   insn=0x0000000000476F7C string=0x0000000000476F80 ""
 *   insn=0x0000000000476F80 string=0x0000000000476F84 "h"
 *   insn=0x0000000000476F84 string=0x0000000000476F88 " "
 *   insn=0x0000000000476F88 string=0x0000000000476F8C "h"
 *   insn=0x0000000000476F94 string=0x0000000000476F98 "~#"
 *   insn=0x0000000000476FA4 string=0x0000000000476FA8 "v"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_476F4C(void *a1)
{
  Caver::ProgramState *v1; // x20
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x19
  char v4; // w0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    v4 = Caver::ProgramState::BoolAtStackIndex(v1, 2);
    if ( v3 )
    {
      *((_BYTE *)v3 + 244) = v4 & 1;
      if ( (v4 & 1) == 0 && !*((_BYTE *)v3 + 240) )
        Caver::SceneObject::Activate(v3);
    }
  }
  else
  {
    Caver::ProgramState::BoolAtStackIndex(v1, 2);
  }
  return 0;
}


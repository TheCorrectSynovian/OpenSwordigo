/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021B84C
 * Mangled: sub_21B84C
 * Demangled: sub_21B84C
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F8520  Caver::SceneObject::ComponentWithIdentifier(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBCD0  Caver::ProgramState::IntAtStackIndex(int)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FF250  Caver::ProgramState::PushBool(bool)
 *
 * Referenced strings: 10
 *   insn=0x000000000021B858 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000021B864 string=0x000000000021B868 "`"
 *   insn=0x000000000021B864 string=0x00000000001FC790 "0'"
 *   insn=0x000000000021B880 string=0x00000000001FBCD0 "0'"
 *   insn=0x000000000021B888 string=0x000000000021B88C "t"
 *   insn=0x000000000021B88C string=0x000000000021B890 "H"
 *   insn=0x000000000021B898 string=0x000000000021B89C "!s"
 *   insn=0x000000000021B89C string=0x00000000001F8520 "0'"
 *   insn=0x000000000021B8A0 string=0x000000000021B8A4 ""
 *   insn=0x000000000021B8B8 string=0x000000000021B8BC "e"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_21B84C(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x20
  int v4; // w8
  bool v5; // w1
  __int64 v6; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
    v3 = *v2;
  else
    v3 = 0;
  v4 = Caver::ProgramState::IntAtStackIndex(v1, 2);
  v5 = 0;
  if ( v3 && v4 )
  {
    Caver::SceneObject::ComponentWithIdentifier(v3);
    if ( v6 )
      v5 = *(_BYTE *)(v6 + 376) != 0;
    else
      v5 = 0;
  }
  Caver::ProgramState::PushBool(v1, v5);
  return 1;
}


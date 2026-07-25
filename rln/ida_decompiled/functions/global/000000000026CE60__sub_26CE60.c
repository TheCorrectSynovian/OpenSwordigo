/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026CE60
 * Mangled: sub_26CE60
 * Demangled: sub_26CE60
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F4CE0  Caver::ProgramState::PushInt(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000026E65C  Caver::EntityControllerComponent::Interface(void)
 *
 * Referenced strings: 8
 *   insn=0x000000000026CE68 string=0x000000000026CE6C "]9"
 *   insn=0x000000000026CE6C string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000026CE74 string=0x000000000026CE78 "F>"
 *   insn=0x000000000026CE78 string=0x000000000026CE7C " "
 *   insn=0x000000000026CE78 string=0x00000000001FC790 "0'"
 *   insn=0x000000000026CE88 string=0x000000000026CE8C "!"
 *   insn=0x000000000026CE90 string=0x000000000026CE94 "`"
 *   insn=0x000000000026CEA8 string=0x00000000001F4CE0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_26CE60(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x0
  int v5; // w1

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2
    && (v3 = *v2) != 0
    && (v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::EntityControllerComponent::Interface)) != 0 )
  {
    v5 = *(_DWORD *)(v4 + 264);
  }
  else
  {
    v5 = 0;
  }
  Caver::ProgramState::PushInt(v1, v5);
  return 1;
}


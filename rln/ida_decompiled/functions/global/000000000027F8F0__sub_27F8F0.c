/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027F8F0
 * Mangled: sub_27F8F0
 * Demangled: sub_27F8F0
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FF250  Caver::ProgramState::PushBool(bool)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x00000000002618B0  Caver::PhysicsObjectComponent::Interface(void)
 *
 * Referenced strings: 9
 *   insn=0x000000000027F8FC string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000027F908 string=0x000000000027F90C "`"
 *   insn=0x000000000027F908 string=0x00000000001FC790 "0'"
 *   insn=0x000000000027F910 string=0x000000000027F914 " "
 *   insn=0x000000000027F914 string=0x000000000027F918 "!#"
 *   insn=0x000000000027F918 string=0x000000000027F91C "!pG"
 *   insn=0x000000000027F91C string=0x000000000027F920 "0"
 *   insn=0x000000000027F924 string=0x000000000027F928 ""
 *   insn=0x000000000027F93C string=0x000000000027F940 "D"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_27F8F0(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x0
  bool v5; // w1

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  v5 = v2
    && (v3 = *v2) != 0
    && (v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::PhysicsObjectComponent::Interface)) != 0
    && *(_BYTE *)(v4 + 112) != 0;
  Caver::ProgramState::PushBool(v1, v5);
  return 1;
}


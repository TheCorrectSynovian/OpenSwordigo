/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027FB18
 * Mangled: sub_27FB18
 * Demangled: sub_27FB18
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
 * Referenced strings: 10
 *   insn=0x000000000027FB24 string=0x000000000027FB28 "."
 *   insn=0x000000000027FB28 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000027FB34 string=0x00000000001FC790 "0'"
 *   insn=0x000000000027FB44 string=0x000000000027FB48 "&"
 *   insn=0x000000000027FB48 string=0x000000000027FB4C ""
 *   insn=0x000000000027FB48 string=0x00000000001FABE0 "0'"
 *   insn=0x000000000027FB4C string=0x000000000027FB50 "t"
 *   insn=0x000000000027FB50 string=0x000000000027FB54 "!#"
 *   insn=0x000000000027FB54 string=0x000000000027FB58 "!pG"
 *   insn=0x000000000027FB64 string=0x000000000027FB68 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_27FB18(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x20
  int v4; // s0
  int v5; // s8
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
        *(_DWORD *)(v6 + 192) = v5;
    }
  }
  else
  {
    Caver::ProgramState::FloatAtStackIndex(v1, 2);
  }
  return 0;
}


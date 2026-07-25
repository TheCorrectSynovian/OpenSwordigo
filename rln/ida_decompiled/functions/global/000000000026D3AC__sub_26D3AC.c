/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026D3AC
 * Mangled: sub_26D3AC
 * Demangled: sub_26D3AC
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000026E65C  Caver::EntityControllerComponent::Interface(void)
 *
 * Referenced strings: 6
 *   insn=0x000000000026D3B4 string=0x000000000026D3B8 "\n8"
 *   insn=0x000000000026D3B8 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000026D3C4 string=0x00000000001FC790 "0'"
 *   insn=0x000000000026D3CC string=0x000000000026D3D0 "`"
 *   insn=0x000000000026D3D4 string=0x000000000026D3D8 "!"
 *   insn=0x000000000026D3EC string=0x00000000001FABE0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_26D3AC(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x20
  int v5; // s0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 && (v3 = *v2) != 0 )
  {
    v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::EntityControllerComponent::Interface);
    Caver::ProgramState::FloatAtStackIndex(v1, 2);
    if ( v4 )
      *(_DWORD *)(v4 + 224) = v5;
  }
  else
  {
    Caver::ProgramState::FloatAtStackIndex(v1, 2);
  }
  return 0;
}


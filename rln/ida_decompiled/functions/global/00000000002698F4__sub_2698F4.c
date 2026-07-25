/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002698F4
 * Mangled: sub_2698F4
 * Demangled: sub_2698F4
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F8D80  Caver::ProgramState::BoolAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000026168C  Caver::EntityComponent::Interface(void)
 *
 * Referenced strings: 9
 *   insn=0x0000000000269900 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000026990C string=0x00000000001FC790 "0'"
 *   insn=0x0000000000269920 string=0x00000000001F8D80 "0'"
 *   insn=0x000000000026992C string=0x0000000000269930 "!0F"
 *   insn=0x0000000000269930 string=0x000000000026168C " $"
 *   insn=0x0000000000269934 string=0x0000000000269938 "*["
 *   insn=0x000000000026993C string=0x0000000000269940 "h"
 *   insn=0x0000000000269940 string=0x0000000000269944 ""
 *   insn=0x0000000000269950 string=0x0000000000269954 "="
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_2698F4(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x20
  char v4; // w19
  __int64 v5; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    v4 = Caver::ProgramState::BoolAtStackIndex(v1, 2);
    if ( v3 )
    {
      v5 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::EntityComponent::Interface);
      if ( v5 )
        *(_BYTE *)(v5 + 236) = v4 & 1;
    }
  }
  else
  {
    Caver::ProgramState::BoolAtStackIndex(v1, 2);
  }
  return 0;
}


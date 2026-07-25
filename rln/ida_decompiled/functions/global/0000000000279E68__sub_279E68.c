/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000279E68
 * Mangled: sub_279E68
 * Demangled: sub_279E68
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F4CE0  Caver::ProgramState::PushInt(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x00000000002560F4  Caver::ItemDropComponent::Interface(void)
 *
 * Referenced strings: 9
 *   insn=0x0000000000279E70 string=0x0000000000279E74 "["
 *   insn=0x0000000000279E74 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000279E7C string=0x0000000000279E80 "D\n"
 *   insn=0x0000000000279E80 string=0x0000000000279E84 "`"
 *   insn=0x0000000000279E80 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000279E88 string=0x0000000000279E8C " "
 *   insn=0x0000000000279E8C string=0x0000000000279E90 "a#"
 *   insn=0x0000000000279E90 string=0x0000000000279E94 "!P@"
 *   insn=0x0000000000279EA8 string=0x00000000001F4CE0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_279E68(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
    {
      v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::ItemDropComponent::Interface);
      if ( v4 )
        Caver::ProgramState::PushInt(v1, *(_DWORD *)(v4 + 136));
    }
  }
}


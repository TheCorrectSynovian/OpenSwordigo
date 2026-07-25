/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000230E34
 * Mangled: sub_230E34
 * Demangled: sub_230E34
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000201730  Caver::PortalComponent::Activate(void)
 *   0x00000000002314D0  Caver::PortalComponent::Interface(void)
 *
 * Referenced strings: 7
 *   insn=0x0000000000230E38 string=0x0000000000230E3C "i)"
 *   insn=0x0000000000230E3C string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000230E40 string=0x0000000000230E44 "S."
 *   insn=0x0000000000230E44 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000230E54 string=0x0000000000230E58 "!tD"
 *   insn=0x0000000000230E5C string=0x0000000000230E60 "@"
 *   insn=0x0000000000230E60 string=0x0000000000230E64 "3B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_230E34(void *a1)
{
  Caver::ProgramState *v1; // x0
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  Caver::PortalComponent *v4; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
    {
      v4 = (Caver::PortalComponent *)Caver::SceneObject::ComponentWithInterface(
                                       v3,
                                       (__int64)Caver::PortalComponent::Interface);
      if ( v4 )
        Caver::PortalComponent::Activate(v4);
    }
  }
  return 0;
}


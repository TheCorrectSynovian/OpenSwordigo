/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022B0B0
 * Mangled: sub_22B0B0
 * Demangled: sub_22B0B0
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000022B880  Caver::ObjectLinkControllerComponent::className(void)
 *
 * Referenced strings: 8
 *   insn=0x000000000022B0BC string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000022B0C8 string=0x00000000001FC790 "0'"
 *   insn=0x000000000022B0D8 string=0x000000000022B0DC "!"
 *   insn=0x000000000022B0DC string=0x000000000022B0E0 "@U"
 *   insn=0x000000000022B0E4 string=0x000000000022B0E8 "4"
 *   insn=0x000000000022B0F4 string=0x000000000022B0F8 ""
 *   insn=0x000000000022B0FC string=0x000000000022B100 "("
 *   insn=0x000000000022B100 string=0x000000000022B104 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_22B0B0(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x20
  __int64 v5; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
    {
      v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::ObjectLinkControllerComponent::Interface);
      if ( v4 )
      {
        Caver::ProgramState::PointerAtStackIndex(v1);
        *(_QWORD *)(v4 + 260) = *(_QWORD *)v5;
        *(_DWORD *)(v4 + 268) = *(_DWORD *)(v5 + 8);
      }
    }
  }
  return 0;
}


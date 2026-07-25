/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000266668
 * Mangled: sub_266668
 * Demangled: sub_266668
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F8D80  Caver::ProgramState::BoolAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000021C148  Caver::DamageComponent::Interface(void)
 *
 * Referenced strings: 9
 *   insn=0x0000000000266670 string=0x0000000000266674 "[S"
 *   insn=0x0000000000266674 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000026667C string=0x0000000000266680 "DX"
 *   insn=0x0000000000266680 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000266688 string=0x000000000026668C "`"
 *   insn=0x0000000000266690 string=0x0000000000266694 "!hF"
 *   insn=0x0000000000266694 string=0x000000000021C148 "@&"
 *   insn=0x00000000002666AC string=0x00000000002666B0 ""
 *   insn=0x00000000002666AC string=0x00000000001F8D80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_266668(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x20

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
    {
      v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::DamageComponent::Interface);
      if ( v4 )
        *(_BYTE *)(v4 + 188) = Caver::ProgramState::BoolAtStackIndex(v1, 2) & 1;
    }
  }
  return 0;
}


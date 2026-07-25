/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000271A94
 * Mangled: sub_271A94
 * Demangled: sub_271A94
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBCD0  Caver::ProgramState::IntAtStackIndex(int)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000271E54  Caver::ManaComponent::Interface(void)
 *
 * Referenced strings: 11
 *   insn=0x0000000000271A9C string=0x0000000000271AA0 "P&"
 *   insn=0x0000000000271AA0 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000271AA8 string=0x0000000000271AAC "9+"
 *   insn=0x0000000000271AAC string=0x0000000000271AB0 " "
 *   insn=0x0000000000271AAC string=0x00000000001FC790 "0'"
 *   insn=0x0000000000271ABC string=0x0000000000271AC0 "!XE"
 *   insn=0x0000000000271AD4 string=0x0000000000271AD8 "T"
 *   insn=0x0000000000271AD4 string=0x00000000001FBCD0 "0'"
 *   insn=0x0000000000271AE0 string=0x0000000000271AE4 ""
 *   insn=0x0000000000271AE4 string=0x0000000000271AE8 "}"
 *   insn=0x0000000000271AF8 string=0x0000000000271AFC "u("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_271A94(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x20
  int v5; // w0
  int v6; // w8

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 && (v3 = *v2) != 0 )
  {
    v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::ManaComponent::Interface);
    v5 = Caver::ProgramState::IntAtStackIndex(v1, 2);
    if ( v4 )
    {
      v6 = *(_DWORD *)(v4 + 112);
      if ( v6 > v5 )
        v6 = v5;
      *(_DWORD *)(v4 + 116) = v6 & ~(v6 >> 31);
    }
  }
  else
  {
    Caver::ProgramState::IntAtStackIndex(v1, 2);
  }
  return 0;
}


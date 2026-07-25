/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000271A1C
 * Mangled: sub_271A1C
 * Demangled: sub_271A1C
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000021C13C  Caver::HealthComponent::Interface(void)
 *
 * Referenced strings: 12
 *   insn=0x0000000000271A24 string=0x0000000000271A28 "n&"
 *   insn=0x0000000000271A28 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000271A30 string=0x0000000000271A34 "W+"
 *   insn=0x0000000000271A34 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000271A44 string=0x0000000000271A48 "!(B"
 *   insn=0x0000000000271A48 string=0x000000000021C13C "@&"
 *   insn=0x0000000000271A58 string=0x0000000000271A5C "a$"
 *   insn=0x0000000000271A5C string=0x0000000000271A60 "4"
 *   insn=0x0000000000271A5C string=0x00000000001FABE0 "0'"
 *   insn=0x0000000000271A64 string=0x0000000000271A68 "   "
 *   insn=0x0000000000271A68 string=0x0000000000271A6C " "
 *   insn=0x0000000000271A7C string=0x0000000000271A80 "X$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_271A1C(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x20
  float v5; // s0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 && (v3 = *v2) != 0 )
  {
    v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::HealthComponent::Interface);
    Caver::ProgramState::FloatAtStackIndex(v1, 2);
    if ( v4 )
    {
      if ( *(float *)(v4 + 148) > v5 )
        v5 = *(float *)(v4 + 148);
      *(float *)(v4 + 148) = v5;
    }
  }
  else
  {
    Caver::ProgramState::FloatAtStackIndex(v1, 2);
  }
  return 0;
}


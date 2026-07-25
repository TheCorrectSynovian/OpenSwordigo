/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D548C
 * Mangled: sub_4D548C
 * Demangled: sub_4D548C
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC5A0  Caver::ProgramState::PushFloat(float)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 11
 *   insn=0x00000000004D5498 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004D54A4 string=0x00000000001FC790 "0'"
 *   insn=0x00000000004D54CC string=0x00000000004D54D0 "A"
 *   insn=0x00000000004D54D0 string=0x00000000004D54D4 "!"
 *   insn=0x00000000004D54D8 string=0x00000000004D54DC "!"
 *   insn=0x00000000004D54E0 string=0x00000000004D54E4 " "
 *   insn=0x00000000004D54E8 string=0x00000000004D54EC "g"
 *   insn=0x00000000004D54EC string=0x00000000004D54F0 " "
 *   insn=0x00000000004D54F4 string=0x00000000001FD530 "0'"
 *   insn=0x00000000004D54F8 string=0x00000000004D54FC ")"
 *   insn=0x00000000004D54FC string=0x00000000001FC5A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4D548C(void *a1)
{
  Caver::ProgramState *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x20
  __int64 v4; // x0
  float32x2_t v5; // d1
  unsigned __int64 v6; // d1

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  v3 = v2;
  Caver::ProgramState::PointerAtStackIndex(v1);
  v5.n64_u64[0] = vsub_f32(*(float32x2_t *)(v4 + 4), *(float32x2_t *)(v3 + 4)).n64_u64[0];
  v6 = vmul_f32(v5, v5).n64_u64[0];
  Caver::ProgramState::PushFloat(
    v1,
    sqrtf(
      (float)((float)((float)(*(float *)v4 - *(float *)v3) * (float)(*(float *)v4 - *(float *)v3)) + *(float *)&v6)
    + *((float *)&v6 + 1)));
  return 1;
}


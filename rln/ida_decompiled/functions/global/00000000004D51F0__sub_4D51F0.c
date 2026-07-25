/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D51F0
 * Mangled: sub_4D51F0
 * Demangled: sub_4D51F0
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7F40  Caver::ProgramMath::PushVector3(Caver::ProgramState *,Caver::Vector3 const&)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *
 * Referenced strings: 10
 *   insn=0x00000000004D5200 string=0x00000000004D5204 "U"
 *   insn=0x00000000004D520C string=0x00000000004D5210 "t"
 *   insn=0x00000000004D5210 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004D5218 string=0x00000000004D521C "]"
 *   insn=0x00000000004D521C string=0x00000000001FC790 "0'"
 *   insn=0x00000000004D5228 string=0x00000000004D522C "Y"
 *   insn=0x00000000004D5248 string=0x00000000004D524C "A(#"
 *   insn=0x00000000004D5254 string=0x00000000004D5258 ":"
 *   insn=0x00000000004D5258 string=0x00000000001F7F40 "0'"
 *   insn=0x00000000004D5284 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4D51F0(void *a1)
{
  Caver::ProgramState *v1; // x19
  float32x2_t *v2; // x0
  float32x2_t *v3; // x20
  float v4; // s2
  float32x2_t *v5; // x0
  float v6; // s3
  const Caver::Vector3 *v7; // x2
  unsigned __int64 v9; // [xsp+8h] [xbp-38h] BYREF
  float v10; // [xsp+10h] [xbp-30h]
  __int64 v11; // [xsp+18h] [xbp-28h]

  v11 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  v3 = v2;
  Caver::ProgramState::PointerAtStackIndex(v1);
  v4 = v3[1].n64_f32[0];
  v6 = v5[1].n64_f32[0];
  v9 = vadd_f32((float32x2_t)v3->n64_u64[0], (float32x2_t)v5->n64_u64[0]).n64_u64[0];
  v10 = v4 + v6;
  Caver::ProgramMath::PushVector3(v1, (Caver::ProgramState *)&v9, v7);
  return 1;
}


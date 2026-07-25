/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D5288
 * Mangled: sub_4D5288
 * Demangled: sub_4D5288
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7F40  Caver::ProgramMath::PushVector3(Caver::ProgramState *,Caver::Vector3 const&)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *
 * Referenced strings: 9
 *   insn=0x00000000004D5298 string=0x00000000004D529C "U"
 *   insn=0x00000000004D52A4 string=0x00000000004D52A8 "N"
 *   insn=0x00000000004D52A8 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004D52B0 string=0x00000000004D52B4 "7"
 *   insn=0x00000000004D52B4 string=0x00000000001FC790 "0'"
 *   insn=0x00000000004D52C0 string=0x00000000004D52C4 "3"
 *   insn=0x00000000004D52E0 string=0x00000000004D52E4 "A8#"
 *   insn=0x00000000004D52F0 string=0x00000000001F7F40 "0'"
 *   insn=0x00000000004D531C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4D5288(void *a1)
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
  v9 = vsub_f32((float32x2_t)v3->n64_u64[0], (float32x2_t)v5->n64_u64[0]).n64_u64[0];
  v10 = v4 - v6;
  Caver::ProgramMath::PushVector3(v1, (Caver::ProgramState *)&v9, v7);
  return 1;
}


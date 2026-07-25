/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D5320
 * Mangled: sub_4D5320
 * Demangled: sub_4D5320
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7F40  Caver::ProgramMath::PushVector3(Caver::ProgramState *,Caver::Vector3 const&)
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *
 * Referenced strings: 9
 *   insn=0x00000000004D5330 string=0x00000000004D5334 "U"
 *   insn=0x00000000004D533C string=0x00000000004D5340 "("
 *   insn=0x00000000004D5340 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004D534C string=0x00000000001FC790 "0'"
 *   insn=0x00000000004D5358 string=0x00000000004D535C "!"
 *   insn=0x00000000004D535C string=0x00000000001FABE0 "0'"
 *   insn=0x00000000004D536C string=0x00000000004D5370 "!"
 *   insn=0x00000000004D5380 string=0x00000000001F7F40 "0'"
 *   insn=0x00000000004D53AC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4D5320(void *a1)
{
  Caver::ProgramState *v1; // x19
  float32x2_t *v2; // x0
  float32x2_t *v3; // x20
  float v4; // s0
  unsigned __int64 v5; // d1
  float v6; // s0
  const Caver::Vector3 *v7; // x2
  unsigned __int64 v9; // [xsp+8h] [xbp-38h] BYREF
  float v10; // [xsp+10h] [xbp-30h]
  __int64 v11; // [xsp+18h] [xbp-28h]

  v11 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  v3 = v2;
  Caver::ProgramState::FloatAtStackIndex(v1, 2);
  v5 = vmul_n_f32((float32x2_t)v3->n64_u64[0], v4).n64_u64[0];
  v6 = v4 * v3[1].n64_f32[0];
  v9 = v5;
  v10 = v6;
  Caver::ProgramMath::PushVector3(v1, (Caver::ProgramState *)&v9, v7);
  return 1;
}


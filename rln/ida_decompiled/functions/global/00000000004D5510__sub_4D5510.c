/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D5510
 * Mangled: sub_4D5510
 * Demangled: sub_4D5510
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC5A0  Caver::ProgramState::PushFloat(float)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *
 * Referenced strings: 5
 *   insn=0x00000000004D551C string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004D5528 string=0x00000000001FC790 "0'"
 *   insn=0x00000000004D5550 string=0x00000000004D5554 "A"
 *   insn=0x00000000004D5558 string=0x00000000004D555C "!"
 *   insn=0x00000000004D5564 string=0x00000000001FC5A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4D5510(void *a1)
{
  Caver::ProgramState *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x20
  __int64 v4; // x0
  unsigned __int64 v5; // d1

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  v3 = v2;
  Caver::ProgramState::PointerAtStackIndex(v1);
  v5 = vmul_f32(*(float32x2_t *)(v3 + 4), *(float32x2_t *)(v4 + 4)).n64_u64[0];
  Caver::ProgramState::PushFloat(
    v1,
    (float)((float)(*(float *)v3 * *(float *)v4) + *(float *)&v5) + *((float *)&v5 + 1));
  return 1;
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B4574
 * Mangled: _ZN5Caver27ElevatorControllerComponent24ReturnToOriginalPositionEv
 * Demangled: Caver::ElevatorControllerComponent::ReturnToOriginalPosition(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *
 * Referenced strings: 18
 *   insn=0x00000000002B4584 string=0x00000000002B4588 "T"
 *   insn=0x00000000002B4598 string=0x00000000002B459C "h"
 *   insn=0x00000000002B459C string=0x00000000002B45A0 "u"
 *   insn=0x00000000002B45A0 string=0x00000000002B45A4 "i"
 *   insn=0x00000000002B45A4 string=0x00000000002B45A8 "i"
 *   insn=0x00000000002B45A8 string=0x00000000002B45AC "h*"
 *   insn=0x00000000002B45B0 string=0x00000000002B45B4 "$"
 *   insn=0x00000000002B45B8 string=0x00000000002B45BC "C"
 *   insn=0x00000000002B45C0 string=0x00000000002B45C4 "&8#"
 *   insn=0x00000000002B45D4 string=0x00000000002B45D8 "D"
 *   insn=0x00000000002B45D8 string=0x00000000002B45DC "@8 "
 *   insn=0x00000000002B45DC string=0x00000000002B45E0 "a8!"
 *   insn=0x00000000002B45E8 string=0x00000000002B45EC "\t"
 *   insn=0x00000000002B45EC string=0x00000000002B45F0 "`"
 *   insn=0x00000000002B45EC string=0x00000000001F8E10 "0'"
 *   insn=0x00000000002B45F4 string=0x00000000002B45F8 " "
 *   insn=0x00000000002B460C string=0x00000000002B4624 "+"
 *   insn=0x00000000002B4624 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __fastcall Caver::ElevatorControllerComponent::ReturnToOriginalPosition(
        Caver::ElevatorControllerComponent *this)
{
  float v2; // w8
  float v3; // w10
  float32x2_t *v4; // x21
  float32x2_t result; // d0
  float v6; // s1
  float32x2_t v7[2]; // [xsp+0h] [xbp-30h] BYREF

  v7[1] = *(float32x2_t *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *((float *)this + 41);
  v3 = *((float *)this + 42);
  v4 = (float32x2_t *)*((_QWORD *)this + 5);
  *((_DWORD *)this + 39) = 2;
  *((float *)this + 46) = v2;
  *((float *)this + 47) = v3;
  result.n64_u32[0] = v4[14].n64_u32[0];
  v6 = v4[14].n64_f32[1];
  if ( (float)((float)((float)(result.n64_f32[0] - v2) * (float)(result.n64_f32[0] - v2))
             + (float)((float)(v6 - v3) * (float)(v6 - v3))) >= 0.0001 )
  {
    v7[0].n64_f32[0] = v2 - result.n64_f32[0];
    v7[0].n64_f32[1] = v3 - v6;
    Caver::Vector2::Normalize((Caver::Vector2 *)v7);
    result.n64_u64[0] = vmul_n_f32(v7[0], *((float *)this + 45)).n64_u64[0];
    v4[13].n64_u64[0] = result.n64_u64[0];
  }
  return result;
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B4548
 * Mangled: _ZN5Caver27ElevatorControllerComponent18IsAtTargetPositionEv
 * Demangled: Caver::ElevatorControllerComponent::IsAtTargetPosition(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000002B4550 string=0x00000000002B4554 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ElevatorControllerComponent::IsAtTargetPosition(float32x2_t *this)
{
  float32x2_t v1; // d0

  v1.n64_u64[0] = vsub_f32(*(float32x2_t *)(this[5].n64_u64[0] + 112), this[23]).n64_u64[0];
  return vaddv_f32(vmul_f32(v1, v1)) < 0.0001;
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ACEE8
 * Mangled: _ZN5Caver23ParticleObjectComponent21HandleGroundCollisionERKNS_20CollisionMessageDataE
 * Demangled: Caver::ParticleObjectComponent::HandleGroundCollision(Caver::CollisionMessageData const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE040  Caver::PhysicsObjectState::HandleGroundCollision(Caver::CollisionMessageData const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000002ACEF4 string=0x00000000002ACEF8 "`""
 *   insn=0x00000000002ACEF8 string=0x00000000002ACEFC "QD"
 *   insn=0x00000000002ACEFC string=0x00000000002ACF00 "h"
 *   insn=0x00000000002ACF04 string=0x00000000002ACF08 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleObjectComponent::HandleGroundCollision(__int64 a1)
{
  __int64 result; // x0

  result = Caver::PhysicsObjectState::HandleGroundCollision();
  *(_BYTE *)(*(_QWORD *)(a1 + 40) + 232LL) = 1;
  return result;
}


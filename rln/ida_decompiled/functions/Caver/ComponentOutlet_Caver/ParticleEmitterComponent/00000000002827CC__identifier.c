/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002827CC
 * Mangled: _ZNK5Caver15ComponentOutletINS_24ParticleEmitterComponentEE10identifierEv
 * Demangled: Caver::ComponentOutlet<Caver::ParticleEmitterComponent>::identifier(void)
 *
 * Callers: 1
 *   0x0000000000282714  Caver::FireBreathComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::ParticleEmitterComponent>::identifier(__int64 a1)
{
  return *(unsigned int *)(a1 + 8);
}


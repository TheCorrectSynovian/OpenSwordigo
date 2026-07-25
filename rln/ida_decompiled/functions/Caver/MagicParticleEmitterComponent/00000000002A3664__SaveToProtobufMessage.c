/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3664
 * Mangled: _ZNK5Caver29MagicParticleEmitterComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::MagicParticleEmitterComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FAD70  Caver::ParticleEmitterComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002A3664 string=0x00000000001FAD70 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MagicParticleEmitterComponent::SaveToProtobufMessage(
        Caver::MagicParticleEmitterComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::ParticleEmitterComponent::SaveToProtobufMessage();
}


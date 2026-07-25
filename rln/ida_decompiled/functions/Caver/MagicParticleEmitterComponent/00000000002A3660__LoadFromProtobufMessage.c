/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3660
 * Mangled: _ZN5Caver29MagicParticleEmitterComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::MagicParticleEmitterComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6220  Caver::ParticleEmitterComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002A3660 string=0x00000000001F6220 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MagicParticleEmitterComponent::LoadFromProtobufMessage(
        Caver::MagicParticleEmitterComponent *this,
        const Caver::Proto::Component *a2)
{
  Caver::ParticleEmitterComponent::LoadFromProtobufMessage();
}


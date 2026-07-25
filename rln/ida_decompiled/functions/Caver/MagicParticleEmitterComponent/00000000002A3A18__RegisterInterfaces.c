/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3A18
 * Mangled: _ZN5Caver29MagicParticleEmitterComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::MagicParticleEmitterComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000269C04  Caver::EntityComponent::className(void)
 *   0x00000000002A3A78  Caver::MagicParticleEmitterComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002A3A24 string=0x00000000002A3A28 "B"
 *   insn=0x00000000002A3A34 string=0x00000000001F38A0 "P'"
 *   insn=0x00000000002A3A38 string=0x00000000002A3A3C "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicParticleEmitterComponent::RegisterInterfaces(
        Caver::MagicParticleEmitterComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::MagicParticleEmitterComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ParticleEmitterComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


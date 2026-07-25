/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AC178
 * Mangled: _ZN5Caver24ParticleEmitterComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::ParticleEmitterComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000269C04  Caver::EntityComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002AC184 string=0x00000000002AC188 "B"
 *   insn=0x00000000002AC194 string=0x00000000001F38A0 "P'"
 *   insn=0x00000000002AC1A4 string=0x00000000002AC1A8 "JP"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleEmitterComponent::RegisterInterfaces(
        Caver::ParticleEmitterComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ParticleEmitterComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


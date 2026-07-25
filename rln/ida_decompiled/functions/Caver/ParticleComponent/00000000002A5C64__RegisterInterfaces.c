/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A5C64
 * Mangled: _ZN5Caver17ParticleComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::ParticleComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002A5C98  Caver::ParticleComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002A5C70 string=0x00000000002A5C74 "B"
 *   insn=0x00000000002A5C7C string=0x00000000002A5C80 "7"
 *   insn=0x00000000002A5C80 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleComponent::RegisterInterfaces(
        Caver::ParticleComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ParticleComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


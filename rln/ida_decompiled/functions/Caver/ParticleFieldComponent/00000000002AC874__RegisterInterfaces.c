/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AC874
 * Mangled: _ZN5Caver22ParticleFieldComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::ParticleFieldComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002AC8B0  Caver::ParticleFieldComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002AC880 string=0x00000000002AC884 "B"
 *   insn=0x00000000002AC890 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleFieldComponent::RegisterInterfaces(
        Caver::ParticleFieldComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ParticleFieldComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


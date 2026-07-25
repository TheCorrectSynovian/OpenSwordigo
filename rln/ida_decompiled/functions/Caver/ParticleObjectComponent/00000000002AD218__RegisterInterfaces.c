/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AD218
 * Mangled: _ZN5Caver23ParticleObjectComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::ParticleObjectComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002AD254  Caver::ParticleObjectComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002AD224 string=0x00000000002AD228 "B(G"
 *   insn=0x00000000002AD234 string=0x00000000001F38A0 "P'"
 *   insn=0x00000000002AD244 string=0x00000000002AD248 ""L"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleObjectComponent::RegisterInterfaces(
        Caver::ParticleObjectComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ParticleObjectComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


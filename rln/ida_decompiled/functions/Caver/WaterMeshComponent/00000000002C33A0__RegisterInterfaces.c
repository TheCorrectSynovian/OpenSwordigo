/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C33A0
 * Mangled: _ZN5Caver18WaterMeshComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::WaterMeshComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002C3458  Caver::WaterMeshComponent::Interface(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002C33A8 string=0x00000000002C33AC ""!"
 *   insn=0x00000000002C33AC string=0x00000000002C33B0 "BLB"
 *   insn=0x00000000002C33B0 string=0x00000000002C3458 " !"
 *   insn=0x00000000002C33B8 string=0x00000000002C33BC "9"
 *   insn=0x00000000002C33BC string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WaterMeshComponent::RegisterInterfaces(
        Caver::WaterMeshComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::WaterMeshComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


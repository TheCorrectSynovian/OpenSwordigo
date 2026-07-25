/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000281DC8
 * Mangled: _ZN5Caver24DimensionObjectComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::DimensionObjectComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000281DFC  Caver::DimensionObjectComponent::className(void)
 *
 * Referenced strings: 5
 *   insn=0x0000000000281DD0 string=0x0000000000281DD4 ""#"
 *   insn=0x0000000000281DD4 string=0x0000000000281DD8 "BxC"
 *   insn=0x0000000000281DD8 string=0x0000000000281E54 " #"
 *   insn=0x0000000000281DE4 string=0x00000000001F38A0 "P'"
 *   insn=0x0000000000281DF4 string=0x0000000000281DF8 "6"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DimensionObjectComponent::RegisterInterfaces(
        Caver::DimensionObjectComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::DimensionObjectComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B8D9C
 * Mangled: _ZN5Caver19GroundMeshComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::GroundMeshComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000021C130  Caver::GroundMeshComponent::Interface(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002B8DA4 string=0x00000000002B8DA8 "b!"
 *   insn=0x00000000002B8DA8 string=0x00000000002B8DAC "B"
 *   insn=0x00000000002B8DAC string=0x000000000021C130 "@&"
 *   insn=0x00000000002B8DB8 string=0x00000000001F38A0 "P'"
 *   insn=0x00000000002B8DC8 string=0x00000000002B8DCC "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GroundMeshComponent::RegisterInterfaces(
        Caver::GroundMeshComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::GroundMeshComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


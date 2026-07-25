/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BE72C
 * Mangled: _ZN5Caver28GroundMeshGeneratorComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::GroundMeshGeneratorComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002BE888  Caver::GroundMeshGeneratorComponent::Interface(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002BE734 string=0x00000000002BE738 ""!"
 *   insn=0x00000000002BE738 string=0x00000000002BE73C "B"
 *   insn=0x00000000002BE73C string=0x00000000002BE888 " !"
 *   insn=0x00000000002BE744 string=0x00000000002BE748 "V"
 *   insn=0x00000000002BE748 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GroundMeshGeneratorComponent::RegisterInterfaces(
        Caver::GroundMeshGeneratorComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::GroundMeshGeneratorComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


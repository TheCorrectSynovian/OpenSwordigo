/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C071C
 * Mangled: _ZN5Caver22GroundPolygonComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::GroundPolygonComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002AEE54  Caver::GroundPolygonComponent::Interface(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002C0724 string=0x00000000002C0728 ""!"
 *   insn=0x00000000002C0728 string=0x00000000002C072C "B"
 *   insn=0x00000000002C0734 string=0x00000000002C0738 "Z"
 *   insn=0x00000000002C0738 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GroundPolygonComponent::RegisterInterfaces(
        Caver::GroundPolygonComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::GroundPolygonComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


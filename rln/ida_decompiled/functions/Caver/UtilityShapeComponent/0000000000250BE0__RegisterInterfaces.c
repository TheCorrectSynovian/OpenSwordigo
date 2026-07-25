/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250BE0
 * Mangled: _ZN5Caver21UtilityShapeComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::UtilityShapeComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000215A9C  Caver::ShapeComponent::Interface(void)
 *   0x0000000000250C90  Caver::UtilityShapeComponent::Interface(void)
 *
 * Referenced strings: 5
 *   insn=0x0000000000250BEC string=0x0000000000250BF0 "B"
 *   insn=0x0000000000250BF8 string=0x0000000000250BFC ")"
 *   insn=0x0000000000250BFC string=0x00000000001F38A0 "P'"
 *   insn=0x0000000000250C00 string=0x0000000000250C04 "B D"
 *   insn=0x0000000000250C0C string=0x0000000000250C10 "$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::UtilityShapeComponent::RegisterInterfaces(
        Caver::UtilityShapeComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::UtilityShapeComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ShapeComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


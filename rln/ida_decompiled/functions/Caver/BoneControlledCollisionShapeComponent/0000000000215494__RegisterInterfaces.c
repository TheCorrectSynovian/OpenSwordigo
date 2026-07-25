/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000215494
 * Mangled: _ZN5Caver37BoneControlledCollisionShapeComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::BoneControlledCollisionShapeComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000215A84  Caver::BoneControlledCollisionShapeComponent::Interface(void)
 *   0x0000000000215A90  Caver::CollisionShapeComponent::Interface(void)
 *   0x0000000000215A9C  Caver::ShapeComponent::Interface(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002154A0 string=0x00000000002154A4 "BA"
 *   insn=0x00000000002154B0 string=0x00000000001F38A0 "P'"
 *   insn=0x00000000002154B4 string=0x00000000002154B8 "B"
 *   insn=0x00000000002154C8 string=0x00000000002154CC "B D"
 *   insn=0x00000000002154E8 string=0x00000000002154EC "y"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BoneControlledCollisionShapeComponent::RegisterInterfaces(
        Caver::BoneControlledCollisionShapeComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::BoneControlledCollisionShapeComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::CollisionShapeComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ShapeComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


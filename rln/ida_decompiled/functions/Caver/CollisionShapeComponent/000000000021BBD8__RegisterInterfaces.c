/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021BBD8
 * Mangled: _ZN5Caver23CollisionShapeComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::CollisionShapeComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000215A90  Caver::CollisionShapeComponent::Interface(void)
 *   0x0000000000215A9C  Caver::ShapeComponent::Interface(void)
 *
 * Referenced strings: 7
 *   insn=0x000000000021BBE0 string=0x000000000021BBE4 "B&"
 *   insn=0x000000000021BBE4 string=0x000000000021BBE8 "B"
 *   insn=0x000000000021BBF0 string=0x000000000021BBF4 "+_"
 *   insn=0x000000000021BBF4 string=0x000000000021BBF8 "B&"
 *   insn=0x000000000021BBF4 string=0x00000000001F38A0 "P'"
 *   insn=0x000000000021BBF8 string=0x000000000021BBFC "B D"
 *   insn=0x000000000021BC04 string=0x000000000021BC08 "&_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CollisionShapeComponent::RegisterInterfaces(
        Caver::CollisionShapeComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::CollisionShapeComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ShapeComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


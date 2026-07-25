/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000263D38
 * Mangled: _ZN5Caver24CollectableItemComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::CollectableItemComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000263D6C  Caver::CollectableItemComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x0000000000263D44 string=0x0000000000263D48 "B"
 *   insn=0x0000000000263D54 string=0x00000000001F38A0 "P'"
 *   insn=0x0000000000263D64 string=0x0000000000263D68 "Zq"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CollectableItemComponent::RegisterInterfaces(
        Caver::CollectableItemComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::CollectableItemComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


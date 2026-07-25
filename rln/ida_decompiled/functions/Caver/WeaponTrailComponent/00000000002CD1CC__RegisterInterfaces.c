/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CD1CC
 * Mangled: _ZN5Caver20WeaponTrailComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::WeaponTrailComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002C76AC  Caver::WeaponTrailComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002CD1D8 string=0x00000000002CD1DC "B"
 *   insn=0x00000000002CD1E8 string=0x00000000001F38A0 "P'"
 *   insn=0x00000000002CD1F8 string=0x00000000002CD1FC "5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WeaponTrailComponent::RegisterInterfaces(
        Caver::WeaponTrailComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::WeaponTrailComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


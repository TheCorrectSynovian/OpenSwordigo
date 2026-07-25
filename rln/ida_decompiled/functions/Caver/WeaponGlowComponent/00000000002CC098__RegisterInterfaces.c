/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CC098
 * Mangled: _ZN5Caver19WeaponGlowComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::WeaponGlowComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002839D4  Caver::GlowComponent::Interface(void)
 *   0x00000000002C75D0  Caver::WeaponGlowComponent::Interface(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002CC0A4 string=0x00000000002CC0A8 "B4F"
 *   insn=0x00000000002CC0B4 string=0x00000000001F38A0 "P'"
 *   insn=0x00000000002CC0B8 string=0x00000000002CC0BC "B"
 *   insn=0x00000000002CC0D8 string=0x00000000002CC0DC "}"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WeaponGlowComponent::RegisterInterfaces(
        Caver::WeaponGlowComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::WeaponGlowComponent::Interface);
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::GlowComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


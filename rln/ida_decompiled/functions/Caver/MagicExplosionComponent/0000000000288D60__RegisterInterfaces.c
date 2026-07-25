/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000288D60
 * Mangled: _ZN5Caver23MagicExplosionComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::MagicExplosionComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000274F9C  Caver::MagicExplosionComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x0000000000288D6C string=0x0000000000288D70 "B4E"
 *   insn=0x0000000000288D7C string=0x00000000001F38A0 "P'"
 *   insn=0x0000000000288D8C string=0x0000000000288D90 "P"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicExplosionComponent::RegisterInterfaces(
        Caver::MagicExplosionComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::MagicExplosionComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


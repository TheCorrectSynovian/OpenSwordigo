/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028BF44
 * Mangled: _ZN5Caver23MagicSpellCastComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::MagicSpellCastComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000028BF80  Caver::MagicSpellCastComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000028BF50 string=0x000000000028BF54 "B<D"
 *   insn=0x000000000028BF5C string=0x000000000028BF60 "P"
 *   insn=0x000000000028BF60 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicSpellCastComponent::RegisterInterfaces(
        Caver::MagicSpellCastComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::MagicSpellCastComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


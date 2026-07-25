/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027A430
 * Mangled: _ZN5Caver17ItemDropComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::ItemDropComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002560F4  Caver::ItemDropComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000027A438 string=0x000000000027A43C "b#"
 *   insn=0x000000000027A43C string=0x000000000027A440 "BP@"
 *   insn=0x000000000027A44C string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ItemDropComponent::RegisterInterfaces(
        Caver::ItemDropComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ItemDropComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000269BD0
 * Mangled: _ZN5Caver15EntityComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::EntityComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000026168C  Caver::EntityComponent::Interface(void)
 *
 * Referenced strings: 4
 *   insn=0x0000000000269BDC string=0x0000000000269BE0 "B0F"
 *   insn=0x0000000000269BE0 string=0x000000000026168C " $"
 *   insn=0x0000000000269BE8 string=0x0000000000269BEC "-'"
 *   insn=0x0000000000269BEC string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityComponent::RegisterInterfaces(
        Caver::EntityComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::EntityComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


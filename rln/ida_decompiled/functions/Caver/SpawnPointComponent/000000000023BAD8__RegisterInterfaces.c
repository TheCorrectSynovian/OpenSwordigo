/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023BAD8
 * Mangled: _ZN5Caver19SpawnPointComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::SpawnPointComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000023BB0C  Caver::SpawnPointComponent::className(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000023BAE0 string=0x000000000023BAE4 "B%"
 *   insn=0x000000000023BAE4 string=0x000000000023BAE8 "B|A"
 *   insn=0x000000000023BAE8 string=0x000000000023BB64 "@%"
 *   insn=0x000000000023BAF0 string=0x000000000023BAF4 "k"
 *   insn=0x000000000023BAF4 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SpawnPointComponent::RegisterInterfaces(
        Caver::SpawnPointComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::SpawnPointComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023CBFC
 * Mangled: _ZN5Caver15SpriteComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::SpriteComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000023CC4C  Caver::SpriteComponent::className(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000023CC04 string=0x000000000023CC08 "B%"
 *   insn=0x000000000023CC08 string=0x000000000023CC0C "B"
 *   insn=0x000000000023CC0C string=0x000000000023CCA4 "@%"
 *   insn=0x000000000023CC14 string=0x000000000023CC18 """
 *   insn=0x000000000023CC18 string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SpriteComponent::RegisterInterfaces(
        Caver::SpriteComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::SpriteComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


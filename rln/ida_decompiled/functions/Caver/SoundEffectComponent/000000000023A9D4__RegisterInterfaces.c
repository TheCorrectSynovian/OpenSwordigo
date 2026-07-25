/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023A9D4
 * Mangled: _ZN5Caver20SoundEffectComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::SoundEffectComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000023AA08  Caver::SoundEffectComponent::className(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000023A9DC string=0x000000000023A9E0 "b%"
 *   insn=0x000000000023A9E0 string=0x000000000023A9E4 "B"
 *   insn=0x000000000023A9E4 string=0x000000000023AA60 "`%"
 *   insn=0x000000000023A9F0 string=0x00000000001F38A0 "P'"
 *   insn=0x000000000023AA00 string=0x000000000023AA04 "3"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SoundEffectComponent::RegisterInterfaces(
        Caver::SoundEffectComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::SoundEffectComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


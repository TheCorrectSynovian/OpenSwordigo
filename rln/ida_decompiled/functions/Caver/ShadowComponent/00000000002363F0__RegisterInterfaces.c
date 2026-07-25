/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002363F0
 * Mangled: _ZN5Caver15ShadowComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::ShadowComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000236424  Caver::ShadowComponent::className(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002363F8 string=0x00000000002363FC "b%"
 *   insn=0x00000000002363FC string=0x0000000000236400 "B"
 *   insn=0x0000000000236400 string=0x000000000023647C "`%"
 *   insn=0x0000000000236408 string=0x000000000023640C "%"
 *   insn=0x000000000023640C string=0x00000000001F38A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ShadowComponent::RegisterInterfaces(
        Caver::ShadowComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::ShadowComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


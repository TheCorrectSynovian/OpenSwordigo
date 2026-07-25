/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B65E0
 * Mangled: _ZN5Caver24PressureTriggerComponent18RegisterInterfacesEPNS_16ComponentManagerE
 * Demangled: Caver::PressureTriggerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F38A0  Caver::Component::RegisterInterface(Caver::ComponentManager *,long)
 *   0x00000000002002D0  Caver::Component::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002B661C  Caver::PressureTriggerComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002B65EC string=0x00000000002B65F0 "B"
 *   insn=0x00000000002B65FC string=0x00000000001F38A0 "P'"
 *   insn=0x00000000002B660C string=0x00000000002B6610 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PressureTriggerComponent::RegisterInterfaces(
        Caver::PressureTriggerComponent *this,
        Caver::ComponentManager *a2)
{
  Caver::Component::RegisterInterface(this, a2, (__int64)Caver::PressureTriggerComponent::Interface);
  return Caver::Component::RegisterInterfaces(this, a2);
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000258C4C
 * Mangled: _ZN5Caver27CharAnimControllerComponent9InterfaceEv
 * Demangled: Caver::CharAnimControllerComponent::Interface(void)
 *
 * Callers: 4
 *   0x0000000000258AB4  Caver::CharAnimControllerComponent::ImplementsInterface(long)
 *   0x0000000000258ADC  Caver::CharAnimControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000258C4C  Caver::CharAnimControllerComponent::Interface(void)
 *   0x00000000002614EC  Caver::ComponentOutlet<Caver::CharAnimControllerComponent>::Interface(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000258C50 string=0x0000000000258C4C "`$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::CharAnimControllerComponent::Interface(
        Caver::CharAnimControllerComponent *this))(Caver::CharAnimControllerComponent *__hidden this)
{
  return Caver::CharAnimControllerComponent::Interface;
}


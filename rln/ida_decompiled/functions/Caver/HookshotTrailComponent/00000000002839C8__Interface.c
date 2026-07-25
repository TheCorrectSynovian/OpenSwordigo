/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002839C8
 * Mangled: _ZN5Caver22HookshotTrailComponent9InterfaceEv
 * Demangled: Caver::HookshotTrailComponent::Interface(void)
 *
 * Callers: 4
 *   0x00000000002838E0  Caver::HookshotTrailComponent::ImplementsInterface(long)
 *   0x0000000000283908  Caver::HookshotTrailComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002839C8  Caver::HookshotTrailComponent::Interface(void)
 *   0x0000000000289A6C  Caver::MagicHookshotComponent::Prepare(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::HookshotTrailComponent::Interface(
        Caver::HookshotTrailComponent *this))(Caver::HookshotTrailComponent *__hidden this)
{
  return Caver::HookshotTrailComponent::Interface;
}


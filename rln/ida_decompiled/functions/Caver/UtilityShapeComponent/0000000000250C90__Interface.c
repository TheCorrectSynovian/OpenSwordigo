/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250C90
 * Mangled: _ZN5Caver21UtilityShapeComponent9InterfaceEv
 * Demangled: Caver::UtilityShapeComponent::Interface(void)
 *
 * Callers: 4
 *   0x0000000000250BB8  Caver::UtilityShapeComponent::ImplementsInterface(long)
 *   0x0000000000250BE0  Caver::UtilityShapeComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000250C90  Caver::UtilityShapeComponent::Interface(void)
 *   0x0000000000293B6C  Caver::ComponentOutlet<Caver::UtilityShapeComponent>::Interface(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::UtilityShapeComponent::Interface(
        Caver::UtilityShapeComponent *this))(Caver::UtilityShapeComponent *__hidden this)
{
  return Caver::UtilityShapeComponent::Interface;
}


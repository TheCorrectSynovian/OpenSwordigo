/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028D7C0
 * Mangled: _ZN5Caver29ProjectileControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::ProjectileControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000271DE4  Caver::HealthComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x000000000028D7C0 string=0x000000000028D7C4 "5G"
 *   insn=0x000000000028D7C4 string=0x000000000028D7C8 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ProjectileControllerComponent::ImplementsInterface(
        Caver::ProjectileControllerComponent *this,
        _QWORD (*a2)(Caver::ProjectileControllerComponent *__hidden this))
{
  return a2 == Caver::ProjectileControllerComponent::Interface;
}


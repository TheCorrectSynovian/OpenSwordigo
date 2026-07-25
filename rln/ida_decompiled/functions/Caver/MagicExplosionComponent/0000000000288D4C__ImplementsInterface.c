/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000288D4C
 * Mangled: _ZN5Caver23MagicExplosionComponent19ImplementsInterfaceEl
 * Demangled: Caver::MagicExplosionComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000274F9C  Caver::MagicExplosionComponent::Interface(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000288D4C string=0x0000000000288D50 "5E"
 *   insn=0x0000000000288D50 string=0x0000000000288D54 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::MagicExplosionComponent::ImplementsInterface(
        Caver::MagicExplosionComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::MagicExplosionComponent *this))(Caver::MagicExplosionComponent *__hidden this))
{
  return a2 == Caver::MagicExplosionComponent::Interface;
}


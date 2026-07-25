/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CC070
 * Mangled: _ZN5Caver19WeaponGlowComponent19ImplementsInterfaceEl
 * Demangled: Caver::WeaponGlowComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000002839D4  Caver::GlowComponent::Interface(void)
 *   0x00000000002C75D0  Caver::WeaponGlowComponent::Interface(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002CC070 string=0x00000000002CC074 "5F"
 *   insn=0x00000000002CC078 string=0x00000000002CC07C ")"
 *   insn=0x00000000002CC07C string=0x00000000002CC080 "?"
 *   insn=0x00000000002CC084 string=0x00000000002CC088 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WeaponGlowComponent::ImplementsInterface(
        Caver::WeaponGlowComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::WeaponGlowComponent *this))(Caver::WeaponGlowComponent *__hidden this))
{
  return (a2 == Caver::WeaponGlowComponent::Interface) | (unsigned int)(a2 == Caver::GlowComponent::Interface);
}


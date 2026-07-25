/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CD1B8
 * Mangled: _ZN5Caver20WeaponTrailComponent19ImplementsInterfaceEl
 * Demangled: Caver::WeaponTrailComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002C76AC  Caver::WeaponTrailComponent::Interface(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002CD1B8 string=0x00000000002CD1BC ""
 *   insn=0x00000000002CD1BC string=0x00000000002CD1C0 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::WeaponTrailComponent::ImplementsInterface(
        Caver::WeaponTrailComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::WeaponTrailComponent *this))(Caver::WeaponTrailComponent *__hidden this))
{
  return a2 == Caver::WeaponTrailComponent::Interface;
}


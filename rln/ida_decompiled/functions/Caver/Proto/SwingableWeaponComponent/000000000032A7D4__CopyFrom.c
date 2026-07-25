/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032A7D4
 * Mangled: _ZN5Caver5Proto24SwingableWeaponComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::SwingableWeaponComponent::CopyFrom(Caver::Proto::SwingableWeaponComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6730  Caver::Proto::SwingableWeaponComponent::MergeFrom(Caver::Proto::SwingableWeaponComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x000000000032A7E8 string=0x000000000032A7EC "@"
 *   insn=0x000000000032A7F4 string=0x000000000032A7F8 ""
 *   insn=0x000000000032A810 string=0x00000000001F6730 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SwingableWeaponComponent::CopyFrom(
        Caver::Proto::SwingableWeaponComponent *this,
        const Caver::Proto::SwingableWeaponComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::SwingableWeaponComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::SwingableWeaponComponent::MergeFrom();
  }
}


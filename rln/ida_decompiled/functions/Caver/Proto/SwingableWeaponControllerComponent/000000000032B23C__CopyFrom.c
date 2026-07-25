/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032B23C
 * Mangled: _ZN5Caver5Proto34SwingableWeaponControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::SwingableWeaponControllerComponent::CopyFrom(Caver::Proto::SwingableWeaponControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200620  Caver::Proto::SwingableWeaponControllerComponent::MergeFrom(Caver::Proto::SwingableWeaponControllerComponent const&)
 *
 * Referenced strings: 2
 *   insn=0x000000000032B250 string=0x000000000032B254 "@"
 *   insn=0x000000000032B25C string=0x000000000032B260 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SwingableWeaponControllerComponent::CopyFrom(
        Caver::Proto::SwingableWeaponControllerComponent *this,
        const Caver::Proto::SwingableWeaponControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::SwingableWeaponControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::SwingableWeaponControllerComponent::MergeFrom(this, a2);
  }
}


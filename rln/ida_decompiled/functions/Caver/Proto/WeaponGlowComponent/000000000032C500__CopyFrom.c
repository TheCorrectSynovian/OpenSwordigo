/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032C500
 * Mangled: _ZN5Caver5Proto19WeaponGlowComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::WeaponGlowComponent::CopyFrom(Caver::Proto::WeaponGlowComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5690  Caver::Proto::WeaponGlowComponent::MergeFrom(Caver::Proto::WeaponGlowComponent const&)
 *
 * Referenced strings: 4
 *   insn=0x000000000032C514 string=0x000000000032C518 "@"
 *   insn=0x000000000032C520 string=0x000000000032C524 ""
 *   insn=0x000000000032C538 string=0x000000000032C53C "U$"
 *   insn=0x000000000032C53C string=0x00000000001F5690 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::WeaponGlowComponent::CopyFrom(
        Caver::Proto::WeaponGlowComponent *this,
        const Caver::Proto::WeaponGlowComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::WeaponGlowComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::WeaponGlowComponent::MergeFrom();
  }
}


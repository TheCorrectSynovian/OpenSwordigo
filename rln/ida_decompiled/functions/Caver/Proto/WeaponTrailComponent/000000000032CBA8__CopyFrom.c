/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032CBA8
 * Mangled: _ZN5Caver5Proto20WeaponTrailComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::WeaponTrailComponent::CopyFrom(Caver::Proto::WeaponTrailComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002007A0  Caver::Proto::WeaponTrailComponent::MergeFrom(Caver::Proto::WeaponTrailComponent const&)
 *
 * Referenced strings: 2
 *   insn=0x000000000032CBBC string=0x000000000032CBC0 "@"
 *   insn=0x000000000032CBC8 string=0x000000000032CBCC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::WeaponTrailComponent::CopyFrom(
        Caver::Proto::WeaponTrailComponent *this,
        const Caver::Proto::WeaponTrailComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::WeaponTrailComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::WeaponTrailComponent::MergeFrom();
  }
}


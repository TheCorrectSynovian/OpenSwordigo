/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030D618
 * Mangled: _ZN5Caver5Proto15DamageComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::DamageComponent::CopyFrom(Caver::Proto::DamageComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4A80  Caver::Proto::DamageComponent::MergeFrom(Caver::Proto::DamageComponent const&)
 *
 * Referenced strings: 4
 *   insn=0x000000000030D62C string=0x000000000030D630 "@"
 *   insn=0x000000000030D638 string=0x000000000030D63C ""
 *   insn=0x000000000030D650 string=0x000000000030D654 ""
 *   insn=0x000000000030D654 string=0x00000000001F4A80 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::DamageComponent::CopyFrom(
        Caver::Proto::DamageComponent *this,
        const Caver::Proto::DamageComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::DamageComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::DamageComponent::MergeFrom();
  }
}


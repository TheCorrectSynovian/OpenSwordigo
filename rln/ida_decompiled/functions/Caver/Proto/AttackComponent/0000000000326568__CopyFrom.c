/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000326568
 * Mangled: _ZN5Caver5Proto15AttackComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::AttackComponent::CopyFrom(Caver::Proto::AttackComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB320  Caver::Proto::AttackComponent::MergeFrom(Caver::Proto::AttackComponent const&)
 *
 * Referenced strings: 4
 *   insn=0x000000000032657C string=0x0000000000326580 "@"
 *   insn=0x0000000000326588 string=0x000000000032658C ""
 *   insn=0x00000000003265A0 string=0x00000000003265A4 "_S"
 *   insn=0x00000000003265A4 string=0x00000000001FB320 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::AttackComponent::CopyFrom(
        Caver::Proto::AttackComponent *this,
        const Caver::Proto::AttackComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::AttackComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::AttackComponent::MergeFrom();
  }
}


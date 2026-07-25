/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000329174
 * Mangled: _ZN5Caver5Proto31MonsterDeathControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::MonsterDeathControllerComponent::CopyFrom(Caver::Proto::MonsterDeathControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA6D0  Caver::Proto::MonsterDeathControllerComponent::MergeFrom(Caver::Proto::MonsterDeathControllerComponent const&)
 *
 * Referenced strings: 4
 *   insn=0x0000000000329188 string=0x000000000032918C "@"
 *   insn=0x0000000000329194 string=0x0000000000329198 ""
 *   insn=0x00000000003291AC string=0x00000000003291B0 "HE"
 *   insn=0x00000000003291B0 string=0x00000000001FA6D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MonsterDeathControllerComponent::CopyFrom(
        Caver::Proto::MonsterDeathControllerComponent *this,
        const Caver::Proto::MonsterDeathControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::MonsterDeathControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::MonsterDeathControllerComponent::MergeFrom();
  }
}


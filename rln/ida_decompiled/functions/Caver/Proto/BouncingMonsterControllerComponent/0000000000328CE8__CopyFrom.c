/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000328CE8
 * Mangled: _ZN5Caver5Proto34BouncingMonsterControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::BouncingMonsterControllerComponent::CopyFrom(Caver::Proto::BouncingMonsterControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8490  Caver::Proto::BouncingMonsterControllerComponent::MergeFrom(Caver::Proto::BouncingMonsterControllerComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000328CFC string=0x0000000000328D00 "@"
 *   insn=0x0000000000328D08 string=0x0000000000328D0C ""
 *   insn=0x0000000000328D24 string=0x00000000001F8490 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::BouncingMonsterControllerComponent::CopyFrom(
        Caver::Proto::BouncingMonsterControllerComponent *this,
        const Caver::Proto::BouncingMonsterControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::BouncingMonsterControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::BouncingMonsterControllerComponent::MergeFrom();
  }
}


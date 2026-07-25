/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000324414
 * Mangled: _ZN5Caver5Proto33WalkingMonsterControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::WalkingMonsterControllerComponent::CopyFrom(Caver::Proto::WalkingMonsterControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA810  Caver::Proto::WalkingMonsterControllerComponent::MergeFrom(Caver::Proto::WalkingMonsterControllerComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000324428 string=0x000000000032442C "@"
 *   insn=0x0000000000324434 string=0x0000000000324438 ""
 *   insn=0x0000000000324450 string=0x00000000001FA810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::WalkingMonsterControllerComponent::CopyFrom(
        Caver::Proto::WalkingMonsterControllerComponent *this,
        const Caver::Proto::WalkingMonsterControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::WalkingMonsterControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::WalkingMonsterControllerComponent::MergeFrom();
  }
}


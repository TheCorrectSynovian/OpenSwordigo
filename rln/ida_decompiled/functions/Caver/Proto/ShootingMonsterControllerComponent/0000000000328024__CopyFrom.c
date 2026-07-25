/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000328024
 * Mangled: _ZN5Caver5Proto34ShootingMonsterControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::ShootingMonsterControllerComponent::CopyFrom(Caver::Proto::ShootingMonsterControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F46F0  Caver::Proto::ShootingMonsterControllerComponent::MergeFrom(Caver::Proto::ShootingMonsterControllerComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000328038 string=0x000000000032803C "@"
 *   insn=0x0000000000328044 string=0x0000000000328048 ""
 *   insn=0x0000000000328060 string=0x00000000001F46F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ShootingMonsterControllerComponent::CopyFrom(
        Caver::Proto::ShootingMonsterControllerComponent *this,
        const Caver::Proto::ShootingMonsterControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::ShootingMonsterControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::ShootingMonsterControllerComponent::MergeFrom();
  }
}


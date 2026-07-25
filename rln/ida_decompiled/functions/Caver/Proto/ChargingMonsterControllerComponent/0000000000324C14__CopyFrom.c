/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000324C14
 * Mangled: _ZN5Caver5Proto34ChargingMonsterControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::ChargingMonsterControllerComponent::CopyFrom(Caver::Proto::ChargingMonsterControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE7E0  Caver::Proto::ChargingMonsterControllerComponent::MergeFrom(Caver::Proto::ChargingMonsterControllerComponent const&)
 *
 * Referenced strings: 2
 *   insn=0x0000000000324C28 string=0x0000000000324C2C "@"
 *   insn=0x0000000000324C34 string=0x0000000000324C38 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ChargingMonsterControllerComponent::CopyFrom(
        Caver::Proto::ChargingMonsterControllerComponent *this,
        const Caver::Proto::ChargingMonsterControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::ChargingMonsterControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::ChargingMonsterControllerComponent::MergeFrom();
  }
}


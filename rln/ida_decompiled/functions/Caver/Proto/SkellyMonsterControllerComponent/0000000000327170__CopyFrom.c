/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000327170
 * Mangled: _ZN5Caver5Proto32SkellyMonsterControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::SkellyMonsterControllerComponent::CopyFrom(Caver::Proto::SkellyMonsterControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA0A0  Caver::Proto::SkellyMonsterControllerComponent::MergeFrom(Caver::Proto::SkellyMonsterControllerComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000327184 string=0x0000000000327188 "@"
 *   insn=0x0000000000327190 string=0x0000000000327194 ""
 *   insn=0x00000000003271AC string=0x00000000001FA0A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SkellyMonsterControllerComponent::CopyFrom(
        Caver::Proto::SkellyMonsterControllerComponent *this,
        const Caver::Proto::SkellyMonsterControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::SkellyMonsterControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::SkellyMonsterControllerComponent::MergeFrom();
  }
}


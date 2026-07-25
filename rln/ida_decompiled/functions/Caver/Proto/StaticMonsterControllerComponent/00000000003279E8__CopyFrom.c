/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003279E8
 * Mangled: _ZN5Caver5Proto32StaticMonsterControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::StaticMonsterControllerComponent::CopyFrom(Caver::Proto::StaticMonsterControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC490  Caver::Proto::StaticMonsterControllerComponent::MergeFrom(Caver::Proto::StaticMonsterControllerComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000003279FC string=0x0000000000327A00 "@"
 *   insn=0x0000000000327A08 string=0x0000000000327A0C ""
 *   insn=0x0000000000327A24 string=0x00000000001FC490 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::StaticMonsterControllerComponent::CopyFrom(
        Caver::Proto::StaticMonsterControllerComponent *this,
        const Caver::Proto::StaticMonsterControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::StaticMonsterControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::StaticMonsterControllerComponent::MergeFrom();
  }
}


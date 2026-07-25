/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000326BBC
 * Mangled: _ZN5Caver5Proto33LeapingMonsterControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::LeapingMonsterControllerComponent::CopyFrom(Caver::Proto::LeapingMonsterControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FAE00  Caver::Proto::LeapingMonsterControllerComponent::MergeFrom(Caver::Proto::LeapingMonsterControllerComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000326BD0 string=0x0000000000326BD4 "@"
 *   insn=0x0000000000326BDC string=0x0000000000326BE0 ""
 *   insn=0x0000000000326BF8 string=0x00000000001FAE00 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::LeapingMonsterControllerComponent::CopyFrom(
        Caver::Proto::LeapingMonsterControllerComponent *this,
        const Caver::Proto::LeapingMonsterControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::LeapingMonsterControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::LeapingMonsterControllerComponent::MergeFrom();
  }
}


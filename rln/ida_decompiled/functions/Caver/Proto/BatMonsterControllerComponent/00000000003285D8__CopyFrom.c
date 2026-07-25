/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003285D8
 * Mangled: _ZN5Caver5Proto29BatMonsterControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::BatMonsterControllerComponent::CopyFrom(Caver::Proto::BatMonsterControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4500  Caver::Proto::BatMonsterControllerComponent::MergeFrom(Caver::Proto::BatMonsterControllerComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000003285EC string=0x00000000003285F0 "@"
 *   insn=0x00000000003285F8 string=0x00000000003285FC ""
 *   insn=0x0000000000328614 string=0x00000000001F4500 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::BatMonsterControllerComponent::CopyFrom(
        Caver::Proto::BatMonsterControllerComponent *this,
        const Caver::Proto::BatMonsterControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::BatMonsterControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::BatMonsterControllerComponent::MergeFrom();
  }
}


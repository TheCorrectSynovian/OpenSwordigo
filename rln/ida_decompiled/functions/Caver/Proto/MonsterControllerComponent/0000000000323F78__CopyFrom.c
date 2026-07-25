/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323F78
 * Mangled: _ZN5Caver5Proto26MonsterControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::MonsterControllerComponent::CopyFrom(Caver::Proto::MonsterControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5300  Caver::Proto::MonsterControllerComponent::MergeFrom(Caver::Proto::MonsterControllerComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000323F8C string=0x0000000000323F90 "@"
 *   insn=0x0000000000323F98 string=0x0000000000323F9C ""
 *   insn=0x0000000000323FB4 string=0x00000000001F5300 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MonsterControllerComponent::CopyFrom(
        Caver::Proto::MonsterControllerComponent *this,
        const Caver::Proto::MonsterControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::MonsterControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::MonsterControllerComponent::MergeFrom();
  }
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003295F0
 * Mangled: _ZN5Caver5Proto33GenericMonsterControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::GenericMonsterControllerComponent::CopyFrom(Caver::Proto::GenericMonsterControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD610  Caver::Proto::GenericMonsterControllerComponent::MergeFrom(Caver::Proto::GenericMonsterControllerComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000329604 string=0x0000000000329608 "@"
 *   insn=0x0000000000329610 string=0x0000000000329614 ""
 *   insn=0x000000000032962C string=0x00000000001FD610 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GenericMonsterControllerComponent::CopyFrom(
        Caver::Proto::GenericMonsterControllerComponent *this,
        const Caver::Proto::GenericMonsterControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::GenericMonsterControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::GenericMonsterControllerComponent::MergeFrom();
  }
}


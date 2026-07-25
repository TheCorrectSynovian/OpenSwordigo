/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000321B34
 * Mangled: _ZN5Caver5Proto20FireEmitterComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::FireEmitterComponent::CopyFrom(Caver::Proto::FireEmitterComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB0F0  Caver::Proto::FireEmitterComponent::MergeFrom(Caver::Proto::FireEmitterComponent const&)
 *
 * Referenced strings: 4
 *   insn=0x0000000000321B48 string=0x0000000000321B4C "@"
 *   insn=0x0000000000321B54 string=0x0000000000321B58 ""
 *   insn=0x0000000000321B6C string=0x0000000000321B70 "`e"
 *   insn=0x0000000000321B70 string=0x00000000001FB0F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::FireEmitterComponent::CopyFrom(
        Caver::Proto::FireEmitterComponent *this,
        const Caver::Proto::FireEmitterComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::FireEmitterComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::FireEmitterComponent::MergeFrom();
  }
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000303D8C
 * Mangled: _ZN5Caver5Proto14ModelComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::ModelComponent::CopyFrom(Caver::Proto::ModelComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FCE70  Caver::Proto::ModelComponent::MergeFrom(Caver::Proto::ModelComponent const&)
 *
 * Referenced strings: 4
 *   insn=0x0000000000303DA0 string=0x0000000000303DA4 "@"
 *   insn=0x0000000000303DAC string=0x0000000000303DB0 ""
 *   insn=0x0000000000303DC4 string=0x0000000000303DC8 "*"
 *   insn=0x0000000000303DC8 string=0x00000000001FCE70 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ModelComponent::CopyFrom(
        Caver::Proto::ModelComponent *this,
        const Caver::Proto::ModelComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::ModelComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::ModelComponent::MergeFrom();
  }
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000316228
 * Mangled: _ZN5Caver5Proto24PressureTriggerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::PressureTriggerComponent::CopyFrom(Caver::Proto::PressureTriggerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF2C0  Caver::Proto::PressureTriggerComponent::MergeFrom(Caver::Proto::PressureTriggerComponent const&)
 *
 * Referenced strings: 2
 *   insn=0x000000000031623C string=0x0000000000316240 "@"
 *   insn=0x0000000000316248 string=0x000000000031624C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PressureTriggerComponent::CopyFrom(
        Caver::Proto::PressureTriggerComponent *this,
        const Caver::Proto::PressureTriggerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::PressureTriggerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::PressureTriggerComponent::MergeFrom();
  }
}


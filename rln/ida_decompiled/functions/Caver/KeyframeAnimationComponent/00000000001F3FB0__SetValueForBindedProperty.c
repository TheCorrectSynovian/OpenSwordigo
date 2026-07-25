/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3FB0
 * Mangled: ._ZN5Caver26KeyframeAnimationComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::KeyframeAnimationComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x0000000000221310  `non-virtual thunk to'Caver::KeyframeAnimationComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x0000000000221048  Caver::KeyframeAnimationComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3FB8 string=0x00000000001F3FBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::KeyframeAnimationComponent::SetValueForBindedProperty(
        Caver::KeyframeAnimationComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver26KeyframeAnimationComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}


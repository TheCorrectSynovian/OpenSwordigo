/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000221310
 * Mangled: _ZThn16_N5Caver26KeyframeAnimationComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::KeyframeAnimationComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3FB0  Caver::KeyframeAnimationComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 2
 *   insn=0x0000000000221310 string=0x0000000000221314 "'K"
 *   insn=0x0000000000221314 string=0x00000000001F3FB0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::KeyframeAnimationComponent::SetValueForBindedProperty(
        Caver::KeyframeAnimationComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::KeyframeAnimationComponent::SetValueForBindedProperty(
           (Caver::KeyframeAnimationComponent *)((char *)this - 16),
           a2,
           a3);
}


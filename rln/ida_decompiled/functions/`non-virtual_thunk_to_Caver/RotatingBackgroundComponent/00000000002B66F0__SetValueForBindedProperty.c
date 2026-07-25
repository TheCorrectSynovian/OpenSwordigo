/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B66F0
 * Mangled: _ZThn16_N5Caver27RotatingBackgroundComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::RotatingBackgroundComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC1D0  Caver::BackgroundComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002B66F4 string=0x00000000001FC1D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::RotatingBackgroundComponent::SetValueForBindedProperty(
        Caver::RotatingBackgroundComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::BackgroundComponent::SetValueForBindedProperty(
           (Caver::RotatingBackgroundComponent *)((char *)this - 16),
           a2,
           a3);
}


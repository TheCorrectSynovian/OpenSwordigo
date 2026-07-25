/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC1D0
 * Mangled: ._ZN5Caver19BackgroundComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::BackgroundComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 3
 *   0x000000000021DEC0  `non-virtual thunk to'Caver::BackgroundComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002B66EC  Caver::RotatingBackgroundComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002B66F0  `non-virtual thunk to'Caver::RotatingBackgroundComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x000000000021DD10  Caver::BackgroundComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC1D8 string=0x00000000001FC1DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BackgroundComponent::SetValueForBindedProperty(
        Caver::BackgroundComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver19BackgroundComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B66EC
 * Mangled: _ZN5Caver27RotatingBackgroundComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::RotatingBackgroundComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC1D0  Caver::BackgroundComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002B66EC string=0x00000000001FC1D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RotatingBackgroundComponent::SetValueForBindedProperty(
        Caver::RotatingBackgroundComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::BackgroundComponent::SetValueForBindedProperty(this, a2, a3);
}


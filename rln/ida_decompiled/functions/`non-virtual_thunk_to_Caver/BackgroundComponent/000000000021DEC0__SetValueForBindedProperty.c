/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021DEC0
 * Mangled: _ZThn16_N5Caver19BackgroundComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::BackgroundComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC1D0  Caver::BackgroundComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000021DEC4 string=0x00000000001FC1D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::BackgroundComponent::SetValueForBindedProperty(
        Caver::BackgroundComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::BackgroundComponent::SetValueForBindedProperty(
           (Caver::BackgroundComponent *)((char *)this - 16),
           a2,
           a3);
}


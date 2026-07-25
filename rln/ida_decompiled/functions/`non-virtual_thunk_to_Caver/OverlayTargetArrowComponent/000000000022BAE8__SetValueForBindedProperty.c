/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022BAE8
 * Mangled: _ZThn16_N5Caver27OverlayTargetArrowComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::OverlayTargetArrowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF500  Caver::OverlayComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::OverlayTargetArrowComponent::SetValueForBindedProperty(
        Caver::OverlayTargetArrowComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::OverlayComponent::SetValueForBindedProperty(
           (Caver::OverlayTargetArrowComponent *)((char *)this - 16),
           a2,
           a3);
}


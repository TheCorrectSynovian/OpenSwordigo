/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF500
 * Mangled: ._ZN5Caver16OverlayComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::OverlayComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 3
 *   0x000000000022BAE4  Caver::OverlayTargetArrowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000022BAE8  `non-virtual thunk to'Caver::OverlayTargetArrowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000022DE24  Caver::OverlayTextComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x000000000022B97C  Caver::OverlayComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FF504 string=0x000000000022B97C "i6"
 *   insn=0x00000000001FF508 string=0x00000000001FF50C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayComponent::SetValueForBindedProperty(
        Caver::OverlayComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver16OverlayComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}


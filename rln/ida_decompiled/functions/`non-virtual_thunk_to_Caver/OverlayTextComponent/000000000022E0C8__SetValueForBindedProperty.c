/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022E0C8
 * Mangled: _ZThn16_N5Caver20OverlayTextComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::OverlayTextComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FCE80  Caver::OverlayTextComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 2
 *   insn=0x000000000022E0C8 string=0x000000000022E0CC "m;"
 *   insn=0x000000000022E0CC string=0x00000000001FCE80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::OverlayTextComponent::SetValueForBindedProperty(
        Caver::OverlayTextComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::OverlayTextComponent::SetValueForBindedProperty(
           (Caver::OverlayTextComponent *)((char *)this - 16),
           a2,
           a3);
}


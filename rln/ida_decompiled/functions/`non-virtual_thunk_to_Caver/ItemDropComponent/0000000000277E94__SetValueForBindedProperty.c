/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000277E94
 * Mangled: _ZThn16_N5Caver17ItemDropComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::ItemDropComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD110  Caver::ItemDropComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000277E98 string=0x00000000001FD110 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ItemDropComponent::SetValueForBindedProperty(
        Caver::ItemDropComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::ItemDropComponent::SetValueForBindedProperty((Caver::ItemDropComponent *)((char *)this - 16), a2, a3);
}


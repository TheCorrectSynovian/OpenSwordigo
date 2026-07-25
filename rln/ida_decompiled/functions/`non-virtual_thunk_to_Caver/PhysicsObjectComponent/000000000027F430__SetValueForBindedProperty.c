/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027F430
 * Mangled: _ZThn16_N5Caver22PhysicsObjectComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::PhysicsObjectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203530  Caver::PhysicsObjectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000027F430 string=0x000000000027F434 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::PhysicsObjectComponent::SetValueForBindedProperty(
        Caver::PhysicsObjectComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::PhysicsObjectComponent::SetValueForBindedProperty(
           (Caver::PhysicsObjectComponent *)((char *)this - 16),
           a2,
           a3);
}


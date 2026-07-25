/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203530
 * Mangled: ._ZN5Caver22PhysicsObjectComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::PhysicsObjectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x000000000027F430  `non-virtual thunk to'Caver::PhysicsObjectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x000000000027F310  Caver::PhysicsObjectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203538 string=0x000000000020353C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PhysicsObjectComponent::SetValueForBindedProperty(
        Caver::PhysicsObjectComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver22PhysicsObjectComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}


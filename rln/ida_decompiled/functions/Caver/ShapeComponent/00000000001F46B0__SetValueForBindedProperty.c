/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F46B0
 * Mangled: ._ZN5Caver14ShapeComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 2
 *   0x000000000021A3FC  Caver::CollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000238650  Caver::ShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x0000000000238650  Caver::ShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F46B8 string=0x00000000001F46BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ShapeComponent::SetValueForBindedProperty(
        Caver::ShapeComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver14ShapeComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}


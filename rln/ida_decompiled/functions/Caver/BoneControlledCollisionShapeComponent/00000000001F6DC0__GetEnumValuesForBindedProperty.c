/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6DC0
 * Mangled: ._ZN5Caver37BoneControlledCollisionShapeComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::BoneControlledCollisionShapeComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x00000000002147CC  Caver::BindingValue::~BindingValue()
 *
 * Callees: 1
 *   0x0000000000214220  Caver::BoneControlledCollisionShapeComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6DC8 string=0x00000000001F6DCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BoneControlledCollisionShapeComponent::GetEnumValuesForBindedProperty(Caver::Component *a1)
{
  return _ZN5Caver37BoneControlledCollisionShapeComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE(a1);
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002148E0
 * Mangled: _ZN5Caver37BoneControlledCollisionShapeComponent22ValueForBindedPropertyEi
 * Demangled: Caver::BoneControlledCollisionShapeComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000002001A0  Caver::CollisionShapeComponent::ValueForBindedProperty(int)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000002148E0 string=0x00000000002148E4 "a"
 *   insn=0x00000000002148E4 string=0x00000000002148F0 ","
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BoneControlledCollisionShapeComponent::ValueForBindedProperty(
        Caver::BoneControlledCollisionShapeComponent *this,
        int a2)
{
  if ( a2 == 301 )
    Caver::BindingValue::ValueWithString();
  else
    Caver::CollisionShapeComponent::ValueForBindedProperty(this, a2);
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002148F4
 * Mangled: _ZThn16_N5Caver37BoneControlledCollisionShapeComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::BoneControlledCollisionShapeComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000002001A0  Caver::CollisionShapeComponent::ValueForBindedProperty(int)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000002148F8 string=0x00000000002148FC "a"
 *   insn=0x00000000002148FC string=0x0000000000214908 "&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::BoneControlledCollisionShapeComponent::ValueForBindedProperty(
        Caver::BoneControlledCollisionShapeComponent *this,
        int a2)
{
  Caver::CollisionShapeComponent *v2; // x0

  v2 = (Caver::BoneControlledCollisionShapeComponent *)((char *)this - 16);
  if ( a2 == 301 )
    Caver::BindingValue::ValueWithString();
  else
    Caver::CollisionShapeComponent::ValueForBindedProperty(v2, a2);
}


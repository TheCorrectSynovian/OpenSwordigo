/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F36F0
 * Mangled: ._ZN5Caver14ShapeComponent22ValueForBindedPropertyEi
 * Demangled: Caver::ShapeComponent::ValueForBindedProperty(int)
 *
 * Callers: 2
 *   0x0000000000219E7C  Caver::CollisionShapeComponent::ValueForBindedProperty(int)
 *   0x0000000000238648  `non-virtual thunk to'Caver::ShapeComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x00000000002385C4  Caver::ShapeComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F36F4 string=0x00000000002385C4 ")"
 *   insn=0x00000000001F36F8 string=0x00000000001F36FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ShapeComponent::ValueForBindedProperty(Caver::ShapeComponent *this, int a2)
{
  return _ZN5Caver14ShapeComponent22ValueForBindedPropertyEi(this, a2);
}


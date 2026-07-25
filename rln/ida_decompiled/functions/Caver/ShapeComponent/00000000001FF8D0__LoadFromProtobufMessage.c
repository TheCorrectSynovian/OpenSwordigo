/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF8D0
 * Mangled: ._ZN5Caver14ShapeComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 1
 *   0x0000000000217C08  Caver::CollisionShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x0000000000236DAC  Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF8D8 string=0x00000000001FF8DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ShapeComponent::LoadFromProtobufMessage(
        Caver::ShapeComponent *this,
        const Caver::Proto::Component *a2)
{
  return _ZN5Caver14ShapeComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE(this, a2);
}


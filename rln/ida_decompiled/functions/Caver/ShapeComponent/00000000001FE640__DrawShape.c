/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE640
 * Mangled: ._ZN5Caver14ShapeComponent9DrawShapeEPNS_16RenderingContextERKNS_5ShapeERKNS_7Matrix4E
 * Demangled: Caver::ShapeComponent::DrawShape(Caver::RenderingContext *,Caver::Shape const&,Caver::Matrix4 const&)
 *
 * Callers: 2
 *   0x000000000021B6C4  Caver::CollisionShapeComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000238E98  Caver::ShapeComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x0000000000238F7C  Caver::ShapeComponent::DrawShape(Caver::RenderingContext *,Caver::Shape const&,Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE648 string=0x00000000001FE64C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ShapeComponent::DrawShape(
        Caver::ShapeComponent *this,
        Caver::RenderingContext *a2,
        const Caver::Shape *a3,
        const Caver::Matrix4 *a4)
{
  return _ZN5Caver14ShapeComponent9DrawShapeEPNS_16RenderingContextERKNS_5ShapeERKNS_7Matrix4E(this, a2, a3, a4);
}


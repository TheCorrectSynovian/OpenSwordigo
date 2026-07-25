/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201200
 * Mangled: ._ZN5Caver6Camera29MinDistanceForVisibleAreaSizeERKNS_7Vector2E
 * Demangled: Caver::Camera::MinDistanceForVisibleAreaSize(Caver::Vector2 const&)
 *
 * Callers: 2
 *   0x0000000000458650  Caver::CameraController::FocusAtShape(boost::intrusive_ptr<Caver::ShapeComponent> const&,Caver::Rectangle const&,bool)
 *   0x00000000004588E8  Caver::CameraController::FocusAtRectangle(Caver::Rectangle const&,float,bool)
 *
 * Callees: 1
 *   0x0000000000457640  Caver::Camera::MinDistanceForVisibleAreaSize(Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201208 string=0x000000000020120C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Camera::MinDistanceForVisibleAreaSize(Caver::Camera *this, const Caver::Vector2 *a2)
{
  return _ZN5Caver6Camera29MinDistanceForVisibleAreaSizeERKNS_7Vector2E(this, a2);
}


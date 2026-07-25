/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202C40
 * Mangled: ._ZN5Caver16CameraController12FocusAtShapeERKN5boost13intrusive_ptrINS_14ShapeComponentEEERKNS_9RectangleEb
 * Demangled: Caver::CameraController::FocusAtShape(boost::intrusive_ptr<Caver::ShapeComponent> const&,Caver::Rectangle const&,bool)
 *
 * Callers: 2
 *   0x000000000045807C  Caver::CameraController::CameraController(void)
 *   0x0000000000458C10  Caver::CameraController::RegisterProgramLibrary(Caver::ProgramState *)
 *
 * Callees: 1
 *   0x0000000000458650  Caver::CameraController::FocusAtShape(boost::intrusive_ptr<Caver::ShapeComponent> const&,Caver::Rectangle const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202C48 string=0x0000000000202C4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::CameraController::FocusAtShape()
{
  return _ZN5Caver16CameraController12FocusAtShapeERKN5boost13intrusive_ptrINS_14ShapeComponentEEERKNS_9RectangleEb();
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F58D0
 * Mangled: ._ZN5Caver16CameraController22RegisterProgramLibraryEPNS_12ProgramStateE
 * Demangled: Caver::CameraController::RegisterProgramLibrary(Caver::ProgramState *)
 *
 * Callers: 2
 *   0x0000000000348568  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverView,Caver::GameOverView>(boost::shared_ptr<Caver::GameOverView> const*,Caver::GameOverView *)
 *   0x0000000000371F64  Caver::SceneView::SceneView(void)
 *
 * Callees: 1
 *   0x0000000000458C10  Caver::CameraController::RegisterProgramLibrary(Caver::ProgramState *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F58D8 string=0x00000000001F58DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CameraController::RegisterProgramLibrary(
        Caver::CameraController *this,
        Caver::ProgramState *a2)
{
  return _ZN5Caver16CameraController22RegisterProgramLibraryEPNS_12ProgramStateE(this, a2);
}


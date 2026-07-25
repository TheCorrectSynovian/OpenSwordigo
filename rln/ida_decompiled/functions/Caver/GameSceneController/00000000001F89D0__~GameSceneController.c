/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F89D0
 * Mangled: ._ZN5Caver19GameSceneControllerD2Ev
 * Demangled: Caver::GameSceneController::~GameSceneController()
 *
 * Callers: 2
 *   0x000000000036444C  boost::detail::shared_count::shared_count<Caver::GameSceneController>(Caver::GameSceneController *)
 *   0x00000000003644E0  boost::detail::sp_counted_impl_p<Caver::GameSceneController>::dispose(void)
 *
 * Callees: 1
 *   0x0000000000364534  Caver::GameSceneController::~GameSceneController()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F89D8 string=0x00000000001F89DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameSceneController::~GameSceneController(Caver::GameSceneController *this)
{
  _ZN5Caver19GameSceneControllerD2Ev(this);
}


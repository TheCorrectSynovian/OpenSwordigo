/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9E20
 * Mangled: ._ZN5Caver22GameOverViewControllerC2Ev
 * Demangled: Caver::GameOverViewController::GameOverViewController(void)
 *
 * Callers: 1
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x0000000000347B00  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::StoreViewController,Caver::StoreViewController>(boost::shared_ptr<Caver::StoreViewController> const*,Caver::StoreViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9E28 string=0x00000000001F9E2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameOverViewController::GameOverViewController(Caver::GameOverViewController *this)
{
  JUMPOUT(0x347C20);
}


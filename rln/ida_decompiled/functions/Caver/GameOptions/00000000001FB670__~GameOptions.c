/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB670
 * Mangled: ._ZN5Caver11GameOptionsD2Ev
 * Demangled: Caver::GameOptions::~GameOptions()
 *
 * Callers: 3
 *   0x000000000036B0D0  Caver::MainMenuViewController::~MainMenuViewController()
 *   0x00000000003B4D88  boost::detail::shared_count::shared_count<Caver::GameOptions>(Caver::GameOptions *)
 *   0x00000000003B4E1C  boost::detail::sp_counted_impl_p<Caver::GameOptions>::dispose(void)
 *
 * Callees: 1
 *   0x000000000036ACA4  Caver::MainMenuViewController::MainMenuViewController(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB678 string=0x00000000001FB67C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameOptions::~GameOptions(Caver::GameOptions *this)
{
  JUMPOUT(0x36ADB0);
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200020
 * Mangled: ._ZN5Caver13PlayerProfileD2Ev
 * Demangled: Caver::PlayerProfile::~PlayerProfile()
 *
 * Callers: 2
 *   0x0000000000211D70  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::MainMenuViewController,Caver::MainMenuViewController>(boost::shared_ptr<Caver::MainMenuViewController> const*,Caver::MainMenuViewController *)
 *   0x0000000000211F24  boost::detail::sp_counted_impl_p<Caver::PlayerProfile>::dispose(void)
 *
 * Callees: 1
 *   0x0000000000211F78  Caver::PlayerProfile::~PlayerProfile()
 *
 * Referenced strings: 1
 *   insn=0x0000000000200028 string=0x000000000020002C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PlayerProfile::~PlayerProfile(Caver::PlayerProfile *this)
{
  _ZN5Caver13PlayerProfileD2Ev(this);
}


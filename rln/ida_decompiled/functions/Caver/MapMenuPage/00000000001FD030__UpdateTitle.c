/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD030
 * Mangled: ._ZN5Caver11MapMenuPage11UpdateTitleEv
 * Demangled: Caver::MapMenuPage::UpdateTitle(void)
 *
 * Callers: 2
 *   0x000000000041DE54  Caver::MapMenuPage::InitWithGameState(boost::shared_ptr<Caver::GameState> const&,bool)
 *   0x000000000041F7D4  Caver::MapMenuPage::MapViewDidSelectionDidChange(Caver::MapView *)
 *
 * Callees: 1
 *   0x000000000041E2F8  Caver::MapMenuPage::UpdateTitle(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD038 string=0x00000000001FD03C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MapMenuPage::UpdateTitle(Caver::MapMenuPage *this)
{
  return _ZN5Caver11MapMenuPage11UpdateTitleEv(this);
}


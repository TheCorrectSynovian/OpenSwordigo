/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB7A0
 * Mangled: ._ZN5Caver7MapView4InitERKN5boost10shared_ptrINS_3MapEEERKNS2_INS_9GameStateEEEbb
 * Demangled: Caver::MapView::Init(boost::shared_ptr<Caver::Map> const&,boost::shared_ptr<Caver::GameState> const&,bool,bool)
 *
 * Callers: 3
 *   0x000000000041DE54  Caver::MapMenuPage::InitWithGameState(boost::shared_ptr<Caver::GameState> const&,bool)
 *   0x000000000042D348  Caver::PortalView::PortalView(void)
 *   0x0000000000434DD0  std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *)
 *
 * Callees: 1
 *   0x0000000000422FB4  Caver::MapView::Init(boost::shared_ptr<Caver::Map> const&,boost::shared_ptr<Caver::GameState> const&,bool,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB7A8 string=0x00000000001FB7AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::MapView::Init()
{
  return _ZN5Caver7MapView4InitERKN5boost10shared_ptrINS_3MapEEERKNS2_INS_9GameStateEEEbb();
}


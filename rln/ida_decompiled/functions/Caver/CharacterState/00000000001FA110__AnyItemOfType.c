/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA110
 * Mangled: ._ZN5Caver14CharacterState13AnyItemOfTypeENS_8ItemTypeE
 * Demangled: Caver::CharacterState::AnyItemOfType(Caver::ItemType)
 *
 * Callers: 4
 *   0x00000000003D41D8  Caver::GameOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000003D4B44  Caver::GameOverlayView::UpdateSwingButtonVisibility(void)
 *   0x00000000003D6544  Caver::GameOverlayView::SetControlsHidden(bool)
 *   0x00000000003D685C  Caver::GameOverlayView::SetShowsUseButton(bool)
 *
 * Callees: 1
 *   0x00000000003AD330  Caver::CharacterState::AnyItemOfType(Caver::ItemType)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA118 string=0x00000000001FA11C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::CharacterState::AnyItemOfType()
{
  return _ZN5Caver14CharacterState13AnyItemOfTypeENS_8ItemTypeE();
}


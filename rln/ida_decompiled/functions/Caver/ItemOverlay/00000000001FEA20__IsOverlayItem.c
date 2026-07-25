/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEA20
 * Mangled: ._ZN5Caver11ItemOverlay13IsOverlayItemERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::ItemOverlay::IsOverlayItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 3
 *   0x000000000035AC54  Caver::GameViewController::GameControlButtonUp(Caver::GameControlButton)
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003DD450  Caver::ItemOverlay::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003DD66C  Caver::ItemOverlay::IsOverlayItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEA28 string=0x00000000001FEA2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ItemOverlay::IsOverlayItem()
{
  return _ZN5Caver11ItemOverlay13IsOverlayItemERKN5boost10shared_ptrINS_4ItemEEE();
}


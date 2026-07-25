/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF5F0
 * Mangled: ._ZN5Caver11ItemOverlay15UpdateItemCountERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::ItemOverlay::UpdateItemCount(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 3
 *   0x000000000035AC54  Caver::GameViewController::GameControlButtonUp(Caver::GameControlButton)
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003DD450  Caver::ItemOverlay::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003DD8AC  Caver::ItemOverlay::UpdateItemCount(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF5F8 string=0x00000000001FF5FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ItemOverlay::UpdateItemCount()
{
  return _ZN5Caver11ItemOverlay15UpdateItemCountERKN5boost10shared_ptrINS_4ItemEEE();
}


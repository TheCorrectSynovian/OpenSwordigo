/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4F20
 * Mangled: ._ZN5Caver14CharacterState10RemoveItemEPNS_4ItemE
 * Demangled: Caver::CharacterState::RemoveItem(Caver::Item *)
 *
 * Callers: 2
 *   0x000000000035AC54  Caver::GameViewController::GameControlButtonUp(Caver::GameControlButton)
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x00000000003ACD3C  Caver::CharacterState::HighestLevelItemOfType(Caver::ItemType)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4F28 string=0x00000000001F4F2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::CharacterState::RemoveItem()
{
  JUMPOUT(0x3ACF50);
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4D70
 * Mangled: ._ZN5Caver18GameViewController23RemoveItemFromCharacterERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::GameViewController::RemoveItemFromCharacter(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 2
 *   0x000000000035AC54  Caver::GameViewController::GameControlButtonUp(Caver::GameControlButton)
 *   0x000000000035D214  sub_35D214
 *
 * Callees: 1
 *   0x000000000035AC54  Caver::GameViewController::GameControlButtonUp(Caver::GameControlButton)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4D78 string=0x00000000001F4D7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameViewController::RemoveItemFromCharacter()
{
  JUMPOUT(0x35AFA8);
}


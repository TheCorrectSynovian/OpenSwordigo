/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4D60
 * Mangled: ._ZN5Caver18GameViewController18AddItemToCharacterERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x000000000035D214  sub_35D214
 *
 * Callees: 1
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4D68 string=0x00000000001F4D6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameViewController::AddItemToCharacter()
{
  return _ZN5Caver18GameViewController18AddItemToCharacterERKN5boost10shared_ptrINS_4ItemEEE();
}


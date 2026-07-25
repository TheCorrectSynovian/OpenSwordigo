/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202F20
 * Mangled: ._ZN5Caver14CharacterState7AddItemERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::CharacterState::AddItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x00000000003AC900  Caver::CharacterState::AddItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202F28 string=0x0000000000202F2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::CharacterState::AddItem()
{
  return _ZN5Caver14CharacterState7AddItemERKN5boost10shared_ptrINS_4ItemEEE();
}


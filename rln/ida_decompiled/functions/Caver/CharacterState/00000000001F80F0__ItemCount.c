/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F80F0
 * Mangled: ._ZN5Caver14CharacterState9ItemCountERKSs
 * Demangled: Caver::CharacterState::ItemCount(std::string const&)
 *
 * Callers: 2
 *   0x000000000035AC54  Caver::GameViewController::GameControlButtonUp(Caver::GameControlButton)
 *   0x000000000035CF2C  sub_35CF2C
 *
 * Callees: 1
 *   0x00000000003AD258  Caver::CharacterState::ItemCount(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F80F8 string=0x00000000001F80FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::CharacterState::ItemCount()
{
  return _ZN5Caver14CharacterState9ItemCountERKSs();
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F75F0
 * Mangled: ._ZNK5Caver5Proto14CharacterState8ByteSizeEv
 * Demangled: Caver::Proto::CharacterState::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000002F0960  Caver::Proto::GameState::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002F44B0  Caver::Proto::CharacterState::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F75F8 string=0x00000000001F75FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::CharacterState::ByteSize(Caver::Proto::CharacterState *this)
{
  return _ZNK5Caver5Proto14CharacterState8ByteSizeEv(this);
}


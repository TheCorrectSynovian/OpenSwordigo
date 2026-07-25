/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F3710
 * Mangled: _ZN5Caver5Proto14CharacterStateD0Ev
 * Demangled: Caver::Proto::CharacterState::~CharacterState()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F6740  Caver::Proto::CharacterState::~CharacterState()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002F3748  Caver::Proto::CharacterState::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000002F371C string=0x00000000002F3720 ""
 *   insn=0x00000000002F3720 string=0x00000000001F6740 "0'"
 *   insn=0x00000000002F3730 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002F3740 string=0x00000000002F3744 "`8\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::CharacterState::~CharacterState(Caver::Proto::CharacterState *this)
{
  Caver::Proto::CharacterState::~CharacterState(this);
  operator delete(this);
}


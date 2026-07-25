/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F4B00
 * Mangled: _ZN5Caver5Proto14CharacterState8CopyFromERKS1_
 * Demangled: Caver::Proto::CharacterState::CopyFrom(Caver::Proto::CharacterState const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC770  Caver::Proto::CharacterState::MergeFrom(Caver::Proto::CharacterState const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000002F4B14 string=0x00000000002F4B18 "@"
 *   insn=0x00000000002F4B20 string=0x00000000002F4B24 ""
 *   insn=0x00000000002F4B38 string=0x00000000002F4B3C ""
 *   insn=0x00000000002F4B3C string=0x00000000001FC770 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const Caver::Proto::CharacterState *__fastcall Caver::Proto::CharacterState::CopyFrom(
        const Caver::Proto::CharacterState *this,
        const Caver::Proto::CharacterState *a2)
{
  Caver::Proto::CharacterState *v3; // x20

  v3 = this;
  if ( a2 != this )
  {
    (*(void (__fastcall **)(const Caver::Proto::CharacterState *))(*(_QWORD *)this + 32LL))(this);
    return (const Caver::Proto::CharacterState *)Caver::Proto::CharacterState::MergeFrom(v3, a2);
  }
  return this;
}


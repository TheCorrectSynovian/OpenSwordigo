/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB4C0
 * Mangled: ._ZN5Caver14CharacterState23LoadFromProtobufMessageERKNS_5Proto14CharacterStateE
 * Demangled: Caver::CharacterState::LoadFromProtobufMessage(Caver::Proto::CharacterState const&)
 *
 * Callers: 1
 *   0x00000000003B62B4  Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *
 * Callees: 1
 *   0x00000000003AB174  Caver::CharacterState::LoadFromProtobufMessage(Caver::Proto::CharacterState const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB4C8 string=0x00000000001FB4CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharacterState::LoadFromProtobufMessage(
        Caver::CharacterState *this,
        const Caver::Proto::CharacterState *a2)
{
  return _ZN5Caver14CharacterState23LoadFromProtobufMessageERKNS_5Proto14CharacterStateE(this, a2);
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F2EBC
 * Mangled: _ZN5Caver5Proto24CharacterState_ItemState8CopyFromERKS1_
 * Demangled: Caver::Proto::CharacterState_ItemState::CopyFrom(Caver::Proto::CharacterState_ItemState const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FFA60  Caver::Proto::CharacterState_ItemState::MergeFrom(Caver::Proto::CharacterState_ItemState const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000002F2ED0 string=0x00000000002F2ED4 "@"
 *   insn=0x00000000002F2EDC string=0x00000000002F2EE0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::CharacterState_ItemState::CopyFrom(
        Caver::Proto::CharacterState_ItemState *this,
        const Caver::Proto::CharacterState_ItemState *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::CharacterState_ItemState *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::CharacterState_ItemState::MergeFrom(this, a2);
  }
}


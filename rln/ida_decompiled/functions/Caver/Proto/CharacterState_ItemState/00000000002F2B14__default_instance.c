/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F2B14
 * Mangled: _ZN5Caver5Proto24CharacterState_ItemState16default_instanceEv
 * Demangled: Caver::Proto::CharacterState_ItemState::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8A40  Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002F2B20 string=0x00000000002F2B24 "s"
 *   insn=0x00000000002F2B24 string=0x00000000002F2B28 "`"
 *   insn=0x00000000002F2B28 string=0x00000000002F2B2C "`"
 *   insn=0x00000000002F2B30 string=0x00000000002F2B34 "`"
 *   insn=0x00000000002F2B30 string=0x00000000001F8A40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharacterState_ItemState::default_instance(
        Caver::Proto::CharacterState_ItemState *this)
{
  __int64 result; // x0

  result = Caver::Proto::CharacterState_ItemState::default_instance_;
  if ( !Caver::Proto::CharacterState_ItemState::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_GameState_2eproto(0);
    return Caver::Proto::CharacterState_ItemState::default_instance_;
  }
  return result;
}


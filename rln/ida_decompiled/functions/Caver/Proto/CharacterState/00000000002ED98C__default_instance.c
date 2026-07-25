/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ED98C
 * Mangled: _ZN5Caver5Proto14CharacterState16default_instanceEv
 * Demangled: Caver::Proto::CharacterState::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8A40  Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002ED998 string=0x00000000002ED99C "s"
 *   insn=0x00000000002ED99C string=0x00000000002ED9A0 "`"
 *   insn=0x00000000002ED9A0 string=0x00000000002ED9A4 "`"
 *   insn=0x00000000002ED9A4 string=0x00000000002ED9A8 "&,"
 *   insn=0x00000000002ED9A8 string=0x00000000002ED9AC "`"
 *   insn=0x00000000002ED9A8 string=0x00000000001F8A40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharacterState::default_instance(Caver::Proto::CharacterState *this)
{
  __int64 result; // x0

  result = Caver::Proto::CharacterState::default_instance_;
  if ( !Caver::Proto::CharacterState::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_GameState_2eproto(0);
    return Caver::Proto::CharacterState::default_instance_;
  }
  return result;
}


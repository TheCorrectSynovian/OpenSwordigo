/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E8A58
 * Mangled: _ZN5Caver5Proto9GameState21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::GameState::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8A40  Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002E8A70 string=0x00000000002E8A74 "h"
 *   insn=0x00000000002E8A74 string=0x00000000002E8A80 "h\n"
 *   insn=0x00000000002E8A78 string=0x00000000001F8A40 "0'"
 *   insn=0x00000000002E8A8C string=0x00000000002E8A90 "h"
 *   insn=0x00000000002E8A90 string=0x00000000002E8A9C "h^"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto *__fastcall Caver::Proto::GameState::InitAsDefaultInstance(Caver::Proto *this)
{
  Caver::Proto *v1; // x19
  __int64 v2; // x8
  __int64 v3; // x8

  v1 = this;
  v2 = Caver::Proto::CharacterState::default_instance_;
  if ( !Caver::Proto::CharacterState::default_instance_ )
  {
    this = (Caver::Proto *)Caver::Proto::protobuf_AddDesc_GameState_2eproto(this);
    v2 = Caver::Proto::CharacterState::default_instance_;
  }
  *((_QWORD *)v1 + 2) = v2;
  v3 = Caver::Proto::StateProperties::default_instance_;
  if ( !Caver::Proto::StateProperties::default_instance_ )
  {
    this = (Caver::Proto *)Caver::Proto::protobuf_AddDesc_GameState_2eproto(this);
    v3 = Caver::Proto::StateProperties::default_instance_;
  }
  *((_QWORD *)v1 + 23) = v3;
  return this;
}


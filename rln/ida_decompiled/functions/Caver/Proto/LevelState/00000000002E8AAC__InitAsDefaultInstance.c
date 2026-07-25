/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E8AAC
 * Mangled: _ZN5Caver5Proto10LevelState21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::LevelState::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8A40  Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002E8AC4 string=0x00000000002E8AC8 "h"
 *   insn=0x00000000002E8AC8 string=0x00000000002E8AD4 "h"
 *   insn=0x00000000002E8ACC string=0x00000000001F8A40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto *__fastcall Caver::Proto::LevelState::InitAsDefaultInstance(Caver::Proto *this)
{
  Caver::Proto *v1; // x19
  __int64 v2; // x8

  v1 = this;
  v2 = Caver::Proto::StateProperties::default_instance_;
  if ( !Caver::Proto::StateProperties::default_instance_ )
  {
    this = (Caver::Proto *)Caver::Proto::protobuf_AddDesc_GameState_2eproto(this);
    v2 = Caver::Proto::StateProperties::default_instance_;
  }
  *((_QWORD *)v1 + 4) = v2;
  return this;
}


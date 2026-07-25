/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E8A08
 * Mangled: _ZN5Caver5Proto13PlayerProfile21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::PlayerProfile::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F8A40  Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)
 *   0x00000000002036D0  Caver::Proto::DateTime::default_instance(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002E8A14 string=0x00000000002E8A18 ".k"
 *   insn=0x00000000002E8A18 string=0x00000000002E8A1C "`"
 *   insn=0x00000000002E8A28 string=0x00000000002E8A2C "h"
 *   insn=0x00000000002E8A2C string=0x00000000002E8A38 "h"
 *   insn=0x00000000002E8A30 string=0x00000000001F8A40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto *__fastcall Caver::Proto::PlayerProfile::InitAsDefaultInstance(Caver::Proto::PlayerProfile *this)
{
  Caver::Proto *result; // x0
  __int64 v3; // x8

  result = (Caver::Proto *)Caver::Proto::DateTime::default_instance(this);
  *((_QWORD *)this + 3) = result;
  v3 = Caver::Proto::GameState::default_instance_;
  if ( !Caver::Proto::GameState::default_instance_ )
  {
    result = (Caver::Proto *)Caver::Proto::protobuf_AddDesc_GameState_2eproto(result);
    v3 = Caver::Proto::GameState::default_instance_;
  }
  *((_QWORD *)this + 7) = v3;
  return result;
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E8F3C
 * Mangled: _ZN5Caver5Proto21PlayerProfile_Counter16default_instanceEv
 * Demangled: Caver::Proto::PlayerProfile_Counter::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8A40  Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002E8F48 string=0x00000000002E8F4C "s"
 *   insn=0x00000000002E8F4C string=0x00000000002E8F50 "`"
 *   insn=0x00000000002E8F50 string=0x00000000002E8F54 "`"
 *   insn=0x00000000002E8F58 string=0x00000000002E8F5C "`"
 *   insn=0x00000000002E8F58 string=0x00000000001F8A40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PlayerProfile_Counter::default_instance(Caver::Proto::PlayerProfile_Counter *this)
{
  __int64 result; // x0

  result = Caver::Proto::PlayerProfile_Counter::default_instance_;
  if ( !Caver::Proto::PlayerProfile_Counter::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_GameState_2eproto(0);
    return Caver::Proto::PlayerProfile_Counter::default_instance_;
  }
  return result;
}


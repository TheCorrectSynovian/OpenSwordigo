/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E57CC
 * Mangled: _ZN5Caver5Proto11GameOptions16default_instanceEv
 * Demangled: Caver::Proto::GameOptions::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBA80  Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002E57D8 string=0x00000000002E57DC "s"
 *   insn=0x00000000002E57DC string=0x00000000002E57E0 "`"
 *   insn=0x00000000002E57E0 string=0x00000000002E57E4 "`"
 *   insn=0x00000000002E57E8 string=0x00000000002E57EC "`"
 *   insn=0x00000000002E57E8 string=0x00000000001FBA80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GameOptions::default_instance(Caver::Proto::GameOptions *this)
{
  __int64 result; // x0

  result = Caver::Proto::GameOptions::default_instance_;
  if ( !Caver::Proto::GameOptions::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_GameData_2eproto(0);
    return Caver::Proto::GameOptions::default_instance_;
  }
  return result;
}


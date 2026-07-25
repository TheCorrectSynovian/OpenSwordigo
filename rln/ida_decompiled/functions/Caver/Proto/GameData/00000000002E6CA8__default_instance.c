/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E6CA8
 * Mangled: _ZN5Caver5Proto8GameData16default_instanceEv
 * Demangled: Caver::Proto::GameData::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBA80  Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002E6CB4 string=0x00000000002E6CB8 "s2G"
 *   insn=0x00000000002E6CB8 string=0x00000000002E6CBC "`"
 *   insn=0x00000000002E6CBC string=0x00000000002E6CC0 "`"
 *   insn=0x00000000002E6CC0 string=0x00000000002E6CC4 "oS"
 *   insn=0x00000000002E6CC4 string=0x00000000002E6CC8 "`"
 *   insn=0x00000000002E6CC4 string=0x00000000001FBA80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GameData::default_instance(Caver::Proto::GameData *this)
{
  __int64 result; // x0

  result = Caver::Proto::GameData::default_instance_;
  if ( !Caver::Proto::GameData::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_GameData_2eproto(0);
    return Caver::Proto::GameData::default_instance_;
  }
  return result;
}


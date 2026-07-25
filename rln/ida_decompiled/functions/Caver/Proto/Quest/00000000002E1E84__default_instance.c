/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E1E84
 * Mangled: _ZN5Caver5Proto5Quest16default_instanceEv
 * Demangled: Caver::Proto::Quest::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBA80  Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002E1E8C string=0x00000000002E1E90 "3 "
 *   insn=0x00000000002E1E90 string=0x00000000002E1E94 "s"
 *   insn=0x00000000002E1E94 string=0x00000000002E1E98 "`"
 *   insn=0x00000000002E1E98 string=0x00000000002E1E9C "`"
 *   insn=0x00000000002E1EA0 string=0x00000000002E1EA4 "`"
 *   insn=0x00000000002E1EA0 string=0x00000000001FBA80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Quest::default_instance(Caver::Proto::Quest *this)
{
  __int64 result; // x0

  result = Caver::Proto::Quest::default_instance_;
  if ( !Caver::Proto::Quest::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_GameData_2eproto(0);
    return Caver::Proto::Quest::default_instance_;
  }
  return result;
}


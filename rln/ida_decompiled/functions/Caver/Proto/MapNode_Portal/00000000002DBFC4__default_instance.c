/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DBFC4
 * Mangled: _ZN5Caver5Proto14MapNode_Portal16default_instanceEv
 * Demangled: Caver::Proto::MapNode_Portal::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBA80  Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002DBFCC string=0x00000000002DBFD0 "s "
 *   insn=0x00000000002DBFD0 string=0x00000000002DBFD4 "s"
 *   insn=0x00000000002DBFD4 string=0x00000000002DBFD8 "`"
 *   insn=0x00000000002DBFD8 string=0x00000000002DBFDC "`"
 *   insn=0x00000000002DBFE0 string=0x00000000002DBFE4 "`"
 *   insn=0x00000000002DBFE0 string=0x00000000001FBA80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MapNode_Portal::default_instance(Caver::Proto::MapNode_Portal *this)
{
  __int64 result; // x0

  result = Caver::Proto::MapNode_Portal::default_instance_;
  if ( !Caver::Proto::MapNode_Portal::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_GameData_2eproto(0);
    return Caver::Proto::MapNode_Portal::default_instance_;
  }
  return result;
}


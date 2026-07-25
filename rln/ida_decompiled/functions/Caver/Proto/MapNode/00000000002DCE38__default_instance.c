/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DCE38
 * Mangled: _ZN5Caver5Proto7MapNode16default_instanceEv
 * Demangled: Caver::Proto::MapNode::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBA80  Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)
 *
 * Referenced strings: 7
 *   insn=0x00000000002DCE40 string=0x00000000002DCE44 "S "
 *   insn=0x00000000002DCE44 string=0x00000000002DCE48 "s"
 *   insn=0x00000000002DCE48 string=0x00000000002DCE4C "`"
 *   insn=0x00000000002DCE4C string=0x00000000002DCE50 "`"
 *   insn=0x00000000002DCE50 string=0x00000000002DCE54 "{"
 *   insn=0x00000000002DCE54 string=0x00000000002DCE58 "`"
 *   insn=0x00000000002DCE54 string=0x00000000001FBA80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MapNode::default_instance(Caver::Proto::MapNode *this)
{
  __int64 result; // x0

  result = Caver::Proto::MapNode::default_instance_;
  if ( !Caver::Proto::MapNode::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_GameData_2eproto(0);
    return Caver::Proto::MapNode::default_instance_;
  }
  return result;
}


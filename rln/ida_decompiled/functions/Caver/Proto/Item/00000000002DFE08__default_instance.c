/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DFE08
 * Mangled: _ZN5Caver5Proto4Item16default_instanceEv
 * Demangled: Caver::Proto::Item::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBA80  Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002DFE10 string=0x00000000002DFE14 "3 "
 *   insn=0x00000000002DFE14 string=0x00000000002DFE18 "s"
 *   insn=0x00000000002DFE18 string=0x00000000002DFE1C "`"
 *   insn=0x00000000002DFE1C string=0x00000000002DFE20 "`"
 *   insn=0x00000000002DFE24 string=0x00000000002DFE28 "`"
 *   insn=0x00000000002DFE24 string=0x00000000001FBA80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Item::default_instance(Caver::Proto::Item *this)
{
  __int64 result; // x0

  result = Caver::Proto::Item::default_instance_;
  if ( !Caver::Proto::Item::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_GameData_2eproto(0);
    return Caver::Proto::Item::default_instance_;
  }
  return result;
}


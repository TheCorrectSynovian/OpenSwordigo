/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DF200
 * Mangled: _ZN5Caver5Proto3Map16default_instanceEv
 * Demangled: Caver::Proto::Map::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBA80  Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002DF208 string=0x00000000002DF20C "3 "
 *   insn=0x00000000002DF20C string=0x00000000002DF210 "s"
 *   insn=0x00000000002DF210 string=0x00000000002DF214 "`"
 *   insn=0x00000000002DF214 string=0x00000000002DF218 "`"
 *   insn=0x00000000002DF21C string=0x00000000002DF220 "`"
 *   insn=0x00000000002DF21C string=0x00000000001FBA80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Map::default_instance(Caver::Proto::Map *this)
{
  __int64 result; // x0

  result = Caver::Proto::Map::default_instance_;
  if ( !Caver::Proto::Map::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_GameData_2eproto(0);
    return Caver::Proto::Map::default_instance_;
  }
  return result;
}


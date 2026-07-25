/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DE674
 * Mangled: _ZN5Caver5Proto7MapZone16default_instanceEv
 * Demangled: Caver::Proto::MapZone::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBA80  Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002DE67C string=0x00000000002DE680 "S "
 *   insn=0x00000000002DE680 string=0x00000000002DE684 "sFC"
 *   insn=0x00000000002DE684 string=0x00000000002DE688 "`"
 *   insn=0x00000000002DE688 string=0x00000000002DE68C "`"
 *   insn=0x00000000002DE690 string=0x00000000002DE694 "`"
 *   insn=0x00000000002DE690 string=0x00000000001FBA80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MapZone::default_instance(Caver::Proto::MapZone *this)
{
  __int64 result; // x0

  result = Caver::Proto::MapZone::default_instance_;
  if ( !Caver::Proto::MapZone::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_GameData_2eproto(0);
    return Caver::Proto::MapZone::default_instance_;
  }
  return result;
}


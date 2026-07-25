/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D0484
 * Mangled: _ZN5Caver5Proto7Polygon16default_instanceEv
 * Demangled: Caver::Proto::Polygon::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FAA90  Caver::Proto::Polygon::default_instance(void)
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002D0490 string=0x00000000002D0494 "sjF"
 *   insn=0x00000000002D0494 string=0x00000000002D0498 "`"
 *   insn=0x00000000002D0498 string=0x00000000002D049C "`"
 *   insn=0x00000000002D04A0 string=0x00000000002D04A4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Polygon::default_instance(Caver::Proto::Polygon *this)
{
  __int64 result; // x0

  result = Caver::Proto::Polygon::default_instance_;
  if ( !Caver::Proto::Polygon::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Common_2eproto(0);
    return Caver::Proto::Polygon::default_instance_;
  }
  return result;
}


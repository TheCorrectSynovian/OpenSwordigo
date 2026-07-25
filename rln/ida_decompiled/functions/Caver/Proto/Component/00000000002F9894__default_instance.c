/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9894
 * Mangled: _ZN5Caver5Proto9Component16default_instanceEv
 * Demangled: Caver::Proto::Component::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002F989C string=0x00000000002F98A0 "s"
 *   insn=0x00000000002F98A0 string=0x00000000002F98A4 "sNG"
 *   insn=0x00000000002F98A4 string=0x00000000002F98A8 "`"
 *   insn=0x00000000002F98A8 string=0x00000000002F98AC "`"
 *   insn=0x00000000002F98B0 string=0x00000000002F98B4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Component::default_instance(Caver::Proto::Component *this)
{
  __int64 result; // x0

  result = Caver::Proto::Component::default_instance_;
  if ( !Caver::Proto::Component::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::Component::default_instance_;
  }
  return result;
}


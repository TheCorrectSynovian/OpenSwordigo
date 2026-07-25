/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE7E8
 * Mangled: _ZN5Caver5Proto7Vector316default_instanceEv
 * Demangled: Caver::Proto::Vector3::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FD230  Caver::Proto::Vector3::default_instance(void)
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002CE7F4 string=0x00000000002CE7F8 "s"
 *   insn=0x00000000002CE7F8 string=0x00000000002CE7FC "`"
 *   insn=0x00000000002CE7FC string=0x00000000002CE800 "`"
 *   insn=0x00000000002CE804 string=0x00000000002CE808 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Vector3::default_instance(Caver::Proto::Vector3 *this)
{
  __int64 result; // x0

  result = Caver::Proto::Vector3::default_instance_;
  if ( !Caver::Proto::Vector3::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Common_2eproto(0);
    return Caver::Proto::Vector3::default_instance_;
  }
  return result;
}


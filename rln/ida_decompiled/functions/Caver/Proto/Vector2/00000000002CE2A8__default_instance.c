/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE2A8
 * Mangled: _ZN5Caver5Proto7Vector216default_instanceEv
 * Demangled: Caver::Proto::Vector2::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FB0B0  Caver::Proto::Vector2::default_instance(void)
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002CE2B4 string=0x00000000002CE2B8 "svG"
 *   insn=0x00000000002CE2B8 string=0x00000000002CE2BC "`"
 *   insn=0x00000000002CE2BC string=0x00000000002CE2C0 "`"
 *   insn=0x00000000002CE2C4 string=0x00000000002CE2C8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Vector2::default_instance(Caver::Proto::Vector2 *this)
{
  __int64 result; // x0

  result = Caver::Proto::Vector2::default_instance_;
  if ( !Caver::Proto::Vector2::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Common_2eproto(0);
    return Caver::Proto::Vector2::default_instance_;
  }
  return result;
}


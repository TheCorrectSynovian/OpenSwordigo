/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CEDE0
 * Mangled: _ZN5Caver5Proto9Rectangle16default_instanceEv
 * Demangled: Caver::Proto::Rectangle::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F9600  Caver::Proto::Rectangle::default_instance(void)
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002CEDEC string=0x00000000002CEDF0 "s"
 *   insn=0x00000000002CEDF0 string=0x00000000002CEDF4 "`"
 *   insn=0x00000000002CEDF4 string=0x00000000002CEDF8 "`"
 *   insn=0x00000000002CEDF8 string=0x00000000002CEDFC "1"
 *   insn=0x00000000002CEDFC string=0x00000000002CEE00 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Rectangle::default_instance(Caver::Proto::Rectangle *this)
{
  __int64 result; // x0

  result = Caver::Proto::Rectangle::default_instance_;
  if ( !Caver::Proto::Rectangle::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Common_2eproto(0);
    return Caver::Proto::Rectangle::default_instance_;
  }
  return result;
}


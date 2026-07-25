/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CFD20
 * Mangled: _ZN5Caver5Proto6Circle16default_instanceEv
 * Demangled: Caver::Proto::Circle::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F4240  Caver::Proto::Circle::default_instance(void)
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002CFD2C string=0x00000000002CFD30 "sZC"
 *   insn=0x00000000002CFD30 string=0x00000000002CFD34 "`"
 *   insn=0x00000000002CFD34 string=0x00000000002CFD38 "`"
 *   insn=0x00000000002CFD38 string=0x00000000002CFD3C "a"
 *   insn=0x00000000002CFD3C string=0x00000000002CFD40 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Circle::default_instance(Caver::Proto::Circle *this)
{
  __int64 result; // x0

  result = Caver::Proto::Circle::default_instance_;
  if ( !Caver::Proto::Circle::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Common_2eproto(0);
    return Caver::Proto::Circle::default_instance_;
  }
  return result;
}


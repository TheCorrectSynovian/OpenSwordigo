/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CDE4C
 * Mangled: _ZN5Caver5Proto8DateTime16default_instanceEv
 * Demangled: Caver::Proto::DateTime::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002036D0  Caver::Proto::DateTime::default_instance(void)
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002CDE58 string=0x00000000002CDE5C "srB"
 *   insn=0x00000000002CDE5C string=0x00000000002CDE60 "`"
 *   insn=0x00000000002CDE60 string=0x00000000002CDE64 "`"
 *   insn=0x00000000002CDE68 string=0x00000000002CDE6C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DateTime::default_instance(Caver::Proto::DateTime *this)
{
  __int64 result; // x0

  result = Caver::Proto::DateTime::default_instance_;
  if ( !Caver::Proto::DateTime::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Common_2eproto(0);
    return Caver::Proto::DateTime::default_instance_;
  }
  return result;
}


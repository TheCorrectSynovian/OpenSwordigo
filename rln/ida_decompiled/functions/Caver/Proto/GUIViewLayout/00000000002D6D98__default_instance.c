/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D6D98
 * Mangled: _ZN5Caver5Proto13GUIViewLayout16default_instanceEv
 * Demangled: Caver::Proto::GUIViewLayout::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FC930  Caver::Proto::GUIViewLayout::default_instance(void)
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002D6DA4 string=0x00000000002D6DA8 "s"
 *   insn=0x00000000002D6DA8 string=0x00000000002D6DAC "`"
 *   insn=0x00000000002D6DAC string=0x00000000002D6DB0 "`"
 *   insn=0x00000000002D6DB0 string=0x00000000002D6DB4 "C"
 *   insn=0x00000000002D6DB4 string=0x00000000002D6DB8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GUIViewLayout::default_instance(Caver::Proto::GUIViewLayout *this)
{
  __int64 result; // x0

  result = Caver::Proto::GUIViewLayout::default_instance_;
  if ( !Caver::Proto::GUIViewLayout::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Common_2eproto(0);
    return Caver::Proto::GUIViewLayout::default_instance_;
  }
  return result;
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA900
 * Mangled: _ZN5Caver5Proto14SwingComponent16default_instanceEv
 * Demangled: Caver::Proto::SwingComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FC430  Caver::Proto::SwingComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA908 string=0x00000000002FA90C "S"
 *   insn=0x00000000002FA90C string=0x00000000002FA910 "s"
 *   insn=0x00000000002FA910 string=0x00000000002FA914 "`"
 *   insn=0x00000000002FA914 string=0x00000000002FA918 "`"
 *   insn=0x00000000002FA91C string=0x00000000002FA920 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SwingComponent::default_instance(Caver::Proto::SwingComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::SwingComponent::default_instance_;
  if ( !Caver::Proto::SwingComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::SwingComponent::default_instance_;
  }
  return result;
}


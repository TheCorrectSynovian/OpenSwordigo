/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA264
 * Mangled: _ZN5Caver5Proto19EntityInfoComponent16default_instanceEv
 * Demangled: Caver::Proto::EntityInfoComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FD2C0  Caver::Proto::EntityInfoComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FA26C string=0x00000000002FA270 "s"
 *   insn=0x00000000002FA270 string=0x00000000002FA274 "s"
 *   insn=0x00000000002FA274 string=0x00000000002FA278 "`"
 *   insn=0x00000000002FA278 string=0x00000000002FA27C "`"
 *   insn=0x00000000002FA27C string=0x00000000002FA280 "t!"
 *   insn=0x00000000002FA280 string=0x00000000002FA284 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityInfoComponent::default_instance(Caver::Proto::EntityInfoComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::EntityInfoComponent::default_instance_;
  if ( !Caver::Proto::EntityInfoComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::EntityInfoComponent::default_instance_;
  }
  return result;
}


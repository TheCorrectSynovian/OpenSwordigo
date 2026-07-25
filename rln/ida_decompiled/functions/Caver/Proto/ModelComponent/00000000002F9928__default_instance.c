/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9928
 * Mangled: _ZN5Caver5Proto14ModelComponent16default_instanceEv
 * Demangled: Caver::Proto::ModelComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002027E0  Caver::Proto::ModelComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002F9930 string=0x00000000002F9934 "s"
 *   insn=0x00000000002F9934 string=0x00000000002F9938 "sz@"
 *   insn=0x00000000002F9938 string=0x00000000002F993C "`"
 *   insn=0x00000000002F993C string=0x00000000002F9940 "`"
 *   insn=0x00000000002F9944 string=0x00000000002F9948 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ModelComponent::default_instance(Caver::Proto::ModelComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::ModelComponent::default_instance_;
  if ( !Caver::Proto::ModelComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::ModelComponent::default_instance_;
  }
  return result;
}


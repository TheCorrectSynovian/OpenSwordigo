/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA95C
 * Mangled: _ZN5Caver5Proto19WeaponGlowComponent16default_instanceEv
 * Demangled: Caver::Proto::WeaponGlowComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FC8F0  Caver::Proto::WeaponGlowComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA964 string=0x00000000002FA968 "S"
 *   insn=0x00000000002FA968 string=0x00000000002FA96C "sNC"
 *   insn=0x00000000002FA96C string=0x00000000002FA970 "`"
 *   insn=0x00000000002FA970 string=0x00000000002FA974 "`"
 *   insn=0x00000000002FA978 string=0x00000000002FA97C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WeaponGlowComponent::default_instance(Caver::Proto::WeaponGlowComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::WeaponGlowComponent::default_instance_;
  if ( !Caver::Proto::WeaponGlowComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::WeaponGlowComponent::default_instance_;
  }
  return result;
}


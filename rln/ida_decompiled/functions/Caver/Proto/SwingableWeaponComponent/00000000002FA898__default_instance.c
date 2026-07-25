/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA898
 * Mangled: _ZN5Caver5Proto24SwingableWeaponComponent16default_instanceEv
 * Demangled: Caver::Proto::SwingableWeaponComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F4E20  Caver::Proto::SwingableWeaponComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA8A0 string=0x00000000002FA8A4 "S"
 *   insn=0x00000000002FA8A4 string=0x00000000002FA8A8 "s"
 *   insn=0x00000000002FA8A8 string=0x00000000002FA8AC "`"
 *   insn=0x00000000002FA8AC string=0x00000000002FA8B0 "`"
 *   insn=0x00000000002FA8B4 string=0x00000000002FA8B8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SwingableWeaponComponent::default_instance(
        Caver::Proto::SwingableWeaponComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::SwingableWeaponComponent::default_instance_;
  if ( !Caver::Proto::SwingableWeaponComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::SwingableWeaponComponent::default_instance_;
  }
  return result;
}


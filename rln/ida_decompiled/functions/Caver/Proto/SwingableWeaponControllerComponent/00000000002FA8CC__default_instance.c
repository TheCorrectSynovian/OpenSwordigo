/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA8CC
 * Mangled: _ZN5Caver5Proto34SwingableWeaponControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::SwingableWeaponControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F7D20  Caver::Proto::SwingableWeaponControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA8D4 string=0x00000000002FA8D8 "s"
 *   insn=0x00000000002FA8D8 string=0x00000000002FA8DC "snG"
 *   insn=0x00000000002FA8DC string=0x00000000002FA8E0 "`"
 *   insn=0x00000000002FA8E0 string=0x00000000002FA8E4 "`"
 *   insn=0x00000000002FA8E8 string=0x00000000002FA8EC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SwingableWeaponControllerComponent::default_instance(
        Caver::Proto::SwingableWeaponControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::SwingableWeaponControllerComponent::default_instance_;
  if ( !Caver::Proto::SwingableWeaponControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::SwingableWeaponControllerComponent::default_instance_;
  }
  return result;
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C7DAC
 * Mangled: _ZNK5Caver34SwingableWeaponControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::SwingableWeaponControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F7D20  Caver::Proto::SwingableWeaponControllerComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 24
 *   insn=0x00000000002C7DC0 string=0x00000000002C7DC4 "W"
 *   insn=0x00000000002C7DC4 string=0x00000000002C7DC8 "!"
 *   insn=0x00000000002C7DC8 string=0x00000000002C7DCC ""
 *   insn=0x00000000002C7DD8 string=0x00000000001F7D20 "0'"
 *   insn=0x00000000002C7DDC string=0x00000000002C7DE0 "b"
 *   insn=0x00000000002C7DF0 string=0x00000000001F7570 "0'"
 *   insn=0x00000000002C7DF4 string=0x00000000002C7DF8 "\n!"
 *   insn=0x00000000002C7DF8 string=0x00000000002C7DFC "hz@"
 *   insn=0x00000000002C7E04 string=0x00000000002C7E08 "J\tB"
 *   insn=0x00000000002C7E08 string=0x00000000002C7E0C "u""
 *   insn=0x00000000002C7E10 string=0x00000000002C7E14 "("
 *   insn=0x00000000002C7E28 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002C7E2C string=0x00000000002C7E30 ""
 *   insn=0x00000000002C7E30 string=0x00000000002C7E34 "a"
 *   insn=0x00000000002C7E34 string=0x00000000002C7E38 ""
 *   insn=0x00000000002C7E44 string=0x00000000002C7E48 "h"
 *   insn=0x00000000002C7E48 string=0x00000000002C7E4C ""
 *   insn=0x00000000002C7E4C string=0x00000000002C7E50 "H"
 *   insn=0x00000000002C7E50 string=0x00000000002C7E54 "\t!"
 *   insn=0x00000000002C7E5C string=0x00000000002C7E60 ")qD"
 *   insn=0x00000000002C7E60 string=0x00000000002C7E64 ""
 *   insn=0x00000000002C7E7C string=0x00000000002C7E80 ""
 *   insn=0x00000000002C7E80 string=0x00000000002C7E84 "a"
 *   insn=0x00000000002C7E84 string=0x00000000002C7E88 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SwingableWeaponControllerComponent::SaveToProtobufMessage(
        Caver::SwingableWeaponControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::SwingableWeaponControllerComponent *v3; // x0
  __int64 v4; // x20
  int v5; // w9
  __int64 *v6; // x0
  __int64 result; // x0
  __int64 *v8; // x0

  v3 = (Caver::Proto::SwingableWeaponControllerComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::SwingableWeaponControllerComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(v4 + 32);
  v6 = *(__int64 **)(v4 + 16);
  *(_DWORD *)(v4 + 12) = *((_DWORD *)this + 30);
  *(_DWORD *)(v4 + 32) = v5 | 3;
  if ( v6 == &Caver::Proto::SwingableWeaponControllerComponent::_default_controlling_bone_name_ )
  {
    v6 = (__int64 *)operator new(8u);
    *v6 = (__int64)&byte_6FD2F8;
    *(_QWORD *)(v4 + 16) = v6;
  }
  result = sub_56A6A8(v6);
  if ( *(_QWORD *)(*((_QWORD *)this + 18) - 24LL) )
  {
    v8 = *(__int64 **)(v4 + 24);
    *(_DWORD *)(v4 + 32) |= 4u;
    if ( v8 == &Caver::Proto::SwingableWeaponControllerComponent::_default_weapon_template_name_ )
    {
      v8 = (__int64 *)operator new(8u);
      *v8 = (__int64)&byte_6FD2F8;
      *(_QWORD *)(v4 + 24) = v8;
    }
    return sub_56A6A8(v8);
  }
  return result;
}


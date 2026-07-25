/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C7D10
 * Mangled: _ZN5Caver34SwingableWeaponControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::SwingableWeaponControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 16
 *   insn=0x00000000002C7D24 string=0x00000000002C7D28 "!"
 *   insn=0x00000000002C7D24 string=0x00000000001FA840 "0'"
 *   insn=0x00000000002C7D28 string=0x00000000002C7D2C ""
 *   insn=0x00000000002C7D44 string=0x00000000002C7D48 "iz@"
 *   insn=0x00000000002C7D48 string=0x00000000002C7D4C "?"
 *   insn=0x00000000002C7D50 string=0x00000000002C7D54 "`B@"
 *   insn=0x00000000002C7D54 string=0x00000000002C7D58 "hz"
 *   insn=0x00000000002C7D60 string=0x00000000002C7D64 "@"
 *   insn=0x00000000002C7D64 string=0x00000000002C7D68 ""
 *   insn=0x00000000002C7D68 string=0x00000000002C7D6C ""
 *   insn=0x00000000002C7D70 string=0x00000000002C7D74 ""
 *   insn=0x00000000002C7D74 string=0x00000000002C7D78 ""
 *   insn=0x00000000002C7D80 string=0x00000000002C7D84 "`""
 *   insn=0x00000000002C7D84 string=0x00000000002C7D88 "H"
 *   insn=0x00000000002C7D94 string=0x00000000002C7D98 "`B"
 *   insn=0x00000000002C7D98 string=0x00000000002C7D9C "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SwingableWeaponControllerComponent::LoadFromProtobufMessage(
        Caver::SwingableWeaponControllerComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x20
  int v5; // w8
  _DWORD *v6; // x0
  int v7; // w8
  __int64 result; // x0

  Caver::Component::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::SwingableWeaponControllerComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E9710);
  v5 = *(_DWORD *)(Message + 12);
  if ( *((_DWORD *)this + 30) != v5 )
  {
    v6 = (_DWORD *)*((_QWORD *)this + 16);
    *((_DWORD *)this + 30) = v5;
    *((_QWORD *)this + 16) = 0;
    if ( v6 )
    {
      v7 = v6[2] - 1;
      v6[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  result = sub_56A6A8((char *)this + 136);
  if ( (*(_BYTE *)(Message + 32) & 4) != 0 )
    return sub_56A6A8((char *)this + 144);
  return result;
}


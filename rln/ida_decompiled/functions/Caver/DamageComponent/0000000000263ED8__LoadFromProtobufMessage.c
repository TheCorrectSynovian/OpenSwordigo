/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000263ED8
 * Mangled: _ZN5Caver15DamageComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::DamageComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F7520  Caver::SpecialDamageTypeFromProtobufValue(Caver::Proto::SpecialDamageType)
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x00000000001FF6B0  Caver::DamageTypeFromProtobufValue(Caver::Proto::DamageType)
 *
 * Referenced strings: 22
 *   insn=0x0000000000263EE8 string=0x0000000000263EEC "UZ"
 *   insn=0x0000000000263EEC string=0x0000000000263EF0 "($"
 *   insn=0x0000000000263EEC string=0x00000000001FA840 "0'"
 *   insn=0x0000000000263EF0 string=0x0000000000263EF4 ""
 *   insn=0x0000000000263F0C string=0x0000000000263F10 "h"
 *   insn=0x0000000000263F14 string=0x0000000000263F18 "i"
 *   insn=0x0000000000263F18 string=0x0000000000263F1C "i"
 *   insn=0x0000000000263F20 string=0x0000000000263F30 "h"
 *   insn=0x0000000000263F24 string=0x0000000000263F28 ")"
 *   insn=0x0000000000263F28 string=0x0000000000263F2C "i"
 *   insn=0x0000000000263F38 string=0x0000000000263F3C "`"
 *   insn=0x0000000000263F40 string=0x0000000000263F44 "wM"
 *   insn=0x0000000000263F44 string=0x0000000000263F48 "`"
 *   insn=0x0000000000263F44 string=0x00000000001F7520 "0'"
 *   insn=0x0000000000263F4C string=0x0000000000263F50 "hB"
 *   insn=0x0000000000263F54 string=0x0000000000263F58 "h"
 *   insn=0x0000000000263F58 string=0x0000000000263F64 "h"
 *   insn=0x0000000000263F5C string=0x0000000000263F60 "i"
 *   insn=0x0000000000263F68 string=0x0000000000263F6C "i"
 *   insn=0x0000000000263F70 string=0x0000000000263F74 "i"
 *   insn=0x0000000000263F74 string=0x0000000000263F78 "h"
 *   insn=0x0000000000263F7C string=0x0000000000263F80 "hF"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DamageComponent::LoadFromProtobufMessage(
        Caver::DamageComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x0
  __int64 v5; // x20
  int v6; // w8
  int v7; // w9
  int v8; // w0
  __int64 result; // x0
  int v10; // w8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::DamageComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E93D8);
  v5 = Message;
  v6 = *(_DWORD *)(Message + 12);
  *((_DWORD *)this + 41) = v6;
  if ( (*(_BYTE *)(Message + 44) & 2) != 0 )
  {
    v7 = *(_DWORD *)(Message + 16) - v6;
    *((_DWORD *)this + 42) = v7;
  }
  else
  {
    v7 = *((_DWORD *)this + 42);
  }
  *((_DWORD *)this + 43) = v6;
  *((_DWORD *)this + 44) = v7;
  Caver::DamageTypeFromProtobufValue();
  *((_DWORD *)this + 45) = v8;
  result = Caver::SpecialDamageTypeFromProtobufValue();
  *((_DWORD *)this + 46) = result;
  *((_BYTE *)this + 208) = *(_BYTE *)(v5 + 28);
  v10 = *(_DWORD *)(v5 + 44);
  if ( (v10 & 0x20) != 0 )
    *((_DWORD *)this + 50) = *(_DWORD *)(v5 + 32);
  if ( (v10 & 0x40) != 0 )
    *((_DWORD *)this + 51) = *(_DWORD *)(v5 + 36);
  *((_BYTE *)this + 160) = *(_BYTE *)(v5 + 40);
  if ( (v10 & 0x100) != 0 )
    *((_BYTE *)this + 209) = *(_BYTE *)(v5 + 41);
  return result;
}


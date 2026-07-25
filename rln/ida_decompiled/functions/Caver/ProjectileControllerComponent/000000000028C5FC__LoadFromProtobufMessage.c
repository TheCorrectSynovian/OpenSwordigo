/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028C5FC
 * Mangled: _ZN5Caver29ProjectileControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::ProjectileControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 9
 *   insn=0x000000000028C610 string=0x00000000001FA840 "0'"
 *   insn=0x000000000028C614 string=0x000000000028C618 ""
 *   insn=0x000000000028C628 string=0x000000000028C62C ""
 *   insn=0x000000000028C62C string=0x000000000028C630 "h"
 *   insn=0x000000000028C630 string=0x000000000028C634 "\t0@9i"
 *   insn=0x000000000028C630 string=0x000000000028C63C "h"
 *   insn=0x000000000028C634 string=0x000000000028C638 "i"
 *   insn=0x000000000028C63C string=0x000000000028C640 "4@9h"
 *   insn=0x000000000028C640 string=0x000000000028C644 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProjectileControllerComponent::LoadFromProtobufMessage(
        Caver::ProjectileControllerComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 result; // x0
  int v5; // w8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = google::protobuf::internal::ExtensionSet::GetMessage(
             (const Caver::Proto::Component *)((char *)a2 + 8),
             Caver::Proto::ProjectileControllerComponent::extension,
             (const google::protobuf::MessageLite *)qword_6E9868);
  v5 = *(_DWORD *)(result + 16);
  if ( (v5 & 1) != 0 )
    *((_BYTE *)this + 112) = *(_BYTE *)(result + 12);
  if ( (v5 & 2) != 0 )
    *((_BYTE *)this + 113) = *(_BYTE *)(result + 13);
  return result;
}


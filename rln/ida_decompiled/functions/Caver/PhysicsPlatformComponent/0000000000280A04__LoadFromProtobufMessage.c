/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000280A04
 * Mangled: _ZN5Caver24PhysicsPlatformComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::PhysicsPlatformComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 16
 *   insn=0x0000000000280A18 string=0x0000000000280A1C "(#"
 *   insn=0x0000000000280A18 string=0x00000000001FA840 "0'"
 *   insn=0x0000000000280A1C string=0x0000000000280A20 "EF"
 *   insn=0x0000000000280A30 string=0x0000000000280A34 ""
 *   insn=0x0000000000280A34 string=0x0000000000280A38 "("
 *   insn=0x0000000000280A38 string=0x0000000000280A3C "h"
 *   insn=0x0000000000280A38 string=0x0000000000280A5C "\t"
 *   insn=0x0000000000280A3C string=0x0000000000280A68 "\t"
 *   insn=0x0000000000280A40 string=0x0000000000280A44 "h"
 *   insn=0x0000000000280A40 string=0x0000000000280A74 "\t"
 *   insn=0x0000000000280A44 string=0x0000000000280A48 ""
 *   insn=0x0000000000280A48 string=0x0000000000280A4C "h"
 *   insn=0x0000000000280A5C string=0x0000000000280A60 "i"
 *   insn=0x0000000000280A68 string=0x0000000000280A6C "i"
 *   insn=0x0000000000280A74 string=0x0000000000280A78 "i"
 *   insn=0x0000000000280A78 string=0x0000000000280A7C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::PhysicsPlatformComponent::LoadFromProtobufMessage(
        Caver::PhysicsPlatformComponent *this,
        const Caver::Proto::Component *a2)
{
  _DWORD *result; // x0
  int v5; // w8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::GetMessage(
                       (const Caver::Proto::Component *)((char *)a2 + 8),
                       Caver::Proto::PhysicsPlatformComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E9548);
  v5 = result[7];
  if ( (v5 & 1) != 0 )
  {
    *((_DWORD *)this + 37) = result[3];
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *((_DWORD *)this + 38) = result[4];
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      return result;
    goto LABEL_5;
  }
LABEL_9:
  *((_DWORD *)this + 39) = result[5];
  if ( (v5 & 8) == 0 )
    return result;
LABEL_5:
  *((_DWORD *)this + 40) = result[6];
  return result;
}


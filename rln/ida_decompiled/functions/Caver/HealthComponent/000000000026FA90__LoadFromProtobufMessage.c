/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026FA90
 * Mangled: _ZN5Caver15HealthComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::HealthComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 19
 *   insn=0x000000000026FAA0 string=0x000000000026FAA4 "g+"
 *   insn=0x000000000026FAA4 string=0x00000000001FA840 "0'"
 *   insn=0x000000000026FAA8 string=0x000000000026FAAC "%C"
 *   insn=0x000000000026FABC string=0x000000000026FAC0 ""
 *   insn=0x000000000026FAC0 string=0x000000000026FAC4 "h"
 *   insn=0x000000000026FAC4 string=0x000000000026FAC8 "h"
 *   insn=0x000000000026FAC8 string=0x000000000026FACC ""
 *   insn=0x000000000026FAD0 string=0x000000000026FAD4 "@"
 *   insn=0x000000000026FAD4 string=0x000000000026FAD8 "H"
 *   insn=0x000000000026FAD4 string=0x000000000026FADC "h"
 *   insn=0x000000000026FAD8 string=0x000000000026FAE0 ""
 *   insn=0x000000000026FAE0 string=0x000000000026FAE4 "H"
 *   insn=0x000000000026FAE8 string=0x000000000026FAEC ""
 *   insn=0x000000000026FAEC string=0x000000000026FAF0 ")"
 *   insn=0x000000000026FAF4 string=0x000000000026FAF8 ")"
 *   insn=0x000000000026FAF8 string=0x000000000026FAFC "("
 *   insn=0x000000000026FAFC string=0x000000000026FB00 "@"
 *   insn=0x000000000026FB00 string=0x000000000026FB04 ""
 *   insn=0x000000000026FB04 string=0x000000000026FB08 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HealthComponent::LoadFromProtobufMessage(
        Caver::HealthComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 result; // x0
  int v5; // w8
  unsigned int v6; // w8
  __int64 v7; // x8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = google::protobuf::internal::ExtensionSet::GetMessage(
             (const Caver::Proto::Component *)((char *)a2 + 8),
             Caver::Proto::HealthComponent::extension,
             (const google::protobuf::MessageLite *)qword_6E93E8);
  v5 = *(_DWORD *)(result + 12);
  *((_DWORD *)this + 31) = v5;
  *((_DWORD *)this + 32) = v5;
  *((_DWORD *)this + 33) = v5;
  v6 = *(_DWORD *)(result + 16);
  if ( v6 <= 1 )
    *((_DWORD *)this + 34) = v6;
  if ( (*(_BYTE *)(result + 32) & 4) != 0 )
  {
    if ( *(_QWORD *)(result + 24) )
      v7 = result;
    else
      v7 = Caver::Proto::HealthComponent::default_instance_;
    *(_QWORD *)((char *)this + 140) = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 12LL);
  }
  return result;
}


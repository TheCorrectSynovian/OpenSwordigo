/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021E674
 * Mangled: _ZN5Caver23BlendAnimationComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::BlendAnimationComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 17
 *   insn=0x000000000021E684 string=0x000000000021E688 "np"
 *   insn=0x000000000021E688 string=0x000000000021E68C "(&"
 *   insn=0x000000000021E688 string=0x00000000001FA840 "0'"
 *   insn=0x000000000021E68C string=0x000000000021E690 ""
 *   insn=0x000000000021E6A0 string=0x000000000021E6A4 ""
 *   insn=0x000000000021E6A8 string=0x000000000021E6AC ""
 *   insn=0x000000000021E6AC string=0x000000000021E6B0 "h"
 *   insn=0x000000000021E6B0 string=0x000000000021E6B4 ""
 *   insn=0x000000000021E6B8 string=0x000000000021E6BC ""
 *   insn=0x000000000021E6B8 string=0x000000000021E6C8 "\n"
 *   insn=0x000000000021E6BC string=0x000000000021E6C0 "h"
 *   insn=0x000000000021E6C0 string=0x000000000021E6C4 ""
 *   insn=0x000000000021E6C8 string=0x000000000021E6CC "i>@"
 *   insn=0x000000000021E6CC string=0x000000000021E6D0 "*%"
 *   insn=0x000000000021E6D0 string=0x000000000021E6D4 "h"
 *   insn=0x000000000021E6D4 string=0x000000000021E6D8 ""
 *   insn=0x000000000021E6D8 string=0x000000000021E6DC "()"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::BlendAnimationComponent::LoadFromProtobufMessage(
        Caver::BlendAnimationComponent *this,
        const Caver::Proto::Component *a2)
{
  _DWORD *result; // x0
  int v5; // w8
  __int64 v6; // x9

  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::GetMessage(
                       (const Caver::Proto::Component *)((char *)a2 + 8),
                       Caver::Proto::BlendAnimationComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E9330);
  v5 = result[7];
  if ( (v5 & 1) != 0 )
  {
    *((_DWORD *)this + 32) = result[3];
    v5 = result[7];
  }
  if ( (v5 & 2) != 0 )
  {
    *((_DWORD *)this + 36) = result[4];
    v5 = result[7];
  }
  v6 = *((_QWORD *)this + 15);
  *(_DWORD *)(v6 + 36) = result[5];
  if ( (v5 & 8) != 0 )
    *(_DWORD *)(v6 + 40) = result[6];
  return result;
}


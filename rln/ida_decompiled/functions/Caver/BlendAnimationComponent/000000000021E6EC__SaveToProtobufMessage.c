/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021E6EC
 * Mangled: _ZNK5Caver23BlendAnimationComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::BlendAnimationComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F8C20  Caver::Proto::BlendAnimationComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 31
 *   insn=0x000000000021E700 string=0x000000000021E704 ""
 *   insn=0x000000000021E704 string=0x000000000021E708 "(&"
 *   insn=0x000000000021E708 string=0x000000000021E70C ""
 *   insn=0x000000000021E714 string=0x000000000021E718 "Bi"
 *   insn=0x000000000021E718 string=0x00000000001F8C20 "0'"
 *   insn=0x000000000021E71C string=0x000000000021E720 "b"
 *   insn=0x000000000021E730 string=0x000000000021E734 "h"
 *   insn=0x000000000021E730 string=0x00000000001F7570 "0'"
 *   insn=0x000000000021E738 string=0x000000000021E73C "\t"
 *   insn=0x000000000021E738 string=0x000000000021E74C "i"
 *   insn=0x000000000021E73C string=0x000000000021E740 ""
 *   insn=0x000000000021E740 string=0x000000000021E744 ")"
 *   insn=0x000000000021E744 string=0x000000000021E748 "\t"
 *   insn=0x000000000021E74C string=0x000000000021E750 ""
 *   insn=0x000000000021E754 string=0x000000000021E758 ""
 *   insn=0x000000000021E754 string=0x000000000021E764 "i>@"
 *   insn=0x000000000021E758 string=0x000000000021E75C ""
 *   insn=0x000000000021E75C string=0x000000000021E760 "\t"
 *   insn=0x000000000021E764 string=0x000000000021E768 "\n"
 *   insn=0x000000000021E768 string=0x000000000021E76C "!%@"
 *   insn=0x000000000021E76C string=0x000000000021E770 "\n"
 *   insn=0x000000000021E774 string=0x000000000021E778 " )@"
 *   insn=0x000000000021E778 string=0x000000000021E77C ")"
 *   insn=0x000000000021E77C string=0x000000000021E780 ""5G"
 *   insn=0x000000000021E77C string=0x0000000000583734 "o"
 *   insn=0x000000000021E780 string=0x000000000021E784 "  "
 *   insn=0x000000000021E788 string=0x000000000021E78C "!8 "
 *   insn=0x000000000021E78C string=0x000000000021E790 "!"
 *   insn=0x000000000021E790 string=0x000000000021E794 "  ""
 *   insn=0x000000000021E798 string=0x000000000021E79C ""
 *   insn=0x000000000021E79C string=0x000000000021E7A0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BlendAnimationComponent::SaveToProtobufMessage(
        Caver::BlendAnimationComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::BlendAnimationComponent *v3; // x0
  __int64 result; // x0
  int v5; // w8
  int v6; // w9
  int v7; // w9
  int v8; // w8
  __int64 v9; // x9
  float v10; // s1
  float v11; // s0

  v3 = (Caver::Proto::BlendAnimationComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::BlendAnimationComponent::default_instance(v3);
  result = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *((_DWORD *)this + 32);
  if ( v5 )
  {
    v6 = *(_DWORD *)(result + 28);
    *(_DWORD *)(result + 12) = v5;
    *(_DWORD *)(result + 28) = v6 | 1;
  }
  v7 = *((_DWORD *)this + 36);
  v8 = *(_DWORD *)(result + 28);
  if ( v7 )
  {
    v8 |= 2u;
    *(_DWORD *)(result + 28) = v8;
    *(_DWORD *)(result + 16) = v7;
  }
  v9 = *((_QWORD *)this + 15);
  v10 = *(float *)(v9 + 36);
  *(_DWORD *)(result + 28) = v8 | 4;
  *(float *)(result + 20) = v10;
  v11 = *(float *)(v9 + 40);
  if ( v11 <= 0.0 )
    v11 = v10;
  if ( fabsf(v10 - v11) > 0.001 )
  {
    *(_DWORD *)(result + 28) = v8 | 0xC;
    *(float *)(result + 24) = v11;
  }
  return result;
}


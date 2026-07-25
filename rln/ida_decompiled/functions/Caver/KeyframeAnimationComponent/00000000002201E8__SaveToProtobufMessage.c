/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002201E8
 * Mangled: _ZNK5Caver26KeyframeAnimationComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::KeyframeAnimationComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FAF20  Caver::Proto::KeyframeAnimationComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 24
 *   insn=0x00000000002201FC string=0x0000000000220200 "H|"
 *   insn=0x0000000000220200 string=0x0000000000220204 "(&"
 *   insn=0x0000000000220204 string=0x0000000000220208 ""
 *   insn=0x0000000000220210 string=0x0000000000220214 "Ck"
 *   insn=0x0000000000220214 string=0x00000000001FAF20 "0'"
 *   insn=0x0000000000220218 string=0x000000000022021C "b"
 *   insn=0x000000000022022C string=0x00000000001F7570 "0'"
 *   insn=0x0000000000220234 string=0x0000000000220238 "jz@"
 *   insn=0x000000000022023C string=0x0000000000220240 "("
 *   insn=0x000000000022024C string=0x0000000000220250 "J"
 *   insn=0x0000000000220250 string=0x0000000000220254 "J"
 *   insn=0x0000000000220254 string=0x0000000000220258 "("
 *   insn=0x0000000000220254 string=0x000000000022029C "iJ@"
 *   insn=0x0000000000220258 string=0x000000000022025C ")&"
 *   insn=0x0000000000220260 string=0x0000000000220264 ")ID"
 *   insn=0x0000000000220278 string=0x000000000022027C "(&"
 *   insn=0x0000000000220278 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000022027C string=0x0000000000220280 ""
 *   insn=0x0000000000220280 string=0x0000000000220284 "a"
 *   insn=0x0000000000220284 string=0x0000000000220288 ""
 *   insn=0x000000000022029C string=0x00000000002202A0 "\t"
 *   insn=0x00000000002202A0 string=0x00000000002202A4 "*"
 *   insn=0x00000000002202A8 string=0x00000000002202AC "*"
 *   insn=0x00000000002202B0 string=0x00000000002202B4 ")1@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::KeyframeAnimationComponent::SaveToProtobufMessage(
        Caver::KeyframeAnimationComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::KeyframeAnimationComponent *v3; // x0
  __int64 result; // x0
  __int64 v5; // x20
  int v6; // w9
  int v7; // w10
  int v8; // w8
  __int64 *v9; // x0
  __int64 v10; // x9

  v3 = (Caver::Proto::KeyframeAnimationComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::KeyframeAnimationComponent::default_instance(v3);
  result = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = result;
  v6 = *(_DWORD *)(result + 32);
  v7 = *((_DWORD *)this + 30);
  v8 = v6 | 1;
  *(_DWORD *)(result + 32) = v6 | 1;
  *(_DWORD *)(result + 12) = v7;
  if ( *(_QWORD *)(*((_QWORD *)this + 17) - 24LL) )
  {
    v9 = *(__int64 **)(result + 16);
    *(_DWORD *)(v5 + 32) = v6 | 3;
    if ( v9 == &Caver::Proto::KeyframeAnimationComponent::_default_name_ )
    {
      v9 = (__int64 *)operator new(8u);
      *v9 = (__int64)&byte_6FD2F8;
      *(_QWORD *)(v5 + 16) = v9;
    }
    result = sub_56A6A8(v9);
    v8 = *(_DWORD *)(v5 + 32);
  }
  v10 = *((_QWORD *)this + 18);
  *(_BYTE *)(v5 + 24) = *(_BYTE *)(v10 + 44);
  *(_BYTE *)(v5 + 25) = *(_BYTE *)(v10 + 56);
  *(_DWORD *)(v5 + 28) = *(_DWORD *)(v10 + 48);
  *(_DWORD *)(v5 + 32) = v8 | 0x1C;
  return result;
}


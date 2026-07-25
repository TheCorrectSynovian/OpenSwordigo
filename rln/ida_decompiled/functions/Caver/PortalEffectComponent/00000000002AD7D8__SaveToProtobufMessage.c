/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AD7D8
 * Mangled: _ZNK5Caver21PortalEffectComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::PortalEffectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F3650  Caver::Proto::PortalEffectComponent::default_instance(void)
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FE0B0  Caver::GlowComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002020A0  Caver::FloatColorToProtobufMessage(Caver::FloatColor const&,Caver::Proto::FloatColor *)
 *   0x00000000002AD8D8  Caver::ComponentOutlet<Caver::GroundPolygonComponent>::identifier(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 23
 *   insn=0x00000000002AD7EC string=0x00000000002AD7F0 "0B"
 *   insn=0x00000000002AD7F4 string=0x00000000002AD7F8 ""
 *   insn=0x00000000002AD804 string=0x00000000001F3650 "P'"
 *   insn=0x00000000002AD808 string=0x00000000002AD80C "b"
 *   insn=0x00000000002AD818 string=0x00000000002AD81C "U'"
 *   insn=0x00000000002AD81C string=0x00000000001F7570 "0'"
 *   insn=0x00000000002AD824 string=0x00000000002AD828 "i"
 *   insn=0x00000000002AD82C string=0x00000000002AD830 "\n"
 *   insn=0x00000000002AD838 string=0x00000000002AD83C "i"
 *   insn=0x00000000002AD83C string=0x00000000002AD840 "\t"
 *   insn=0x00000000002AD84C string=0x00000000002AD864 "`"
 *   insn=0x00000000002AD850 string=0x00000000002AD854 "c"
 *   insn=0x00000000002AD854 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002AD85C string=0x00000000001F3F20 "P'"
 *   insn=0x00000000002AD868 string=0x00000000002AD86C "R"
 *   insn=0x00000000002AD874 string=0x00000000002AD878 ""
 *   insn=0x00000000002AD880 string=0x00000000002AD898 "hf@"
 *   insn=0x00000000002AD884 string=0x00000000002AD888 "V"
 *   insn=0x00000000002AD890 string=0x00000000001FAF50 "0'"
 *   insn=0x00000000002AD8A0 string=0x00000000002AD8A4 "h"
 *   insn=0x00000000002AD8A4 string=0x00000000002AD8A8 ")\t"
 *   insn=0x00000000002AD8C8 string=0x00000000002AD8CC "y&"
 *   insn=0x00000000002AD8CC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PortalEffectComponent::SaveToProtobufMessage(
        Caver::PortalEffectComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::PortalEffectComponent *v3; // x0
  Caver::Proto::FloatColor *v4; // x2
  __int64 v5; // x20
  int v6; // w8
  Caver::Proto::FloatColor *v7; // x21
  int v8; // w9
  __int64 v9; // x21
  int v10; // w9

  v3 = (Caver::Proto::PortalEffectComponent *)Caver::GlowComponent::SaveToProtobufMessage(this, a2);
  Caver::Proto::PortalEffectComponent::default_instance(v3);
  v5 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v6 = *(_DWORD *)(v5 + 40);
  v7 = *(Caver::Proto::FloatColor **)(v5 + 24);
  *(_DWORD *)(v5 + 12) = *((_DWORD *)this + 36);
  *(_DWORD *)(v5 + 40) = v6 | 1;
  v8 = *((_DWORD *)this + 42);
  *(_DWORD *)(v5 + 40) = v6 | 7;
  *(_DWORD *)(v5 + 16) = v8;
  if ( !v7 )
  {
    v7 = (Caver::Proto::FloatColor *)operator new(0x20u);
    Caver::Proto::FloatColor::FloatColor(v7);
    *(_QWORD *)(v5 + 24) = v7;
  }
  Caver::FloatColorToProtobufMessage((Caver::PortalEffectComponent *)((char *)this + 184), v7, v4);
  v9 = *(_QWORD *)(v5 + 32);
  *(_DWORD *)(v5 + 40) |= 8u;
  if ( !v9 )
  {
    v9 = operator new(0x20u);
    Caver::Proto::Vector3::Vector3((Caver::Proto::Vector3 *)v9);
    *(_QWORD *)(v5 + 32) = v9;
  }
  v10 = *(_DWORD *)(v9 + 24);
  *(_QWORD *)(v9 + 12) = *((_QWORD *)this + 25);
  *(_DWORD *)(v9 + 20) = *((_DWORD *)this + 52);
  *(_DWORD *)(v9 + 24) = v10 | 7;
}


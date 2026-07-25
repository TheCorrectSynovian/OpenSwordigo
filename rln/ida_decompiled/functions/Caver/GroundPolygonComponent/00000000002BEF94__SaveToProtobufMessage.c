/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BEF94
 * Mangled: _ZNK5Caver22GroundPolygonComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::GroundPolygonComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F73B0  Caver::Proto::Polygon::Polygon(void)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F8790  Caver::Program::SaveToProtobufMessage(Caver::Proto::Program *)
 *   0x00000000001F9E00  Caver::Proto::GroundPolygonComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002012C0  Caver::SavePolygonToProtobufMessage(Caver::Polygon const&,Caver::Proto::Polygon *)
 *   0x00000000002BF0C8  Caver::GroundPolygonComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 30
 *   insn=0x00000000002BEFAC string=0x00000000002BEFB0 "(!"
 *   insn=0x00000000002BEFB0 string=0x00000000002BEFB4 ""
 *   insn=0x00000000002BEFC0 string=0x00000000001F9E00 "0'"
 *   insn=0x00000000002BEFC4 string=0x00000000002BEFC8 "b"
 *   insn=0x00000000002BEFD4 string=0x00000000002BEFD8 "f"
 *   insn=0x00000000002BEFD8 string=0x00000000001F7570 "0'"
 *   insn=0x00000000002BEFE4 string=0x00000000002BEFE8 ""
 *   insn=0x00000000002BEFF0 string=0x00000000002BF008 "`"
 *   insn=0x00000000002BEFF4 string=0x00000000002BEFF8 "z"
 *   insn=0x00000000002BEFF8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002BF000 string=0x00000000001F73B0 "0'"
 *   insn=0x00000000002BF010 string=0x00000000002BF014 "h"
 *   insn=0x00000000002BF020 string=0x00000000002BF024 "jV@"
 *   insn=0x00000000002BF024 string=0x00000000002BF028 "(\t"
 *   insn=0x00000000002BF030 string=0x00000000002BF034 "`"
 *   insn=0x00000000002BF034 string=0x00000000002BF038 "*"
 *   insn=0x00000000002BF038 string=0x00000000002BF03C "A5G"
 *   insn=0x00000000002BF038 string=0x0000000000583734 "o"
 *   insn=0x00000000002BF040 string=0x00000000002BF044 "B"
 *   insn=0x00000000002BF044 string=0x00000000002BF048 "@ !"
 *   insn=0x00000000002BF04C string=0x00000000002BF050 "("
 *   insn=0x00000000002BF04C string=0x00000000002BF05C "i"
 *   insn=0x00000000002BF060 string=0x00000000002BF064 ""
 *   insn=0x00000000002BF074 string=0x00000000002BF078 ""
 *   insn=0x00000000002BF080 string=0x00000000002BF098 "`"
 *   insn=0x00000000002BF084 string=0x00000000002BF088 "V"
 *   insn=0x00000000002BF090 string=0x00000000001F5000 "P'"
 *   insn=0x00000000002BF0AC string=0x00000000001F8790 "0'"
 *   insn=0x00000000002BF0B8 string=0x00000000002BF0BC "}"
 *   insn=0x00000000002BF0BC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GroundPolygonComponent::SaveToProtobufMessage(
        Caver::GroundPolygonComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::GroundPolygonComponent *v3; // x0
  Caver::Proto::Polygon *v4; // x2
  __int64 v5; // x20
  Caver::Proto::Polygon *v6; // x21
  int v7; // w9
  __int64 v8; // x10
  int v9; // w8
  float v10; // s0
  Caver::Proto::Program *v11; // x21

  v3 = (Caver::Proto::GroundPolygonComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::GroundPolygonComponent::default_instance(v3);
  v5 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v6 = *(Caver::Proto::Polygon **)(v5 + 80);
  *(_DWORD *)(v5 + 108) |= 4u;
  if ( !v6 )
  {
    v6 = (Caver::Proto::Polygon *)operator new(0x50u);
    Caver::Proto::Polygon::Polygon(v6);
    *(_QWORD *)(v5 + 80) = v6;
  }
  Caver::SavePolygonToProtobufMessage((Caver::GroundPolygonComponent *)((char *)this + 112), v6, v4);
  v7 = *(_DWORD *)(v5 + 108);
  *(_BYTE *)(v5 + 88) = *((_BYTE *)this + 176);
  v8 = *((_QWORD *)this + 21);
  v9 = v7 | 0x38;
  *(_DWORD *)(v5 + 108) = v7 | 0x38;
  *(_QWORD *)(v5 + 92) = v8;
  v10 = *((float *)this + 45);
  if ( fabsf(v10 + -1.0) > 0.001 )
  {
    v9 = v7 | 0x78;
    *(_DWORD *)(v5 + 108) = v7 | 0x78;
    *(float *)(v5 + 100) = v10;
  }
  if ( *((_BYTE *)this + 184) )
  {
    v9 |= 0x80u;
    *(_DWORD *)(v5 + 108) = v9;
    *(_BYTE *)(v5 + 104) = 1;
  }
  v11 = *(Caver::Proto::Program **)(v5 + 16);
  *(_DWORD *)(v5 + 108) = v9 | 1;
  if ( !v11 )
  {
    v11 = (Caver::Proto::Program *)operator new(0x30u);
    Caver::Proto::Program::Program(v11);
    *(_QWORD *)(v5 + 16) = v11;
  }
  return Caver::Program::SaveToProtobufMessage((Caver::GroundPolygonComponent *)((char *)this + 192), v11);
}


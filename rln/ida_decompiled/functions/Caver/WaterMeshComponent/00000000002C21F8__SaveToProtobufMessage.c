/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C21F8
 * Mangled: _ZNK5Caver18WaterMeshComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::WaterMeshComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002020A0  Caver::FloatColorToProtobufMessage(Caver::FloatColor const&,Caver::Proto::FloatColor *)
 *   0x0000000000202830  Caver::Proto::WaterMeshComponent::default_instance(void)
 *   0x00000000002C22E8  Caver::WaterMeshComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x00000000002C220C string=0x00000000002C2210 "D"
 *   insn=0x00000000002C2210 string=0x00000000002C2214 "(!"
 *   insn=0x00000000002C2214 string=0x00000000002C2218 ""
 *   insn=0x00000000002C2228 string=0x00000000002C222C "b"
 *   insn=0x00000000002C223C string=0x00000000001F7570 "0'"
 *   insn=0x00000000002C2244 string=0x00000000002C2248 "iz@"
 *   insn=0x00000000002C224C string=0x00000000002C2250 "\n"
 *   insn=0x00000000002C2258 string=0x00000000002C225C "i"
 *   insn=0x00000000002C225C string=0x00000000002C2260 "\t"
 *   insn=0x00000000002C226C string=0x00000000002C2284 "`"
 *   insn=0x00000000002C2274 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002C2278 string=0x00000000002C227C ")"
 *   insn=0x00000000002C227C string=0x00000000001F3F20 "P'"
 *   insn=0x00000000002C2294 string=0x00000000002C2298 ""
 *   insn=0x00000000002C22A0 string=0x00000000002C22B8 "`"
 *   insn=0x00000000002C22C8 string=0x00000000002C22CC "u"
 *   insn=0x00000000002C22DC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002C22E0 string=0x00000000002C22E4 "x"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WaterMeshComponent::SaveToProtobufMessage(
        Caver::WaterMeshComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::WaterMeshComponent *v3; // x0
  Caver::Proto::FloatColor *v4; // x2
  __int64 v5; // x20
  int v6; // w8
  Caver::Proto::FloatColor *v7; // x21
  int v8; // w9
  Caver::Proto::FloatColor *v9; // x2
  Caver::Proto::FloatColor *v10; // x21

  v3 = (Caver::Proto::WaterMeshComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::WaterMeshComponent::default_instance(v3);
  v5 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v6 = *(_DWORD *)(v5 + 40);
  v7 = *(Caver::Proto::FloatColor **)(v5 + 24);
  *(_DWORD *)(v5 + 12) = *((_DWORD *)this + 30);
  *(_DWORD *)(v5 + 40) = v6 | 1;
  v8 = *((_DWORD *)this + 40);
  *(_DWORD *)(v5 + 40) = v6 | 7;
  *(_DWORD *)(v5 + 16) = v8;
  if ( !v7 )
  {
    v7 = (Caver::Proto::FloatColor *)operator new(0x20u);
    Caver::Proto::FloatColor::FloatColor(v7);
    *(_QWORD *)(v5 + 24) = v7;
  }
  Caver::FloatColorToProtobufMessage((Caver::WaterMeshComponent *)((char *)this + 176), v7, v4);
  v10 = *(Caver::Proto::FloatColor **)(v5 + 32);
  *(_DWORD *)(v5 + 40) |= 8u;
  if ( !v10 )
  {
    v10 = (Caver::Proto::FloatColor *)operator new(0x20u);
    Caver::Proto::FloatColor::FloatColor(v10);
    *(_QWORD *)(v5 + 32) = v10;
  }
  return Caver::FloatColorToProtobufMessage((Caver::WaterMeshComponent *)((char *)this + 192), v10, v9);
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026FB18
 * Mangled: _ZNK5Caver15HealthComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::HealthComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002017D0  Caver::Proto::HealthComponent::default_instance(void)
 *   0x000000000026FBF0  Caver::HealthComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x000000000026FB34 string=0x000000000026FB38 "%C"
 *   insn=0x000000000026FB40 string=0x000000000026FB44 "#G"
 *   insn=0x000000000026FB48 string=0x000000000026FB4C "b"
 *   insn=0x000000000026FB5C string=0x00000000001F7570 "0'"
 *   insn=0x000000000026FB64 string=0x000000000026FB68 "j~@"
 *   insn=0x000000000026FB68 string=0x000000000026FB6C "\t"
 *   insn=0x000000000026FB74 string=0x000000000026FB78 "j"
 *   insn=0x000000000026FB78 string=0x000000000026FB7C "_"
 *   insn=0x000000000026FB7C string=0x000000000026FB80 "@"
 *   insn=0x000000000026FB80 string=0x000000000026FB88 "\t"
 *   insn=0x000000000026FB94 string=0x000000000026FB98 "("
 *   insn=0x000000000026FBA8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000026FBAC string=0x000000000026FBB0 "H "
 *   insn=0x000000000026FBB0 string=0x00000000001F7CD0 "0'"
 *   insn=0x000000000026FBB8 string=0x000000000026FBBC "i"
 *   insn=0x000000000026FBBC string=0x000000000026FBC0 ""
 *   insn=0x000000000026FBE4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000026FBE8 string=0x000000000026FBEC "6G"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::HealthComponent::SaveToProtobufMessage(
        Caver::HealthComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::HealthComponent *v3; // x0
  __int64 v4; // x0
  __int64 v5; // x20
  int v6; // w8
  int v7; // w10
  int v8; // w9
  unsigned int v9; // w10
  __int64 v10; // x21
  __int64 v11; // x9

  v3 = (Caver::Proto::HealthComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::HealthComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = v4;
  v6 = *(_DWORD *)(v4 + 32);
  v7 = *((_DWORD *)this + 31);
  v8 = v6 | 1;
  *(_DWORD *)(v4 + 32) = v6 | 1;
  *(_DWORD *)(v4 + 12) = v7;
  v9 = *((_DWORD *)this + 34);
  if ( v9 <= 1 )
  {
    v8 = v6 | 3;
    *(_DWORD *)(v4 + 32) = v6 | 3;
    *(_DWORD *)(v4 + 16) = v9;
  }
  v10 = *(_QWORD *)(v4 + 24);
  *(_DWORD *)(v4 + 32) = v8 | 4;
  if ( !v10 )
  {
    v10 = operator new(0x18u);
    Caver::Proto::Vector2::Vector2((Caver::Proto::Vector2 *)v10);
    *(_QWORD *)(v5 + 24) = v10;
  }
  v11 = *(_QWORD *)((char *)this + 140);
  *(_DWORD *)(v10 + 20) |= 3u;
  *(_QWORD *)(v10 + 12) = v11;
}


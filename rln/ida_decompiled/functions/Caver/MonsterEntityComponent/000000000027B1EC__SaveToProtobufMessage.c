/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027B1EC
 * Mangled: _ZNK5Caver22MonsterEntityComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::MonsterEntityComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F69B0  Caver::Proto::MonsterEntityComponent::default_instance(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F8790  Caver::Program::SaveToProtobufMessage(Caver::Proto::Program *)
 *   0x00000000001FF290  Caver::EntityComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000027B2E4  Caver::MonsterEntityComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 22
 *   insn=0x000000000027B200 string=0x000000000027B204 "#"
 *   insn=0x000000000027B204 string=0x000000000027B208 "H#"
 *   insn=0x000000000027B208 string=0x000000000027B20C ""
 *   insn=0x000000000027B218 string=0x00000000001F69B0 "0'"
 *   insn=0x000000000027B21C string=0x000000000027B220 "b"
 *   insn=0x000000000027B230 string=0x00000000001F7570 "0'"
 *   insn=0x000000000027B23C string=0x000000000027B240 ""
 *   insn=0x000000000027B248 string=0x000000000027B260 "`"
 *   insn=0x000000000027B250 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000027B254 string=0x000000000027B258 "j"
 *   insn=0x000000000027B258 string=0x00000000001F5000 "P'"
 *   insn=0x000000000027B264 string=0x000000000027B268 "J"
 *   insn=0x000000000027B268 string=0x00000000001F8790 "0'"
 *   insn=0x000000000027B270 string=0x000000000027B274 ""
 *   insn=0x000000000027B27C string=0x000000000027B294 "`b"
 *   insn=0x000000000027B288 string=0x000000000027B28C "]"
 *   insn=0x000000000027B298 string=0x000000000027B29C "="
 *   insn=0x000000000027B29C string=0x000000000027B2A0 "hbF9"
 *   insn=0x000000000027B2A8 string=0x000000000027B2AC "hjF9)"
 *   insn=0x000000000027B2AC string=0x000000000027B2B0 ")"
 *   insn=0x000000000027B2D8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000027B2DC string=0x000000000027B2E0 "y"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MonsterEntityComponent::SaveToProtobufMessage(
        Caver::MonsterEntityComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::MonsterEntityComponent *v3; // x0
  __int64 v4; // x20
  Caver::Proto::Program *v5; // x21
  Caver::Proto::Program *v6; // x21
  __int64 result; // x0
  int v8; // w9
  char v9; // w8

  v3 = (Caver::Proto::MonsterEntityComponent *)Caver::EntityComponent::SaveToProtobufMessage(this, a2);
  Caver::Proto::MonsterEntityComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(Caver::Proto::Program **)(v4 + 16);
  *(_DWORD *)(v4 + 36) |= 1u;
  if ( !v5 )
  {
    v5 = (Caver::Proto::Program *)operator new(0x30u);
    Caver::Proto::Program::Program(v5);
    *(_QWORD *)(v4 + 16) = v5;
  }
  Caver::Program::SaveToProtobufMessage((Caver::MonsterEntityComponent *)((char *)this + 304), v5);
  v6 = *(Caver::Proto::Program **)(v4 + 24);
  *(_DWORD *)(v4 + 36) |= 2u;
  if ( !v6 )
  {
    v6 = (Caver::Proto::Program *)operator new(0x30u);
    Caver::Proto::Program::Program(v6);
    *(_QWORD *)(v4 + 24) = v6;
  }
  result = Caver::Program::SaveToProtobufMessage((Caver::MonsterEntityComponent *)((char *)this + 344), v6);
  v8 = *(_DWORD *)(v4 + 36);
  *(_BYTE *)(v4 + 32) = *((_BYTE *)this + 408);
  v9 = *((_BYTE *)this + 410);
  *(_DWORD *)(v4 + 36) = v8 | 0xC;
  *(_BYTE *)(v4 + 33) = v9;
  return result;
}


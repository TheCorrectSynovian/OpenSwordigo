/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000284030
 * Mangled: _ZNK5Caver18MagicBoltComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::MagicBoltComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F4E00  Caver::SpellComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F98D0  Caver::Proto::MagicBoltComponent::default_instance(void)
 *   0x00000000002020A0  Caver::FloatColorToProtobufMessage(Caver::FloatColor const&,Caver::Proto::FloatColor *)
 *   0x000000000028410C  Caver::MagicBoltComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 22
 *   insn=0x0000000000284044 string=0x0000000000284048 "n"
 *   insn=0x0000000000284048 string=0x000000000028404C "#"
 *   insn=0x0000000000284048 string=0x00000000001F4E00 "P'"
 *   insn=0x000000000028404C string=0x0000000000284050 "ED"
 *   insn=0x000000000028405C string=0x00000000001F98D0 "0'"
 *   insn=0x0000000000284060 string=0x0000000000284064 "b"
 *   insn=0x0000000000284070 string=0x0000000000284074 "?"
 *   insn=0x0000000000284074 string=0x00000000001F7570 "0'"
 *   insn=0x000000000028407C string=0x0000000000284080 "i"
 *   insn=0x0000000000284084 string=0x0000000000284088 "\n"
 *   insn=0x0000000000284090 string=0x0000000000284094 "i"
 *   insn=0x0000000000284094 string=0x0000000000284098 "\n"
 *   insn=0x000000000028409C string=0x00000000002840A0 ""
 *   insn=0x00000000002840A4 string=0x00000000002840A8 "i"
 *   insn=0x00000000002840B4 string=0x00000000002840CC "`""
 *   insn=0x00000000002840B8 string=0x00000000002840BC "I"
 *   insn=0x00000000002840BC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002840C4 string=0x00000000001F3F20 "P'"
 *   insn=0x00000000002840D8 string=0x00000000002840DC "i"
 *   insn=0x00000000002840DC string=0x00000000002840E0 ""
 *   insn=0x00000000002840FC string=0x0000000000284100 "l"
 *   insn=0x0000000000284100 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicBoltComponent::SaveToProtobufMessage(
        Caver::MagicBoltComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::MagicBoltComponent *v3; // x0
  Caver::Proto::FloatColor *v4; // x2
  __int64 v5; // x20
  int v6; // w8
  Caver::Proto::FloatColor *v7; // x21
  int v8; // w9
  int v9; // w9
  __int64 result; // x0
  int v11; // w8

  v3 = (Caver::Proto::MagicBoltComponent *)Caver::SpellComponent::SaveToProtobufMessage(this, a2);
  Caver::Proto::MagicBoltComponent::default_instance(v3);
  v5 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v6 = *(_DWORD *)(v5 + 36);
  v7 = *(Caver::Proto::FloatColor **)(v5 + 24);
  *(_DWORD *)(v5 + 12) = *((_DWORD *)this + 50);
  *(_DWORD *)(v5 + 36) = v6 | 1;
  v8 = *((_DWORD *)this + 56);
  *(_DWORD *)(v5 + 36) = v6 | 3;
  *(_DWORD *)(v5 + 16) = v8;
  v9 = *((_DWORD *)this + 62);
  *(_DWORD *)(v5 + 36) = v6 | 0xF;
  *(_DWORD *)(v5 + 20) = v9;
  if ( !v7 )
  {
    v7 = (Caver::Proto::FloatColor *)operator new(0x20u);
    Caver::Proto::FloatColor::FloatColor(v7);
    *(_QWORD *)(v5 + 24) = v7;
  }
  result = Caver::FloatColorToProtobufMessage((Caver::MagicBoltComponent *)((char *)this + 264), v7, v4);
  v11 = *(_DWORD *)(v5 + 36) | 0x10;
  *(_DWORD *)(v5 + 32) = *((_DWORD *)this + 70);
  *(_DWORD *)(v5 + 36) = v11;
  return result;
}


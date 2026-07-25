/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027E034
 * Mangled: _ZNK5Caver22PhysicsObjectComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::PhysicsObjectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001FA9A0  Caver::Proto::PhysicsObjectComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000027E198  Caver::PhysicsObjectComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 34
 *   insn=0x000000000027E054 string=0x000000000027E058 "(#"
 *   insn=0x000000000027E058 string=0x000000000027E05C ""
 *   insn=0x000000000027E064 string=0x000000000027E068 "N"
 *   insn=0x000000000027E068 string=0x00000000001FA9A0 "0'"
 *   insn=0x000000000027E06C string=0x000000000027E070 "b"
 *   insn=0x000000000027E07C string=0x000000000027E080 "<"
 *   insn=0x000000000027E080 string=0x00000000001F7570 "0'"
 *   insn=0x000000000027E088 string=0x000000000027E08C "i"
 *   insn=0x000000000027E08C string=0x000000000027E090 "\n"
 *   insn=0x000000000027E098 string=0x000000000027E09C "v^\))"
 *   insn=0x000000000027E09C string=0x000000000027E0A0 ")"
 *   insn=0x000000000027E0A0 string=0x000000000027E0A4 "(5G"
 *   insn=0x000000000027E0A0 string=0x0000000000583734 "o"
 *   insn=0x000000000027E0A8 string=0x000000000027E0AC " "
 *   insn=0x000000000027E0CC string=0x000000000027E104 "H"
 *   insn=0x000000000027E0D0 string=0x000000000027E0D4 ""
 *   insn=0x000000000027E0E0 string=0x000000000027E0E4 "?"
 *   insn=0x000000000027E0E4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000027E0EC string=0x00000000001F7CD0 "0'"
 *   insn=0x000000000027E0F8 string=0x000000000027E0FC ""
 *   insn=0x000000000027E104 string=0x000000000027E108 "`"
 *   insn=0x000000000027E110 string=0x000000000027E114 "!"
 *   insn=0x000000000027E114 string=0x000000000027E118 "  ("
 *   insn=0x000000000027E118 string=0x000000000027E11C "-"
 *   insn=0x000000000027E11C string=0x000000000027E120 "H"
 *   insn=0x000000000027E128 string=0x000000000027E12C "("
 *   insn=0x000000000027E13C string=0x000000000027E144 "i2"
 *   insn=0x000000000027E144 string=0x000000000027E148 ")"
 *   insn=0x000000000027E148 string=0x000000000027E14C ""
 *   insn=0x000000000027E150 string=0x000000000027E154 "i"
 *   insn=0x000000000027E158 string=0x000000000027E15C "i"
 *   insn=0x000000000027E160 string=0x000000000027E164 "i"
 *   insn=0x000000000027E188 string=0x000000000027E18C "I"
 *   insn=0x000000000027E18C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PhysicsObjectComponent::SaveToProtobufMessage(
        Caver::PhysicsObjectComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::PhysicsObjectComponent *v3; // x0
  __int64 v4; // x0
  __int64 v5; // x20
  int v6; // w8
  int v7; // w22
  float v8; // w23
  __int64 v9; // x21
  int v10; // w8
  float v11; // s0
  int v12; // w8

  v3 = (Caver::Proto::PhysicsObjectComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::PhysicsObjectComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = v4;
  v6 = *(_DWORD *)(v4 + 48);
  *(_BYTE *)(v4 + 12) = *((_BYTE *)this + 112);
  *(_DWORD *)(v4 + 48) = v6 | 1;
  v7 = *((_DWORD *)this + 56);
  v8 = *((float *)this + 57);
  if ( COERCE_FLOAT(v7 & 0x7FFFFFFF) > 0.001 || fabsf(v8 + 1.0) > 0.001 )
  {
    v9 = *(_QWORD *)(v4 + 16);
    *(_DWORD *)(v4 + 48) = v6 | 3;
    if ( !v9 )
    {
      v9 = operator new(0x18u);
      Caver::Proto::Vector2::Vector2((Caver::Proto::Vector2 *)v9);
      *(_QWORD *)(v5 + 16) = v9;
    }
    v10 = *(_DWORD *)(v9 + 20);
    *(_DWORD *)(v9 + 12) = v7;
    *(float *)(v9 + 16) = v8;
    *(_DWORD *)(v9 + 20) = v10 | 3;
  }
  v11 = *((float *)this + 58);
  if ( fabsf(v11 + -800.0) <= 0.001 )
  {
    v12 = *(_DWORD *)(v5 + 48);
  }
  else
  {
    v12 = *(_DWORD *)(v5 + 48) | 4;
    *(_DWORD *)(v5 + 48) = v12;
    *(float *)(v5 + 24) = v11 / 800.0;
  }
  *(_QWORD *)(v5 + 28) = *(_QWORD *)((char *)this + 268);
  *(_DWORD *)(v5 + 36) = *((_DWORD *)this + 43);
  *(_BYTE *)(v5 + 40) = *((_BYTE *)this + 237);
  *(_DWORD *)(v5 + 44) = *((_DWORD *)this + 60);
  *(_DWORD *)(v5 + 48) = v12 | 0xF8;
}


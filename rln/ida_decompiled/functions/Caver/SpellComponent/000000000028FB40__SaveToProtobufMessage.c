/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028FB40
 * Mangled: _ZNK5Caver14SpellComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::SpellComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 1
 *   0x00000000001F4E00  Caver::SpellComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F8790  Caver::Program::SaveToProtobufMessage(Caver::Proto::Program *)
 *   0x00000000001F9430  Caver::Proto::SpellComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000028FC10  Caver::SpellComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x000000000028FB5C string=0x000000000028FB60 "UG"
 *   insn=0x000000000028FB60 string=0x000000000028FB64 "s""
 *   insn=0x000000000028FB68 string=0x000000000028FB6C "1"
 *   insn=0x000000000028FB6C string=0x00000000001F9430 "0'"
 *   insn=0x000000000028FB70 string=0x000000000028FB74 "b"
 *   insn=0x000000000028FB80 string=0x000000000028FB84 "{"
 *   insn=0x000000000028FB84 string=0x00000000001F7570 "0'"
 *   insn=0x000000000028FB88 string=0x000000000028FB8C "h"
 *   insn=0x000000000028FB90 string=0x000000000028FB94 ""
 *   insn=0x000000000028FB9C string=0x000000000028FBA0 "h"
 *   insn=0x000000000028FBA4 string=0x000000000028FBA8 "("
 *   insn=0x000000000028FBB0 string=0x000000000028FBB4 ""
 *   insn=0x000000000028FBC4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000028FBC8 string=0x000000000028FBCC ""
 *   insn=0x000000000028FBCC string=0x00000000001F5000 "P'"
 *   insn=0x000000000028FBE8 string=0x00000000001F8790 "0'"
 *   insn=0x000000000028FC04 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000028FC08 string=0x000000000028FC0C "."
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SpellComponent::SaveToProtobufMessage(
        Caver::SpellComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::SpellComponent *v3; // x0
  __int64 result; // x0
  Caver::Program *v5; // x19
  __int64 v6; // x20
  Caver::Proto::Program *v7; // x21

  v3 = (Caver::Proto::SpellComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::SpellComponent::default_instance(v3);
  result = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = (Caver::SpellComponent *)((char *)this + 144);
  v6 = result;
  if ( *(_QWORD *)(*((_QWORD *)this + 18) - 24LL) || *((_QWORD *)this + 19) || *((_QWORD *)this + 21) )
  {
    v7 = *(Caver::Proto::Program **)(result + 16);
    *(_DWORD *)(result + 24) |= 1u;
    if ( !v7 )
    {
      v7 = (Caver::Proto::Program *)operator new(0x30u);
      Caver::Proto::Program::Program(v7);
      *(_QWORD *)(v6 + 16) = v7;
    }
    return Caver::Program::SaveToProtobufMessage(v5, v7);
  }
  return result;
}


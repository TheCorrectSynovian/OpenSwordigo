/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000272194
 * Mangled: _ZNK5Caver19HeroEntityComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::HeroEntityComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F8790  Caver::Program::SaveToProtobufMessage(Caver::Proto::Program *)
 *   0x00000000001FF290  Caver::EntityComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002009A0  Caver::Proto::HeroEntityComponent::default_instance(void)
 *   0x0000000000272260  Caver::HeroEntityComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x00000000002721A8 string=0x00000000002721AC "94"
 *   insn=0x00000000002721B0 string=0x00000000002721B4 ""
 *   insn=0x00000000002721C4 string=0x00000000002721C8 "b"
 *   insn=0x00000000002721D8 string=0x00000000002721DC "h"
 *   insn=0x00000000002721D8 string=0x00000000001F7570 "0'"
 *   insn=0x00000000002721E0 string=0x00000000002721E4 ""
 *   insn=0x00000000002721E8 string=0x00000000002721EC "h"
 *   insn=0x00000000002721EC string=0x00000000002721F0 "h"
 *   insn=0x00000000002721F0 string=0x00000000002721F4 "h"
 *   insn=0x00000000002721F4 string=0x00000000002721F8 "("
 *   insn=0x0000000000272200 string=0x0000000000272204 ""
 *   insn=0x000000000027220C string=0x0000000000272224 "`B"
 *   insn=0x0000000000272214 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000272218 string=0x000000000027221C "y"
 *   insn=0x000000000027221C string=0x00000000001F5000 "P'"
 *   insn=0x0000000000272234 string=0x0000000000272238 "V"
 *   insn=0x0000000000272238 string=0x00000000001F8790 "0'"
 *   insn=0x0000000000272254 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HeroEntityComponent::SaveToProtobufMessage(
        Caver::HeroEntityComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::HeroEntityComponent *v3; // x0
  __int64 result; // x0
  __int64 v5; // x20
  Caver::Proto::Program *v6; // x21

  v3 = (Caver::Proto::HeroEntityComponent *)Caver::EntityComponent::SaveToProtobufMessage(this, a2);
  Caver::Proto::HeroEntityComponent::default_instance(v3);
  result = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = result;
  if ( *(_QWORD *)(*((_QWORD *)this + 42) - 24LL) || *((_QWORD *)this + 43) || *((_QWORD *)this + 45) )
  {
    v6 = *(Caver::Proto::Program **)(result + 16);
    *(_DWORD *)(result + 24) |= 1u;
    if ( !v6 )
    {
      v6 = (Caver::Proto::Program *)operator new(0x30u);
      Caver::Proto::Program::Program(v6);
      *(_QWORD *)(v5 + 16) = v6;
    }
    return Caver::Program::SaveToProtobufMessage((Caver::HeroEntityComponent *)((char *)this + 336), v6);
  }
  return result;
}


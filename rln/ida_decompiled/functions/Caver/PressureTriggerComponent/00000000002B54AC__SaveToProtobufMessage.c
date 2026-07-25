/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B54AC
 * Mangled: _ZNK5Caver24PressureTriggerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::PressureTriggerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F8790  Caver::Program::SaveToProtobufMessage(Caver::Proto::Program *)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000201DD0  Caver::Proto::PressureTriggerComponent::default_instance(void)
 *   0x00000000002B5594  Caver::PressureTriggerComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x00000000002B54C8 string=0x00000000002B54CC ""
 *   insn=0x00000000002B54D4 string=0x00000000002B54D8 ">2"
 *   insn=0x00000000002B54DC string=0x00000000002B54E0 "b"
 *   insn=0x00000000002B54EC string=0x00000000002B54F0 " "
 *   insn=0x00000000002B54F0 string=0x00000000002B54F4 "hz@"
 *   insn=0x00000000002B54F0 string=0x00000000001F7570 "0'"
 *   insn=0x00000000002B5504 string=0x00000000002B5508 "hbC9)\t"
 *   insn=0x00000000002B5508 string=0x00000000002B550C ")\t"
 *   insn=0x00000000002B5518 string=0x00000000002B5530 "`""
 *   insn=0x00000000002B551C string=0x00000000002B5520 "0"
 *   insn=0x00000000002B5520 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002B5528 string=0x00000000001F5000 "P'"
 *   insn=0x00000000002B5538 string=0x00000000001F8790 "0'"
 *   insn=0x00000000002B5540 string=0x00000000002B5544 ""
 *   insn=0x00000000002B554C string=0x00000000002B5564 "`"
 *   insn=0x00000000002B5550 string=0x00000000002B5554 "#"
 *   insn=0x00000000002B5584 string=0x00000000002B5588 "J"
 *   insn=0x00000000002B5588 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PressureTriggerComponent::SaveToProtobufMessage(
        Caver::PressureTriggerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::PressureTriggerComponent *v3; // x0
  __int64 v4; // x20
  int v5; // w9
  Caver::Proto::Program *v6; // x21
  char v7; // w8
  Caver::Proto::Program *v8; // x21

  v3 = (Caver::Proto::PressureTriggerComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::PressureTriggerComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(v4 + 40);
  v6 = *(Caver::Proto::Program **)(v4 + 24);
  *(_DWORD *)(v4 + 12) = *((_DWORD *)this + 30);
  v7 = *((_BYTE *)this + 216);
  *(_DWORD *)(v4 + 40) = v5 | 7;
  *(_BYTE *)(v4 + 16) = v7;
  if ( !v6 )
  {
    v6 = (Caver::Proto::Program *)operator new(0x30u);
    Caver::Proto::Program::Program(v6);
    *(_QWORD *)(v4 + 24) = v6;
  }
  Caver::Program::SaveToProtobufMessage((Caver::PressureTriggerComponent *)((char *)this + 136), v6);
  v8 = *(Caver::Proto::Program **)(v4 + 32);
  *(_DWORD *)(v4 + 40) |= 8u;
  if ( !v8 )
  {
    v8 = (Caver::Proto::Program *)operator new(0x30u);
    Caver::Proto::Program::Program(v8);
    *(_QWORD *)(v4 + 32) = v8;
  }
  return Caver::Program::SaveToProtobufMessage((Caver::PressureTriggerComponent *)((char *)this + 176), v8);
}


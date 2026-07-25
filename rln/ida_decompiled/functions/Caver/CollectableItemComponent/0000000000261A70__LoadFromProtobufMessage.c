/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000261A70
 * Mangled: _ZN5Caver24CollectableItemComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::CollectableItemComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x0000000000201D20  Caver::Program::LoadFromProtobufMessage(Caver::Proto::Program const&)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 15
 *   insn=0x0000000000261A80 string=0x0000000000261A84 "oc"
 *   insn=0x0000000000261A84 string=0x0000000000261A88 "($"
 *   insn=0x0000000000261A84 string=0x00000000001FA840 "0'"
 *   insn=0x0000000000261A88 string=0x0000000000261A8C "MB"
 *   insn=0x0000000000261AB0 string=0x0000000000261AB4 "H"
 *   insn=0x0000000000261AB4 string=0x0000000000261AB8 "hr"
 *   insn=0x0000000000261ABC string=0x0000000000261AC0 "`"
 *   insn=0x0000000000261AC0 string=0x0000000000261AC4 "hv"
 *   insn=0x0000000000261AD0 string=0x0000000000261AD4 "`"
 *   insn=0x0000000000261ADC string=0x0000000000261AE0 ")$"
 *   insn=0x0000000000261AE0 string=0x0000000000261AE4 "`B"
 *   insn=0x0000000000261AE4 string=0x0000000000261AE8 "h""
 *   insn=0x0000000000261AEC string=0x0000000000261AF0 ")"
 *   insn=0x0000000000261AF8 string=0x0000000000261AFC ")"
 *   insn=0x0000000000261AFC string=0x0000000000261B00 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CollectableItemComponent::LoadFromProtobufMessage(
        Caver::CollectableItemComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x0
  __int64 v5; // x20
  unsigned int v6; // w8
  __int64 v7; // x8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::CollectableItemComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E9790);
  v5 = Message;
  if ( (*(_BYTE *)(Message + 56) & 1) != 0 )
  {
    v6 = *(_DWORD *)(Message + 12);
    if ( v6 <= 5 )
      *((_DWORD *)this + 28) = v6;
  }
  *((_DWORD *)this + 29) = *(_DWORD *)(Message + 16);
  sub_56A6A8((char *)this + 120);
  sub_56A6A8((char *)this + 128);
  *((_BYTE *)this + 136) = *(_BYTE *)(v5 + 40);
  if ( *(_QWORD *)(v5 + 48) )
    v7 = v5;
  else
    v7 = Caver::Proto::CollectableItemComponent::default_instance_;
  Caver::Program::LoadFromProtobufMessage(
    (Caver::CollectableItemComponent *)((char *)this + 144),
    *(const Caver::Proto::Program **)(v7 + 48));
}


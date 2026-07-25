/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B53F0
 * Mangled: _ZN5Caver24PressureTriggerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::PressureTriggerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x0000000000201D20  Caver::Program::LoadFromProtobufMessage(Caver::Proto::Program const&)
 *
 * Referenced strings: 20
 *   insn=0x00000000002B5404 string=0x00000000001FA840 "0'"
 *   insn=0x00000000002B5408 string=0x00000000002B540C ""
 *   insn=0x00000000002B5418 string=0x00000000002B541C "]&"
 *   insn=0x00000000002B5424 string=0x00000000002B5428 "hz"
 *   insn=0x00000000002B5430 string=0x00000000002B5434 ""
 *   insn=0x00000000002B5434 string=0x00000000002B5438 "H"
 *   insn=0x00000000002B5434 string=0x00000000002B5454 "i!"
 *   insn=0x00000000002B5438 string=0x00000000002B5480 "i!"
 *   insn=0x00000000002B5448 string=0x00000000002B544C "ib"
 *   insn=0x00000000002B544C string=0x00000000002B5450 "H"
 *   insn=0x00000000002B5458 string=0x00000000002B545C ")"
 *   insn=0x00000000002B545C string=0x00000000002B5460 "`""
 *   insn=0x00000000002B5464 string=0x00000000002B5468 ")"
 *   insn=0x00000000002B5468 string=0x00000000002B546C "("
 *   insn=0x00000000002B5470 string=0x00000000002B5474 "+2"
 *   insn=0x00000000002B5478 string=0x00000000002B547C ""
 *   insn=0x00000000002B5484 string=0x00000000002B5488 ")"
 *   insn=0x00000000002B548C string=0x00000000002B5490 "`"
 *   insn=0x00000000002B5494 string=0x00000000002B5498 ")"
 *   insn=0x00000000002B5498 string=0x00000000002B549C "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PressureTriggerComponent::LoadFromProtobufMessage(
        Caver::PressureTriggerComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x0
  __int64 v5; // x20
  int v6; // w8
  __int64 v7; // x8
  __int64 v8; // x8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::PressureTriggerComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E94C8);
  v5 = Message;
  *((_DWORD *)this + 30) = *(_DWORD *)(Message + 12);
  v6 = *(_DWORD *)(Message + 40);
  if ( (v6 & 2) != 0 )
  {
    *((_BYTE *)this + 216) = *(_BYTE *)(Message + 16);
    if ( (v6 & 4) == 0 )
    {
LABEL_3:
      if ( (v6 & 8) == 0 )
        return;
      goto LABEL_10;
    }
  }
  else if ( (v6 & 4) == 0 )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)(Message + 24) )
    v7 = Message;
  else
    v7 = Caver::Proto::PressureTriggerComponent::default_instance_;
  Caver::Program::LoadFromProtobufMessage(
    (Caver::PressureTriggerComponent *)((char *)this + 136),
    *(const Caver::Proto::Program **)(v7 + 24));
  if ( (*(_DWORD *)(v5 + 40) & 8) != 0 )
  {
LABEL_10:
    if ( *(_QWORD *)(v5 + 32) )
      v8 = v5;
    else
      v8 = Caver::Proto::PressureTriggerComponent::default_instance_;
    Caver::Program::LoadFromProtobufMessage(
      (Caver::PressureTriggerComponent *)((char *)this + 176),
      *(const Caver::Proto::Program **)(v8 + 32));
  }
}


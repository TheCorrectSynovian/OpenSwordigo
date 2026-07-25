/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000231738
 * Mangled: _ZNK5Caver16ProgramComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::ProgramComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F7E50  Caver::Proto::ProgramComponent::default_instance(void)
 *   0x00000000001F8790  Caver::Program::SaveToProtobufMessage(Caver::Proto::Program *)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000231818  Caver::StringForTrigger(Caver::ProgramComponent::Trigger)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 20
 *   insn=0x0000000000231754 string=0x0000000000231758 ""
 *   insn=0x0000000000231764 string=0x00000000001F7E50 "0'"
 *   insn=0x0000000000231768 string=0x000000000023176C "b"
 *   insn=0x0000000000231778 string=0x000000000023177C "}"
 *   insn=0x000000000023177C string=0x0000000000231780 "i"
 *   insn=0x000000000023177C string=0x00000000001F7570 "0'"
 *   insn=0x000000000023178C string=0x0000000000231790 "i"
 *   insn=0x0000000000231790 string=0x0000000000231794 "\n"
 *   insn=0x000000000023179C string=0x00000000002317A0 "iv@"
 *   insn=0x00000000002317A0 string=0x00000000002317A4 ")"
 *   insn=0x00000000002317A4 string=0x00000000002317A8 "?%"
 *   insn=0x00000000002317B0 string=0x00000000002317B8 "I"
 *   insn=0x00000000002317C4 string=0x00000000002317C8 ""
 *   insn=0x00000000002317D4 string=0x00000000002317EC "`"
 *   insn=0x00000000002317DC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002317E0 string=0x00000000002317E4 ""
 *   insn=0x00000000002317E4 string=0x00000000001F5000 "P'"
 *   insn=0x0000000000231800 string=0x00000000001F8790 "0'"
 *   insn=0x000000000023180C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000231810 string=0x0000000000231814 ",@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramComponent::SaveToProtobufMessage(
        Caver::ProgramComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::ProgramComponent *v3; // x0
  __int64 v4; // x0
  __int64 v5; // x20
  int v6; // w8
  char v7; // w9
  int v8; // w9
  int v9; // w9
  Caver::Proto::Program *v10; // x21

  v3 = (Caver::Proto::ProgramComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::ProgramComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = v4;
  v6 = *(_DWORD *)(v4 + 32);
  *(_BYTE *)(v4 + 12) = *((_BYTE *)this + 112);
  v7 = *((_BYTE *)this + 120);
  *(_DWORD *)(v4 + 32) = v6 | 3;
  *(_BYTE *)(v4 + 13) = v7;
  v8 = *((_DWORD *)this + 29) - 1;
  if ( (unsigned int)v8 > 9 )
    v9 = 0;
  else
    v9 = dword_584650[v8];
  v10 = *(Caver::Proto::Program **)(v4 + 24);
  *(_DWORD *)(v4 + 16) = v9;
  *(_DWORD *)(v4 + 32) = v6 | 0xF;
  if ( !v10 )
  {
    v10 = (Caver::Proto::Program *)operator new(0x30u);
    Caver::Proto::Program::Program(v10);
    *(_QWORD *)(v5 + 24) = v10;
  }
  return Caver::Program::SaveToProtobufMessage((Caver::ProgramComponent *)((char *)this + 128), v10);
}


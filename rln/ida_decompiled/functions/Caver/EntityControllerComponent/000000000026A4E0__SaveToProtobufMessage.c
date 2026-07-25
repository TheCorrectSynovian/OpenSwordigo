/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026A4E0
 * Mangled: _ZNK5Caver25EntityControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::EntityControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FA6E0  Caver::Proto::EntityControllerComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 25
 *   insn=0x000000000026A4FC string=0x000000000026A500 ""
 *   insn=0x000000000026A500 string=0x000000000026A504 "s""
 *   insn=0x000000000026A508 string=0x000000000026A50C "u@"
 *   insn=0x000000000026A50C string=0x00000000001FA6E0 "0'"
 *   insn=0x000000000026A510 string=0x000000000026A514 "b"
 *   insn=0x000000000026A524 string=0x000000000026A528 ",@"
 *   insn=0x000000000026A524 string=0x00000000001F7570 "0'"
 *   insn=0x000000000026A52C string=0x000000000026A530 "\n"
 *   insn=0x000000000026A530 string=0x000000000026A534 "\t"
 *   insn=0x000000000026A534 string=0x000000000026A538 "\n,"
 *   insn=0x000000000026A53C string=0x000000000026A540 "\n"
 *   insn=0x000000000026A540 string=0x000000000026A544 "\n,"
 *   insn=0x000000000026A544 string=0x000000000026A548 "\n\t"
 *   insn=0x000000000026A548 string=0x000000000026A54C "\t"
 *   insn=0x000000000026A550 string=0x000000000026A554 "\n,"
 *   insn=0x000000000026A554 string=0x000000000026A558 "\n"
 *   insn=0x000000000026A558 string=0x000000000026A55C ""
 *   insn=0x000000000026A55C string=0x000000000026A560 "\t"
 *   insn=0x000000000026A564 string=0x000000000026A568 "\t"
 *   insn=0x000000000026A56C string=0x000000000026A570 "\t"
 *   insn=0x000000000026A574 string=0x000000000026A578 "\n,"
 *   insn=0x000000000026A57C string=0x000000000026A580 "\t$"
 *   insn=0x000000000026A584 string=0x000000000026A588 "+"
 *   insn=0x000000000026A58C string=0x000000000026A590 "I%"
 *   insn=0x000000000026A590 string=0x000000000026A594 "\t "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityControllerComponent::SaveToProtobufMessage(
        Caver::EntityControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::EntityControllerComponent *v3; // x0
  __int64 result; // x0
  int v5; // w8
  int v6; // w9
  int v7; // w9
  int v8; // w10
  int v9; // w8
  int v10; // w9
  int v11; // w9
  int v12; // w9

  v3 = (Caver::Proto::EntityControllerComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::EntityControllerComponent::default_instance(v3);
  result = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(result + 44);
  *(_DWORD *)(result + 12) = *((_DWORD *)this + 30);
  *(_DWORD *)(result + 44) = v5 | 1;
  v6 = *((_DWORD *)this + 36);
  *(_DWORD *)(result + 44) = v5 | 3;
  *(_DWORD *)(result + 16) = v6;
  v7 = *((_DWORD *)this + 42);
  *(_DWORD *)(result + 44) = v5 | 7;
  v8 = v5 | 0x7F;
  v9 = v5 | 0xFF;
  *(_DWORD *)(result + 20) = v7;
  *(_DWORD *)(result + 24) = *((_DWORD *)this + 48);
  *(_QWORD *)(result + 28) = *((_QWORD *)this + 28);
  v10 = *((_DWORD *)this + 58);
  *(_DWORD *)(result + 44) = v8;
  *(_DWORD *)(result + 36) = v10;
  v11 = *((_DWORD *)this + 62);
  if ( (unsigned int)(v11 - 1) < 3 )
    v12 = v11 + 1;
  else
    v12 = 1;
  *(_DWORD *)(result + 40) = v12;
  *(_DWORD *)(result + 44) = v9;
  return result;
}


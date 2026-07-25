/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000290EE0
 * Mangled: _ZNK5Caver15AttackComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::AttackComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F8790  Caver::Program::SaveToProtobufMessage(Caver::Proto::Program *)
 *   0x00000000001F8CC0  Caver::Proto::AttackComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000290FF4  Caver::AttackComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 28
 *   insn=0x0000000000290EF4 string=0x0000000000290EF8 "\n"
 *   insn=0x0000000000290EFC string=0x0000000000290F00 ""
 *   insn=0x0000000000290F08 string=0x0000000000290F0C "m"
 *   insn=0x0000000000290F0C string=0x00000000001F8CC0 "0'"
 *   insn=0x0000000000290F10 string=0x0000000000290F14 "b"
 *   insn=0x0000000000290F24 string=0x00000000001F7570 "0'"
 *   insn=0x0000000000290F2C string=0x0000000000290F30 "iz@"
 *   insn=0x0000000000290F34 string=0x0000000000290F38 "\n"
 *   insn=0x0000000000290F40 string=0x0000000000290F44 "i"
 *   insn=0x0000000000290F44 string=0x0000000000290F48 "\n"
 *   insn=0x0000000000290F4C string=0x0000000000290F50 "\n\t"
 *   insn=0x0000000000290F54 string=0x0000000000290F58 "i"
 *   insn=0x0000000000290F5C string=0x0000000000290F60 ""
 *   insn=0x0000000000290F64 string=0x0000000000290F68 "i"
 *   insn=0x0000000000290F74 string=0x0000000000290F8C "`B"
 *   insn=0x0000000000290F7C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000290F84 string=0x00000000001F5000 "P'"
 *   insn=0x0000000000290F94 string=0x0000000000290F98 "h"
 *   insn=0x0000000000290F94 string=0x00000000001F8790 "0'"
 *   insn=0x0000000000290F98 string=0x0000000000290F9C ""
 *   insn=0x0000000000290F9C string=0x0000000000290FA0 "iR"
 *   insn=0x0000000000290FA4 string=0x0000000000290FA8 "("
 *   insn=0x0000000000290FB0 string=0x0000000000290FB4 "hr"
 *   insn=0x0000000000290FB4 string=0x0000000000290FB8 ""
 *   insn=0x0000000000290FB8 string=0x0000000000290FBC ")"
 *   insn=0x0000000000290FC0 string=0x0000000000290FC4 "h"
 *   insn=0x0000000000290FE8 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000290FEC string=0x0000000000290FF0 "5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AttackComponent::SaveToProtobufMessage(
        Caver::AttackComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::AttackComponent *v3; // x0
  __int64 v4; // x20
  int v5; // w8
  Caver::Proto::Program *v6; // x21
  int v7; // w9
  int v8; // w9
  int v9; // w9
  __int64 result; // x0
  int v11; // w9
  __int64 v12; // x8

  v3 = (Caver::Proto::AttackComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::AttackComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(v4 + 72);
  v6 = *(Caver::Proto::Program **)(v4 + 32);
  *(_DWORD *)(v4 + 12) = *((_DWORD *)this + 30);
  *(_DWORD *)(v4 + 72) = v5 | 1;
  v7 = *((_DWORD *)this + 36);
  *(_DWORD *)(v4 + 72) = v5 | 3;
  *(_DWORD *)(v4 + 16) = v7;
  v8 = *((_DWORD *)this + 42);
  *(_DWORD *)(v4 + 72) = v5 | 7;
  *(_DWORD *)(v4 + 20) = v8;
  v9 = *((_DWORD *)this + 48);
  *(_DWORD *)(v4 + 72) = v5 | 0x1F;
  *(_DWORD *)(v4 + 24) = v9;
  if ( !v6 )
  {
    v6 = (Caver::Proto::Program *)operator new(0x30u);
    Caver::Proto::Program::Program(v6);
    *(_QWORD *)(v4 + 32) = v6;
  }
  result = Caver::Program::SaveToProtobufMessage((Caver::AttackComponent *)((char *)this + 208), v6);
  *(_QWORD *)(v4 + 40) = *(_QWORD *)((char *)this + 260);
  v11 = *(_DWORD *)(v4 + 72);
  *(_QWORD *)(v4 + 48) = *(_QWORD *)((char *)this + 276);
  *(_QWORD *)(v4 + 56) = *(_QWORD *)((char *)this + 284);
  v12 = *((_QWORD *)this + 37);
  *(_DWORD *)(v4 + 72) = v11 | 0x1FE0;
  *(_QWORD *)(v4 + 64) = v12;
  return result;
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000221DE0
 * Mangled: _ZNK5Caver14LightComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::LightComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F4470  Caver::Proto::LightComponent::default_instance(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002020A0  Caver::FloatColorToProtobufMessage(Caver::FloatColor const&,Caver::Proto::FloatColor *)
 *   0x0000000000221F10  Caver::LightComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 26
 *   insn=0x0000000000221DF4 string=0x0000000000221DF8 "Ju"
 *   insn=0x0000000000221DF8 string=0x0000000000221DFC "(&"
 *   insn=0x0000000000221DFC string=0x0000000000221E00 "5C"
 *   insn=0x0000000000221E0C string=0x00000000001F4470 "P'"
 *   insn=0x0000000000221E10 string=0x0000000000221E14 "b"
 *   insn=0x0000000000221E24 string=0x0000000000221E28 "ir@"
 *   insn=0x0000000000221E24 string=0x00000000001F7570 "0'"
 *   insn=0x0000000000221E2C string=0x0000000000221E30 "("
 *   insn=0x0000000000221E40 string=0x0000000000221E44 ""
 *   insn=0x0000000000221E4C string=0x0000000000221E54 "iv@"
 *   insn=0x0000000000221E58 string=0x0000000000221E5C ""
 *   insn=0x0000000000221E68 string=0x0000000000221E80 "`"
 *   insn=0x0000000000221E70 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000221E74 string=0x0000000000221E78 "*H"
 *   insn=0x0000000000221E78 string=0x00000000001F3F20 "P'"
 *   insn=0x0000000000221E88 string=0x0000000000221E8C "hr@"
 *   insn=0x0000000000221E94 string=0x0000000000221E98 "hBI"
 *   insn=0x0000000000221EA4 string=0x0000000000221EA8 "h"
 *   insn=0x0000000000221EA8 string=0x0000000000221EAC ")"
 *   insn=0x0000000000221EB8 string=0x0000000000221ED0 "hR@"
 *   insn=0x0000000000221EC4 string=0x0000000000221EC8 ""d"
 *   insn=0x0000000000221EC8 string=0x00000000001FAF50 "0'"
 *   insn=0x0000000000221ED8 string=0x0000000000221EDC "h"
 *   insn=0x0000000000221EDC string=0x0000000000221EE0 ")\t"
 *   insn=0x0000000000221F04 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000221F08 string=0x0000000000221F0C "n~"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::LightComponent::SaveToProtobufMessage(Caver::LightComponent *this, Caver::Proto::Component *a2)
{
  Caver::Proto::LightComponent *v3; // x0
  __int64 v4; // x0
  Caver::Proto::FloatColor *v5; // x2
  int v6; // w9
  __int64 v7; // x20
  int v8; // w8
  int v9; // w9
  Caver::Proto::FloatColor *v10; // x21
  int v11; // w9
  __int64 v12; // x21
  int v13; // w8
  int v14; // w9

  v3 = (Caver::Proto::LightComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::LightComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v6 = *((_DWORD *)this + 28);
  v7 = v4;
  v8 = *(_DWORD *)(v4 + 56);
  if ( (unsigned int)(v6 - 1) < 4 )
  {
    *(_DWORD *)(v4 + 12) = v6;
    v8 |= 1u;
    *(_DWORD *)(v4 + 56) = v8;
  }
  v9 = *((_DWORD *)this + 29);
  v10 = *(Caver::Proto::FloatColor **)(v4 + 24);
  *(_DWORD *)(v4 + 56) = v8 | 6;
  *(_DWORD *)(v4 + 16) = v9;
  if ( !v10 )
  {
    v10 = (Caver::Proto::FloatColor *)operator new(0x20u);
    Caver::Proto::FloatColor::FloatColor(v10);
    *(_QWORD *)(v7 + 24) = v10;
  }
  Caver::FloatColorToProtobufMessage((Caver::LightComponent *)((char *)this + 120), v10, v5);
  if ( *((_DWORD *)this + 28) == 3 )
  {
    v11 = *(_DWORD *)(v7 + 56);
    v12 = *(_QWORD *)(v7 + 48);
    *(_QWORD *)(v7 + 32) = *(_QWORD *)((char *)this + 148);
    v13 = *((_DWORD *)this + 39);
    *(_DWORD *)(v7 + 56) = v11 | 0x78;
    *(_DWORD *)(v7 + 40) = v13;
    if ( !v12 )
    {
      v12 = operator new(0x20u);
      Caver::Proto::Vector3::Vector3((Caver::Proto::Vector3 *)v12);
      *(_QWORD *)(v7 + 48) = v12;
    }
    v14 = *(_DWORD *)(v12 + 24);
    *(_QWORD *)(v12 + 12) = *((_QWORD *)this + 20);
    *(_DWORD *)(v12 + 20) = *((_DWORD *)this + 42);
    *(_DWORD *)(v12 + 24) = v14 | 7;
  }
}


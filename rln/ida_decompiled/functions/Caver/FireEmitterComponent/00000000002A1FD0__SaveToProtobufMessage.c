/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A1FD0
 * Mangled: _ZNK5Caver20FireEmitterComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::FireEmitterComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002020A0  Caver::FloatColorToProtobufMessage(Caver::FloatColor const&,Caver::Proto::FloatColor *)
 *   0x0000000000203340  Caver::Proto::FireEmitterComponent::default_instance(void)
 *   0x00000000002A2120  Caver::ComponentOutlet<Caver::LightComponent>::identifier(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 28
 *   insn=0x00000000002A1FE8 string=0x00000000002A1FEC "(""
 *   insn=0x00000000002A1FEC string=0x00000000002A1FF0 ""
 *   insn=0x00000000002A2000 string=0x00000000002A2004 "b"
 *   insn=0x00000000002A2010 string=0x00000000002A2014 "v"
 *   insn=0x00000000002A2014 string=0x00000000002A2018 "VU"
 *   insn=0x00000000002A2018 string=0x00000000001F7570 "0'"
 *   insn=0x00000000002A2020 string=0x00000000002A2024 "iz@"
 *   insn=0x00000000002A2028 string=0x00000000002A202C "\n"
 *   insn=0x00000000002A2034 string=0x00000000002A2038 "i"
 *   insn=0x00000000002A2038 string=0x00000000002A203C ""
 *   insn=0x00000000002A2048 string=0x00000000002A2060 "hBK"
 *   insn=0x00000000002A204C string=0x00000000002A2050 "dM"
 *   insn=0x00000000002A2050 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002A2058 string=0x00000000001FAF50 "0'"
 *   insn=0x00000000002A2068 string=0x00000000002A206C "h"
 *   insn=0x00000000002A206C string=0x00000000002A2070 ")\t"
 *   insn=0x00000000002A207C string=0x00000000002A2080 ""
 *   insn=0x00000000002A2088 string=0x00000000002A20A0 "`"
 *   insn=0x00000000002A208C string=0x00000000002A2090 "TM"
 *   insn=0x00000000002A2098 string=0x00000000001F3F20 "P'"
 *   insn=0x00000000002A20A8 string=0x00000000002A20AC "hR@"
 *   insn=0x00000000002A20B8 string=0x00000000002A20BC "(\t2"
 *   insn=0x00000000002A20C4 string=0x00000000002A20DC "hV@"
 *   insn=0x00000000002A20C8 string=0x00000000002A20CC "EM"
 *   insn=0x00000000002A20E4 string=0x00000000002A20E8 "h"
 *   insn=0x00000000002A20E8 string=0x00000000002A20EC ")\t"
 *   insn=0x00000000002A2110 string=0x00000000002A2114 "gT"
 *   insn=0x00000000002A2114 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FireEmitterComponent::SaveToProtobufMessage(
        Caver::FireEmitterComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::FireEmitterComponent *v3; // x0
  Caver::Proto::FloatColor *v4; // x2
  __int64 v5; // x20
  int v6; // w8
  __int64 v7; // x21
  int v8; // w9
  int v9; // w9
  Caver::Proto::FloatColor *v10; // x21
  int v11; // w9
  __int64 v12; // x21
  int v13; // w9

  v3 = (Caver::Proto::FireEmitterComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::FireEmitterComponent::default_instance(v3);
  v5 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v6 = *(_DWORD *)(v5 + 64);
  v7 = *(_QWORD *)(v5 + 32);
  *(_DWORD *)(v5 + 12) = *((_DWORD *)this + 30);
  *(_DWORD *)(v5 + 64) = v6 | 1;
  v8 = *((_DWORD *)this + 36);
  *(_DWORD *)(v5 + 64) = v6 | 0xB;
  *(_DWORD *)(v5 + 16) = v8;
  if ( !v7 )
  {
    v7 = operator new(0x20u);
    Caver::Proto::Vector3::Vector3((Caver::Proto::Vector3 *)v7);
    *(_QWORD *)(v5 + 32) = v7;
  }
  v9 = *(_DWORD *)(v7 + 24);
  *(_QWORD *)(v7 + 12) = *(_QWORD *)((char *)this + 180);
  *(_DWORD *)(v7 + 20) = *((_DWORD *)this + 47);
  *(_DWORD *)(v7 + 24) = v9 | 7;
  v10 = *(Caver::Proto::FloatColor **)(v5 + 40);
  *(_DWORD *)(v5 + 64) |= 0x10u;
  if ( !v10 )
  {
    v10 = (Caver::Proto::FloatColor *)operator new(0x20u);
    Caver::Proto::FloatColor::FloatColor(v10);
    *(_QWORD *)(v5 + 40) = v10;
  }
  Caver::FloatColorToProtobufMessage((Caver::FireEmitterComponent *)((char *)this + 192), v10, v4);
  v11 = *(_DWORD *)(v5 + 64);
  v12 = *(_QWORD *)(v5 + 56);
  *(_QWORD *)(v5 + 48) = *((_QWORD *)this + 20);
  *(_DWORD *)(v5 + 64) = v11 | 0xE0;
  if ( !v12 )
  {
    v12 = operator new(0x20u);
    Caver::Proto::Vector3::Vector3((Caver::Proto::Vector3 *)v12);
    *(_QWORD *)(v5 + 56) = v12;
  }
  v13 = *(_DWORD *)(v12 + 24);
  *(_QWORD *)(v12 + 12) = *((_QWORD *)this + 21);
  *(_DWORD *)(v12 + 20) = *((_DWORD *)this + 44);
  *(_DWORD *)(v12 + 24) = v13 | 7;
}


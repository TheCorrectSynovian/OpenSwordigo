/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B29D8
 * Mangled: _ZNK5Caver23DoorControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::DoorControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5510  Caver::Proto::DoorControllerComponent::default_instance(void)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 20
 *   insn=0x00000000002B29EC string=0x00000000002B29F0 "L2"
 *   insn=0x00000000002B29F4 string=0x00000000002B29F8 "E@"
 *   insn=0x00000000002B29F8 string=0x00000000002B29FC "s""
 *   insn=0x00000000002B2A04 string=0x00000000001F5510 "P'"
 *   insn=0x00000000002B2A08 string=0x00000000002B2A0C "b"
 *   insn=0x00000000002B2A1C string=0x00000000002B2A20 " @"
 *   insn=0x00000000002B2A1C string=0x00000000001F7570 "0'"
 *   insn=0x00000000002B2A24 string=0x00000000002B2A28 "\n"
 *   insn=0x00000000002B2A28 string=0x00000000002B2A2C "\n "
 *   insn=0x00000000002B2A2C string=0x00000000002B2A30 "\t"
 *   insn=0x00000000002B2A34 string=0x00000000002B2A38 "\n"
 *   insn=0x00000000002B2A38 string=0x00000000002B2A3C "\n "
 *   insn=0x00000000002B2A3C string=0x00000000002B2A40 "\n\t"
 *   insn=0x00000000002B2A40 string=0x00000000002B2A44 "\t"
 *   insn=0x00000000002B2A48 string=0x00000000002B2A4C "\n "
 *   insn=0x00000000002B2A4C string=0x00000000002B2A50 ""
 *   insn=0x00000000002B2A50 string=0x00000000002B2A54 "\t"
 *   insn=0x00000000002B2A58 string=0x00000000002B2A5C "\t"
 *   insn=0x00000000002B2A60 string=0x00000000002B2A64 " "
 *   insn=0x00000000002B2A64 string=0x00000000002B2A68 "\tp"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DoorControllerComponent::SaveToProtobufMessage(
        Caver::DoorControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::DoorControllerComponent *v3; // x0
  __int64 result; // x0
  int v5; // w8
  int v6; // w9
  int v7; // w9
  int v8; // w9

  v3 = (Caver::Proto::DoorControllerComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::DoorControllerComponent::default_instance(v3);
  result = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(result + 32);
  v6 = *((_DWORD *)this + 30);
  *(_DWORD *)(result + 32) = v5 | 1;
  *(_DWORD *)(result + 12) = v6;
  v7 = *((_DWORD *)this + 36);
  *(_DWORD *)(result + 32) = v5 | 3;
  *(_DWORD *)(result + 16) = v7;
  v8 = *((_DWORD *)this + 42);
  *(_DWORD *)(result + 32) = v5 | 7;
  *(_DWORD *)(result + 20) = v8;
  *(_DWORD *)(result + 24) = *((_DWORD *)this + 48);
  LOBYTE(v8) = *((_BYTE *)this + 208);
  *(_DWORD *)(result + 32) = v5 | 0x1F;
  *(_BYTE *)(result + 28) = v8;
  return result;
}


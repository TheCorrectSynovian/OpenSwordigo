/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BC374
 * Mangled: _ZNK5Caver28GroundMeshGeneratorComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::GroundMeshGeneratorComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FCC20  Caver::Proto::GroundMeshGeneratorComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 42
 *   insn=0x00000000002BC38C string=0x00000000002BC390 "H!"
 *   insn=0x00000000002BC390 string=0x00000000002BC394 "aD"
 *   insn=0x00000000002BC39C string=0x00000000002BC3A0 " "
 *   insn=0x00000000002BC3A0 string=0x00000000001FCC20 "0'"
 *   insn=0x00000000002BC3A4 string=0x00000000002BC3A8 "b"
 *   insn=0x00000000002BC3B4 string=0x00000000002BC3B8 "n"
 *   insn=0x00000000002BC3B8 string=0x00000000002BC3BC "8@"
 *   insn=0x00000000002BC3B8 string=0x00000000001F7570 "0'"
 *   insn=0x00000000002BC3BC string=0x00000000002BC3C0 "iz@"
 *   insn=0x00000000002BC3C0 string=0x00000000002BC3C4 "\n"
 *   insn=0x00000000002BC3C4 string=0x00000000002BC3C8 "\n8"
 *   insn=0x00000000002BC3C8 string=0x00000000002BC3CC "\t"
 *   insn=0x00000000002BC3CC string=0x00000000002BC3D0 "i"
 *   insn=0x00000000002BC3D0 string=0x00000000002BC3D4 "\n"
 *   insn=0x00000000002BC3D4 string=0x00000000002BC3D8 "\n8"
 *   insn=0x00000000002BC3D8 string=0x00000000002BC3DC "\n\t"
 *   insn=0x00000000002BC3DC string=0x00000000002BC3E0 "\t"
 *   insn=0x00000000002BC3E0 string=0x00000000002BC3E4 "i"
 *   insn=0x00000000002BC3E4 string=0x00000000002BC3E8 "\n8"
 *   insn=0x00000000002BC3E8 string=0x00000000002BC3EC "\t"
 *   insn=0x00000000002BC3EC string=0x00000000002BC3F0 "j"
 *   insn=0x00000000002BC3F0 string=0x00000000002BC3F4 "\t"
 *   insn=0x00000000002BC3F4 string=0x00000000002BC3F8 "\t8"
 *   insn=0x00000000002BC3F8 string=0x00000000002BC3FC "\n"
 *   insn=0x00000000002BC3FC string=0x00000000002BC400 "j"
 *   insn=0x00000000002BC400 string=0x00000000002BC404 "_"
 *   insn=0x00000000002BC404 string=0x00000000002BC408 "@"
 *   insn=0x00000000002BC40C string=0x00000000002BC420 "h"
 *   insn=0x00000000002BC410 string=0x00000000002BC414 "\t"
 *   insn=0x00000000002BC414 string=0x00000000002BC418 "\t8"
 *   insn=0x00000000002BC418 string=0x00000000002BC41C "\n$"
 *   insn=0x00000000002BC420 string=0x00000000002BC424 "*"
 *   insn=0x00000000002BC424 string=0x00000000002BC428 "\n8"
 *   insn=0x00000000002BC428 string=0x00000000002BC42C "\n"
 *   insn=0x00000000002BC42C string=0x00000000002BC430 "("
 *   insn=0x00000000002BC430 string=0x00000000002BC434 "hn@"
 *   insn=0x00000000002BC434 string=0x00000000002BC438 ")"
 *   insn=0x00000000002BC438 string=0x00000000002BC43C ""
 *   insn=0x00000000002BC43C string=0x00000000002BC440 "hr@"
 *   insn=0x00000000002BC440 string=0x00000000002BC444 ""
 *   insn=0x00000000002BC444 string=0x00000000002BC448 "h"
 *   insn=0x00000000002BC448 string=0x00000000002BC44C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GroundMeshGeneratorComponent::SaveToProtobufMessage(
        Caver::GroundMeshGeneratorComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::GroundMeshGeneratorComponent *v3; // x0
  __int64 result; // x0
  int v5; // w8
  int v6; // w9
  int v7; // w9
  int v8; // w9
  int v9; // w10
  int v10; // w9
  unsigned int v11; // w10
  int v12; // w8

  v3 = (Caver::Proto::GroundMeshGeneratorComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::GroundMeshGeneratorComponent::default_instance(v3);
  result = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(result + 56);
  v6 = *((_DWORD *)this + 30);
  *(_DWORD *)(result + 56) = v5 | 1;
  *(_DWORD *)(result + 12) = v6;
  v7 = *((_DWORD *)this + 36);
  *(_DWORD *)(result + 56) = v5 | 3;
  *(_DWORD *)(result + 16) = v7;
  v8 = *((_DWORD *)this + 42);
  *(_DWORD *)(result + 56) = v5 | 7;
  *(_DWORD *)(result + 20) = v8;
  v9 = *((_DWORD *)this + 48);
  v10 = v5 | 0xF;
  *(_DWORD *)(result + 56) = v5 | 0xF;
  *(_DWORD *)(result + 24) = v9;
  v11 = *((_DWORD *)this + 52);
  if ( v11 <= 1 )
  {
    v10 = v5 | 0x4F;
    *(_DWORD *)(result + 56) = v5 | 0x4F;
    *(_DWORD *)(result + 36) = v11;
  }
  v12 = *((_DWORD *)this + 53);
  *(_DWORD *)(result + 56) = v10 | 0x80;
  *(_DWORD *)(result + 40) = v12;
  *(_QWORD *)(result + 28) = *((_QWORD *)this + 27);
  *(_QWORD *)(result + 44) = *((_QWORD *)this + 28);
  *(_DWORD *)(result + 52) = *((_DWORD *)this + 58);
  *(_DWORD *)(result + 56) = v10 | 0x7B0;
  return result;
}


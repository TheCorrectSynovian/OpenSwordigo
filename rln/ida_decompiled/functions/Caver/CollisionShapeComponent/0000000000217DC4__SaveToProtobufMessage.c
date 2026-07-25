/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000217DC4
 * Mangled: _ZNK5Caver23CollisionShapeComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::CollisionShapeComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 1
 *   0x00000000001F53F0  Caver::CollisionShapeComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 9
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F8790  Caver::Program::SaveToProtobufMessage(Caver::Proto::Program *)
 *   0x00000000001F9200  Caver::ShapeComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000200590  Caver::Proto::CollisionShapeComponent::default_instance(void)
 *   0x0000000000218038  Caver::CollisionShapeComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 72
 *   insn=0x0000000000217DD8 string=0x0000000000217DDC "\t"
 *   insn=0x0000000000217DDC string=0x0000000000217DE0 "h&"
 *   insn=0x0000000000217DDC string=0x00000000001F9200 "0'"
 *   insn=0x0000000000217DE0 string=0x0000000000217DE4 "!F"
 *   insn=0x0000000000217DE4 string=0x0000000000217DE8 "s""
 *   insn=0x0000000000217DF4 string=0x0000000000217DF8 "b"
 *   insn=0x0000000000217E08 string=0x00000000001F7570 "0'"
 *   insn=0x0000000000217E10 string=0x0000000000217E14 "iB@"
 *   insn=0x0000000000217E14 string=0x0000000000217E18 "h2"
 *   insn=0x0000000000217E1C string=0x0000000000217E20 "("
 *   insn=0x0000000000217E20 string=0x0000000000217E24 "("
 *   insn=0x0000000000217E24 string=0x0000000000217E28 "hB"
 *   insn=0x0000000000217E28 string=0x0000000000217E2C "jB"
 *   insn=0x0000000000217E34 string=0x0000000000217E38 "h"
 *   insn=0x0000000000217E3C string=0x0000000000217E40 "("
 *   insn=0x0000000000217E40 string=0x0000000000217E44 "hB"
 *   insn=0x0000000000217E44 string=0x0000000000217E48 "j6"
 *   insn=0x0000000000217E50 string=0x0000000000217E54 ""
 *   insn=0x0000000000217E58 string=0x0000000000217E5C "hB"
 *   insn=0x0000000000217E5C string=0x0000000000217E60 "i:"
 *   insn=0x0000000000217E68 string=0x0000000000217E6C ""
 *   insn=0x0000000000217E70 string=0x0000000000217E74 "hB"
 *   insn=0x0000000000217E74 string=0x0000000000217E78 "i>"
 *   insn=0x0000000000217E80 string=0x0000000000217E84 ""
 *   insn=0x0000000000217E88 string=0x0000000000217E8C "hB"
 *   insn=0x0000000000217E8C string=0x0000000000217E90 "iB"
 *   insn=0x0000000000217E94 string=0x0000000000217E98 ")"
 *   insn=0x0000000000217E98 string=0x0000000000217E9C "?"
 *   insn=0x0000000000217EA0 string=0x0000000000217EA4 "j"
 *   insn=0x0000000000217EA4 string=0x0000000000217EAC "I"
 *   insn=0x0000000000217EAC string=0x0000000000217EB0 ""
 *   insn=0x0000000000217EB0 string=0x0000000000217EB4 "hB"
 *   insn=0x0000000000217EB4 string=0x0000000000217EB8 "i"
 *   insn=0x0000000000217EBC string=0x0000000000217EC0 "i"
 *   insn=0x0000000000217EC0 string=0x0000000000217EC4 "!5G"
 *   insn=0x0000000000217EC0 string=0x0000000000583734 "o"
 *   insn=0x0000000000217ECC string=0x0000000000217ED0 "B"
 *   insn=0x0000000000217ED0 string=0x0000000000217ED4 "@ !"
 *   insn=0x0000000000217ED8 string=0x0000000000217EDC ""
 *   insn=0x0000000000217EDC string=0x0000000000217EE0 "hB"
 *   insn=0x0000000000217EE0 string=0x0000000000217EE4 "`""
 *   insn=0x0000000000217EEC string=0x0000000000217EF0 ""
 *   insn=0x0000000000217EF4 string=0x0000000000217EF8 "hB"
 *   insn=0x0000000000217EF8 string=0x0000000000217EFC "i"
 *   insn=0x0000000000217F04 string=0x0000000000217F08 ")"
 *   insn=0x0000000000217F0C string=0x0000000000217F20 "v"
 *   insn=0x0000000000217F10 string=0x0000000000217F14 "i"
 *   insn=0x0000000000217F20 string=0x0000000000217F24 ""
 *   insn=0x0000000000217F24 string=0x0000000000217F28 "hB"
 *   insn=0x0000000000217F34 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000217F38 string=0x0000000000217F3C "1t"
 *   insn=0x0000000000217F3C string=0x0000000000217F40 "v"
 *   insn=0x0000000000217F3C string=0x00000000001F5000 "P'"
 *   insn=0x0000000000217F4C string=0x00000000001F8790 "0'"
 *   insn=0x0000000000217F54 string=0x0000000000217F58 ""
 *   insn=0x0000000000217F5C string=0x0000000000217F70 "hB@"
 *   insn=0x0000000000217F60 string=0x0000000000217F64 "h"
 *   insn=0x0000000000217F70 string=0x0000000000217F74 "v"
 *   insn=0x0000000000217F74 string=0x0000000000217F78 ""
 *   insn=0x0000000000217F78 string=0x0000000000217F7C "hB"
 *   insn=0x0000000000217F90 string=0x0000000000217F94 "v"
 *   insn=0x0000000000217FA8 string=0x0000000000217FAC ""
 *   insn=0x0000000000217FB0 string=0x0000000000217FC4 "hB@"
 *   insn=0x0000000000217FB4 string=0x0000000000217FB8 "h"
 *   insn=0x0000000000217FBC string=0x0000000000217FC0 "("
 *   insn=0x0000000000217FC4 string=0x0000000000217FC8 "t"
 *   insn=0x0000000000217FC8 string=0x0000000000217FCC ""
 *   insn=0x0000000000217FCC string=0x0000000000217FD0 "hB"
 *   insn=0x0000000000217FE0 string=0x0000000000217FE4 "t"
 *   insn=0x0000000000217FE4 string=0x0000000000217FE8 "t"
 *   insn=0x000000000021802C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000218030 string=0x0000000000218034 "$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CollisionShapeComponent::SaveToProtobufMessage(
        Caver::CollisionShapeComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::CollisionShapeComponent *v3; // x0
  __int64 result; // x0
  __int64 v5; // x19
  int v6; // w9
  __int64 v7; // x10
  int v8; // w8
  int v9; // w9
  int v10; // w9
  float v11; // s0
  Caver::Proto::Program *v12; // x22
  Caver::Proto::Program *v13; // x22
  Caver::Program *v14; // x21
  Caver::Proto::Program *v15; // x20

  Caver::ShapeComponent::SaveToProtobufMessage();
  Caver::Proto::CollisionShapeComponent::default_instance(v3);
  result = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = result;
  v6 = *(_DWORD *)(result + 64);
  *(_BYTE *)(result + 12) = *((_BYTE *)this + 376);
  v7 = *((_QWORD *)this + 42);
  v8 = v6 | 0x61;
  *(_DWORD *)(result + 64) = v6 | 0x61;
  *(_QWORD *)(result + 20) = v7;
  if ( *((_BYTE *)this + 378) )
  {
    v8 = v6 | 0x63;
    *(_DWORD *)(result + 64) = v6 | 0x63;
    *(_BYTE *)(result + 13) = 1;
  }
  if ( *((_BYTE *)this + 379) )
  {
    v8 |= 4u;
    *(_DWORD *)(result + 64) = v8;
    *(_BYTE *)(result + 14) = 1;
  }
  if ( *((_BYTE *)this + 380) )
  {
    v8 |= 8u;
    *(_DWORD *)(result + 64) = v8;
    *(_BYTE *)(result + 15) = 1;
  }
  if ( *((_BYTE *)this + 381) )
  {
    v8 |= 0x10u;
    *(_DWORD *)(result + 64) = v8;
    *(_BYTE *)(result + 16) = 1;
  }
  v9 = *((_DWORD *)this + 96) - 1;
  if ( (unsigned int)v9 <= 6 )
  {
    v10 = dword_583B50[v9];
    v8 |= 0x80u;
    *(_DWORD *)(result + 64) = v8;
    *(_DWORD *)(result + 28) = v10;
  }
  v11 = *((float *)this + 97);
  if ( fabsf(v11 + -1.0) > 0.001 )
  {
    v8 |= 0x100u;
    *(_DWORD *)(result + 64) = v8;
    *(float *)(result + 32) = v11;
  }
  if ( *((_BYTE *)this + 392) )
  {
    v8 |= 0x200u;
    *(_DWORD *)(result + 64) = v8;
    *(_BYTE *)(result + 36) = 1;
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 18) - 24LL) || *((_QWORD *)this + 19) || *((_QWORD *)this + 21) )
  {
    v12 = *(Caver::Proto::Program **)(result + 40);
    *(_DWORD *)(result + 64) = v8 | 0x400;
    if ( !v12 )
    {
      v12 = (Caver::Proto::Program *)operator new(0x30u);
      Caver::Proto::Program::Program(v12);
      *(_QWORD *)(v5 + 40) = v12;
    }
    result = Caver::Program::SaveToProtobufMessage((Caver::CollisionShapeComponent *)((char *)this + 144), v12);
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 23) - 24LL) || *((_QWORD *)this + 24) || *((_QWORD *)this + 26) )
  {
    v13 = *(Caver::Proto::Program **)(v5 + 48);
    *(_DWORD *)(v5 + 64) |= 0x800u;
    if ( !v13 )
    {
      v13 = (Caver::Proto::Program *)operator new(0x30u);
      Caver::Proto::Program::Program(v13);
      *(_QWORD *)(v5 + 48) = v13;
    }
    result = Caver::Program::SaveToProtobufMessage((Caver::CollisionShapeComponent *)((char *)this + 184), v13);
  }
  v14 = (Caver::CollisionShapeComponent *)((char *)this + 224);
  if ( *(_QWORD *)(*((_QWORD *)this + 28) - 24LL) || *((_QWORD *)this + 29) || *((_QWORD *)this + 31) )
  {
    v15 = *(Caver::Proto::Program **)(v5 + 56);
    *(_DWORD *)(v5 + 64) |= 0x1000u;
    if ( !v15 )
    {
      v15 = (Caver::Proto::Program *)operator new(0x30u);
      Caver::Proto::Program::Program(v15);
      *(_QWORD *)(v5 + 56) = v15;
    }
    return Caver::Program::SaveToProtobufMessage(v14, v15);
  }
  return result;
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000263F90
 * Mangled: _ZNK5Caver15DamageComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::DamageComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F3D80  Caver::ProtobufValueFromSpecialDamageType(Caver::SpecialDamageType)
 *   0x00000000001F6B90  Caver::ProtobufValueFromDamageType(Caver::DamageType)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FCCE0  Caver::Proto::DamageComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Referenced strings: 27
 *   insn=0x0000000000263FA8 string=0x0000000000263FAC "($"
 *   insn=0x0000000000263FAC string=0x0000000000263FB0 ""
 *   insn=0x0000000000263FB8 string=0x0000000000263FBC "Ic"
 *   insn=0x0000000000263FBC string=0x00000000001FCCE0 "0'"
 *   insn=0x0000000000263FC0 string=0x0000000000263FC4 "b"
 *   insn=0x0000000000263FD0 string=0x0000000000263FD4 "gM"
 *   insn=0x0000000000263FD4 string=0x00000000001F7570 "0'"
 *   insn=0x0000000000263FDC string=0x0000000000263FE0 "i"
 *   insn=0x0000000000263FE0 string=0x0000000000263FE4 "\n"
 *   insn=0x0000000000263FEC string=0x0000000000263FF0 "i"
 *   insn=0x0000000000263FF0 string=0x0000000000263FF4 "?"
 *   insn=0x0000000000263FF8 string=0x0000000000263FFC "j"
 *   insn=0x0000000000263FF8 string=0x0000000000264010 "`"
 *   insn=0x0000000000263FFC string=0x0000000000264000 ""
 *   insn=0x0000000000264004 string=0x0000000000264008 "I"
 *   insn=0x0000000000264014 string=0x00000000001F6B90 "0'"
 *   insn=0x000000000026401C string=0x0000000000264020 ""
 *   insn=0x0000000000264024 string=0x0000000000264028 "`"
 *   insn=0x0000000000264028 string=0x000000000026402C "U?"
 *   insn=0x000000000026402C string=0x00000000001F3D80 "P'"
 *   insn=0x0000000000264034 string=0x0000000000264038 "("
 *   insn=0x000000000026403C string=0x0000000000264040 "jBC9"
 *   insn=0x0000000000264044 string=0x0000000000264048 "("
 *   insn=0x0000000000264044 string=0x0000000000264058 "if@"
 *   insn=0x0000000000264058 string=0x000000000026405C "2"
 *   insn=0x0000000000264060 string=0x0000000000264064 "i"
 *   insn=0x0000000000264068 string=0x000000000026406C "iFC9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DamageComponent::SaveToProtobufMessage(
        Caver::DamageComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::DamageComponent *v3; // x0
  _DWORD *v4; // x0
  _DWORD *v5; // x20
  int v6; // w8
  int v7; // w9
  int v8; // w9
  int v9; // w10
  int v10; // w0
  int v11; // w8
  __int64 result; // x0
  int v13; // w9
  int v14; // w8
  char v15; // w9

  v3 = (Caver::Proto::DamageComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::DamageComponent::default_instance(v3);
  v4 = (_DWORD *)google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = v4;
  v6 = v4[11];
  v7 = *((_DWORD *)this + 41);
  v4[11] = v6 | 1;
  v4[3] = v7;
  v8 = *((_DWORD *)this + 42);
  if ( v8 >= 1 )
  {
    v9 = *((_DWORD *)this + 41);
    v4[11] = v6 | 3;
    v4[4] = v9 + v8;
  }
  v10 = Caver::ProtobufValueFromDamageType();
  v11 = v5[11];
  v5[5] = v10;
  v5[11] = v11 | 4;
  result = Caver::ProtobufValueFromSpecialDamageType();
  v13 = v5[11];
  v5[6] = result;
  v14 = v13 | 8;
  v5[11] = v13 | 8;
  if ( *((_BYTE *)this + 208) )
  {
    v14 = v13 | 0x18;
    v5[11] = v13 | 0x18;
    *((_BYTE *)v5 + 28) = 1;
  }
  *((_QWORD *)v5 + 4) = *((_QWORD *)this + 25);
  *((_BYTE *)v5 + 40) = *((_BYTE *)this + 160);
  v15 = *((_BYTE *)this + 209);
  v5[11] = v14 | 0x1E0;
  *((_BYTE *)v5 + 41) = v15;
  return result;
}


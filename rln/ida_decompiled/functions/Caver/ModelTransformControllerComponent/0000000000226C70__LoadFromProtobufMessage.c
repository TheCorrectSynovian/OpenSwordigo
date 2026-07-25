/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000226C70
 * Mangled: _ZN5Caver33ModelTransformControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::ModelTransformControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 35
 *   insn=0x0000000000226C84 string=0x0000000000226C88 "&"
 *   insn=0x0000000000226C84 string=0x00000000001FA840 "0'"
 *   insn=0x0000000000226C88 string=0x0000000000226C8C ")C"
 *   insn=0x0000000000226C98 string=0x0000000000226C9C "=`"
 *   insn=0x0000000000226CA4 string=0x0000000000226CA8 "iz@"
 *   insn=0x0000000000226CA8 string=0x0000000000226CAC "?"
 *   insn=0x0000000000226CAC string=0x0000000000226CB0 " "
 *   insn=0x0000000000226CB0 string=0x0000000000226CB4 "`B@"
 *   insn=0x0000000000226CB4 string=0x0000000000226CB8 "hz"
 *   insn=0x0000000000226CC0 string=0x0000000000226CC4 "@"
 *   insn=0x0000000000226CC4 string=0x0000000000226CC8 ""
 *   insn=0x0000000000226CC8 string=0x0000000000226CCC ""
 *   insn=0x0000000000226CD0 string=0x0000000000226D4C ""
 *   insn=0x0000000000226CD8 string=0x0000000000226CDC "\n&"
 *   insn=0x0000000000226CE0 string=0x0000000000226CE4 "J1A"
 *   insn=0x0000000000226CE4 string=0x0000000000226CE8 "?"
 *   insn=0x0000000000226CE8 string=0x0000000000226CEC "J"
 *   insn=0x0000000000226CEC string=0x0000000000226CF0 "I"
 *   insn=0x0000000000226CF0 string=0x0000000000226CF4 ")\t@"
 *   insn=0x0000000000226CF4 string=0x0000000000226CF8 "*"
 *   insn=0x0000000000226CF8 string=0x0000000000226CFC ")"
 *   insn=0x0000000000226CFC string=0x0000000000226D00 "j"
 *   insn=0x0000000000226D00 string=0x0000000000226D04 "i"
 *   insn=0x0000000000226D08 string=0x0000000000226D0C "\t&"
 *   insn=0x0000000000226D10 string=0x0000000000226D14 ")1A"
 *   insn=0x0000000000226D18 string=0x0000000000226D1C ")"
 *   insn=0x0000000000226D1C string=0x0000000000226D20 "("
 *   insn=0x0000000000226D20 string=0x0000000000226D24 "@"
 *   insn=0x0000000000226D24 string=0x0000000000226D28 "\t"
 *   insn=0x0000000000226D28 string=0x0000000000226D2C ""
 *   insn=0x0000000000226D2C string=0x0000000000226D30 "iN"
 *   insn=0x0000000000226D30 string=0x0000000000226D34 "h"
 *   insn=0x0000000000226D38 string=0x0000000000226D3C "hB\n"
 *   insn=0x0000000000226D4C string=0x0000000000226D50 ""
 *   insn=0x0000000000226D58 string=0x0000000000226D5C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ModelTransformControllerComponent::LoadFromProtobufMessage(
        Caver::ModelTransformControllerComponent *this,
        const Caver::Proto::Component *a2)
{
  _DWORD *result; // x0
  _DWORD *v5; // x20
  int v6; // w8
  int v7; // w8
  int v8; // w8
  __int64 v9; // x9
  __int64 v10; // x9
  __int64 v11; // x10
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x9

  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::GetMessage(
                       (const Caver::Proto::Component *)((char *)a2 + 8),
                       Caver::Proto::ModelTransformControllerComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E9340);
  v5 = result;
  v6 = result[3];
  if ( *((_DWORD *)this + 30) == v6
    || (result = (_DWORD *)*((_QWORD *)this + 16), *((_DWORD *)this + 30) = v6, *((_QWORD *)this + 16) = 0, !result)
    || (v7 = result[2] - 1, (result[2] = v7) != 0) )
  {
    v8 = v5[10];
    if ( (v8 & 2) == 0 )
      goto LABEL_9;
  }
  else
  {
    result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    v8 = v5[10];
    if ( (v8 & 2) == 0 )
      goto LABEL_9;
  }
  if ( *((_QWORD *)v5 + 2) )
    v9 = (__int64)v5;
  else
    v9 = Caver::Proto::ModelTransformControllerComponent::default_instance_;
  v10 = *(_QWORD *)(v9 + 16);
  v11 = *(_QWORD *)(v10 + 12);
  LODWORD(v10) = *(_DWORD *)(v10 + 20);
  *(_QWORD *)((char *)this + 140) = v11;
  *((_DWORD *)this + 37) = v10;
LABEL_9:
  if ( (v8 & 4) != 0 )
  {
    if ( *((_QWORD *)v5 + 3) )
      v12 = (__int64)v5;
    else
      v12 = Caver::Proto::ModelTransformControllerComponent::default_instance_;
    v13 = *(_QWORD *)(v12 + 24);
    v14 = *(_QWORD *)(v13 + 12);
    LODWORD(v13) = *(_DWORD *)(v13 + 20);
    *((_QWORD *)this + 19) = v14;
    *((_DWORD *)this + 40) = v13;
  }
  *(_QWORD *)((char *)this + 164) = *((_QWORD *)v5 + 4);
  return result;
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A1218
 * Mangled: _ZN5Caver33WalkingMonsterControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::WalkingMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x00000000001FFBB0  Caver::MonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 14
 *   insn=0x00000000002A1228 string=0x00000000002A122C "az"
 *   insn=0x00000000002A122C string=0x00000000002A1230 "(""
 *   insn=0x00000000002A1230 string=0x00000000002A1234 ""
 *   insn=0x00000000002A1244 string=0x00000000002A1248 ""
 *   insn=0x00000000002A1248 string=0x00000000002A124C "i"
 *   insn=0x00000000002A124C string=0x00000000002A1250 "?"
 *   insn=0x00000000002A1250 string=0x00000000002A1254 " "
 *   insn=0x00000000002A1254 string=0x00000000002A1258 "`r@"
 *   insn=0x00000000002A1258 string=0x00000000002A125C "h"
 *   insn=0x00000000002A1264 string=0x00000000002A1268 "@"
 *   insn=0x00000000002A1268 string=0x00000000002A126C ""
 *   insn=0x00000000002A126C string=0x00000000002A1270 ""
 *   insn=0x00000000002A1274 string=0x00000000002A1284 ""
 *   insn=0x00000000002A1290 string=0x00000000002A1294 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::WalkingMonsterControllerComponent::LoadFromProtobufMessage(
        Caver::WalkingMonsterControllerComponent *this,
        const Caver::Proto::Component *a2)
{
  _DWORD *result; // x0
  int v5; // w8
  int v6; // w8

  Caver::MonsterControllerComponent::LoadFromProtobufMessage(this, a2);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::GetMessage(
                       (const Caver::Proto::Component *)((char *)a2 + 8),
                       Caver::Proto::WalkingMonsterControllerComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E9630);
  v5 = result[3];
  if ( *((_DWORD *)this + 54) != v5 )
  {
    result = (_DWORD *)*((_QWORD *)this + 28);
    *((_DWORD *)this + 54) = v5;
    *((_QWORD *)this + 28) = 0;
    if ( result )
    {
      v6 = result[2] - 1;
      result[2] = v6;
      if ( !v6 )
        return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  return result;
}


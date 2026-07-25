/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000298BAC
 * Mangled: _ZN5Caver33LeapingMonsterControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::LeapingMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x00000000001FFBB0  Caver::MonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 22
 *   insn=0x0000000000298BC0 string=0x0000000000298BC4 "h""
 *   insn=0x0000000000298BC4 string=0x0000000000298BC8 "UB"
 *   insn=0x0000000000298BD4 string=0x0000000000298BD8 "n"
 *   insn=0x0000000000298BE0 string=0x0000000000298BE4 "i"
 *   insn=0x0000000000298BE4 string=0x0000000000298BE8 "?"
 *   insn=0x0000000000298BEC string=0x0000000000298BF0 "`r@"
 *   insn=0x0000000000298BF0 string=0x0000000000298BF4 "h"
 *   insn=0x0000000000298BFC string=0x0000000000298C00 "@"
 *   insn=0x0000000000298C00 string=0x0000000000298C04 ""
 *   insn=0x0000000000298C04 string=0x0000000000298C08 ""
 *   insn=0x0000000000298C0C string=0x0000000000298C10 ""
 *   insn=0x0000000000298C10 string=0x0000000000298C14 ""
 *   insn=0x0000000000298C1C string=0x0000000000298C20 "i"
 *   insn=0x0000000000298C20 string=0x0000000000298C24 "?"
 *   insn=0x0000000000298C24 string=0x0000000000298C28 " "
 *   insn=0x0000000000298C28 string=0x0000000000298C2C "`~@"
 *   insn=0x0000000000298C2C string=0x0000000000298C30 "h"
 *   insn=0x0000000000298C38 string=0x0000000000298C3C "@"
 *   insn=0x0000000000298C3C string=0x0000000000298C40 ""
 *   insn=0x0000000000298C40 string=0x0000000000298C44 ""
 *   insn=0x0000000000298C48 string=0x0000000000298C58 ""
 *   insn=0x0000000000298C64 string=0x0000000000298C68 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::LeapingMonsterControllerComponent::LoadFromProtobufMessage(
        Caver::LeapingMonsterControllerComponent *this,
        const Caver::Proto::Component *a2)
{
  _DWORD *result; // x0
  _DWORD *v5; // x20
  int v6; // w8
  int v7; // w8
  int v8; // w8
  int v9; // w8

  Caver::MonsterControllerComponent::LoadFromProtobufMessage(this, a2);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::GetMessage(
                       (const Caver::Proto::Component *)((char *)a2 + 8),
                       Caver::Proto::LeapingMonsterControllerComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E9670);
  v5 = result;
  v6 = result[3];
  if ( *((_DWORD *)this + 54) != v6 )
  {
    result = (_DWORD *)*((_QWORD *)this + 28);
    *((_DWORD *)this + 54) = v6;
    *((_QWORD *)this + 28) = 0;
    if ( result )
    {
      v7 = result[2] - 1;
      result[2] = v7;
      if ( !v7 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v8 = v5[4];
  if ( *((_DWORD *)this + 60) != v8 )
  {
    result = (_DWORD *)*((_QWORD *)this + 31);
    *((_DWORD *)this + 60) = v8;
    *((_QWORD *)this + 31) = 0;
    if ( result )
    {
      v9 = result[2] - 1;
      result[2] = v9;
      if ( !v9 )
        return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  return result;
}


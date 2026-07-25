/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029DA00
 * Mangled: _ZN5Caver32SkellyMonsterControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::SkellyMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x00000000001FFBB0  Caver::MonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 22
 *   insn=0x000000000029DA10 string=0x000000000029DA14 "g"
 *   insn=0x000000000029DA14 string=0x000000000029DA18 "H""
 *   insn=0x000000000029DA18 string=0x000000000029DA1C ""
 *   insn=0x000000000029DA34 string=0x000000000029DA38 "i"
 *   insn=0x000000000029DA38 string=0x000000000029DA3C "?"
 *   insn=0x000000000029DA40 string=0x000000000029DA44 "`r@"
 *   insn=0x000000000029DA44 string=0x000000000029DA48 "h"
 *   insn=0x000000000029DA50 string=0x000000000029DA54 "@"
 *   insn=0x000000000029DA54 string=0x000000000029DA58 ""
 *   insn=0x000000000029DA58 string=0x000000000029DA5C ""
 *   insn=0x000000000029DA60 string=0x000000000029DA64 ""
 *   insn=0x000000000029DA64 string=0x000000000029DA68 ""
 *   insn=0x000000000029DA70 string=0x000000000029DA74 "i"
 *   insn=0x000000000029DA74 string=0x000000000029DA78 "?"
 *   insn=0x000000000029DA78 string=0x000000000029DA7C " "
 *   insn=0x000000000029DA7C string=0x000000000029DA80 "`~@"
 *   insn=0x000000000029DA80 string=0x000000000029DA84 "h"
 *   insn=0x000000000029DA8C string=0x000000000029DA90 "@"
 *   insn=0x000000000029DA90 string=0x000000000029DA94 ""
 *   insn=0x000000000029DA94 string=0x000000000029DA98 ""
 *   insn=0x000000000029DA9C string=0x000000000029DAAC ""
 *   insn=0x000000000029DAB8 string=0x000000000029DABC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::SkellyMonsterControllerComponent::LoadFromProtobufMessage(
        Caver::SkellyMonsterControllerComponent *this,
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
                       Caver::Proto::SkellyMonsterControllerComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E9680);
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


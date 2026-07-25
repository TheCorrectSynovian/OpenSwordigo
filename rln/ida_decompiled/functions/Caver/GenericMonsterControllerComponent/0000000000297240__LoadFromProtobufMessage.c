/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000297240
 * Mangled: _ZN5Caver33GenericMonsterControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::GenericMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x00000000001FFBB0  Caver::MonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 14
 *   insn=0x0000000000297250 string=0x0000000000297254 "W"
 *   insn=0x0000000000297254 string=0x0000000000297258 "h""
 *   insn=0x0000000000297258 string=0x000000000029725C ""
 *   insn=0x000000000029726C string=0x0000000000297270 ""
 *   insn=0x0000000000297270 string=0x0000000000297274 "i"
 *   insn=0x0000000000297274 string=0x0000000000297278 "?"
 *   insn=0x0000000000297278 string=0x000000000029727C " "
 *   insn=0x000000000029727C string=0x0000000000297280 "`r@"
 *   insn=0x0000000000297280 string=0x0000000000297284 "h"
 *   insn=0x000000000029728C string=0x0000000000297290 "@"
 *   insn=0x0000000000297290 string=0x0000000000297294 ""
 *   insn=0x0000000000297294 string=0x0000000000297298 ""
 *   insn=0x000000000029729C string=0x00000000002972AC ""
 *   insn=0x00000000002972B8 string=0x00000000002972BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::GenericMonsterControllerComponent::LoadFromProtobufMessage(
        Caver::GenericMonsterControllerComponent *this,
        const Caver::Proto::Component *a2)
{
  _DWORD *result; // x0
  int v5; // w8
  int v6; // w8

  Caver::MonsterControllerComponent::LoadFromProtobufMessage(this, a2);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::GetMessage(
                       (const Caver::Proto::Component *)((char *)a2 + 8),
                       Caver::Proto::GenericMonsterControllerComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E96E0);
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


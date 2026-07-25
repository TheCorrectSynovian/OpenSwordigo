/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000299F08
 * Mangled: _ZN5Caver31MonsterDeathControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::MonsterDeathControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 15
 *   insn=0x0000000000299F18 string=0x0000000000299F1C "I"
 *   insn=0x0000000000299F1C string=0x0000000000299F20 "h""
 *   insn=0x0000000000299F1C string=0x00000000001FA840 "0'"
 *   insn=0x0000000000299F20 string=0x0000000000299F24 "]D"
 *   insn=0x0000000000299F34 string=0x0000000000299F38 ""
 *   insn=0x0000000000299F38 string=0x0000000000299F3C "iz@"
 *   insn=0x0000000000299F3C string=0x0000000000299F40 "?"
 *   insn=0x0000000000299F40 string=0x0000000000299F44 " "
 *   insn=0x0000000000299F44 string=0x0000000000299F48 "`B@"
 *   insn=0x0000000000299F48 string=0x0000000000299F4C "hz"
 *   insn=0x0000000000299F54 string=0x0000000000299F58 "@"
 *   insn=0x0000000000299F58 string=0x0000000000299F5C ""
 *   insn=0x0000000000299F5C string=0x0000000000299F60 ""
 *   insn=0x0000000000299F64 string=0x0000000000299F74 ""
 *   insn=0x0000000000299F80 string=0x0000000000299F84 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::MonsterDeathControllerComponent::LoadFromProtobufMessage(
        Caver::MonsterDeathControllerComponent *this,
        const Caver::Proto::Component *a2)
{
  _DWORD *result; // x0
  int v5; // w8
  int v6; // w8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::GetMessage(
                       (const Caver::Proto::Component *)((char *)a2 + 8),
                       Caver::Proto::MonsterDeathControllerComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E96D0);
  v5 = result[3];
  if ( *((_DWORD *)this + 30) != v5 )
  {
    result = (_DWORD *)*((_QWORD *)this + 16);
    *((_DWORD *)this + 30) = v5;
    *((_QWORD *)this + 16) = 0;
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


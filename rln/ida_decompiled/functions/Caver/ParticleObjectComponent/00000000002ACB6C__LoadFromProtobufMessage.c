/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ACB6C
 * Mangled: _ZN5Caver23ParticleObjectComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::ParticleObjectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 15
 *   insn=0x00000000002ACB7C string=0x00000000002ACB80 "07"
 *   insn=0x00000000002ACB80 string=0x00000000001FA840 "0'"
 *   insn=0x00000000002ACB84 string=0x00000000002ACB88 "5F"
 *   insn=0x00000000002ACB94 string=0x00000000002ACB98 "~H"
 *   insn=0x00000000002ACB98 string=0x00000000002ACB9C ""
 *   insn=0x00000000002ACB9C string=0x00000000002ACBA0 "iz@"
 *   insn=0x00000000002ACBA0 string=0x00000000002ACBA4 "?"
 *   insn=0x00000000002ACBA4 string=0x00000000002ACBA8 " "
 *   insn=0x00000000002ACBA8 string=0x00000000002ACBAC "`B@"
 *   insn=0x00000000002ACBAC string=0x00000000002ACBB0 "hz"
 *   insn=0x00000000002ACBB8 string=0x00000000002ACBBC "@"
 *   insn=0x00000000002ACBBC string=0x00000000002ACBC0 ""
 *   insn=0x00000000002ACBC0 string=0x00000000002ACBC4 ""
 *   insn=0x00000000002ACBC8 string=0x00000000002ACBD8 ""
 *   insn=0x00000000002ACBE4 string=0x00000000002ACBE8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ParticleObjectComponent::LoadFromProtobufMessage(
        Caver::ParticleObjectComponent *this,
        const Caver::Proto::Component *a2)
{
  _DWORD *result; // x0
  int v5; // w8
  int v6; // w8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::GetMessage(
                       (const Caver::Proto::Component *)((char *)a2 + 8),
                       Caver::Proto::ParticleObjectComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E95F0);
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


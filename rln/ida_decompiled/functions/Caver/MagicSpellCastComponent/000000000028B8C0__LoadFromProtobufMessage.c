/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028B8C0
 * Mangled: _ZN5Caver23MagicSpellCastComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::MagicSpellCastComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 22
 *   insn=0x000000000028B8D4 string=0x00000000001FA840 "0'"
 *   insn=0x000000000028B8D8 string=0x000000000028B8DC ""
 *   insn=0x000000000028B8E8 string=0x000000000028B8EC ")"
 *   insn=0x000000000028B8F4 string=0x000000000028B8F8 "iz@"
 *   insn=0x000000000028B8F8 string=0x000000000028B8FC "?"
 *   insn=0x000000000028B900 string=0x000000000028B904 "`B@"
 *   insn=0x000000000028B904 string=0x000000000028B908 "hz"
 *   insn=0x000000000028B910 string=0x000000000028B914 "@"
 *   insn=0x000000000028B914 string=0x000000000028B918 ""
 *   insn=0x000000000028B918 string=0x000000000028B91C ""
 *   insn=0x000000000028B920 string=0x000000000028B924 ""
 *   insn=0x000000000028B924 string=0x000000000028B928 ""
 *   insn=0x000000000028B930 string=0x000000000028B934 "i"
 *   insn=0x000000000028B934 string=0x000000000028B938 "?"
 *   insn=0x000000000028B938 string=0x000000000028B93C " "
 *   insn=0x000000000028B93C string=0x000000000028B940 "`N@"
 *   insn=0x000000000028B940 string=0x000000000028B944 "h"
 *   insn=0x000000000028B94C string=0x000000000028B950 "@"
 *   insn=0x000000000028B950 string=0x000000000028B954 ""
 *   insn=0x000000000028B954 string=0x000000000028B958 ""
 *   insn=0x000000000028B95C string=0x000000000028B96C ""
 *   insn=0x000000000028B978 string=0x000000000028B97C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::MagicSpellCastComponent::LoadFromProtobufMessage(
        Caver::MagicSpellCastComponent *this,
        const Caver::Proto::Component *a2)
{
  _DWORD *result; // x0
  _DWORD *v5; // x20
  int v6; // w8
  int v7; // w8
  int v8; // w8
  int v9; // w8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::GetMessage(
                       (const Caver::Proto::Component *)((char *)a2 + 8),
                       Caver::Proto::MagicSpellCastComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E9848);
  v5 = result;
  v6 = result[3];
  if ( *((_DWORD *)this + 30) != v6 )
  {
    result = (_DWORD *)*((_QWORD *)this + 16);
    *((_DWORD *)this + 30) = v6;
    *((_QWORD *)this + 16) = 0;
    if ( result )
    {
      v7 = result[2] - 1;
      result[2] = v7;
      if ( !v7 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v8 = v5[4];
  if ( *((_DWORD *)this + 36) != v8 )
  {
    result = (_DWORD *)*((_QWORD *)this + 19);
    *((_DWORD *)this + 36) = v8;
    *((_QWORD *)this + 19) = 0;
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


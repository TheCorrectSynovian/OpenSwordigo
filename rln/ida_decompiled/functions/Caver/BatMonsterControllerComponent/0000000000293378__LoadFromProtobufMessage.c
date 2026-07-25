/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000293378
 * Mangled: _ZN5Caver29BatMonsterControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::BatMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x00000000001FFBB0  Caver::MonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 22
 *   insn=0x0000000000293388 string=0x000000000029338C "\t"
 *   insn=0x0000000000293390 string=0x0000000000293394 ""
 *   insn=0x00000000002933A0 string=0x00000000002933A4 "{"
 *   insn=0x00000000002933AC string=0x00000000002933B0 "i"
 *   insn=0x00000000002933B0 string=0x00000000002933B4 "?"
 *   insn=0x00000000002933B8 string=0x00000000002933BC "`r@"
 *   insn=0x00000000002933BC string=0x00000000002933C0 "h"
 *   insn=0x00000000002933C8 string=0x00000000002933CC "@"
 *   insn=0x00000000002933CC string=0x00000000002933D0 ""
 *   insn=0x00000000002933D0 string=0x00000000002933D4 ""
 *   insn=0x00000000002933D8 string=0x00000000002933DC ""
 *   insn=0x00000000002933DC string=0x00000000002933E0 ""
 *   insn=0x00000000002933E8 string=0x00000000002933EC "i"
 *   insn=0x00000000002933EC string=0x00000000002933F0 "?"
 *   insn=0x00000000002933F0 string=0x00000000002933F4 " "
 *   insn=0x00000000002933F4 string=0x00000000002933F8 "`~@"
 *   insn=0x00000000002933F8 string=0x00000000002933FC "h"
 *   insn=0x0000000000293404 string=0x0000000000293408 "@"
 *   insn=0x0000000000293408 string=0x000000000029340C ""
 *   insn=0x000000000029340C string=0x0000000000293410 ""
 *   insn=0x0000000000293414 string=0x0000000000293424 ""
 *   insn=0x0000000000293430 string=0x0000000000293434 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::BatMonsterControllerComponent::LoadFromProtobufMessage(
        Caver::BatMonsterControllerComponent *this,
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
                       Caver::Proto::BatMonsterControllerComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E96B0);
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


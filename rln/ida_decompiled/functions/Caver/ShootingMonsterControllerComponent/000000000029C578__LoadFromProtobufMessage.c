/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029C578
 * Mangled: _ZN5Caver34ShootingMonsterControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::ShootingMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x00000000001FFBB0  Caver::MonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 21
 *   insn=0x000000000029C58C string=0x000000000029C590 "H""
 *   insn=0x000000000029C590 string=0x000000000029C594 ""
 *   insn=0x000000000029C5AC string=0x000000000029C5B0 "i"
 *   insn=0x000000000029C5B0 string=0x000000000029C5B4 "?"
 *   insn=0x000000000029C5B8 string=0x000000000029C5BC "`r@"
 *   insn=0x000000000029C5BC string=0x000000000029C5C0 "h"
 *   insn=0x000000000029C5C8 string=0x000000000029C5CC "@"
 *   insn=0x000000000029C5CC string=0x000000000029C5D0 ""
 *   insn=0x000000000029C5D0 string=0x000000000029C5D4 ""
 *   insn=0x000000000029C5D8 string=0x000000000029C5DC ""
 *   insn=0x000000000029C5DC string=0x000000000029C5E0 ""
 *   insn=0x000000000029C5E8 string=0x000000000029C5EC "i"
 *   insn=0x000000000029C5EC string=0x000000000029C5F0 "?"
 *   insn=0x000000000029C5F0 string=0x000000000029C5F4 " "
 *   insn=0x000000000029C5F4 string=0x000000000029C5F8 "`~@"
 *   insn=0x000000000029C5F8 string=0x000000000029C5FC "h"
 *   insn=0x000000000029C604 string=0x000000000029C608 "@"
 *   insn=0x000000000029C608 string=0x000000000029C60C ""
 *   insn=0x000000000029C60C string=0x000000000029C610 ""
 *   insn=0x000000000029C614 string=0x000000000029C624 ""
 *   insn=0x000000000029C630 string=0x000000000029C634 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ShootingMonsterControllerComponent::LoadFromProtobufMessage(
        Caver::ShootingMonsterControllerComponent *this,
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
                       Caver::Proto::ShootingMonsterControllerComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E96A0);
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


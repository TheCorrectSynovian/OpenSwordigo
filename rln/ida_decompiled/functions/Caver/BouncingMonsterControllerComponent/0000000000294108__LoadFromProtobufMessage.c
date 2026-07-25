/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000294108
 * Mangled: _ZN5Caver34BouncingMonsterControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::BouncingMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x00000000001FFBB0  Caver::MonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 20
 *   insn=0x0000000000294120 string=0x0000000000294124 "9G"
 *   insn=0x000000000029413C string=0x0000000000294140 "i"
 *   insn=0x0000000000294140 string=0x0000000000294144 "?"
 *   insn=0x0000000000294148 string=0x000000000029414C "`r@"
 *   insn=0x000000000029414C string=0x0000000000294150 "h"
 *   insn=0x0000000000294158 string=0x000000000029415C "@"
 *   insn=0x000000000029415C string=0x0000000000294160 ""
 *   insn=0x0000000000294160 string=0x0000000000294164 ""
 *   insn=0x0000000000294168 string=0x000000000029416C ""
 *   insn=0x000000000029416C string=0x0000000000294170 ""
 *   insn=0x0000000000294178 string=0x000000000029417C "i"
 *   insn=0x000000000029417C string=0x0000000000294180 "?"
 *   insn=0x0000000000294184 string=0x0000000000294188 "`~@"
 *   insn=0x0000000000294188 string=0x000000000029418C "h"
 *   insn=0x0000000000294194 string=0x0000000000294198 "@"
 *   insn=0x0000000000294198 string=0x000000000029419C ""
 *   insn=0x000000000029419C string=0x00000000002941A0 ""
 *   insn=0x00000000002941A4 string=0x00000000002941A8 ""
 *   insn=0x00000000002941A8 string=0x00000000002941AC ""
 *   insn=0x00000000002941B4 string=0x00000000002941B8 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::BouncingMonsterControllerComponent::LoadFromProtobufMessage(
        Caver::BouncingMonsterControllerComponent *this,
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
                       Caver::Proto::BouncingMonsterControllerComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E96C0);
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
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  *((_QWORD *)this + 33) = *(_QWORD *)(v5 + 5);
  return result;
}


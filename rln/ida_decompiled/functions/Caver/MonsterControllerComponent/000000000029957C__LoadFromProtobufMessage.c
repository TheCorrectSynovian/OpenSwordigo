/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029957C
 * Mangled: _ZN5Caver26MonsterControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::MonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 1
 *   0x00000000001FFBB0  Caver::MonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 2
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 31
 *   insn=0x0000000000299590 string=0x0000000000299594 "H""
 *   insn=0x0000000000299590 string=0x00000000001FA840 "0'"
 *   insn=0x0000000000299594 string=0x0000000000299598 ""
 *   insn=0x00000000002995B0 string=0x00000000002995B4 "iz@"
 *   insn=0x00000000002995B4 string=0x00000000002995B8 "?"
 *   insn=0x00000000002995BC string=0x00000000002995C0 "`B@"
 *   insn=0x00000000002995C0 string=0x00000000002995C4 "hz"
 *   insn=0x00000000002995CC string=0x00000000002995D0 "@"
 *   insn=0x00000000002995D0 string=0x00000000002995D4 ""
 *   insn=0x00000000002995D4 string=0x00000000002995D8 ""
 *   insn=0x00000000002995DC string=0x00000000002995E0 ""
 *   insn=0x00000000002995E0 string=0x00000000002995E4 ""
 *   insn=0x00000000002995EC string=0x00000000002995F0 "i"
 *   insn=0x00000000002995F0 string=0x00000000002995F4 "?"
 *   insn=0x00000000002995F8 string=0x00000000002995FC "`N@"
 *   insn=0x00000000002995FC string=0x0000000000299600 "h"
 *   insn=0x0000000000299608 string=0x000000000029960C "@"
 *   insn=0x000000000029960C string=0x0000000000299610 ""
 *   insn=0x0000000000299610 string=0x0000000000299614 ""
 *   insn=0x0000000000299618 string=0x000000000029961C ""
 *   insn=0x000000000029961C string=0x0000000000299620 ""
 *   insn=0x0000000000299628 string=0x000000000029962C "i"
 *   insn=0x000000000029962C string=0x0000000000299630 "?"
 *   insn=0x0000000000299634 string=0x0000000000299638 "`Z@"
 *   insn=0x0000000000299638 string=0x000000000029963C "h"
 *   insn=0x0000000000299644 string=0x0000000000299648 "@"
 *   insn=0x0000000000299648 string=0x000000000029964C ""
 *   insn=0x000000000029964C string=0x0000000000299650 ""
 *   insn=0x0000000000299654 string=0x0000000000299658 ""
 *   insn=0x0000000000299658 string=0x000000000029965C ""
 *   insn=0x0000000000299664 string=0x0000000000299668 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::MonsterControllerComponent::LoadFromProtobufMessage(
        Caver::MonsterControllerComponent *this,
        const Caver::Proto::Component *a2)
{
  _DWORD *result; // x0
  _DWORD *v5; // x20
  int v6; // w8
  int v7; // w8
  int v8; // w8
  int v9; // w8
  int v10; // w8
  int v11; // w8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::GetMessage(
                       (const Caver::Proto::Component *)((char *)a2 + 8),
                       Caver::Proto::MonsterControllerComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E9620);
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
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v10 = v5[5];
  if ( *((_DWORD *)this + 42) != v10 )
  {
    result = (_DWORD *)*((_QWORD *)this + 22);
    *((_DWORD *)this + 42) = v10;
    *((_QWORD *)this + 22) = 0;
    if ( result )
    {
      v11 = result[2] - 1;
      result[2] = v11;
      if ( !v11 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  *((_DWORD *)this + 50) = v5[6];
  return result;
}


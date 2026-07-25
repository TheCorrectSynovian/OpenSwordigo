/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A0690
 * Mangled: _ZN5Caver32StaticMonsterControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::StaticMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x00000000001FFBB0  Caver::MonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 17
 *   insn=0x00000000002A06A4 string=0x00000000002A06A8 "B}"
 *   insn=0x00000000002A06A8 string=0x00000000002A06AC "(""
 *   insn=0x00000000002A06AC string=0x00000000002A06B0 ""
 *   insn=0x00000000002A06C8 string=0x00000000002A06CC "i"
 *   insn=0x00000000002A06CC string=0x00000000002A06D0 "?"
 *   insn=0x00000000002A06D4 string=0x00000000002A06D8 "`r@"
 *   insn=0x00000000002A06D8 string=0x00000000002A06DC "h"
 *   insn=0x00000000002A06E4 string=0x00000000002A06E8 "@"
 *   insn=0x00000000002A06E8 string=0x00000000002A06EC ""
 *   insn=0x00000000002A06EC string=0x00000000002A06F0 ""
 *   insn=0x00000000002A06F4 string=0x00000000002A06F8 ""
 *   insn=0x00000000002A06F8 string=0x00000000002A06FC ""
 *   insn=0x00000000002A0708 string=0x00000000002A070C "h"
 *   insn=0x00000000002A0710 string=0x00000000002A0714 "`"
 *   insn=0x00000000002A0724 string=0x00000000002A0728 "\t@"
 *   insn=0x00000000002A0728 string=0x00000000002A072C "!yu"
 *   insn=0x00000000002A0730 string=0x00000000002A0734 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::StaticMonsterControllerComponent::LoadFromProtobufMessage(
        Caver::StaticMonsterControllerComponent *this,
        const Caver::Proto::Component *a2)
{
  _DWORD *result; // x0
  _DWORD *v5; // x20
  int v6; // w8
  int v7; // w8
  int v8; // w8
  __int64 v9; // x21
  _QWORD *v10; // x22
  __int64 v11; // t1

  Caver::MonsterControllerComponent::LoadFromProtobufMessage(this, a2);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::GetMessage(
                       (const Caver::Proto::Component *)((char *)a2 + 8),
                       Caver::Proto::StaticMonsterControllerComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E9690);
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
  v8 = v5[6];
  *((_DWORD *)this + 70) = v8;
  if ( v8 >= 1 )
  {
    v9 = 0;
    v10 = (_QWORD *)((char *)this + 232);
    do
    {
      v11 = *v10;
      v10 += 3;
      (*(void (**)(void))(v11 + 16))();
      ++v9;
      result = v10;
    }
    while ( v9 < *((int *)this + 70) );
  }
  return result;
}


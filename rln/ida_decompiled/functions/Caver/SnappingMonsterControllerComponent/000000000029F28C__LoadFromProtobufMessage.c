/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029F28C
 * Mangled: _ZN5Caver34SnappingMonsterControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::SnappingMonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x00000000001FFBB0  Caver::MonsterControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 49
 *   insn=0x000000000029F29C string=0x000000000029F2A0 "D"
 *   insn=0x000000000029F2A0 string=0x000000000029F2A4 "H""
 *   insn=0x000000000029F2A4 string=0x000000000029F2A8 "YF"
 *   insn=0x000000000029F2C0 string=0x000000000029F2C4 "i"
 *   insn=0x000000000029F2C4 string=0x000000000029F2C8 "?"
 *   insn=0x000000000029F2CC string=0x000000000029F2D0 "`r@"
 *   insn=0x000000000029F2D0 string=0x000000000029F2D4 "h"
 *   insn=0x000000000029F2DC string=0x000000000029F2E0 "@"
 *   insn=0x000000000029F2E0 string=0x000000000029F2E4 ""
 *   insn=0x000000000029F2E4 string=0x000000000029F2E8 ""
 *   insn=0x000000000029F2EC string=0x000000000029F2F0 ""
 *   insn=0x000000000029F2F0 string=0x000000000029F2F4 ""
 *   insn=0x000000000029F2FC string=0x000000000029F300 "i"
 *   insn=0x000000000029F300 string=0x000000000029F304 "?"
 *   insn=0x000000000029F308 string=0x000000000029F30C "`~@"
 *   insn=0x000000000029F30C string=0x000000000029F310 "h"
 *   insn=0x000000000029F318 string=0x000000000029F31C "@"
 *   insn=0x000000000029F31C string=0x000000000029F320 ""
 *   insn=0x000000000029F320 string=0x000000000029F324 ""
 *   insn=0x000000000029F328 string=0x000000000029F32C ""
 *   insn=0x000000000029F32C string=0x000000000029F330 ""
 *   insn=0x000000000029F338 string=0x000000000029F33C "i\nA"
 *   insn=0x000000000029F33C string=0x000000000029F340 "?"
 *   insn=0x000000000029F344 string=0x000000000029F348 "`"
 *   insn=0x000000000029F348 string=0x000000000029F34C "h\n"
 *   insn=0x000000000029F354 string=0x000000000029F358 "@"
 *   insn=0x000000000029F358 string=0x000000000029F35C ""
 *   insn=0x000000000029F35C string=0x000000000029F360 ""
 *   insn=0x000000000029F364 string=0x000000000029F368 ""
 *   insn=0x000000000029F368 string=0x000000000029F36C ""
 *   insn=0x000000000029F374 string=0x000000000029F378 "i"A"
 *   insn=0x000000000029F378 string=0x000000000029F37C "?"
 *   insn=0x000000000029F380 string=0x000000000029F384 "`"
 *   insn=0x000000000029F384 string=0x000000000029F388 "h""
 *   insn=0x000000000029F390 string=0x000000000029F394 "@"
 *   insn=0x000000000029F394 string=0x000000000029F398 ""
 *   insn=0x000000000029F398 string=0x000000000029F39C ""
 *   insn=0x000000000029F3A0 string=0x000000000029F3A4 ""
 *   insn=0x000000000029F3A4 string=0x000000000029F3A8 ""
 *   insn=0x000000000029F3B0 string=0x000000000029F3B4 "i:A"
 *   insn=0x000000000029F3B4 string=0x000000000029F3B8 "?"
 *   insn=0x000000000029F3B8 string=0x000000000029F3BC " "
 *   insn=0x000000000029F3BC string=0x000000000029F3C0 "`"
 *   insn=0x000000000029F3C0 string=0x000000000029F3C4 "h:"
 *   insn=0x000000000029F3CC string=0x000000000029F3D0 "@"
 *   insn=0x000000000029F3D0 string=0x000000000029F3D4 ""
 *   insn=0x000000000029F3D4 string=0x000000000029F3D8 ""
 *   insn=0x000000000029F3DC string=0x000000000029F3EC ""
 *   insn=0x000000000029F3F8 string=0x000000000029F3FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::SnappingMonsterControllerComponent::LoadFromProtobufMessage(
        Caver::SnappingMonsterControllerComponent *this,
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
  int v12; // w8
  int v13; // w8
  int v14; // w8
  int v15; // w8

  Caver::MonsterControllerComponent::LoadFromProtobufMessage(this, a2);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::GetMessage(
                       (const Caver::Proto::Component *)((char *)a2 + 8),
                       Caver::Proto::SnappingMonsterControllerComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E9650);
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
  v10 = v5[5];
  if ( *((_DWORD *)this + 66) != v10 )
  {
    result = (_DWORD *)*((_QWORD *)this + 34);
    *((_DWORD *)this + 66) = v10;
    *((_QWORD *)this + 34) = 0;
    if ( result )
    {
      v11 = result[2] - 1;
      result[2] = v11;
      if ( !v11 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v12 = v5[6];
  if ( *((_DWORD *)this + 72) != v12 )
  {
    result = (_DWORD *)*((_QWORD *)this + 37);
    *((_DWORD *)this + 72) = v12;
    *((_QWORD *)this + 37) = 0;
    if ( result )
    {
      v13 = result[2] - 1;
      result[2] = v13;
      if ( !v13 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v14 = v5[7];
  if ( *((_DWORD *)this + 78) != v14 )
  {
    result = (_DWORD *)*((_QWORD *)this + 40);
    *((_DWORD *)this + 78) = v14;
    *((_QWORD *)this + 40) = 0;
    if ( result )
    {
      v15 = result[2] - 1;
      result[2] = v15;
      if ( !v15 )
        return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  return result;
}


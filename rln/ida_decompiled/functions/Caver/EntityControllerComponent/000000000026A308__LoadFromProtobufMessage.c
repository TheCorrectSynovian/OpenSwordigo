/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026A308
 * Mangled: _ZN5Caver25EntityControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::EntityControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 46
 *   insn=0x000000000026A318 string=0x000000000026A31C "IA"
 *   insn=0x000000000026A31C string=0x00000000001FA840 "0'"
 *   insn=0x000000000026A320 string=0x000000000026A324 ""
 *   insn=0x000000000026A33C string=0x000000000026A340 "iz@"
 *   insn=0x000000000026A340 string=0x000000000026A344 "?"
 *   insn=0x000000000026A348 string=0x000000000026A34C "`B@"
 *   insn=0x000000000026A34C string=0x000000000026A350 "hz"
 *   insn=0x000000000026A358 string=0x000000000026A35C "@"
 *   insn=0x000000000026A35C string=0x000000000026A360 ""
 *   insn=0x000000000026A360 string=0x000000000026A364 ""
 *   insn=0x000000000026A368 string=0x000000000026A36C ""
 *   insn=0x000000000026A36C string=0x000000000026A370 ""
 *   insn=0x000000000026A378 string=0x000000000026A37C "i"
 *   insn=0x000000000026A37C string=0x000000000026A380 "?"
 *   insn=0x000000000026A384 string=0x000000000026A388 "`N@"
 *   insn=0x000000000026A388 string=0x000000000026A38C "h"
 *   insn=0x000000000026A394 string=0x000000000026A398 "@"
 *   insn=0x000000000026A398 string=0x000000000026A39C ""
 *   insn=0x000000000026A39C string=0x000000000026A3A0 ""
 *   insn=0x000000000026A3A4 string=0x000000000026A3A8 ""
 *   insn=0x000000000026A3A8 string=0x000000000026A3AC ""
 *   insn=0x000000000026A3B4 string=0x000000000026A3B8 "i"
 *   insn=0x000000000026A3B8 string=0x000000000026A3BC "?"
 *   insn=0x000000000026A3C0 string=0x000000000026A3C4 "`Z@"
 *   insn=0x000000000026A3C4 string=0x000000000026A3C8 "h"
 *   insn=0x000000000026A3D0 string=0x000000000026A3D4 "@"
 *   insn=0x000000000026A3D4 string=0x000000000026A3D8 ""
 *   insn=0x000000000026A3D8 string=0x000000000026A3DC ""
 *   insn=0x000000000026A3E0 string=0x000000000026A3E4 ""
 *   insn=0x000000000026A3E4 string=0x000000000026A3E8 ""
 *   insn=0x000000000026A3F0 string=0x000000000026A3F4 "i"
 *   insn=0x000000000026A3F4 string=0x000000000026A3F8 "?"
 *   insn=0x000000000026A3FC string=0x000000000026A400 "`f@"
 *   insn=0x000000000026A400 string=0x000000000026A404 "h"
 *   insn=0x000000000026A40C string=0x000000000026A410 "@"
 *   insn=0x000000000026A410 string=0x000000000026A414 ""
 *   insn=0x000000000026A414 string=0x000000000026A418 ""
 *   insn=0x000000000026A41C string=0x000000000026A420 ""
 *   insn=0x000000000026A420 string=0x000000000026A424 ""
 *   insn=0x000000000026A42C string=0x000000000026A430 "hr"
 *   insn=0x000000000026A434 string=0x000000000026A438 "h"
 *   insn=0x000000000026A43C string=0x000000000026A440 "\t\t"
 *   insn=0x000000000026A440 string=0x000000000026A444 ""
 *   insn=0x000000000026A444 string=0x000000000026A448 "?"
 *   insn=0x000000000026A448 string=0x000000000026A44C "1"
 *   insn=0x000000000026A44C string=0x000000000026A450 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::EntityControllerComponent::LoadFromProtobufMessage(
        Caver::EntityControllerComponent *this,
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
  unsigned int v15; // w9
  int v16; // w8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::GetMessage(
                       (const Caver::Proto::Component *)((char *)a2 + 8),
                       Caver::Proto::EntityControllerComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E9528);
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
  v12 = v5[6];
  if ( *((_DWORD *)this + 48) != v12 )
  {
    result = (_DWORD *)*((_QWORD *)this + 25);
    *((_DWORD *)this + 48) = v12;
    *((_QWORD *)this + 25) = 0;
    if ( result )
    {
      v13 = result[2] - 1;
      result[2] = v13;
      if ( !v13 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  *((_QWORD *)this + 28) = *(_QWORD *)(v5 + 7);
  *((_DWORD *)this + 58) = v5[9];
  v14 = v5[10];
  v15 = v14 - 2;
  v16 = v14 - 1;
  if ( v15 >= 3 )
    v16 = 0;
  *((_DWORD *)this + 62) = v16;
  return result;
}


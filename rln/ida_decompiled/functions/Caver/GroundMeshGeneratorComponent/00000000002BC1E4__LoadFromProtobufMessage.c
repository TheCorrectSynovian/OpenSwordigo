/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BC1E4
 * Mangled: _ZN5Caver28GroundMeshGeneratorComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::GroundMeshGeneratorComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 52
 *   insn=0x00000000002BC1F8 string=0x00000000002BC1FC "H!"
 *   insn=0x00000000002BC1F8 string=0x00000000001FA840 "0'"
 *   insn=0x00000000002BC1FC string=0x00000000002BC200 "aD"
 *   insn=0x00000000002BC218 string=0x00000000002BC21C "iz@"
 *   insn=0x00000000002BC21C string=0x00000000002BC220 "?"
 *   insn=0x00000000002BC224 string=0x00000000002BC228 "`B@"
 *   insn=0x00000000002BC228 string=0x00000000002BC22C "hz"
 *   insn=0x00000000002BC234 string=0x00000000002BC238 "@"
 *   insn=0x00000000002BC238 string=0x00000000002BC23C ""
 *   insn=0x00000000002BC23C string=0x00000000002BC240 ""
 *   insn=0x00000000002BC244 string=0x00000000002BC248 ""
 *   insn=0x00000000002BC248 string=0x00000000002BC24C ""
 *   insn=0x00000000002BC254 string=0x00000000002BC258 "i"
 *   insn=0x00000000002BC258 string=0x00000000002BC25C "?"
 *   insn=0x00000000002BC260 string=0x00000000002BC264 "`N@"
 *   insn=0x00000000002BC264 string=0x00000000002BC268 "h"
 *   insn=0x00000000002BC270 string=0x00000000002BC274 "@"
 *   insn=0x00000000002BC274 string=0x00000000002BC278 ""
 *   insn=0x00000000002BC278 string=0x00000000002BC27C ""
 *   insn=0x00000000002BC280 string=0x00000000002BC284 ""
 *   insn=0x00000000002BC284 string=0x00000000002BC288 ""
 *   insn=0x00000000002BC290 string=0x00000000002BC294 "i"
 *   insn=0x00000000002BC294 string=0x00000000002BC298 "?"
 *   insn=0x00000000002BC29C string=0x00000000002BC2A0 "`Z@"
 *   insn=0x00000000002BC2A0 string=0x00000000002BC2A4 "h"
 *   insn=0x00000000002BC2AC string=0x00000000002BC2B0 "@"
 *   insn=0x00000000002BC2B0 string=0x00000000002BC2B4 ""
 *   insn=0x00000000002BC2B4 string=0x00000000002BC2B8 ""
 *   insn=0x00000000002BC2BC string=0x00000000002BC2C0 ""
 *   insn=0x00000000002BC2C0 string=0x00000000002BC2C4 ""
 *   insn=0x00000000002BC2CC string=0x00000000002BC2D0 "i"
 *   insn=0x00000000002BC2D0 string=0x00000000002BC2D4 "?"
 *   insn=0x00000000002BC2D8 string=0x00000000002BC2DC "`f@"
 *   insn=0x00000000002BC2DC string=0x00000000002BC2E0 "h"
 *   insn=0x00000000002BC2E8 string=0x00000000002BC2EC "@"
 *   insn=0x00000000002BC2EC string=0x00000000002BC2F0 ""
 *   insn=0x00000000002BC2F0 string=0x00000000002BC2F4 ""
 *   insn=0x00000000002BC2F8 string=0x00000000002BC2FC ""
 *   insn=0x00000000002BC2FC string=0x00000000002BC300 ""
 *   insn=0x00000000002BC30C string=0x00000000002BC310 "@"
 *   insn=0x00000000002BC310 string=0x00000000002BC314 "H"
 *   insn=0x00000000002BC310 string=0x00000000002BC318 "h"
 *   insn=0x00000000002BC31C string=0x00000000002BC320 "h"
 *   insn=0x00000000002BC324 string=0x00000000002BC328 "h"
 *   insn=0x00000000002BC32C string=0x00000000002BC330 "hn"
 *   insn=0x00000000002BC334 string=0x00000000002BC338 ""
 *   insn=0x00000000002BC338 string=0x00000000002BC33C "H"
 *   insn=0x00000000002BC33C string=0x00000000002BC340 "h"
 *   insn=0x00000000002BC344 string=0x00000000002BC348 "h"
 *   insn=0x00000000002BC358 string=0x00000000002BC35C "i"
 *   insn=0x00000000002BC35C string=0x00000000002BC360 ""
 *   insn=0x00000000002BC364 string=0x00000000002BC368 "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::GroundMeshGeneratorComponent::LoadFromProtobufMessage(
        Caver::GroundMeshGeneratorComponent *this,
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
  unsigned int v14; // w8
  int v15; // w8

  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::GetMessage(
                       (const Caver::Proto::Component *)((char *)a2 + 8),
                       Caver::Proto::GroundMeshGeneratorComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E9380);
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
  v14 = v5[9];
  if ( v14 <= 1 )
    *((_DWORD *)this + 52) = v14;
  if ( (v5[14] & 0x80) != 0 )
    *((_DWORD *)this + 53) = v5[10];
  *((_QWORD *)this + 27) = *(_QWORD *)(v5 + 7);
  v15 = v5[14];
  if ( (v15 & 0x100) != 0 )
  {
    *((_DWORD *)this + 56) = v5[11];
    if ( (v15 & 0x200) == 0 )
    {
LABEL_23:
      if ( (v15 & 0x400) == 0 )
        return result;
      goto LABEL_24;
    }
  }
  else if ( (v15 & 0x200) == 0 )
  {
    goto LABEL_23;
  }
  *((_DWORD *)this + 57) = v5[12];
  if ( (v15 & 0x400) == 0 )
    return result;
LABEL_24:
  *((_DWORD *)this + 57) = v5[13];
  return result;
}


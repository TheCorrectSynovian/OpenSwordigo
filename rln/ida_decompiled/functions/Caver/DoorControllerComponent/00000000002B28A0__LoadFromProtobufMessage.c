/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B28A0
 * Mangled: _ZN5Caver23DoorControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::DoorControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 40
 *   insn=0x00000000002B28B4 string=0x00000000001FA840 "0'"
 *   insn=0x00000000002B28B8 string=0x00000000002B28BC "E@"
 *   insn=0x00000000002B28C8 string=0x00000000002B28CC "11"
 *   insn=0x00000000002B28D4 string=0x00000000002B28D8 "iz@"
 *   insn=0x00000000002B28D8 string=0x00000000002B28DC "?"
 *   insn=0x00000000002B28E0 string=0x00000000002B28E4 "`B@"
 *   insn=0x00000000002B28E4 string=0x00000000002B28E8 "hz"
 *   insn=0x00000000002B28F0 string=0x00000000002B28F4 "@"
 *   insn=0x00000000002B28F4 string=0x00000000002B28F8 ""
 *   insn=0x00000000002B28F8 string=0x00000000002B28FC ""
 *   insn=0x00000000002B2900 string=0x00000000002B2904 ""
 *   insn=0x00000000002B2904 string=0x00000000002B2908 ""
 *   insn=0x00000000002B2910 string=0x00000000002B2914 "i"
 *   insn=0x00000000002B2914 string=0x00000000002B2918 "?"
 *   insn=0x00000000002B291C string=0x00000000002B2920 "`N@"
 *   insn=0x00000000002B2920 string=0x00000000002B2924 "h"
 *   insn=0x00000000002B292C string=0x00000000002B2930 "@"
 *   insn=0x00000000002B2930 string=0x00000000002B2934 ""
 *   insn=0x00000000002B2934 string=0x00000000002B2938 ""
 *   insn=0x00000000002B293C string=0x00000000002B2940 ""
 *   insn=0x00000000002B2940 string=0x00000000002B2944 ""
 *   insn=0x00000000002B294C string=0x00000000002B2950 "i"
 *   insn=0x00000000002B2950 string=0x00000000002B2954 "?"
 *   insn=0x00000000002B2958 string=0x00000000002B295C "`Z@"
 *   insn=0x00000000002B295C string=0x00000000002B2960 "h"
 *   insn=0x00000000002B2968 string=0x00000000002B296C "@"
 *   insn=0x00000000002B296C string=0x00000000002B2970 ""
 *   insn=0x00000000002B2970 string=0x00000000002B2974 ""
 *   insn=0x00000000002B2978 string=0x00000000002B297C ""
 *   insn=0x00000000002B297C string=0x00000000002B2980 ""
 *   insn=0x00000000002B2988 string=0x00000000002B298C "i"
 *   insn=0x00000000002B298C string=0x00000000002B2990 "?"
 *   insn=0x00000000002B2994 string=0x00000000002B2998 "`f@"
 *   insn=0x00000000002B2998 string=0x00000000002B299C "h"
 *   insn=0x00000000002B29A4 string=0x00000000002B29A8 "@"
 *   insn=0x00000000002B29A8 string=0x00000000002B29AC ""
 *   insn=0x00000000002B29AC string=0x00000000002B29B0 ""
 *   insn=0x00000000002B29B4 string=0x00000000002B29B8 ""
 *   insn=0x00000000002B29B8 string=0x00000000002B29BC ""
 *   insn=0x00000000002B29C4 string=0x00000000002B29C8 "hB"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::DoorControllerComponent::LoadFromProtobufMessage(
        Caver::DoorControllerComponent *this,
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

  Caver::Component::LoadFromProtobufMessage(this, a2);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::GetMessage(
                       (const Caver::Proto::Component *)((char *)a2 + 8),
                       Caver::Proto::DoorControllerComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E94D8);
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
  *((_BYTE *)this + 208) = *((_BYTE *)v5 + 28);
  return result;
}


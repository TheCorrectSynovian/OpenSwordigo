/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002568EC
 * Mangled: _ZN5Caver27CharAnimControllerComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::CharAnimControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F4BC0  Caver::AnimationControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *
 * Referenced strings: 58
 *   insn=0x0000000000256900 string=0x0000000000256904 "h$"
 *   insn=0x0000000000256900 string=0x00000000001F4BC0 "P'"
 *   insn=0x0000000000256904 string=0x0000000000256908 "5E"
 *   insn=0x0000000000256920 string=0x0000000000256924 "i"
 *   insn=0x0000000000256924 string=0x0000000000256928 "?"
 *   insn=0x000000000025692C string=0x0000000000256930 "`f@"
 *   insn=0x0000000000256930 string=0x0000000000256934 "h"
 *   insn=0x000000000025693C string=0x0000000000256940 "@"
 *   insn=0x0000000000256940 string=0x0000000000256944 ""
 *   insn=0x0000000000256944 string=0x0000000000256948 ""
 *   insn=0x000000000025694C string=0x0000000000256950 ""
 *   insn=0x0000000000256950 string=0x0000000000256954 ""
 *   insn=0x000000000025695C string=0x0000000000256960 "i"
 *   insn=0x0000000000256960 string=0x0000000000256964 "?"
 *   insn=0x0000000000256968 string=0x000000000025696C "`r@"
 *   insn=0x000000000025696C string=0x0000000000256970 "h"
 *   insn=0x0000000000256978 string=0x000000000025697C "@"
 *   insn=0x000000000025697C string=0x0000000000256980 ""
 *   insn=0x0000000000256980 string=0x0000000000256984 ""
 *   insn=0x0000000000256988 string=0x000000000025698C ""
 *   insn=0x000000000025698C string=0x0000000000256990 ""
 *   insn=0x0000000000256998 string=0x000000000025699C "i"
 *   insn=0x000000000025699C string=0x00000000002569A0 "?"
 *   insn=0x00000000002569A4 string=0x00000000002569A8 "`~@"
 *   insn=0x00000000002569A8 string=0x00000000002569AC "h"
 *   insn=0x00000000002569B4 string=0x00000000002569B8 "@"
 *   insn=0x00000000002569B8 string=0x00000000002569BC ""
 *   insn=0x00000000002569BC string=0x00000000002569C0 ""
 *   insn=0x00000000002569C4 string=0x00000000002569C8 ""
 *   insn=0x00000000002569C8 string=0x00000000002569CC ""
 *   insn=0x00000000002569D4 string=0x00000000002569D8 "i\nA"
 *   insn=0x00000000002569D8 string=0x00000000002569DC "?"
 *   insn=0x00000000002569E0 string=0x00000000002569E4 "`"
 *   insn=0x00000000002569E4 string=0x00000000002569E8 "h\n"
 *   insn=0x00000000002569F0 string=0x00000000002569F4 "@"
 *   insn=0x00000000002569F4 string=0x00000000002569F8 ""
 *   insn=0x00000000002569F8 string=0x00000000002569FC ""
 *   insn=0x0000000000256A00 string=0x0000000000256A04 ""
 *   insn=0x0000000000256A04 string=0x0000000000256A08 ""
 *   insn=0x0000000000256A10 string=0x0000000000256A14 "i"A"
 *   insn=0x0000000000256A14 string=0x0000000000256A18 "?"
 *   insn=0x0000000000256A1C string=0x0000000000256A20 "`"
 *   insn=0x0000000000256A20 string=0x0000000000256A24 "h""
 *   insn=0x0000000000256A2C string=0x0000000000256A30 "@"
 *   insn=0x0000000000256A30 string=0x0000000000256A34 ""
 *   insn=0x0000000000256A34 string=0x0000000000256A38 ""
 *   insn=0x0000000000256A3C string=0x0000000000256A40 ""
 *   insn=0x0000000000256A40 string=0x0000000000256A44 ""
 *   insn=0x0000000000256A4C string=0x0000000000256A50 "i:A"
 *   insn=0x0000000000256A50 string=0x0000000000256A54 "?"
 *   insn=0x0000000000256A54 string=0x0000000000256A58 " "
 *   insn=0x0000000000256A58 string=0x0000000000256A5C "`"
 *   insn=0x0000000000256A5C string=0x0000000000256A60 "h:"
 *   insn=0x0000000000256A68 string=0x0000000000256A6C "@"
 *   insn=0x0000000000256A6C string=0x0000000000256A70 ""
 *   insn=0x0000000000256A70 string=0x0000000000256A74 ""
 *   insn=0x0000000000256A78 string=0x0000000000256A88 ""
 *   insn=0x0000000000256A94 string=0x0000000000256A98 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::CharAnimControllerComponent::LoadFromProtobufMessage(
        Caver::CharAnimControllerComponent *this,
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
  int v16; // w8
  int v17; // w8

  Caver::AnimationControllerComponent::LoadFromProtobufMessage(this, a2);
  result = (_DWORD *)google::protobuf::internal::ExtensionSet::GetMessage(
                       (const Caver::Proto::Component *)((char *)a2 + 8),
                       Caver::Proto::CharAnimControllerComponent::extension,
                       (const google::protobuf::MessageLite *)qword_6E9478);
  v5 = result;
  v6 = result[3];
  if ( *((_DWORD *)this + 48) != v6 )
  {
    result = (_DWORD *)*((_QWORD *)this + 25);
    *((_DWORD *)this + 48) = v6;
    *((_QWORD *)this + 25) = 0;
    if ( result )
    {
      v7 = result[2] - 1;
      result[2] = v7;
      if ( !v7 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v8 = v5[4];
  if ( *((_DWORD *)this + 54) != v8 )
  {
    result = (_DWORD *)*((_QWORD *)this + 28);
    *((_DWORD *)this + 54) = v8;
    *((_QWORD *)this + 28) = 0;
    if ( result )
    {
      v9 = result[2] - 1;
      result[2] = v9;
      if ( !v9 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v10 = v5[5];
  if ( *((_DWORD *)this + 60) != v10 )
  {
    result = (_DWORD *)*((_QWORD *)this + 31);
    *((_DWORD *)this + 60) = v10;
    *((_QWORD *)this + 31) = 0;
    if ( result )
    {
      v11 = result[2] - 1;
      result[2] = v11;
      if ( !v11 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v12 = v5[6];
  if ( *((_DWORD *)this + 66) != v12 )
  {
    result = (_DWORD *)*((_QWORD *)this + 34);
    *((_DWORD *)this + 66) = v12;
    *((_QWORD *)this + 34) = 0;
    if ( result )
    {
      v13 = result[2] - 1;
      result[2] = v13;
      if ( !v13 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v14 = v5[7];
  if ( *((_DWORD *)this + 72) != v14 )
  {
    result = (_DWORD *)*((_QWORD *)this + 37);
    *((_DWORD *)this + 72) = v14;
    *((_QWORD *)this + 37) = 0;
    if ( result )
    {
      v15 = result[2] - 1;
      result[2] = v15;
      if ( !v15 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  v16 = v5[8];
  if ( *((_DWORD *)this + 78) != v16 )
  {
    result = (_DWORD *)*((_QWORD *)this + 40);
    *((_DWORD *)this + 78) = v16;
    *((_QWORD *)this + 40) = 0;
    if ( result )
    {
      v17 = result[2] - 1;
      result[2] = v17;
      if ( !v17 )
        return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
  }
  return result;
}


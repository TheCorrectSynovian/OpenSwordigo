/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E1F44
 * Mangled: _ZNK6google8protobuf11MessageLite29SerializePartialToCodedStreamEPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::MessageLite::SerializePartialToCodedStream(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000002034D0  google::protobuf::MessageLite::SerializePartialToCodedStream(google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000004E2050  sub_4E2050
 *
 * Referenced strings: 13
 *   insn=0x00000000004E1F60 string=0x00000000004E1F64 "%@"
 *   insn=0x00000000004E1F74 string=0x00000000004E1F78 ""
 *   insn=0x00000000004E1F7C string=0x00000000004E1F80 "w~@"
 *   insn=0x00000000004E1F8C string=0x00000000004E1F90 "6"
 *   insn=0x00000000004E1F9C string=0x00000000004E1FA0 "-@"
 *   insn=0x00000000004E1FAC string=0x00000000004E1FB0 "@"
 *   insn=0x00000000004E1FB8 string=0x00000000004E1FBC "%@"
 *   insn=0x00000000004E1FD0 string=0x00000000004E2034 ""
 *   insn=0x00000000004E1FE4 string=0x00000000004E1FE8 ")@"
 *   insn=0x00000000004E1FF0 string=0x00000000004E1FF4 "h"
 *   insn=0x00000000004E2000 string=0x00000000004E2004 "("
 *   insn=0x00000000004E2010 string=0x00000000004E2014 " "
 *   insn=0x00000000004E201C string=0x00000000004E2020 "%@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::MessageLite::SerializePartialToCodedStream(
        google::protobuf::MessageLite *this,
        google::protobuf::io::CodedOutputStream *a2)
{
  int v4; // w0
  int v5; // w22
  unsigned int v6; // w19
  int v7; // w8
  __int64 v8; // x22
  __int64 v9; // x0
  unsigned int v10; // w21
  int v11; // w23
  __int64 v13; // x1

  v4 = (*(__int64 (__fastcall **)(google::protobuf::MessageLite *))(*(_QWORD *)this + 72LL))(this);
  v5 = *((_DWORD *)a2 + 4);
  v6 = v4;
  v7 = v5 - v4;
  if ( v5 < v4 )
  {
LABEL_6:
    v11 = *((_DWORD *)a2 + 5);
    (*(void (__fastcall **)(google::protobuf::MessageLite *, google::protobuf::io::CodedOutputStream *))(*(_QWORD *)this + 80LL))(
      this,
      a2);
    if ( *((_BYTE *)a2 + 24) )
      return 0;
    v10 = *((_DWORD *)a2 + 5) - *((_DWORD *)a2 + 4) + v5 - v11;
    if ( v10 != v6 )
      goto LABEL_9;
    return 1;
  }
  v8 = *((_QWORD *)a2 + 1);
  *((_DWORD *)a2 + 4) = v7;
  *((_QWORD *)a2 + 1) = v8 + v4;
  if ( !v8 )
  {
    v5 = v7;
    goto LABEL_6;
  }
  v9 = (*(__int64 (__fastcall **)(google::protobuf::MessageLite *, __int64))(*(_QWORD *)this + 88LL))(this, v8);
  v10 = v9 - v8;
  if ( v9 - v8 != v6 )
  {
LABEL_9:
    v13 = (*(unsigned int (__fastcall **)(google::protobuf::MessageLite *))(*(_QWORD *)this + 72LL))(this);
    sub_4E2050(v6, v13, v10);
  }
  return 1;
}


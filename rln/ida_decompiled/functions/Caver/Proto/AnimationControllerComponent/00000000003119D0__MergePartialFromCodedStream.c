/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003119D0
 * Mangled: _ZN5Caver5Proto28AnimationControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::AnimationControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 72
 *   insn=0x00000000003119E0 string=0x00000000003119E4 "U"
 *   insn=0x00000000003119F4 string=0x00000000003119F8 "h"
 *   insn=0x00000000003119FC string=0x0000000000311A00 """
 *   insn=0x0000000000311A00 string=0x0000000000311A04 "\t"
 *   insn=0x0000000000311A08 string=0x0000000000311A0C "!"
 *   insn=0x0000000000311A0C string=0x0000000000311A10 ""
 *   insn=0x0000000000311A10 string=0x0000000000311A14 "a""
 *   insn=0x0000000000311A14 string=0x0000000000311A18 "h"
 *   insn=0x0000000000311A1C string=0x0000000000311A20 "r"
 *   insn=0x0000000000311A1C string=0x0000000000311A38 "(|"
 *   insn=0x0000000000311A28 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000311A2C string=0x0000000000311A30 "a""
 *   insn=0x0000000000311A40 string=0x0000000000311AB4 "("
 *   insn=0x0000000000311A48 string=0x0000000000311A84 "("
 *   insn=0x0000000000311A50 string=0x0000000000311A54 "("
 *   insn=0x0000000000311A50 string=0x0000000000311AE4 "("
 *   insn=0x0000000000311A58 string=0x0000000000311A5C "j"
 *   insn=0x0000000000311A5C string=0x0000000000311A60 "_"
 *   insn=0x0000000000311A64 string=0x0000000000311A68 "I"
 *   insn=0x0000000000311A68 string=0x0000000000311A6C "i\t"
 *   insn=0x0000000000311A6C string=0x0000000000311A70 ")"
 *   insn=0x0000000000311A70 string=0x0000000000311A74 "J"
 *   insn=0x0000000000311A78 string=0x0000000000311A7C "j"
 *   insn=0x0000000000311A7C string=0x0000000000311A80 "L"
 *   insn=0x0000000000311A88 string=0x0000000000311A8C "i"
 *   insn=0x0000000000311A8C string=0x0000000000311A90 "?"
 *   insn=0x0000000000311A94 string=0x0000000000311A98 "*"
 *   insn=0x0000000000311A9C string=0x0000000000311AA0 "J"
 *   insn=0x0000000000311AA0 string=0x0000000000311AA4 ")"
 *   insn=0x0000000000311AA8 string=0x0000000000311AAC "i"
 *   insn=0x0000000000311AAC string=0x0000000000311AB0 "-"
 *   insn=0x0000000000311AB8 string=0x0000000000311ABC "i"
 *   insn=0x0000000000311ABC string=0x0000000000311AC0 "?"
 *   insn=0x0000000000311AC4 string=0x0000000000311AC8 "*"
 *   insn=0x0000000000311ACC string=0x0000000000311AD0 "J"
 *   insn=0x0000000000311AD0 string=0x0000000000311AD4 ")"
 *   insn=0x0000000000311AD8 string=0x0000000000311ADC "i"
 *   insn=0x0000000000311AF0 string=0x0000000000311AF4 "w"
 *   insn=0x0000000000311AF4 string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000311AF8 string=0x0000000000311AFC "="
 *   insn=0x0000000000311B04 string=0x0000000000311B08 "R"
 *   insn=0x0000000000311B08 string=0x0000000000311B0C " "
 *   insn=0x0000000000311B08 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000311B10 string=0x0000000000311B14 "i"
 *   insn=0x0000000000311B1C string=0x0000000000311B20 "?"
 *   insn=0x0000000000311B20 string=0x0000000000311B24 "j"
 *   insn=0x0000000000311B28 string=0x0000000000311B2C "b"
 *   insn=0x0000000000311B2C string=0x0000000000311B30 "*"
 *   insn=0x0000000000311B30 string=0x0000000000311B34 "_A"
 *   insn=0x0000000000311B38 string=0x0000000000311B3C ")"
 *   insn=0x0000000000311B3C string=0x0000000000311B40 "i"
 *   insn=0x0000000000311B40 string=0x0000000000311B44 "?"
 *   insn=0x0000000000311B50 string=0x0000000000311B54 "?"
 *   insn=0x0000000000311B5C string=0x0000000000311B60 "i"
 *   insn=0x0000000000311B68 string=0x0000000000311B6C "?"
 *   insn=0x0000000000311B6C string=0x0000000000311B70 "j"
 *   insn=0x0000000000311B78 string=0x0000000000311B7C "*"
 *   insn=0x0000000000311B7C string=0x0000000000311B80 "_a"
 *   insn=0x0000000000311B84 string=0x0000000000311B88 "*"
 *   insn=0x0000000000311B88 string=0x0000000000311B8C "j"
 *   insn=0x0000000000311B8C string=0x0000000000311B90 "_"
 *   insn=0x0000000000311B9C string=0x0000000000311BA0 ","
 *   insn=0x0000000000311BA0 string=0x0000000000311BA4 "`"
 *   insn=0x0000000000311BA8 string=0x0000000000311BAC "j"
 *   insn=0x0000000000311BB0 string=0x0000000000311BB4 "?"
 *   insn=0x0000000000311BBC string=0x0000000000311BC0 "i"
 *   insn=0x0000000000311BC0 string=0x0000000000311BC4 "_"
 *   insn=0x0000000000311BC8 string=0x0000000000311BCC "a"
 *   insn=0x0000000000311BCC string=0x0000000000311BD0 "h.@"
 *   insn=0x0000000000311BD0 string=0x0000000000311BD4 "("
 *   insn=0x0000000000311BDC string=0x0000000000311BE0 "`"
 *   insn=0x0000000000311C18 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::AnimationControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::AnimationControllerComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  unsigned int v8; // w8
  int v9; // w8
  unsigned __int64 v10; // x8
  char *v11; // x10
  unsigned int v12; // w9
  unsigned __int8 *v13; // x10
  unsigned __int8 *v14; // x9
  unsigned int v15; // w10
  _BYTE *v16; // x9
  char *v17; // x9
  unsigned int v18; // w10
  _BYTE *v19; // x9
  int v20; // w11
  int v21; // w11
  int v22; // w11
  __int64 result; // x0
  unsigned int v24; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v25; // [xsp+8h] [xbp-28h]

  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v5 >= *((_QWORD *)a2 + 2) || *v5 < 0 )
        {
          TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
          v6 = TagFallback;
          *((_DWORD *)a2 + 8) = TagFallback;
          if ( !TagFallback )
            return 1;
        }
        else
        {
          v6 = (unsigned __int8)*v5;
          *((_DWORD *)a2 + 8) = v6;
          *((_QWORD *)a2 + 1) = v5 + 1;
          if ( !(_DWORD)v6 )
            return 1;
        }
        v8 = (unsigned int)v6 >> 3;
        if ( (unsigned int)v6 >> 3 != 1 )
          break;
        v9 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_23;
        v17 = (char *)*((_QWORD *)a2 + 1);
        v10 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v17 >= v10 || *v17 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v24) & 1) == 0 )
            return 0;
          v18 = v24;
          v19 = (_BYTE *)*((_QWORD *)a2 + 1);
          v10 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v18 = (unsigned __int8)*v17;
          v19 = v17 + 1;
          v24 = v18;
          *((_QWORD *)a2 + 1) = v19;
        }
        v20 = *((_DWORD *)this + 6);
        *((_DWORD *)this + 3) = v18;
        *((_DWORD *)this + 6) = v20 | 1;
        if ( (unsigned __int64)v19 < v10 && *v19 == 16 )
        {
          v14 = v19 + 1;
          *((_QWORD *)a2 + 1) = v14;
          if ( (unsigned __int64)v14 >= v10 )
            goto LABEL_31;
          goto LABEL_16;
        }
      }
      if ( v8 != 2 )
        break;
      v9 = v6 & 7;
      if ( (v6 & 7) != 0 )
        goto LABEL_23;
      v14 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
      v10 = *((_QWORD *)a2 + 2);
      if ( (unsigned __int64)v14 >= v10 )
      {
LABEL_31:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v24) & 1) == 0 )
          return 0;
        v15 = v24;
        v16 = (_BYTE *)*((_QWORD *)a2 + 1);
        v10 = *((_QWORD *)a2 + 2);
        goto LABEL_33;
      }
LABEL_16:
      if ( (char)*v14 < 0 )
        goto LABEL_31;
      v15 = *v14;
      v16 = v14 + 1;
      v24 = v15;
      *((_QWORD *)a2 + 1) = v16;
LABEL_33:
      v21 = *((_DWORD *)this + 6);
      *((_DWORD *)this + 4) = v15;
      *((_DWORD *)this + 6) = v21 | 2;
      if ( (unsigned __int64)v16 < v10 && *v16 == 24 )
      {
        v11 = v16 + 1;
        *((_QWORD *)a2 + 1) = v16 + 1;
        if ( (unsigned __int64)(v16 + 1) >= v10 )
          goto LABEL_36;
LABEL_12:
        if ( (*v11 & 0x80000000) == 0 )
        {
          v12 = (unsigned __int8)*v11;
          v13 = (unsigned __int8 *)(v11 + 1);
          v24 = v12;
          *((_QWORD *)a2 + 1) = v13;
          goto LABEL_38;
        }
LABEL_36:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v24) & 1) == 0 )
          return 0;
        v12 = v24;
        v13 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
        v10 = *((_QWORD *)a2 + 2);
LABEL_38:
        v22 = *((_DWORD *)this + 6);
        *((_BYTE *)this + 20) = v12 != 0;
        *((_DWORD *)this + 6) = v22 | 4;
        if ( v13 == (unsigned __int8 *)v10 && *((_DWORD *)a2 + 11) )
        {
          result = 1;
          *((_DWORD *)a2 + 8) = 0;
          *((_BYTE *)a2 + 36) = 1;
          return result;
        }
      }
    }
    if ( v8 == 3 )
    {
      v9 = v6 & 7;
      if ( (v6 & 7) == 0 )
      {
        v11 = (char *)*((_QWORD *)a2 + 1);
        v10 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v11 >= v10 )
          goto LABEL_36;
        goto LABEL_12;
      }
    }
    else
    {
      v9 = v6 & 7;
    }
LABEL_23:
    if ( v9 == 4 )
      return 1;
  }
  while ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v6, a3)
         & 1) != 0 );
  return 0;
}


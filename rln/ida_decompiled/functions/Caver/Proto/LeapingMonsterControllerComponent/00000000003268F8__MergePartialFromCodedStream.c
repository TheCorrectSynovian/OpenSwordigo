/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003268F8
 * Mangled: _ZN5Caver5Proto33LeapingMonsterControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::LeapingMonsterControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 52
 *   insn=0x0000000000326908 string=0x000000000032690C "U"
 *   insn=0x000000000032691C string=0x0000000000326920 "h"
 *   insn=0x0000000000326924 string=0x0000000000326928 """
 *   insn=0x0000000000326928 string=0x000000000032692C "\t"
 *   insn=0x0000000000326930 string=0x0000000000326934 "!"
 *   insn=0x0000000000326934 string=0x0000000000326938 ""
 *   insn=0x0000000000326938 string=0x000000000032693C "a""
 *   insn=0x000000000032693C string=0x0000000000326940 "h"
 *   insn=0x0000000000326944 string=0x0000000000326948 "O"
 *   insn=0x0000000000326944 string=0x0000000000326960 "(|"
 *   insn=0x000000000032694C string=0x0000000000326950 "<D"
 *   insn=0x0000000000326950 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000326954 string=0x0000000000326958 "a""
 *   insn=0x0000000000326958 string=0x000000000032695C "A\t"
 *   insn=0x0000000000326968 string=0x00000000003269A4 "("
 *   insn=0x000000000032696C string=0x0000000000326970 "!"
 *   insn=0x0000000000326970 string=0x0000000000326974 "("
 *   insn=0x0000000000326970 string=0x00000000003269D4 "("
 *   insn=0x0000000000326978 string=0x000000000032697C "i"
 *   insn=0x000000000032697C string=0x0000000000326980 "?"
 *   insn=0x0000000000326984 string=0x0000000000326988 "*"
 *   insn=0x000000000032698C string=0x0000000000326990 "J"
 *   insn=0x0000000000326990 string=0x0000000000326994 ")"
 *   insn=0x0000000000326998 string=0x000000000032699C "i"
 *   insn=0x000000000032699C string=0x00000000003269A0 "-"
 *   insn=0x00000000003269A8 string=0x00000000003269AC "i"
 *   insn=0x00000000003269AC string=0x00000000003269B0 "?"
 *   insn=0x00000000003269B4 string=0x00000000003269B8 "*"
 *   insn=0x00000000003269BC string=0x00000000003269C0 "J"
 *   insn=0x00000000003269C0 string=0x00000000003269C4 ")"
 *   insn=0x00000000003269C8 string=0x00000000003269CC "i"
 *   insn=0x00000000003269D8 string=0x00000000003269DC "@"
 *   insn=0x00000000003269E4 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000003269E8 string=0x00000000003269EC "("
 *   insn=0x00000000003269F8 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000326A00 string=0x0000000000326A04 "i"
 *   insn=0x0000000000326A0C string=0x0000000000326A10 "?"
 *   insn=0x0000000000326A10 string=0x0000000000326A14 "j"
 *   insn=0x0000000000326A18 string=0x0000000000326A1C """
 *   insn=0x0000000000326A1C string=0x0000000000326A20 "*"
 *   insn=0x0000000000326A20 string=0x0000000000326A24 "_A"
 *   insn=0x0000000000326A28 string=0x0000000000326A2C ")"
 *   insn=0x0000000000326A2C string=0x0000000000326A30 "i"
 *   insn=0x0000000000326A30 string=0x0000000000326A34 "?"
 *   insn=0x0000000000326A44 string=0x0000000000326A48 " "
 *   insn=0x0000000000326A4C string=0x0000000000326A50 "i"
 *   insn=0x0000000000326A58 string=0x0000000000326A5C "?"
 *   insn=0x0000000000326A5C string=0x0000000000326A60 "j"
 *   insn=0x0000000000326A68 string=0x0000000000326A6C "h.@"
 *   insn=0x0000000000326A78 string=0x0000000000326A7C "`"
 *   insn=0x0000000000326A9C string=0x0000000000326AB4 ">"
 *   insn=0x0000000000326AB4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::LeapingMonsterControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::LeapingMonsterControllerComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  unsigned __int64 v9; // x8
  char *v10; // x9
  unsigned int v11; // w10
  unsigned __int8 *v12; // x9
  char *v13; // x9
  unsigned int v14; // w10
  _BYTE *v15; // x9
  int v16; // w11
  int v17; // w11
  __int64 result; // x0
  unsigned int v19; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v20; // [xsp+8h] [xbp-28h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  do
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
      if ( (unsigned int)v6 >> 3 != 1 )
        break;
      v8 = v6 & 7;
      if ( (v6 & 7) != 0 )
        goto LABEL_18;
      v13 = (char *)*((_QWORD *)a2 + 1);
      v9 = *((_QWORD *)a2 + 2);
      if ( (unsigned __int64)v13 >= v9 || *v13 < 0 )
      {
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v19) & 1) == 0 )
          return 0;
        v14 = v19;
        v15 = (_BYTE *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
      }
      else
      {
        v14 = (unsigned __int8)*v13;
        v15 = v13 + 1;
        v19 = v14;
        *((_QWORD *)a2 + 1) = v15;
      }
      v16 = *((_DWORD *)this + 5);
      *((_DWORD *)this + 3) = v14;
      *((_DWORD *)this + 5) = v16 | 1;
      if ( (unsigned __int64)v15 < v9 && *v15 == 16 )
      {
        v10 = v15 + 1;
        *((_QWORD *)a2 + 1) = v10;
        if ( (unsigned __int64)v10 >= v9 )
          goto LABEL_26;
LABEL_11:
        if ( (*v10 & 0x80000000) == 0 )
        {
          v11 = (unsigned __int8)*v10;
          v12 = (unsigned __int8 *)(v10 + 1);
          v19 = v11;
          *((_QWORD *)a2 + 1) = v12;
          goto LABEL_28;
        }
LABEL_26:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v19) & 1) == 0 )
          return 0;
        v11 = v19;
        v12 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
LABEL_28:
        v17 = *((_DWORD *)this + 5);
        *((_DWORD *)this + 4) = v11;
        *((_DWORD *)this + 5) = v17 | 2;
        if ( v12 == (unsigned __int8 *)v9 && *((_DWORD *)a2 + 11) )
        {
          result = 1;
          *((_DWORD *)a2 + 8) = 0;
          *((_BYTE *)a2 + 36) = 1;
          return result;
        }
      }
    }
    if ( (unsigned int)v6 >> 3 == 2 )
    {
      v8 = v6 & 7;
      if ( (v6 & 7) == 0 )
      {
        v10 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v10 >= v9 )
          goto LABEL_26;
        goto LABEL_11;
      }
    }
    else
    {
      v8 = v6 & 7;
    }
LABEL_18:
    if ( v8 == 4 )
      return 1;
  }
  while ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v6, a3)
         & 1) != 0 );
  return 0;
}


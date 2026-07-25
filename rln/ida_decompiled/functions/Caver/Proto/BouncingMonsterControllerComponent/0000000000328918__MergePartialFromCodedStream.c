/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000328918
 * Mangled: _ZN5Caver5Proto34BouncingMonsterControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::BouncingMonsterControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 80
 *   insn=0x0000000000328928 string=0x000000000032892C "U"
 *   insn=0x0000000000328934 string=0x000000000058B870 "4"
 *   insn=0x0000000000328944 string=0x0000000000328948 "h"
 *   insn=0x000000000032894C string=0x0000000000328950 """
 *   insn=0x0000000000328950 string=0x0000000000328954 "\t"
 *   insn=0x0000000000328958 string=0x000000000032895C "!"
 *   insn=0x000000000032895C string=0x0000000000328960 ""
 *   insn=0x0000000000328960 string=0x0000000000328964 "a""
 *   insn=0x0000000000328964 string=0x0000000000328968 "h"
 *   insn=0x000000000032896C string=0x0000000000328970 "{"
 *   insn=0x000000000032896C string=0x0000000000328988 "(|"
 *   insn=0x0000000000328974 string=0x0000000000328978 "2<"
 *   insn=0x0000000000328978 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000032897C string=0x0000000000328980 "a""
 *   insn=0x0000000000328988 string=0x000000000032898C ""
 *   insn=0x0000000000328994 string=0x0000000000328A24 "("
 *   insn=0x0000000000328998 string=0x000000000032899C ""
 *   insn=0x00000000003289A0 string=0x00000000003289A4 "("
 *   insn=0x00000000003289A0 string=0x00000000003289D4 "("
 *   insn=0x00000000003289A0 string=0x00000000003289E4 "("
 *   insn=0x00000000003289A0 string=0x00000000003289F4 "("
 *   insn=0x00000000003289A8 string=0x00000000003289AC "i"
 *   insn=0x00000000003289AC string=0x00000000003289B0 "?"
 *   insn=0x00000000003289B0 string=0x00000000003289B4 "b"
 *   insn=0x00000000003289B4 string=0x00000000003289B8 "*"
 *   insn=0x00000000003289B8 string=0x00000000003289BC "*"
 *   insn=0x00000000003289BC string=0x00000000003289C0 "J"
 *   insn=0x00000000003289C0 string=0x00000000003289C4 ")"
 *   insn=0x00000000003289C8 string=0x00000000003289CC "i"
 *   insn=0x00000000003289CC string=0x00000000003289D0 """
 *   insn=0x00000000003289D8 string=0x00000000003289DC "a"
 *   insn=0x00000000003289DC string=0x00000000003289E0 "<"
 *   insn=0x00000000003289EC string=0x00000000003289F0 "I"
 *   insn=0x00000000003289F8 string=0x00000000003289FC "i"
 *   insn=0x00000000003289FC string=0x0000000000328A00 "?"
 *   insn=0x0000000000328A00 string=0x0000000000328A04 "B"
 *   insn=0x0000000000328A04 string=0x0000000000328A08 "*"
 *   insn=0x0000000000328A08 string=0x0000000000328A0C "\n"
 *   insn=0x0000000000328A0C string=0x0000000000328A10 "J"
 *   insn=0x0000000000328A10 string=0x0000000000328A14 ")"
 *   insn=0x0000000000328A18 string=0x0000000000328A1C "i"
 *   insn=0x0000000000328A1C string=0x0000000000328A20 "!"
 *   insn=0x0000000000328A34 string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000328A38 string=0x0000000000328A3C "J"
 *   insn=0x0000000000328A48 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000328A50 string=0x0000000000328A54 "i"
 *   insn=0x0000000000328A5C string=0x0000000000328A60 "?"
 *   insn=0x0000000000328A60 string=0x0000000000328A64 "j"
 *   insn=0x0000000000328A6C string=0x0000000000328A70 "*"
 *   insn=0x0000000000328A70 string=0x0000000000328A74 "_A"
 *   insn=0x0000000000328A78 string=0x0000000000328A7C ")"
 *   insn=0x0000000000328A7C string=0x0000000000328A80 "i"
 *   insn=0x0000000000328A80 string=0x0000000000328A84 "?"
 *   insn=0x0000000000328A90 string=0x0000000000328A94 "oA"
 *   insn=0x0000000000328A94 string=0x0000000000328A98 "`"
 *   insn=0x0000000000328A9C string=0x0000000000328AA0 "i"
 *   insn=0x0000000000328AA8 string=0x0000000000328AAC "?"
 *   insn=0x0000000000328AAC string=0x0000000000328AB0 "j"
 *   insn=0x0000000000328AB8 string=0x0000000000328ABC "("
 *   insn=0x0000000000328AC0 string=0x0000000000328AC4 "!"
 *   insn=0x0000000000328AC4 string=0x0000000000328AC8 "("
 *   insn=0x0000000000328AC8 string=0x0000000000328ACC "h"
 *   insn=0x0000000000328AD8 string=0x0000000000328ADC "@"
 *   insn=0x0000000000328AD8 string=0x00000000001FA750 "0'"
 *   insn=0x0000000000328AE8 string=0x0000000000328AEC "("
 *   insn=0x0000000000328AF0 string=0x0000000000328AF4 "h"
 *   insn=0x0000000000328AF8 string=0x0000000000328AFC "b"
 *   insn=0x0000000000328AFC string=0x0000000000328B00 "\t"
 *   insn=0x0000000000328B00 string=0x0000000000328B04 "?"
 *   insn=0x0000000000328B08 string=0x0000000000328B0C ""
 *   insn=0x0000000000328B0C string=0x0000000000328B10 "h"
 *   insn=0x0000000000328B18 string=0x0000000000328B1C "G"
 *   insn=0x0000000000328B1C string=0x0000000000328B20 " "
 *   insn=0x0000000000328B2C string=0x0000000000328B30 "("
 *   insn=0x0000000000328B34 string=0x0000000000328B38 "h"
 *   insn=0x0000000000328B3C string=0x0000000000328B40 "A"
 *   insn=0x0000000000328B40 string=0x0000000000328B44 "h.@"
 *   insn=0x0000000000328B44 string=0x0000000000328B48 ""
 *   insn=0x0000000000328B50 string=0x0000000000328B54 "`"
 *   insn=0x0000000000328B8C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BouncingMonsterControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::BouncingMonsterControllerComponent *this,
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
  _BYTE *v12; // x9
  char *v13; // x9
  unsigned int v14; // w10
  _BYTE *v15; // x9
  int v16; // w11
  int v17; // w11
  int v18; // w9
  _BYTE *v19; // x8
  int v20; // w9
  __int64 result; // x0
  unsigned int v22; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v23; // [xsp+8h] [xbp-28h]

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 2 )
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
    switch ( (unsigned int)v6 >> 3 )
    {
      case 1u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_21;
        v10 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v10 >= v9 || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v22) & 1) == 0 )
            return 0;
          v11 = v22;
          v12 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v11 = (unsigned __int8)*v10;
          v12 = v10 + 1;
          v22 = v11;
          *((_QWORD *)a2 + 1) = v12;
        }
        v16 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 3) = v11;
        *((_DWORD *)this + 7) = v16 | 1;
        if ( (unsigned __int64)v12 >= v9 || *v12 != 16 )
          continue;
        v13 = v12 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 < v9 )
          goto LABEL_18;
        goto LABEL_29;
      case 2u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_21;
        v13 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v13 >= v9 )
          goto LABEL_29;
LABEL_18:
        if ( *v13 < 0 )
        {
LABEL_29:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v22) & 1) == 0 )
            return 0;
          v14 = v22;
          v15 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v14 = (unsigned __int8)*v13;
          v15 = v13 + 1;
          v22 = v14;
          *((_QWORD *)a2 + 1) = v15;
        }
        v17 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 4) = v14;
        *((_DWORD *)this + 7) = v17 | 2;
        if ( (unsigned __int64)v15 >= v9 || *v15 != 29 )
          continue;
        *((_QWORD *)a2 + 1) = v15 + 1;
LABEL_34:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v22) & 1) == 0 )
          return 0;
        v18 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 5) = v22;
        *((_DWORD *)this + 7) = v18 | 4;
        v19 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v19 >= *((_QWORD *)a2 + 2) || *v19 != 37 )
          continue;
        *((_QWORD *)a2 + 1) = v19 + 1;
LABEL_38:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v22) & 1) != 0 )
        {
          v20 = *((_DWORD *)this + 7);
          *((_DWORD *)this + 6) = v22;
          *((_DWORD *)this + 7) = v20 | 8;
          if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
          {
            result = 1;
            *((_DWORD *)a2 + 8) = 0;
            *((_BYTE *)a2 + 36) = 1;
            return result;
          }
          continue;
        }
        return 0;
      case 3u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_34;
        goto LABEL_21;
      case 4u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_38;
        goto LABEL_21;
      default:
        v8 = v6 & 7;
LABEL_21:
        if ( v8 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v6,
                a3)
            & 1) == 0 )
          return 0;
        continue;
    }
  }
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000324778
 * Mangled: _ZN5Caver5Proto34ChargingMonsterControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::ChargingMonsterControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
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
 * Referenced strings: 95
 *   insn=0x0000000000324788 string=0x000000000032478C "U"
 *   insn=0x0000000000324790 string=0x0000000000324794 "6"
 *   insn=0x00000000003247A4 string=0x00000000003247A8 "h"
 *   insn=0x00000000003247AC string=0x00000000003247B0 """
 *   insn=0x00000000003247B0 string=0x00000000003247B4 "\t"
 *   insn=0x00000000003247B8 string=0x00000000003247BC "!"
 *   insn=0x00000000003247BC string=0x00000000003247C0 ""
 *   insn=0x00000000003247C0 string=0x00000000003247C4 "a""
 *   insn=0x00000000003247C4 string=0x00000000003247C8 "h"
 *   insn=0x00000000003247CC string=0x00000000003247E8 "(|"
 *   insn=0x00000000003247D8 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000003247DC string=0x00000000003247E0 "a""
 *   insn=0x00000000003247E8 string=0x00000000003247EC ""
 *   insn=0x00000000003247F0 string=0x00000000003247F4 ""
 *   insn=0x00000000003247F4 string=0x00000000003248B4 "("
 *   insn=0x00000000003247F8 string=0x00000000003247FC ""
 *   insn=0x0000000000324800 string=0x0000000000324804 "("
 *   insn=0x0000000000324800 string=0x0000000000324834 "("
 *   insn=0x0000000000324800 string=0x0000000000324844 "("
 *   insn=0x0000000000324800 string=0x0000000000324874 "("
 *   insn=0x0000000000324800 string=0x0000000000324884 "("
 *   insn=0x0000000000324808 string=0x000000000032480C "i"
 *   insn=0x000000000032480C string=0x0000000000324810 "?"
 *   insn=0x0000000000324814 string=0x0000000000324818 "*"
 *   insn=0x000000000032481C string=0x0000000000324820 "J"
 *   insn=0x0000000000324820 string=0x0000000000324824 ")"
 *   insn=0x0000000000324828 string=0x000000000032482C "i"
 *   insn=0x000000000032482C string=0x0000000000324830 "."
 *   insn=0x000000000032483C string=0x0000000000324840 "l"
 *   insn=0x0000000000324848 string=0x000000000032484C "i"
 *   insn=0x000000000032484C string=0x0000000000324850 "?"
 *   insn=0x0000000000324854 string=0x0000000000324858 "*"
 *   insn=0x0000000000324858 string=0x000000000032485C "j"
 *   insn=0x000000000032485C string=0x0000000000324860 "J"
 *   insn=0x0000000000324860 string=0x0000000000324864 ")"
 *   insn=0x0000000000324868 string=0x000000000032486C "i"
 *   insn=0x000000000032486C string=0x0000000000324870 "D"
 *   insn=0x000000000032487C string=0x0000000000324880 "K"
 *   insn=0x0000000000324888 string=0x000000000032488C "i"
 *   insn=0x000000000032488C string=0x0000000000324890 "?"
 *   insn=0x0000000000324890 string=0x0000000000324894 "B"
 *   insn=0x0000000000324894 string=0x0000000000324898 "*"
 *   insn=0x0000000000324898 string=0x000000000032489C "\n"
 *   insn=0x000000000032489C string=0x00000000003248A0 "J"
 *   insn=0x00000000003248A0 string=0x00000000003248A4 ")"
 *   insn=0x00000000003248A8 string=0x00000000003248AC "i"
 *   insn=0x00000000003248AC string=0x00000000003248B0 "!"
 *   insn=0x00000000003248C4 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000003248C8 string=0x00000000003248CC "]"
 *   insn=0x00000000003248D8 string=0x00000000003248DC " "
 *   insn=0x00000000003248D8 string=0x00000000001F9050 "0'"
 *   insn=0x00000000003248E0 string=0x00000000003248E4 "i"
 *   insn=0x00000000003248EC string=0x00000000003248F0 "?"
 *   insn=0x00000000003248F0 string=0x00000000003248F4 "j"
 *   insn=0x00000000003248F8 string=0x00000000003248FC "b"
 *   insn=0x00000000003248FC string=0x0000000000324900 "*"
 *   insn=0x0000000000324900 string=0x0000000000324904 "_A"
 *   insn=0x0000000000324908 string=0x000000000032490C ")"
 *   insn=0x000000000032490C string=0x0000000000324910 "i"
 *   insn=0x0000000000324910 string=0x0000000000324914 "?"
 *   insn=0x000000000032492C string=0x0000000000324930 "i"
 *   insn=0x0000000000324938 string=0x000000000032493C "?"
 *   insn=0x000000000032493C string=0x0000000000324940 "j"
 *   insn=0x0000000000324948 string=0x000000000032494C "*"
 *   insn=0x000000000032494C string=0x0000000000324950 "_a"
 *   insn=0x0000000000324954 string=0x0000000000324958 ")"
 *   insn=0x0000000000324958 string=0x000000000032495C "i"
 *   insn=0x000000000032495C string=0x0000000000324960 "?"
 *   insn=0x0000000000324970 string=0x0000000000324974 "`"
 *   insn=0x0000000000324978 string=0x000000000032497C "i"
 *   insn=0x0000000000324984 string=0x0000000000324988 "?"
 *   insn=0x0000000000324988 string=0x000000000032498C "j"
 *   insn=0x0000000000324994 string=0x0000000000324998 "("
 *   insn=0x000000000032499C string=0x00000000003249A0 "A"
 *   insn=0x00000000003249A0 string=0x00000000003249A4 "("
 *   insn=0x00000000003249A4 string=0x00000000003249A8 "h"
 *   insn=0x00000000003249B0 string=0x00000000003249B4 "gW"
 *   insn=0x00000000003249B4 string=0x00000000003249B8 "@"
 *   insn=0x00000000003249B4 string=0x00000000001FA750 "0'"
 *   insn=0x00000000003249C4 string=0x00000000003249C8 "("
 *   insn=0x00000000003249CC string=0x00000000003249D0 "h"
 *   insn=0x00000000003249D8 string=0x00000000003249DC "\t"
 *   insn=0x00000000003249DC string=0x00000000003249E0 "?"
 *   insn=0x00000000003249E0 string=0x00000000003249E4 "!"
 *   insn=0x00000000003249E4 string=0x00000000003249E8 ""
 *   insn=0x00000000003249E8 string=0x00000000003249EC "h"
 *   insn=0x00000000003249F4 string=0x00000000003249F8 "VW"
 *   insn=0x00000000003249F8 string=0x00000000003249FC " "
 *   insn=0x0000000000324A08 string=0x0000000000324A0C "("
 *   insn=0x0000000000324A10 string=0x0000000000324A14 "h"
 *   insn=0x0000000000324A18 string=0x0000000000324A1C "a"
 *   insn=0x0000000000324A1C string=0x0000000000324A20 "h.@"
 *   insn=0x0000000000324A20 string=0x0000000000324A24 "("
 *   insn=0x0000000000324A2C string=0x0000000000324A30 "`"
 *   insn=0x0000000000324A68 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ChargingMonsterControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::ChargingMonsterControllerComponent *this,
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
  char *v16; // x9
  unsigned int v17; // w10
  _BYTE *v18; // x9
  int v19; // w11
  int v20; // w11
  int v21; // w11
  int v22; // w9
  _BYTE *v23; // x8
  int v24; // w9
  __int64 result; // x0
  unsigned int v26; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v27; // [xsp+8h] [xbp-28h]

  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
          goto LABEL_25;
        v10 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v10 >= v9 || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v26) & 1) == 0 )
            return 0;
          v11 = v26;
          v12 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v11 = (unsigned __int8)*v10;
          v12 = v10 + 1;
          v26 = v11;
          *((_QWORD *)a2 + 1) = v12;
        }
        v19 = *((_DWORD *)this + 8);
        *((_DWORD *)this + 3) = v11;
        *((_DWORD *)this + 8) = v19 | 1;
        if ( (unsigned __int64)v12 >= v9 || *v12 != 16 )
          continue;
        v16 = v12 + 1;
        *((_QWORD *)a2 + 1) = v16;
        if ( (unsigned __int64)v16 < v9 )
          goto LABEL_22;
        goto LABEL_33;
      case 2u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_25;
        v16 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v16 >= v9 )
          goto LABEL_33;
LABEL_22:
        if ( *v16 < 0 )
        {
LABEL_33:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v26) & 1) == 0 )
            return 0;
          v17 = v26;
          v18 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v17 = (unsigned __int8)*v16;
          v18 = v16 + 1;
          v26 = v17;
          *((_QWORD *)a2 + 1) = v18;
        }
        v20 = *((_DWORD *)this + 8);
        *((_DWORD *)this + 4) = v17;
        *((_DWORD *)this + 8) = v20 | 2;
        if ( (unsigned __int64)v18 >= v9 || *v18 != 24 )
          continue;
        v13 = v18 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 >= v9 )
          goto LABEL_38;
LABEL_16:
        if ( *v13 < 0 )
        {
LABEL_38:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v26) & 1) == 0 )
            return 0;
          v14 = v26;
          v15 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v14 = (unsigned __int8)*v13;
          v15 = v13 + 1;
          v26 = v14;
          *((_QWORD *)a2 + 1) = v15;
        }
        v21 = *((_DWORD *)this + 8);
        *((_DWORD *)this + 5) = v14;
        *((_DWORD *)this + 8) = v21 | 4;
        if ( (unsigned __int64)v15 >= v9 || *v15 != 37 )
          continue;
        *((_QWORD *)a2 + 1) = v15 + 1;
LABEL_43:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v26) & 1) == 0 )
          return 0;
        v22 = *((_DWORD *)this + 8);
        *((_DWORD *)this + 6) = v26;
        *((_DWORD *)this + 8) = v22 | 8;
        v23 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v23 >= *((_QWORD *)a2 + 2) || *v23 != 45 )
          continue;
        *((_QWORD *)a2 + 1) = v23 + 1;
LABEL_47:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v26) & 1) != 0 )
        {
          v24 = *((_DWORD *)this + 8);
          *((_DWORD *)this + 7) = v26;
          *((_DWORD *)this + 8) = v24 | 0x10;
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
        if ( (v6 & 7) != 0 )
          goto LABEL_25;
        v13 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v13 < v9 )
          goto LABEL_16;
        goto LABEL_38;
      case 4u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_43;
        goto LABEL_25;
      case 5u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_47;
        goto LABEL_25;
      default:
        v8 = v6 & 7;
LABEL_25:
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


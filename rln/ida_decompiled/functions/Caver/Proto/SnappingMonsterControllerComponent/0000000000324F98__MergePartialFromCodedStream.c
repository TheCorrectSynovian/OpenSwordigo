/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000324F98
 * Mangled: _ZN5Caver5Proto34SnappingMonsterControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::SnappingMonsterControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 110
 *   insn=0x0000000000324FA8 string=0x0000000000324FAC "U"
 *   insn=0x0000000000324FB0 string=0x0000000000324FB4 "6"
 *   insn=0x0000000000324FC4 string=0x0000000000324FC8 "h"
 *   insn=0x0000000000324FCC string=0x0000000000324FD0 """
 *   insn=0x0000000000324FD0 string=0x0000000000324FD4 "\t"
 *   insn=0x0000000000324FD8 string=0x0000000000324FDC "!"
 *   insn=0x0000000000324FDC string=0x0000000000324FE0 ""
 *   insn=0x0000000000324FE0 string=0x0000000000324FE4 "a""
 *   insn=0x0000000000324FE4 string=0x0000000000324FE8 "h"
 *   insn=0x0000000000324FEC string=0x0000000000325008 "(|"
 *   insn=0x0000000000324FF8 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000324FFC string=0x0000000000325000 "a""
 *   insn=0x0000000000325000 string=0x0000000000325004 "!"
 *   insn=0x0000000000325008 string=0x000000000032500C ""
 *   insn=0x0000000000325010 string=0x0000000000325014 ""
 *   insn=0x0000000000325014 string=0x0000000000325114 "("
 *   insn=0x0000000000325018 string=0x000000000032501C ""
 *   insn=0x0000000000325020 string=0x0000000000325024 "("
 *   insn=0x0000000000325020 string=0x0000000000325054 "("
 *   insn=0x0000000000325020 string=0x0000000000325084 "("
 *   insn=0x0000000000325020 string=0x00000000003250B4 "("
 *   insn=0x0000000000325020 string=0x00000000003250E4 "("
 *   insn=0x0000000000325028 string=0x000000000032502C "i"
 *   insn=0x000000000032502C string=0x0000000000325030 "?"
 *   insn=0x0000000000325034 string=0x0000000000325038 "*"
 *   insn=0x000000000032503C string=0x0000000000325040 "J"
 *   insn=0x0000000000325040 string=0x0000000000325044 ")"
 *   insn=0x0000000000325048 string=0x000000000032504C "i"
 *   insn=0x000000000032504C string=0x0000000000325050 ">"
 *   insn=0x0000000000325058 string=0x000000000032505C "i"
 *   insn=0x000000000032505C string=0x0000000000325060 "?"
 *   insn=0x0000000000325064 string=0x0000000000325068 "*"
 *   insn=0x000000000032506C string=0x0000000000325070 "J"
 *   insn=0x0000000000325070 string=0x0000000000325074 ")"
 *   insn=0x0000000000325078 string=0x000000000032507C "i"
 *   insn=0x000000000032507C string=0x0000000000325080 "~"
 *   insn=0x0000000000325088 string=0x000000000032508C "i"
 *   insn=0x000000000032508C string=0x0000000000325090 "?"
 *   insn=0x0000000000325094 string=0x0000000000325098 "*"
 *   insn=0x0000000000325098 string=0x000000000032509C "j\t"
 *   insn=0x000000000032509C string=0x00000000003250A0 "J"
 *   insn=0x00000000003250A0 string=0x00000000003250A4 ")"
 *   insn=0x00000000003250A8 string=0x00000000003250AC "i"
 *   insn=0x00000000003250AC string=0x00000000003250B0 "L"
 *   insn=0x00000000003250B8 string=0x00000000003250BC "i"
 *   insn=0x00000000003250BC string=0x00000000003250C0 "?"
 *   insn=0x00000000003250C4 string=0x00000000003250C8 "*"
 *   insn=0x00000000003250C8 string=0x00000000003250CC "J\n"
 *   insn=0x00000000003250CC string=0x00000000003250D0 "J"
 *   insn=0x00000000003250D0 string=0x00000000003250D4 ")"
 *   insn=0x00000000003250D8 string=0x00000000003250DC "i"
 *   insn=0x00000000003250DC string=0x00000000003250E0 "S"
 *   insn=0x00000000003250E8 string=0x00000000003250EC "i"
 *   insn=0x00000000003250EC string=0x00000000003250F0 "?"
 *   insn=0x00000000003250F0 string=0x00000000003250F4 "B"
 *   insn=0x00000000003250F4 string=0x00000000003250F8 "*"
 *   insn=0x00000000003250F8 string=0x00000000003250FC "\n"
 *   insn=0x00000000003250FC string=0x0000000000325100 "J"
 *   insn=0x0000000000325100 string=0x0000000000325104 ")"
 *   insn=0x0000000000325108 string=0x000000000032510C "i"
 *   insn=0x000000000032510C string=0x0000000000325110 "!"
 *   insn=0x0000000000325118 string=0x000000000032511C "`"
 *   insn=0x0000000000325124 string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000325128 string=0x000000000032512C "a"
 *   insn=0x0000000000325138 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000325140 string=0x0000000000325144 "i"
 *   insn=0x000000000032514C string=0x0000000000325150 "?"
 *   insn=0x0000000000325150 string=0x0000000000325154 "j"
 *   insn=0x0000000000325158 string=0x000000000032515C "b"
 *   insn=0x000000000032515C string=0x0000000000325160 "*"
 *   insn=0x0000000000325160 string=0x0000000000325164 "_A"
 *   insn=0x0000000000325168 string=0x000000000032516C ")"
 *   insn=0x000000000032516C string=0x0000000000325170 "i"
 *   insn=0x0000000000325170 string=0x0000000000325174 "?"
 *   insn=0x0000000000325184 string=0x0000000000325188 "@\t"
 *   insn=0x000000000032518C string=0x0000000000325190 "i"
 *   insn=0x0000000000325198 string=0x000000000032519C "?"
 *   insn=0x000000000032519C string=0x00000000003251A0 "j"
 *   insn=0x00000000003251A8 string=0x00000000003251AC "*"
 *   insn=0x00000000003251AC string=0x00000000003251B0 "_a"
 *   insn=0x00000000003251B4 string=0x00000000003251B8 ")"
 *   insn=0x00000000003251B8 string=0x00000000003251BC "i"
 *   insn=0x00000000003251BC string=0x00000000003251C0 "?"
 *   insn=0x00000000003251D8 string=0x00000000003251DC "i"
 *   insn=0x00000000003251E4 string=0x00000000003251E8 "?"
 *   insn=0x00000000003251E8 string=0x00000000003251EC "j"
 *   insn=0x00000000003251F4 string=0x00000000003251F8 "*"
 *   insn=0x00000000003251F8 string=0x00000000003251FC "_"
 *   insn=0x00000000003251FC string=0x0000000000325200 "A"
 *   insn=0x0000000000325200 string=0x0000000000325204 ")"
 *   insn=0x0000000000325204 string=0x0000000000325208 "i"
 *   insn=0x0000000000325208 string=0x000000000032520C "?"
 *   insn=0x0000000000325224 string=0x0000000000325228 "i"
 *   insn=0x0000000000325230 string=0x0000000000325234 "?"
 *   insn=0x0000000000325234 string=0x0000000000325238 "j"
 *   insn=0x000000000032523C string=0x0000000000325240 "B"
 *   insn=0x0000000000325240 string=0x0000000000325244 "*"
 *   insn=0x0000000000325244 string=0x0000000000325248 "_"
 *   insn=0x000000000032524C string=0x0000000000325250 ")"
 *   insn=0x0000000000325250 string=0x0000000000325254 "i"
 *   insn=0x0000000000325254 string=0x0000000000325258 "?"
 *   insn=0x0000000000325258 string=0x000000000032525C "c"
 *   insn=0x0000000000325264 string=0x0000000000325268 "zO"
 *   insn=0x0000000000325268 string=0x000000000032526C " "
 *   insn=0x0000000000325270 string=0x0000000000325274 "i"
 *   insn=0x000000000032527C string=0x0000000000325280 "?"
 *   insn=0x0000000000325280 string=0x0000000000325284 "j"
 *   insn=0x000000000032528C string=0x0000000000325290 "h.@"
 *   insn=0x000000000032529C string=0x00000000003252A0 "`"
 *   insn=0x00000000003252D8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SnappingMonsterControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::SnappingMonsterControllerComponent *this,
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
  unsigned __int8 *v15; // x9
  char *v16; // x9
  unsigned int v17; // w10
  _BYTE *v18; // x9
  char *v19; // x9
  unsigned int v20; // w10
  _BYTE *v21; // x9
  char *v22; // x9
  unsigned int v23; // w10
  _BYTE *v24; // x9
  int v25; // w11
  int v26; // w11
  int v27; // w11
  int v28; // w11
  int v29; // w11
  __int64 result; // x0
  unsigned int v31; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v32; // [xsp+8h] [xbp-28h]

  v32 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
          goto LABEL_29;
        v10 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v10 >= v9 || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v31) & 1) == 0 )
            return 0;
          v11 = v31;
          v12 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v11 = (unsigned __int8)*v10;
          v12 = v10 + 1;
          v31 = v11;
          *((_QWORD *)a2 + 1) = v12;
        }
        v25 = *((_DWORD *)this + 8);
        *((_DWORD *)this + 3) = v11;
        *((_DWORD *)this + 8) = v25 | 1;
        if ( (unsigned __int64)v12 >= v9 || *v12 != 16 )
          continue;
        v22 = v12 + 1;
        *((_QWORD *)a2 + 1) = v22;
        if ( (unsigned __int64)v22 < v9 )
          goto LABEL_26;
        goto LABEL_37;
      case 2u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_29;
        v22 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v22 >= v9 )
          goto LABEL_37;
LABEL_26:
        if ( *v22 < 0 )
        {
LABEL_37:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v31) & 1) == 0 )
            return 0;
          v23 = v31;
          v24 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v23 = (unsigned __int8)*v22;
          v24 = v22 + 1;
          v31 = v23;
          *((_QWORD *)a2 + 1) = v24;
        }
        v26 = *((_DWORD *)this + 8);
        *((_DWORD *)this + 4) = v23;
        *((_DWORD *)this + 8) = v26 | 2;
        if ( (unsigned __int64)v24 >= v9 || *v24 != 24 )
          continue;
        v16 = v24 + 1;
        *((_QWORD *)a2 + 1) = v16;
        if ( (unsigned __int64)v16 >= v9 )
          goto LABEL_42;
LABEL_18:
        if ( *v16 < 0 )
        {
LABEL_42:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v31) & 1) == 0 )
            return 0;
          v17 = v31;
          v18 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v17 = (unsigned __int8)*v16;
          v18 = v16 + 1;
          v31 = v17;
          *((_QWORD *)a2 + 1) = v18;
        }
        v27 = *((_DWORD *)this + 8);
        *((_DWORD *)this + 5) = v17;
        *((_DWORD *)this + 8) = v27 | 4;
        if ( (unsigned __int64)v18 >= v9 || *v18 != 32 )
          continue;
        v19 = v18 + 1;
        *((_QWORD *)a2 + 1) = v19;
        if ( (unsigned __int64)v19 >= v9 )
          goto LABEL_47;
LABEL_22:
        if ( *v19 < 0 )
        {
LABEL_47:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v31) & 1) == 0 )
            return 0;
          v20 = v31;
          v21 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v20 = (unsigned __int8)*v19;
          v21 = v19 + 1;
          v31 = v20;
          *((_QWORD *)a2 + 1) = v21;
        }
        v28 = *((_DWORD *)this + 8);
        *((_DWORD *)this + 6) = v20;
        *((_DWORD *)this + 8) = v28 | 8;
        if ( (unsigned __int64)v21 >= v9 || *v21 != 40 )
          continue;
        v13 = v21 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 >= v9 )
          goto LABEL_52;
LABEL_14:
        if ( (*v13 & 0x80000000) == 0 )
        {
          v14 = (unsigned __int8)*v13;
          v15 = (unsigned __int8 *)(v13 + 1);
          v31 = v14;
          *((_QWORD *)a2 + 1) = v15;
          goto LABEL_54;
        }
LABEL_52:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v31) & 1) != 0 )
        {
          v14 = v31;
          v15 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
LABEL_54:
          v29 = *((_DWORD *)this + 8);
          *((_DWORD *)this + 7) = v14;
          *((_DWORD *)this + 8) = v29 | 0x10;
          if ( v15 == (unsigned __int8 *)v9 && *((_DWORD *)a2 + 11) )
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
          goto LABEL_29;
        v16 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v16 < v9 )
          goto LABEL_18;
        goto LABEL_42;
      case 4u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_29;
        v19 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v19 < v9 )
          goto LABEL_22;
        goto LABEL_47;
      case 5u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_29;
        v13 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v13 < v9 )
          goto LABEL_14;
        goto LABEL_52;
      default:
        v8 = v6 & 7;
LABEL_29:
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


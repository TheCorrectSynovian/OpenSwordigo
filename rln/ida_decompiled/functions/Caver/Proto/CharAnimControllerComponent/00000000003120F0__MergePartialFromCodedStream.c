/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003120F0
 * Mangled: _ZN5Caver5Proto27CharAnimControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::CharAnimControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 129
 *   insn=0x0000000000312100 string=0x0000000000312104 "U"
 *   insn=0x000000000031210C string=0x000000000058B674 "k"
 *   insn=0x000000000031211C string=0x0000000000312120 "h"
 *   insn=0x0000000000312124 string=0x0000000000312128 """
 *   insn=0x0000000000312128 string=0x000000000031212C "\t"
 *   insn=0x0000000000312130 string=0x0000000000312134 "!"
 *   insn=0x0000000000312134 string=0x0000000000312138 ""
 *   insn=0x0000000000312138 string=0x000000000031213C "a""
 *   insn=0x000000000031213C string=0x0000000000312140 "h"
 *   insn=0x0000000000312144 string=0x0000000000312160 "(|"
 *   insn=0x000000000031214C string=0x0000000000312150 "<"
 *   insn=0x0000000000312150 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000312154 string=0x0000000000312158 "a""
 *   insn=0x0000000000312160 string=0x0000000000312164 ""
 *   insn=0x000000000031216C string=0x000000000031229C "("
 *   insn=0x0000000000312170 string=0x0000000000312174 ""
 *   insn=0x0000000000312178 string=0x000000000031217C "("
 *   insn=0x0000000000312178 string=0x00000000003121AC "("
 *   insn=0x0000000000312178 string=0x00000000003121DC "("
 *   insn=0x0000000000312178 string=0x000000000031220C "("
 *   insn=0x0000000000312178 string=0x000000000031223C "("
 *   insn=0x0000000000312178 string=0x000000000031226C "("
 *   insn=0x0000000000312180 string=0x0000000000312184 "i"
 *   insn=0x0000000000312184 string=0x0000000000312188 "?"
 *   insn=0x0000000000312188 string=0x000000000031218C "b\t"
 *   insn=0x000000000031218C string=0x0000000000312190 "*"
 *   insn=0x0000000000312190 string=0x0000000000312194 "*\t"
 *   insn=0x0000000000312194 string=0x0000000000312198 "J"
 *   insn=0x0000000000312198 string=0x000000000031219C ")"
 *   insn=0x00000000003121A0 string=0x00000000003121A4 "i"
 *   insn=0x00000000003121A4 string=0x00000000003121A8 "J"
 *   insn=0x00000000003121B0 string=0x00000000003121B4 "i"
 *   insn=0x00000000003121B4 string=0x00000000003121B8 "?"
 *   insn=0x00000000003121B8 string=0x00000000003121BC "b"
 *   insn=0x00000000003121BC string=0x00000000003121C0 "*"
 *   insn=0x00000000003121C0 string=0x00000000003121C4 "*"
 *   insn=0x00000000003121C4 string=0x00000000003121C8 "J"
 *   insn=0x00000000003121C8 string=0x00000000003121CC ")"
 *   insn=0x00000000003121D0 string=0x00000000003121D4 "i"
 *   insn=0x00000000003121E0 string=0x00000000003121E4 "i"
 *   insn=0x00000000003121E4 string=0x00000000003121E8 "?"
 *   insn=0x00000000003121E8 string=0x00000000003121EC """
 *   insn=0x00000000003121EC string=0x00000000003121F0 "*"
 *   insn=0x00000000003121F4 string=0x00000000003121F8 "J"
 *   insn=0x00000000003121F8 string=0x00000000003121FC ")"
 *   insn=0x0000000000312200 string=0x0000000000312204 "i"
 *   insn=0x0000000000312204 string=0x0000000000312208 "X"
 *   insn=0x0000000000312210 string=0x0000000000312214 "i"
 *   insn=0x0000000000312214 string=0x0000000000312218 "?"
 *   insn=0x000000000031221C string=0x0000000000312220 "*"
 *   insn=0x0000000000312224 string=0x0000000000312228 "J"
 *   insn=0x0000000000312228 string=0x000000000031222C ")"
 *   insn=0x0000000000312230 string=0x0000000000312234 "i"
 *   insn=0x0000000000312234 string=0x0000000000312238 "_"
 *   insn=0x0000000000312240 string=0x0000000000312244 "i"
 *   insn=0x0000000000312244 string=0x0000000000312248 "?"
 *   insn=0x000000000031224C string=0x0000000000312250 "*"
 *   insn=0x0000000000312254 string=0x0000000000312258 "J"
 *   insn=0x0000000000312258 string=0x000000000031225C ")"
 *   insn=0x0000000000312260 string=0x0000000000312264 "i"
 *   insn=0x0000000000312264 string=0x0000000000312268 "-"
 *   insn=0x0000000000312270 string=0x0000000000312274 "i"
 *   insn=0x0000000000312274 string=0x0000000000312278 "?"
 *   insn=0x000000000031227C string=0x0000000000312280 "*"
 *   insn=0x0000000000312284 string=0x0000000000312288 "J"
 *   insn=0x0000000000312288 string=0x000000000031228C ")"
 *   insn=0x0000000000312290 string=0x0000000000312294 "i"
 *   insn=0x0000000000312294 string=0x0000000000312298 "m"
 *   insn=0x00000000003122AC string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000003122B0 string=0x00000000003122B4 "t"
 *   insn=0x00000000003122BC string=0x00000000003122C0 "d"
 *   insn=0x00000000003122C0 string=0x00000000001F9050 "0'"
 *   insn=0x00000000003122C8 string=0x00000000003122CC "i"
 *   insn=0x00000000003122D4 string=0x00000000003122D8 "?"
 *   insn=0x00000000003122D8 string=0x00000000003122DC "j"
 *   insn=0x00000000003122E4 string=0x00000000003122E8 "*"
 *   insn=0x00000000003122E8 string=0x00000000003122EC "_"
 *   insn=0x00000000003122F0 string=0x00000000003122F4 ")"
 *   insn=0x00000000003122F4 string=0x00000000003122F8 "i"
 *   insn=0x00000000003122F8 string=0x00000000003122FC "?"
 *   insn=0x0000000000312308 string=0x000000000031230C "Q"
 *   insn=0x0000000000312314 string=0x0000000000312318 "i"
 *   insn=0x0000000000312320 string=0x0000000000312324 "?"
 *   insn=0x0000000000312324 string=0x0000000000312328 "j"
 *   insn=0x0000000000312330 string=0x0000000000312334 "*"
 *   insn=0x0000000000312334 string=0x0000000000312338 "_"
 *   insn=0x0000000000312338 string=0x000000000031233C "!"
 *   insn=0x000000000031233C string=0x0000000000312340 ")"
 *   insn=0x0000000000312340 string=0x0000000000312344 "i"
 *   insn=0x0000000000312344 string=0x0000000000312348 "?"
 *   insn=0x0000000000312348 string=0x000000000031234C "#"
 *   insn=0x0000000000312354 string=0x0000000000312358 ">"
 *   insn=0x0000000000312358 string=0x000000000031235C "@\t"
 *   insn=0x0000000000312360 string=0x0000000000312364 "i"
 *   insn=0x000000000031236C string=0x0000000000312370 "?"
 *   insn=0x0000000000312370 string=0x0000000000312374 "j"
 *   insn=0x0000000000312378 string=0x000000000031237C """
 *   insn=0x000000000031237C string=0x0000000000312380 "*"
 *   insn=0x0000000000312380 string=0x0000000000312384 "_"
 *   insn=0x0000000000312388 string=0x000000000031238C ")"
 *   insn=0x000000000031238C string=0x0000000000312390 "i"
 *   insn=0x0000000000312390 string=0x0000000000312394 "?"
 *   insn=0x0000000000312394 string=0x0000000000312398 "C"
 *   insn=0x00000000003123A0 string=0x00000000003123A4 "+"
 *   insn=0x00000000003123AC string=0x00000000003123B0 "i"
 *   insn=0x00000000003123B8 string=0x00000000003123BC "?"
 *   insn=0x00000000003123BC string=0x00000000003123C0 "j"
 *   insn=0x00000000003123C8 string=0x00000000003123CC "*"
 *   insn=0x00000000003123CC string=0x00000000003123D0 "_"
 *   insn=0x00000000003123D0 string=0x00000000003123D4 "a"
 *   insn=0x00000000003123D4 string=0x00000000003123D8 ")"
 *   insn=0x00000000003123D8 string=0x00000000003123DC "i"
 *   insn=0x00000000003123DC string=0x00000000003123E0 "?"
 *   insn=0x00000000003123F8 string=0x00000000003123FC "i"
 *   insn=0x0000000000312404 string=0x0000000000312408 "?"
 *   insn=0x0000000000312408 string=0x000000000031240C "j"
 *   insn=0x0000000000312410 string=0x0000000000312414 "b"
 *   insn=0x0000000000312414 string=0x0000000000312418 "*"
 *   insn=0x0000000000312418 string=0x000000000031241C "_!"
 *   insn=0x0000000000312420 string=0x0000000000312424 ")"
 *   insn=0x0000000000312424 string=0x0000000000312428 "i"
 *   insn=0x0000000000312428 string=0x000000000031242C "?"
 *   insn=0x000000000031243C string=0x0000000000312440 " "
 *   insn=0x0000000000312444 string=0x0000000000312448 "i"
 *   insn=0x0000000000312450 string=0x0000000000312454 "?"
 *   insn=0x0000000000312454 string=0x0000000000312458 "j"
 *   insn=0x0000000000312460 string=0x0000000000312464 "h.@"
 *   insn=0x0000000000312470 string=0x0000000000312474 "`"
 *   insn=0x00000000003124AC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharAnimControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::CharAnimControllerComponent *this,
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
  char *v19; // x9
  unsigned int v20; // w10
  _BYTE *v21; // x9
  char *v22; // x9
  unsigned int v23; // w10
  _BYTE *v24; // x9
  char *v25; // x9
  unsigned int v26; // w10
  unsigned __int8 *v27; // x9
  int v28; // w11
  int v29; // w11
  int v30; // w11
  int v31; // w11
  int v32; // w11
  int v33; // w11
  __int64 result; // x0
  unsigned int v35; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v36; // [xsp+8h] [xbp-28h]

  v36 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
      case 4u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_33;
        v10 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v10 >= v9 || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v35) & 1) == 0 )
            return 0;
          v11 = v35;
          v12 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v11 = (unsigned __int8)*v10;
          v12 = v10 + 1;
          v35 = v11;
          *((_QWORD *)a2 + 1) = v12;
        }
        v28 = *((_DWORD *)this + 9);
        *((_DWORD *)this + 3) = v11;
        *((_DWORD *)this + 9) = v28 | 1;
        if ( (unsigned __int64)v12 >= v9 || *v12 != 40 )
          continue;
        v22 = v12 + 1;
        *((_QWORD *)a2 + 1) = v22;
        if ( (unsigned __int64)v22 < v9 )
          goto LABEL_26;
        goto LABEL_41;
      case 5u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_33;
        v22 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v22 >= v9 )
          goto LABEL_41;
LABEL_26:
        if ( *v22 < 0 )
        {
LABEL_41:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v35) & 1) == 0 )
            return 0;
          v23 = v35;
          v24 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v23 = (unsigned __int8)*v22;
          v24 = v22 + 1;
          v35 = v23;
          *((_QWORD *)a2 + 1) = v24;
        }
        v29 = *((_DWORD *)this + 9);
        *((_DWORD *)this + 4) = v23;
        *((_DWORD *)this + 9) = v29 | 2;
        if ( (unsigned __int64)v24 >= v9 || *v24 != 48 )
          continue;
        v16 = v24 + 1;
        *((_QWORD *)a2 + 1) = v16;
        if ( (unsigned __int64)v16 >= v9 )
          goto LABEL_46;
LABEL_18:
        if ( *v16 < 0 )
        {
LABEL_46:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v35) & 1) == 0 )
            return 0;
          v17 = v35;
          v18 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v17 = (unsigned __int8)*v16;
          v18 = v16 + 1;
          v35 = v17;
          *((_QWORD *)a2 + 1) = v18;
        }
        v30 = *((_DWORD *)this + 9);
        *((_DWORD *)this + 5) = v17;
        *((_DWORD *)this + 9) = v30 | 4;
        if ( (unsigned __int64)v18 >= v9 || *v18 != 56 )
          continue;
        v19 = v18 + 1;
        *((_QWORD *)a2 + 1) = v19;
        if ( (unsigned __int64)v19 >= v9 )
          goto LABEL_51;
LABEL_22:
        if ( *v19 < 0 )
        {
LABEL_51:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v35) & 1) == 0 )
            return 0;
          v20 = v35;
          v21 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v20 = (unsigned __int8)*v19;
          v21 = v19 + 1;
          v35 = v20;
          *((_QWORD *)a2 + 1) = v21;
        }
        v31 = *((_DWORD *)this + 9);
        *((_DWORD *)this + 7) = v20;
        *((_DWORD *)this + 9) = v31 | 0x10;
        if ( (unsigned __int64)v21 >= v9 || *v21 != 64 )
          continue;
        v13 = v21 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 >= v9 )
          goto LABEL_56;
LABEL_14:
        if ( *v13 < 0 )
        {
LABEL_56:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v35) & 1) == 0 )
            return 0;
          v14 = v35;
          v15 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v14 = (unsigned __int8)*v13;
          v15 = v13 + 1;
          v35 = v14;
          *((_QWORD *)a2 + 1) = v15;
        }
        v32 = *((_DWORD *)this + 9);
        *((_DWORD *)this + 8) = v14;
        *((_DWORD *)this + 9) = v32 | 0x20;
        if ( (unsigned __int64)v15 >= v9 || *v15 != 72 )
          continue;
        v25 = v15 + 1;
        *((_QWORD *)a2 + 1) = v25;
        if ( (unsigned __int64)v25 >= v9 )
          goto LABEL_61;
LABEL_30:
        if ( (*v25 & 0x80000000) == 0 )
        {
          v26 = (unsigned __int8)*v25;
          v27 = (unsigned __int8 *)(v25 + 1);
          v35 = v26;
          *((_QWORD *)a2 + 1) = v27;
          goto LABEL_63;
        }
LABEL_61:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v35) & 1) != 0 )
        {
          v26 = v35;
          v27 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
LABEL_63:
          v33 = *((_DWORD *)this + 9);
          *((_DWORD *)this + 6) = v26;
          *((_DWORD *)this + 9) = v33 | 8;
          if ( v27 == (unsigned __int8 *)v9 && *((_DWORD *)a2 + 11) )
          {
            result = 1;
            *((_DWORD *)a2 + 8) = 0;
            *((_BYTE *)a2 + 36) = 1;
            return result;
          }
          continue;
        }
        return 0;
      case 6u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_33;
        v16 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v16 < v9 )
          goto LABEL_18;
        goto LABEL_46;
      case 7u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_33;
        v19 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v19 < v9 )
          goto LABEL_22;
        goto LABEL_51;
      case 8u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_33;
        v13 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v13 < v9 )
          goto LABEL_14;
        goto LABEL_56;
      case 9u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_33;
        v25 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v25 < v9 )
          goto LABEL_30;
        goto LABEL_61;
      default:
        v8 = v6 & 7;
LABEL_33:
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


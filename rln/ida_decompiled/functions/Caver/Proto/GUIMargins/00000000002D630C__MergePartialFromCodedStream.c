/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D630C
 * Mangled: _ZN5Caver5Proto10GUIMargins27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::GUIMargins::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F8760  Caver::Proto::GUIMargins::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 59
 *   insn=0x00000000002D631C string=0x00000000002D6320 "U"
 *   insn=0x00000000002D6338 string=0x00000000002D633C "h"
 *   insn=0x00000000002D6340 string=0x00000000002D6344 """
 *   insn=0x00000000002D6344 string=0x00000000002D6348 "\t"
 *   insn=0x00000000002D634C string=0x00000000002D6350 "!"
 *   insn=0x00000000002D6350 string=0x00000000002D6354 ""
 *   insn=0x00000000002D6354 string=0x00000000002D6358 "a""
 *   insn=0x00000000002D6358 string=0x00000000002D635C "h"
 *   insn=0x00000000002D6360 string=0x00000000002D6364 "f"
 *   insn=0x00000000002D6360 string=0x00000000002D637C "(|"
 *   insn=0x00000000002D636C string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002D6370 string=0x00000000002D6374 "a""
 *   insn=0x00000000002D6374 string=0x00000000002D6378 "!"
 *   insn=0x00000000002D637C string=0x00000000002D6380 ""
 *   insn=0x00000000002D6388 string=0x00000000002D64DC "("
 *   insn=0x00000000002D638C string=0x00000000002D6390 ""
 *   insn=0x00000000002D6394 string=0x00000000002D6398 "("
 *   insn=0x00000000002D6394 string=0x00000000002D63EC "("
 *   insn=0x00000000002D6394 string=0x00000000002D63FC "("
 *   insn=0x00000000002D6394 string=0x00000000002D640C "("
 *   insn=0x00000000002D63AC string=0x00000000002D63B0 " \n"
 *   insn=0x00000000002D63AC string=0x00000000001FA750 "0'"
 *   insn=0x00000000002D63BC string=0x00000000002D63C0 "("
 *   insn=0x00000000002D63C4 string=0x00000000002D63C8 "h"
 *   insn=0x00000000002D63CC string=0x00000000002D63D0 "b"
 *   insn=0x00000000002D63D0 string=0x00000000002D63D4 "\t"
 *   insn=0x00000000002D63D4 string=0x00000000002D63D8 "?U"
 *   insn=0x00000000002D63DC string=0x00000000002D63E0 ""
 *   insn=0x00000000002D63E0 string=0x00000000002D63E4 "h"
 *   insn=0x00000000002D63F0 string=0x00000000002D63F4 "@"
 *   insn=0x00000000002D63F4 string=0x00000000002D63F8 ":"
 *   insn=0x00000000002D6404 string=0x00000000002D6408 "6"
 *   insn=0x00000000002D6410 string=0x00000000002D6414 "a"
 *   insn=0x00000000002D6430 string=0x00000000002D6434 "("
 *   insn=0x00000000002D6438 string=0x00000000002D643C "h"
 *   insn=0x00000000002D6444 string=0x00000000002D6448 "\t"
 *   insn=0x00000000002D6448 string=0x00000000002D644C "?u"
 *   insn=0x00000000002D644C string=0x00000000002D6450 "a"
 *   insn=0x00000000002D6450 string=0x00000000002D6454 ""
 *   insn=0x00000000002D6454 string=0x00000000002D6458 "h"
 *   insn=0x00000000002D6464 string=0x00000000002D6468 "`"
 *   insn=0x00000000002D6474 string=0x00000000002D6478 "("
 *   insn=0x00000000002D647C string=0x00000000002D6480 "h"
 *   insn=0x00000000002D6488 string=0x00000000002D648C "\t"
 *   insn=0x00000000002D648C string=0x00000000002D6490 "?"
 *   insn=0x00000000002D6490 string=0x00000000002D6494 "A"
 *   insn=0x00000000002D6494 string=0x00000000002D6498 ""
 *   insn=0x00000000002D6498 string=0x00000000002D649C "h"
 *   insn=0x00000000002D64A8 string=0x00000000002D64AC "@"
 *   insn=0x00000000002D64B8 string=0x00000000002D64BC "("
 *   insn=0x00000000002D64C0 string=0x00000000002D64C4 "h"
 *   insn=0x00000000002D64CC string=0x00000000002D64D0 "h.@"
 *   insn=0x00000000002D64D0 string=0x00000000002D64D4 "H"
 *   insn=0x00000000002D64EC string=0x00000000002D64F0 "`"
 *   insn=0x00000000002D64EC string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002D6508 string=0x00000000002D650C "A"
 *   insn=0x00000000002D650C string=0x00000000002D6534 "g"
 *   insn=0x00000000002D6528 string=0x00000000002D652C "`"
 *   insn=0x00000000002D6534 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GUIMargins::MergePartialFromCodedStream(
        Caver::Proto::GUIMargins *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  int v9; // w9
  _BYTE *v10; // x8
  int v11; // w9
  _BYTE *v12; // x8
  int v13; // w9
  _BYTE *v14; // x8
  int v15; // w9
  __int64 result; // x0
  unsigned int v17; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v18; // [xsp+8h] [xbp-28h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
    v5 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v5 < *((_QWORD *)a2 + 2) && (*v5 & 0x80000000) == 0 )
    {
      v6 = (unsigned __int8)*v5;
      *((_DWORD *)a2 + 8) = v6;
      *((_QWORD *)a2 + 1) = v5 + 1;
      if ( !(_DWORD)v6 )
        return 1;
      goto LABEL_7;
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
    v6 = TagFallback;
    *((_DWORD *)a2 + 8) = TagFallback;
    if ( !TagFallback )
      return 1;
LABEL_7:
    switch ( (unsigned int)v6 >> 3 )
    {
      case 1u:
        v8 = v6 & 7;
        if ( v8 != 5 )
          goto LABEL_31;
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v17) & 1) == 0 )
          return 0;
        v9 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 3) = v17;
        *((_DWORD *)this + 7) = v9 | 1;
        v10 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v10 >= *((_QWORD *)a2 + 2) || *v10 != 21 )
          continue;
        *((_QWORD *)a2 + 1) = v10 + 1;
        goto LABEL_18;
      case 2u:
        v8 = v6 & 7;
        if ( v8 != 5 )
          goto LABEL_31;
LABEL_18:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v17) & 1) == 0 )
          return 0;
        v11 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 4) = v17;
        *((_DWORD *)this + 7) = v11 | 2;
        v12 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v12 >= *((_QWORD *)a2 + 2) || *v12 != 29 )
          continue;
        *((_QWORD *)a2 + 1) = v12 + 1;
LABEL_22:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v17) & 1) == 0 )
          return 0;
        v13 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 5) = v17;
        *((_DWORD *)this + 7) = v13 | 4;
        v14 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v14 >= *((_QWORD *)a2 + 2) || *v14 != 37 )
          continue;
        *((_QWORD *)a2 + 1) = v14 + 1;
LABEL_26:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v17) & 1) == 0 )
          return 0;
        v15 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 6) = v17;
        *((_DWORD *)this + 7) = v15 | 8;
        if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
        {
          result = 1;
          *((_DWORD *)a2 + 8) = 0;
          *((_BYTE *)a2 + 36) = 1;
          return result;
        }
        break;
      case 3u:
        v8 = v6 & 7;
        if ( v8 != 5 )
          goto LABEL_31;
        goto LABEL_22;
      case 4u:
        v8 = v6 & 7;
        if ( v8 != 5 )
          goto LABEL_31;
        goto LABEL_26;
      default:
        v8 = v6 & 7;
LABEL_31:
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


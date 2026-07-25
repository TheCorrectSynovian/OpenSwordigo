/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CF530
 * Mangled: _ZN5Caver5Proto3Box27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Box::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001FAB50  Caver::Proto::Box::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 81
 *   insn=0x00000000002CF540 string=0x00000000002CF544 "U"
 *   insn=0x00000000002CF55C string=0x00000000002CF560 "h"
 *   insn=0x00000000002CF564 string=0x00000000002CF568 """
 *   insn=0x00000000002CF568 string=0x00000000002CF56C "\t"
 *   insn=0x00000000002CF570 string=0x00000000002CF574 "!"
 *   insn=0x00000000002CF574 string=0x00000000002CF578 ""
 *   insn=0x00000000002CF578 string=0x00000000002CF57C "a""
 *   insn=0x00000000002CF57C string=0x00000000002CF580 "h"
 *   insn=0x00000000002CF584 string=0x00000000002CF5A0 "(|"
 *   insn=0x00000000002CF58C string=0x00000000002CF590 ","
 *   insn=0x00000000002CF590 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002CF594 string=0x00000000002CF598 "a""
 *   insn=0x00000000002CF598 string=0x00000000002CF59C "a"
 *   insn=0x00000000002CF5A0 string=0x00000000002CF5A4 ""
 *   insn=0x00000000002CF5AC string=0x00000000002CF7A8 "("
 *   insn=0x00000000002CF5B0 string=0x00000000002CF5B4 ""
 *   insn=0x00000000002CF5B8 string=0x00000000002CF5BC "("
 *   insn=0x00000000002CF5B8 string=0x00000000002CF610 "("
 *   insn=0x00000000002CF5B8 string=0x00000000002CF620 "("
 *   insn=0x00000000002CF5B8 string=0x00000000002CF630 "("
 *   insn=0x00000000002CF5B8 string=0x00000000002CF640 "("
 *   insn=0x00000000002CF5B8 string=0x00000000002CF760 "("
 *   insn=0x00000000002CF5C0 string=0x00000000002CF5C4 "A"
 *   insn=0x00000000002CF5CC string=0x00000000002CF5D0 "`"
 *   insn=0x00000000002CF5D0 string=0x00000000002CF5D4 "`"
 *   insn=0x00000000002CF5D0 string=0x00000000001FA750 "0'"
 *   insn=0x00000000002CF5E0 string=0x00000000002CF5E4 "("
 *   insn=0x00000000002CF5E8 string=0x00000000002CF5EC "h"
 *   insn=0x00000000002CF5F0 string=0x00000000002CF5F4 "b"
 *   insn=0x00000000002CF5F4 string=0x00000000002CF5F8 "\t"
 *   insn=0x00000000002CF5F8 string=0x00000000002CF5FC "?U"
 *   insn=0x00000000002CF600 string=0x00000000002CF604 ""
 *   insn=0x00000000002CF604 string=0x00000000002CF608 "h"
 *   insn=0x00000000002CF618 string=0x00000000002CF61C "d"
 *   insn=0x00000000002CF624 string=0x00000000002CF628 "@"
 *   insn=0x00000000002CF628 string=0x00000000002CF62C "`"
 *   insn=0x00000000002CF638 string=0x00000000002CF63C "\"
 *   insn=0x00000000002CF644 string=0x00000000002CF648 "!"
 *   insn=0x00000000002CF650 string=0x00000000002CF654 "?"
 *   insn=0x00000000002CF654 string=0x00000000002CF658 "@"
 *   insn=0x00000000002CF664 string=0x00000000002CF668 "("
 *   insn=0x00000000002CF66C string=0x00000000002CF670 "h"
 *   insn=0x00000000002CF674 string=0x00000000002CF678 "B"
 *   insn=0x00000000002CF678 string=0x00000000002CF67C "\t"
 *   insn=0x00000000002CF67C string=0x00000000002CF680 "?u"
 *   insn=0x00000000002CF684 string=0x00000000002CF688 ""
 *   insn=0x00000000002CF688 string=0x00000000002CF68C "h"
 *   insn=0x00000000002CF694 string=0x00000000002CF698 "."
 *   insn=0x00000000002CF698 string=0x00000000002CF69C " \t"
 *   insn=0x00000000002CF6A8 string=0x00000000002CF6AC "("
 *   insn=0x00000000002CF6B0 string=0x00000000002CF6B4 "h"
 *   insn=0x00000000002CF6B8 string=0x00000000002CF6BC """
 *   insn=0x00000000002CF6BC string=0x00000000002CF6C0 "\t"
 *   insn=0x00000000002CF6C0 string=0x00000000002CF6C4 "?"
 *   insn=0x00000000002CF6C8 string=0x00000000002CF6CC ""
 *   insn=0x00000000002CF6CC string=0x00000000002CF6D0 "h"
 *   insn=0x00000000002CF6EC string=0x00000000002CF6F0 "("
 *   insn=0x00000000002CF6F4 string=0x00000000002CF6F8 "h"
 *   insn=0x00000000002CF700 string=0x00000000002CF704 "\t"
 *   insn=0x00000000002CF704 string=0x00000000002CF708 "?"
 *   insn=0x00000000002CF70C string=0x00000000002CF710 ""
 *   insn=0x00000000002CF710 string=0x00000000002CF714 "h"
 *   insn=0x00000000002CF730 string=0x00000000002CF734 "("
 *   insn=0x00000000002CF738 string=0x00000000002CF73C "h"
 *   insn=0x00000000002CF744 string=0x00000000002CF748 "\t"
 *   insn=0x00000000002CF748 string=0x00000000002CF74C "?"
 *   insn=0x00000000002CF750 string=0x00000000002CF754 ""
 *   insn=0x00000000002CF754 string=0x00000000002CF758 "h"
 *   insn=0x00000000002CF764 string=0x00000000002CF768 "!"
 *   insn=0x00000000002CF774 string=0x00000000002CF778 "@"
 *   insn=0x00000000002CF784 string=0x00000000002CF788 "("
 *   insn=0x00000000002CF78C string=0x00000000002CF790 "h"
 *   insn=0x00000000002CF794 string=0x00000000002CF798 "A"
 *   insn=0x00000000002CF798 string=0x00000000002CF79C "h.@"
 *   insn=0x00000000002CF79C string=0x00000000002CF7A0 ""
 *   insn=0x00000000002CF7B4 string=0x00000000002CF7B8 "F"
 *   insn=0x00000000002CF7B8 string=0x00000000002CF7BC " "
 *   insn=0x00000000002CF7B8 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002CF7D4 string=0x00000000002CF7D8 "A"
 *   insn=0x00000000002CF7F4 string=0x00000000002CF7F8 "`"
 *   insn=0x00000000002CF800 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Box::MergePartialFromCodedStream(
        Caver::Proto::Box *this,
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
  _BYTE *v16; // x8
  int v17; // w9
  _BYTE *v18; // x8
  int v19; // w9
  __int64 result; // x0
  unsigned int v21; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v22; // [xsp+8h] [xbp-28h]

  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
          goto LABEL_42;
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v21) & 1) == 0 )
          return 0;
        v9 = *((_DWORD *)this + 9);
        *((_DWORD *)this + 3) = v21;
        *((_DWORD *)this + 9) = v9 | 1;
        v10 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v10 >= *((_QWORD *)a2 + 2) || *v10 != 21 )
          continue;
        *((_QWORD *)a2 + 1) = v10 + 1;
        goto LABEL_20;
      case 2u:
        v8 = v6 & 7;
        if ( v8 != 5 )
          goto LABEL_42;
LABEL_20:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v21) & 1) == 0 )
          return 0;
        v11 = *((_DWORD *)this + 9);
        *((_DWORD *)this + 4) = v21;
        *((_DWORD *)this + 9) = v11 | 2;
        v12 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v12 >= *((_QWORD *)a2 + 2) || *v12 != 29 )
          continue;
        *((_QWORD *)a2 + 1) = v12 + 1;
LABEL_24:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v21) & 1) == 0 )
          return 0;
        v13 = *((_DWORD *)this + 9);
        *((_DWORD *)this + 5) = v21;
        *((_DWORD *)this + 9) = v13 | 4;
        v14 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v14 >= *((_QWORD *)a2 + 2) || *v14 != 37 )
          continue;
        *((_QWORD *)a2 + 1) = v14 + 1;
LABEL_28:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v21) & 1) == 0 )
          return 0;
        v15 = *((_DWORD *)this + 9);
        *((_DWORD *)this + 6) = v21;
        *((_DWORD *)this + 9) = v15 | 8;
        v16 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v16 >= *((_QWORD *)a2 + 2) || *v16 != 45 )
          continue;
        *((_QWORD *)a2 + 1) = v16 + 1;
LABEL_32:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v21) & 1) == 0 )
          return 0;
        v17 = *((_DWORD *)this + 9);
        *((_DWORD *)this + 7) = v21;
        *((_DWORD *)this + 9) = v17 | 0x10;
        v18 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v18 >= *((_QWORD *)a2 + 2) || *v18 != 53 )
          continue;
        *((_QWORD *)a2 + 1) = v18 + 1;
LABEL_37:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v21) & 1) == 0 )
          return 0;
        v19 = *((_DWORD *)this + 9);
        *((_DWORD *)this + 8) = v21;
        *((_DWORD *)this + 9) = v19 | 0x20;
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
          goto LABEL_42;
        goto LABEL_24;
      case 4u:
        v8 = v6 & 7;
        if ( v8 != 5 )
          goto LABEL_42;
        goto LABEL_28;
      case 5u:
        v8 = v6 & 7;
        if ( v8 != 5 )
          goto LABEL_42;
        goto LABEL_32;
      case 6u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_37;
        goto LABEL_42;
      default:
        v8 = v6 & 7;
LABEL_42:
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


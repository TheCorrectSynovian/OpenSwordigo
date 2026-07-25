/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000304454
 * Mangled: _ZN5Caver5Proto26KeyframeAnimationComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::KeyframeAnimationComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 106
 *   insn=0x0000000000304468 string=0x000000000030446C "U"
 *   insn=0x0000000000304470 string=0x0000000000304474 "\t"
 *   insn=0x000000000030447C string=0x0000000000304480 ")"
 *   insn=0x0000000000304480 string=0x0000000000304484 "6"
 *   insn=0x0000000000304490 string=0x0000000000304494 "8a"
 *   insn=0x0000000000304498 string=0x000000000030449C "h"
 *   insn=0x00000000003044A0 string=0x00000000003044A4 """
 *   insn=0x00000000003044A4 string=0x00000000003044A8 "\t"
 *   insn=0x00000000003044AC string=0x00000000003044B0 "!"
 *   insn=0x00000000003044B0 string=0x00000000003044B4 ""
 *   insn=0x00000000003044B4 string=0x00000000003044B8 "a""
 *   insn=0x00000000003044B8 string=0x00000000003044BC "h"
 *   insn=0x00000000003044C0 string=0x00000000003044DC "(|"
 *   insn=0x00000000003044C8 string=0x00000000003044CC "]"
 *   insn=0x00000000003044CC string=0x00000000001F7A40 "0'"
 *   insn=0x00000000003044D0 string=0x00000000003044D4 "a""
 *   insn=0x00000000003044DC string=0x00000000003044E0 ""
 *   insn=0x00000000003044E4 string=0x00000000003044E8 "("
 *   insn=0x00000000003044E8 string=0x00000000003045AC "("
 *   insn=0x00000000003044EC string=0x00000000003044F0 ""
 *   insn=0x00000000003044F4 string=0x00000000003044F8 "("
 *   insn=0x00000000003044F4 string=0x0000000000304528 "("
 *   insn=0x00000000003044F4 string=0x0000000000304558 "("
 *   insn=0x00000000003044F4 string=0x0000000000304588 "("
 *   insn=0x00000000003044F4 string=0x0000000000304598 "("
 *   insn=0x00000000003044FC string=0x0000000000304500 "i"
 *   insn=0x0000000000304500 string=0x0000000000304504 "?"
 *   insn=0x0000000000304508 string=0x000000000030450C "*"
 *   insn=0x0000000000304510 string=0x0000000000304514 "J"
 *   insn=0x0000000000304514 string=0x0000000000304518 ")"
 *   insn=0x000000000030451C string=0x0000000000304520 "i"
 *   insn=0x0000000000304520 string=0x0000000000304524 "/"
 *   insn=0x0000000000304528 string=0x000000000030452C "!"
 *   insn=0x000000000030452C string=0x0000000000304530 "j"
 *   insn=0x0000000000304530 string=0x0000000000304534 "_"
 *   insn=0x0000000000304534 string=0x0000000000304538 "B"
 *   insn=0x0000000000304538 string=0x000000000030453C "I"
 *   insn=0x000000000030453C string=0x0000000000304540 "\t"
 *   insn=0x0000000000304540 string=0x0000000000304544 ")"
 *   insn=0x0000000000304544 string=0x0000000000304548 "J"
 *   insn=0x000000000030454C string=0x0000000000304550 "j"
 *   insn=0x0000000000304550 string=0x0000000000304554 "q"
 *   insn=0x000000000030455C string=0x0000000000304560 "i"
 *   insn=0x0000000000304560 string=0x0000000000304564 "?"
 *   insn=0x0000000000304568 string=0x000000000030456C "*"
 *   insn=0x0000000000304570 string=0x0000000000304574 "J"
 *   insn=0x0000000000304574 string=0x0000000000304578 ")"
 *   insn=0x000000000030457C string=0x0000000000304580 "i"
 *   insn=0x0000000000304580 string=0x0000000000304584 "?"
 *   insn=0x0000000000304590 string=0x0000000000304594 "H"
 *   insn=0x00000000003045BC string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000003045C0 string=0x00000000003045C4 "e"
 *   insn=0x00000000003045D0 string=0x00000000003045D4 " "
 *   insn=0x00000000003045D0 string=0x00000000001F9050 "0'"
 *   insn=0x00000000003045D8 string=0x00000000003045DC "i"
 *   insn=0x00000000003045E4 string=0x00000000003045E8 "?"
 *   insn=0x00000000003045E8 string=0x00000000003045EC "j"
 *   insn=0x00000000003045F0 string=0x00000000003045F4 "B"
 *   insn=0x00000000003045F4 string=0x00000000003045F8 "("
 *   insn=0x0000000000304600 string=0x0000000000304604 "("
 *   insn=0x0000000000304604 string=0x0000000000304608 "h"
 *   insn=0x000000000030460C string=0x0000000000304610 "H"
 *   insn=0x0000000000304614 string=0x0000000000304618 "?"
 *   insn=0x0000000000304624 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000304628 string=0x000000000030462C "8"
 *   insn=0x0000000000304634 string=0x0000000000304638 "f"
 *   insn=0x0000000000304638 string=0x00000000001F97D0 "0'"
 *   insn=0x000000000030463C string=0x0000000000304640 "i"
 *   insn=0x0000000000304640 string=0x0000000000304644 "?"
 *   insn=0x0000000000304648 string=0x000000000030464C "*"
 *   insn=0x000000000030464C string=0x0000000000304650 "_a"
 *   insn=0x0000000000304650 string=0x0000000000304654 "A"
 *   insn=0x0000000000304654 string=0x0000000000304658 ")"
 *   insn=0x0000000000304658 string=0x000000000030465C "i"
 *   insn=0x000000000030465C string=0x0000000000304660 "?"
 *   insn=0x0000000000304660 string=0x0000000000304664 "C"
 *   insn=0x000000000030466C string=0x0000000000304670 "x"
 *   insn=0x0000000000304670 string=0x0000000000304674 " "
 *   insn=0x0000000000304678 string=0x000000000030467C "i"
 *   insn=0x0000000000304680 string=0x0000000000304684 "_"
 *   insn=0x000000000030468C string=0x0000000000304690 "j"
 *   insn=0x0000000000304690 string=0x0000000000304694 "?"
 *   insn=0x000000000030469C string=0x00000000003046A0 "("
 *   insn=0x00000000003046A8 string=0x00000000003046AC "("
 *   insn=0x00000000003046AC string=0x00000000003046B0 "h"
 *   insn=0x00000000003046B8 string=0x00000000003046BC "%"
 *   insn=0x00000000003046BC string=0x00000000001FA750 "0'"
 *   insn=0x00000000003046CC string=0x00000000003046D0 "("
 *   insn=0x00000000003046D4 string=0x00000000003046D8 "i"
 *   insn=0x00000000003046D8 string=0x00000000003046DC "?"
 *   insn=0x00000000003046E0 string=0x00000000003046E4 "*"
 *   insn=0x00000000003046E4 string=0x00000000003046E8 "_"
 *   insn=0x00000000003046EC string=0x00000000003046F0 "*"
 *   insn=0x00000000003046F0 string=0x00000000003046F4 "j"
 *   insn=0x00000000003046F4 string=0x00000000003046F8 "_"
 *   insn=0x0000000000304704 string=0x0000000000304708 "R"
 *   insn=0x0000000000304708 string=0x000000000030470C "`"
 *   insn=0x0000000000304710 string=0x0000000000304714 "j"
 *   insn=0x0000000000304718 string=0x000000000030471C "?"
 *   insn=0x0000000000304724 string=0x0000000000304728 "i"
 *   insn=0x0000000000304728 string=0x000000000030472C "_"
 *   insn=0x0000000000304730 string=0x0000000000304734 "A"
 *   insn=0x0000000000304734 string=0x0000000000304738 "h.@"
 *   insn=0x0000000000304738 string=0x000000000030473C ""
 *   insn=0x0000000000304744 string=0x0000000000304748 "`"
 *   insn=0x0000000000304784 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::KeyframeAnimationComponent::MergePartialFromCodedStream(
        Caver::Proto::KeyframeAnimationComponent *this,
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
  unsigned __int64 v13; // x8
  char *v14; // x10
  unsigned int v15; // w9
  unsigned __int8 *v16; // x10
  unsigned __int64 v17; // x8
  char *v18; // x9
  unsigned int v19; // w10
  _BYTE *v20; // x9
  int v21; // w10
  int v22; // w11
  __int64 *v23; // x1
  _QWORD *v24; // x0
  _BYTE *v25; // x9
  int v26; // w11
  int v27; // w9
  _BYTE *v28; // x9
  int v29; // w11
  __int64 result; // x0
  unsigned int v31; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v32; // [xsp+8h] [xbp-38h]

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
          goto LABEL_25;
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
        v22 = *((_DWORD *)this + 8);
        *((_DWORD *)this + 3) = v11;
        v21 = v22 | 1;
        *((_DWORD *)this + 8) = v22 | 1;
        if ( (unsigned __int64)v12 >= v9 || *v12 != 18 )
          continue;
        *((_QWORD *)a2 + 1) = v12 + 1;
        goto LABEL_33;
      case 2u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_25;
        v21 = *((_DWORD *)this + 8);
LABEL_33:
        v23 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 8) = v21 | 2;
        if ( v23 == &Caver::Proto::KeyframeAnimationComponent::_default_name_ )
        {
          v24 = (_QWORD *)operator new(8u);
          *v24 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v24;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v25 = (_BYTE *)*((_QWORD *)a2 + 1);
        v17 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v25 >= v17 || *v25 != 24 )
          continue;
        v18 = v25 + 1;
        *((_QWORD *)a2 + 1) = v18;
        if ( (unsigned __int64)v18 >= v17 )
          goto LABEL_39;
LABEL_18:
        if ( *v18 < 0 )
        {
LABEL_39:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v31) & 1) == 0 )
            return 0;
          v19 = v31;
          v20 = (_BYTE *)*((_QWORD *)a2 + 1);
          v17 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v19 = (unsigned __int8)*v18;
          v20 = v18 + 1;
          v31 = v19;
          *((_QWORD *)a2 + 1) = v20;
        }
        v26 = *((_DWORD *)this + 8);
        *((_BYTE *)this + 24) = v19 != 0;
        *((_DWORD *)this + 8) = v26 | 4;
        if ( (unsigned __int64)v20 >= v17 || *v20 != 37 )
          continue;
        *((_QWORD *)a2 + 1) = v20 + 1;
LABEL_44:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v31) & 1) == 0 )
          return 0;
        v27 = *((_DWORD *)this + 8);
        *((_DWORD *)this + 7) = v31;
        *((_DWORD *)this + 8) = v27 | 0x10;
        v28 = (_BYTE *)*((_QWORD *)a2 + 1);
        v13 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v28 >= v13 || *v28 != 40 )
          continue;
        v14 = v28 + 1;
        *((_QWORD *)a2 + 1) = v28 + 1;
        if ( (unsigned __int64)(v28 + 1) >= v13 )
          goto LABEL_48;
LABEL_14:
        if ( (*v14 & 0x80000000) == 0 )
        {
          v15 = (unsigned __int8)*v14;
          v16 = (unsigned __int8 *)(v14 + 1);
          v31 = v15;
          *((_QWORD *)a2 + 1) = v16;
          goto LABEL_50;
        }
LABEL_48:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v31) & 1) != 0 )
        {
          v15 = v31;
          v16 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
          v13 = *((_QWORD *)a2 + 2);
LABEL_50:
          v29 = *((_DWORD *)this + 8);
          *((_BYTE *)this + 25) = v15 != 0;
          *((_DWORD *)this + 8) = v29 | 8;
          if ( v16 == (unsigned __int8 *)v13 && *((_DWORD *)a2 + 11) )
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
        v18 = (char *)*((_QWORD *)a2 + 1);
        v17 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v18 < v17 )
          goto LABEL_18;
        goto LABEL_39;
      case 4u:
        v8 = v6 & 7;
        if ( v8 == 5 )
          goto LABEL_44;
        goto LABEL_25;
      case 5u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_25;
        v14 = (char *)*((_QWORD *)a2 + 1);
        v13 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v14 < v13 )
          goto LABEL_14;
        goto LABEL_48;
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


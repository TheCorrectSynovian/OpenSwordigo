/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030A3DC
 * Mangled: _ZN5Caver5Proto18WaterMeshComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::WaterMeshComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000002028F0  Caver::Proto::FloatColor::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x000000000030A79C  Caver::Proto::WaterMeshComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 111
 *   insn=0x000000000030A3F0 string=0x000000000030A3F4 "W"
 *   insn=0x000000000030A40C string=0x000000000030A410 "h"
 *   insn=0x000000000030A414 string=0x000000000030A418 """
 *   insn=0x000000000030A418 string=0x000000000030A41C "\t"
 *   insn=0x000000000030A420 string=0x000000000030A424 "!"
 *   insn=0x000000000030A424 string=0x000000000030A428 ""
 *   insn=0x000000000030A428 string=0x000000000030A42C "a""
 *   insn=0x000000000030A42C string=0x000000000030A430 "h"
 *   insn=0x000000000030A434 string=0x000000000030A450 "(|"
 *   insn=0x000000000030A440 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000030A444 string=0x000000000030A448 "a""
 *   insn=0x000000000030A448 string=0x000000000030A44C "A"
 *   insn=0x000000000030A450 string=0x000000000030A454 ""
 *   insn=0x000000000030A45C string=0x000000000030A460 "{"
 *   insn=0x000000000030A45C string=0x000000000030A4F0 "("
 *   insn=0x000000000030A460 string=0x000000000030A464 ""
 *   insn=0x000000000030A468 string=0x000000000030A46C "("
 *   insn=0x000000000030A468 string=0x000000000030A49C "("
 *   insn=0x000000000030A468 string=0x000000000030A4B0 "("
 *   insn=0x000000000030A468 string=0x000000000030A4C0 "("
 *   insn=0x000000000030A46C string=0x000000000030A470 "!"
 *   insn=0x000000000030A470 string=0x000000000030A474 "i"
 *   insn=0x000000000030A474 string=0x000000000030A478 "?"
 *   insn=0x000000000030A47C string=0x000000000030A480 "*"
 *   insn=0x000000000030A480 string=0x000000000030A484 "J"
 *   insn=0x000000000030A484 string=0x000000000030A488 "J"
 *   insn=0x000000000030A488 string=0x000000000030A48C ")"
 *   insn=0x000000000030A490 string=0x000000000030A494 "i"
 *   insn=0x000000000030A494 string=0x000000000030A498 "#"
 *   insn=0x000000000030A4A8 string=0x000000000030A4AC "<"
 *   insn=0x000000000030A4B8 string=0x000000000030A4BC "m"
 *   insn=0x000000000030A4C4 string=0x000000000030A4C8 "i"
 *   insn=0x000000000030A4C8 string=0x000000000030A4CC "?"
 *   insn=0x000000000030A4CC string=0x000000000030A4D0 "B"
 *   insn=0x000000000030A4D0 string=0x000000000030A4D4 "*"
 *   insn=0x000000000030A4D4 string=0x000000000030A4D8 "\n"
 *   insn=0x000000000030A4D8 string=0x000000000030A4DC "J"
 *   insn=0x000000000030A4DC string=0x000000000030A4E0 ")"
 *   insn=0x000000000030A4E4 string=0x000000000030A4E8 "i"
 *   insn=0x000000000030A4E8 string=0x000000000030A4EC "!"
 *   insn=0x000000000030A500 string=0x000000000030A504 "`"
 *   insn=0x000000000030A500 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000030A514 string=0x00000000001F9050 "0'"
 *   insn=0x000000000030A51C string=0x000000000030A520 "i"
 *   insn=0x000000000030A528 string=0x000000000030A52C "?"
 *   insn=0x000000000030A52C string=0x000000000030A530 "j"
 *   insn=0x000000000030A538 string=0x000000000030A53C "*"
 *   insn=0x000000000030A53C string=0x000000000030A540 "_A"
 *   insn=0x000000000030A540 string=0x000000000030A544 "a"
 *   insn=0x000000000030A544 string=0x000000000030A548 ")"
 *   insn=0x000000000030A548 string=0x000000000030A54C "i"
 *   insn=0x000000000030A54C string=0x000000000030A550 "?"
 *   insn=0x000000000030A560 string=0x000000000030A564 "@"
 *   insn=0x000000000030A568 string=0x000000000030A56C "i"
 *   insn=0x000000000030A574 string=0x000000000030A578 "?"
 *   insn=0x000000000030A578 string=0x000000000030A57C "j"
 *   insn=0x000000000030A580 string=0x000000000030A584 "b"
 *   insn=0x000000000030A584 string=0x000000000030A588 "("
 *   insn=0x000000000030A590 string=0x000000000030A594 "("
 *   insn=0x000000000030A594 string=0x000000000030A598 "h"
 *   insn=0x000000000030A59C string=0x000000000030A5A0 "H"
 *   insn=0x000000000030A5A8 string=0x000000000030A5C0 "h"
 *   insn=0x000000000030A5B0 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030A5B4 string=0x000000000030A5B8 "Z"
 *   insn=0x000000000030A5B8 string=0x00000000001F3F20 "P'"
 *   insn=0x000000000030A5C8 string=0x000000000030A5CC "\t"
 *   insn=0x000000000030A5D0 string=0x000000000030A5D4 ")"
 *   insn=0x000000000030A5D4 string=0x000000000030A5D8 ""
 *   insn=0x000000000030A5DC string=0x000000000030A5E0 "h"
 *   insn=0x000000000030A5E4 string=0x000000000030A5F8 "h&G)\n"
 *   insn=0x000000000030A5F8 string=0x000000000030A5FC "\n"
 *   insn=0x000000000030A600 string=0x000000000030A604 "j:"
 *   insn=0x000000000030A604 string=0x000000000030A608 "*\n"
 *   insn=0x000000000030A624 string=0x000000000030A628 " \t"
 *   insn=0x000000000030A628 string=0x000000000030A62C "h"
 *   insn=0x000000000030A63C string=0x000000000030A640 "h:@"
 *   insn=0x000000000030A640 string=0x000000000030A644 ""
 *   insn=0x000000000030A644 string=0x000000000030A648 "K"
 *   insn=0x000000000030A648 string=0x000000000030A64C "h:"
 *   insn=0x000000000030A648 string=0x000000000030A650 "h"
 *   insn=0x000000000030A658 string=0x000000000030A65C "\t"
 *   insn=0x000000000030A65C string=0x000000000030A660 "?"
 *   insn=0x000000000030A660 string=0x000000000030A664 "a"
 *   insn=0x000000000030A664 string=0x000000000030A668 ""
 *   insn=0x000000000030A668 string=0x000000000030A66C "h"
 *   insn=0x000000000030A674 string=0x000000000030A678 ""
 *   insn=0x000000000030A680 string=0x000000000030A698 "h"
 *   insn=0x000000000030A68C string=0x000000000030A690 "$"
 *   insn=0x000000000030A6A0 string=0x000000000030A6A4 "\t"
 *   insn=0x000000000030A6A8 string=0x000000000030A6AC ")"
 *   insn=0x000000000030A6AC string=0x000000000030A6B0 ""
 *   insn=0x000000000030A6B4 string=0x000000000030A6B8 "h"
 *   insn=0x000000000030A6BC string=0x000000000030A6D0 "h&G)\n"
 *   insn=0x000000000030A6C4 string=0x000000000030A6C8 "b"
 *   insn=0x000000000030A6D0 string=0x000000000030A6D4 "\n"
 *   insn=0x000000000030A6D8 string=0x000000000030A6DC "j:"
 *   insn=0x000000000030A6DC string=0x000000000030A6E0 "j"
 *   insn=0x000000000030A6F8 string=0x000000000030A6FC "}"
 *   insn=0x000000000030A6FC string=0x000000000030A700 "`"
 *   insn=0x000000000030A700 string=0x000000000030A704 "h"
 *   insn=0x000000000030A704 string=0x000000000030A708 "("
 *   insn=0x000000000030A714 string=0x000000000030A718 "h:@"
 *   insn=0x000000000030A718 string=0x000000000030A71C ""
 *   insn=0x000000000030A71C string=0x000000000030A720 "K"
 *   insn=0x000000000030A720 string=0x000000000030A724 "h:"
 *   insn=0x000000000030A720 string=0x000000000030A728 "h"
 *   insn=0x000000000030A730 string=0x000000000030A734 "h.@"
 *   insn=0x000000000030A740 string=0x000000000030A744 "`"
 *   insn=0x000000000030A780 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000030A790 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000030A794 string=0x000000000030A798 "K"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WaterMeshComponent::MergePartialFromCodedStream(
        Caver::Proto::WaterMeshComponent *this,
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
  int v13; // w10
  char *v14; // x9
  unsigned int v15; // w10
  _BYTE *v16; // x9
  int v17; // w11
  int v18; // w11
  Caver::Proto::FloatColor *v19; // x21
  char *v20; // x8
  int v21; // w8
  int v22; // w9
  int v23; // w22
  int v24; // w8
  bool v25; // vf
  int v26; // w8
  _BYTE *v27; // x8
  Caver::Proto::FloatColor *v28; // x21
  char *v29; // x8
  int v30; // w8
  int v31; // w9
  int v32; // w22
  int v33; // w8
  int v34; // w8
  __int64 result; // x0
  unsigned int v36; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v37; // [xsp+8h] [xbp-38h]

  v37 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
        if ( (v6 & 7) != 0 )
          goto LABEL_21;
        v10 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v10 >= v9 || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v36) & 1) == 0 )
            return 0;
          v11 = v36;
          v12 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v11 = (unsigned __int8)*v10;
          v12 = v10 + 1;
          v36 = v11;
          *((_QWORD *)a2 + 1) = v12;
        }
        v17 = *((_DWORD *)this + 10);
        *((_DWORD *)this + 3) = v11;
        *((_DWORD *)this + 10) = v17 | 1;
        if ( (unsigned __int64)v12 >= v9 || *v12 != 16 )
          continue;
        v14 = v12 + 1;
        *((_QWORD *)a2 + 1) = v14;
        if ( (unsigned __int64)v14 < v9 )
          goto LABEL_18;
        goto LABEL_29;
      case 2u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_21;
        v14 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v14 >= v9 )
          goto LABEL_29;
LABEL_18:
        if ( *v14 < 0 )
        {
LABEL_29:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v36) & 1) == 0 )
            return 0;
          v15 = v36;
          v16 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v15 = (unsigned __int8)*v14;
          v16 = v14 + 1;
          v36 = v15;
          *((_QWORD *)a2 + 1) = v16;
        }
        v18 = *((_DWORD *)this + 10);
        *((_DWORD *)this + 4) = v15;
        v13 = v18 | 2;
        *((_DWORD *)this + 10) = v18 | 2;
        if ( (unsigned __int64)v16 >= v9 || *v16 != 26 )
          continue;
        *((_QWORD *)a2 + 1) = v16 + 1;
LABEL_34:
        v19 = (Caver::Proto::FloatColor *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 10) = v13 | 4;
        if ( !v19 )
        {
          v19 = (Caver::Proto::FloatColor *)operator new(0x20u);
          Caver::Proto::FloatColor::FloatColor(v19);
          *((_QWORD *)this + 3) = v19;
        }
        v20 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v20 >= *((_QWORD *)a2 + 2) || *v20 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v36) & 1) == 0 )
            return 0;
        }
        else
        {
          v36 = (unsigned __int8)*v20;
          *((_QWORD *)a2 + 1) = v20 + 1;
        }
        v21 = *((_DWORD *)a2 + 14);
        v22 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v21 + 1;
        if ( v21 >= v22 )
          return 0;
        v23 = google::protobuf::io::CodedInputStream::PushLimit(a2, v36);
        if ( (Caver::Proto::FloatColor::MergePartialFromCodedStream(v19, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v23);
        v24 = *((_DWORD *)a2 + 14);
        v25 = __OFSUB__(v24, 1);
        v26 = v24 - 1;
        if ( v26 < 0 == v25 )
          *((_DWORD *)a2 + 14) = v26;
        v27 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v27 >= *((_QWORD *)a2 + 2) || *v27 != 34 )
          continue;
        *((_QWORD *)a2 + 1) = v27 + 1;
LABEL_48:
        v28 = (Caver::Proto::FloatColor *)*((_QWORD *)this + 4);
        *((_DWORD *)this + 10) |= 8u;
        if ( !v28 )
        {
          v28 = (Caver::Proto::FloatColor *)operator new(0x20u);
          Caver::Proto::FloatColor::FloatColor(v28);
          *((_QWORD *)this + 4) = v28;
        }
        v29 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v29 >= *((_QWORD *)a2 + 2) || *v29 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v36) & 1) == 0 )
            return 0;
        }
        else
        {
          v36 = (unsigned __int8)*v29;
          *((_QWORD *)a2 + 1) = v29 + 1;
        }
        v30 = *((_DWORD *)a2 + 14);
        v31 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v30 + 1;
        if ( v30 >= v31 )
          return 0;
        v32 = google::protobuf::io::CodedInputStream::PushLimit(a2, v36);
        if ( (Caver::Proto::FloatColor::MergePartialFromCodedStream(v28, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v32);
        v33 = *((_DWORD *)a2 + 14);
        v25 = __OFSUB__(v33, 1);
        v34 = v33 - 1;
        if ( v34 < 0 == v25 )
          *((_DWORD *)a2 + 14) = v34;
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
        if ( v8 != 2 )
          goto LABEL_21;
        v13 = *((_DWORD *)this + 10);
        goto LABEL_34;
      case 4u:
        v8 = v6 & 7;
        if ( v8 == 2 )
          goto LABEL_48;
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


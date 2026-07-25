/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032FA94
 * Mangled: _ZN5Caver5Proto31ItemDropComponent_ItemDropEntry27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::ItemDropComponent_ItemDropEntry::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x0000000000201C50  Caver::Proto::ItemDropComponent_ItemDropEntry::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
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
 * Referenced strings: 93
 *   insn=0x000000000032FAAC string=0x000000000032FAB0 "U"
 *   insn=0x000000000032FACC string=0x000000000032FAD0 "Z"
 *   insn=0x000000000032FAD4 string=0x000000000058B90C "8B"
 *   insn=0x000000000032FAE4 string=0x000000000032FAE8 "h"
 *   insn=0x000000000032FAEC string=0x000000000032FAF0 """
 *   insn=0x000000000032FAF0 string=0x000000000032FAF4 "\t"
 *   insn=0x000000000032FAF8 string=0x000000000032FAFC "!"
 *   insn=0x000000000032FAFC string=0x000000000032FB00 ""
 *   insn=0x000000000032FB00 string=0x000000000032FB04 "a""
 *   insn=0x000000000032FB04 string=0x000000000032FB08 "h"
 *   insn=0x000000000032FB0C string=0x000000000032FB28 "(|"
 *   insn=0x000000000032FB18 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000032FB1C string=0x000000000032FB20 "a""
 *   insn=0x000000000032FB28 string=0x000000000032FB2C ""
 *   insn=0x000000000032FB30 string=0x000000000032FB34 "("
 *   insn=0x000000000032FB34 string=0x000000000032FD58 "("
 *   insn=0x000000000032FB38 string=0x000000000032FB3C ""
 *   insn=0x000000000032FB40 string=0x000000000032FB44 "("
 *   insn=0x000000000032FB40 string=0x000000000032FBAC "("
 *   insn=0x000000000032FB40 string=0x000000000032FBDC "("
 *   insn=0x000000000032FB40 string=0x000000000032FBEC "("
 *   insn=0x000000000032FB40 string=0x000000000032FC1C "("
 *   insn=0x000000000032FB54 string=0x000000000032FB58 ""
 *   insn=0x000000000032FB58 string=0x000000000032FB5C "?"
 *   insn=0x000000000032FB6C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032FB70 string=0x000000000032FB74 "9"
 *   insn=0x000000000032FB80 string=0x000000000032FB84 "`"
 *   insn=0x000000000032FB80 string=0x00000000001F97D0 "0'"
 *   insn=0x000000000032FB84 string=0x000000000032FB88 "h"
 *   insn=0x000000000032FB90 string=0x000000000032FB94 "\t"
 *   insn=0x000000000032FB94 string=0x000000000032FB98 "?I"
 *   insn=0x000000000032FB98 string=0x000000000032FB9C "a"
 *   insn=0x000000000032FB9C string=0x000000000032FBA0 ""
 *   insn=0x000000000032FBA0 string=0x000000000032FBA4 "h"
 *   insn=0x000000000032FBA4 string=0x000000000032FBA8 " "
 *   insn=0x000000000032FBAC string=0x000000000032FBB0 "a"
 *   insn=0x000000000032FBB0 string=0x000000000032FBB4 "i"
 *   insn=0x000000000032FBB4 string=0x000000000032FBB8 "?"
 *   insn=0x000000000032FBBC string=0x000000000032FBC0 "*"
 *   insn=0x000000000032FBC4 string=0x000000000032FBC8 "J"
 *   insn=0x000000000032FBC8 string=0x000000000032FBCC ")"
 *   insn=0x000000000032FBD0 string=0x000000000032FBD4 "i"
 *   insn=0x000000000032FBD4 string=0x000000000032FBD8 "W"
 *   insn=0x000000000032FBE4 string=0x000000000032FBE8 "]"
 *   insn=0x000000000032FBEC string=0x000000000032FBF0 "a"
 *   insn=0x000000000032FBF0 string=0x000000000032FBF4 "i"
 *   insn=0x000000000032FBF4 string=0x000000000032FBF8 "?"
 *   insn=0x000000000032FBFC string=0x000000000032FC00 "*"
 *   insn=0x000000000032FC00 string=0x000000000032FC04 "j"
 *   insn=0x000000000032FC04 string=0x000000000032FC08 "J"
 *   insn=0x000000000032FC08 string=0x000000000032FC0C ")"
 *   insn=0x000000000032FC10 string=0x000000000032FC14 "i"
 *   insn=0x000000000032FC14 string=0x000000000032FC18 "4"
 *   insn=0x000000000032FC2C string=0x000000000032FC30 ""
 *   insn=0x000000000032FC30 string=0x000000000032FC34 "?"
 *   insn=0x000000000032FC40 string=0x000000000032FC44 "g"
 *   insn=0x000000000032FC48 string=0x000000000032FC4C "c"
 *   insn=0x000000000032FC4C string=0x000000000032FC50 "("
 *   insn=0x000000000032FC60 string=0x000000000032FC64 "h"
 *   insn=0x000000000032FC6C string=0x000000000032FC70 "\t"
 *   insn=0x000000000032FC70 string=0x000000000032FC74 "?u"
 *   insn=0x000000000032FC78 string=0x000000000032FC7C ""
 *   insn=0x000000000032FC7C string=0x000000000032FC80 "h"
 *   insn=0x000000000032FC8C string=0x00000000001FA750 "0'"
 *   insn=0x000000000032FC9C string=0x000000000032FCA0 "("
 *   insn=0x000000000032FCA4 string=0x000000000032FCA8 "i"
 *   insn=0x000000000032FCA8 string=0x000000000032FCAC "?"
 *   insn=0x000000000032FCB0 string=0x000000000032FCB4 "*"
 *   insn=0x000000000032FCB4 string=0x000000000032FCB8 "_"
 *   insn=0x000000000032FCB8 string=0x000000000032FCBC "a"
 *   insn=0x000000000032FCBC string=0x000000000032FCC0 ")"
 *   insn=0x000000000032FCC0 string=0x000000000032FCC4 "i"
 *   insn=0x000000000032FCC4 string=0x000000000032FCC8 "?"
 *   insn=0x000000000032FCD8 string=0x00000000001F9050 "0'"
 *   insn=0x000000000032FCE0 string=0x000000000032FCE4 "i"
 *   insn=0x000000000032FCEC string=0x000000000032FCF0 "?"
 *   insn=0x000000000032FCF0 string=0x000000000032FCF4 "j"
 *   insn=0x000000000032FCF8 string=0x000000000032FCFC "b"
 *   insn=0x000000000032FCFC string=0x000000000032FD00 "*"
 *   insn=0x000000000032FD00 string=0x000000000032FD04 "_"
 *   insn=0x000000000032FD08 string=0x000000000032FD0C ")"
 *   insn=0x000000000032FD0C string=0x000000000032FD10 "i"
 *   insn=0x000000000032FD10 string=0x000000000032FD14 "?"
 *   insn=0x000000000032FD14 string=0x000000000032FD18 "C"
 *   insn=0x000000000032FD24 string=0x000000000032FD28 "@"
 *   insn=0x000000000032FD2C string=0x000000000032FD30 "i"
 *   insn=0x000000000032FD38 string=0x000000000032FD3C "?"
 *   insn=0x000000000032FD3C string=0x000000000032FD40 "j"
 *   insn=0x000000000032FD48 string=0x000000000032FD4C "h.@"
 *   insn=0x000000000032FD68 string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000032FD88 string=0x000000000032FDB8 "F"
 *   insn=0x000000000032FDAC string=0x000000000032FDB0 "`"
 *   insn=0x000000000032FDB8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ItemDropComponent_ItemDropEntry::MergePartialFromCodedStream(
        Caver::Proto::ItemDropComponent_ItemDropEntry *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  __int64 *v9; // x1
  _QWORD *v10; // x0
  _BYTE *v11; // x8
  unsigned __int64 v12; // x8
  char *v13; // x9
  unsigned int v14; // w10
  unsigned __int8 *v15; // x9
  char *v16; // x9
  unsigned int v17; // w10
  _BYTE *v18; // x9
  __int64 *v19; // x1
  _QWORD *v20; // x0
  _BYTE *v21; // x8
  int v22; // w9
  _BYTE *v23; // x9
  int v24; // w11
  int v25; // w11
  __int64 result; // x0
  unsigned int v27; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v28; // [xsp+8h] [xbp-48h]

  v28 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
        if ( v8 != 2 )
          goto LABEL_47;
        v9 = (__int64 *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 11) |= 1u;
        if ( v9 == &Caver::Proto::ItemDropComponent_ItemDropEntry::_default_template_name_ )
        {
          v10 = (_QWORD *)operator new(8u);
          *v10 = &byte_6FD2F8;
          *((_QWORD *)this + 2) = v10;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v11 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v11 >= *((_QWORD *)a2 + 2) || *v11 != 18 )
          continue;
        *((_QWORD *)a2 + 1) = v11 + 1;
        goto LABEL_26;
      case 2u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_47;
LABEL_26:
        v19 = (__int64 *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 11) |= 2u;
        if ( v19 == &Caver::Proto::ItemDropComponent_ItemDropEntry::_default_item_identifier_ )
        {
          v20 = (_QWORD *)operator new(8u);
          *v20 = &byte_6FD2F8;
          *((_QWORD *)this + 3) = v20;
        }
        if ( (google::protobuf::internal::WireFormatLite::ReadString(a2) & 1) == 0 )
          return 0;
        v21 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v21 >= *((_QWORD *)a2 + 2) || *v21 != 29 )
          continue;
        *((_QWORD *)a2 + 1) = v21 + 1;
LABEL_32:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v27) & 1) == 0 )
          return 0;
        v22 = *((_DWORD *)this + 11);
        *((_DWORD *)this + 8) = v27;
        *((_DWORD *)this + 11) = v22 | 4;
        v23 = (_BYTE *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v23 >= v12 || *v23 != 32 )
          continue;
        v16 = v23 + 1;
        *((_QWORD *)a2 + 1) = v16;
        if ( (unsigned __int64)v16 >= v12 )
          goto LABEL_36;
LABEL_23:
        if ( *v16 < 0 )
        {
LABEL_36:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v27) & 1) == 0 )
            return 0;
          v17 = v27;
          v18 = (_BYTE *)*((_QWORD *)a2 + 1);
          v12 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v17 = (unsigned __int8)*v16;
          v18 = v16 + 1;
          v27 = v17;
          *((_QWORD *)a2 + 1) = v18;
        }
        v24 = *((_DWORD *)this + 11);
        *((_DWORD *)this + 9) = v17;
        *((_DWORD *)this + 11) = v24 | 8;
        if ( (unsigned __int64)v18 >= v12 || *v18 != 40 )
          continue;
        v13 = v18 + 1;
        *((_QWORD *)a2 + 1) = v13;
        if ( (unsigned __int64)v13 >= v12 )
          goto LABEL_41;
LABEL_17:
        if ( *v13 < 0 )
        {
LABEL_41:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v27) & 1) == 0 )
            return 0;
          v14 = v27;
          v15 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
          v12 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v14 = (unsigned __int8)*v13;
          v15 = (unsigned __int8 *)(v13 + 1);
          v27 = v14;
          *((_QWORD *)a2 + 1) = v15;
        }
        v25 = *((_DWORD *)this + 11);
        *((_DWORD *)this + 10) = v14;
        *((_DWORD *)this + 11) = v25 | 0x10;
        if ( v15 == (unsigned __int8 *)v12 && *((_DWORD *)a2 + 11) )
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
          goto LABEL_47;
        goto LABEL_32;
      case 4u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_47;
        v16 = (char *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v16 < v12 )
          goto LABEL_23;
        goto LABEL_36;
      case 5u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_47;
        v13 = (char *)*((_QWORD *)a2 + 1);
        v12 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v13 < v12 )
          goto LABEL_17;
        goto LABEL_41;
      default:
        v8 = v6 & 7;
LABEL_47:
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


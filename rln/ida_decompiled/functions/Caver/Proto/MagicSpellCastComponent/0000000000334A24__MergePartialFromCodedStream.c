/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000334A24
 * Mangled: _ZN5Caver5Proto23MagicSpellCastComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::MagicSpellCastComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 53
 *   insn=0x0000000000334A34 string=0x0000000000334A38 "U"
 *   insn=0x0000000000334A48 string=0x0000000000334A4C "h"
 *   insn=0x0000000000334A50 string=0x0000000000334A54 """
 *   insn=0x0000000000334A54 string=0x0000000000334A58 "\t"
 *   insn=0x0000000000334A5C string=0x0000000000334A60 "!"
 *   insn=0x0000000000334A60 string=0x0000000000334A64 ""
 *   insn=0x0000000000334A64 string=0x0000000000334A68 "a""
 *   insn=0x0000000000334A68 string=0x0000000000334A6C "h"
 *   insn=0x0000000000334A70 string=0x0000000000334A74 "O"
 *   insn=0x0000000000334A70 string=0x0000000000334A8C "(|"
 *   insn=0x0000000000334A7C string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000334A80 string=0x0000000000334A84 "a""
 *   insn=0x0000000000334A84 string=0x0000000000334A88 "A\t"
 *   insn=0x0000000000334A94 string=0x0000000000334AD0 "("
 *   insn=0x0000000000334A98 string=0x0000000000334A9C "!"
 *   insn=0x0000000000334A9C string=0x0000000000334AA0 "("
 *   insn=0x0000000000334A9C string=0x0000000000334B00 "("
 *   insn=0x0000000000334AA4 string=0x0000000000334AA8 "i"
 *   insn=0x0000000000334AA8 string=0x0000000000334AAC "?"
 *   insn=0x0000000000334AB0 string=0x0000000000334AB4 "*"
 *   insn=0x0000000000334AB8 string=0x0000000000334ABC "J"
 *   insn=0x0000000000334ABC string=0x0000000000334AC0 ")"
 *   insn=0x0000000000334AC4 string=0x0000000000334AC8 "i"
 *   insn=0x0000000000334AC8 string=0x0000000000334ACC "-"
 *   insn=0x0000000000334AD4 string=0x0000000000334AD8 "i"
 *   insn=0x0000000000334AD8 string=0x0000000000334ADC "?"
 *   insn=0x0000000000334AE0 string=0x0000000000334AE4 "*"
 *   insn=0x0000000000334AE8 string=0x0000000000334AEC "J"
 *   insn=0x0000000000334AEC string=0x0000000000334AF0 ")"
 *   insn=0x0000000000334AF4 string=0x0000000000334AF8 "i"
 *   insn=0x0000000000334B04 string=0x0000000000334B08 "@"
 *   insn=0x0000000000334B0C string=0x0000000000334B10 "p#"
 *   insn=0x0000000000334B10 string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000334B14 string=0x0000000000334B18 "("
 *   insn=0x0000000000334B20 string=0x0000000000334B24 "K"
 *   insn=0x0000000000334B24 string=0x00000000001F9050 "0'"
 *   insn=0x0000000000334B2C string=0x0000000000334B30 "i"
 *   insn=0x0000000000334B38 string=0x0000000000334B3C "?"
 *   insn=0x0000000000334B3C string=0x0000000000334B40 "j"
 *   insn=0x0000000000334B44 string=0x0000000000334B48 """
 *   insn=0x0000000000334B48 string=0x0000000000334B4C "*"
 *   insn=0x0000000000334B4C string=0x0000000000334B50 "_A"
 *   insn=0x0000000000334B54 string=0x0000000000334B58 ")"
 *   insn=0x0000000000334B58 string=0x0000000000334B5C "i"
 *   insn=0x0000000000334B5C string=0x0000000000334B60 "?"
 *   insn=0x0000000000334B6C string=0x0000000000334B70 "8"
 *   insn=0x0000000000334B70 string=0x0000000000334B74 " "
 *   insn=0x0000000000334B78 string=0x0000000000334B7C "i"
 *   insn=0x0000000000334B84 string=0x0000000000334B88 "?"
 *   insn=0x0000000000334B88 string=0x0000000000334B8C "j"
 *   insn=0x0000000000334B94 string=0x0000000000334B98 "h.@"
 *   insn=0x0000000000334BA4 string=0x0000000000334BA8 "`"
 *   insn=0x0000000000334BE0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicSpellCastComponent::MergePartialFromCodedStream(
        Caver::Proto::MagicSpellCastComponent *this,
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


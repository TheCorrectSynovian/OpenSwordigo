/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003358F0
 * Mangled: _ZN5Caver5Proto29ProjectileControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::ProjectileControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
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
 *   insn=0x0000000000335900 string=0x0000000000335904 "U"
 *   insn=0x0000000000335914 string=0x0000000000335918 "h"
 *   insn=0x000000000033591C string=0x0000000000335920 """
 *   insn=0x0000000000335920 string=0x0000000000335924 "\t"
 *   insn=0x0000000000335928 string=0x000000000033592C "!"
 *   insn=0x000000000033592C string=0x0000000000335930 ""
 *   insn=0x0000000000335930 string=0x0000000000335934 "a""
 *   insn=0x0000000000335934 string=0x0000000000335938 "h"
 *   insn=0x000000000033593C string=0x0000000000335940 "S"
 *   insn=0x000000000033593C string=0x0000000000335958 "(|"
 *   insn=0x0000000000335944 string=0x0000000000335948 ">"
 *   insn=0x0000000000335948 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000033594C string=0x0000000000335950 "a""
 *   insn=0x0000000000335960 string=0x000000000033599C "("
 *   insn=0x0000000000335964 string=0x0000000000335968 "!"
 *   insn=0x0000000000335968 string=0x000000000033596C "("
 *   insn=0x0000000000335968 string=0x00000000003359CC "("
 *   insn=0x0000000000335970 string=0x0000000000335974 "j"
 *   insn=0x0000000000335974 string=0x0000000000335978 "_"
 *   insn=0x000000000033597C string=0x0000000000335980 "I"
 *   insn=0x0000000000335984 string=0x0000000000335988 ")"
 *   insn=0x0000000000335988 string=0x000000000033598C "J"
 *   insn=0x0000000000335990 string=0x0000000000335994 "j"
 *   insn=0x0000000000335994 string=0x0000000000335998 "/"
 *   insn=0x00000000003359A0 string=0x00000000003359A4 "i"
 *   insn=0x00000000003359A4 string=0x00000000003359A8 "?"
 *   insn=0x00000000003359AC string=0x00000000003359B0 "*"
 *   insn=0x00000000003359B4 string=0x00000000003359B8 "J"
 *   insn=0x00000000003359B8 string=0x00000000003359BC ")"
 *   insn=0x00000000003359C0 string=0x00000000003359C4 "i"
 *   insn=0x00000000003359DC string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000003359E0 string=0x00000000003359E4 ","
 *   insn=0x00000000003359F0 string=0x00000000001F9050 "0'"
 *   insn=0x00000000003359F8 string=0x00000000003359FC "i"
 *   insn=0x0000000000335A00 string=0x0000000000335A04 "_"
 *   insn=0x0000000000335A0C string=0x0000000000335A10 "j"
 *   insn=0x0000000000335A10 string=0x0000000000335A14 "?"
 *   insn=0x0000000000335A1C string=0x0000000000335A20 "*"
 *   insn=0x0000000000335A20 string=0x0000000000335A24 "_A"
 *   insn=0x0000000000335A28 string=0x0000000000335A2C "*"
 *   insn=0x0000000000335A2C string=0x0000000000335A30 "j"
 *   insn=0x0000000000335A30 string=0x0000000000335A34 "_"
 *   insn=0x0000000000335A34 string=0x0000000000335A38 "C"
 *   insn=0x0000000000335A44 string=0x0000000000335A48 "`"
 *   insn=0x0000000000335A4C string=0x0000000000335A50 "j"
 *   insn=0x0000000000335A54 string=0x0000000000335A58 "?"
 *   insn=0x0000000000335A60 string=0x0000000000335A64 "i"
 *   insn=0x0000000000335A64 string=0x0000000000335A68 "_"
 *   insn=0x0000000000335A6C string=0x0000000000335A70 "A"
 *   insn=0x0000000000335A70 string=0x0000000000335A74 "h.@"
 *   insn=0x0000000000335A74 string=0x0000000000335A78 ""
 *   insn=0x0000000000335A80 string=0x0000000000335A84 "`"
 *   insn=0x0000000000335ABC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ProjectileControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::ProjectileControllerComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  unsigned __int64 v9; // x8
  char *v10; // x10
  unsigned int v11; // w9
  unsigned __int8 *v12; // x10
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
      v16 = *((_DWORD *)this + 4);
      *((_BYTE *)this + 12) = v14 != 0;
      *((_DWORD *)this + 4) = v16 | 1;
      if ( (unsigned __int64)v15 < v9 && *v15 == 16 )
      {
        v10 = v15 + 1;
        *((_QWORD *)a2 + 1) = v15 + 1;
        if ( (unsigned __int64)(v15 + 1) >= v9 )
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
        v17 = *((_DWORD *)this + 4);
        *((_BYTE *)this + 13) = v11 != 0;
        *((_DWORD *)this + 4) = v17 | 2;
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


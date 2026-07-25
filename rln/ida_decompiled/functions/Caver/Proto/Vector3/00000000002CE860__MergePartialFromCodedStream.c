/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE860
 * Mangled: _ZN5Caver5Proto7Vector327MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Vector3::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F6150  Caver::Proto::Vector3::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 49
 *   insn=0x00000000002CE870 string=0x00000000002CE874 "U"
 *   insn=0x00000000002CE884 string=0x00000000002CE888 "h"
 *   insn=0x00000000002CE88C string=0x00000000002CE890 """
 *   insn=0x00000000002CE890 string=0x00000000002CE894 "\t"
 *   insn=0x00000000002CE898 string=0x00000000002CE89C "!"
 *   insn=0x00000000002CE89C string=0x00000000002CE8A0 ""
 *   insn=0x00000000002CE8A0 string=0x00000000002CE8A4 "a""
 *   insn=0x00000000002CE8A4 string=0x00000000002CE8A8 "h"
 *   insn=0x00000000002CE8AC string=0x00000000002CE8B0 "Q"
 *   insn=0x00000000002CE8AC string=0x00000000002CE8C8 "(|"
 *   insn=0x00000000002CE8B4 string=0x00000000002CE8B8 "b"
 *   insn=0x00000000002CE8B8 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002CE8BC string=0x00000000002CE8C0 "a""
 *   insn=0x00000000002CE8D0 string=0x00000000002CE904 "("
 *   insn=0x00000000002CE8D8 string=0x00000000002CE8F4 "("
 *   insn=0x00000000002CE8E0 string=0x00000000002CE8E4 "("
 *   insn=0x00000000002CE8E0 string=0x00000000002CE9D4 "("
 *   insn=0x00000000002CE8E8 string=0x00000000002CE8EC "`"
 *   insn=0x00000000002CE8EC string=0x00000000002CE8F0 ":"
 *   insn=0x00000000002CE8FC string=0x00000000002CE900 "6"
 *   insn=0x00000000002CE908 string=0x00000000002CE90C "a"
 *   insn=0x00000000002CE918 string=0x00000000001FA750 "0'"
 *   insn=0x00000000002CE928 string=0x00000000002CE92C "("
 *   insn=0x00000000002CE930 string=0x00000000002CE934 "h"
 *   insn=0x00000000002CE938 string=0x00000000002CE93C "b"
 *   insn=0x00000000002CE93C string=0x00000000002CE940 "\t"
 *   insn=0x00000000002CE940 string=0x00000000002CE944 "?U"
 *   insn=0x00000000002CE948 string=0x00000000002CE94C ""
 *   insn=0x00000000002CE94C string=0x00000000002CE950 "h"
 *   insn=0x00000000002CE958 string=0x00000000002CE95C "}"
 *   insn=0x00000000002CE95C string=0x00000000002CE960 "`"
 *   insn=0x00000000002CE96C string=0x00000000002CE970 "("
 *   insn=0x00000000002CE974 string=0x00000000002CE978 "h"
 *   insn=0x00000000002CE97C string=0x00000000002CE980 "B"
 *   insn=0x00000000002CE980 string=0x00000000002CE984 "\t"
 *   insn=0x00000000002CE984 string=0x00000000002CE988 "?u"
 *   insn=0x00000000002CE98C string=0x00000000002CE990 ""
 *   insn=0x00000000002CE990 string=0x00000000002CE994 "h"
 *   insn=0x00000000002CE99C string=0x00000000002CE9A0 "l"
 *   insn=0x00000000002CE9A0 string=0x00000000002CE9A4 "@"
 *   insn=0x00000000002CE9B0 string=0x00000000002CE9B4 "("
 *   insn=0x00000000002CE9B8 string=0x00000000002CE9BC "h"
 *   insn=0x00000000002CE9C0 string=0x00000000002CE9C4 "!"
 *   insn=0x00000000002CE9C4 string=0x00000000002CE9C8 "h.@"
 *   insn=0x00000000002CE9E4 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002CEA00 string=0x00000000002CEA04 "A"
 *   insn=0x00000000002CEA04 string=0x00000000002CEA2C ")"
 *   insn=0x00000000002CEA20 string=0x00000000002CEA24 "`"
 *   insn=0x00000000002CEA2C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Vector3::MergePartialFromCodedStream(
        Caver::Proto::Vector3 *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  unsigned int v8; // w8
  int v9; // w8
  int v10; // w9
  _BYTE *v11; // x8
  int v12; // w9
  _BYTE *v13; // x8
  int v14; // w9
  __int64 result; // x0
  unsigned int v16; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v17; // [xsp+8h] [xbp-28h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
    while ( 1 )
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
        v8 = (unsigned int)v6 >> 3;
        if ( (unsigned int)v6 >> 3 != 1 )
          break;
        v9 = v6 & 7;
        if ( v9 != 5 )
          goto LABEL_28;
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v16) & 1) == 0 )
          return 0;
        v10 = *((_DWORD *)this + 6);
        *((_DWORD *)this + 3) = v16;
        *((_DWORD *)this + 6) = v10 | 1;
        v11 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v11 < *((_QWORD *)a2 + 2) && *v11 == 21 )
        {
          *((_QWORD *)a2 + 1) = v11 + 1;
LABEL_19:
          if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v16) & 1) == 0 )
            return 0;
          v12 = *((_DWORD *)this + 6);
          *((_DWORD *)this + 4) = v16;
          *((_DWORD *)this + 6) = v12 | 2;
          v13 = (_BYTE *)*((_QWORD *)a2 + 1);
          if ( (unsigned __int64)v13 < *((_QWORD *)a2 + 2) && *v13 == 29 )
          {
            *((_QWORD *)a2 + 1) = v13 + 1;
            goto LABEL_23;
          }
        }
      }
      if ( v8 == 2 )
      {
        v9 = v6 & 7;
        if ( v9 != 5 )
          break;
        goto LABEL_19;
      }
      if ( v8 != 3 )
      {
        v9 = v6 & 7;
        break;
      }
      v9 = v6 & 7;
      if ( v9 != 5 )
        break;
LABEL_23:
      if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v16) & 1) == 0 )
        return 0;
      v14 = *((_DWORD *)this + 6);
      *((_DWORD *)this + 5) = v16;
      *((_DWORD *)this + 6) = v14 | 4;
      if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
      {
        result = 1;
        *((_DWORD *)a2 + 8) = 0;
        *((_BYTE *)a2 + 36) = 1;
        return result;
      }
    }
LABEL_28:
    if ( v9 == 4 )
      return 1;
    if ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v6, a3) & 1) == 0 )
      return 0;
  }
}


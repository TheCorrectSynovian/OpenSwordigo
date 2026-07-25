/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CDEC4
 * Mangled: _ZN5Caver5Proto8DateTime27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::DateTime::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F5270  Caver::Proto::DateTime::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000001FF400  google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(ulong *)
 *
 * Referenced strings: 25
 *   insn=0x00000000002CDED4 string=0x00000000002CDED8 "U"
 *   insn=0x00000000002CDEE8 string=0x00000000002CDEEC "h"
 *   insn=0x00000000002CDEF0 string=0x00000000002CDEF4 """
 *   insn=0x00000000002CDEF4 string=0x00000000002CDEF8 "\t"
 *   insn=0x00000000002CDEFC string=0x00000000002CDF00 "!"
 *   insn=0x00000000002CDF00 string=0x00000000002CDF04 ""
 *   insn=0x00000000002CDF04 string=0x00000000002CDF08 "a""
 *   insn=0x00000000002CDF08 string=0x00000000002CDF0C "h"
 *   insn=0x00000000002CDF0C string=0x00000000002CDF10 "?$"
 *   insn=0x00000000002CDF18 string=0x00000000002CDF1C "("
 *   insn=0x00000000002CDF28 string=0x00000000002CDF2C "i"
 *   insn=0x00000000002CDF2C string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002CDF30 string=0x00000000002CDF34 ""
 *   insn=0x00000000002CDF3C string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002CDF40 string=0x00000000002CDF44 "a""
 *   insn=0x00000000002CDF44 string=0x00000000002CDF48 "?$"
 *   insn=0x00000000002CDF48 string=0x00000000002CDF4C "a"
 *   insn=0x00000000002CDF54 string=0x00000000002CDF58 "*"
 *   insn=0x00000000002CDF58 string=0x00000000002CDF5C " "
 *   insn=0x00000000002CDF68 string=0x00000000002CDF6C "("
 *   insn=0x00000000002CDF70 string=0x00000000002CDF74 "h"
 *   insn=0x00000000002CDF7C string=0x00000000002CDF80 "h.@"
 *   insn=0x00000000002CDF80 string=0x00000000002CDF84 "H"
 *   insn=0x00000000002CDF8C string=0x00000000002CDF90 "`"
 *   insn=0x00000000002CDFC8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DateTime::MergePartialFromCodedStream(
        Caver::Proto::DateTime *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  unsigned __int8 *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w9
  __int64 result; // x0
  unsigned __int64 v10[2]; // [xsp+0h] [xbp-30h] BYREF

  v10[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  do
  {
    while ( 1 )
    {
      v5 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
      if ( (unsigned __int64)v5 < *((_QWORD *)a2 + 2) && ((char)*v5 & 0x80000000) == 0 )
        break;
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v6 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( TagFallback != 9 )
        goto LABEL_5;
LABEL_10:
      if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(a2, v10) & 1) == 0 )
        return 0;
      v8 = *((_DWORD *)this + 6);
      *((_QWORD *)this + 2) = v10[0];
      *((_DWORD *)this + 6) = v8 | 1;
      if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
      {
        result = 1;
        *((_DWORD *)a2 + 8) = 0;
        *((_BYTE *)a2 + 36) = 1;
        return result;
      }
    }
    v6 = *v5;
    *((_DWORD *)a2 + 8) = v6;
    *((_QWORD *)a2 + 1) = v5 + 1;
    if ( (_DWORD)v6 == 9 )
      goto LABEL_10;
LABEL_5:
    if ( !(_DWORD)v6 || (v6 & 7) == 4 )
      return 1;
  }
  while ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v6, a3)
         & 1) != 0 );
  return 0;
}


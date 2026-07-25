/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E2900
 * Mangled: _ZN6google8protobuf8internal14WireFormatLite9SkipFieldEPNS0_2io16CodedInputStreamEj
 * Demangled: google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Callers: 2
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000004E2900  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F8840  google::protobuf::io::CodedInputStream::Skip(int)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FF400  google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(ulong *)
 *   0x0000000000203580  google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *)
 *
 * Referenced strings: 49
 *   insn=0x00000000004E2910 string=0x00000000004E2914 "U"
 *   insn=0x00000000004E2938 string=0x00000000004E2940 "(y"
 *   insn=0x00000000004E2940 string=0x00000000004E2944 ""
 *   insn=0x00000000004E2948 string=0x00000000004E294C "h"
 *   insn=0x00000000004E2948 string=0x00000000004E2974 "h"
 *   insn=0x00000000004E2948 string=0x00000000004E29AC "h&G)\n"
 *   insn=0x00000000004E2954 string=0x00000000004E2958 "\t"
 *   insn=0x00000000004E295C string=0x00000000004E2960 ")"
 *   insn=0x00000000004E2960 string=0x00000000004E2964 ""
 *   insn=0x00000000004E2968 string=0x00000000004E296C "h"
 *   insn=0x00000000004E296C string=0x00000000004E2970 ";"
 *   insn=0x00000000004E297C string=0x00000000004E2980 "\t"
 *   insn=0x00000000004E2980 string=0x00000000004E2984 "I"
 *   insn=0x00000000004E2984 string=0x00000000004E2988 "!"
 *   insn=0x00000000004E2988 string=0x00000000004E298C ""
 *   insn=0x00000000004E2990 string=0x00000000004E2994 "h"
 *   insn=0x00000000004E2994 string=0x00000000004E2998 "*"
 *   insn=0x00000000004E29A4 string=0x00000000004E29A8 "0"
 *   insn=0x00000000004E29AC string=0x00000000004E29B0 "\n"
 *   insn=0x00000000004E29B4 string=0x00000000004E29B8 "j:"
 *   insn=0x00000000004E29B8 string=0x00000000004E29BC "J"
 *   insn=0x00000000004E29BC string=0x00000000004E29C0 "h"
 *   insn=0x00000000004E29C4 string=0x00000000004E29C8 """
 *   insn=0x00000000004E29C8 string=0x00000000004E29CC "\t"
 *   insn=0x00000000004E29D0 string=0x00000000004E29D4 "!"
 *   insn=0x00000000004E29D4 string=0x00000000004E29D8 ""
 *   insn=0x00000000004E29D8 string=0x00000000004E29DC "a""
 *   insn=0x00000000004E29DC string=0x00000000004E29E0 "h"
 *   insn=0x00000000004E29E4 string=0x00000000004E29E8 "*"
 *   insn=0x00000000004E29E4 string=0x00000000004E2A00 "("
 *   insn=0x00000000004E29E8 string=0x00000000004E2A90 "h:@"
 *   insn=0x00000000004E29F0 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000004E29F4 string=0x00000000004E29F8 "a""
 *   insn=0x00000000004E2A04 string=0x00000000004E2A08 "@"
 *   insn=0x00000000004E2A10 string=0x00000000004E2A14 "`"
 *   insn=0x00000000004E2A20 string=0x00000000004E2A24 "K_"
 *   insn=0x00000000004E2A24 string=0x00000000001FA750 "0'"
 *   insn=0x00000000004E2A34 string=0x00000000004E2A38 "`"
 *   insn=0x00000000004E2A34 string=0x00000000001F9050 "0'"
 *   insn=0x00000000004E2A44 string=0x00000000004E2A48 ""
 *   insn=0x00000000004E2A44 string=0x00000000001F8840 "0'"
 *   insn=0x00000000004E2A54 string=0x00000000004E2A58 "`"
 *   insn=0x00000000004E2A74 string=0x00000000004E2AB4 "N"
 *   insn=0x00000000004E2A90 string=0x00000000004E2A94 ""
 *   insn=0x00000000004E2A94 string=0x00000000004E2A98 "K"
 *   insn=0x00000000004E2A98 string=0x00000000004E2A9C "h:"
 *   insn=0x00000000004E2AA0 string=0x00000000004E2AA4 ""
 *   insn=0x00000000004E2AA4 string=0x00000000004E2AA8 "?"
 *   insn=0x00000000004E2AB4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::WireFormatLite::SkipField(
        google::protobuf::internal::WireFormatLite *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  int v3; // w20
  char LittleEndian64Fallback; // w0
  char *v6; // x8
  char *v7; // x8
  int v8; // w8
  int v9; // w9
  char *v10; // x8
  unsigned __int64 v11; // x1
  unsigned int TagFallback; // w0
  int v14; // w8
  bool v15; // vf
  int v16; // w8
  int v17[2]; // [xsp+0h] [xbp-30h] BYREF
  __int64 v18; // [xsp+8h] [xbp-28h]

  v3 = (int)a2;
  LittleEndian64Fallback = 0;
  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( (unsigned __int8)a2 & 7 )
  {
    case 0:
      v6 = (char *)*((_QWORD *)this + 1);
      if ( (unsigned __int64)v6 >= *((_QWORD *)this + 2) || *v6 < 0 )
      {
        if ( (google::protobuf::io::CodedInputStream::ReadVarint64Fallback(this, (unsigned __int64 *)v17) & 1) == 0 )
          goto LABEL_23;
      }
      else
      {
        *(_QWORD *)v17 = (unsigned __int8)*v6;
        *((_QWORD *)this + 1) = v6 + 1;
      }
      LittleEndian64Fallback = 1;
      break;
    case 1:
      LittleEndian64Fallback = google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(
                                 this,
                                 (unsigned __int64 *)v17);
      break;
    case 2:
      v7 = (char *)*((_QWORD *)this + 1);
      if ( (unsigned __int64)v7 >= *((_QWORD *)this + 2) || *v7 < 0 )
      {
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(this, (unsigned int *)v17) & 1) == 0 )
          goto LABEL_23;
      }
      else
      {
        v17[0] = (unsigned __int8)*v7;
        *((_QWORD *)this + 1) = v7 + 1;
      }
      google::protobuf::io::CodedInputStream::Skip(this);
      break;
    case 3:
      v8 = *((_DWORD *)this + 14);
      v9 = *((_DWORD *)this + 15);
      *((_DWORD *)this + 14) = v8 + 1;
      if ( v8 >= v9 )
      {
LABEL_23:
        LittleEndian64Fallback = 0;
      }
      else
      {
        while ( 1 )
        {
          v10 = (char *)*((_QWORD *)this + 1);
          if ( (unsigned __int64)v10 >= *((_QWORD *)this + 2) || *v10 < 0 )
          {
            TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(this);
            v11 = TagFallback;
            *((_DWORD *)this + 8) = TagFallback;
            if ( !TagFallback )
              break;
          }
          else
          {
            v11 = (unsigned __int8)*v10;
            *((_DWORD *)this + 8) = v11;
            *((_QWORD *)this + 1) = v10 + 1;
            if ( !(_DWORD)v11 )
              break;
          }
          if ( (v11 & 7) == 4 )
            break;
          if ( (google::protobuf::internal::WireFormatLite::SkipField(
                  this,
                  (google::protobuf::io::CodedInputStream *)v11,
                  a3)
              & 1) == 0 )
            goto LABEL_23;
        }
        v14 = *((_DWORD *)this + 14);
        v15 = __OFSUB__(v14, 1);
        v16 = v14 - 1;
        if ( v16 < 0 == v15 )
          *((_DWORD *)this + 14) = v16;
        LittleEndian64Fallback = (_DWORD)v11 == (v3 & 0xFFFFFFF8 | 4);
      }
      break;
    case 5:
      LittleEndian64Fallback = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(
                                 this,
                                 (unsigned int *)v17);
      break;
    default:
      return LittleEndian64Fallback & 1;
  }
  return LittleEndian64Fallback & 1;
}


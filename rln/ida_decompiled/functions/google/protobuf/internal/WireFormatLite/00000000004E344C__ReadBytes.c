/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E344C
 * Mangled: _ZN6google8protobuf8internal14WireFormatLite9ReadBytesEPNS0_2io16CodedInputStreamEPSs
 * Demangled: google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *)
 *
 * Callers: 1
 *   0x00000000001FC6E0  google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F9BF0  google::protobuf::io::CodedInputStream::ReadStringFallback(std::string *,int)
 *   0x0000000000201760  .memcpy
 *   0x0000000000568EA8  sub_568EA8
 *   0x0000000000569650  sub_569650
 *
 * Referenced strings: 29
 *   insn=0x00000000004E345C string=0x00000000004E3460 "V"
 *   insn=0x00000000004E3470 string=0x00000000004E3474 "i"
 *   insn=0x00000000004E3474 string=0x00000000004E3478 "?"
 *   insn=0x00000000004E347C string=0x00000000004E3480 "*"
 *   insn=0x00000000004E3484 string=0x00000000004E3488 "B"
 *   insn=0x00000000004E3488 string=0x00000000004E348C ")"
 *   insn=0x00000000004E3490 string=0x00000000004E3494 "i"
 *   insn=0x00000000004E3494 string=0x00000000004E3498 ""
 *   insn=0x00000000004E3498 string=0x00000000004E349C "_"
 *   insn=0x00000000004E34A0 string=0x00000000004E34D4 "U|@"
 *   insn=0x00000000004E34AC string=0x00000000004E34B0 "!"
 *   insn=0x00000000004E34AC string=0x00000000001F9BF0 "0'"
 *   insn=0x00000000004E34BC string=0x00000000004E34C0 "`"
 *   insn=0x00000000004E34BC string=0x00000000001F9050 "0'"
 *   insn=0x00000000004E34C4 string=0x00000000004E34C8 """
 *   insn=0x00000000004E34C8 string=0x00000000004E34CC "i"
 *   insn=0x00000000004E34E0 string=0x00000000004E34E4 "["
 *   insn=0x00000000004E34E8 string=0x00000000004E34EC ""
 *   insn=0x00000000004E34EC string=0x00000000004E34F0 "("
 *   insn=0x00000000004E34F0 string=0x00000000004E34F4 ""
 *   insn=0x00000000004E34F4 string=0x00000000004E34F8 ""
 *   insn=0x00000000004E34F8 string=0x00000000004E3518 "a"
 *   insn=0x00000000004E34FC string=0x00000000004E3500 "j"
 *   insn=0x00000000004E350C string=0x00000000004E3510 "\t"
 *   insn=0x00000000004E3520 string=0x00000000004E3524 "h"
 *   insn=0x00000000004E3528 string=0x00000000004E352C ""
 *   insn=0x00000000004E352C string=0x00000000004E3530 "h"
 *   insn=0x00000000004E3540 string=0x00000000004E355C "]K"
 *   insn=0x00000000004E355C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::WireFormatLite::ReadBytes(
        google::protobuf::io::CodedInputStream *this,
        void **a2)
{
  unsigned __int64 v4; // x8
  char *v5; // x9
  int v6; // w10
  signed int v7; // w2
  unsigned __int8 *v8; // x9
  char StringFallback; // w0
  size_t v10; // x21
  _DWORD *v11; // x0
  unsigned int v13; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v14; // [xsp+8h] [xbp-28h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = (char *)*((_QWORD *)this + 1);
  v4 = *((_QWORD *)this + 2);
  if ( (unsigned __int64)v5 >= v4 || (v6 = *v5, v6 < 0) )
  {
    if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(this, &v13) & 1) == 0
      || (v7 = v13, (v13 & 0x80000000) != 0) )
    {
      StringFallback = 0;
      return StringFallback & 1;
    }
    v8 = (unsigned __int8 *)*((_QWORD *)this + 1);
    v4 = *((_QWORD *)this + 2);
  }
  else
  {
    v7 = (unsigned __int8)*v5;
    v8 = (unsigned __int8 *)(v5 + 1);
    v13 = (unsigned __int8)v6;
    *((_QWORD *)this + 1) = v8;
  }
  if ( v7 <= (int)v4 - (int)v8 )
  {
    v10 = v7;
    sub_569650(a2, v7, 0);
    v11 = *a2;
    if ( *((_QWORD *)*a2 - 3) )
    {
      if ( (*(v11 - 2) & 0x80000000) == 0 )
      {
        sub_568EA8(a2);
        v11 = *a2;
      }
    }
    else
    {
      v11 = 0;
    }
    memcpy(v11, *((const void **)this + 1), v10);
    StringFallback = 1;
    *((_QWORD *)this + 1) += v10;
  }
  else
  {
    StringFallback = google::protobuf::io::CodedInputStream::ReadStringFallback(this);
  }
  return StringFallback & 1;
}


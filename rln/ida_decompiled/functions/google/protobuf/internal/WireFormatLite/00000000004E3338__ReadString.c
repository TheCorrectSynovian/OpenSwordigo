/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E3338
 * Mangled: _ZN6google8protobuf8internal14WireFormatLite10ReadStringEPNS0_2io16CodedInputStreamEPSs
 * Demangled: google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *
 * Callers: 1
 *   0x00000000001F97D0  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001F9BF0  google::protobuf::io::CodedInputStream::ReadStringFallback(std::string *,int)
 *   0x0000000000201760  .memcpy
 *   0x0000000000568EA8  sub_568EA8
 *   0x0000000000569650  sub_569650
 *
 * Referenced strings: 25
 *   insn=0x00000000004E3348 string=0x00000000004E334C "V"
 *   insn=0x00000000004E335C string=0x00000000004E3360 "i"
 *   insn=0x00000000004E3360 string=0x00000000004E3364 "?"
 *   insn=0x00000000004E3368 string=0x00000000004E336C "*"
 *   insn=0x00000000004E3370 string=0x00000000004E3374 "B"
 *   insn=0x00000000004E3374 string=0x00000000004E3378 ")"
 *   insn=0x00000000004E337C string=0x00000000004E3380 "i"
 *   insn=0x00000000004E3380 string=0x00000000004E3384 ""
 *   insn=0x00000000004E3384 string=0x00000000004E3388 "_"
 *   insn=0x00000000004E3388 string=0x00000000004E338C ""
 *   insn=0x00000000004E338C string=0x00000000004E33CC "U|@"
 *   insn=0x00000000004E3398 string=0x00000000004E339C "@"
 *   insn=0x00000000004E3398 string=0x00000000001F9BF0 "0'"
 *   insn=0x00000000004E339C string=0x00000000004E33A0 " "
 *   insn=0x00000000004E33A8 string=0x00000000004E33AC ")W"
 *   insn=0x00000000004E33AC string=0x00000000001F9050 "0'"
 *   insn=0x00000000004E33B4 string=0x00000000004E33B8 "b"
 *   insn=0x00000000004E33B8 string=0x00000000004E33BC "i"
 *   insn=0x00000000004E33E0 string=0x00000000004E33E4 ""
 *   insn=0x00000000004E33E8 string=0x00000000004E33EC ""
 *   insn=0x00000000004E33F0 string=0x00000000004E3408 "a"
 *   insn=0x00000000004E3410 string=0x00000000004E3414 "h"
 *   insn=0x00000000004E3414 string=0x00000000004E3418 ""
 *   insn=0x00000000004E3418 string=0x00000000004E341C "h"
 *   insn=0x00000000004E3448 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall google::protobuf::internal::WireFormatLite::ReadString(
        google::protobuf::io::CodedInputStream *this,
        void **a2)
{
  unsigned __int64 v4; // x8
  char *v5; // x9
  int v6; // w10
  signed int v7; // w2
  unsigned __int8 *v8; // x9
  size_t v10; // x21
  _DWORD *v11; // x0
  unsigned int v12; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v13; // [xsp+8h] [xbp-28h]

  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = (char *)*((_QWORD *)this + 1);
  v4 = *((_QWORD *)this + 2);
  if ( (unsigned __int64)v5 >= v4 || (v6 = *v5, v6 < 0) )
  {
    if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(this, &v12) & 1) == 0 )
      return 0;
    v7 = v12;
    if ( (v12 & 0x80000000) != 0 )
      return 0;
    v8 = (unsigned __int8 *)*((_QWORD *)this + 1);
    v4 = *((_QWORD *)this + 2);
  }
  else
  {
    v7 = (unsigned __int8)*v5;
    v8 = (unsigned __int8 *)(v5 + 1);
    v12 = (unsigned __int8)v6;
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
    *((_QWORD *)this + 1) += v10;
    return 1;
  }
  return (google::protobuf::io::CodedInputStream::ReadStringFallback(this) & 1) != 0;
}


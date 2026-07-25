/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E46F4
 * Mangled: _ZN6google8protobuf2io17CodedOutputStream7RefreshEv
 * Demangled: google::protobuf::io::CodedOutputStream::Refresh(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 10
 *   insn=0x00000000004E4700 string=0x00000000004E4704 "T"
 *   insn=0x00000000004E4718 string=0x00000000004E471C "@"
 *   insn=0x00000000004E471C string=0x00000000004E4720 ""
 *   insn=0x00000000004E4720 string=0x00000000004E4724 "\t@"
 *   insn=0x00000000004E4730 string=0x00000000004E4734 "i*B)"
 *   insn=0x00000000004E4738 string=0x00000000004E473C "h"
 *   insn=0x00000000004E473C string=0x00000000004E4740 "H"
 *   insn=0x00000000004E4740 string=0x00000000004E4744 "h"
 *   insn=0x00000000004E4758 string=0x00000000004E475C "hb"
 *   insn=0x00000000004E4780 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedOutputStream::Refresh(google::protobuf::io::CodedOutputStream *this)
{
  int v2; // w9
  int v3; // w10
  __int64 result; // x0
  _QWORD v5[2]; // [xsp+0h] [xbp-20h] BYREF

  v5[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(**(_QWORD **)this + 16LL))(
          *(_QWORD *)this,
          v5,
          (char *)this + 16)
      & 1) != 0 )
  {
    v2 = *((_DWORD *)this + 4);
    v3 = *((_DWORD *)this + 5);
    result = 1;
    *((_QWORD *)this + 1) = v5[0];
    *((_DWORD *)this + 5) = v3 + v2;
  }
  else
  {
    result = 0;
    *((_QWORD *)this + 1) = 0;
    *((_DWORD *)this + 4) = 0;
    *((_BYTE *)this + 24) = 1;
  }
  return result;
}


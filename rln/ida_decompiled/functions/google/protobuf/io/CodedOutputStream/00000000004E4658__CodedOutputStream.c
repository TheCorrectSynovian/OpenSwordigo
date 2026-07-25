/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E4658
 * Mangled: _ZN6google8protobuf2io17CodedOutputStreamC2EPNS1_20ZeroCopyOutputStreamE
 * Demangled: google::protobuf::io::CodedOutputStream::CodedOutputStream(google::protobuf::io::ZeroCopyOutputStream *)
 *
 * Callers: 1
 *   0x00000000001FD9F0  google::protobuf::io::CodedOutputStream::CodedOutputStream(google::protobuf::io::ZeroCopyOutputStream *)
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 12
 *   insn=0x00000000004E4664 string=0x00000000004E4668 "T"
 *   insn=0x00000000004E467C string=0x00000000004E4680 "h~"
 *   insn=0x00000000004E4684 string=0x00000000004E4688 "_"
 *   insn=0x00000000004E4688 string=0x00000000004E468C "\t"
 *   insn=0x00000000004E4694 string=0x00000000004E4698 ")\t@"
 *   insn=0x00000000004E4698 string=0x00000000004E469C " "
 *   insn=0x00000000004E46A4 string=0x00000000004E46A8 "i*B)h"
 *   insn=0x00000000004E46A8 string=0x00000000004E46AC "h"
 *   insn=0x00000000004E46AC string=0x00000000004E46B0 "H"
 *   insn=0x00000000004E46B0 string=0x00000000004E46B4 "h"
 *   insn=0x00000000004E46C4 string=0x00000000004E46C8 "hb"
 *   insn=0x00000000004E46F0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedOutputStream::CodedOutputStream(
        google::protobuf::io::CodedOutputStream *this,
        google::protobuf::io::ZeroCopyOutputStream *a2)
{
  __int64 result; // x0
  int v4; // w9
  int v5; // w10
  _QWORD v6[2]; // [xsp+0h] [xbp-20h] BYREF

  v6[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = 0;
  *((_BYTE *)this + 24) = 0;
  *((_QWORD *)this + 2) = 0;
  result = (*(__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *, _QWORD *, char *))(*(_QWORD *)a2 + 16LL))(
             a2,
             v6,
             (char *)this + 16);
  if ( (result & 1) != 0 )
  {
    v4 = *((_DWORD *)this + 4);
    v5 = *((_DWORD *)this + 5);
    *((_QWORD *)this + 1) = v6[0];
    *((_DWORD *)this + 5) = v5 + v4;
  }
  else
  {
    *((_QWORD *)this + 1) = 0;
    *((_DWORD *)this + 4) = 0;
    *((_BYTE *)this + 24) = 1;
  }
  *((_BYTE *)this + 24) = 0;
  return result;
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033D504
 * Mangled: _ZNK5Caver5Proto12UnpackedMesh8ByteSizeEv
 * Demangled: Caver::Proto::UnpackedMesh::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 18
 *   insn=0x000000000033D510 string=0x000000000033D514 "h"
 *   insn=0x000000000033D514 string=0x000000000033D518 "h"
 *   insn=0x000000000033D518 string=0x000000000033D524 "t:@"
 *   insn=0x000000000033D520 string=0x000000000033D55C "i"
 *   insn=0x000000000033D528 string=0x000000000033D52C ""
 *   insn=0x000000000033D530 string=0x000000000033D534 "b"
 *   insn=0x000000000033D53C string=0x000000000033D554 "("
 *   insn=0x000000000033D540 string=0x000000000033D544 "#"
 *   insn=0x000000000033D544 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000033D54C string=0x000000000033D550 ""
 *   insn=0x000000000033D554 string=0x000000000033D558 ""
 *   insn=0x000000000033D55C string=0x000000000033D560 "j:@"
 *   insn=0x000000000033D560 string=0x000000000033D564 "kZ@"
 *   insn=0x000000000033D564 string=0x000000000033D568 "I"
 *   insn=0x000000000033D568 string=0x000000000033D56C ")"
 *   insn=0x000000000033D56C string=0x000000000033D570 ")\t\t "
 *   insn=0x000000000033D570 string=0x000000000033D574 " "
 *   insn=0x000000000033D574 string=0x000000000033D578 "`\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::UnpackedMesh::ByteSize(Caver::Proto::UnpackedMesh *this, unsigned int a2)
{
  int v3; // w8
  _QWORD *v4; // x20
  __int64 v5; // x8
  int v6; // w9
  __int64 result; // x0

  if ( (*((_BYTE *)this + 120) & 8) != 0 )
  {
    v4 = (_QWORD *)*((_QWORD *)this + 14);
    v5 = *(_QWORD *)(*v4 - 24LL);
    if ( (unsigned int)v5 >= 0x80 )
    {
      v6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
             (google::protobuf::io::CodedOutputStream *)(unsigned int)v5,
             a2);
      v5 = *(_QWORD *)(*v4 - 24LL);
    }
    else
    {
      v6 = 1;
    }
    v3 = v6 + v5 + 1;
  }
  else
  {
    v3 = 0;
  }
  result = (unsigned int)(5 * (*((_DWORD *)this + 14) + *((_DWORD *)this + 6) + *((_DWORD *)this + 22)) + v3);
  *((_DWORD *)this + 2) = result;
  return result;
}


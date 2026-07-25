/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E57B4
 * Mangled: _ZN6google8protobuf2io17ArrayOutputStream4NextEPPvPi
 * Demangled: google::protobuf::io::ArrayOutputStream::Next(void **,int *)
 *
 * Callers: 1
 *   0x00000000004E577C  google::protobuf::io::ArrayOutputStream::~ArrayOutputStream()
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000004E57B4 string=0x00000000004E57B8 "\t"
 *   insn=0x00000000004E57B8 string=0x00000000004E57BC "?"
 *   insn=0x00000000004E57BC string=0x00000000004E57C0 ""
 *   insn=0x00000000004E57C0 string=0x00000000004E57C4 "\n"
 *   insn=0x00000000004E57C4 string=0x00000000004E57C8 ""
 *   insn=0x00000000004E57C8 string=0x00000000004E57CC ")"
 *   insn=0x00000000004E57CC string=0x00000000004E57D0 "?"
 *   insn=0x00000000004E57D0 string=0x00000000004E57D4 "h"
 *   insn=0x00000000004E57D4 string=0x00000000004E57D8 ")"
 *   insn=0x00000000004E57D8 string=0x00000000004E57DC "\t"
 *   insn=0x00000000004E57DC string=0x00000000004E57E0 "("
 *   insn=0x00000000004E57E0 string=0x00000000004E57E4 "I"
 *   insn=0x00000000004E57E4 string=0x00000000004E57E8 "$C)"
 *   insn=0x00000000004E57E8 string=0x00000000004E57EC ""
 *   insn=0x00000000004E57EC string=0x00000000004E57F0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::ArrayOutputStream::Next(
        google::protobuf::io::ArrayOutputStream *this,
        void **a2,
        int *a3)
{
  __int64 v3; // x8
  int v4; // w9
  int v5; // w9
  void *v6; // x8

  v3 = *((int *)this + 6);
  v4 = *((_DWORD *)this + 4);
  if ( v4 <= (int)v3 )
  {
    *((_DWORD *)this + 7) = 0;
    return 0;
  }
  else
  {
    v5 = v4 - v3;
    v6 = (void *)(*((_QWORD *)this + 1) + v3);
    if ( v5 >= *((_DWORD *)this + 5) )
      v5 = *((_DWORD *)this + 5);
    *((_DWORD *)this + 7) = v5;
    *a2 = v6;
    *a3 = v5;
    *((_DWORD *)this + 6) += *((_DWORD *)this + 7);
    return 1;
  }
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E54A8
 * Mangled: _ZN6google8protobuf2io16ArrayInputStream4NextEPPKvPi
 * Demangled: google::protobuf::io::ArrayInputStream::Next(void const**,int *)
 *
 * Callers: 1
 *   0x00000000004E5470  google::protobuf::io::ArrayInputStream::~ArrayInputStream()
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000004E54A8 string=0x00000000004E54AC "\t"
 *   insn=0x00000000004E54AC string=0x00000000004E54B0 "?"
 *   insn=0x00000000004E54B0 string=0x00000000004E54B4 ""
 *   insn=0x00000000004E54B4 string=0x00000000004E54B8 "\n"
 *   insn=0x00000000004E54B8 string=0x00000000004E54BC ""
 *   insn=0x00000000004E54BC string=0x00000000004E54C0 ")"
 *   insn=0x00000000004E54C0 string=0x00000000004E54C4 "?"
 *   insn=0x00000000004E54C4 string=0x00000000004E54C8 "h"
 *   insn=0x00000000004E54C8 string=0x00000000004E54CC ")"
 *   insn=0x00000000004E54CC string=0x00000000004E54D0 "\t"
 *   insn=0x00000000004E54D0 string=0x00000000004E54D4 "("
 *   insn=0x00000000004E54D4 string=0x00000000004E54D8 "I"
 *   insn=0x00000000004E54D8 string=0x00000000004E54DC "$C)"
 *   insn=0x00000000004E54DC string=0x00000000004E54E0 ""
 *   insn=0x00000000004E54E0 string=0x00000000004E54E4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::ArrayInputStream::Next(
        google::protobuf::io::ArrayInputStream *this,
        const void **a2,
        int *a3)
{
  __int64 v3; // x8
  int v4; // w9
  int v5; // w9
  const void *v6; // x8

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
    v6 = (const void *)(*((_QWORD *)this + 1) + v3);
    if ( v5 >= *((_DWORD *)this + 5) )
      v5 = *((_DWORD *)this + 5);
    *((_DWORD *)this + 7) = v5;
    *a2 = v6;
    *a3 = v5;
    *((_DWORD *)this + 6) += *((_DWORD *)this + 7);
    return 1;
  }
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000275948
 * Mangled: _ZN5Caver17ItemDropComponentC2Ev
 * Demangled: Caver::ItemDropComponent::ItemDropComponent(void)
 *
 * Callers: 1
 *   0x0000000000201A30  Caver::ItemDropComponent::ItemDropComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x0000000000275950 string=0x0000000000275954 ""
 *   insn=0x0000000000275958 string=0x000000000027595C "J1@"
 *   insn=0x0000000000275960 string=0x0000000000275964 "a"
 *   insn=0x0000000000275968 string=0x000000000027596C ""
 *   insn=0x0000000000275970 string=0x0000000000275974 "H"
 *   insn=0x0000000000275974 string=0x0000000000275978 "KA"
 *   insn=0x0000000000275978 string=0x000000000027597C " "
 *   insn=0x0000000000275984 string=0x0000000000275988 "J"
 *   insn=0x000000000027598C string=0x0000000000275990 "A"
 *   insn=0x0000000000275990 string=0x0000000000275994 ""
 *   insn=0x0000000000275994 string=0x0000000000275998 "\t|"
 *   insn=0x0000000000275998 string=0x000000000027599C ""
 *   insn=0x00000000002759A4 string=0x00000000002759A8 "\t,"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::ItemDropComponent::ItemDropComponent(Caver::ItemDropComponent *this)
{
  long double result; // q0
  __int128 v2; // q1

  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 48) = 0;
  *(_OWORD *)&result = 0u;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *(_OWORD *)((char *)this + 72) = 0u;
  *(int64x2_t *)((char *)this + 120) = vdupq_n_s64((unsigned __int64)&byte_6FD2F8);
  *(_QWORD *)&v2 = &off_6BF528;
  *((_QWORD *)&v2 + 1) = &off_6BF568;
  *(_QWORD *)this = off_6BF410;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0;
  *((_WORD *)this + 56) = 1;
  *((_QWORD *)this + 21) = 0;
  *(_OWORD *)((char *)this + 152) = 0u;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_OWORD *)this + 1) = v2;
  *((_OWORD *)this + 2) = 0u;
  *(_OWORD *)((char *)this + 136) = 0u;
  return result;
}


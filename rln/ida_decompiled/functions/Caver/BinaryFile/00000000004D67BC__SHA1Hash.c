/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D67BC
 * Mangled: _ZN5Caver10BinaryFile8SHA1HashEv
 * Demangled: Caver::BinaryFile::SHA1Hash(void)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5B40  .fread
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FBFD0  Caver::SHA1HashForBytes(uchar const*,ulong)
 *   0x0000000000201980  .gzread
 *   0x00000000004D6868  google::protobuf::internal::VerifyVersion(int,int,char const*)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x00000000004D67D8 string=0x00000000004D67DC "`"
 *   insn=0x00000000004D67DC string=0x00000000004D67E0 "d"
 *   insn=0x00000000004D67E0 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004D67EC string=0x00000000004D67F0 "`"
 *   insn=0x00000000004D6808 string=0x00000000004D680C "]"
 *   insn=0x00000000004D680C string=0x00000000004D6810 ""
 *   insn=0x00000000004D682C string=0x00000000001F5B40 "P'"
 *   insn=0x00000000004D683C string=0x00000000001FBFD0 "0'"
 *   insn=0x00000000004D6850 string=0x00000000001F4F60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BinaryFile::SHA1Hash(Caver::BinaryFile *this)
{
  signed __int64 v2; // x19
  unsigned __int64 v3; // x0
  Caver *v4; // x0
  Caver *v5; // x21
  unsigned __int64 v6; // x2
  FILE *v7; // x3

  v2 = *((int *)this + 4);
  if ( v2 < 0 )
    v3 = -1;
  else
    v3 = *((int *)this + 4);
  v4 = (Caver *)operator new[](v3);
  v5 = v4;
  if ( *(_DWORD *)this == 1 )
  {
    v7 = (FILE *)*((_QWORD *)this + 1);
    goto LABEL_10;
  }
  if ( *(_DWORD *)this != 2 || !*((_QWORD *)this + 1) )
  {
    v7 = 0;
LABEL_10:
    fread(v4, 1u, v2, v7);
    goto LABEL_11;
  }
  gzread();
LABEL_11:
  Caver::SHA1HashForBytes(v5, (const unsigned __int8 *)v2, v6);
  operator delete[](v5);
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000450E84
 * Mangled: _ZNK5Caver8Skeleton16BoneIndexForNameERKSs
 * Demangled: Caver::Skeleton::BoneIndexForName(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FC550  Caver::Skeleton::BoneIndexForName(std::string const&)
 *
 * Callees: 1
 *   0x00000000001F5190  .memcmp
 *
 * Referenced strings: 5
 *   insn=0x0000000000450E9C string=0x0000000000450EA0 "+"
 *   insn=0x0000000000450EA0 string=0x0000000000450EA4 "4"
 *   insn=0x0000000000450EB4 string=0x0000000000450EB8 "("
 *   insn=0x0000000000450EC0 string=0x0000000000450ED4 "s"
 *   insn=0x0000000000450ECC string=0x00000000001F5190 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Skeleton::BoneIndexForName(int *a1, const void **a2)
{
  __int64 v2; // x22
  const void *v3; // x20
  const void **v4; // x23
  __int64 v5; // x19
  size_t v6; // x21

  v2 = *a1;
  if ( (int)v2 < 1 )
  {
LABEL_6:
    LODWORD(v5) = -1;
  }
  else
  {
    v3 = *a2;
    v4 = (const void **)*((_QWORD *)a1 + 1);
    v5 = 0;
    v6 = *((_QWORD *)*a2 - 3);
    while ( v6 != *((_QWORD *)*v4 - 3) || memcmp(v3, *v4, v6) )
    {
      ++v5;
      v4 += 18;
      if ( v5 >= v2 )
        goto LABEL_6;
    }
  }
  return (unsigned int)v5;
}

